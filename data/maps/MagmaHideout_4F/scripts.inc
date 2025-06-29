.set LOCALID_GROUDON, 1
.set LOCALID_GRUNT11, 2
.set LOCALID_GRUNT12, 3
.set LOCALID_COURTNEY, 4
.set LOCALID_TABITHA, 5
.set LOCALID_MAXIE, 6
.set LOCALID_GROUDON_SLEEPING, 7
.set LOCALID_EMMIE, 9

MagmaHideout_4F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_4F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MagmaHideout_4F_OnFrame
	.byte 0

MagmaHideout_4F_OnFrame:
	map_script_2 VAR_PARTNER_EMMIE_STATE, 43, MagmaHideout_4F_EventScript_ProgressEmmieState
	.2byte 0

MagmaHideout_4F_EventScript_ProgressEmmieState::
	setvar VAR_PARTNER_EMMIE_STATE, 44
	return

MagmaHideout_4F_OnTransition:
	call_if_unset FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_EventScript_SetGroudonPosition
	end
	
MagmaHideout_4F_EventScript_SetGroudonPosition::
	setobjectxyperm LOCALID_GROUDON, 16, 19
	return

MagmaHideout_4F_Movement_GroudonApproach:
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	step_end

MagmaHideout_4F_Movement_GroudonExit:
	slide_up
	slide_up
	step_end

MagmaHideout_4F_Movement_MaxieLookAround:
	face_left
	delay_16
	face_right
	delay_16
	face_left
	delay_16
	face_right
	delay_16
	face_up
	delay_16
	delay_16
	step_end

MagmaHideout_4F_EventScript_Grunt11::
	faceplayer
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt11Grunt12::
lockall
setvar VAR_0x8008, LOCALID_GRUNT11
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MAGMA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox MagmaHideout_4F_Text_Grunt11Intro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_GRUNT12
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MAGMA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox MagmaHideout_4F_Text_Grunt12Intro, MSGBOX_AUTOCLOSE
goto MagmaHideout_4F_EventScript_Grunt11Grunt12_ChoosePartyForMultiBattle
releaseall
end

MagmaHideout_4F_EventScript_Grunt11Grunt12_ChoosePartyForMultiBattle::
special SavePlayerParty
fadescreen FADE_TO_BLACK
special ChooseHalfPartyForBattle
waitstate
goto_if_ne VAR_RESULT, 0, MagmaHideout_4F_EventScript_Grunt11Grunt12DoMultiBattle
goto MagmaHideout_4F_EventScript_Grunt11Grunt12_ChoosePartyForMultiBattle
closemessage
releaseall
end

MagmaHideout_4F_EventScript_Grunt11Grunt12DoMultiBattle::
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Defeat, PARTNER_SHELLY
special LoadPlayerParty
switch VAR_RESULT
case 1, MagmaHideout_4F_EventScript_Grunt11Grunt12Victory
fadescreen FADE_TO_BLACK
destroyfollowernpc
setvar VAR_PARTNER_EMMIE_STATE, 42
clearflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
createfollowernpc OBJ_EVENT_GFX_GREEN_NORMAL, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
special SetCB2WhiteOut
waitstate

MagmaHideout_4F_EventScript_Grunt11Grunt12Victory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
addvar VAR_MAGMAHIDEOUT_STATE, 1
end

MagmaHideout_4F_EventScript_Grunt12::
	faceplayer
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_Movement_PlayerKnockedBack:
	face_up
	lock_facing_direction
	walk_fast_down
	walk_fast_down
	unlock_facing_direction
	step_end

MagmaHideout_4F_Movement_TabithaKnockedBack:
	face_down
	lock_facing_direction
	walk_fast_up
	walk_fast_up
	unlock_facing_direction
	step_end

MagmaHideout_4F_Movement_CourtneyKnockedBack:
	face_left
	lock_facing_direction
	walk_fast_right
	unlock_facing_direction
	step_end

