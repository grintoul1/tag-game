#!/usr/bin/env python3
"""
Remove only samples that aren't referenced by ANY voicegroup.
This keeps voicegroups intact while removing truly dead code.

Usage:
    python3 cleanup_truly_unused_samples.py <commit_hash> [--dry-run]
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

def find_samples_referenced_in_voicegroups(samples):
    """Find which samples are actually referenced by any voicegroup."""
    referenced = set()
    vg_dir = Path('sound/voicegroups')
    
    for vg_file in vg_dir.glob('*.inc'):
        try:
            content = vg_file.read_text(encoding='utf-8', errors='ignore')
            for sample in samples:
                if sample in content:
                    referenced.add(sample)
        except Exception:
            pass
    
    return referenced

def remove_truly_unused_samples(unreferenced_samples, dry_run=False):
    """Remove only samples that aren't referenced anywhere."""
    samples_dir = Path('sound/direct_sound_samples')
    inc_file = Path('sound/direct_sound_data.inc')
    
    removed_count = 0
    
    # Remove .wav files
    for sample in unreferenced_samples:
        wav_file = samples_dir / f'{sample}.wav'
        if wav_file.exists():
            if dry_run:
                print(f"Would delete: {wav_file}")
            else:
                wav_file.unlink()
                print(f"Deleted: {wav_file}")
            removed_count += 1
    
    # Remove from direct_sound_data.inc
    if removed_count > 0:
        content = inc_file.read_text(encoding='utf-8')
        original = content
        
        for sample in unreferenced_samples:
            pattern = f'(\\s*\\.align 2\\n)?\\s*DirectSoundWaveData_{sample}::\n\\s+\\.incbin "[^"]*"'
            content = re.sub(pattern, '', content)
        
        if content != original:
            if not dry_run:
                inc_file.write_text(content, encoding='utf-8')
            print(f"Removed {removed_count} entries from direct_sound_data.inc")
    
    return removed_count

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
    
    # Find which are referenced by voicegroups
    referenced = find_samples_referenced_in_voicegroups(new_samples)
    unreferenced = new_samples - referenced
    
    print(f"Referenced by voicegroups: {len(referenced)}")
    print(f"NOT referenced anywhere: {len(unreferenced)}")
    print()
    
    if unreferenced:
        print("=" * 60)
        print(f"TRULY UNUSED SAMPLES ({len(unreferenced)})")
        print("=" * 60)
        for sample in sorted(unreferenced)[:20]:
            print(f"  - {sample}")
        if len(unreferenced) > 20:
            print(f"  ... and {len(unreferenced) - 20} more")
        print()
        
        if not dry_run:
            response = input("Delete these samples? (yes/no): ").strip().lower()
            if response not in ['yes', 'y']:
                print("Cancelled.")
                sys.exit(0)
            print()
        
        remove_truly_unused_samples(unreferenced, dry_run)
        
        print()
        if dry_run:
            print("Dry run complete. No files modified.")
        else:
            print("Cleanup complete!")
            print("You can now build: make -j4")
    else:
        print("All samples are referenced by at least one voicegroup.")
        print("To remove them, voicegroups would need to be edited.")

if __name__ == '__main__':
    main()
