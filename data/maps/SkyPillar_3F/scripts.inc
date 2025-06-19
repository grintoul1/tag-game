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
	end
# 9 "data/maps/SkyPillar_3F/scripts.pory"

# 10 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_CleanFloor::
# 11 "data/maps/SkyPillar_3F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_3F_CLEAN
# 12 "data/maps/SkyPillar_3F/scripts.pory"
	return
# 13 "data/maps/SkyPillar_3F/scripts.pory"

# 14 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_Text_SkyPillar_AquaGrunt4Intro:
# 15 "data/maps/SkyPillar_3F/scripts.pory"
	.string "This guy won't shut up about his leg!$"
# 16 "data/maps/SkyPillar_3F/scripts.pory"

# 17 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_Text_SkyPillar_MagmaGrunt4Intro:
# 18 "data/maps/SkyPillar_3F/scripts.pory"
	.string "First I fall down a hole in Mt Pyre and\n"
# 19 "data/maps/SkyPillar_3F/scripts.pory"
	.string "now here?$"
# 20 "data/maps/SkyPillar_3F/scripts.pory"

# 21 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_Text_SkyPillar_AquaGrunt4Defeat:
# 22 "data/maps/SkyPillar_3F/scripts.pory"
	.string "I suppose I did fall on him…$"
# 23 "data/maps/SkyPillar_3F/scripts.pory"

# 24 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_Text_SkyPillar_MagmaGrunt4Defeat:
# 25 "data/maps/SkyPillar_3F/scripts.pory"
	.string "I wonder if Maxie will cover my medical\n"
# 26 "data/maps/SkyPillar_3F/scripts.pory"
	.string "bills…$"
# 27 "data/maps/SkyPillar_3F/scripts.pory"

# 28 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_Text_SkyPillar_AquaGrunt4PostBattle:
# 29 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Is this guy ever going to give it a rest?$"
# 30 "data/maps/SkyPillar_3F/scripts.pory"

# 31 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_Text_SkyPillar_MagmaGrunt4PostBattle:
# 32 "data/maps/SkyPillar_3F/scripts.pory"
	.string "Just go ahead will you, it's not like I\n"
# 33 "data/maps/SkyPillar_3F/scripts.pory"
	.string "can chase you upstairs anymore…$"
# 34 "data/maps/SkyPillar_3F/scripts.pory"

# 35 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_SkyPillar_AquaGrunt4::
# 36 "data/maps/SkyPillar_3F/scripts.pory"
	faceplayer
# 37 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox SkyPillar_3F_Text_SkyPillar_AquaGrunt4PostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/SkyPillar_3F/scripts.pory"
	end
# 39 "data/maps/SkyPillar_3F/scripts.pory"

# 40 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_SkyPillar_MagmaGrunt4::
# 41 "data/maps/SkyPillar_3F/scripts.pory"
	faceplayer
# 42 "data/maps/SkyPillar_3F/scripts.pory"
	msgbox SkyPillar_3F_Text_SkyPillar_MagmaGrunt4PostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/SkyPillar_3F/scripts.pory"
	end
# 44 "data/maps/SkyPillar_3F/scripts.pory"

# 45 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_SkyPillar_AquaGrunt4SkyPillar_MagmaGrunt4::
# 46 "data/maps/SkyPillar_3F/scripts.pory"
lockall
# 47 "data/maps/SkyPillar_3F/scripts.pory"
playse SE_PIN
# 48 "data/maps/SkyPillar_3F/scripts.pory"
applymovement LOCALID_SKYPILLAR_AQUAGRUNT4, Common_Movement_ExclamationMark
# 49 "data/maps/SkyPillar_3F/scripts.pory"
waitmovement 0
# 50 "data/maps/SkyPillar_3F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 51 "data/maps/SkyPillar_3F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 52 "data/maps/SkyPillar_3F/scripts.pory"
waitmovement 0
# 53 "data/maps/SkyPillar_3F/scripts.pory"
msgbox SkyPillar_3F_Text_SkyPillar_AquaGrunt4Intro MSGBOX_AUTOCLOSE
# 54 "data/maps/SkyPillar_3F/scripts.pory"
playse SE_PIN
# 55 "data/maps/SkyPillar_3F/scripts.pory"
applymovement  LOCALID_SKYPILLAR_MAGMAGRUNT4, Common_Movement_ExclamationMark
# 56 "data/maps/SkyPillar_3F/scripts.pory"
waitmovement 0
# 57 "data/maps/SkyPillar_3F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 58 "data/maps/SkyPillar_3F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 59 "data/maps/SkyPillar_3F/scripts.pory"
waitmovement 0
# 60 "data/maps/SkyPillar_3F/scripts.pory"
msgbox SkyPillar_3F_Text_SkyPillar_MagmaGrunt4Intro MSGBOX_AUTOCLOSE
# 61 "data/maps/SkyPillar_3F/scripts.pory"
goto SkyPillar_3F_EventScript_SkyPillar_AquaGrunt4SkyPillar_MagmaGrunt4DoMultiBattle
# 62 "data/maps/SkyPillar_3F/scripts.pory"
releaseall
# 63 "data/maps/SkyPillar_3F/scripts.pory"
end
# 64 "data/maps/SkyPillar_3F/scripts.pory"

# 65 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_SkyPillar_AquaGrunt4SkyPillar_MagmaGrunt4DoMultiBattle::
# 66 "data/maps/SkyPillar_3F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_AQUAGRUNT4, MOVEMENT_TYPE_FACE_LEFT
# 67 "data/maps/SkyPillar_3F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_MAGMAGRUNT4, MOVEMENT_TYPE_FACE_RIGHT
# 68 "data/maps/SkyPillar_3F/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 69 "data/maps/SkyPillar_3F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_AQUA_SKY_PILLAR_4, SkyPillar_3F_Text_SkyPillar_AquaGrunt4Defeat, TRAINER_GRUNT_MAGMA_SKY_PILLAR_4, SkyPillar_3F_Text_SkyPillar_MagmaGrunt4Defeat, PARTNER_EMMIE
# 70 "data/maps/SkyPillar_3F/scripts.pory"
switch VAR_RESULT
# 71 "data/maps/SkyPillar_3F/scripts.pory"
case 1, SkyPillar_3F_EventScript_SkyPillar_AquaGrunt4SkyPillar_MagmaGrunt4Victory
# 72 "data/maps/SkyPillar_3F/scripts.pory"
fadescreen FADE_TO_BLACK
# 73 "data/maps/SkyPillar_3F/scripts.pory"
special SetCB2WhiteOut
# 74 "data/maps/SkyPillar_3F/scripts.pory"
waitstate
# 75 "data/maps/SkyPillar_3F/scripts.pory"

# 76 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_SkyPillar_AquaGrunt4SkyPillar_MagmaGrunt4Victory::
# 77 "data/maps/SkyPillar_3F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 78 "data/maps/SkyPillar_3F/scripts.pory"
waitmovement 0
# 79 "data/maps/SkyPillar_3F/scripts.pory"
msgbox SkyPillar_3F_Text_SkyPillar_AquaGrunt4PostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/SkyPillar_3F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 81 "data/maps/SkyPillar_3F/scripts.pory"
waitmovement 0
# 82 "data/maps/SkyPillar_3F/scripts.pory"
msgbox SkyPillar_3F_Text_SkyPillar_MagmaGrunt4PostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/SkyPillar_3F/scripts.pory"
clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA
# 84 "data/maps/SkyPillar_3F/scripts.pory"
addvar VAR_SKY_PILLAR_STATE, 1
# 85 "data/maps/SkyPillar_3F/scripts.pory"
end
