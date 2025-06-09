# 1 "data/maps/SkyPillar_1F/scripts.pory"

# 2 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_MapScripts::
# 3 "data/maps/SkyPillar_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_1F_OnTransition
# 4 "data/maps/SkyPillar_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_1F_OnFrame
# 5 "data/maps/SkyPillar_1F/scripts.pory"
	.byte 0
# 6 "data/maps/SkyPillar_1F/scripts.pory"

# 7 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_OnFrame:
# 8 "data/maps/SkyPillar_1F/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 64, SkyPillar_1F_EventScript_ProgressEmmieState
# 9 "data/maps/SkyPillar_1F/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 67, SkyPillar_1F_EventScript_ProgressEmmieState
# 10 "data/maps/SkyPillar_1F/scripts.pory"
	.2byte 0
# 11 "data/maps/SkyPillar_1F/scripts.pory"

# 12 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_ProgressEmmieState::
# 13 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 65
# 14 "data/maps/SkyPillar_1F/scripts.pory"
	return
# 15 "data/maps/SkyPillar_1F/scripts.pory"

# 16 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_OnTransition:
# 17 "data/maps/SkyPillar_1F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 8, SkyPillar_1F_EventScript_CleanFloor
# 18 "data/maps/SkyPillar_1F/scripts.pory"
	end
# 19 "data/maps/SkyPillar_1F/scripts.pory"

# 20 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_CleanFloor::
# 21 "data/maps/SkyPillar_1F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_1F_CLEAN
# 22 "data/maps/SkyPillar_1F/scripts.pory"
	return
# 23 "data/maps/SkyPillar_1F/scripts.pory"

# 24 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_AquaGrunt1Intro:
# 25 "data/maps/SkyPillar_1F/scripts.pory"
	.string "Team Magma will never prevail!$"
# 26 "data/maps/SkyPillar_1F/scripts.pory"

# 27 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_MagmaGrunt1Intro:
# 28 "data/maps/SkyPillar_1F/scripts.pory"
	.string "No, Team Aqua will fall!$"
# 29 "data/maps/SkyPillar_1F/scripts.pory"

# 30 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_AquaGrunt1Defeat:
# 31 "data/maps/SkyPillar_1F/scripts.pory"
	.string "I am but part of a bigger movement!$"
# 32 "data/maps/SkyPillar_1F/scripts.pory"

# 33 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_MagmaGrunt1Defeat:
# 34 "data/maps/SkyPillar_1F/scripts.pory"
	.string "Team Aqua have nothing on us!$"
# 35 "data/maps/SkyPillar_1F/scripts.pory"

# 36 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_AquaGrunt1PostBattle:
# 37 "data/maps/SkyPillar_1F/scripts.pory"
	.string "Neither team seems to be able to beat\n"
# 38 "data/maps/SkyPillar_1F/scripts.pory"
	.string "you two…$"
# 39 "data/maps/SkyPillar_1F/scripts.pory"

# 40 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_MagmaGrunt1PostBattle:
# 41 "data/maps/SkyPillar_1F/scripts.pory"
	.string "Maybe we have nothing on you…$"
# 42 "data/maps/SkyPillar_1F/scripts.pory"

# 43 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1::
# 44 "data/maps/SkyPillar_1F/scripts.pory"
	faceplayer
# 45 "data/maps/SkyPillar_1F/scripts.pory"
	msgbox SkyPillar_1F_Text_SkyPillar_AquaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/SkyPillar_1F/scripts.pory"
	end
# 47 "data/maps/SkyPillar_1F/scripts.pory"

# 48 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_MagmaGrunt1::
# 49 "data/maps/SkyPillar_1F/scripts.pory"
	faceplayer
# 50 "data/maps/SkyPillar_1F/scripts.pory"
	msgbox SkyPillar_1F_Text_SkyPillar_MagmaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/SkyPillar_1F/scripts.pory"
	end
# 52 "data/maps/SkyPillar_1F/scripts.pory"

# 53 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1::
# 54 "data/maps/SkyPillar_1F/scripts.pory"
lockall
# 55 "data/maps/SkyPillar_1F/scripts.pory"
playse SE_PIN
# 56 "data/maps/SkyPillar_1F/scripts.pory"
applymovement LOCALID_SKYPILLAR_AQUAGRUNT1, Common_Movement_ExclamationMark
# 57 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 58 "data/maps/SkyPillar_1F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 59 "data/maps/SkyPillar_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 60 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 61 "data/maps/SkyPillar_1F/scripts.pory"
msgbox SkyPillar_1F_Text_SkyPillar_AquaGrunt1Intro MSGBOX_AUTOCLOSE
# 62 "data/maps/SkyPillar_1F/scripts.pory"
playse SE_PIN
# 63 "data/maps/SkyPillar_1F/scripts.pory"
applymovement  LOCALID_SKYPILLAR_MAGMAGRUNT1, Common_Movement_ExclamationMark
# 64 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 65 "data/maps/SkyPillar_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 66 "data/maps/SkyPillar_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 67 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 68 "data/maps/SkyPillar_1F/scripts.pory"
msgbox SkyPillar_1F_Text_SkyPillar_MagmaGrunt1Intro MSGBOX_AUTOCLOSE
# 69 "data/maps/SkyPillar_1F/scripts.pory"
goto SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1DoMultiBattle
# 70 "data/maps/SkyPillar_1F/scripts.pory"
releaseall
# 71 "data/maps/SkyPillar_1F/scripts.pory"
end
# 72 "data/maps/SkyPillar_1F/scripts.pory"

# 73 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1DoMultiBattle::
# 74 "data/maps/SkyPillar_1F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_AQUAGRUNT1, MOVEMENT_TYPE_FACE_UP
# 75 "data/maps/SkyPillar_1F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_MAGMAGRUNT1, MOVEMENT_TYPE_FACE_DOWN
# 76 "data/maps/SkyPillar_1F/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 77 "data/maps/SkyPillar_1F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_AQUA_SKY_PILLAR_1, SkyPillar_1F_Text_SkyPillar_AquaGrunt1Defeat, TRAINER_GRUNT_MAGMA_SKY_PILLAR_1, SkyPillar_1F_Text_SkyPillar_MagmaGrunt1Defeat, PARTNER_EMMIE
# 78 "data/maps/SkyPillar_1F/scripts.pory"
switch VAR_RESULT
# 79 "data/maps/SkyPillar_1F/scripts.pory"
case 1, SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1Victory
# 80 "data/maps/SkyPillar_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 81 "data/maps/SkyPillar_1F/scripts.pory"
special SetCB2WhiteOut
# 82 "data/maps/SkyPillar_1F/scripts.pory"
waitstate
# 83 "data/maps/SkyPillar_1F/scripts.pory"

# 84 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1Victory::
# 85 "data/maps/SkyPillar_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 86 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 87 "data/maps/SkyPillar_1F/scripts.pory"
msgbox SkyPillar_1F_Text_SkyPillar_AquaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/SkyPillar_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 89 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 90 "data/maps/SkyPillar_1F/scripts.pory"
msgbox SkyPillar_1F_Text_SkyPillar_MagmaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/SkyPillar_1F/scripts.pory"
addvar VAR_SKY_PILLAR_STATE, 1
# 92 "data/maps/SkyPillar_1F/scripts.pory"
end
