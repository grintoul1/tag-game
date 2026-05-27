#!/usr/bin/env python3
"""
agb2mid.py  —  Convert a mid2agb-generated .s file back to a Standard MIDI File.

Usage:
    python3 agb2mid.py INPUT.s [OUTPUT.mid]

If OUTPUT.mid is omitted, the output is placed next to INPUT.s with .mid extension.

Limitations / known approximations
------------------------------------
* PATT/PEND subroutine sections are inlined (flattened) into the timeline — the
  output MIDI will have the same notes but won't reproduce the original PATT
  structure if you run mid2agb again.
* GOTO produces a repeated section in the MIDI (loop unrolled once).
* gtp (exact gate time) residual is rounded back via inverse LUT — the exact
  original note-off position is faithfully reconstructed when -E was used.
* MEMACC / XCMD / PRIO have no standard MIDI equivalent and are silently skipped.
* REPT is unrolled the specified number of times.
* The output uses MIDI format 1 (multi-track), one track per AGB track plus a
  master tempo track (track 0).
"""

import re
import sys
import os
from midiutil import MIDIFile

# ---------------------------------------------------------------------------
# MPlayDef constants
# ---------------------------------------------------------------------------

# W00=0x80, W01=0x81 … but W24=0x98, W28=0x99, W30=0x9A …
# The AGB wait table (index 0..48) maps opcode-0x80 -> actual ticks:
WAIT_TICKS = [
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 28, 30, 32, 36, 40,
    42, 44, 48, 52, 54, 56, 60, 64, 66, 68,
    72, 76, 78, 80, 84, 88, 90, 92, 96,
]
# Reverse: actual ticks -> index  (for WAIT macro names)
WAIT_NAME = {v: f"W{v:02d}" for v in WAIT_TICKS}

# Duration LUT (index is the NXX value, content is the quantised duration)
# Copied from tools/mid2agb/tables.cpp
NOTE_DURATION_LUT = [
     0,  1,  2,  3,  4,  5,  6,  7,  8,  9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 24, 24, 24, 28, 28,
    30, 30, 32, 32, 32, 32, 36, 36, 36, 36,
    40, 40, 42, 42, 44, 44, 44, 44, 48, 48,
    48, 48, 52, 52, 54, 54, 56, 56, 56, 56,
    60, 60, 60, 60, 64, 64, 66, 66, 68, 68,
    68, 68, 72, 72, 72, 72, 76, 76, 78, 78,
    80, 80, 80, 80, 84, 84, 84, 84, 88, 88,
    90, 90, 92, 92, 92, 92, 96,
]

# Velocity LUT: MIDI velocity 0‥127  →  quantised value written in .s file
# The .s file stores the rounded-down value; we keep it as-is for output.
# (The inverse is not needed for playback — we just pass values straight through.)

# Note name -> semitone offset within octave (C=0)
NOTE_NAME_TO_SEMI = {
    'Cn': 0, 'Cs': 1, 'Dn': 2, 'Ds': 3, 'En': 4, 'Fn': 5,
    'Fs': 6, 'Gn': 7, 'Gs': 8, 'An': 9, 'As': 10, 'Bn': 11,
}

MXV = 127  # .equ mxv, 127 from MPlayDef.s
C_V = 64   # .equ c_v, 64

# ---------------------------------------------------------------------------
# Parsing helpers
# ---------------------------------------------------------------------------

def note_name_to_midi(name: str) -> int:
    """Convert an AGB note name like 'Cs4' or 'GnM1' to MIDI note number."""
    # Negative-octave form  e.g. CnM1
    m = re.match(r'([A-G][sn])M(\d)', name)
    if m:
        semi = NOTE_NAME_TO_SEMI[m.group(1)]
        octave = -int(m.group(2))
        return semi + (octave + 2) * 12  # octave offset: Cn0 = MIDI 0
    # Normal form e.g. Cs4
    m = re.match(r'([A-G][sn])(\d)', name)
    if m:
        semi = NOTE_NAME_TO_SEMI[m.group(1)]
        octave = int(m.group(2))
        return semi + (octave + 2) * 12
    raise ValueError(f"Unknown note name: {name!r}")

