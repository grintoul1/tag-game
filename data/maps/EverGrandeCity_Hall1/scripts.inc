# 1 "data/maps/EverGrandeCity_Hall1/scripts.pory"

# 2 "data/maps/EverGrandeCity_Hall1/scripts.pory"
EverGrandeCity_Hall1_MapScripts::
# 3 "data/maps/EverGrandeCity_Hall1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_Hall1_OnWarp
<<<<<<< HEAD
# 4 "data/maps/EverGrandeCity_Hall1/scripts.pory"
=======
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_Hall1_OnFrame
>>>>>>> 4e01050c72 (20250609 01)
	.byte 0
# 5 "data/maps/EverGrandeCity_Hall1/scripts.pory"

<<<<<<< HEAD
# 6 "data/maps/EverGrandeCity_Hall1/scripts.pory"
=======
EverGrandeCity_Hall1_OnFrame:
	map_script_2 VAR_PARTNER_EMMIE_STATE, 72, EverGrandeCity_Hall1_EventScript_ProgressEmmieState
	.2byte 0

EverGrandeCity_Hall1_EventScript_ProgressEmmieState::
	setvar VAR_PARTNER_EMMIE_STATE, 73
	return

>>>>>>> 4e01050c72 (20250609 01)
EverGrandeCity_Hall1_OnWarp:
# 7 "data/maps/EverGrandeCity_Hall1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_Hall1_EventScript_TurnPlayerNorth
# 8 "data/maps/EverGrandeCity_Hall1/scripts.pory"
	.2byte 0
# 9 "data/maps/EverGrandeCity_Hall1/scripts.pory"

# 10 "data/maps/EverGrandeCity_Hall1/scripts.pory"
EverGrandeCity_Hall1_EventScript_TurnPlayerNorth::
# 11 "data/maps/EverGrandeCity_Hall1/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 12 "data/maps/EverGrandeCity_Hall1/scripts.pory"
	end
