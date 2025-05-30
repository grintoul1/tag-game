# 1 "data/maps/SkyPillar_3F/scripts.pory"

# 2 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_MapScripts::
# 3 "data/maps/SkyPillar_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_3F_OnTransition
# 4 "data/maps/SkyPillar_3F/scripts.pory"
	.byte 0
# 5 "data/maps/SkyPillar_3F/scripts.pory"

# 6 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_OnTransition:
# 7 "data/maps/SkyPillar_3F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 8, SkyPillar_3F_EventScript_CleanFloor
# 8 "data/maps/SkyPillar_3F/scripts.pory"
	call_if_gt VAR_SKY_PILLAR_STATE, 3, SkyPillar_3F_EventScript_GruntMovements
# 9 "data/maps/SkyPillar_3F/scripts.pory"
	end
# 10 "data/maps/SkyPillar_3F/scripts.pory"

# 11 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_GruntMovements::
# 12 "data/maps/SkyPillar_3F/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_AQUAGRUNT4, MOVEMENT_TYPE_FACE_LEFT
# 13 "data/maps/SkyPillar_3F/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MAGMAGRUNT4, MOVEMENT_TYPE_FACE_RIGHT
# 14 "data/maps/SkyPillar_3F/scripts.pory"
	return
# 15 "data/maps/SkyPillar_3F/scripts.pory"

# 16 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_CleanFloor::
# 17 "data/maps/SkyPillar_3F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_3F_CLEAN
# 18 "data/maps/SkyPillar_3F/scripts.pory"
	return
# 19 "data/maps/SkyPillar_3F/scripts.pory"

# 20 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_Text_SkyPillar_AquaGrunt4Intro:
# 21 "data/maps/SkyPillar_3F/scripts.pory"
	.string "This guy won't shut up about his leg!$"
# 22 "data/maps/SkyPillar_3F/scripts.pory"

# 23 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_Text_SkyPillar_MagmaGrunt4Intro:
# 24 "data/maps/SkyPillar_3F/scripts.pory"
	.string "First I fall down a hole in Mt Pyre and\n"
# 25 "data/maps/SkyPillar_3F/scripts.pory"
	.string "now here?$"
# 26 "data/maps/SkyPillar_3F/scripts.pory"

# 27 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_Text_SkyPillar_AquaGrunt4Defeat:
# 28 "data/maps/SkyPillar_3F/scripts.pory"
	.string "I suppose I did fall on him…$"
# 29 "data/maps/SkyPillar_3F/scripts.pory"

# 30 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_Text_SkyPillar_MagmaGrunt4Defeat:
# 31 "data/maps/SkyPillar_3F/scripts.pory"
	.string "I wonder if Maxie will cover my medical\n"
# 32 "data/maps/SkyPillar_3F/scripts.pory"
	.string "bills…$"
# 33 "data/maps/SkyPillar_3F/scripts.pory"

# 34 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_Text_SkyPillar_AquaGrunt4PostBattle:
# 35 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Is this guy ever going to give it a rest?$"
# 36 "data/maps/SkyPillar_3F/scripts.pory"

# 37 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_Text_SkyPillar_MagmaGrunt4PostBattle:
# 38 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Just go ahead will you, it's not like I\n"
# 39 "data/maps/SkyPillar_3F/scripts.pory"
	.string "can chase you upstairs anymore…$"
# 40 "data/maps/SkyPillar_3F/scripts.pory"

# 41 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_SkyPillar_AquaGrunt4::
# 42 "data/maps/SkyPillar_3F/scripts.pory"
	faceplayer
# 43 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox SkyPillar_3F_Text_SkyPillar_AquaGrunt4PostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/SkyPillar_3F/scripts.pory"
	end
# 45 "data/maps/SkyPillar_3F/scripts.pory"

# 46 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_SkyPillar_MagmaGrunt4::
# 47 "data/maps/SkyPillar_3F/scripts.pory"
	faceplayer
# 48 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox SkyPillar_3F_Text_SkyPillar_MagmaGrunt4PostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/SkyPillar_3F/scripts.pory"
	end
# 50 "data/maps/SkyPillar_3F/scripts.pory"

