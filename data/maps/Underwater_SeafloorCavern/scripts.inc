# 1 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 2 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_MapScripts::
# 3 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_SeafloorCavern_OnResume
# 4 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Underwater_SeafloorCavern_OnTransition
# 5 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Underwater_SeafloorCavern_OnLoad
# 6 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Underwater_SeafloorCavern_OnFrame
# 7 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.byte 0
# 8 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 9 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_OnFrame:
# 10 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 58, Underwater_SeafloorCavern_EventScript_ProgressEmmieState
# 11 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.2byte 0
# 12 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 13 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_EventScript_ProgressEmmieState::
# 14 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 59
# 15 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	return
# 16 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 17 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 18 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_OnTransition:
# 19 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setflag FLAG_LANDMARK_SEAFLOOR_CAVERN
# 20 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, Underwater_SeafloorCavern_EventScript_HideSubmarine
# 21 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	end
# 22 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 23 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_EventScript_HideSubmarine::
# 24 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setflag FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE
# 25 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	end
# 26 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 27 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_OnLoad:
# 28 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	call_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, Underwater_SeafloorCavern_EventScript_SetSubmarineGoneMetatiles
# 29 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	end
# 30 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 31 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_EventScript_SetSubmarineGoneMetatiles::
# 32 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 3, METATILE_Underwater_RockWall, TRUE
# 33 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 3, METATILE_Underwater_RockWall, TRUE
# 34 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 3, METATILE_Underwater_RockWall, TRUE
# 35 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 3, METATILE_Underwater_RockWall, TRUE
# 36 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 4, METATILE_Underwater_FloorShadow, FALSE
# 37 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 4, METATILE_Underwater_FloorShadow, FALSE
# 38 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 4, METATILE_Underwater_FloorShadow, FALSE
# 39 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 4, METATILE_Underwater_FloorShadow, FALSE
# 40 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 5, METATILE_Underwater_FloorShadow, FALSE
# 41 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 5, METATILE_Underwater_FloorShadow, FALSE
# 42 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 5, METATILE_Underwater_FloorShadow, FALSE
# 43 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 5, METATILE_Underwater_FloorShadow, FALSE
# 44 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	return
# 45 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 46 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_OnResume:
# 47 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setdivewarp MAP_SEAFLOOR_CAVERN_ENTRANCE, 10, 17
# 48 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	end
# 49 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 50 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_EventScript_CheckStolenSub::
# 51 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	msgbox Underwater_SeafloorCavern_Text_SubExplorer1, MSGBOX_SIGN
# 52 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	end
# 53 "data/maps/Underwater_SeafloorCavern/scripts.pory"

# 54 "data/maps/Underwater_SeafloorCavern/scripts.pory"
Underwater_SeafloorCavern_Text_SubExplorer1:
# 55 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "“SUBMARINE EXPLORER 1” is painted\n"
# 56 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "on the hull.\p"
# 57 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "This is the submarine TEAM AQUA\n"
# 58 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "stole in SLATEPORT!\p"
# 59 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "TEAM AQUA must have gone\n"
# 60 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "ashore here.$"
