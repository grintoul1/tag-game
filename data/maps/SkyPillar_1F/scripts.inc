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
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
# 14 "data/maps/SkyPillar_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 65
# 15 "data/maps/SkyPillar_1F/scripts.pory"
	return
# 16 "data/maps/SkyPillar_1F/scripts.pory"

# 17 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_OnTransition:
# 18 "data/maps/SkyPillar_1F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 8, SkyPillar_1F_EventScript_CleanFloor
# 19 "data/maps/SkyPillar_1F/scripts.pory"
	end
# 20 "data/maps/SkyPillar_1F/scripts.pory"

# 21 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_CleanFloor::
# 22 "data/maps/SkyPillar_1F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_1F_CLEAN
# 23 "data/maps/SkyPillar_1F/scripts.pory"
	return
# 24 "data/maps/SkyPillar_1F/scripts.pory"

# 25 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_AquaGrunt1Intro:
# 26 "data/maps/SkyPillar_1F/scripts.pory"
	.string "Team Magma will never prevail!$"
# 27 "data/maps/SkyPillar_1F/scripts.pory"

# 28 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_MagmaGrunt1Intro:
# 29 "data/maps/SkyPillar_1F/scripts.pory"
	.string "No, Team Aqua will fall!$"
# 30 "data/maps/SkyPillar_1F/scripts.pory"

# 31 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_AquaGrunt1Defeat:
# 32 "data/maps/SkyPillar_1F/scripts.pory"
	.string "I am but part of a bigger movement!$"
# 33 "data/maps/SkyPillar_1F/scripts.pory"

# 34 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_MagmaGrunt1Defeat:
# 35 "data/maps/SkyPillar_1F/scripts.pory"
	.string "Team Aqua have nothing on us!$"
# 36 "data/maps/SkyPillar_1F/scripts.pory"

# 37 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_AquaGrunt1PostBattle:
# 38 "data/maps/SkyPillar_1F/scripts.pory"
	.string "Neither team seems to be able to beat\n"
# 39 "data/maps/SkyPillar_1F/scripts.pory"
	.string "you two…$"
# 40 "data/maps/SkyPillar_1F/scripts.pory"

# 41 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_Text_SkyPillar_MagmaGrunt1PostBattle:
# 42 "data/maps/SkyPillar_1F/scripts.pory"
	.string "Maybe we have nothing on you…$"
# 43 "data/maps/SkyPillar_1F/scripts.pory"

# 44 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1::
# 45 "data/maps/SkyPillar_1F/scripts.pory"
	faceplayer
# 46 "data/maps/SkyPillar_1F/scripts.pory"
	msgbox SkyPillar_1F_Text_SkyPillar_AquaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/SkyPillar_1F/scripts.pory"
	end
# 48 "data/maps/SkyPillar_1F/scripts.pory"

# 49 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_MagmaGrunt1::
# 50 "data/maps/SkyPillar_1F/scripts.pory"
	faceplayer
# 51 "data/maps/SkyPillar_1F/scripts.pory"
	msgbox SkyPillar_1F_Text_SkyPillar_MagmaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/SkyPillar_1F/scripts.pory"
	end
# 53 "data/maps/SkyPillar_1F/scripts.pory"

# 54 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1::
# 55 "data/maps/SkyPillar_1F/scripts.pory"
lockall
# 56 "data/maps/SkyPillar_1F/scripts.pory"
playse SE_PIN
# 57 "data/maps/SkyPillar_1F/scripts.pory"
applymovement LOCALID_SKYPILLAR_AQUAGRUNT1, Common_Movement_ExclamationMark
# 58 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 59 "data/maps/SkyPillar_1F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 60 "data/maps/SkyPillar_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 61 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 62 "data/maps/SkyPillar_1F/scripts.pory"
msgbox SkyPillar_1F_Text_SkyPillar_AquaGrunt1Intro MSGBOX_AUTOCLOSE
# 63 "data/maps/SkyPillar_1F/scripts.pory"
playse SE_PIN
# 64 "data/maps/SkyPillar_1F/scripts.pory"
applymovement  LOCALID_SKYPILLAR_MAGMAGRUNT1, Common_Movement_ExclamationMark
# 65 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 66 "data/maps/SkyPillar_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 67 "data/maps/SkyPillar_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 68 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 69 "data/maps/SkyPillar_1F/scripts.pory"
msgbox SkyPillar_1F_Text_SkyPillar_MagmaGrunt1Intro MSGBOX_AUTOCLOSE
# 70 "data/maps/SkyPillar_1F/scripts.pory"
goto SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1DoMultiBattle
# 71 "data/maps/SkyPillar_1F/scripts.pory"
releaseall
# 72 "data/maps/SkyPillar_1F/scripts.pory"
end
# 73 "data/maps/SkyPillar_1F/scripts.pory"

# 74 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1DoMultiBattle::
# 75 "data/maps/SkyPillar_1F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_AQUAGRUNT1, MOVEMENT_TYPE_FACE_UP
# 76 "data/maps/SkyPillar_1F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_MAGMAGRUNT1, MOVEMENT_TYPE_FACE_DOWN
# 77 "data/maps/SkyPillar_1F/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 78 "data/maps/SkyPillar_1F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_AQUA_SKY_PILLAR_1, SkyPillar_1F_Text_SkyPillar_AquaGrunt1Defeat, TRAINER_GRUNT_MAGMA_SKY_PILLAR_1, SkyPillar_1F_Text_SkyPillar_MagmaGrunt1Defeat, PARTNER_EMMIE
# 79 "data/maps/SkyPillar_1F/scripts.pory"
switch VAR_RESULT
# 80 "data/maps/SkyPillar_1F/scripts.pory"
case 1, SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1Victory
# 81 "data/maps/SkyPillar_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 82 "data/maps/SkyPillar_1F/scripts.pory"
special SetCB2WhiteOut
# 83 "data/maps/SkyPillar_1F/scripts.pory"
waitstate
# 84 "data/maps/SkyPillar_1F/scripts.pory"

# 85 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_SkyPillar_AquaGrunt1SkyPillar_MagmaGrunt1Victory::
# 86 "data/maps/SkyPillar_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 88 "data/maps/SkyPillar_1F/scripts.pory"
msgbox SkyPillar_1F_Text_SkyPillar_AquaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/SkyPillar_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 90 "data/maps/SkyPillar_1F/scripts.pory"
waitmovement 0
# 91 "data/maps/SkyPillar_1F/scripts.pory"
msgbox SkyPillar_1F_Text_SkyPillar_MagmaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/SkyPillar_1F/scripts.pory"
addvar VAR_SKY_PILLAR_STATE, 1
# 93 "data/maps/SkyPillar_1F/scripts.pory"
end
