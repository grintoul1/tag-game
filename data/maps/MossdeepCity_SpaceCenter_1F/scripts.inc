
.set LOCALID_SCIENTIST_1, 1
.set LOCALID_SCIENTIST_2, 2
.set LOCALID_SAILOR, 3
.set LOCALID_OLD_MAN, 4
.set LOCALID_WOMAN, 5
.set LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT2, 9
.set LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT1, 7
.set LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT3, 6
.set LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT4, 8
.set LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT5, 22
.set LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT6, 23
.set LOCALID_SPACE_CENTER_1F_AQUA_GRUNT1, 12
.set LOCALID_SPACE_CENTER_1F_AQUA_GRUNT2, 13
.set LOCALID_SPACE_CENTER_1F_AQUA_GRUNT3, 14
.set LOCALID_SPACE_CENTER_1F_AQUA_GRUNT4, 15
.set LOCALID_SPACE_CENTER_1F_AQUA_GRUNT5, 21
.set LOCALID_SPACE_CENTER_1F_AQUA_GRUNT6, 24

MossdeepCity_SpaceCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_SpaceCenter_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_1F_OnFrame
	.byte 0

MossdeepCity_SpaceCenter_1F_OnFrame:
	map_script_2 VAR_PARTNER_EMMIE_STATE, 54, MossdeepCity_SpaceCenter_1F_EventScript_ProgressEmmieState
	map_script_2 VAR_PARTNER_EMMIE_STATE, 56, MossdeepCity_SpaceCenter_1F_EventScript_ProgressEmmieState
	.2byte 0

MossdeepCity_SpaceCenter_1F_EventScript_ProgressEmmieState::
	setvar VAR_PARTNER_EMMIE_STATE, 55
	return

MossdeepCity_SpaceCenter_1F_OnTransition:
	call MossdeepCity_SpaceCenter_1F_EventScript_SetErikaGrunt
	call_if_le VAR_MOSSDEEP_CITY_STATE, 7, MossdeepCity_SpaceCenter_1F_EventScript_ShowErikaGrunt
	goto_if_le VAR_MOSSDEEP_CITY_STATE, 7, MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma
	end

MossdeepCity_SpaceCenter_1F_EventScript_ShowErikaGrunt::
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 0, MossdeepCity_SpaceCenter_1F_EventScript_ShowErikaGruntReturn
	goto_if_ge VAR_MOSSDEEP_CITY_STATE, 3, MossdeepCity_SpaceCenter_1F_EventScript_ShowErikaGruntShowOnly
	setobjectxy VAR_0x8008, 0, 3
MossdeepCity_SpaceCenter_1F_EventScript_ShowErikaGruntShowOnly::
	addobject VAR_0x8008
MossdeepCity_SpaceCenter_1F_EventScript_ShowErikaGruntReturn::
	return

MossdeepCity_SpaceCenter_1F_EventScript_SetErikaGrunt::
	call_if_set FLAG_EVIL_TEAM_AQUA, MossdeepCity_SpaceCenter_1F_EventScript_SetErikaGruntAqua
	call_if_set FLAG_EVIL_TEAM_MAGMA, MossdeepCity_SpaceCenter_1F_EventScript_SetErikaGruntMagma
	return

MossdeepCity_SpaceCenter_1F_EventScript_SetErikaGruntAqua::
	setvar VAR_0x8008, LOCALID_SPACE_CENTER_ERIKA_GRUNT_AQUA
	return

MossdeepCity_SpaceCenter_1F_EventScript_SetErikaGruntMagma::
	setvar VAR_0x8008, LOCALID_SPACE_CENTER_ERIKA_GRUNT_MAGMA
	return

MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma::
	setobjectxyperm LOCALID_SAILOR, 1, 9
	setobjectmovementtype LOCALID_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm LOCALID_WOMAN, 0, 8
	setobjectmovementtype LOCALID_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm LOCALID_OLD_MAN, 1, 6
	setobjectmovementtype LOCALID_OLD_MAN, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm LOCALID_SCIENTIST_1, 3, 4
	setobjectmovementtype LOCALID_SCIENTIST_1, MOVEMENT_TYPE_FACE_RIGHT
	setobjectmovementtype LOCALID_SCIENTIST_2, MOVEMENT_TYPE_FACE_RIGHT
	end

MossdeepCity_SpaceCenter_1F_OnLoad:
	goto_if_le VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote
	end

MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote::
	setmetatile 2, 5, METATILE_Facility_DataPad, TRUE
	return

MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter::
	lock
	faceplayer
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma
	dotimebasedevents
	specialvar VAR_RESULT, GetWeekCount
	buffernumberstring STR_VAR_1, VAR_RESULT
	call_if_eq VAR_RESULT, 0, MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet
	call_if_ge VAR_RESULT, 1, MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet::
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent, MSGBOX_DEFAULT
	return

MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber::
	msgbox MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber, MSGBOX_DEFAULT
	return

MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma::
	dotimebasedevents
	specialvar VAR_RESULT, GetWeekCount
	buffernumberstring STR_VAR_1, VAR_RESULT
	call_if_eq VAR_RESULT, 0, MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma
	call_if_ge VAR_RESULT, 1, MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma::
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent, MSGBOX_DEFAULT
	return

MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma::
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber, MSGBOX_DEFAULT
	return

MossdeepCity_SpaceCenter_1F_EventScript_Scientist::
	lock
	faceplayer
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma::
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan::
	lock
	faceplayer
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone
	msgbox MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt, MSGBOX_DEFAULT
	giveitem ITEM_SUN_STONE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone::
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma::
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_SUN_STONE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma::
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
	goto MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
	end

MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal::
	msgbox MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma::
	msgbox MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
	end

MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal::
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma::
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_Steven::
	lock
	faceplayer
	msgbox MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_MagmaNote::
	lockall
	goto_if_set FLAG_EVIL_TEAM_AQUA, MossdeepCity_SpaceCenter_1F_EventScript_AquaNote
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_SpaceCenter_1F_EventScript_AquaNote::
	msgbox MossdeepCity_SpaceCenter_1F_Text_AquaIntentToStealNotice, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_SpaceCenter_1F_EventScript_Brock::
	lockall
	call_if_set FLAG_EVIL_TEAM_AQUA, MossdeepCity_SpaceCenter_1F_EventScript_SetEmmieGruntAqua
	call_if_set FLAG_EVIL_TEAM_MAGMA, MossdeepCity_SpaceCenter_1F_EventScript_SetEmmieGruntMagma
	setobjectxy VAR_0x8008, 8, 9
	applymovement VAR_0x8008, Common_Movement_FaceUp
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_WalkInPlaceFasterRight
	waitmovement
	msgbox MossdeepCity_SpaceCenter_1F_Text_BrockThugsTurnedUp, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MossdeepCity_SpaceCenter_1F_Movement_EmmieMoveForPlayerBrock
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_1F_Movement_PlayerMoveToBrock
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_FaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	goto_if_set FLAG_EVIL_TEAM_MAGMA, MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2BrockScriptJoin
	goto_if_set FLAG_EVIL_TEAM_AQUA, MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt1Grunt2BrockScriptJoin
	end

MossdeepCity_SpaceCenter_1F_Text_EmmieYou:
	.string "Emmie: You.$"

MossdeepCity_SpaceCenter_1F_Movement_EmmieGruntKnockedBack:
	lock_facing_direction
	walk_fast_right
	unlock_facing_direction
	step_end

MossdeepCity_SpaceCenter_1F_Text_EmmieGruntWhoYouCalling:
	.string "Grunt: Hey! Who are you calling trash?$"

MossdeepCity_SpaceCenter_1F_Movement_EmmieMoveToEmmieGrunt:
	walk_slow_down
	face_right
	step_end

