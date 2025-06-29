.set LOCALID_MATT, 1
.set LOCALID_SUBMARINE, 4
.set LOCALID_GRUNT1, 7
.set LOCALID_GRUNT4, 2
.set LOCALID_GRUNT8, 6
.set LOCALID_GRUNT6, 5
.set LOCALID_SHELLY, 8
.set LOCALID_EMMIE, 9

AquaHideout_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
	.byte 0

AquaHideout_B2F_OnTransition:
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
	end

AquaHideout_B2F_EventScript_PreventMattNoticing::
	setvar VAR_TEMP_1, 1
	return

AquaHideout_B2F_EventScript_MattNoticePlayer::
	lockall
	setvar VAR_0x8008, LOCALID_MATT
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8008, Common_Movement_FacePlayer
	waitmovement 0
	setvar VAR_TEMP_1, 1
	releaseall
	end

AquaHideout_B2F_EventScript_Matt::
	lockall
	goto_if_eq VAR_AQUAHIDEOUT_STATE, 5, AquaHideout_B2F_EventScript_MattPostBattle
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
	call_if_eq VAR_TEMP_3, 25, AquaHideout_B2F_EventScript_TabithaApproachMatt
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox AquaHideout_B2F_Text_MattIntro, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
	playse SE_PIN
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
	waitmovement 0
	playse SE_WARP_OUT
	delay 20
	addobject LOCALID_SHELLY
	msgbox AquaHideout_B2F_Text_ShellyBlowsInTheWind, MSGBOX_DEFAULT
	closemessage
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
	call_if_eq VAR_TEMP_4, 18, AquaHideout_B2F_EventScript_TabithaApproachShelly1
	call_if_eq VAR_TEMP_4, 20, AquaHideout_B2F_EventScript_TabithaApproachShelly2
	applymovement LOCALID_SHELLY, AquaHideout_4F_Movement_ShellyApproachTabitha
	waitmovement 0
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox AquaHideout_B2F_Text_TabithaWellWellWell, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox AquaHideout_B2F_Text_MattNotStalling, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox AquaHideout_B2F_Text_ShellyWarnedYou, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox AquaHideout_B2F_Text_TabithaWhatYoureMadeOf, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
	waitmovement 0
	goto AquaHideout_B2F_EventScript_MattShelly_ChoosePartyForMultiBattle
	releaseall
	end

AquaHideout_B2F_EventScript_MattShelly_ChoosePartyForMultiBattle::
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_ne VAR_RESULT, 0, AquaHideout_B2F_EventScript_MattShellyDoMultiBattle
	goto AquaHideout_B2F_EventScript_MattShelly_ChoosePartyForMultiBattle
	closemessage

AquaHideout_B2F_EventScript_MattShellyDoMultiBattle::
	multi_2_vs_2 TRAINER_SHELLY_WEATHER_INSTITUTE, AquaHideout_B2F_Text_ShellyDefeat, TRAINER_MATT, AquaHideout_B2F_Text_MattDefeat, PARTNER_TABITHA
	special LoadPlayerParty
	switch VAR_RESULT
	case 1, AquaHideout_B2F_EventScript_MattShellyVictory
	fadescreen FADE_TO_BLACK
	destroyfollowernpc
	clearflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
	setvar VAR_PARTNER_EMMIE_STATE, 48
	setflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
	createfollowernpc OBJ_EVENT_GFX_GREEN_NORMAL, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
	special SetCB2WhiteOut
	waitstate

AquaHideout_B2F_EventScript_MattShellyVictory::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
	waitmovement 0
	setvar VAR_LEVEL_CAP, 81
	addvar VAR_AQUAHIDEOUT_STATE, 1
	setvar VAR_PARTNER_EMMIE_STATE, 50
	goto AquaHideout_B2F_EventScript_SubmarineEscape
	end

AquaHideout_B2F_EventScript_MattPostBattle::
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B2F_Text_TabithaWhatYoureMadeOf:
	.string "Tabitha: Heh… looks like we're doing\n"
	.string "this.\p"
	.string "Don't let me down kid. Let's see what\n"
	.string "you're really made of!$"

