EverGrandeCity_PokemonLeague_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PokemonLeague_1F_OnWarp
	.byte 0

EverGrandeCity_PokemonLeague_1F_OnWarp:
	map_script_2 VAR_EMMIE_BATTLE_STATE, 4, EverGrandeCity_PokemonLeague_1F_EventScript_PostEmmieCutscenePos
	.2byte 0

EverGrandeCity_PokemonLeague_1F_EventScript_PostEmmieCutscenePos::
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 10, 6
	turnobject OBJ_EVENT_ID_NPC_FOLLOWER, DIR_NORTH
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F
	setvar VAR_EMMIE_BATTLE_STATE, 5
	end

EverGrandeCity_PokemonLeague_1F_OnTransition:
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
	call_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
	end

EverGrandeCity_PokemonLeague_1F_EventScript_EmmieCutscene::
	lockall
	fadedefaultbgm
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox EverGrandeCity_PokemonLeague_1F_Text_EmmieBeforeWeHeadIn, MSGBOX_AUTOCLOSE
	setvar VAR_EMMIE_BATTLE_STATE, 3
	delay 30
	playse SE_EXIT
	warpsilent MAP_EVER_GRANDE_CITY, 28, 18
	end

EverGrandeCity_PokemonLeague_1F_Text_EmmieBeforeWeHeadIn:
	.string "Emmie: Hey, {PLAYER}, hold on a moment.\p"
	.string "Can we take a minute before we head\n"
	.string "inside please?\p"
	.string "Step outside with me for a moment.$"

EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
	setobjectxyperm LOCALID_LEAGUE_GUARD_1, 9, 2
	setobjectxyperm LOCALID_LEAGUE_GUARD_2, 10, 2
	return

EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEAGUE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
EverGrandeCity_PokemonLeague_1F_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	pokemartlistend

@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
@ Its assumed the player has the remaining badges
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
	lockall
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_ge VAR_TEMP_0, 11, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
	call_if_le VAR_TEMP_0, 8, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
	waitmessage
	delay 120
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
	closemessage
	applymovement LOCALID_LEAGUE_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
	applymovement LOCALID_LEAGUE_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
	waitmovement 0
	delay 10
	playfanfare MUS_OBTAIN_BADGE
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
	waitmessage
	waitfanfare
	closemessage
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_1
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_2
	setflag FLAG_ENTERED_ELITE_FOUR
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
	call_if_eq VAR_TEMP_2, 12, EverGrandeCity_PokemonLeague_1F_EventScript_EmmieMoveFromRight
	call_if_eq VAR_TEMP_2, 11, EverGrandeCity_PokemonLeague_1F_EventScript_EmmieMoveFromSouth
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_2, VAR_TEMP_3
	call_if_eq VAR_TEMP_2, 7, EverGrandeCity_PokemonLeague_1F_EventScript_EmmieMoveFromLeft
	call_if_eq VAR_TEMP_2, 8, EverGrandeCity_PokemonLeague_1F_EventScript_EmmieMoveFromSouth
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_EmmieMoveFromRight::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EverGrandeCity_PokemonLeague_1F_Movement_EmmieMoveFromRight
	return

EverGrandeCity_PokemonLeague_1F_EventScript_EmmieMoveFromLeft::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EverGrandeCity_PokemonLeague_1F_Movement_EmmieMoveFromLeft
	return

EverGrandeCity_PokemonLeague_1F_EventScript_EmmieMoveFromSouth::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EverGrandeCity_PokemonLeague_1F_Movement_EmmieMoveFromSouth
	return

EverGrandeCity_PokemonLeague_1F_Movement_EmmieMoveFromLeft:
	walk_right
	walk_down
	face_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_EmmieMoveFromRight:
	walk_left
	walk_down
	face_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_EmmieMoveFromSouth:
	walk_down
	walk_up
	step_end

EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges::
	playse SE_FAILURE
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
	walk_down
	walk_left
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
	walk_down
	walk_right
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
	walk_left
	walk_in_place_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
	walk_right
	walk_in_place_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges:
	.string "Beyond this point, only those TRAINERS\n"
	.string "who have collected all the GYM BADGES\l"
	.string "are permitted to enter.\p"
	.string "TRAINER, let us confirm that you have\n"
	.string "all the GYM BADGES.$"

EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges:
	.string "You haven't obtained all the BADGES.\p"
	.string "If you're bound for the POKéMON\n"
	.string "LEAGUE, you must return with them.$"

EverGrandeCity_PokemonLeague_1F_Text_GoForth:
	.string "TRAINER! Believe in yourself and your\n"
	.string "POKéMON, and go forth!$"