MossdeepCity_SpaceCenter_1F_Text_EmmieTakeOutTheTrash:
	.string "Emmie: Don't worry about this guy.\p"
	.string "Let me take out the trash$"

MossdeepCity_SpaceCenter_1F_Text_EmmieGruntPoppingOffRn:
	.string "Grunt: Damn, it's a party in here.\p"
	.string "Y'all are popping off rn!$"

MossdeepCity_SpaceCenter_1F_EventScript_SetEmmieGruntAqua::
	setvar VAR_0x8008, LOCALID_SPACE_CENTER_EMMIE_GRUNT_AQUA
	return

MossdeepCity_SpaceCenter_1F_EventScript_SetEmmieGruntMagma::
	setvar VAR_0x8008, LOCALID_SPACE_CENTER_EMMIE_GRUNT_MAGMA
	return

MossdeepCity_SpaceCenter_1F_Movement_EmmieMoveForPlayerBrock:
	walk_right
	walk_left
	step_end

MossdeepCity_SpaceCenter_1F_Movement_PlayerMoveToBrock:
	walk_down
	walk_left
	step_end

MossdeepCity_SpaceCenter_1F_Text_BrockThugsTurnedUp:
	.string "Brock: These thugs just marched in here\n"
	.string "and took the place over.\p"
	.string "Misty and Erika need my help!\p"
	.string "You… come with me. If they won't let us\n"
	.string "pass, then we'll force our way through!$"

MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2::
	lockall
	call_if_set FLAG_EVIL_TEAM_AQUA, MossdeepCity_SpaceCenter_1F_EventScript_SetEmmieGruntAqua
	call_if_set FLAG_EVIL_TEAM_MAGMA, MossdeepCity_SpaceCenter_1F_EventScript_SetEmmieGruntMagma
	setobjectxy VAR_0x8008, 8, 9
	applymovement VAR_0x8008, Common_Movement_FaceUp
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_WalkInPlaceFasterDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement LOCALID_SPACE_CENTER_1F_BROCK
	msgbox MossdeepCity_SpaceCenter_1F_Text_BrockThugsTurnedUp, MSGBOX_DEFAULT
	closemessage
	goto_if_set FLAG_EVIL_TEAM_AQUA, MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt1Grunt2BrockScriptJoin
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2BrockScriptJoin::
	delay 16
	addobject VAR_0x8008
	playse SE_DOOR
	waitse
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_FaceRight
	waitmovement
	playse SE_PIN
	waitse
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_QuestionMark
	waitmovement
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterUp
	waitmovement
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieGruntPoppingOffRn, MSGBOX_DEFAULT
	closemessage
	delay 16
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieTakeOutTheTrash, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8008, Common_Movement_QuestionMark
	waitmovement
	applymovement VAR_0x8008, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MossdeepCity_SpaceCenter_1F_Movement_EmmieMoveToEmmieGrunt
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
	waitmovement
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieGruntWhoYouCalling, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
	waitmovement
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieYou, MSGBOX_DEFAULT
	closemessage
	playse SE_NOT_EFFECTIVE
	applymovement VAR_0x8008, MossdeepCity_SpaceCenter_1F_Movement_EmmieGruntKnockedBack
	waitmovement
	delay 4
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowRight
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_WalkSlowLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowLeft
	waitmovement
	playse SE_PIN
	applymovement LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT1, Common_Movement_ExclamationMark
	waitmovement 0
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement  LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT2, Common_Movement_ExclamationMark
	waitmovement 0
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro MSGBOX_AUTOCLOSE
	goto MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2DoMultiBattle
	releaseall
	end

MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2DoMultiBattle::
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	multi_2p_vs_2 TRAINER_MAGMA_GRUNT_SPACE_CENTER_1, MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat, TRAINER_MAGMA_GRUNT_SPACE_CENTER_2, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2Victory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2Victory::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_1F_Text_BrockThanksForAssistance, MSGBOX_AUTOCLOSE
	delay 4
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_FaceRight
	waitmovement
	playse SE_NOT_EFFECTIVE
	applymovement VAR_0x8008, MossdeepCity_SpaceCenter_1F_Movement_EmmieGruntKnockedBack
	waitmovement
	delay 4
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
	waitmovement
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieStayThere, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MossdeepCity_SpaceCenter_1F_Movement_EmmieReturnBrock
	waitmovement
	addvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
	releaseall
	end

MossdeepCity_SpaceCenter_1F_Text_BrockThanksForAssistance:
	.string "Brock: Hey, thanks for the assistance\n"
	.string "kid, I really appreciate it.\p"
	.string "You're made of tough stuff, I'll give\n"
	.string "you that!$"

MossdeepCity_SpaceCenter_1F_Movement_EmmieReturnBrock:
	walk_up
	walk_left
	step_end

MossdeepCity_SpaceCenter_1F_Text_EmmieStayThere:
	.string "Emmie: That's quite enough of that\n"
	.string "thank you very much.\p"
	.string "I'd stay put if I were you$"

MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt1Grunt2BrockScriptJoin::
	delay 16
	addobject VAR_0x8008
	playse SE_DOOR
	waitse
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_FaceRight
	waitmovement
	playse SE_PIN
	waitse
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_QuestionMark
	waitmovement
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterUp
	waitmovement
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieGruntPoppingOffRn, MSGBOX_DEFAULT
	closemessage
	delay 16
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieTakeOutTheTrash, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8008, Common_Movement_QuestionMark
	waitmovement
	applymovement VAR_0x8008, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MossdeepCity_SpaceCenter_1F_Movement_EmmieMoveToEmmieGrunt
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
	waitmovement
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieGruntWhoYouCalling, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
	waitmovement
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieYou, MSGBOX_DEFAULT
	closemessage
	playse SE_NOT_EFFECTIVE
	applymovement VAR_0x8008, MossdeepCity_SpaceCenter_1F_Movement_EmmieGruntKnockedBack
	waitmovement
	delay 4
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowRight
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_WalkSlowLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowLeft
	waitmovement
	playse SE_PIN
	applymovement LOCALID_SPACE_CENTER_1F_AQUA_GRUNT1, Common_Movement_ExclamationMark
	waitmovement 0
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_SPACE_CENTER_1F_BROCK, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement  LOCALID_SPACE_CENTER_1F_AQUA_GRUNT2, Common_Movement_ExclamationMark
	waitmovement 0
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro MSGBOX_AUTOCLOSE
	goto MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt1Grunt2DoMultiBattle
	releaseall
	end

MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt1Grunt2DoMultiBattle::
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	multi_2p_vs_2 TRAINER_AQUA_GRUNT_SPACE_CENTER_1, MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat, TRAINER_AQUA_GRUNT_SPACE_CENTER_2, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2Victory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

MossdeepCity_SpaceCenter_1F_EventScript_EmmieGrunt::
	lockall
	face_player
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieGrunt, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

MossdeepCity_SpaceCenter_1F_Text_EmmieGrunt:
	.string "Grunt: Keep that girl away from me.\p"
	.string "She's completely nuts!$"

MossdeepCity_SpaceCenter_1F_EventScript_Misty::
	lockall
	applymovement LOCALID_SPACE_CENTER_1F_MISTY, Common_Movement_WalkInPlaceFasterDown
	waitmovement
	goto_if_set FLAG_DEFEATED_LAVARIDGE_MISTY, MossdeepCity_SpaceCenter_1F_EventScript_MistyYouAgain
	msgbox MossdeepCity_SpaceCenter_1F_Text_MistyHeyYou MSGBOX_DEFAULT
	closemessage
	goto MossdeepCity_SpaceCenter_1F_EventScript_MistyContinue