MagmaHideout_4F_Movement_CourtneyApproachShelly:
	walk_down
	jump_2_down
	walk_down
	walk_left
	walk_left
	step_end

MagmaHideout_4F_Movement_ShellyKnockedBack:
	delay_8
	lock_facing_direction
	walk_fast_left
	unlock_facing_direction
	step_end

MagmaHideout_4F_Movement_ShellyExit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

MagmaHideout_4F_Movement_CourtneyMoveForShelly:
	delay_16
	delay_16
	face_down
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

MagmaHideout_4F_Movement_EmmieEnters:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end

MagmaHideout_4F_Movement_PanToAction:
	walk_diag_southwest
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MagmaHideout_4F_Movement_PanFromAction:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_diag_northeast
	step_end

MagmaHideout_4F_Movement_ShellyApproachPlayer:
	walk_left
	walk_left
	face_down
	step_end

MagmaHideout_4F_Text_TabithaThinkIWouldntFindYou:
	.string "Tabitha: Did you think you I wouldn't\n"
	.string "find you?\p"
	.string "You two really need to work on your\n"
	.string "stealth!$"

MagmaHideout_4F_Text_ShellyThatWasLow:
	.string "Shelly: Tabitha! That was low, even\n"
	.string "by your standards.$"

MagmaHideout_4F_Text_ShellyAreYouOkay:
	.string "Shelly: Are you okay kid?\p"
	.string "Pull yourself together now. We're\n"
	.string "almost at the heart of the hideout.$"

MagmaHideout_4F_Text_ShellyTabithaMove:
	.string "Shelly: You know you can't take both\n"
	.string "of us alone.\l"
	.string "Do yourself a favour and move!$"

MagmaHideout_4F_Text_CourtneyNotAlone:
	.string "????: Oh, but he isn't alone!$"

MagmaHideout_4F_Text_ShellyCourtney:
	.string "Shelly: Courtney!$"

MagmaHideout_4F_Text_CourtneyJustInTime:
	.string "Courtney: You made it just in time to\n"
	.string "witness our vision come to pass.\p"
	.string "Look, over there!$"

MagmaHideout_4F_Text_TabithaYoureTooLate:
	.string "Tabitha: Hehe… You're too late. Maxie has\n"
	.string "awoken Groudon at long last!$"

MagmaHideout_4F_Text_ShellyNeedToTellArchie:
	.string "Shelly: I need to tell Archie what has\n"
	.string "happened here.$"

MagmaHideout_4F_Text_ShellyCourtneyMove:
	.string "Shelly: Courtney, move out of my way.$"

MagmaHideout_4F_Text_CourtneyYoureGoingNowhere:
	.string "Courtney: I don't think so. You're not\n"
	.string "going anywhere!$"

MagmaHideout_4F_Text_TabithaLooksLikeYoureCaught:
	.string "Tabitha: It looks like you're caught\n"
	.string "between a rock and a hot place!\p"
	.string "This time there's no way out.$"

MagmaHideout_4F_Text_CourtneyTabitha_NowhereToRun:
	.string "Tabitha: There's nowhere to run!$"

MagmaHideout_4F_Text_Maxie_NowhereToRun:
	.string "Maxie: You're not getting away this\n"
	.string "time!$"

MagmaHideout_4F_Text_ShellyMustLeave:
	.string "Shelly: Listen kid. With Groudon awake,\n"
	.string "disaster is about to strike.\p"
	.string "I'm grateful for your help, but there's\n"
	.string "nothing more we can do here.\p"
	.string "I need to tell Archie what has happened\n"
	.string "and I strongly suggest you leave too.\p"
	.string "You may have taken on Maxie before, but\n"
	.string "now he wields the power of Groudon,\l"
	.string "meaning he's unstoppable.\p"
	.string "Our interests aligned today, but you\n"
	.string "must understand that Team Aqua has no\l"
	.string "choice but to retaliate.\p"
	.string "I know you won't listen, you never\n"
	.string "do, but please stay out of our way…$"