AquaHideout_B2F_Text_ShellyWarnedYou:
	.string "Shelly: I warned that you Team Aqua\n"
	.string "has no choice but to retaliate.\p"
	.string "I also warned you to not follow us here.$"

AquaHideout_B2F_Text_MattNotStalling:
	.string "Matt: You've stuck your noses in for\n"
	.string "the last time.\p"
	.string "We're going to give you a beating you\n"
	.string "will never forget!$"

AquaHideout_B2F_Text_TabithaWellWellWell:
	.string "Tabitha: Well, well, well. Looks\n"
	.string "like the whole gang is here.$"

AquaHideout_B2F_EventScript_TabithaApproachShelly1:
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_B2F_Movement_TabithaApproachShelly1
	return

AquaHideout_B2F_EventScript_TabithaApproachShelly2:
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_B2F_Movement_TabithaApproachShelly2
	return

AquaHideout_4F_Movement_ShellyApproachTabitha:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	step_end

AquaHideout_B2F_Movement_TabithaApproachShelly1:
	delay_16
	walk_slow_right
	walk_slow_down
	face_right
	step_end

AquaHideout_B2F_Movement_TabithaApproachShelly2:
	delay_16
	walk_slow_right
	walk_slow_up
	face_right
	step_end

AquaHideout_B2F_Text_ShellyBlowsInTheWind:
	.string "Shelly: He's right. Your loyalty really\n"
	.string "does blow in the wind doesn't it?$"

AquaHideout_B2F_EventScript_TabithaApproachMatt::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_B2F_Movement_TabithaApproachMatt
	return

AquaHideout_B2F_Movement_TabithaApproachMatt:
	walk_up
	walk_left
	step_end

AquaHideout_B2F_EventScript_SubmarineEscape::
	setvar VAR_0x8008, LOCALID_MATT
	setvar VAR_0x8009, LOCALID_SUBMARINE
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 20
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
	waitmovement 0
	removeobject VAR_0x8009
	delay 20
	applymovement VAR_0x8008, Common_Movement_FacePlayer
	waitmovement 0
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox AquaHideout_B2F_Text_TabithaTimeForMeToLeave, MSGBOX_DEFAULT
	closemessage
	playse SE_NOT_EFFECTIVE
	applymovement LOCALID_SHELLY, AquaHideout_B2F_Movement_ShellyKnockedBack
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_B2F_Movement_TabithaLeave
	waitmovement 0
	playse SE_WARP_OUT
	delay 16
	destroyfollowernpc
	fadescreen FADE_TO_BLACK
	setobjectxyperm LOCALID_SHELLY, 26, 17
	setvar VAR_FOLLOWER_AQUA_HIDEOUT_TABITHA, 2
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B2F_EMMIE
	clearflag FLAG_HIDE_AQUA_HIDEOUT_SHELLY
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
	fadescreen FADE_FROM_BLACK
	delay 40
	playse SE_WARP_OUT
	delay 20
	addobject LOCALID_EMMIE
	applymovement LOCALID_EMMIE, AquaHideout_B2F_Movement_EmmieEnters
	waitmovement 0
	msgbox AquaHideout_B2F_Text_EmmieHeardFromTabitha, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_EMMIE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox AquaHideout_B2F_Text_EmmieSeenBetterDays, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_EMMIE, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox AquaHideout_B2F_Text_EmmieLetsGo, MSGBOX_DEFAULT
	closemessage
	setfollowernpc 9, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
	setobjectmovementtype LOCALID_SHELLY, MOVEMENT_TYPE_FACE_DOWN
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
	setflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
	setflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
	releaseall
	end

AquaHideout_B2F_EventScript_Shelly::
	lockall
	faceplayer
	msgbox AquaHideout_B2F_Text_ShellyCantDoNothing, MSGBOX_DEFAULT
	closemessage 
	releaseall
	end