MossdeepCity_SpaceCenter_1F_EventScript_MistyYouAgain::
	msgbox MossdeepCity_SpaceCenter_1F_Text_MistyYouAgain, MSGBOX_DEFAULT
	closemessage
MossdeepCity_SpaceCenter_1F_EventScript_MistyContinue::
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
	goto_if_eq VAR_TEMP_3, 3, MossdeepCity_SpaceCenter_1F_EventScript_MistyEmmieHelpErikaLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
	goto MossdeepCity_SpaceCenter_1F_EventScript_MistyEmmieHelpErika
MossdeepCity_SpaceCenter_1F_EventScript_MistyEmmieHelpErikaLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
MossdeepCity_SpaceCenter_1F_EventScript_MistyEmmieHelpErika::
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieIllHelpErika, MSGBOX_DEFAULT
	closemessage
	goto_if_eq VAR_TEMP_3, 3, MossdeepCity_SpaceCenter_1F_EventScript_MistyEmmieWalkToErikaLeft
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_1F_Movement_ApproachGrunt3Grunt4Stage1
	applymovement LOCALID_SPACE_CENTER_1F_MISTY, MossdeepCity_SpaceCenter_1F_Movement_ApproachGrunt3Grunt4Stage1
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MossdeepCity_SpaceCenter_1F_Movement_EmmieWalkToErika
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
	goto MossdeepCity_SpaceCenter_1F_EventScript_MistyContinue2
MossdeepCity_SpaceCenter_1F_EventScript_MistyEmmieWalkToErikaLeft::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MossdeepCity_SpaceCenter_1F_Movement_EmmieWalkToErikaLeft
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
MossdeepCity_SpaceCenter_1F_EventScript_MistyContinue2::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieKnockKnock, MSGBOX_DEFAULT
	closemessage
	call MossdeepCity_SpaceCenter_1F_EventScript_SetErikaGrunt
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterDown
	waitmovement
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_QuestionMark
	waitmovement
	msgbox MossdeepCity_SpaceCenter_1F_Text_ErikaGruntWhosThere, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieJustDistractingYou, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8008, Common_Movement_FaceUp
	waitmovement
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	waitmovement
	playse SE_PIN
	applymovement LOCALID_SPACE_CENTER_1F_ERIKA, Common_Movement_WalkInPlaceFasterDown
	applymovement VAR_0x8008, Common_Movement_KnockedBackDown
	waitmovement VAR_0x8008
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_1F_Movement_ApproachGrunt3Grunt4Stage2
	applymovement LOCALID_SPACE_CENTER_1F_MISTY, MossdeepCity_SpaceCenter_1F_Movement_ApproachGrunt3Grunt4Stage2
	goto_if_set FLAG_EVIL_TEAM_MAGMA, MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4
	goto MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt3Grunt4

MossdeepCity_SpaceCenter_1F_Movement_ApproachGrunt3Grunt4Stage2:
	walk_slow_up
	face_right
	step_end

MossdeepCity_SpaceCenter_1F_Text_EmmieJustDistractingYou:
	.string "Emmie: Oh, no, I'm not telling you a\n"
	,string "joke, I'm just distracting you.$"

MossdeepCity_SpaceCenter_1F_Text_ErikaGruntWhosThere:
	.string "Grunt: Who's there?$"

MossdeepCity_SpaceCenter_1F_Text_EmmieKnockKnock:
	.string "Emmie: Knock knock!$"

MossdeepCity_SpaceCenter_1F_Movement_ApproachGrunt3Grunt4Stage1:
	walk_slow_up
	face_left
	step_end	

MossdeepCity_SpaceCenter_1F_Movement_EmmieWalkToErika:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

MossdeepCity_SpaceCenter_1F_Movement_EmmieWalkToErikaLeft:
	walk_up
	walk_up
	walk_left
	walk_left
	step_end


