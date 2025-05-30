# 1 "data/maps/SkyPillar_4F/scripts.pory"

# 2 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_MapScripts::
# 3 "data/maps/SkyPillar_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/SkyPillar_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_4F_OnTransition
# 5 "data/maps/SkyPillar_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_4F_SetHoleWarp
# 6 "data/maps/SkyPillar_4F/scripts.pory"
	.byte 0
# 7 "data/maps/SkyPillar_4F/scripts.pory"

# 8 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_OnTransition:
# 9 "data/maps/SkyPillar_4F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 8, SkyPillar_4F_EventScript_CleanFloor
# 10 "data/maps/SkyPillar_4F/scripts.pory"
	copyvar VAR_ICE_STEP_COUNT, 1
# 11 "data/maps/SkyPillar_4F/scripts.pory"
	call_if_gt VAR_SKY_PILLAR_STATE, 2, SkyPillar_4F_EventScript_GruntMovements
# 12 "data/maps/SkyPillar_4F/scripts.pory"
	end
# 13 "data/maps/SkyPillar_4F/scripts.pory"

# 14 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_GruntMovements::
# 15 "data/maps/SkyPillar_4F/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_AQUAGRUNT3, MOVEMENT_TYPE_FACE_RIGHT
# 16 "data/maps/SkyPillar_4F/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MAGMAGRUNT3, MOVEMENT_TYPE_FACE_LEFT
# 17 "data/maps/SkyPillar_4F/scripts.pory"
	return
# 18 "data/maps/SkyPillar_4F/scripts.pory"

# 19 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_CleanFloor::
# 20 "data/maps/SkyPillar_4F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_4F_CLEAN
# 21 "data/maps/SkyPillar_4F/scripts.pory"
	return
# 22 "data/maps/SkyPillar_4F/scripts.pory"

# 23 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_SetHoleWarp:
# 24 "data/maps/SkyPillar_4F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 25 "data/maps/SkyPillar_4F/scripts.pory"
	setholewarp MAP_SKY_PILLAR_3F
# 26 "data/maps/SkyPillar_4F/scripts.pory"
	end
# 27 "data/maps/SkyPillar_4F/scripts.pory"

# 28 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_Text_SkyPillar_AquaGrunt3Intro:
# 29 "data/maps/SkyPillar_4F/scripts.pory"
	.string "There's a whole lot of noise coming from\n"
# 30 "data/maps/SkyPillar_4F/scripts.pory"
	.string "the top!$"
# 31 "data/maps/SkyPillar_4F/scripts.pory"

# 32 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_Text_SkyPillar_MagmaGrunt3Intro:
# 33 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Team Aqua and now you? This whole\n"
# 34 "data/maps/SkyPillar_4F/scripts.pory"
	.string "situation is a total mess!$"
# 35 "data/maps/SkyPillar_4F/scripts.pory"

# 36 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_Text_SkyPillar_AquaGrunt3Defeat:
# 37 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I wish I could see what was happening\n"
# 38 "data/maps/SkyPillar_4F/scripts.pory"
	.string "up there…$"
# 39 "data/maps/SkyPillar_4F/scripts.pory"

# 40 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_Text_SkyPillar_MagmaGrunt3Defeat:
# 41 "data/maps/SkyPillar_4F/scripts.pory"
	.string "What am I even doing here?$"
# 42 "data/maps/SkyPillar_4F/scripts.pory"

# 43 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_Text_SkyPillar_AquaGrunt3PostBattle:
# 44 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Whatever is happening up there, I know\n"
# 45 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Archie will come out on top.$"
# 46 "data/maps/SkyPillar_4F/scripts.pory"

# 47 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_Text_SkyPillar_MagmaGrunt3PostBattle:
# 48 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I'd go for a lie down if this place\n"
# 49 "data/maps/SkyPillar_4F/scripts.pory"
	.string "weren't so filthy…$"
# 50 "data/maps/SkyPillar_4F/scripts.pory"

# 51 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_SkyPillar_AquaGrunt3::
# 52 "data/maps/SkyPillar_4F/scripts.pory"
	faceplayer
# 53 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox SkyPillar_4F_Text_SkyPillar_AquaGrunt3PostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/SkyPillar_4F/scripts.pory"
	end
# 55 "data/maps/SkyPillar_4F/scripts.pory"

# 56 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_SkyPillar_MagmaGrunt3::
# 57 "data/maps/SkyPillar_4F/scripts.pory"
	faceplayer
# 58 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox SkyPillar_4F_Text_SkyPillar_MagmaGrunt3PostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/SkyPillar_4F/scripts.pory"
	end
