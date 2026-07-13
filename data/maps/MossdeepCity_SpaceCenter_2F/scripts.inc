
.set LOCALID_RICH_BOY, 1
.set LOCALID_GENTLEMAN, 2
.set LOCALID_SCIENTIST, 3
.set LOCALID_GRUNT6, 5
.set LOCALID_GRUNT5, 7
.set LOCALID_AQUA_GRUNT5, 11
.set LOCALID_AQUA_GRUNT6, 12

MossdeepCity_SpaceCenter_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_OnFrame
	.byte 0

MossdeepCity_SpaceCenter_2F_EventScript_ProgressEmmieState::
	setvar VAR_PARTNER_EMMIE_STATE, 56
	return

MossdeepCity_SpaceCenter_2F_OnTransition:
	call_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians
	call_if_eq VAR_MOSSDEEP_SPACE_CENTER_STATE, 4, MossdeepCity_SpaceCenter_2F_EventScript_SetEvilTeamObjects
	call_if_eq VAR_MOSSDEEP_SPACE_CENTER_STATE, 6, MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts
	end

MossdeepCity_SpaceCenter_2F_EventScript_SetEvilTeamObjects::
	call_if_set FLAG_EVIL_TEAM_AQUA, MossdeepCity_SpaceCenter_2F_EventScript_SetAquaObjects
	@call_if_set FLAG_EVIL_TEAM_MAGMA, MossdeepCity_SpaceCenter_2F_EventScript_SetMagmaObjects
	return

MossdeepCity_SpaceCenter_2F_EventScript_SetAquaObjects::
	setobjectxyperm LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, 1, 8
	setobjectxyperm LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN, 12, 4
	return

MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians::
	clearflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
	setobjectxyperm LOCALID_SCIENTIST, 5, 3
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm LOCALID_RICH_BOY, 3, 2
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm LOCALID_GENTLEMAN, 1, 3
	setobjectmovementtype LOCALID_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
	return

MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts::
	call_if_set FLAG_EVIL_TEAM_AQUA, MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedAquaGrunts
	call_if_set FLAG_EVIL_TEAM_MAGMA, MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedMagmaGrunts
	return

MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedMagmaGrunts::
	setobjectmovementtype LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm LOCALID_GRUNT6, 15, 4
	setobjectxyperm LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, 15, 7
	setobjectxyperm LOCALID_GRUNT5, 8, 4
	return

MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedAquaGrunts::
	setobjectmovementtype LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm LOCALID_AQUA_GRUNT6, 15, 4
	setobjectxyperm LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_SHELLY, 15, 7
	setobjectxyperm LOCALID_AQUA_GRUNT5, 8, 4
	return

MossdeepCity_SpaceCenter_2F_OnFrame:
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 4, MossdeepCity_SpaceCenter_2F_EventScript_ThreeGrunts
	map_script_2 VAR_PARTNER_EMMIE_STATE, 55, MossdeepCity_SpaceCenter_2F_EventScript_ProgressEmmieState
	.2byte 0

MossdeepCity_SpaceCenter_2F_EventScript_AdminBattle::
	@call_if_set FLAG_EVIL_TEAM_AQUA, MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedAquaGrunts
	goto_if_set FLAG_EVIL_TEAM_MAGMA, MossdeepCity_SpaceCenter_2F_EventScript_Grunt5Grunt6Victory
	end

