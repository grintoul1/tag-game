# 1 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room4/scripts.pory"
.set LOCALID_GRUNT3, 1
# 3 "data/maps/SeafloorCavern_Room4/scripts.pory"
.set LOCALID_GRUNT4, 2
# 4 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_MapScripts::
# 6 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.byte 0
# 7 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 8 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt3Grunt4::
# 9 "data/maps/SeafloorCavern_Room4/scripts.pory"
lockall
# 10 "data/maps/SeafloorCavern_Room4/scripts.pory"
playse SE_PIN
# 11 "data/maps/SeafloorCavern_Room4/scripts.pory"
applymovement LOCALID_GRUNT3, Common_Movement_ExclamationMark
# 12 "data/maps/SeafloorCavern_Room4/scripts.pory"
waitmovement 0
# 13 "data/maps/SeafloorCavern_Room4/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 14 "data/maps/SeafloorCavern_Room4/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 15 "data/maps/SeafloorCavern_Room4/scripts.pory"
waitmovement 0
# 16 "data/maps/SeafloorCavern_Room4/scripts.pory"
msgbox SeafloorCavern_Room4_Text_Grunt3Intro MSGBOX_AUTOCLOSE
# 17 "data/maps/SeafloorCavern_Room4/scripts.pory"
playse SE_PIN
# 18 "data/maps/SeafloorCavern_Room4/scripts.pory"
applymovement  LOCALID_GRUNT4, Common_Movement_ExclamationMark
# 19 "data/maps/SeafloorCavern_Room4/scripts.pory"
waitmovement 0
# 20 "data/maps/SeafloorCavern_Room4/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 21 "data/maps/SeafloorCavern_Room4/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 22 "data/maps/SeafloorCavern_Room4/scripts.pory"
waitmovement 0
# 23 "data/maps/SeafloorCavern_Room4/scripts.pory"
msgbox SeafloorCavern_Room4_Text_Grunt4Intro MSGBOX_AUTOCLOSE
# 24 "data/maps/SeafloorCavern_Room4/scripts.pory"
goto SeafloorCavern_Room4_EventScript_Grunt3Grunt4DoMultiBattle
# 25 "data/maps/SeafloorCavern_Room4/scripts.pory"
releaseall
# 26 "data/maps/SeafloorCavern_Room4/scripts.pory"
end
# 27 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 28 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt3Grunt4DoMultiBattle::
# 29 "data/maps/SeafloorCavern_Room4/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 30 "data/maps/SeafloorCavern_Room4/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_SEAFLOOR_CAVERN_3, SeafloorCavern_Room4_Text_Grunt3Defeat, TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Defeat, PARTNER_EMMIE
# 31 "data/maps/SeafloorCavern_Room4/scripts.pory"
switch VAR_RESULT
# 32 "data/maps/SeafloorCavern_Room4/scripts.pory"
case 1, SeafloorCavern_Room4_EventScript_Grunt3Grunt4Victory
# 33 "data/maps/SeafloorCavern_Room4/scripts.pory"
fadescreen FADE_TO_BLACK
# 34 "data/maps/SeafloorCavern_Room4/scripts.pory"
special SetCB2WhiteOut
# 35 "data/maps/SeafloorCavern_Room4/scripts.pory"
waitstate
# 36 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 37 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt3Grunt4Victory::
# 38 "data/maps/SeafloorCavern_Room4/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 39 "data/maps/SeafloorCavern_Room4/scripts.pory"
waitmovement 0
# 40 "data/maps/SeafloorCavern_Room4/scripts.pory"
msgbox SeafloorCavern_Room4_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/SeafloorCavern_Room4/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 42 "data/maps/SeafloorCavern_Room4/scripts.pory"
waitmovement 0
# 43 "data/maps/SeafloorCavern_Room4/scripts.pory"
msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/SeafloorCavern_Room4/scripts.pory"
clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 45 "data/maps/SeafloorCavern_Room4/scripts.pory"
addvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 46 "data/maps/SeafloorCavern_Room4/scripts.pory"
end
# 47 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 48 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt3::
# 49 "data/maps/SeafloorCavern_Room4/scripts.pory"
	faceplayer
# 50 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end
# 52 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 53 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt4::
# 54 "data/maps/SeafloorCavern_Room4/scripts.pory"
	faceplayer
# 55 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end
# 57 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 58 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3Intro:
# 59 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Who are you?\n"
# 60 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Where did you come in from?$"
# 61 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 62 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3Defeat:
# 63 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Lost it…$"
# 64 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 65 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3PostBattle:
# 66 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I can't find the way out!\p"
# 67 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I'm not afraid. Don't get me wrong!$"
# 68 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 69 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4Intro:
# 70 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Who are you?\n"
# 71 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Where do you think you're going?$"
# 72 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 73 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4Defeat:
# 74 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I failed to win!$"
# 75 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 76 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4PostBattle:
# 77 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "My partner forgot the map in that\n"
# 78 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "submarine!\p"
# 79 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "How's that for being useless?$"
