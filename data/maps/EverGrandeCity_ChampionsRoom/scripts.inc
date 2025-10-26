.set LOCALID_WALLACE, 1
.set LOCALID_RIVAL, 2
.set LOCALID_BIRCH, 3

EverGrandeCity_ChampionsRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
	.byte 0

EverGrandeCity_ChampionsRoom_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end

EverGrandeCity_ChampionsRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 7, 12
	turnobject OBJ_EVENT_ID_NPC_FOLLOWER, DIR_NORTH
	turnobject LOCALID_PLAYER, DIR_NORTH
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_EVER_GRANDE_CITY_CHAMPIONS_ROOM
	end

EverGrandeCity_ChampionsRoom_OnFrame:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp4
	waitmovement 0
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
	waitmovement 0
	setvar VAR_TEMP_1, 1
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
	releaseall
	end

EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_EventScript_Wallace::
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_AUTOCLOSE
	turnobject LOCALID_CHAMPIONS_ROOM_STEVEN, DIR_NORTH
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceDown
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
	waitmovement 0
	delay 30
	playse SE_EXIT
	addobject LOCALID_CHAMPIONS_ROOM_STEVEN
	delay 8
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, EverGrandeCity_ChampionsRoom_Movement_StevenJoinWallace
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_WatchStevenJoinWallace
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EverGrandeCity_ChampionsRoom_Movement_WatchStevenJoinWallace
	waitmovement 0
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenSpeech, MSGBOX_AUTOCLOSE
	goto EverGrandeCity_ChampionsRoom_EventScript_WallaceStevenDoMultiBattle
	releaseall
	end

EverGrandeCity_ChampionsRoom_Movement_StevenJoinWallace:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_left
	face_down
	step_end

EverGrandeCity_ChampionsRoom_Movement_WatchStevenJoinWallace:
	delay_16
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	face_up
	step_end

EverGrandeCity_ChampionsRoom_EventScript_WallaceStevenDoMultiBattle::
	fadescreen FADE_TO_BLACK
	playbgm MUS_VICTORY_ROAD, TRUE
	multi_2p_vs_2 TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat, TRAINER_STEVEN, EverGrandeCity_ChampionsRoom_Text_StevenDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, EverGrandeCity_ChampionsRoom_EventScript_WallaceStevenVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

EverGrandeCity_ChampionsRoom_EventScript_WallaceStevenVictory::
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
	end

EverGrandeCity_ChampionsRoom_EventScript_Defeated::
	playse SE_DOOR
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
	special DrawWholeMapView
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_AUTOCLOSE
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech MSGBOX_DEFAULT
	closemessage
	playse SE_DOOR
	checkplayergender
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	addobject LOCALID_CHAMPIONS_ROOM_WALLY
	addobject LOCALID_RIVAL
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
	end

EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
	playbgm MUS_ENCOUNTER_MAY, FALSE
	return

EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	return

EverGrandeCity_ChampionsRoom_Text_WallyItsAlreadyOver:
	.string "Wally: I told you we wouldn't\n"
	.string "make it in time.\p"
	.string "But it seems there was nothing\n"
	.string "to worry about after all!$"

EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
	delay 40
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CHAMPIONS_ROOM_WALLY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_WallyItsAlreadyOver, MSGBOX_DEFAULT
	closemessage
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
	end

EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
	delay 40
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CHAMPIONS_ROOM_WALLY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_WallyItsAlreadyOver, MSGBOX_DEFAULT
	closemessage
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
	end

EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
	closemessage
	addobject LOCALID_BIRCH
	applymovement LOCALID_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_CHAMPIONS_ROOM_WALLY, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 20
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_CHAMPIONS_ROOM_WALLY, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
	waitmovement 0
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
	checkplayergender
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
	closemessage
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, EverGrandeCity_ChampionsRoom_Movement_StevenExit
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EverGrandeCity_ChampionsRoom_Movement_EmmieExit
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
	waitmovement 0
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
	setvar VAR_PARTNER_EMMIE_STATE, 78
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
	waitstate
	releaseall
	end

EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
	return

EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
	return

EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
	applymovement LOCALID_CHAMPIONS_ROOM_WALLY, EverGrandeCity_ChampionsRoom_Movement_WallyApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
	waitmovement 0
	return

EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
	walk_up
	walk_up
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_Movement_WallyApproachPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_in_place_faster_right
	step_end

EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_in_place_faster_right
	step_end

EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
	walk_in_place_faster_up
	delay_16
	walk_in_place_faster_right
	delay_16
	walk_in_place_faster_up
	delay_8
	walk_in_place_faster_right
	delay_16
	step_end

EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
	walk_right
	walk_up
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Movement_StevenExit:
	delay_16
	walk_left
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Movement_EmmieExit:
	delay_16
	delay_16
	delay_16
	walk_up
	walk_left
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_left
	step_end

EverGrandeCity_ChampionsRoom_Text_IntroSpeech:
	.string "WALLACE: Welcome, {PLAYER}{KUN}, Emmie.\p"
	.string "That incident in SOOTOPOLIS CITY…\n"
	.string "That was superb work, putting an end\l"
	.string "to that crisis all by yourselves.\p"
	.string "Oops!\p"
	.string "It wouldn't be fair to say that you\n"
	.string "alone ended the crisis.\p"
	.string "You overcame that difficult situation\n"
	.string "by working with your POKéMON.\p"
	.string "We TRAINERS raise POKéMON by giving\n"
	.string "them items and by teaching them new\l"
	.string "techniques for battle.\p"
	.string "But we ourselves also learn many\n"
	.string "things from POKéMON.\p"
	.string "And this is where your achievements\n"
	.string "are put to the test against what\l"
	.string "others like you have achieved.\p"
	.string "Now!\p"
	.string "As the two of you have challenged\n"
	.string "the League together, we felt it only\l"
	.string "fair that two champions participate.\p"
	.string "So, I've enlisted the help of an old\n"
	.string "friend.$"

