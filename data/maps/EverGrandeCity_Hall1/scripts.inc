EverGrandeCity_Hall1_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_Hall1_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_Hall1_OnFrame
	.byte 0

EverGrandeCity_Hall1_OnFrame:
	map_script_2 VAR_PARTNER_EMMIE_STATE, 72, EverGrandeCity_Hall1_EventScript_ProgressEmmieState
	.2byte 0

EverGrandeCity_Hall1_EventScript_ProgressEmmieState::
	setvar VAR_PARTNER_EMMIE_STATE, 73
	return

EverGrandeCity_Hall1_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_Hall1_EventScript_TurnPlayerNorth
	.2byte 0

EverGrandeCity_Hall1_EventScript_TurnPlayerNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