MagmaHideout_4F_Text_EmmieLetsGo:
	.string "Emmie: {PLAYER}!\p"
	.string "I felt an earthquake and came here as\n"
	.string "quickly as I could.\p"
	.string "I just passed Shelly who explained that\n"
	.string "Maxie has awoken Groudon.\p"
	.string "She may have chosen to run, but I'm here\n"
	.string "and nobody has stopped us before.\p"
	.string "I know we can defeat Maxie if we work\n"
	.string "together just like we always do.\p"
	.string "Come on, let's go!$"

MagmaHideout_4F_EventScript_CourtneyTabitha::
	lockall
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	playse SE_NOT_EFFECTIVE
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_PlayerKnockedBack
	waitmovement 0
	msgbox MagmaHideout_4F_Text_TabithaThinkIWouldntFindYou, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_TABITHA, Common_Movement_WalkSlowDown
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MagmaHideout_4F_Text_ShellyThatWasLow, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MagmaHideout_4F_Text_ShellyAreYouOkay, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MagmaHideout_4F_Text_ShellyTabithaMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setobjectxyperm LOCALID_COURTNEY, 22, 2
	playse SE_PIN
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
	waitmovement 0
	msgbox MagmaHideout_4F_Text_CourtneyNotAlone, MSGBOX_DEFAULT
	closemessage
	addobject LOCALID_COURTNEY
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_CourtneyApproachShelly
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox MagmaHideout_4F_Text_ShellyCourtney, MSGBOX_DEFAULT
	closemessage
	msgbox MagmaHideout_4F_Text_CourtneyJustInTime, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_COURTNEY
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
	setobjectxyperm LOCALID_TABITHA, 17, 6
	setobjectxyperm LOCALID_COURTNEY, 20, 6
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, MagmaHideout_4F_Movement_PanToAction
	waitmovement 0
	special RemoveCameraObject
	delay 30
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
	closemessage
	delay 20
	setvar VAR_RESULT, 1
	playse SE_M_DETECT
	dofieldeffectsparkle 18, 42, 0
	waitfieldeffect FLDEFF_SPARKLE
	setvar VAR_RESULT, 3
	playfanfare MUS_AWAKEN_LEGEND
	playse SE_ORB
	special DoOrbEffect
	delay 150
	removeobject LOCALID_GROUDON_SLEEPING
	addobject LOCALID_GROUDON
	waitstate
	delay 60
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
	waitmovement 0
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
	setobjectxyperm LOCALID_GROUDON, 16, 19
	special FadeOutOrbEffect
	waitstate
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 30
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, MagmaHideout_4F_Movement_PanFromAction
	waitmovement 0
	special RemoveCameraObject
	delay 30
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox MagmaHideout_4F_Text_TabithaYoureTooLate, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MagmaHideout_4F_Text_ShellyNeedToTellArchie, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkRight
	waitmovement 0
	msgbox MagmaHideout_4F_Text_ShellyCourtneyMove, MSGBOX_DEFAULT
	closemessage
	playse SE_NOT_EFFECTIVE
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_4F_Movement_ShellyKnockedBack
	waitmovement 0
	applymovement LOCALID_TABITHA, Common_Movement_WalkSlowDown
	applymovement LOCALID_COURTNEY, Common_Movement_WalkSlowLeft
	waitmovement 0
	msgbox MagmaHideout_4F_Text_CourtneyYoureGoingNowhere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MagmaHideout_4F_Text_TabithaLooksLikeYoureCaught, MSGBOX_DEFAULT
	closemessage
	goto MagmaHideout_4F_EventScript_CourtneyTabitha_ChoosePartyForMultiBattle
	releaseall
	end

MagmaHideout_4F_EventScript_CourtneyTabitha_ChoosePartyForMultiBattle::
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_ne VAR_RESULT, 0, MagmaHideout_4F_EventScript_CourtneyTabithaDoMultiBattle
	goto MagmaHideout_4F_EventScript_CourtneyTabitha_NowhereToRun
	closemessage
	releaseall
	end