MossdeepCity_SpaceCenter_2F_EventScript_ThreeGrunts::
	lockall
	@showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_MOSSDEEP_CITY_SPACE_CENTER_2F
	@applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkDown
	@applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerEnter
	@waitmovement 0
	@applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	@waitmovement 0
	setobjectxyperm LOCALID_AQUA_GRUNT5, 11, 1
	setobjectxyperm LOCALID_AQUA_GRUNT6, 11, 1
	setobjectxyperm LOCALID_GRUNT5, 11, 1
	setobjectxyperm LOCALID_GRUNT6, 11, 1
	setobjectmovementtype LOCALID_AQUA_GRUNT5, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_AQUA_GRUNT6, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_GRUNT5, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_GRUNT6, MOVEMENT_TYPE_FACE_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerApproachAdmin
	waitmovement
	playse SE_PIN
	@goto_if_set FLAG_EVIL_TEAM_AQUA, MossdeepCity_SpaceCenter_2F_EventScript_ThreeAquaGrunts
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_QuestionMark
	waitmovement 0
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_WalkInPlaceFasterUp
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_BlueCantGetPast, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_FaceRight
	waitmovement
	delay 48
	msgbox MossdeepCity_SpaceCenter_2F_Text_BlueOneDayRocket, MSGBOX_AUTOCLOSE
	delay 48
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_FaceUp
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_BlueCantGetPast2, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerApproachAdmin
	waitmovement
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_WalkInPlaceFasterLeft
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_TabithaAnAccomplice, MSGBOX_AUTOCLOSE
	delay 24
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_WalkInPlaceFasterUp
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_TabithaGoodThingIPrepared, MSGBOX_AUTOCLOSE
	playbgm MUS_MIROR_B, FALSE
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, MossdeepCity_SpaceCenter_2F_Movement_TabithaSpin
	waitmovement
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_WalkInPlaceFasterDown
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_TabithaNeedsYou, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_FaceUp
	waitmovement
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_QuestionMark
	waitmovement
	delay 16
	playse SE_DOOR
	addobject LOCALID_GRUNT6
	delay 8
	applymovement LOCALID_GRUNT6, MossdeepCity_SpaceCenter_2F_Movement_Grunt6MoveForGrunt5
	waitmovement
	delay 16
	playse SE_DOOR
	addobject LOCALID_GRUNT5
	delay 8
	applymovement LOCALID_GRUNT5, MossdeepCity_SpaceCenter_2F_Movement_PlayerEnter
	waitmovement
	applymovement LOCALID_GRUNT5, MossdeepCity_SpaceCenter_2F_Movement_Grunt5Approach
	applymovement LOCALID_GRUNT6, MossdeepCity_SpaceCenter_2F_Movement_Grunt6Approach
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerWatchGrunt5
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, MossdeepCity_SpaceCenter_2F_Movement_PartnerWatchGrunt6
	waitmovementall
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, MossdeepCity_SpaceCenter_2F_Movement_TabithaSpin2
	waitmovement
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_WalkInPlaceFasterDown
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_TabithaPinserAttack, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_FaceUp
	waitmovement
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_MAGMA_GRUNTS
	goto MossdeepCity_SpaceCenter_2F_EventScript_Grunt5Grunt6DoMultiBattle

MossdeepCity_SpaceCenter_2F_Movement_PlayerWatchGrunt5:
	delay_16
	delay_16
	delay_16
	face_left
	step_end

MossdeepCity_SpaceCenter_2F_Movement_PartnerWatchGrunt6:
	delay_16
	delay_16
	delay_16
	face_right
	step_end

MossdeepCity_SpaceCenter_2F_Movement_Grunt6Approach:
	walk_slow_right
	walk_slow_down
	walk_slow_down
	face_left
	step_end

MossdeepCity_SpaceCenter_2F_Movement_Grunt5Approach:
	walk_slow_left
	walk_slow_down
	walk_slow_down
	face_right
	step_end

MossdeepCity_SpaceCenter_2F_Movement_TabithaSpin:
	face_right
	delay_16
	face_down
	delay_16
	face_left
	delay_16
	face_up
	delay_16
	step_end

MossdeepCity_SpaceCenter_2F_Movement_TabithaSpin2:
	face_left
	delay_16
	face_up
	delay_16
	face_right
	delay_16
	face_down
	delay_16
	step_end

MossdeepCity_SpaceCenter_2F_Movement_Grunt6MoveForGrunt5:
	walk_down
	walk_right
	face_down
	step_end

MossdeepCity_SpaceCenter_2F_Text_TabithaGoodThingIPrepared:
	.string "It's a good thing that I prepared\n"
	.string "for such underhanded tactics.$"

MossdeepCity_SpaceCenter_2F_Text_TabithaNeedsYou:
	.string "Time to come out ladies! Your Tabby\n"
	.string "needs you!$"

MossdeepCity_SpaceCenter_2F_Text_TabithaPinserAttack:
	.string "Pinser attack!$"

MossdeepCity_SpaceCenter_2F_Text_TabithaAnAccomplice:
	.string "Tabitha: Well, now, look what we have\n"
	.string "here.\p"
	.string "An accomplice? Where is your sense of\n"
	.string "pride!$"

MossdeepCity_SpaceCenter_2F_Text_BlueCantGetPast2:
	.string "Everything happened pretty quickly.\n"
	.string "We were caught off-guard.\p"
	.string "Steven is up ahead trying to hold off\n"
	.string "their leaders, but this one here is\l"
	.string "giving me grief.\p"
	.string "Come here and help a pal out will you?$"