MossdeepCity_SpaceCenter_1F_Text_EmmieIllHelpErika:
	.string "Emmie: {PLAYER}, you handle this.\p"
	.string "I'm going to give that grunt a nasty\n"
	.string "surprise!$"

MossdeepCity_SpaceCenter_1F_Text_MistyYouAgain:
	.string "Misty: Oh, it's you again!\p" 
	.string "Lend me a hand here\would you?\p"
	.string "My friend Erika has been jumped by one\n"
	.string "of these loons, but these two here\l"
	.string "won't let me get to her!$"

MossdeepCity_SpaceCenter_1F_Text_MistyHeyYou:
	.string "Misty: Hey, you!\p"
	.string "Lend me a hand here would you?\p"
	.string "My friend Erika has been jumped by one\n"
	.string "of these loons, but these two here\l"
	.string "won't let me get to her!$"
	

MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4Trigger::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement LOCALID_SPACE_CENTER_1F_MISTY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement
	goto_if_set FLAG_DEFEATED_LAVARIDGE_MISTY, MossdeepCity_SpaceCenter_1F_EventScript_MistyPretendDontKnowMe
	msgbox MossdeepCity_SpaceCenter_1F_Text_MistyHelpAGirlOut MSGBOX_DEFAULT
	closemessage
	goto MossdeepCity_SpaceCenter_1F_EventScript_MistyContinue3
MossdeepCity_SpaceCenter_1F_EventScript_MistyPretendDontKnowMe::
	msgbox MossdeepCity_SpaceCenter_1F_Text_MistyPretendDontKnowMe, MSGBOX_DEFAULT
	closemessage
MossdeepCity_SpaceCenter_1F_EventScript_MistyContinue3::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
	msgbox MossdeepCity_SpaceCenter_1F_Text_EmmieIllHelpErika, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_1F_Movement_ApproachGrunt3Grunt4Stage3Player
	applymovement LOCALID_SPACE_CENTER_1F_MISTY, MossdeepCity_SpaceCenter_1F_Movement_ApproachGrunt3Grunt4Stage1
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MossdeepCity_SpaceCenter_1F_Movement_EmmieWalkToErikaLeft
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
	goto MossdeepCity_SpaceCenter_1F_EventScript_MistyContinue2

MossdeepCity_SpaceCenter_1F_Movement_ApproachGrunt3Grunt4Stage3Player:
	walk_slow_left
	face_left
	step_end

MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4::
playse SE_PIN
applymovement LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT3, Common_Movement_ExclamationMark
applymovement  LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT4, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MAGMA, TRUE
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro MSGBOX_AUTOCLOSE
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro MSGBOX_AUTOCLOSE
goto MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4DoMultiBattle
releaseall
end

MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt3Grunt4::
playse SE_PIN
applymovement LOCALID_SPACE_CENTER_1F_AQUA_GRUNT3, Common_Movement_ExclamationMark
applymovement  LOCALID_SPACE_CENTER_1F_AQUA_GRUNT4, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_AQUA, TRUE
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro MSGBOX_AUTOCLOSE
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro MSGBOX_AUTOCLOSE
goto MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt3Grunt4DoMultiBattle
releaseall
end

MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4DoMultiBattle::
playbgm MUS_ENCOUNTER_AQUA, TRUE
multi_2p_vs_2 TRAINER_AQUA_GRUNT_SPACE_CENTER_3, MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat, TRAINER_AQUA_GRUNT_SPACE_CENTER_4, MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4Victory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

MossdeepCity_SpaceCenter_1F_Text_MistyHelpAGirlOut:
	.string "Misty: Are you seriously going to just\n"
	.string "walk past me?\p"
	.string "C'mon, help a girl out. Don't be like\n"
	.string "Sergeant Scared and dip the moment\l"
	.string "trouble appears.\p"
	.string "My friend Erika has been jumped by one\n"
	.string "of these loons, but these two here\l"
	.string "won't let me get to her!$"