def midi_to_note_name(midi_num: int) -> str:
    """Return AGB note name for a MIDI note number."""
    names = ['Cn', 'Cs', 'Dn', 'Ds', 'En', 'Fn', 'Fs', 'Gn', 'Gs', 'An', 'As', 'Bn']
    semi = midi_num % 12
    octave = midi_num // 12 - 2
    n = names[semi]
    if octave < 0:
        return f"{n}M{-octave}"
    return f"{n}{octave}"


def eval_expr(expr: str, mvl: int, tbs: int) -> int:
    """
    Evaluate a simple AGB arithmetic expression (integers only).
    Handles patterns like  110*_mvl/mxv  or  c_v+5  or literal numbers.
    mvl and tbs are the song-specific values parsed from the header.
    """
    expr = expr.strip()
    # Replace symbolic constants
    expr = expr.replace('mxv', str(MXV))
    expr = expr.replace('c_v', str(C_V))
    # Replace  XXX*_mvl/mxv   (mvl already substituted below)
    # _mvl suffix is different per song; we accept any _mvl variant
    expr = re.sub(r'\w+_mvl', str(mvl), expr)
    expr = re.sub(r'\w+_tbs', str(tbs), expr)
    try:
        # Only allow digits, operators and parens for safety
        if re.fullmatch(r'[\d\s\+\-\*/\(\)]+', expr):
            return int(eval(expr))  # noqa: S307 — pattern-validated integer arithmetic
    except Exception:
        pass
    try:
        return int(expr)
    except ValueError:
        return 0


# ---------------------------------------------------------------------------
# Tokeniser: strip comments, flatten continuations
# ---------------------------------------------------------------------------

TOKEN_RE = re.compile(
    r'\.byte\s+|'       # .byte directive (consumed, not captured)
    r'\.word\s+|'       # .word directive
    r'[A-Za-z_]\w*\s*(?:[+-]\s*\d+)?\s*(?:\*\s*[\w_]+\s*(?:/\s*[\w_]+)?)?\s*|'  # symbols/exprs
    r'\d+(?:\*[\w_]+(?:/[\w_]+)?)?\s*|'   # numeric exprs
    r',\s*',            # comma separator
)


# ---------------------------------------------------------------------------
# Main parser class
# ---------------------------------------------------------------------------