MagmaHideout_4F_EventScript_CourtneyTabitha_NowhereToRun::
	msgbox MagmaHideout_4F_Text_CourtneyTabitha_NowhereToRun, MSGBOX_DEFAULT
	closemessage
	goto MagmaHideout_4F_EventScript_CourtneyTabitha_ChoosePartyForMultiBattle
	releaseall
	end

MagmaHideout_4F_EventScript_CourtneyTabithaDoMultiBattle::
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	multi_2_vs_2 TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaDefeat, TRAINER_COURTNEY_MAGMA_HIDEOUT, MagmaHideout_4F_Text_CourtneyDefeat, PARTNER_SHELLY
	special LoadPlayerParty
	switch VAR_RESULT
	case 1, MagmaHideout_4F_EventScript_CourtneyTabithaVictory
	fadescreen FADE_TO_BLACK
	destroyfollowernpc
	setvar VAR_PARTNER_EMMIE_STATE, 42
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
	setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
	createfollowernpc OBJ_EVENT_GFX_GREEN_NORMAL, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
	special SetCB2WhiteOut
	waitstate

MagmaHideout_4F_EventScript_CourtneyTabithaVictory::
	lockall
	delay 16
	playse SE_NOT_EFFECTIVE
	applymovement LOCALID_TABITHA, MagmaHideout_4F_Movement_TabithaKnockedBack
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_CourtneyKnockedBack
	waitmovement 0
	delay 8
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowUp
	waitmovement 0
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MagmaHideout_4F_Text_CourtneyPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_4F_Movement_ShellyApproachPlayer
	waitmovement 0
	msgbox MagmaHideout_4F_Text_ShellyMustLeave, MSGBOX_AUTOCLOSE
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_4F_Movement_ShellyExit
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_CourtneyMoveForShelly
	waitmovement 0
	delay 100
	fadescreen FADE_TO_BLACK
	setobjectxyperm LOCALID_TABITHA, 17, 5
	setobjectxyperm LOCALID_COURTNEY, 20, 5
	destroyfollowernpc
	setvar VAR_FOLLOWER_MAGMA_HIDEOUT_SHELLY, 2
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_COURTNEY
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_EMMIE
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
	setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
	addobject LOCALID_EMMIE
	fadescreen FADE_FROM_BLACK
	applymovement LOCALID_EMMIE, MagmaHideout_4F_Movement_EmmieEnters
	waitmovement 0
	msgbox MagmaHideout_4F_Text_EmmieLetsGo, MSGBOX_DEFAULT
	closemessage
	setfollowernpc 9, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
	addvar VAR_MAGMAHIDEOUT_STATE, 1
	setvar VAR_PARTNER_EMMIE_STATE, 45
	releaseall
	end

MagmaHideout_4F_EventScript_MaxiePyreMaxieDefeated::
	msgbox MagmaHideout_4F_Text_MaxieMomentsAway1, MSGBOX_DEFAULT
	closemessage
	return

MagmaHideout_4F_EventScript_MaxiePyreArchieDefeated::
	msgbox MagmaHideout_4F_Text_MaxieMomentsAway2, MSGBOX_DEFAULT
	closemessage
	return

MagmaHideout_4F_EventScript_Maxie::
	lockall
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
	waitmovement 0
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, MagmaHideout_4F_EventScript_MaxiePyreMaxieDefeated
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, MagmaHideout_4F_EventScript_MaxiePyreArchieDefeated
	goto MagmaHideout_4F_EventScript_MaxieDoMultiBattle
	releaseall
	end

MagmaHideout_4F_EventScript_MaxieDoMultiBattle::
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	multi_2p_vs_1 TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, MagmaHideout_4F_EventScript_MaxieVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

