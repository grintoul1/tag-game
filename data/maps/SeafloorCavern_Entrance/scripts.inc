# 1 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 2 "data/maps/SeafloorCavern_Entrance/scripts.pory"
.set LOCALID_GRUNT, 1
# 3 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 4 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_MapScripts::
# 5 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeafloorCavern_Entrance_OnResume
# 6 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeafloorCavern_Entrance_OnFrame
# 7 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.byte 0
# 8 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 9 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_OnFrame:
# 10 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 57, SeafloorCavern_Entrance_EventScript_ProgressEmmieState
# 11 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 59, SeafloorCavern_Entrance_EventScript_ProgressEmmieState
# 12 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.2byte 0
# 13 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 14 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_ProgressEmmieState::
# 15 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
# 16 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 58
# 17 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 18 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 19 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_OnResume:
# 20 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 21 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 22 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 23 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 24 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt::
# 25 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	lockall
# 26 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1, SeafloorCavern_Entrance_EventScript_GruntSpeechShort
# 27 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitse
# 28 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	playse SE_PIN
# 29 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_ExclamationMark
# 30 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 31 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_Delay48
# 32 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 33 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 20
# 34 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 35 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 36 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 37 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 30
# 38 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setvar VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1
# 39 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT
# 40 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep, MSGBOX_DEFAULT
# 41 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 42 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 43 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 44 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 45 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 46 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 47 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort::
# 48 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 49 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 50 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 51 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort, MSGBOX_DEFAULT
# 52 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 53 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 54 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 55 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 56 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 57 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 58 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast::
# 59 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterLeft
# 60 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 61 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 62 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 63 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest::
# 64 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterRight
# 65 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 66 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 67 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 68 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth::
# 69 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 70 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 71 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 72 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 73 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep:
# 74 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Hey!\n"
# 75 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "I remember your face!\p"
# 76 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "If you're here, it must mean that\n"
# 77 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "you're about to mess with us again!\p"
# 78 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "A punk like you, do you really think\n"
# 79 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "you can take on TEAM AQUA?\p"
# 80 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "I'd say you're too early by about\n"
# 81 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "a trillion years!\p"
# 82 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "You're a perfect fit for the likes of\n"
# 83 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "TEAM MAGMA!\p"
# 84 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Speaking of TEAM MAGMA, I hear they\n"
# 85 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "were spotted near MOSSDEEP.\p"
# 86 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "That bunch of goons, they sure don't\n"
# 87 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "look good near the sea!$"
# 88 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 89 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort:
# 90 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "A punk like you, do you really think\n"
# 91 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "you can take on TEAM AQUA?\p"
# 92 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "I'd say you're too early by about\n"
# 93 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "a trillion years!\p"
# 94 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "You're a perfect fit for the likes of\n"
# 95 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "TEAM MAGMA!\p"
# 96 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Speaking of TEAM MAGMA, I hear they\n"
# 97 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "were spotted near MOSSDEEP.\p"
# 98 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "That bunch of goons, they sure don't\n"
# 99 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "look good near the sea!$"