EverGrandeCity_ChampionsRoom_Text_StevenSpeech:
	.string "Steven: Hello, {PLAYER}, Emmie.\p"
	.string "I suppose I never told you that I\n"
	.string "was once the champion of Hoenn.\p"
	.string "After you helped me at the Mossdeep\n"
	.string "Space Center, I knew it wouldn't be\l"
	.string "long before you made it here.\p"
	.string "The talent you have displayed is\n"
	.string "truly remarkable.\p"
	.string "Could this be the day that we see\n"
	.string "a new pair of champions crowned?\p"
	.string "Or perhaps, will the old guard be the\n"
	.string "ones standing victorious in the end?\p"
	.string "The only way to find out is for you\n"
	.string "to demonstrate your abilities to us\l"
	.string "one final time.\p"
	.string "Show us right here and now!$"

EverGrandeCity_ChampionsRoom_Text_Defeat:
	.string "I, the CHAMPION, fall in defeat…\p"
	.string "That was wonderful work.\n"
	.string "You were elegant, infuriatingly so.\l"
	.string "And yet it was utterly glorious!\p"
	.string "Kudos to you, {PLAYER}, Emmie!\p"
	.string "You are truly noble POKéMON\n"
	.string "trainers!$"

EverGrandeCity_ChampionsRoom_Text_StevenDefeat:
	.string "It has been a long time since I tasted\n"
	.string "the bitter flavour of defeat.\p"
	.string "Yet on this occasion it is somewhat\n"
	.string "sweet.\p"
	.string "A new generation has brought with\n"
	.string "it new champions.\p"
	.string "As those who came before us once\n"
	.string "passed it to us, we now pass the\l"
	.string "the torch onto you.$"

EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
	.string "WALLACE: The POKéMON you sent into\n"
	.string "battle…\p"
	.string "At times they danced like a spring\n"
	.string "breeze, and at times they struck\l"
	.string "like lightning.\p"
	.string "It was with light, yet surefooted,\n"
	.string "elegance that you led your POKéMON.\p"
	.string "Even I felt bedazzled by your\n"
	.string "masterful performance!$"

EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech:
	.string "Steven: Indeed, a tremendous display\n"
	.string "of both strength and teamwork.\p"
	.string "You now stand at the glorious peak\n"
	.string "of the Pokémon League.\p"
	.string "We now proclaim you to be the new\n"
	.string "HOENN region…$"

EverGrandeCity_ChampionsRoom_Text_MayAdvice:
	.string "MAY: {PLAYER}{KUN}!\p"
	.string "Here's some advice before you challenge\n"
	.string "the CHAMPION…$"

EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver:
	.string "MAY: Huh?\n"
	.string "What, what, what?\p"
	.string "{PLAYER}{KUN}…\n"
	.string "Could it be that…\l"
	.string "It's already over?$"

EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
	.string "BRENDAN: {PLAYER}!\p"
	.string "How would you like some advice before\n"
	.string "you challenge the CHAMPION?…$"

EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon:
	.string "BRENDAN: {PLAYER}…\p"
	.string "Are you trying to tell me…\n"
	.string "You've beaten the CHAMPION?$"

EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
	.string "PROF. BIRCH: See?\n"
	.string "What did I tell you, {RIVAL}?\p"
	.string "Didn't I tell you that you don't need\n"
	.string "to worry about {PLAYER}{KUN}?\p"
	.string "… … … … … … … …\n"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
	.string "When I heard that you defeated your\n"
	.string "own father at the PETALBURG GYM,\l"
	.string "I thought perhaps you had a chance…\p"
	.string "But to think you've actually become\n"
	.string "the CHAMPION!\p"
	.string "Ah, yes!\p"
	.string "What became of your POKéDEX?\n"
	.string "Here, let me see.$"

EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
	.string "PROF. BIRCH: See?\n"
	.string "What did I tell you, {RIVAL}?\p"
	.string "Didn't I tell you that you don't need\n"
	.string "to worry about {PLAYER}{KUN}?\p"
	.string "… … … … … … … …\n"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
	.string "When I heard that you defeated your\n"
	.string "own father at the PETALBURG GYM,\l"
	.string "I thought perhaps you had a chance…\p"
	.string "But to think you've actually become\n"
	.string "the CHAMPION!\p"
	.string "Anyways, congratulations!\p"
	.string "Now, go proudly into the final room!$"

EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe:
	.string "WALLACE: {PLAYER}{KUN}, Emmie…\p"
	.string "No, let me rephrase that properly.\p"
	.string "The new champions!\p"
	.string "Come with me.$"

EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside:
	.string "WALLACE: I'm sorry, but…\p"
	.string "From here on, only those TRAINERS who\n"
	.string "have become CHAMPIONS may enter.\p"
	.string "You'll have to wait outside.$"

EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
	.string "MAY: Groan…\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "I'm just joking! That's okay!\n"
	.string "That's the rule!\p"
	.string "{PLAYER}{KUN}!\n"
	.string "Honestly, congratulations!$"

EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
	.string "BRENDAN: Whaaaat?! … … … … …\n"
	.string "… … … … … … … …\p"
	.string "It can't be helped if that's the rule.\p"
	.string "{PLAYER}, way to go!\n"
	.string "Congratulations!$"