MossdeepCity_SpaceCenter_1F_Text_MistyPretendDontKnowMe:
	.string "Misty: Really? Look around for a\n"
	.string "moment and tell me now is a good time\l"
	.string "to pretend we haven't met?\p"
	.string "And I thought Surge could be rude\n"
	.string "at times.\p"
	.string "Come on, lend me a hand would you?\p"
	.string "My friend Erika has been jumped by one\n"
	.string "of these loons, but these two here\l"
	.string "won't let me get to her!$"

MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4DoMultiBattle::
playbgm MUS_ENCOUNTER_MAGMA, TRUE
multi_2p_vs_2 TRAINER_MAGMA_GRUNT_SPACE_CENTER_3, MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat, TRAINER_MAGMA_GRUNT_SPACE_CENTER_4, MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4Victory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4Victory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
addvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
end

MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt3Grunt4::
lockall
playse SE_PIN
applymovement LOCALID_SPACE_CENTER_1F_AQUA_GRUNT3, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_AQUA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement  LOCALID_SPACE_CENTER_1F_AQUA_GRUNT4, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_AQUA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro MSGBOX_AUTOCLOSE
goto MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt3Grunt4DoMultiBattle
releaseall
end

MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt3Grunt4DoMultiBattle::
playbgm MUS_ENCOUNTER_AQUA, TRUE
multi_2p_vs_2 TRAINER_AQUA_GRUNT_SPACE_CENTER_3, MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat, TRAINER_AQUA_GRUNT_SPACE_CENTER_4, MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt3Grunt4Victory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

MossdeepCity_SpaceCenter_1F_EventScript_AquaGrunt3Grunt4Victory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
addvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
end

MossdeepCity_SpaceCenter_1F_EventScript_Grunt3::
	faceplayer
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_SpaceCenter_1F_EventScript_Grunt1::
	faceplayer
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_SpaceCenter_1F_EventScript_Grunt4::
	faceplayer
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_SpaceCenter_1F_EventScript_Grunt2::
	faceplayer
	goto MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MAGMA_GRUNT_SPACE_CENTER_2, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat
	setflag FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F
	switch VAR_FACING
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest
#ifdef BUGFIX
	case DIR_EAST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
#else
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
#endif
	applymovement LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT2, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs
	waitmovement 0
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated::
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest::
	applymovement LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT2, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest
	waitmovement 0
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 1
	release
	end

@ Functionally unused by mistake. The movement is handled anyway after the switch (see above)
@ This also means VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE can never be 3
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast::
	applymovement LOCALID_SPACE_CENTER_1F_MAGMA_GRUNT2, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast
	waitmovement 0
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 3
	release
	end

MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest:
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

@ Functionally unused. See above
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast:
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

@ This was meant to only handle the player facing North, but by mistake(?) it also handles the player facing East
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs:
	face_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent:
	.string "The rocket's launch is imminent!$"

MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber:
	.string "The rocket launched safely!\n"
	.string "That's successful launch no. {STR_VAR_1}!$"

MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent:
	.string "I know that things are a little\n"
	.string "haywire right now, but…\p"
	.string "The rocket's launch is imminent!$"

MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber:
	.string "I know that things are a little\n"
	.string "haywire right now, but…\p"
	.string "The rocket launched safely!\n"
	.string "That's successful launch no. {STR_VAR_1}!$"

MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection:
	.string "A rocket launch demands perfection.\n"
	.string "Not even a 1% margin of error is allowed.\p"
	.string "Even if it's 99% okay, the whole thing\n"
	.string "is useless if 1% happens to be no good.\p"
	.string "Despite that, we never stop trying.\n"
	.string "Why? It's a dream that never ends.$"

MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter:
	.string "Those thugs have their sights\n"
	.string "set on our Space Center.\p"
	.string "But we can't allow anything that minor\n"
	.string "to interfere with our rocket launch!$"

MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt:
	.string "I was taking a stroll down the beach\n"
	.string "when I found this.\p"
	.string "It's not anything I need, so you can\n"
	.string "have it.$"

MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers:
	.string "The HOENN region has been famous for \n"
	.string "its meteor showers for a long time.$"

MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis:
	.string "They can't be allowed to steal\n"
	.string "the rocket fuel.\p"
	.string "Oh, by the way, you can have this stone\n"
	.string "I found on the beach.$"

MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma:
	.string "With that evil team around, I guess\n"
	.string "strolls on the beach aren't safe.$"

MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace:
	.string "Some people claim that Pokémon came\n"
	.string "from space. Could it be true?$"

MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma:
	.string "Team Aqua should take care of\n"
	.string "Team Magma!\p"
	.string "But if they did that, Team Aqua will\n"
	.string "become bold and brazen, won't they?$"

MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind:
	.string "A giant chunk of metal bursts through\n"
	.string "the skies and flies into space…\p"
	.string "It boggles my mind!$"

MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream:
	.string "A giant chunk of metal bursts through\n"
	.string "the skies and flies into space…\p"
	.string "But that nasty team wants to spoil\n"
	.string "that dream of mine!\p"
	.string "I'm not having any of that!$"

MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel:
	.string "Steven: {PLAYER}{KUN}, have you read that\n"
	.string "proclamation already?\p"
	.string "Those people are coming after the rocket\n"
	.string "fuel on this island.\p"
	.string "I don't know what they'd need it for,\n"
	.string "but they can't be allowed to take it.\p"
	.string "I'll keep an eye on things for\n"
	.string "a while longer.\p"
	.string "In the meantime, why don't you go\n"
	.string "check out the town?$"

MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro:
	.string "As promised, we've come for\n"
	.string "the rocket fuel!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat:
	.string "Ran out of fuel…$"

MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle:
	.string "Don't think you're on a roll just\n"
	.string "because you've beaten me!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro:
	.string "We gave you fair warning!\n"
	.string "There's nothing sneaky about us!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat:
	.string "Grrr…\n"
	.string "We should've used sneaky treachery…$"

MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle:
	.string "Okay, I get it already! The next time,\n"
	.string "we'll come unannounced.$"

MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro:
	.string "The rocket fuel the Space Center has\n"
	.string "in storage--that's what we're after.\p"
	.string "We mean to take every last bit of it!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat:
	.string "Please, can you spare some fuel?\n"
	.string "Even a chintzy cup will do!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle:
	.string "What are we going to do with\n"
	.string "the rocket fuel?\p"
	.string "How would I know?\n"
	.string "Ask our leader upstairs!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro:
	.string "Our leader said no one, but no one,\n"
	.string "gets past me!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat:
	.string "Ack! Ack! Aaack!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle:
	.string "Please, tell our leader that\n"
	.string "I never abandoned my post.\l"
	.string "That I stayed to the bitter end…$"

MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice:
	.string "This is…\n"
	.string "An intent-to-steal notice?\p"
	.string "“To the staff of the Space Center:\n"
	.string "How are you? We are doing fine.\p"
	.string "“We will soon visit you to take your\n"
	.string "rocket fuel.\p"
	.string "“Please don't try to stop us.\n"
	.string "We will take the fuel no matter what.\p"
	.string "“Let there be more land!\n"
	.string "                                          Team Magma$"

MossdeepCity_SpaceCenter_1F_Text_AquaIntentToStealNotice:
	.string "This is…\n"
	.string "An intent-to-steal notice?\p"
	.string "“To the staff of the Space Center:\n"
	.string "How are you? We are doing fine.\p"
	.string "“We will soon visit you to take your\n"
	.string "rocket fuel.\p"
	.string "“Please don't try to stop us.\n"
	.string "We will take the fuel no matter what.\p"
	.string "“Let there be greater seas!\n"
	.string "                                          Team Aqua$"

