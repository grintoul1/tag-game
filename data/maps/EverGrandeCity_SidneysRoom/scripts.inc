EverGrandeCity_SidneysRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_SidneysRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_SidneysRoom_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_SidneysRoom_OnFrame
	.byte 0

EverGrandeCity_SidneysRoom_OnTransition:
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
	end

EverGrandeCity_SidneysRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 1, EverGrandeCity_SidneysRoom_EventScript_CloseDoor
	end

EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_SidneysRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_SidneysRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth::
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 7, 13
	turnobject OBJ_EVENT_ID_NPC_FOLLOWER, DIR_NORTH
	turnobject LOCALID_PLAYER, DIR_NORTH
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_EVER_GRANDE_CITY_SIDNEYS_ROOM
	end

EverGrandeCity_SidneysRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 0, EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor
	map_script_2 VAR_ELITE_4_STATE, 1, EverGrandeCity_SidneysRoom_EventScript_AttendantIntroduction
	.2byte 0

EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 1
	releaseall
	end

EverGrandeCity_SidneysRoom_EventScript_AttendantIntroduction::
	lockall
	specialvar VAR_RESULT, CountMonsInBoxEliteFour
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_SidneysRoom_EventScript_AttendantIntroductionNoBoxMons
	applymovement LOCALID_SIDNEYS_ROOM_ATTENDANT, EverGrandeCity_SidneysRoom_Movement_AttendantApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox EverGrandeCity_SidneysRoom_Text_AttendantGreetPlayer, MSGBOX_DEFAULT
	waitmessage
	special SavePlayerParty
	call EventScript_AccessPokemonStorageEliteFour
	special LoadPlayerParty
	goto EverGrandeCity_SidneysRoom_EventScript_AttendantIntroductionMonsInBox
EverGrandeCity_SidneysRoom_EventScript_AttendantIntroductionNoBoxMons::
	msgbox EverGrandeCity_SidneysRoom_Text_AttendantGreetPlayerNoBoxMons, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_ELITE_FOUR_PARTY_ONLY
EverGrandeCity_SidneysRoom_EventScript_AttendantIntroductionMonsInBox::
	msgbox EverGrandeCity_SidneysRoom_Text_AttendantBestOfLuck, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SIDNEYS_ROOM_ATTENDANT, EverGrandeCity_SidneysRoom_Movement_AttendantReturn
	waitmovement 0
	setvar VAR_ELITE_4_STATE, 2
	releaseall
	end

EverGrandeCity_SidneysRoom_EventScript_Attendant::
	lock
	faceplayer
	msgbox EverGrandeCity_SidneysRoom_Text_AttendantBestOfLuck, MSGBOX_DEFAULT
	closemessage
	release
	end

EverGrandeCity_SidneysRoom_Movement_AttendantApproachPlayer:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

EverGrandeCity_SidneysRoom_Movement_AttendantReturn:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

EverGrandeCity_SidneysRoom_Text_AttendantBestOfLuck:
	.string "I wish you the very best of luck for\n"
	.string "your challenge.$"

EverGrandeCity_SidneysRoom_Text_AttendantGreetPlayerNoBoxMons:
	.string "Welcome, challengers.\p"
	.string "Congratulations for qualifying to\n"
	.string "challenge Hoenn's Elite Four.\p"
	.string "As you have no Pokémon in the Pokémon\n"
	.string "storage system, you may only use your\l"
	.string "current party for this challenge.$"

EverGrandeCity_SidneysRoom_Text_AttendantGreetPlayer:
	.string "Welcome, challengers.\p"
	.string "Congratulations for qualifying to\n"
	.string "challenge Hoenn's Elite Four.\p"
	.string "You will be able to use a pool of twelve\n"
	.string "Pokémon for the duration of your\l"
	.string "challenge.\p"
	.string "After each victory, you will be able\n"
	.string "to select up to three Pokémon to\l"
	.string "exchange in your pool of twelve.\p"
	.string "Please now select up to six Pokémon\n"
	.string "that you wish to bring in addition\l"
	.string "to your current party.$"

EverGrandeCity_SidneysRoom_EventScript_Sidney::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FacePlayer
	waitmovement 0
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	goto EverGrandeCity_SidneysRoom_EventScript_SidneyDoMultiBattle
	releaseall
	end

EverGrandeCity_SidneysRoom_EventScript_SidneyDoMultiBattle::
	playbgm MUS_VICTORY_ROAD, TRUE
	multi_2p_vs_1 TRAINER_SIDNEY, EverGrandeCity_SidneysRoom_Text_Defeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, EverGrandeCity_SidneysRoom_EventScript_SidneyVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

EverGrandeCity_SidneysRoom_EventScript_SidneyVictory::
	goto EverGrandeCity_SidneysRoom_EventScript_Defeated
	end

EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_SidneysRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
	setvar VAR_PARTNER_EMMIE_STATE, 74
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_SidneysRoom_Text_IntroSpeech:
	.string "Welcome, challenger!\n"
	.string "I'm SIDNEY of the ELITE FOUR.\p"
	.string "I like that look you're giving me.\n"
	.string "I guess you'll give me a good match.\l"
	.string "That's good! Looking real good!\p"
	.string "All right! You and me, let's enjoy\n"
	.string "a battle that can only be staged\l"
	.string "here in the POKéMON LEAGUE!$"

EverGrandeCity_SidneysRoom_Text_Defeat:
	.string "Well, how do you like that? I lost!\n"
	.string "Eh, it was fun, so it doesn't matter.$"

EverGrandeCity_SidneysRoom_Text_PostBattleSpeech:
	.string "Well, listen to what this loser has\n"
	.string "to say.\p"
	.string "You've got what it takes to go far.\n"
	.string "Now, go on to the next room and enjoy\l"
	.string "your next battle!$"