MagmaHideout_4F_EventScript_MaxieVictory::
	msgbox MagmaHideout_4F_Text_MaxiePostBattle, MSGBOX_DEFAULT
	closemessage
	removeobject LOCALID_COURTNEY
	removeobject LOCALID_TABITHA
	delay 16
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox MagmaHideout_4F_Text_MaxieGroudonLeave, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 30
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 30
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
	waitmovement 0
	removeobject LOCALID_GROUDON
	setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
	delay 4
	setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 30
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
	closemessage
	setobjectxyperm LOCALID_COURTNEY, 7, 20
	setobjectxyperm LOCALID_TABITHA, 7, 21
	addobject LOCALID_COURTNEY
	addobject LOCALID_TABITHA
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_AdminApproachMaxie
	applymovement LOCALID_TABITHA, MagmaHideout_4F_Movement_AdminApproachMaxie
	waitmovement 0
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
	msgbox MagmaHideout_4F_Text_MaxieLetsGo, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
	setflag FLAG_ABNORMAL_WEATHER_SUN
	fadescreen FADE_TO_BLACK
	delay 16
	removeobject LOCALID_MAXIE
	removeobject LOCALID_GRUNT11
	removeobject LOCALID_GRUNT12
	removeobject LOCALID_COURTNEY
	removeobject LOCALID_TABITHA
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
	setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
	setflag FLAG_HIDE_MAGMA_HIDEOUT_COURTNEY
	setflag FLAG_HIDE_JAGGED_PASS_SHELLY
	setflag FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
	setflag FLAG_HIDE_AQUA_HIDEOUT_SHELLY
	clearflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
	clearflag FLAG_HIDE_JAGGED_PASS_MAXIE
	addvar VAR_MAGMAHIDEOUT_STATE, 1
	addvar VAR_JAGGED_PASS_STATE, 1
	setvar VAR_LEVEL_CAP, 75
	setvar VAR_PARTNER_EMMIE_STATE, 46
	warp MAP_JAGGED_PASS, 16, 19
	waitstate
	releaseall
	end

MagmaHideout_4F_Text_MaxieLetsGo:
	.string "Maxie: Tabitha… Courtney… Let us step\n"
	.string "outside and see our dream in reality.$"

MagmaHideout_4F_Movement_AdminApproachMaxie:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end


MagmaHideout_4F_EventScript_Courtney::
	faceplayer
	msgbox MagmaHideout_4F_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Tabitha::
	faceplayer
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_Text_MaxiePostBattle:
	.string "Maxie: How can this be?!\p"
	.string "Even with the power of Groudon by my\n"
	.string "side, you remain defiant.$"

MagmaHideout_4F_Text_MaxieGroudonLeave:
	.string "Maxie: This matters not.\p"
	.string "Groudon, I release you!\n"
	.string "Bask the world in the light of the sun!$"

MagmaHideout_4F_Text_Grunt11Intro:
	.string "I want to see GROUDON, too, but they\n"
	.string "won't let me see even its tail…\p"
	.string "It's got me feeling really frustrated.\p"
	.string "Oh, no!\n"
	.string "I blabbed about GROUDON!$"

MagmaHideout_4F_Text_Grunt11Defeat:
	.string "I guess it's impossible to win if one\n"
	.string "doesn't have a calm mind…$"

MagmaHideout_4F_Text_Grunt11PostBattle:
	.string "I wonder if GROUDON even has a tail?$"

MagmaHideout_4F_Text_Grunt12Intro:
	.string "Fuhahaha!\n"
	.string "Soon! Very soon!\l"
	.string "Our grand objective will be achieved!$"

MagmaHideout_4F_Text_Grunt12Defeat:
	.string "Grrr…\n"
	.string "I've come so far, but now this?$"

MagmaHideout_4F_Text_Grunt12PostBattle:
	.string "MAXIE, sir!\n"
	.string "An intruder is headed your way!$"

MagmaHideout_4F_Text_CourtneyIntro:
	.string "You're not finished yet!\n"
	.string "You're not getting by me easily!$"

MagmaHideout_4F_Text_CourtneyDefeat:
	.string "Was I that easy to knock down?$"

