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
	end
# 12 "data/maps/SkyPillar_4F/scripts.pory"

# 13 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_CleanFloor::
# 14 "data/maps/SkyPillar_4F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_4F_CLEAN
# 15 "data/maps/SkyPillar_4F/scripts.pory"
	return
# 16 "data/maps/SkyPillar_4F/scripts.pory"

# 17 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_SetHoleWarp:
# 18 "data/maps/SkyPillar_4F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 19 "data/maps/SkyPillar_4F/scripts.pory"
	setholewarp MAP_SKY_PILLAR_3F
# 20 "data/maps/SkyPillar_4F/scripts.pory"
	end
# 21 "data/maps/SkyPillar_4F/scripts.pory"

# 22 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_Text_SkyPillar_AquaGrunt3Intro:
# 23 "data/maps/SkyPillar_4F/scripts.pory"
	.string "There's a whole lot of noise coming from\n"
# 24 "data/maps/SkyPillar_4F/scripts.pory"
	.string "the top!$"
# 25 "data/maps/SkyPillar_4F/scripts.pory"

# 26 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_Text_SkyPillar_MagmaGrunt3Intro:
# 27 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Team Aqua and now you? This whole\n"
# 28 "data/maps/SkyPillar_4F/scripts.pory"
	.string "situation is a total mess!$"
# 29 "data/maps/SkyPillar_4F/scripts.pory"

# 30 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_Text_SkyPillar_AquaGrunt3Defeat:
# 31 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I wish I could see what was happening\n"
# 32 "data/maps/SkyPillar_4F/scripts.pory"
	.string "up there…$"
# 33 "data/maps/SkyPillar_4F/scripts.pory"

# 34 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_Text_SkyPillar_MagmaGrunt3Defeat:
# 35 "data/maps/SkyPillar_4F/scripts.pory"
	.string "What am I even doing here?$"
# 36 "data/maps/SkyPillar_4F/scripts.pory"

# 37 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_Text_SkyPillar_AquaGrunt3PostBattle:
# 38 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Whatever is happening up there, I know\n"
# 39 "data/maps/SkyPillar_4F/scripts.pory"
	.string "Archie will come out on top.$"
# 40 "data/maps/SkyPillar_4F/scripts.pory"

# 41 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_Text_SkyPillar_MagmaGrunt3PostBattle:
# 42 "data/maps/SkyPillar_4F/scripts.pory"
	.string "I'd go for a lie down if this place\n"
# 43 "data/maps/SkyPillar_4F/scripts.pory"
	.string "weren't so filthy…$"
# 44 "data/maps/SkyPillar_4F/scripts.pory"

# 45 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_SkyPillar_AquaGrunt3::
# 46 "data/maps/SkyPillar_4F/scripts.pory"
	faceplayer
# 47 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox SkyPillar_4F_Text_SkyPillar_AquaGrunt3PostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/SkyPillar_4F/scripts.pory"
	end
# 49 "data/maps/SkyPillar_4F/scripts.pory"

# 50 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_SkyPillar_MagmaGrunt3::
# 51 "data/maps/SkyPillar_4F/scripts.pory"
	faceplayer
# 52 "data/maps/SkyPillar_4F/scripts.pory"
	msgbox SkyPillar_4F_Text_SkyPillar_MagmaGrunt3PostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/SkyPillar_4F/scripts.pory"
	end
# 54 "data/maps/SkyPillar_4F/scripts.pory"

