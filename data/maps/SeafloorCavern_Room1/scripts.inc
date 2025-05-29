# 1 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room1/scripts.pory"
.set LOCALID_GRUNT1, 4
# 3 "data/maps/SeafloorCavern_Room1/scripts.pory"
.set LOCALID_GRUNT2, 5
# 4 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_MapScripts::
# 6 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.byte 0
# 7 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 8 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt1Grunt2::
# 9 "data/maps/SeafloorCavern_Room1/scripts.pory"
lockall
# 10 "data/maps/SeafloorCavern_Room1/scripts.pory"
playse SE_PIN
# 11 "data/maps/SeafloorCavern_Room1/scripts.pory"
applymovement LOCALID_GRUNT1, Common_Movement_ExclamationMark
# 12 "data/maps/SeafloorCavern_Room1/scripts.pory"
waitmovement 0
# 13 "data/maps/SeafloorCavern_Room1/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 14 "data/maps/SeafloorCavern_Room1/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 15 "data/maps/SeafloorCavern_Room1/scripts.pory"
waitmovement 0
# 16 "data/maps/SeafloorCavern_Room1/scripts.pory"
msgbox SeafloorCavern_Room1_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 17 "data/maps/SeafloorCavern_Room1/scripts.pory"
playse SE_PIN
# 18 "data/maps/SeafloorCavern_Room1/scripts.pory"
applymovement  LOCALID_GRUNT2, Common_Movement_ExclamationMark
# 19 "data/maps/SeafloorCavern_Room1/scripts.pory"
waitmovement 0
# 20 "data/maps/SeafloorCavern_Room1/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 21 "data/maps/SeafloorCavern_Room1/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 22 "data/maps/SeafloorCavern_Room1/scripts.pory"
waitmovement 0
# 23 "data/maps/SeafloorCavern_Room1/scripts.pory"
msgbox SeafloorCavern_Room1_Text_Grunt2Intro MSGBOX_AUTOCLOSE
# 24 "data/maps/SeafloorCavern_Room1/scripts.pory"
goto SeafloorCavern_Room1_EventScript_Grunt1Grunt2DoMultiBattle
# 25 "data/maps/SeafloorCavern_Room1/scripts.pory"
releaseall
# 26 "data/maps/SeafloorCavern_Room1/scripts.pory"
end
# 27 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 28 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt1Grunt2DoMultiBattle::
# 29 "data/maps/SeafloorCavern_Room1/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 30 "data/maps/SeafloorCavern_Room1/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_SEAFLOOR_CAVERN_1, SeafloorCavern_Room1_Text_Grunt1Defeat, TRAINER_GRUNT_SEAFLOOR_CAVERN_2, SeafloorCavern_Room1_Text_Grunt2Defeat, PARTNER_EMMIE
# 31 "data/maps/SeafloorCavern_Room1/scripts.pory"
switch VAR_RESULT
# 32 "data/maps/SeafloorCavern_Room1/scripts.pory"
case 1, SeafloorCavern_Room1_EventScript_Grunt1Grunt2Victory
# 33 "data/maps/SeafloorCavern_Room1/scripts.pory"
fadescreen FADE_TO_BLACK
# 34 "data/maps/SeafloorCavern_Room1/scripts.pory"
special SetCB2WhiteOut
# 35 "data/maps/SeafloorCavern_Room1/scripts.pory"
waitstate
# 36 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 37 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt1Grunt2Victory::
# 38 "data/maps/SeafloorCavern_Room1/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 39 "data/maps/SeafloorCavern_Room1/scripts.pory"
waitmovement 0
# 40 "data/maps/SeafloorCavern_Room1/scripts.pory"
msgbox SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/SeafloorCavern_Room1/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 42 "data/maps/SeafloorCavern_Room1/scripts.pory"
waitmovement 0
# 43 "data/maps/SeafloorCavern_Room1/scripts.pory"
msgbox SeafloorCavern_Room1_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/SeafloorCavern_Room1/scripts.pory"
addvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 45 "data/maps/SeafloorCavern_Room1/scripts.pory"
end
# 46 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 47 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt1::
# 48 "data/maps/SeafloorCavern_Room1/scripts.pory"
	faceplayer
# 49 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 51 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 52 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt2::
# 53 "data/maps/SeafloorCavern_Room1/scripts.pory"
	faceplayer
# 54 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 56 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 57 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Intro:
# 58 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "We don't need a kid around!\n"
# 59 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Go on home already!$"
# 60 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 61 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Defeat:
# 62 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I want to go home…$"
# 63 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 64 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1PostBattle:
# 65 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I want to get a promotion so I can\n"
# 66 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "boss around the GRUNTS…$"
# 67 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 68 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2Intro:
# 69 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "That submarine… It's tiny inside.\n"
# 70 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I'm sore all over!$"
# 71 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 72 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2Defeat:
# 73 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Losing makes me sore!$"
# 74 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 75 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2PostBattle:
# 76 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "That submarine we jacked, man,\n"
# 77 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "it's brutal as a ride.\l"
# 78 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "It's way too tight in there!$"