MagmaHideout_4F_Text_CourtneyPostBattle:
	.string "Courtney: You really are a force to be \n"
	.string "reckoned with, aren't you…\p"
	.string "No matter. You cannot stop what is\n"
	.string "about to happen.$"

MagmaHideout_4F_Text_TabithaIntro:
	.string "Hehehe!\n"
	.string "You made it this far, so I'll tell you!\p"
	.string "That's right!\n"
	.string "Up ahead, GROUDON is sleeping!\p"
	.string "MAXIE went to GROUDON just seconds\n"
	.string "ago!\p"
	.string "It's going to awaken real soon!\n"
	.string "Hehe! Hehehe!$"

MagmaHideout_4F_Text_TabithaDefeat:
	.string "Taken down again…\n"
	.string "Hehe…$"

MagmaHideout_4F_Text_TabithaPostBattle:
	.string "Tabitha: Heh… Groudon has awakened…\p"
	.string "This means everything is about to\n"
	.string "change forever…$"

MagmaHideout_4F_Text_MaxieAwakenGroudon:
	.string "Maxie: Groudon…\p"
	.string "Nothing could awaken you from your\n"
	.string "sleep bathed in magma…\p"
	.string "This Blue Orb is what you sought.\n"
	.string "Wasn't it?\p"
	.string "I have brought you the Blue Orb.\n"
	.string "Let its shine awaken you!\p"
	.string "And show me…\n"
	.string "Show me the full extent of your power!$"

MagmaHideout_4F_Text_MaxieMomentsAway1:
	.string "Maxie: {PLAYER}, Emmie… It appears on this\n"
	.string "occasion your timing is off.\p"
	.string "You bear witness to the rebirth of the\n"
	.string "legendary Pokémon Groudon.\p"
	.string "With its power on our side, Team Magma's\n"
	.string "vision of expanding the land is mere\l"
	.string "moments away.\p"
	.string "I told you atop Mt. Pyre that we were\n"
	.string "not the villains.\p"
	.string "I stand by my words, but sometimes even\n"
	.string "good people must make tough decisions.\p"
	.string "I regret to inform you that our hideout\n"
	.string "is the end of the line for you.$"

MagmaHideout_4F_Text_MaxieMomentsAway2:
	.string "Maxie: {PLAYER}, Emmie… It appears on\n"
	.string "this occasion your timing is off.\p"
	.string "You bear witness to the rebirth of the\n"
	.string "legendary Pokémon Groudon.\p"
	.string "With its power on our side, Team Magma's\n"
	.string "vision of expanding the land is mere\l"
	.string "moments away.\p"
	.string "On Mt. Pyre I warned you to not involve\n"
	.string "yourselves in ours affairs again.\p"
	.string "Here you stand before me, at the very\n"
	.string "moment that everything I've worked to\l"
	.string "achieve is finally within my grasp.\p"
	.string "I regret to inform you that our hideout\n"
	.string "is the end of the line for you.$"

MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
	.string "Maxie: Groudon!\n"
	.string "What's wrong?\p"
	.string "Wasn't the Blue Orb the key?\p"
	.string "GROUDON!\n"
	.string "Where have you gone…$"

MagmaHideout_4F_Text_MaxieOhItWasYou:
	.string "Maxie: It is done.\p"
	.string "Groudon will soak Hoenn it the sun\n"
	.string "creating more land mass for all!$"

MagmaHideout_4F_Text_MaxieDefeat:
	.string "What makes you so adept at handling\n"
	.string "POKéMON?$"

MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
	.string "MAXIE: There has to be some reason\n"
	.string "why GROUDON fled…\p"
	.string "That's what you're trying to say,\n"
	.string "aren't you?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Humph…\n"
	.string "You think I didn't know that?\p"
	.string "With GROUDON gone, there is no longer\n"
	.string "any need for this blasted volcano.\p"
	.string "I am going after GROUDON, so this\n"
	.string "is where we part!$"
