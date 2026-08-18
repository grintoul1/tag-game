#!/usr/bin/env python3
"""
Remove samples from unused voicegroups.

This script:
1. Finds voicegroups with samples from the commit
2. Determines which voicegroups are actually used in songs
3. Removes DirectSoundWaveData entries for samples in UNUSED voicegroups
4. Removes those sample references from the voicegroup files themselves

Usage:
    python3 cleanup_unused_voicegroup_samples.py <commit_hash> [--dry-run]
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
    except subprocess.CalledProcessError:
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
        except Exception:
            pass
    
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
        except Exception:
            pass
    
    return songs

def remove_samples_from_vg_file(vg_file, samples_to_remove, dry_run=False):
    """Remove sample references from a voicegroup file."""
    try:
        content = vg_file.read_text(encoding='utf-8')
        original = content
        
        for sample in samples_to_remove:
            # Remove lines that reference this sample
            content = re.sub(f'.*{re.escape(sample)}.*\n', '', content)
        
        if content != original:
            if not dry_run:
                vg_file.write_text(content, encoding='utf-8')
            return True
        return False
    except Exception as e:
        print(f"Warning: Could not process {vg_file}: {e}")
        return False

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
    
    # Get new samples from commit
    new_samples = get_new_samples_from_commit(commit_hash)
    if not new_samples:
        print("No new samples found.")
        sys.exit(1)
    
    print(f"Found {len(new_samples)} new samples in commit")
    
    # Find voicegroups with these samples
    voicegroups = find_voicegroups_with_samples(new_samples)
    print(f"Found in {len(voicegroups)} voicegroups")
    
    # Find which are used in songs
    songs_using_vgs = find_songs_using_voicegroups(voicegroups.keys())
    used_vgs = set(k for k, v in songs_using_vgs.items() if v)
    unused_vgs = set(voicegroups.keys()) - used_vgs
    
    # Samples to remove: those in UNUSED voicegroups
    samples_to_remove = set()
    for vg in unused_vgs:
        samples_to_remove.update(voicegroups[vg])
    
    # Also remove samples not in ANY voicegroup
    all_vg_samples = set()
    for samples in voicegroups.values():
        all_vg_samples.update(samples)
    truly_unused = new_samples - all_vg_samples
    samples_to_remove.update(truly_unused)
    
    print()
    print("=" * 60)
    print("SUMMARY")
    print("=" * 60)
    print(f"Voicegroups with new samples: {len(voicegroups)}")
    print(f"  - Used in songs:            {len(used_vgs)}")
    print(f"  - Unused:                   {len(unused_vgs)}")
    print()
    print(f"Samples to remove:            {len(samples_to_remove)}")
    print()
    
    if samples_to_remove:
        print("=" * 60)
        print(f"SAMPLES TO REMOVE ({len(samples_to_remove)})")
        print("=" * 60)
        for sample in sorted(samples_to_remove)[:20]:
            print(f"  - {sample}")
        if len(samples_to_remove) > 20:
            print(f"  ... and {len(samples_to_remove) - 20} more")
        print()
        
        if not dry_run:
            response = input("Remove these samples? (yes/no): ").strip().lower()
            if response not in ['yes', 'y']:
                print("Cancelled.")
                sys.exit(0)
            print()
        
        # Remove from direct_sound_data.inc
        inc_file = Path('sound/direct_sound_data.inc')
        content = inc_file.read_text(encoding='utf-8')
        original = content
        
        for sample in samples_to_remove:
            pattern = f'(\\s*\\.align 2\\n)?\\s*DirectSoundWaveData_{sample}::\n\\s+\\.incbin "[^"]*"'
            content = re.sub(pattern, '', content)
        
        if content != original:
            if not dry_run:
                inc_file.write_text(content, encoding='utf-8')
            print(f"Removed {len(samples_to_remove)} entries from direct_sound_data.inc")
        
        # Remove from voicegroup files
        vg_dir = Path('sound/voicegroups')
        modified_vgs = 0
        for vg_file in vg_dir.glob('*.inc'):
            if remove_samples_from_vg_file(vg_file, samples_to_remove, dry_run):
                modified_vgs += 1
                if dry_run:
                    print(f"Would modify: {vg_file.name}")
                else:
                    print(f"Modified: {vg_file.name}")
        
        # Remove .wav files
        samples_dir = Path('sound/direct_sound_samples')
        removed_wavs = 0
        for sample in samples_to_remove:
            wav_file = samples_dir / f'{sample}.wav'
            if wav_file.exists():
                if dry_run:
                    print(f"Would delete: {wav_file}")
                else:
                    wav_file.unlink()
                removed_wavs += 1
        
        print()
        if dry_run:
            print(f"Dry run complete. Would remove {removed_wavs} .wav files")
            print("Run without --dry-run to perform actual cleanup.")
        else:
            print(f"Cleanup complete!")
            print(f"  - Removed from direct_sound_data.inc: {len(samples_to_remove)}")
            print(f"  - Modified voicegroup files: {modified_vgs}")
            print(f"  - Deleted .wav files: {removed_wavs}")
            print()
            print("You can now build: make clean && make -j4")
    else:
        print("No samples to remove.")

if __name__ == '__main__':
    main()
