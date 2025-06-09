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
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_5F_OnFrame
# 7 "data/maps/SkyPillar_5F/scripts.pory"
	.byte 0
# 8 "data/maps/SkyPillar_5F/scripts.pory"

# 9 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_OnFrame:
# 10 "data/maps/SkyPillar_5F/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 66, SkyPillar_5F_EventScript_ProgressEmmieState
# 11 "data/maps/SkyPillar_5F/scripts.pory"
	.2byte 0
# 12 "data/maps/SkyPillar_5F/scripts.pory"

# 13 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_EventScript_ProgressEmmieState::
# 14 "data/maps/SkyPillar_5F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 65
# 15 "data/maps/SkyPillar_5F/scripts.pory"
	return
# 16 "data/maps/SkyPillar_5F/scripts.pory"

# 17 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_OnTransition:
# 18 "data/maps/SkyPillar_5F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 8, SkyPillar_5F_EventScript_CleanFloor
# 19 "data/maps/SkyPillar_5F/scripts.pory"
	return
# 20 "data/maps/SkyPillar_5F/scripts.pory"

# 21 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_EventScript_CleanFloor::
# 22 "data/maps/SkyPillar_5F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_5F_CLEAN
# 23 "data/maps/SkyPillar_5F/scripts.pory"
	return
# 24 "data/maps/SkyPillar_5F/scripts.pory"

# 25 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_SetHoleWarp:
# 26 "data/maps/SkyPillar_5F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 27 "data/maps/SkyPillar_5F/scripts.pory"
	setholewarp MAP_SKY_PILLAR_4F
# 28 "data/maps/SkyPillar_5F/scripts.pory"
	end
