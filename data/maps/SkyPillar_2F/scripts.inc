# 1 "data/maps/SkyPillar_2F/scripts.pory"

# 2 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_MapScripts::
# 3 "data/maps/SkyPillar_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/SkyPillar_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_2F_OnTransition
# 5 "data/maps/SkyPillar_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_2F_SetHoleWarp
# 6 "data/maps/SkyPillar_2F/scripts.pory"
	.byte 0
# 7 "data/maps/SkyPillar_2F/scripts.pory"

# 8 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_OnTransition:
# 9 "data/maps/SkyPillar_2F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 8, SkyPillar_2F_EventScript_CleanFloor
# 10 "data/maps/SkyPillar_2F/scripts.pory"
	copyvar VAR_ICE_STEP_COUNT, 1
# 11 "data/maps/SkyPillar_2F/scripts.pory"
	end
# 12 "data/maps/SkyPillar_2F/scripts.pory"

# 13 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_EventScript_CleanFloor::
# 14 "data/maps/SkyPillar_2F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_2F_CLEAN
# 15 "data/maps/SkyPillar_2F/scripts.pory"
	return
# 16 "data/maps/SkyPillar_2F/scripts.pory"

# 17 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_SetHoleWarp:
# 18 "data/maps/SkyPillar_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 19 "data/maps/SkyPillar_2F/scripts.pory"
	setholewarp MAP_SKY_PILLAR_1F
# 20 "data/maps/SkyPillar_2F/scripts.pory"
	end
# 21 "data/maps/SkyPillar_2F/scripts.pory"

# 22 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_Text_SkyPillar_AquaGrunt2Intro:
# 23 "data/maps/SkyPillar_2F/scripts.pory"
	.string "The ground around us began to\n"
# 24 "data/maps/SkyPillar_2F/scripts.pory"
	.string "crumble when we started battling!$"
# 25 "data/maps/SkyPillar_2F/scripts.pory"

# 26 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_Text_SkyPillar_MagmaGrunt2Intro:
# 27 "data/maps/SkyPillar_2F/scripts.pory"
	.string "A slight tremor isn't enough\n"
# 28 "data/maps/SkyPillar_2F/scripts.pory"
	.string "to make me hold back!$"
# 29 "data/maps/SkyPillar_2F/scripts.pory"

# 30 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_Text_SkyPillar_AquaGrunt2Defeat:
# 31 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Maybe now I won't fall through the floor…$"
# 32 "data/maps/SkyPillar_2F/scripts.pory"

# 33 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_Text_SkyPillar_MagmaGrunt2Defeat:
# 34 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Okay, now I need to take a break!$"
# 35 "data/maps/SkyPillar_2F/scripts.pory"

# 36 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_Text_SkyPillar_AquaGrunt2PostBattle:
# 37 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Please, don't do anything to disturb the\n"
# 38 "data/maps/SkyPillar_2F/scripts.pory"
	.string "floor any more!$"
# 39 "data/maps/SkyPillar_2F/scripts.pory"

# 40 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_Text_SkyPillar_MagmaGrunt2PostBattle:
# 41 "data/maps/SkyPillar_2F/scripts.pory"
	.string "Now I'm stuck here having to listen to\n"
# 42 "data/maps/SkyPillar_2F/scripts.pory"
	.string "her…$"
# 43 "data/maps/SkyPillar_2F/scripts.pory"

# 44 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_EventScript_SkyPillar_AquaGrunt2::
# 45 "data/maps/SkyPillar_2F/scripts.pory"
	faceplayer
# 46 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox SkyPillar_2F_Text_SkyPillar_AquaGrunt2PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/SkyPillar_2F/scripts.pory"
	end
# 48 "data/maps/SkyPillar_2F/scripts.pory"

# 49 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_EventScript_SkyPillar_MagmaGrunt2::
# 50 "data/maps/SkyPillar_2F/scripts.pory"
	faceplayer
# 51 "data/maps/SkyPillar_2F/scripts.pory"
	msgbox SkyPillar_2F_Text_SkyPillar_MagmaGrunt2PostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/SkyPillar_2F/scripts.pory"
	end
# 53 "data/maps/SkyPillar_2F/scripts.pory"