AquaHideout_B2F_Text_ShellyCantDoNothing:
	.string "Shelly: Sorry kid. Team Aqua can't stand\n"
	.string "by and do nothing.$"

AquaHideout_B2F_Text_EmmieLetsGo:
	.string "Emmie: Anyway, let's get out of here.$"

AquaHideout_B2F_Text_EmmieSeenBetterDays:
	.string "Emmie: She certainly looks like she's\n"
	.string "seen better days.$"

AquaHideout_B2F_Text_EmmieHeardFromTabitha:
	.string "Emmie: Hey {PLAYER}, Tabitha explained\n"
	.string "what's happened on his way out.\p"
	.string "Seems as if Team Aqua are on their way\n"
	.string "to the ocean floor then…\p"
	.string "Tabitha said you held your own well\n"
	.string "enough, not that I should be surprised\l"
	.string "at this point!$"

AquaHideout_B2F_Movement_EmmieEnters:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	step_end

AquaHideout_B2F_Movement_TabithaLeave:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

AquaHideout_B2F_Movement_ShellyKnockedBack:
	face_down
	lock_facing_direction
	walk_fast_up
	walk_fast_up
	unlock_facing_direction
	step_end

AquaHideout_B2F_Text_TabithaTimeForMeToLeave:
	.string "Tabitha: Well that's confirmed what\n"
	.string "we feared.\p"
	.string "Thanks for the assist kid, but it's\n"
	.string "time for me to leave for Mossdeep.\p"
	.string "See you again no doubt. Hehe…$"

AquaHideout_B2F_Movement_SumbarineDepartLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

@ Unused
AquaHideout_B2F_Movement_SumbarineDepartRight:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

AquaHideout_B2F_EventScript_Grunt4Grunt1::
lockall
setvar VAR_0x8008, LOCALID_GRUNT4
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_AQUA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox AquaHideout_B2F_Text_Grunt4Intro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_GRUNT1
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_AQUA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox AquaHideout_1F_Text_Grunt1Intro MSGBOX_AUTOCLOSE
goto AquaHideout_B2F_EventScript_Grunt4Grunt1_ChoosePartyForMultiBattle
releaseall
end

AquaHideout_B2F_EventScript_Grunt4Grunt1_ChoosePartyForMultiBattle::
special SavePlayerParty
fadescreen FADE_TO_BLACK
special ChooseHalfPartyForBattle
waitstate
goto_if_ne VAR_RESULT, 0, AquaHideout_B2F_EventScript_Grunt4Grunt1DoMultiBattle
goto AquaHideout_B2F_EventScript_Grunt4Grunt1_ChoosePartyForMultiBattle
closemessage
releaseall
end

AquaHideout_B2F_EventScript_Grunt4Grunt1DoMultiBattle::
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Defeat, TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Defeat, PARTNER_TABITHA
special LoadPlayerParty
switch VAR_RESULT
case 1, AquaHideout_B2F_EventScript_Grunt4Grunt1Victory
fadescreen FADE_TO_BLACK
destroyfollowernpc
clearflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
setvar VAR_PARTNER_EMMIE_STATE, 48
setflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
createfollowernpc OBJ_EVENT_GFX_GREEN_NORMAL, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
special SetCB2WhiteOut
waitstate

AquaHideout_B2F_EventScript_Grunt4Grunt1Victory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
addvar VAR_AQUAHIDEOUT_STATE, 1
end

AquaHideout_B2F_EventScript_Grunt4::
	faceplayer
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_EventScript_Grunt4Defeated::
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B2F_EventScript_Grunt6Grunt8::
lockall
setvar VAR_0x8008, LOCALID_GRUNT6
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_AQUA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox AquaHideout_B2F_Text_Grunt6Intro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_GRUNT8
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_AQUA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox AquaHideout_B2F_Text_Grunt8Intro MSGBOX_AUTOCLOSE
goto AquaHideout_B2F_EventScript_Grunt6Grunt8_ChoosePartyForMultiBattle
releaseall
end

