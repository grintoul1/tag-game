# 1 "data/maps/EverGrandeCity_Hall1/scripts.pory"

# 2 "data/maps/EverGrandeCity_Hall1/scripts.pory"
EverGrandeCity_Hall1_MapScripts::
# 3 "data/maps/EverGrandeCity_Hall1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_Hall1_OnWarp
# 4 "data/maps/EverGrandeCity_Hall1/scripts.pory"
	.byte 0
# 5 "data/maps/EverGrandeCity_Hall1/scripts.pory"

# 6 "data/maps/EverGrandeCity_Hall1/scripts.pory"
EverGrandeCity_Hall1_OnWarp:
# 7 "data/maps/EverGrandeCity_Hall1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_Hall1_EventScript_TurnPlayerNorth
# 8 "data/maps/EverGrandeCity_Hall1/scripts.pory"
	.2byte 0
# 9 "data/maps/EverGrandeCity_Hall1/scripts.pory"

# 10 "data/maps/EverGrandeCity_Hall1/scripts.pory"
EverGrandeCity_Hall1_EventScript_TurnPlayerNorth::
# 11 "data/maps/EverGrandeCity_Hall1/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
# 12 "data/maps/EverGrandeCity_Hall1/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 13 "data/maps/EverGrandeCity_Hall1/scripts.pory"
	end