# 54 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_EventScript_SkyPillar_AquaGrunt2SkyPillar_MagmaGrunt2::
# 55 "data/maps/SkyPillar_2F/scripts.pory"
lockall
# 56 "data/maps/SkyPillar_2F/scripts.pory"
playse SE_PIN
# 57 "data/maps/SkyPillar_2F/scripts.pory"
applymovement LOCALID_SKYPILLAR_AQUAGRUNT2, Common_Movement_ExclamationMark
# 58 "data/maps/SkyPillar_2F/scripts.pory"
waitmovement 0
# 59 "data/maps/SkyPillar_2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 60 "data/maps/SkyPillar_2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 61 "data/maps/SkyPillar_2F/scripts.pory"
waitmovement 0
# 62 "data/maps/SkyPillar_2F/scripts.pory"
msgbox SkyPillar_2F_Text_SkyPillar_AquaGrunt2Intro MSGBOX_AUTOCLOSE
# 63 "data/maps/SkyPillar_2F/scripts.pory"
playse SE_PIN
# 64 "data/maps/SkyPillar_2F/scripts.pory"
applymovement  LOCALID_SKYPILLAR_MAGMAGRUNT2, Common_Movement_ExclamationMark
# 65 "data/maps/SkyPillar_2F/scripts.pory"
waitmovement 0
# 66 "data/maps/SkyPillar_2F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 67 "data/maps/SkyPillar_2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 68 "data/maps/SkyPillar_2F/scripts.pory"
waitmovement 0
# 69 "data/maps/SkyPillar_2F/scripts.pory"
msgbox SkyPillar_2F_Text_SkyPillar_MagmaGrunt2Intro MSGBOX_AUTOCLOSE
# 70 "data/maps/SkyPillar_2F/scripts.pory"
goto SkyPillar_2F_EventScript_SkyPillar_AquaGrunt2SkyPillar_MagmaGrunt2DoMultiBattle
# 71 "data/maps/SkyPillar_2F/scripts.pory"
releaseall
# 72 "data/maps/SkyPillar_2F/scripts.pory"
end
# 73 "data/maps/SkyPillar_2F/scripts.pory"

# 74 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_EventScript_SkyPillar_AquaGrunt2SkyPillar_MagmaGrunt2DoMultiBattle::
# 75 "data/maps/SkyPillar_2F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_AQUAGRUNT2, MOVEMENT_TYPE_FACE_RIGHT
# 76 "data/maps/SkyPillar_2F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_MAGMAGRUNT2, MOVEMENT_TYPE_FACE_LEFT
# 77 "data/maps/SkyPillar_2F/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 78 "data/maps/SkyPillar_2F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_AQUA_SKY_PILLAR_2, SkyPillar_2F_Text_SkyPillar_AquaGrunt2Defeat, TRAINER_GRUNT_MAGMA_SKY_PILLAR_2, SkyPillar_2F_Text_SkyPillar_MagmaGrunt2Defeat, PARTNER_EMMIE
# 79 "data/maps/SkyPillar_2F/scripts.pory"
switch VAR_RESULT
# 80 "data/maps/SkyPillar_2F/scripts.pory"
case 1, SkyPillar_2F_EventScript_SkyPillar_AquaGrunt2SkyPillar_MagmaGrunt2Victory
# 81 "data/maps/SkyPillar_2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 82 "data/maps/SkyPillar_2F/scripts.pory"
special SetCB2WhiteOut
# 83 "data/maps/SkyPillar_2F/scripts.pory"
waitstate
# 84 "data/maps/SkyPillar_2F/scripts.pory"

# 85 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_EventScript_SkyPillar_AquaGrunt2SkyPillar_MagmaGrunt2Victory::
# 86 "data/maps/SkyPillar_2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 87 "data/maps/SkyPillar_2F/scripts.pory"
waitmovement 0
# 88 "data/maps/SkyPillar_2F/scripts.pory"
msgbox SkyPillar_2F_Text_SkyPillar_AquaGrunt2PostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/SkyPillar_2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 90 "data/maps/SkyPillar_2F/scripts.pory"
waitmovement 0
# 91 "data/maps/SkyPillar_2F/scripts.pory"
msgbox SkyPillar_2F_Text_SkyPillar_MagmaGrunt2PostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/SkyPillar_2F/scripts.pory"
addvar VAR_SKY_PILLAR_STATE, 1
# 93 "data/maps/SkyPillar_2F/scripts.pory"
end