# 55 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_SkyPillar_AquaGrunt3SkyPillar_MagmaGrunt3::
# 56 "data/maps/SkyPillar_4F/scripts.pory"
lockall
# 57 "data/maps/SkyPillar_4F/scripts.pory"
playse SE_PIN
# 58 "data/maps/SkyPillar_4F/scripts.pory"
applymovement LOCALID_SKYPILLAR_AQUAGRUNT3, Common_Movement_ExclamationMark
# 59 "data/maps/SkyPillar_4F/scripts.pory"
waitmovement 0
# 60 "data/maps/SkyPillar_4F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 61 "data/maps/SkyPillar_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 62 "data/maps/SkyPillar_4F/scripts.pory"
waitmovement 0
# 63 "data/maps/SkyPillar_4F/scripts.pory"
msgbox SkyPillar_4F_Text_SkyPillar_AquaGrunt3Intro MSGBOX_AUTOCLOSE
# 64 "data/maps/SkyPillar_4F/scripts.pory"
playse SE_PIN
# 65 "data/maps/SkyPillar_4F/scripts.pory"
applymovement  LOCALID_SKYPILLAR_MAGMAGRUNT3, Common_Movement_ExclamationMark
# 66 "data/maps/SkyPillar_4F/scripts.pory"
waitmovement 0
# 67 "data/maps/SkyPillar_4F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 68 "data/maps/SkyPillar_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 69 "data/maps/SkyPillar_4F/scripts.pory"
waitmovement 0
# 70 "data/maps/SkyPillar_4F/scripts.pory"
msgbox SkyPillar_4F_Text_SkyPillar_MagmaGrunt3Intro MSGBOX_AUTOCLOSE
# 71 "data/maps/SkyPillar_4F/scripts.pory"
goto SkyPillar_4F_EventScript_SkyPillar_AquaGrunt3SkyPillar_MagmaGrunt3DoMultiBattle
# 72 "data/maps/SkyPillar_4F/scripts.pory"
releaseall
# 73 "data/maps/SkyPillar_4F/scripts.pory"
end
# 74 "data/maps/SkyPillar_4F/scripts.pory"

# 75 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_SkyPillar_AquaGrunt3SkyPillar_MagmaGrunt3DoMultiBattle::
# 76 "data/maps/SkyPillar_4F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_AQUAGRUNT3, MOVEMENT_TYPE_FACE_RIGHT
# 77 "data/maps/SkyPillar_4F/scripts.pory"
setobjectmovementtype LOCALID_SKYPILLAR_MAGMAGRUNT3, MOVEMENT_TYPE_FACE_LEFT
# 78 "data/maps/SkyPillar_4F/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 79 "data/maps/SkyPillar_4F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_AQUA_SKY_PILLAR_3, SkyPillar_4F_Text_SkyPillar_AquaGrunt3Defeat, TRAINER_GRUNT_MAGMA_SKY_PILLAR_3, SkyPillar_4F_Text_SkyPillar_MagmaGrunt3Defeat, PARTNER_EMMIE
# 80 "data/maps/SkyPillar_4F/scripts.pory"
switch VAR_RESULT
# 81 "data/maps/SkyPillar_4F/scripts.pory"
case 1, SkyPillar_4F_EventScript_SkyPillar_AquaGrunt3SkyPillar_MagmaGrunt3Victory
# 82 "data/maps/SkyPillar_4F/scripts.pory"
fadescreen FADE_TO_BLACK
# 83 "data/maps/SkyPillar_4F/scripts.pory"
special SetCB2WhiteOut
# 84 "data/maps/SkyPillar_4F/scripts.pory"
waitstate
# 85 "data/maps/SkyPillar_4F/scripts.pory"

# 86 "data/maps/SkyPillar_4F/scripts.pory"
SkyPillar_4F_EventScript_SkyPillar_AquaGrunt3SkyPillar_MagmaGrunt3Victory::
# 87 "data/maps/SkyPillar_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 88 "data/maps/SkyPillar_4F/scripts.pory"
waitmovement 0
# 89 "data/maps/SkyPillar_4F/scripts.pory"
msgbox SkyPillar_4F_Text_SkyPillar_AquaGrunt3PostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/SkyPillar_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 91 "data/maps/SkyPillar_4F/scripts.pory"
waitmovement 0
# 92 "data/maps/SkyPillar_4F/scripts.pory"
msgbox SkyPillar_4F_Text_SkyPillar_MagmaGrunt3PostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/SkyPillar_4F/scripts.pory"
addvar VAR_SKY_PILLAR_STATE, 1
# 94 "data/maps/SkyPillar_4F/scripts.pory"
end
