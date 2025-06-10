# 1 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_PhoebesRoom_OnLoad
# 4 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PhoebesRoom_OnWarp
# 5 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_PhoebesRoom_OnFrame
# 6 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnWarp:
# 9 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth
# 10 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 11 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth::
# 13 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 7, 13
# 14 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_NPC_FOLLOWER, DIR_NORTH
# 15 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 16 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_EVER_GRANDE_CITY_PHOEBES_ROOM
# 17 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 18 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnFrame:
# 20 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 1, EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor
# 21 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 22 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 23 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor::
# 24 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lockall
# 25 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 26 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 2
# 27 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	releaseall
# 28 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 29 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 30 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnLoad:
# 31 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom
# 32 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 2, EverGrandeCity_PhoebesRoom_EventScript_CloseDoor
# 33 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 34 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 35 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom::
# 36 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 37 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 38 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 39 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_CloseDoor::
# 40 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 41 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 42 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 43 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
# 44 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 45 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 46 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 47 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FacePlayer
# 48 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitmovement 0
# 49 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 50 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 51 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_PhoebeDoMultiBattle
# 52 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	releaseall
# 53 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 54 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 55 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PhoebeDoMultiBattle::
# 56 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_VICTORY_ROAD, TRUE
# 57 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	multi_2p_vs_1 TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat, PARTNER_EMMIE
# 58 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	case 1, EverGrandeCity_PhoebesRoom_EventScript_PhoebeVictory
# 60 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	special SetCB2WhiteOut
# 62 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	waitstate
# 63 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 64 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PhoebeVictory::		
# 65 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
# 66 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 67 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 68 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech::
# 69 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 70 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 71 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 72 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 73 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Defeated::
# 74 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 75 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 75
# 76 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 77 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 78 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 79 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 80 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 81 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_IntroSpeech:
# 82 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Ahahaha!\p"
# 83 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I'm PHOEBE of the ELITE FOUR.\n"
# 84 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I did my training on MT. PYRE.\p"
# 85 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "While I trained, I gained the ability\n"
# 86 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "to commune with GHOST-type POKéMON.\p"
# 87 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yes, the bond I developed with POKéMON\n"
# 88 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "is extremely tight.\p"
# 89 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "So, come on, just try and see if you can\n"
# 90 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "even inflict damage on my POKéMON!$"
# 91 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 92 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_Defeat:
# 93 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Oh, darn.\n"
# 94 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I've gone and lost.$"
# 95 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 96 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech:
# 97 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "There's a definite bond between you\n"
# 98 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "and your POKéMON, too.\p"
# 99 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I didn't recognize it, so it's only\n"
# 100 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "natural that I lost.\p"
# 101 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yup, I'd like to see how far your bond\n"
# 102 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "will carry you.\p"
# 103 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Go ahead, move on to the next room.$"