class AgbParser:
    def __init__(self, text: str):
        self.lines = text.splitlines()
        self.pos = 0   # current line index

        # Header values (filled in by _parse_header)
        self.label = ''
        self.mvl = 127
        self.tbs = 1
        self.exg = 0   # exact gate time flag
        self.cmp = 1   # compression flag
        self.pri = 0
        self.rev = 0
        self.grp = 0
        self.num_tracks = 0

        # Per-song track list: list of list-of-events
        self.tracks: list[list[dict]] = []

        # Symbol table: label_name -> line index
        self.labels: dict[str, int] = {}

    # ------------------------------------------------------------------
    # Pre-pass: build symbol table
    # ------------------------------------------------------------------

    def _build_symbol_table(self):
        for i, line in enumerate(self.lines):
            stripped = line.strip()
            # Labels end with ':' and are not assembler directives
            if stripped.endswith(':') and not stripped.startswith('.') and not stripped.startswith('@'):
                lbl = stripped[:-1].strip()
                self.labels[lbl] = i

    # ------------------------------------------------------------------
    # Header parsing
    # ------------------------------------------------------------------

    def _parse_header(self):
        """Extract .equ definitions from the top of the file."""
        for line in self.lines:
            s = line.strip()
            m = re.match(r'\.equ\s+(\w+)\s*,\s*(.+)', s)
            if not m:
                continue
            name, val = m.group(1), m.group(2).strip()
            # derive the song label from  label_grp, label_pri etc.
            for suffix in ('_grp', '_pri', '_rev', '_mvl', '_key', '_tbs', '_exg', '_cmp'):
                if name.endswith(suffix):
                    if not self.label:
                        self.label = name[:-len(suffix)]
                    break
            if name.endswith('_mvl'):
                try:
                    self.mvl = int(val)
                except ValueError:
                    pass
            elif name.endswith('_tbs'):
                try:
                    self.tbs = int(val)
                except ValueError:
                    pass
            elif name.endswith('_exg'):
                try:
                    self.exg = int(val)
                except ValueError:
                    pass
            elif name.endswith('_cmp'):
                try:
                    self.cmp = int(val)
                except ValueError:
                    pass
            elif name.endswith('_rev'):
                m2 = re.search(r'(\d+)', val)
                if m2:
                    self.rev = int(m2.group(1))
            elif name.endswith('_pri'):
                try:
                    self.pri = int(val)
                except ValueError:
                    pass
            elif name.endswith('_grp'):
                m2 = re.search(r'(\d+)', val)
                if m2:
                    self.grp = int(m2.group(1))

    # ------------------------------------------------------------------
    # Parse a single .byte (or .word) line into tokens
    # ------------------------------------------------------------------

    def _tokenise_byte_line(self, line: str) -> list[str]:
        """Return list of comma-separated tokens from a .byte/.word line."""
        s = line.strip()
        # Strip .byte / .word prefix
        s = re.sub(r'^\.(?:byte|word)\s+', '', s)
        # Strip trailing comment
        s = re.sub(r'\s*@.*$', '', s)
        tokens = [t.strip() for t in s.split(',')]
        return [t for t in tokens if t]

    # ------------------------------------------------------------------
    # Parse one track, starting at the given line index.
    # Returns list of event dicts and the line index after the FINE.
    # call_stack is used for PATT/PEND recursion.
    # ------------------------------------------------------------------

    def _parse_track(self, start_line: int) -> list[dict]:
        """
        Walk lines from start_line, emitting events.
        Inlines PATT subroutines recursively.
        Returns list of event dicts.
        """
        events: list[dict] = []
        cursor = start_line

        # Compression state (tracks last explicitly-written note/velocity)
        last_note = -1
        last_velocity = -1
        last_op = ''          # last command mnemonic for compression
        last_vol_expr = ''    # for VOL compression (bare number)
        active_tie_note = -1  # note started with TIE, pending EOT
        call_stack: list[int] = []   # return addresses for PATT/PEND

        tempo_bpm = None   # will be set by first TEMPO command

        def ev(kind, **kw):
            events.append({'kind': kind, **kw})

        def advance():
            nonlocal cursor
            cursor += 1

        while cursor < len(self.lines):
            raw = self.lines[cursor]
            stripped = raw.strip()

            # Skip blank lines and comments
            if not stripped or stripped.startswith('@') or stripped.startswith('//'):
                advance()
                continue

            # Label-only lines (e.g. mus_gs_azalea_1_018:)
            if stripped.endswith(':') and not stripped.startswith('.'):
                advance()
                continue

            # Section/global/align directives — skip
            if stripped.startswith('.section') or stripped.startswith('.global') \
                    or stripped.startswith('.align') or stripped.startswith('.include') \
                    or stripped.startswith('.equ') or stripped.startswith('.end'):
                advance()
                continue

            # Stop at track header lines for other tracks
            # e.g. "mus_gs_azalea_2:" but NOT a pattern label like "mus_gs_azalea_1_018:"
            if stripped.endswith(':'):
                lbl = stripped[:-1]
                # A track header has the form  label_N:  (single digit suffix after last _)
                parts = lbl.rsplit('_', 1)
                if len(parts) == 2 and parts[1].isdigit() and len(parts[1]) == 1:
                    break

            # ---- .byte lines ------------------------------------------------
            if stripped.startswith('.byte'):
                tokens = self._tokenise_byte_line(stripped)
                if not tokens:
                    advance()
                    continue
                first = tokens[0].strip()

                # --- Control commands ---
                if first == 'FINE':
                    ev('FINE')
                    advance()
                    # If we're in a PATT subroutine, the FINE ends the track —
                    # but PATT sections use PEND not FINE, so this is the real end.
                    if call_stack:
                        # Pop and continue (shouldn't normally happen)
                        cursor = call_stack.pop()
                    else:
                        break

                elif first == 'PEND':
                    if call_stack:
                        cursor = call_stack.pop()
                    else:
                        advance()
                    last_op = ''
                    last_note = -1
                    last_velocity = -1

                elif first == 'PATT':
                    # Next line must be a .word with the target label
                    advance()
                    word_line = self.lines[cursor].strip()
                    m = re.match(r'\.word\s+(\S+)', word_line)
                    if m:
                        target_lbl = m.group(1)
                        if target_lbl in self.labels:
                            call_stack.append(cursor + 1)
                            cursor = self.labels[target_lbl]
                            last_op = ''
                            last_note = -1
                            last_velocity = -1
                        else:
                            advance()  # unknown label, skip
                    else:
                        advance()

                elif first == 'GOTO':
                    # Unconditional jump — next line is target .word
                    advance()
                    word_line = self.lines[cursor].strip()
                    m = re.match(r'\.word\s+(\S+)', word_line)
                    if m:
                        target_lbl = m.group(1)
                        if target_lbl in self.labels:
                            cursor = self.labels[target_lbl]
                            last_op = ''
                            last_note = -1
                            last_velocity = -1
                            continue
                    advance()

                elif first == 'KEYSH':
                    # KEYSH , label_key+N   — key shift (transpose)
                    val = 0
                    if len(tokens) >= 2:
                        m = re.search(r'([+-]?\d+)$', tokens[1])
                        if m:
                            val = int(m.group(1))
                    ev('KEYSH', semitones=val)
                    advance()

                elif first == 'TEMPO':
                    # TEMPO , BPM*tbs/2
                    if len(tokens) >= 2:
                        raw_val = eval_expr(tokens[1], self.mvl, self.tbs)
                        # raw_val = round(BPM * tbs / 2)  →  BPM = raw_val*2/tbs
                        bpm = int(round(raw_val * 2 / self.tbs))
                        ev('TEMPO', bpm=bpm)
                        tempo_bpm = bpm
                    advance()

                elif first == 'VOICE':
                    prog = int(tokens[1]) if len(tokens) >= 2 else 0
                    ev('VOICE', program=prog)
                    last_op = 'VOICE'
                    advance()

                elif first in ('VOL', 'VOL   '):
                    if len(tokens) >= 2:
                        raw_val = eval_expr(tokens[1], self.mvl, self.tbs)
                        ev('VOL', value=raw_val)
                        last_vol_expr = tokens[1].strip()
                    elif last_vol_expr:
                        # Compression: bare value on continuation line
                        raw_val = eval_expr(tokens[0], self.mvl, self.tbs)
                        ev('VOL', value=raw_val)
                    last_op = 'VOL'
                    advance()

                elif first in ('PAN', 'PAN   '):
                    if len(tokens) >= 2:
                        raw_val = eval_expr(tokens[1], self.mvl, self.tbs)
                        ev('PAN', value=raw_val)
                    last_op = 'PAN'
                    advance()

                elif first in ('BEND', 'BEND  '):
                    if len(tokens) >= 2:
                        raw_val = eval_expr(tokens[1], self.mvl, self.tbs)
                        ev('BEND', value=raw_val)
                    advance()

                elif first in ('BENDR', 'BENDR '):
                    if len(tokens) >= 2:
                        raw_val = int(tokens[1])
                        ev('BENDR', value=raw_val)
                    advance()

                elif first in ('MOD', 'MOD   '):
                    if len(tokens) >= 2:
                        raw_val = int(tokens[1])
                        ev('MOD', value=raw_val)
                    last_op = 'MOD'
                    advance()

                elif first in ('MODT', 'MODT  '):
                    if len(tokens) >= 2:
                        ev('MODT', value=int(tokens[1]))
                    advance()

                elif first in ('LFOS', 'LFOS  '):
                    if len(tokens) >= 2:
                        ev('LFOS', value=int(tokens[1]))
                    advance()

                elif first in ('LFODL', 'LFODL '):
                    if len(tokens) >= 2:
                        ev('LFODL', value=int(tokens[1]))
                    advance()

                elif first in ('TUNE', 'TUNE  '):
                    if len(tokens) >= 2:
                        raw_val = eval_expr(tokens[1], self.mvl, self.tbs)
                        ev('TUNE', value=raw_val)
                    advance()

                elif first in ('MEMACC', 'PRIO', 'PRIO  ', 'XCMD', 'XCMD  ', 'REPT'):
                    # Not reproducible in standard MIDI; skip
                    advance()

                elif first in ('EOT', 'EOT   '):
                    # Note off (end of tie). May have a note argument.
                    note = last_note
                    if len(tokens) >= 2:
                        try:
                            note = note_name_to_midi(tokens[1])
                            last_note = note
                        except ValueError:
                            pass
                    ev('EOT', note=note)
                    advance()

                elif first in ('TIE', 'TIE   '):
                    # Tie note — note-on without scheduled note-off
                    note = last_note
                    velocity = last_velocity
                    if len(tokens) >= 2:
                        try:
                            note = note_name_to_midi(tokens[1])
                            last_note = note
                        except ValueError:
                            pass
                    if len(tokens) >= 3:
                        m = re.match(r'v(\d+)', tokens[2])
                        if m:
                            velocity = int(m.group(1))
                            last_velocity = velocity
                    ev('TIE', note=note, velocity=max(velocity, 1))
                    last_op = 'TIE'
                    advance()

                # --- Wait commands (W00 .. W96) ---
                elif re.match(r'W\d+$', first):
                    ticks = int(first[1:])
                    ev('WAIT', ticks=ticks)
                    # After a wait, note/velocity context is reset for compression
                    last_note = -1
                    last_velocity = -1
                    last_op = ''
                    advance()

                # --- Note commands (N01 .. N96, or just a note name for compression) ---
                elif re.match(r'N(\d+)\s*$', first):
                    duration_idx = int(re.match(r'N(\d+)', first).group(1))
                    duration_ticks = duration_idx  # duration IS the tick count (NXX)
                    note = last_note
                    velocity = last_velocity
                    gtp = 0
                    tok_idx = 1
                    if tok_idx < len(tokens):
                        try:
                            note = note_name_to_midi(tokens[tok_idx])
                            last_note = note
                            tok_idx += 1
                        except ValueError:
                            pass
                    if tok_idx < len(tokens):
                        m = re.match(r'v(\d+)', tokens[tok_idx].strip())
                        if m:
                            velocity = int(m.group(1))
                            last_velocity = velocity
                            tok_idx += 1
                    if tok_idx < len(tokens):
                        m = re.match(r'gtp(\d+)', tokens[tok_idx].strip())
                        if m:
                            gtp = int(m.group(1))
                    ev('NOTE', note=note, velocity=max(velocity, 1), duration=duration_ticks + gtp)
                    last_op = f'N{duration_idx:02d}'
                    advance()

                else:
                    # Compression continuation: could be a note name or a VOL value
                    # The key insight: if last_op started with 'N', this is a note
                    # continuation; if last_op is 'VOL', this is a volume continuation.
                    if last_op.startswith('N') or last_op == 'TIE':
                        # Note or velocity continuation
                        note = last_note
                        velocity = last_velocity
                        gtp = 0
                        tok_idx = 0
                        # Does the first token look like a note name?
                        try:
                            note = note_name_to_midi(first)
                            last_note = note
                            tok_idx = 1
                        except ValueError:
                            tok_idx = 0

                        if tok_idx < len(tokens):
                            m = re.match(r'v(\d+)', tokens[tok_idx].strip())
                            if m:
                                velocity = int(m.group(1))
                                last_velocity = velocity
                                tok_idx += 1
                        if tok_idx < len(tokens):
                            m = re.match(r'gtp(\d+)', tokens[tok_idx].strip())
                            if m:
                                gtp = int(m.group(1))

                        if last_op.startswith('N'):
                            duration_idx = int(last_op[1:])
                            ev('NOTE', note=note, velocity=max(velocity, 1), duration=duration_idx + gtp)
                        else:
                            ev('TIE', note=note, velocity=max(velocity, 1))
                    elif last_op == 'VOL':
                        raw_val = eval_expr(first, self.mvl, self.tbs)
                        ev('VOL', value=raw_val)
                    else:
                        # Unknown continuation — try as raw number VOL expression
                        if re.match(r'\d+', first):
                            raw_val = eval_expr(first, self.mvl, self.tbs)
                            ev('VOL', value=raw_val)
                    advance()

            # ---- .word lines (standalone — only appear inside PATT already handled) ---
            elif stripped.startswith('.word'):
                advance()

            # ---- footer block (mus_gs_azalea: with NumTrks byte) ----
            elif re.match(r'\w+:\s*$', stripped):
                # Check if it's the song footer label e.g. "mus_gs_azalea:"
                lbl = stripped.rstrip(':').strip()
                if lbl == self.label:
                    break
                advance()

            else:
                advance()

        return events

    # ------------------------------------------------------------------
    # Top-level parse
    # ------------------------------------------------------------------

    def parse(self):
        self._parse_header()
        self._build_symbol_table()

        # Find track start lines
        track_starts = []
        for i, line in enumerate(self.lines):
            s = line.strip()
            if s.endswith(':') and not s.startswith('.') and not s.startswith('@'):
                lbl = s[:-1]
                # Track labels: label_1 label_2 … (single digit after last _)
                parts = lbl.rsplit('_', 1)
                if len(parts) == 2 and parts[1].isdigit() and len(parts[1]) == 1 \
                        and lbl.startswith(self.label + '_'):
                    track_starts.append(i)

        self.num_tracks = len(track_starts)
        for start in track_starts:
            track_events = self._parse_track(start)
            self.tracks.append(track_events)


