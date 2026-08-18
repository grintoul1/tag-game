#!/usr/bin/env python3
"""
Remove unused sound samples and voicegroups from a commit.

Usage:
    python3 cleanup_unused_samples.py <commit_hash> [--dry-run]
    
Options:
    --dry-run    Show what would be deleted without actually deleting

Example:
    python3 cleanup_unused_samples.py 734b586900c0f2f5e34dbd44aa078ec47297320b --dry-run
    python3 cleanup_unused_samples.py 734b586900c0f2f5e34dbd44aa078ec47297320b
"""

import sys
import subprocess
import re
from pathlib import Path
from collections import defaultdict

def get_new_samples_from_commit(commit_hash):
    """Extract new sound sample names added in a commit."""
    try:
        result = subprocess.run(
            ['git', 'diff', f'{commit_hash}^..{commit_hash}', '--', 'sound/direct_sound_data.inc'],
            capture_output=True,
            text=True,
            check=True
        )
    except subprocess.CalledProcessError as e:
        print(f"Error running git diff: {e}")
        return set()
    
    new_samples = set()
    for line in result.stdout.split('\n'):
        if line.startswith('+DirectSoundWaveData_'):
            match = re.search(r'\+DirectSoundWaveData_([a-z0-9_]+)::', line)
            if match:
                new_samples.add(match.group(1))
    
    return new_samples

def find_voicegroups_with_samples(samples):
    """Find which voicegroups contain these samples."""
    voicegroups = defaultdict(list)
    vg_dir = Path('sound/voicegroups')
    
    for vg_file in vg_dir.glob('*.inc'):
        try:
            content = vg_file.read_text(encoding='utf-8', errors='ignore')
            for sample in samples:
                if sample in content:
                    voicegroups[vg_file.name].append(sample)
        except Exception as e:
            print(f"Warning: Could not read {vg_file}: {e}")
    
    return voicegroups

def find_songs_using_voicegroups(voicegroup_names):
    """Find which songs use these voicegroups."""
    songs = defaultdict(set)
    songs_dir = Path('sound/songs')
    
    for song_file in songs_dir.rglob('*'):
        if not song_file.is_file() or song_file.suffix not in ['.s', '.inc']:
            continue
        
        try:
            content = song_file.read_text(encoding='utf-8', errors='ignore')
            for vg_name in voicegroup_names:
                vg_base = vg_name.replace('.inc', '')
                if vg_base in content:
                    songs[vg_name].add(str(song_file.relative_to(Path('.'))))
        except Exception as e:
            print(f"Warning: Could not read {song_file}: {e}")
    
    return songs

def remove_samples_from_inc(unused_samples, dry_run=False):
    """Remove DirectSoundWaveData entries from direct_sound_data.inc"""
    inc_file = Path('sound/direct_sound_data.inc')
    content = inc_file.read_text(encoding='utf-8')
    original_content = content
    
    # Remove each sample's DirectSoundWaveData block
    for sample in unused_samples:
        # Pattern to match the entire block for this sample
        pattern = f'DirectSoundWaveData_{sample}::\n\\s+\\.incbin "[^"]*"'
        # Also match any preceding whitespace and alignment directives
        pattern = f'(\\s*\\.align 2\\n)?\\s*{pattern}'
        content = re.sub(pattern, '', content)
    
    if content != original_content:
        if dry_run:
            print(f"Would remove {len(unused_samples)} sample definitions from direct_sound_data.inc")
        else:
            inc_file.write_text(content, encoding='utf-8')
            print(f"Removed {len(unused_samples)} sample definitions from direct_sound_data.inc")
        return True
    return False

def remove_wav_files(unused_samples, dry_run=False):
    """Remove .wav sample files from sound/direct_sound_samples/"""
    samples_dir = Path('sound/direct_sound_samples')
    removed = 0
    
    # Map sample names to actual wav files
    # Sample names like "dp_016bongo" come from files like "dp_016bongo.wav"
    for sample in unused_samples:
        wav_file = samples_dir / f'{sample}.wav'
        if wav_file.exists():
            if dry_run:
                print(f"Would delete: {wav_file}")
            else:
                wav_file.unlink()
                print(f"Deleted: {wav_file}")
            removed += 1
    
    if removed > 0:
        print(f"Removed {removed} .wav files")
    return removed

def remove_unused_voicegroups(unused_vgs, dry_run=False):
    """Remove or backup unused voicegroup files"""
    vg_dir = Path('sound/voicegroups')
    removed = 0
    
    for vg_name in unused_vgs:
        vg_file = vg_dir / vg_name
        if vg_file.exists():
            backup_file = vg_file.with_suffix('.inc.bak')
            if dry_run:
                print(f"Would move: {vg_file} -> {backup_file}")
            else:
                vg_file.rename(backup_file)
                print(f"Backed up (renamed to .bak): {vg_file}")
            removed += 1
    
    if removed > 0:
        print(f"Backed up {removed} unused voicegroup files")
    return removed

def main():
    if len(sys.argv) < 2:
        print(__doc__)
        sys.exit(1)
    
    commit_hash = sys.argv[1]
    dry_run = '--dry-run' in sys.argv
    
    print(f"Analyzing commit: {commit_hash}")
    if dry_run:
        print("(DRY RUN - no files will be deleted)")
    print()
    
    # Get new samples
    new_samples = get_new_samples_from_commit(commit_hash)
    print(f"Found {len(new_samples)} new samples")
    
    if not new_samples:
        print("No new samples found.")
        sys.exit(1)
    
    # Find voicegroups with these samples
    voicegroups = find_voicegroups_with_samples(new_samples)
    print(f"Found in {len(voicegroups)} voicegroups")
    
    # Find which are used
    songs_using_vgs = find_songs_using_voicegroups(voicegroups.keys())
    used_vgs = set(k for k, v in songs_using_vgs.items() if v)
    unused_vgs = set(voicegroups.keys()) - used_vgs
    
    # Collect unused samples
    used_samples = set()
    for vg in used_vgs:
        used_samples.update(voicegroups[vg])
    unused_samples = new_samples - used_samples
    
    print()
    print("=" * 60)
    print("CLEANUP SUMMARY")
    print("=" * 60)
    print(f"Samples to remove:           {len(unused_samples)}")
    print(f"Voicegroups to backup:       {len(unused_vgs)}")
    print(f".wav files to delete:        ~{len(unused_samples)}")
    print()
    
    if not dry_run:
        response = input("Proceed with cleanup? (yes/no): ").strip().lower()
        if response not in ['yes', 'y']:
            print("Cleanup cancelled.")
            sys.exit(0)
        print()
    
    # Perform cleanup
    remove_wav_files(unused_samples, dry_run)
    remove_samples_from_inc(unused_samples, dry_run)
    remove_unused_voicegroups(unused_vgs, dry_run)
    
    print()
    print("=" * 60)
    if dry_run:
        print("Dry run complete. No files were modified.")
        print("Run without --dry-run to perform actual cleanup.")
    else:
        print("Cleanup complete!")
        print()
        print("Note: You may want to:")
        print("  1. Check git diff to review changes")
        print("  2. Run make to rebuild and verify")
        print("  3. Test in emulator")

if __name__ == '__main__':
    main()