# 51 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_SkyPillar_AquaGrunt4SkyPillar_MagmaGrunt4::
# 52 "data/maps/SkyPillar_3F/scripts.pory"
lockall
# 53 "data/maps/SkyPillar_3F/scripts.pory"
playse SE_PIN
# 54 "data/maps/SkyPillar_3F/scripts.pory"
applymovement LOCALID_SKYPILLAR_AQUAGRUNT4, Common_Movement_ExclamationMark
# 55 "data/maps/SkyPillar_3F/scripts.pory"
waitmovement 0
# 56 "data/maps/SkyPillar_3F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 57 "data/maps/SkyPillar_3F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 58 "data/maps/SkyPillar_3F/scripts.pory"
waitmovement 0
# 59 "data/maps/SkyPillar_3F/scripts.pory"
msgbox SkyPillar_3F_Text_SkyPillar_AquaGrunt4Intro MSGBOX_AUTOCLOSE
# 60 "data/maps/SkyPillar_3F/scripts.pory"
playse SE_PIN
# 61 "data/maps/SkyPillar_3F/scripts.pory"
applymovement  LOCALID_SKYPILLAR_MAGMAGRUNT4, Common_Movement_ExclamationMark
# 62 "data/maps/SkyPillar_3F/scripts.pory"
waitmovement 0
# 63 "data/maps/SkyPillar_3F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 64 "data/maps/SkyPillar_3F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 65 "data/maps/SkyPillar_3F/scripts.pory"
waitmovement 0
# 66 "data/maps/SkyPillar_3F/scripts.pory"
msgbox SkyPillar_3F_Text_SkyPillar_MagmaGrunt4Intro MSGBOX_AUTOCLOSE
# 67 "data/maps/SkyPillar_3F/scripts.pory"
goto SkyPillar_3F_EventScript_SkyPillar_AquaGrunt4SkyPillar_MagmaGrunt4DoMultiBattle
# 68 "data/maps/SkyPillar_3F/scripts.pory"
releaseall
# 69 "data/maps/SkyPillar_3F/scripts.pory"
end
# 70 "data/maps/SkyPillar_3F/scripts.pory"

# 71 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_SkyPillar_AquaGrunt4SkyPillar_MagmaGrunt4DoMultiBattle::
# 72 "data/maps/SkyPillar_3F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_AQUAGRUNT4, MOVEMENT_TYPE_FACE_LEFT
# 73 "data/maps/SkyPillar_3F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_MAGMAGRUNT4, MOVEMENT_TYPE_FACE_RIGHT
# 74 "data/maps/SkyPillar_3F/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 75 "data/maps/SkyPillar_3F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_AQUA_SKY_PILLAR_4, SkyPillar_3F_Text_SkyPillar_AquaGrunt4Defeat, TRAINER_GRUNT_MAGMA_SKY_PILLAR_4, SkyPillar_3F_Text_SkyPillar_MagmaGrunt4Defeat, PARTNER_EMMIE
# 76 "data/maps/SkyPillar_3F/scripts.pory"
switch VAR_RESULT
# 77 "data/maps/SkyPillar_3F/scripts.pory"
case 1, SkyPillar_3F_EventScript_SkyPillar_AquaGrunt4SkyPillar_MagmaGrunt4Victory
# 78 "data/maps/SkyPillar_3F/scripts.pory"
fadescreen FADE_TO_BLACK
# 79 "data/maps/SkyPillar_3F/scripts.pory"
special SetCB2WhiteOut
# 80 "data/maps/SkyPillar_3F/scripts.pory"
waitstate
# 81 "data/maps/SkyPillar_3F/scripts.pory"

# 82 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_SkyPillar_AquaGrunt4SkyPillar_MagmaGrunt4Victory::
# 83 "data/maps/SkyPillar_3F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 84 "data/maps/SkyPillar_3F/scripts.pory"
waitmovement 0
# 85 "data/maps/SkyPillar_3F/scripts.pory"
msgbox SkyPillar_3F_Text_SkyPillar_AquaGrunt4PostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/SkyPillar_3F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 87 "data/maps/SkyPillar_3F/scripts.pory"
waitmovement 0
# 88 "data/maps/SkyPillar_3F/scripts.pory"
msgbox SkyPillar_3F_Text_SkyPillar_MagmaGrunt4PostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/SkyPillar_3F/scripts.pory"
addvar VAR_SKY_PILLAR_STATE, 1
# 90 "data/maps/SkyPillar_3F/scripts.pory"
end