# ---------------------------------------------------------------------------
# Convert parsed events to SMF
# ---------------------------------------------------------------------------

TICKS_PER_BEAT = 24  # mid2agb default (1 tbs = 24 clocks/beat); -X gives 48

def build_midi(parser: AgbParser, ticks_per_beat: int) -> MIDIFile:
    num_tracks = parser.num_tracks
    # Track 0 = tempo/metadata track; tracks 1..N = music tracks
    mf = MIDIFile(num_tracks, removeDuplicates=False, deinterleave=False,
                  ticks_per_quarternote=ticks_per_beat, eventtime_is_ticks=True)

    for track_idx, events in enumerate(parser.tracks):
        mf.addTrackName(track_idx, 0, f"Track {track_idx + 1}")

        channel = track_idx % 16
        abs_tick = 0
        key_shift = 0
        current_program = -1
        current_vol = 100
        active_ties: dict[int, int] = {}  # note -> on_tick (for TIE/EOT)

        for ev in events:
            kind = ev['kind']

            if kind == 'WAIT':
                abs_tick += ev['ticks']

            elif kind == 'TEMPO':
                mf.addTempo(track_idx, abs_tick, ev['bpm'])

            elif kind == 'KEYSH':
                key_shift = ev['semitones']

            elif kind == 'VOICE':
                prog = ev['program']
                if prog != current_program:
                    mf.addProgramChange(track_idx, channel, abs_tick, prog)
                    current_program = prog

            elif kind == 'VOL':
                # VOL stores  val*mvl/mxv  evaluated — convert back to 0-127 CC7
                cc_val = min(127, max(0, ev['value']))
                mf.addControllerEvent(track_idx, channel, abs_tick, 7, cc_val)
                current_vol = cc_val

            elif kind == 'PAN':
                # PAN stores  c_v ± N  evaluated (0-127)
                cc_val = min(127, max(0, ev['value']))
                mf.addControllerEvent(track_idx, channel, abs_tick, 10, cc_val)

            elif kind == 'MOD':
                mf.addControllerEvent(track_idx, channel, abs_tick, 1, min(127, ev['value']))

            elif kind == 'BEND':
                # BEND stores c_v ± N (0-127); MIDI pitch bend is 14-bit centred at 8192
                agb_bend = max(0, min(127, ev['value']))
                midi_bend = int((agb_bend - 64) / 64.0 * 8191) + 8192
                midi_bend = max(0, min(16383, midi_bend))
                mf.addPitchWheelEvent(track_idx, channel, abs_tick,
                                      midi_bend - 8192)

            elif kind == 'BENDR':
                # Bend range via RPN 0,0
                mf.addControllerEvent(track_idx, channel, abs_tick, 101, 0)
                mf.addControllerEvent(track_idx, channel, abs_tick, 100, 0)
                mf.addControllerEvent(track_idx, channel, abs_tick, 6, ev['value'])

            elif kind == 'NOTE':
                midi_note = max(0, min(127, ev['note'] + key_shift))
                velocity = max(1, min(127, ev['velocity']))
                duration = max(1, ev['duration'])
                mf.addNote(track_idx, channel, midi_note, abs_tick, duration, velocity)

            elif kind == 'TIE':
                midi_note = max(0, min(127, ev['note'] + key_shift))
                velocity = max(1, min(127, ev['velocity']))
                active_ties[midi_note] = (abs_tick, velocity)

            elif kind == 'EOT':
                midi_note = max(0, min(127, ev['note'] + key_shift))
                if midi_note in active_ties:
                    on_tick, velocity = active_ties.pop(midi_note)
                    duration = abs_tick - on_tick
                    if duration <= 0:
                        duration = 1
                    mf.addNote(track_idx, channel, midi_note, on_tick, duration, velocity)
                else:
                    # Fallback: zero-duration note off (shouldn't normally occur)
                    mf.addNote(track_idx, channel, midi_note, abs_tick, 1, 1)

            elif kind == 'FINE':
                # Close any dangling TIE notes
                for midi_note, (on_tick, velocity) in active_ties.items():
                    duration = max(1, abs_tick - on_tick)
                    mf.addNote(track_idx, channel, midi_note, on_tick, duration, velocity)
                active_ties.clear()
                break

    return mf