MossdeepCity_SpaceCenter_2F_Text_BlueOneDayRocket:
	.string "… … … … \n"
	.string "… … … … \p"
	.string "I wonder if one day I will use the\n"
	.string "word rocket in a positive context…$"

MossdeepCity_SpaceCenter_2F_Text_BlueCantGetPast:
	.string "Blue: {PLAYER}! You're here at the perfect\n"
	.string "time.\p"
	.string "This lot just marched in here and are\n"
	.string "demanding the fuel for the rocket.$"

MossdeepCity_SpaceCenter_2F_Movement_PlayerApproachAdmin:
	walk_slow_down
	step_end

MossdeepCity_SpaceCenter_2F_Movement_PlayerEnter:
	walk_down
	step_end

MossdeepCity_SpaceCenter_2F_Movement_EmmieExit:
	walk_down
	walk_up
	step_end

MossdeepCity_SpaceCenter_2F_Movement_PlayerExit:
	walk_up
	walk_up
	step_end

MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts::
	goto MossdeepCity_SpaceCenter_2F_EventScript_Grunt5Grunt6DoMultiBattle

MossdeepCity_SpaceCenter_2F_EventScript_Grunt5Grunt6DoMultiBattle::
	playbgm MUS_MIROR_B, TRUE
	addvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1 @ 5
	multi_2_vs_2 TRAINER_MAGMA_GRUNT_SPACE_CENTER_5, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat, TRAINER_MAGMA_GRUNT_SPACE_CENTER_6, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat, PARTNER_BLUE_B2B
	switch VAR_RESULT
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_Grunt5Grunt6Victory
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_MAGMA_GRUNTS
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 4
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut

MossdeepCity_SpaceCenter_2F_EventScript_Grunt5Grunt6Victory::
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, MossdeepCity_SpaceCenter_2F_Movement_TabithaSpin
	waitmovement
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_WalkInPlaceFasterDown
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_TabithaOutnumbered, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, MossdeepCity_SpaceCenter_2F_Movement_TabithaSpin2
	waitmovement
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_WalkInPlaceFasterDown
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_BlueYouThinkSo, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_FaceUp
	waitmovement
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_QuestionMark
	waitmovement
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_WalkInPlaceFasterUp
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_TabithaHmmm, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_WalkInPlaceFasterDown
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_BlueNow, MSGBOX_AUTOCLOSE
	playse SE_M_DETECT
	dofieldeffectsparkle 10, 4, 0
	dofieldeffectsparkle 13, 4, 0
	waitfieldeffect FLDEFF_SPARKLE
	playse SE_NOT_EFFECTIVE
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_KnockedBackDown
	applymovement LOCALID_GRUNT5, Common_Movement_KnockedBackLeft2
	applymovement LOCALID_GRUNT6, Common_Movement_KnockedBackRight2
	delay 4
	addobject LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_KOGA
	addobject LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_JANINE
	waitmovementall
	playse SE_PIN
	delay 16
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_ExclamationMark
	applymovement LOCALID_GRUNT5, Common_Movement_ExclamationMark
	applymovement LOCALID_GRUNT6, Common_Movement_ExclamationMark
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_JANINE, Common_Movement_WalkSlowRight
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_KOGA, Common_Movement_WalkSlowLeft
	waitmovementall
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_WalkInPlaceFasterDown
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_BlueYouDontKnow, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_WalkSlowDown
	waitmovement
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_WalkInPlaceFasterUp
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_BlueWithMe, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowDown
	waitmovement
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_WalkInPlaceFasterDown
	waitmovement
	playse SE_NOT_EFFECTIVE
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_KnockedBackDown
	waitmovement
	delay 16
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_WalkInPlaceFasterDown
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_BlueCrucialDetail, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowDown
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_WalkSlowDown
	waitmovement
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, Common_Movement_WalkInPlaceFasterDown
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_BlueMostPowerfulTrainer, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_ExclamationMark
	waitmovement
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerApproachAdmin2
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, MossdeepCity_SpaceCenter_2F_Movement_TabithaPanic
	waitmovementall
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_WalkInPlaceFasterLeft
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_TabithaHoldOn, MSGBOX_AUTOCLOSE
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 6
	goto MossdeepCity_SpaceCenter_2F_EventScript_TabithaDoMultiBattle
	releaseall
	end


MossdeepCity_SpaceCenter_2F_Text_TabithaHoldOn:
	.string "Tabitha: Wait, wait, wait…\n"
	.string "Hold on just a moment--$"

