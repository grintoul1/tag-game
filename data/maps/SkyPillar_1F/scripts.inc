# 1 "data/maps/SkyPillar_1F/scripts.pory"

# 2 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_MapScripts::
# 3 "data/maps/SkyPillar_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_1F_OnTransition
# 4 "data/maps/SkyPillar_1F/scripts.pory"
	.byte 0
# 5 "data/maps/SkyPillar_1F/scripts.pory"

# 6 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_OnTransition:
# 7 "data/maps/SkyPillar_1F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 8, SkyPillar_1F_EventScript_CleanFloor
# 8 "data/maps/SkyPillar_1F/scripts.pory"
	end
# 9 "data/maps/SkyPillar_1F/scripts.pory"

# 10 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_CleanFloor::
# 11 "data/maps/SkyPillar_1F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_1F_CLEAN
# 12 "data/maps/SkyPillar_1F/scripts.pory"
	return
# 13 "data/maps/SkyPillar_1F/scripts.pory"

# 14 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_AquaGrunt1Intro:
# 15 "data/maps/SkyPillar_1F/scripts.pory"
	.string "Team Magma will never prevail!$"
# 16 "data/maps/SkyPillar_1F/scripts.pory"

# 17 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_MagmaGrunt1Intro:
# 18 "data/maps/SkyPillar_1F/scripts.pory"
	.string "No, Team Aqua will fall!$"
# 19 "data/maps/SkyPillar_1F/scripts.pory"

# 20 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_AquaGrunt1Defeat:
# 21 "data/maps/SkyPillar_1F/scripts.pory"
	.string "I am but part of a bigger movement!$"
# 22 "data/maps/SkyPillar_1F/scripts.pory"

# 23 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_MagmaGrunt1Defeat:
# 24 "data/maps/SkyPillar_1F/scripts.pory"
	.string "Team Aqua have nothing on us!$"
# 25 "data/maps/SkyPillar_1F/scripts.pory"

# 26 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_AquaGrunt1PostBattle:
# 27 "data/maps/SkyPillar_1F/scripts.pory"
	.string "Neither team seems to be able to beat\n"
# 28 "data/maps/SkyPillar_1F/scripts.pory"
	.string "you two…$"
# 29 "data/maps/SkyPillar_1F/scripts.pory"

# 30 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_MagmaGrunt1PostBattle:
# 31 "data/maps/SkyPillar_1F/scripts.pory"
	.string "Maybe we have nothing on you…$"
# 32 "data/maps/SkyPillar_1F/scripts.pory"

# 33 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1::
# 34 "data/maps/SkyPillar_1F/scripts.pory"
	faceplayer
# 35 "data/maps/SkyPillar_1F/scripts.pory"
	msgbox SkyPillar_1F_Text_SkyPillar_AquaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/SkyPillar_1F/scripts.pory"
	end
# 37 "data/maps/SkyPillar_1F/scripts.pory"

# 38 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_MagmaGrunt1::
# 39 "data/maps/SkyPillar_1F/scripts.pory"
	faceplayer
# 40 "data/maps/SkyPillar_1F/scripts.pory"
	msgbox SkyPillar_1F_Text_SkyPillar_MagmaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/SkyPillar_1F/scripts.pory"
	end
# 42 "data/maps/SkyPillar_1F/scripts.pory"

# 43 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1::
# 44 "data/maps/SkyPillar_1F/scripts.pory"
lockall
# 45 "data/maps/SkyPillar_1F/scripts.pory"
playse SE_PIN
# 46 "data/maps/SkyPillar_1F/scripts.pory"
applymovement LOCALID_SKYPILLAR_AQUAGRUNT1, Common_Movement_ExclamationMark
# 47 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 48 "data/maps/SkyPillar_1F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 49 "data/maps/SkyPillar_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 50 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 51 "data/maps/SkyPillar_1F/scripts.pory"
msgbox SkyPillar_1F_Text_SkyPillar_AquaGrunt1Intro MSGBOX_AUTOCLOSE
# 52 "data/maps/SkyPillar_1F/scripts.pory"
playse SE_PIN
# 53 "data/maps/SkyPillar_1F/scripts.pory"
applymovement  LOCALID_SKYPILLAR_MAGMAGRUNT1, Common_Movement_ExclamationMark
# 54 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 55 "data/maps/SkyPillar_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 56 "data/maps/SkyPillar_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 57 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 58 "data/maps/SkyPillar_1F/scripts.pory"
msgbox SkyPillar_1F_Text_SkyPillar_MagmaGrunt1Intro MSGBOX_AUTOCLOSE
# 59 "data/maps/SkyPillar_1F/scripts.pory"
goto SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1DoMultiBattle
# 60 "data/maps/SkyPillar_1F/scripts.pory"
releaseall
# 61 "data/maps/SkyPillar_1F/scripts.pory"
end
# 62 "data/maps/SkyPillar_1F/scripts.pory"

# 63 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1DoMultiBattle::
# 64 "data/maps/SkyPillar_1F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_AQUAGRUNT1, MOVEMENT_TYPE_FACE_UP
# 65 "data/maps/SkyPillar_1F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_MAGMAGRUNT1, MOVEMENT_TYPE_FACE_DOWN
# 66 "data/maps/SkyPillar_1F/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 67 "data/maps/SkyPillar_1F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_AQUA_SKY_PILLAR_1, SkyPillar_1F_Text_SkyPillar_AquaGrunt1Defeat, TRAINER_GRUNT_MAGMA_SKY_PILLAR_1, SkyPillar_1F_Text_SkyPillar_MagmaGrunt1Defeat, PARTNER_EMMIE
# 68 "data/maps/SkyPillar_1F/scripts.pory"
switch VAR_RESULT
# 69 "data/maps/SkyPillar_1F/scripts.pory"
case 1, SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1Victory
# 70 "data/maps/SkyPillar_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 71 "data/maps/SkyPillar_1F/scripts.pory"
special SetCB2WhiteOut
# 72 "data/maps/SkyPillar_1F/scripts.pory"
waitstate
# 73 "data/maps/SkyPillar_1F/scripts.pory"

# 74 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1Victory::
# 75 "data/maps/SkyPillar_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 76 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 77 "data/maps/SkyPillar_1F/scripts.pory"
msgbox SkyPillar_1F_Text_SkyPillar_AquaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/SkyPillar_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 79 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 80 "data/maps/SkyPillar_1F/scripts.pory"
msgbox SkyPillar_1F_Text_SkyPillar_MagmaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/SkyPillar_1F/scripts.pory"
addvar VAR_SKY_PILLAR_STATE, 1
# 82 "data/maps/SkyPillar_1F/scripts.pory"
end
