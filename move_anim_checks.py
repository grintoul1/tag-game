import os

with open('data/battle_anim_scripts.s','r+') as f:
	lines = f.readlines()
	f.seek(0)
	
	reading_anim = ''
	# bg count
	monbg_count = 0
	clearmonbg_count = 0
	# alpha
	setalpha_count = 0
	blendoff_count = 0
	
	for line in lines:
		line = line.strip();
		if reading_anim != '':
			if line == 'end' or 'goto gBattleAnimMove_' in line:
				# end of move - check counts
				#if monbg_count != clearmonbg_count:
				#	print(f"ERROR: {reading_anim} has different monbg and clearmonbg calls!")
				if (setalpha_count != 0 and blendoff_count == 0) or (setalpha_count == 0 and blendoff_count != 0):
					print(f"ERROR: {reading_anim} has different setalpha and blendoff calls!")
				
				monbg_count = 0
				clearmonbg_count = 0
				setalpha_count = 0
				blendoff_count = 0
				
				reading_anim = ''
				continue
			if 'clearmonbg' in line:
				clearmonbg_count += 1
			elif 'monbg' in line:
				monbg_count += 1
			elif 'blendoff' in line:
				blendoff_count += 1
			elif 'setalpha' in line:
				setalpha_count += 1
		else:
			if 'goto' in line:
				continue
			if 'gBattleAnimMove_' in line:
				#print(f"Reading anim {line}")
				reading_anim = line
				monbg_count = 0
				clearmonbg_count = 0
				setalpha_count = 0
				blendoff_count = 0
				continue
			
