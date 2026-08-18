#!/usr/bin/env python3
"""
Find unused sound samples from a commit.

Usage:
    python3 find_unused_samples.py <commit_hash>
    
Example:
    python3 find_unused_samples.py 734b586900c0f2f5e34dbd44aa078ec47297320b
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
            # Extract the sample name from +DirectSoundWaveData_<name>::
            match = re.search(r'\+DirectSoundWaveData_([a-z0-9_]+)::', line)
            if match:
                new_samples.add(match.group(1))
    
    return new_samples

def find_voicegroups_with_samples(samples):
    """Find which voicegroups contain these samples."""
    voicegroups = defaultdict(list)
    vg_dir = Path('sound/voicegroups')
    
    if not vg_dir.exists():
        print("Error: sound/voicegroups directory not found")
        return voicegroups
    
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
    
    if not songs_dir.exists():
        print("Error: sound/songs directory not found")
        return songs
    
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

def main():
    if len(sys.argv) < 2:
        print(__doc__)
        sys.exit(1)
    
    commit_hash = sys.argv[1]
    
    print(f"Analyzing commit: {commit_hash}")
    print()
    
    # Get new samples
    new_samples = get_new_samples_from_commit(commit_hash)
    print(f"Found {len(new_samples)} new samples in commit")
    
    if not new_samples:
        print("No new samples found or commit hash is invalid.")
        sys.exit(1)
    
    # Find voicegroups with these samples
    voicegroups = find_voicegroups_with_samples(new_samples)
    print(f"Found in {len(voicegroups)} voicegroup files")
    
    # Find which voicegroups are used in songs
    songs_using_vgs = find_songs_using_voicegroups(voicegroups.keys())
    
    # Determine used vs unused voicegroups
    used_vgs = set(k for k, v in songs_using_vgs.items() if v)
    unused_vgs = set(voicegroups.keys()) - used_vgs
    
    # Collect samples
    used_samples = set()
    for vg in used_vgs:
        used_samples.update(voicegroups[vg])
    
    unused_samples = new_samples - used_samples
    
    # Print results
    print()
    print("=" * 60)
    print("SUMMARY")
    print("=" * 60)
    print(f"Total new samples:           {len(new_samples)}")
    print(f"Voicegroups with samples:    {len(voicegroups)}")
    print(f"  - Used in songs:           {len(used_vgs)}")
    print(f"  - Unused:                  {len(unused_vgs)}")
    print()
    print(f"Samples used:                {len(used_samples)}")
    print(f"Samples UNUSED:              {len(unused_samples)}")
    print()
    
    if unused_vgs:
        print("=" * 60)
        print("UNUSED VOICEGROUPS")
        print("=" * 60)
        for vg in sorted(unused_vgs):
            count = len(voicegroups[vg])
            print(f"  {vg}: {count} samples")
        print()
    
    if unused_samples:
        print("=" * 60)
        print(f"UNUSED SAMPLES ({len(unused_samples)} total)")
        print("=" * 60)
        for sample in sorted(unused_samples):
            print(f"  - {sample}")
    else:
        print("All samples are used!")

if __name__ == '__main__':
    main()
