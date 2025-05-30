# 1 "data/maps/SkyPillar_5F/scripts.pory"

# 2 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_MapScripts::
# 3 "data/maps/SkyPillar_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/SkyPillar_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_5F_OnTransition
# 5 "data/maps/SkyPillar_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_5F_SetHoleWarp
# 6 "data/maps/SkyPillar_5F/scripts.pory"
	.byte 0
# 7 "data/maps/SkyPillar_5F/scripts.pory"

# 8 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_OnTransition:
# 9 "data/maps/SkyPillar_5F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 8, SkyPillar_5F_EventScript_CleanFloor
# 10 "data/maps/SkyPillar_5F/scripts.pory"
	return
# 11 "data/maps/SkyPillar_5F/scripts.pory"

# 12 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_EventScript_CleanFloor::
# 13 "data/maps/SkyPillar_5F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_5F_CLEAN
# 14 "data/maps/SkyPillar_5F/scripts.pory"
	return
# 15 "data/maps/SkyPillar_5F/scripts.pory"

# 16 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_SetHoleWarp:
# 17 "data/maps/SkyPillar_5F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 18 "data/maps/SkyPillar_5F/scripts.pory"
	setholewarp MAP_SKY_PILLAR_4F
# 19 "data/maps/SkyPillar_5F/scripts.pory"
	end
