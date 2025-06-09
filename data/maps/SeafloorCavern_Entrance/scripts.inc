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
	setvar VAR_PARTNER_EMMIE_STATE, 58
# 16 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 17 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 18 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_OnResume:
# 19 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 20 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 21 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 22 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 23 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt::
# 24 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	lockall
# 25 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1, SeafloorCavern_Entrance_EventScript_GruntSpeechShort
# 26 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitse
# 27 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	playse SE_PIN
# 28 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_ExclamationMark
# 29 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 30 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_Delay48
# 31 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 32 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 20
# 33 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 34 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 35 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 36 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 30
# 37 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setvar VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1
# 38 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT
# 39 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep, MSGBOX_DEFAULT
# 40 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 41 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 43 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 44 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 45 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 46 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort::
# 47 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 48 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 49 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 50 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort, MSGBOX_DEFAULT
# 51 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 52 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 53 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 54 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 55 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 56 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 57 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast::
# 58 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterLeft
# 59 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 60 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 61 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 62 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest::
# 63 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterRight
# 64 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 65 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 66 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 67 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth::
# 68 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 69 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 70 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 71 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 72 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep:
# 73 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Hey!\n"
# 74 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "I remember your face!\p"
# 75 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "If you're here, it must mean that\n"
# 76 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "you're about to mess with us again!\p"
# 77 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "A punk like you, do you really think\n"
# 78 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "you can take on TEAM AQUA?\p"
# 79 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "I'd say you're too early by about\n"
# 80 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "a trillion years!\p"
# 81 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "You're a perfect fit for the likes of\n"
# 82 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "TEAM MAGMA!\p"
# 83 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Speaking of TEAM MAGMA, I hear they\n"
# 84 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "were spotted near MOSSDEEP.\p"
# 85 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "That bunch of goons, they sure don't\n"
# 86 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "look good near the sea!$"
# 87 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 88 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort:
# 89 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "A punk like you, do you really think\n"
# 90 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "you can take on TEAM AQUA?\p"
# 91 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "I'd say you're too early by about\n"
# 92 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "a trillion years!\p"
# 93 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "You're a perfect fit for the likes of\n"
# 94 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "TEAM MAGMA!\p"
# 95 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Speaking of TEAM MAGMA, I hear they\n"
# 96 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "were spotted near MOSSDEEP.\p"
# 97 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "That bunch of goons, they sure don't\n"
# 98 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "look good near the sea!$"