# 60 "data/maps/SkyPillar_4F/scripts.pory"

# 61 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_SkyPillar_AquaGrunt3SkyPillar_MagmaGrunt3::
# 62 "data/maps/SkyPillar_4F/scripts.pory"
lockall
# 63 "data/maps/SkyPillar_4F/scripts.pory"
playse SE_PIN
# 64 "data/maps/SkyPillar_4F/scripts.pory"
applymovement LOCALID_SKYPILLAR_AQUAGRUNT3, Common_Movement_ExclamationMark
# 65 "data/maps/SkyPillar_4F/scripts.pory"
waitmovement 0
# 66 "data/maps/SkyPillar_4F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 67 "data/maps/SkyPillar_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 68 "data/maps/SkyPillar_4F/scripts.pory"
waitmovement 0
# 69 "data/maps/SkyPillar_4F/scripts.pory"
msgbox SkyPillar_4F_Text_SkyPillar_AquaGrunt3Intro MSGBOX_AUTOCLOSE
# 70 "data/maps/SkyPillar_4F/scripts.pory"
playse SE_PIN
# 71 "data/maps/SkyPillar_4F/scripts.pory"
applymovement  LOCALID_SKYPILLAR_MAGMAGRUNT3, Common_Movement_ExclamationMark
# 72 "data/maps/SkyPillar_4F/scripts.pory"
waitmovement 0
# 73 "data/maps/SkyPillar_4F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 74 "data/maps/SkyPillar_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 75 "data/maps/SkyPillar_4F/scripts.pory"
waitmovement 0
# 76 "data/maps/SkyPillar_4F/scripts.pory"
msgbox SkyPillar_4F_Text_SkyPillar_MagmaGrunt3Intro MSGBOX_AUTOCLOSE
# 77 "data/maps/SkyPillar_4F/scripts.pory"
goto SkyPillar_4F_EventScript_SkyPillar_AquaGrunt3SkyPillar_MagmaGrunt3DoMultiBattle
# 78 "data/maps/SkyPillar_4F/scripts.pory"
releaseall
# 79 "data/maps/SkyPillar_4F/scripts.pory"
end
# 80 "data/maps/SkyPillar_4F/scripts.pory"

# 81 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_SkyPillar_AquaGrunt3SkyPillar_MagmaGrunt3DoMultiBattle::
# 82 "data/maps/SkyPillar_4F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_AQUAGRUNT3, MOVEMENT_TYPE_FACE_RIGHT
# 83 "data/maps/SkyPillar_4F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_MAGMAGRUNT3, MOVEMENT_TYPE_FACE_LEFT
# 84 "data/maps/SkyPillar_4F/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 85 "data/maps/SkyPillar_4F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_AQUA_SKY_PILLAR_3, SkyPillar_4F_Text_SkyPillar_AquaGrunt3Defeat, TRAINER_GRUNT_MAGMA_SKY_PILLAR_3, SkyPillar_4F_Text_SkyPillar_MagmaGrunt3Defeat, PARTNER_EMMIE
# 86 "data/maps/SkyPillar_4F/scripts.pory"
switch VAR_RESULT
# 87 "data/maps/SkyPillar_4F/scripts.pory"
case 1, SkyPillar_4F_EventScript_SkyPillar_AquaGrunt3SkyPillar_MagmaGrunt3Victory
# 88 "data/maps/SkyPillar_4F/scripts.pory"
fadescreen FADE_TO_BLACK
# 89 "data/maps/SkyPillar_4F/scripts.pory"
special SetCB2WhiteOut
# 90 "data/maps/SkyPillar_4F/scripts.pory"
waitstate
# 91 "data/maps/SkyPillar_4F/scripts.pory"

# 92 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_SkyPillar_AquaGrunt3SkyPillar_MagmaGrunt3Victory::
# 93 "data/maps/SkyPillar_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 94 "data/maps/SkyPillar_4F/scripts.pory"
waitmovement 0
# 95 "data/maps/SkyPillar_4F/scripts.pory"
msgbox SkyPillar_4F_Text_SkyPillar_AquaGrunt3PostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/SkyPillar_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 97 "data/maps/SkyPillar_4F/scripts.pory"
waitmovement 0
# 98 "data/maps/SkyPillar_4F/scripts.pory"
msgbox SkyPillar_4F_Text_SkyPillar_MagmaGrunt3PostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/SkyPillar_4F/scripts.pory"
addvar VAR_SKY_PILLAR_STATE, 1
# 100 "data/maps/SkyPillar_4F/scripts.pory"
end