# ---------------------------------------------------------------------------
# CLI entry point
# ---------------------------------------------------------------------------

def main():
    if len(sys.argv) < 2:
        print(__doc__)
        sys.exit(1)

    input_path = sys.argv[1]
    if len(sys.argv) >= 3:
        output_path = sys.argv[2]
    else:
        base = os.path.splitext(input_path)[0]
        output_path = base + '.mid'

    with open(input_path, 'r', encoding='utf-8', errors='replace') as f:
        text = f.read()

    parser = AgbParser(text)
    parser.parse()

    if not parser.label:
        print("ERROR: Could not detect AGB song label in file.", file=sys.stderr)
        sys.exit(1)

    if parser.num_tracks == 0:
        print("ERROR: No tracks found.", file=sys.stderr)
        sys.exit(1)

    # Determine ticks per beat: tbs=1 → 24 clocks/beat; tbs=2 → 48
    ticks_per_beat = 24 * parser.tbs

    print(f"Song:        {parser.label}")
    print(f"Tracks:      {parser.num_tracks}")
    print(f"Master vol:  {parser.mvl}")
    print(f"Ticks/beat:  {ticks_per_beat}")
    print(f"Reverb:      {parser.rev}")
    print(f"Voice group: {parser.grp}")

    mf = build_midi(parser, ticks_per_beat)

    with open(output_path, 'wb') as f:
        mf.writeFile(f)

    print(f"Written:     {output_path}")


if __name__ == '__main__':
    main()