AquaHideout_B2F_EventScript_Grunt6Grunt8_ChoosePartyForMultiBattle::
special SavePlayerParty
fadescreen FADE_TO_BLACK
special ChooseHalfPartyForBattle
waitstate
goto_if_ne VAR_RESULT, 0, AquaHideout_B2F_EventScript_Grunt6Grunt8DoMultiBattle
goto AquaHideout_B2F_EventScript_Grunt6Grunt8_ChoosePartyForMultiBattle
closemessage
releaseall
end

AquaHideout_B2F_EventScript_Grunt6Grunt8DoMultiBattle::
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Defeat, TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Defeat, PARTNER_TABITHA
special LoadPlayerParty
switch VAR_RESULT
case 1, AquaHideout_B2F_EventScript_Grunt6Grunt8Victory
fadescreen FADE_TO_BLACK
destroyfollowernpc
clearflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
setvar VAR_PARTNER_EMMIE_STATE, 48
setflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
createfollowernpc OBJ_EVENT_GFX_GREEN_NORMAL, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
special SetCB2WhiteOut
waitstate

AquaHideout_B2F_EventScript_Grunt6Grunt8Victory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
addvar VAR_AQUAHIDEOUT_STATE, 1
end

AquaHideout_B2F_EventScript_Grunt6::
	faceplayer
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_EventScript_Grunt8::
	faceplayer
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_Text_MattIntro:
	.string "Matt: What a surprise this isn't.\p"
	.string "You got here pretty quickly.\n"
	.string "We underestimated you!\p"
	.string "What I am surprised by is the company\n"
	.string "you're keeping…$"

AquaHideout_B2F_Text_MattDefeat:
	.string "Hehehe…\n"
	.string "So, I lost, too…$"

AquaHideout_B2F_Text_ShellyDefeat:
	.string "We still bought Archie\n"
	.string "enough time…$"

AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
	.string "Hehehe!\p"
	.string "While I was toying with you, our BOSS\n"
	.string "got through his preparations!$"

AquaHideout_B2F_Text_MattPostBattle:
	.string "Hehehe!\p"
	.string "Our BOSS has already gone on his way to\n"
	.string "some cave under the sea!\p"
	.string "If you're going to give chase, you'd\n"
	.string "better search the big, wide sea beyond\l"
	.string "LILYCOVE.\p"
	.string "But will you find it then?\n"
	.string "Hehehe!$"

AquaHideout_B2F_Text_Grunt4Intro:
	.string "Wahahah, I grew weary of waiting!\n"
	.string "You owe me a battle, too!$"

AquaHideout_B2F_Text_Grunt4Defeat:
	.string "Tired of waiting…\n"
	.string "Lost and dazed…$"

AquaHideout_B2F_Text_Grunt4PostBattle:
	.string "BOSS…\n"
	.string "Is this good enough?$"

AquaHideout_B2F_Text_Grunt6Intro:
	.string "Warp panels, the HIDEOUT's pride\n"
	.string "and joy!\p"
	.string "You're clueless about where you are,\n"
	.string "aren't you?\p"
	.string "Fluster and tire out the enemy, then\n"
	.string "lower the boom! That's our plan!$"

AquaHideout_B2F_Text_Grunt6Defeat:
	.string "What's wrong with you?\n"
	.string "You're not tired at all!$"

AquaHideout_B2F_Text_Grunt6PostBattle:
	.string "That reminds me… I can't remember\n"
	.string "where I put the MASTER BALL.\p"
	.string "If I fail to guard it, our BOSS will\n"
	.string "chew me out…$"

AquaHideout_B2F_Text_Grunt8Intro:
	.string "When I joined TEAM AQUA, the first\n"
	.string "thing I had to learn was how these\l"
	.string "warp panels connected.$"

AquaHideout_B2F_Text_Grunt8Defeat:
	.string "I was too occupied thinking about\n"
	.string "the warp panels…$"

AquaHideout_B2F_Text_Grunt8PostBattle:
	.string "I'll have to learn about how I can\n"
	.string "battle more effectively…$"