MossdeepCity_SpaceCenter_2F_Movement_PlayerApproachAdmin2:
	walk_slow_down
	face_right
	step_end

MossdeepCity_SpaceCenter_2F_Movement_TabithaPanic:
	walk_in_place_faster_left
	delay_4
	walk_in_place_faster_up
	delay_4
	walk_in_place_faster_left
	delay_4
	walk_in_place_faster_up
	delay_4
	step_end

MossdeepCity_SpaceCenter_2F_Text_BlueCrucialDetail:
	.string "You see, there's one crucial detail\n"
	.string "that you seem to be missing.$"

MossdeepCity_SpaceCenter_2F_Text_BlueMostPowerfulTrainer:
	.string "I used to be the most powerful trainer\n"
	.string "in the world!$"

MossdeepCity_SpaceCenter_2F_Text_BlueWithMe:
	.string "{PLAYER}, with me, now.$"


MossdeepCity_SpaceCenter_2F_Text_BlueYouDontKnow:
	.string "Blue: The thing is, you clearly don't\n"
	.string "know what you are up against, do you?$"

MossdeepCity_SpaceCenter_2F_Text_BlueNow:
	.string "Blue: Now!$"

MossdeepCity_SpaceCenter_2F_Text_TabithaHmmm:
	.string "Tabitha: Hmmm?\p"
	.string "What do you--$"

MossdeepCity_SpaceCenter_2F_Text_BlueYouThinkSo:
	.string "Blue: Oh, do you really think so?$"

MossdeepCity_SpaceCenter_2F_Text_TabithaOutnumbered:
	.string "Tabitha: Hehehehe!\p"
	.string "You're outnumbered!$"

MossdeepCity_SpaceCenter_2F_EventScript_TabithaDoMultiBattle::
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	multi_2_vs_1 TRAINER_TABITHA_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_TabithaDefeat, PARTNER_BLUE_B2B
	switch VAR_RESULT
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_TabithaVictory
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_MAGMA_GRUNTS
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 4
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut

MossdeepCity_SpaceCenter_2F_EventScript_TabithaVictory::
	delay 8
	playse SE_NOT_EFFECTIVE
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated
	waitmovement
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA, Common_Movement_WalkInPlaceFasterLeft
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, MossdeepCity_SpaceCenter_2F_Movement_AllyApproachPlayerPostAdmin
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_BlueIllHoldHim, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE, MossdeepCity_SpaceCenter_2F_Movement_AllyHoldsAdmin
	waitmovement
	delay 48
	playse SE_DOOR
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_MOSSDEEP_CITY_SPACE_CENTER_2F
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MossdeepCity_SpaceCenter_2F_Movement_EmmieReturnAfterAdmin
	waitmovement
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
	waitmovement
	msgbox MossdeepCity_SpaceCenter_2F_Text_EmmieMissMuch, MSGBOX_AUTOCLOSE
	copyobjectxytoperm LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_KOGA
	copyobjectxytoperm LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_JANINE
	copyobjectxytoperm LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_BLUE
	copyobjectxytoperm LOCALID_GRUNT6
	copyobjectxytoperm LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA
	copyobjectxytoperm LOCALID_GRUNT5
	releaseall
	end

MossdeepCity_SpaceCenter_2F_Text_EmmieMissMuch:
	.string "Emmie: Well, that guy really does\n"
	.string "make a great damsel in distress.\p"
	.string "Anyway, I hope I didn't miss too much?$"

MossdeepCity_SpaceCenter_2F_Movement_EmmieReturnAfterAdmin:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end


MossdeepCity_SpaceCenter_2F_Movement_AllyHoldsAdmin:
	walk_slow_right
	walk_slow_right
	step_end

MossdeepCity_SpaceCenter_2F_Text_BlueIllHoldHim:
	.string "Good stuff, {PLAYER}.\p"
	.string "Between you and me, I was anxious for\n"
	.string "a moment there.$"
	.string "Go, Steven is just ahead.\n"
	.string "I'll hold this one here.$"

MossdeepCity_SpaceCenter_2F_Movement_AllyApproachPlayerPostAdmin:
	walk_slow_down
	walk_in_place_faster_left
	step_end

MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated:
	lock_facing_direction
	walk_slow_left
	unlock_facing_direction
	step_end

MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated:
	lock_facing_direction
	walk_slow_right
	unlock_facing_direction
	step_end

MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated:
	lock_facing_direction
	walk_fast_right
	walk_fast_right
	walk_fast_right
	unlock_facing_direction
	step_end

MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
	end

MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
	end

MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
	end

MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
	release
	end

@ Battle for the below 3 grunts is handled in MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
	end

MossdeepCity_SpaceCenter_2F_EventScript_Tabitha::
	msgbox MossdeepCity_SpaceCenter_2F_Text_TabithaPostBattle, MSGBOX_NPC
	end

MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
	end

MossdeepCity_SpaceCenter_2F_EventScript_Courtney::
	lock
	faceplayer
	msgbox MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_Matt::
	end

MossdeepCity_SpaceCenter_2F_EventScript_Shelly::
	end

MossdeepCity_SpaceCenter_2F_EventScript_Archie::
	end

MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
	lockall
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_Steven::
	lockall
	goto_if_set FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER, MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel, MSGBOX_DEFAULT
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano, MSGBOX_DEFAULT
	closemessage
	delay 30
	playse SE_NOT_EFFECTIVE
	switch VAR_FACING
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFight
	waitmovement 0
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth::
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
	waitmovement 0
	releaseall
	end

MossdeepCity_SpaceCenter_2F_Movement_StevenFight:
	lock_facing_direction
	walk_fast_up
	walk_fast_up
	unlock_facing_direction
	delay_16
	delay_16
	walk_slow_down
	walk_slow_down
	step_end

MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth:
	face_left
	lock_facing_direction
	walk_fast_right
	walk_fast_right
	unlock_facing_direction
	delay_16
	delay_16
	walk_slow_left
	walk_slow_left
	face_down
	step_end

MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle::
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	goto_if_ne VAR_RESULT, 0, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle
	special LoadPlayerParty
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt

MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle::
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, TRAINER_COURTNEY_MOSSDEEP, MossdeepCity_SpaceCenter_Text_CourtneyDefeat, PARTNER_BLUE_TWELVE
	switch VAR_RESULT
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieCourtney
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut

MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieCourtney::
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided, MSGBOX_DEFAULT
	closemessage
	delay 20
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_MAXIE, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_COURTNEY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 60
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_MAXIE, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_COURTNEY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 20
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp, MSGBOX_DEFAULT
	closemessage
	setvar VAR_MOSSDEEP_CITY_STATE, 3
	fadedefaultbgm
	fadescreen FADE_TO_BLACK
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 6
	setvar VAR_PARTNER_EMMIE_STATE, 57
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_TEAM_MAGMA
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	removeobject LOCALID_GRUNT6
	removeobject LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_TABITHA
	removeobject LOCALID_GRUNT5
	removeobject LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_COURTNEY
	removeobject LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_MAXIE
	setobjectxy LOCALID_SCIENTIST, 5, 6
	turnobject LOCALID_SCIENTIST, DIR_SOUTH
	setobjectxy LOCALID_GENTLEMAN, 11, 8
	turnobject LOCALID_GENTLEMAN, DIR_NORTH
	setobjectxy LOCALID_RICH_BOY, 6, 2
	turnobject LOCALID_RICH_BOY, DIR_NORTH
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer
	fadescreen FADE_FROM_BLACK
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	removeobject LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	setvar VAR_STEVENS_HOUSE_STATE, 1
	setvar VAR_LEVEL_CAP, 85
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
	removeobject LOCALID_SCIENTIST
	setobjectxyperm LOCALID_SCIENTIST, 5, 6
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
	addobject LOCALID_SCIENTIST
	fadescreen FADE_FROM_BLACK
#ifdef BUGFIX
	releaseall
#endif
	end

MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer::
	switch VAR_FACING
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth
	case DIR_WEST, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest
	return

MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth::
	turnobject LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN, DIR_NORTH
	return

MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest::
	turnobject LOCALID_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN, DIR_EAST
	return

MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
	lockall
	checkplayergender
	call_if_eq VAR_RESULT, MALE, MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
	call_if_eq VAR_RESULT, FEMALE, MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
	closemessage
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
	pokenavcall MatchCall_Text_MayRayquazaCall
	waitmessage
	return

MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
	pokenavcall MatchCall_Text_BrendanRayquazaCall
	waitmessage
	return

MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets:
	.string "MOSSDEEP has mainly sunny weather,\n"
	.string "and its winds are stable.\p"
	.string "It's an ideal location for launching\n"
	.string "rockets.$"

MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel:
	.string "Why would TEAM MAGMA want to steal\n"
	.string "our rocket fuel in the first place?$"

MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut:
	.string "If only I was a little younger, I would\n"
	.string "have liked being an astronaut…\p"
	.string "No… It's not too late!\n"
	.string "I can and will try!$"

MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis:
	.string "If TEAM MAGMA takes the rocket fuel,\n"
	.string "I won't be able to go to space!\p"
	.string "They can't be allowed to get away\n"
	.string "with such an outrage!$"

MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace:
	.string "I wish ordinary people could go into\n"
	.string "space one day…$"

MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace:
	.string "TEAM MAGMA…\n"
	.string "Do they want to go to space, too?$"

MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn:
	.string "Tabitha: Hehehe! I said I'd see\n"
	.string "you again soon.\p"
	.string "You're made of impressive stuff I'll\n"
	.string "give you that.\p"
	.string "This time we have you three to two.\n"
	.string "How confident are you feeling?\l"
	.string "You still want to take us on?$"

MossdeepCity_SpaceCenter_2F_Text_GoodAnswer:
	.string "Good answer!\n"
	.string "That's what a smart person'll do!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro:
	.string "A reckless go-getter, are you?\n"
	.string "Okay, we'll go first!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat:
	.string "I lost!\n"
	.string "But!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro:
	.string "You'll never defeat both of us!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat:
	.string "I lost, too!\n"
	.string "But!$"

MossdeepCity_SpaceCenter_2F_Text_TabithaIntro:
	.string "Tabitha: I bet you want to take a break.\n"
	.string "But I'm not about to let you do that!$"

MossdeepCity_SpaceCenter_2F_Text_TabithaDefeat:
	.string "We should've taken a break…\n"
	.string "That's what we should've done…$"

MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle:
	.string "Three of us here, and look at the sorry\n"
	.string "mess we got ourselves into.$"

MossdeepCity_SpaceCenter_2F_Text_TabithaPostBattle:
	.string "Awaaah! You're unstoppable!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle:
	.string "Are we being useful to our leader\n"
	.string "at all?$"

MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou:
	.string "Courtney: Hehehe! Long time no see!\p"
	.string "We come all the way here to get some\n"
	.string "fuel, and we're interfered with again!\p"
	.string "If you're going to mess with us too,\n"
	.string "we'll take care of you at the same time!$"

MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere:
	.string "Maxie: Clear out of the way!\n"
	.string "Don't you dare interfere!$"

MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel:
	.string "STEVEN: TEAM MAGMA…\p"
	.string "What's the point of stealing rocket\n"
	.string "fuel?$"

MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano:
	.string "Maxie: Fufufu… Since you're so\n"
	.string "curious, you deserve an explanation.\p"
	.string "We're going to jettison the entire\n"
	.string "load into MT. CHIMNEY!\p"
	.string "With GROUDON gone, we have no need\n"
	.string "for that slag heap of a mountain!\p"
	.string "So we'll use the fuel's power to make\n"
	.string "the volcano erupt!\p"
	.string "It will be savage!$"

MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle:
	.string "STEVEN: {PLAYER}{KUN}!\n"
	.string "You're going to help me?\p"
	.string "Let's go into battle together!\n"
	.string "Are you ready?$"

MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly:
	.string "STEVEN: Then, hurry!\n"
	.string "Get ready quickly!$"

MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand:
	.string "All I want…\n"
	.string "I just want to expand the land mass…$"

MossdeepCity_SpaceCenter_Text_CourtneyDefeat:
	.string "I'm with our leader…$"

MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided:
	.string "MAXIE: I succeeded in controling GROUDON\n"
	.string "after we had awoken it…\p"
	.string "Yes still you protest against Team\n"
	.string "Magma's vision…\p"
	.string "Is our goal to expand the land\n"
	.string "misguided?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "If…\n"
	.string "If we, Team Magma, are wrong…\l"
	.string "… … … … … …\p"
	.string "Then might Team Aqua's goal to expand\n"
	.string "the sea also be equally misguided?$"

MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp:
	.string "MAXIE: All right…\n"
	.string "We will give up on the fuel…\p"
	.string "There appear to be more important\n"
	.string "matters that I must examine…$"

MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome:
	.string "STEVEN: Whew, that was too tense.\n"
	.string "{PLAYER}{KUN}, thank you.\p"
	.string "I have something to give you as\n"
	.string "thanks for your support.\p"
	.string "Please come see me at home\n"
	.string "after this.\p"
	.string "Oh, yes, I don't live in RUSTBORO CITY.\n"
	.string "I live right here on this island.$"
