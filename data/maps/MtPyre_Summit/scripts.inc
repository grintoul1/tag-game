.set LOCALID_ARCHIE, 2
.set LOCALID_OLD_LADY, 3
.set LOCALID_GRUNT_1, 4
.set LOCALID_GRUNT_2, 6
.set LOCALID_GRUNT_3, 5
.set LOCALID_GRUNT_4, 7
.set LOCALID_MAXIE, 8
.set LOCALID_MATT, 9
.set LOCALID_TABITHA, 10

MtPyre_Summit_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
	.byte 0

MtPyre_Summit_OnTransition:
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
	call_if_eq VAR_MT_PYRE_STATE, 10, MtPyre_Summit_EventScript_SetArchieMaxiePositions
	call_if_lt VAR_MT_PYRE_STATE, 9, MtPyre_Summit_EventScript_SetArchieMaxieFightingPositions
	end

MtPyre_Summit_EventScript_SetArchieMaxiePositions::
	setobjectxyperm LOCALID_MAXIE, 23, 6
	setobjectxyperm LOCALID_ARCHIE, 22, 6
	setobjectmovementtype LOCALID_MAXIE, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_UP
	end

MtPyre_Summit_EventScript_SetArchieMaxieFightingPositions::
	setobjectmovementtype LOCALID_MAXIE, MOVEMENT_TYPE_FACE_RIGHT
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm LOCALID_MAXIE, 22, 6
	setobjectxyperm LOCALID_ARCHIE, 24, 6
	end

MtPyre_Summit_EventScript_TeamAquaTrigger0::
	lockall
	setvar VAR_0x8008, 0
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end

MtPyre_Summit_EventScript_TeamAquaTrigger1::
	lockall
	setvar VAR_0x8008, 1
	goto MtPyre_Summit_EventScript_ArchieAndMaxie
	end

MtPyre_Summit_EventScript_TeamAquaTrigger2::
	lockall
	setvar VAR_0x8008, 2
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end

MtPyre_Summit_EventScript_ArchieAndMaxie::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachLeaders
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtPyre_Summit_Movement_PlayerApproachLeaders
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_MAXIE, MOVEMENT_TYPE_FACE_UP
	playse SE_PIN
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_MaxieIRememberYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_ArchieIToldYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_MaxieDontBeFooled, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_ArchieChooseASide, MSGBOX_DEFAULT
	closemessage
	goto MtPyre_Summit_EventScript_ChooseLeaderFight
	waitstate
	releaseall
	end


MtPyre_Summit_EventScript_ChooseLeaderFight::
	message MtPyre_Summit_EventScript_ChooseLeaderFight_Text_0
	multichoice 25, 5, MULTI_PYRE_FIGHT, 1
	closemessage
	compare VAR_RESULT, 0
	goto_if_eq MtPyre_Summit_EventScript_ChooseLeaderFight_2
	compare VAR_RESULT, 1
	goto_if_eq MtPyre_Summit_EventScript_ChooseLeaderFight_3

MtPyre_Summit_EventScript_ChooseLeaderFight_1:
	multichoice 25, 5, MULTI_PYRE_FIGHT, 0
	closemessage
	end

MtPyre_Summit_EventScript_ChooseLeaderFight_2:
	call MtPyre_Summit_EventScript_ArchieFight
	goto MtPyre_Summit_EventScript_ChooseLeaderFight_1

MtPyre_Summit_EventScript_ChooseLeaderFight_3:
	call MtPyre_Summit_EventScript_MaxieFight
	goto MtPyre_Summit_EventScript_ChooseLeaderFight_1


MtPyre_Summit_EventScript_ArchieFight::
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFight_ArchiePushMaxie
	waitmovement 0
	playse SE_NOT_EFFECTIVE
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_ArchieFight_MaxieKnockedBack
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_ArchieFight_HaveYouLearnedNothing, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_ArchieFight_MaxieApproachArchie
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFight_ArchieApproachPlayer
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_ArchieFight_MattApproachPlayer
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtPyre_Summit_Movement_ArchieFight_EmmiePosition
	waitmovement 0
	msgbox MtPyre_Summit_Text_ArchieFight_ErrorOfYourWays, MSGBOX_DEFAULT
	goto MtPyre_Summit_EventScript_ArchieFightBattle
	end

MtPyre_Summit_EventScript_ArchieFightBattle::
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_ne VAR_RESULT, 0, MtPyre_Summit_EventScript_ArchieFightDoMultiBattle
	special LoadPlayerParty
	goto MtPyre_Summit_EventScript_ArchieFight_NoRunningNow
	releaseall
	end

MtPyre_Summit_EventScript_ArchieFight_NoRunningNow::
	msgbox MtPyre_Summit_Text_ArchieFight_NoRunningNow, MSGBOX_DEFAULT
	waitmessage
	goto MtPyre_Summit_EventScript_ArchieFightBattle

MtPyre_Summit_EventScript_ArchieFightDoMultiBattle::
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
	multi_2_vs_1 TRAINER_ARCHIE_MT_PYRE, MtPyre_Summit_Text_ArchieDefeat, PARTNER_MAXIE
	switch VAR_RESULT
	case 1, MtPyre_Summit_EventScript_ArchieDefeated
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

MtPyre_Summit_EventScript_ArchieDefeated::
	playse SE_NOT_EFFECTIVE
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFight_ArchieDefeated
	waitmovement 0
	msgbox MtPyre_Summit_Text_ArchieFight_ArchiePostBattle, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_MATT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_ArchieFight_MattPushPlayer
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_ArchieFight_PlayerPushedLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
	waitmovement 0
	msgbox MtPyre_Summit_Text_ArchieFight_MattWeHaveWhatWeCameFor, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFight_ArchieApproachPlayer
	waitmovement 0
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_MATT
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_GRUNT_4
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
	setvar VAR_LEVEL_CAP, 70
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	delay 20
	applymovement LOCALID_TABITHA, MtPyre_Summit_Movement_ArchieFight_TabithaApproachMaxie
	waitmovement 0
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
	msgbox MtPyre_Summit_Text_ArchieFight_MaxieReturnToBase, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAXIE, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
	waitmovement 0
	msgbox MtPyre_Summit_Text_ArchieFight_MaxieDontFollowUs, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_MAXIE
	removeobject LOCALID_TABITHA
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_MAGMA
	clearflag FLAG_HIDE_ROUTE_111_TEAM_MAGMA
	setflag FLAG_HIDE_ROUTE_121_TEAM_MAGMA_GRUNTS
	setflag FLAG_MT_PYRE_ARCHIE_DEFEATED
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	setvar VAR_MT_PYRE_STATE, 9
	setrespawn HEAL_LOCATION_MAUVILLE_CITY @Prevents skipping Winona split by wiping to Lavaridge Town
	call MtPyre_Summit_EventScript_OldLadyApproachPlayer1
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
	giveitem ITEM_MAGMA_EMBLEM
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
	releaseall
	end

MtPyre_Summit_Movement_ArchieFight_EmmiePosition:
	walk_slow_left
	face_up
	step_end

MtPyre_Summit_Movement_ArchieFight_ArchiePushMaxie:
	walk_fast_left
	step_end

MtPyre_Summit_Movement_ArchieFight_MaxieKnockedBack:
	face_right
	lock_facing_direction
	walk_fast_left
	walk_fast_left
	unlock_facing_direction
	step_end

MtPyre_Summit_Movement_ArchieFight_MaxieApproachArchie:
	walk_right
	walk_right
	walk_down
	face_right
	step_end

MtPyre_Summit_Movement_ArchieFight_ArchieApproachPlayer:
	walk_slow_down
	step_end

MtPyre_Summit_Movement_ArchieFight_MattApproachPlayer:
	walk_slow_right
	face_up 
	step_end 

MtPyre_Summit_Movement_ArchieFight_ArchieDefeated:
	lock_facing_direction
	walk_fast_up
	unlock_facing_direction
	step_end

MtPyre_Summit_Movement_ArchieFight_MattPushPlayer:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

MtPyre_Summit_Movement_ArchieFight_PlayerPushedLeft:
	delay_16
	face_right
	lock_facing_direction
	walk_fast_left
	unlock_facing_direction
	step_end

MtPyre_Summit_Movement_ArchieFight_TabithaApproachMaxie:
	walk_left
	walk_up
	walk_up
	walk_up
	step_end


MtPyre_Summit_Text_ArchieFight_HaveYouLearnedNothing:
	.string "Archie: You fool, have you learned\n"
	.string "nothing?$"

MtPyre_Summit_Text_ArchieFight_ErrorOfYourWays:
	.string "Archie: I will show you the error\n"
	.string "of your ways here and now.$"

MtPyre_Summit_Text_ArchieFight_NoRunningNow:
	.string "Archie: There's no running now!$"

MtPyre_Summit_Text_ArchieDefeat:
	.string "Can't you see you're on the wrong\n"
	.string "side of this?$"

MtPyre_Summit_Text_ArchieFight_ArchiePostBattle:
	.string "Archie: …\n"
	.string "Clearly I have underestimated you.$"

MtPyre_Summit_Text_ArchieFight_MattWeHaveWhatWeCameFor:
	.string "Matt: Boss! We have what we came\n"
	.string "here for.\p"
	.string "It's time for us to get out of here!$"

MtPyre_Summit_Text_ArchieFight_MaxieReturnToBase:
	.string "Maxie: It's time for us to head back\n"
	.string "to Mt. Chimney.$"

MtPyre_Summit_Text_ArchieFight_MaxieDontFollowUs:
	.string "Maxie: Team Magma is grateful for your\n"
	.string "for your intervention today.\p"
	.string "However, I strongly suggest you do not\n"
	.string "involve yourself in our affairs again.\p"
	.string "Farewell…$"

MtPyre_Summit_EventScript_MaxieFight::
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieFight_MaxiePushArchie
	waitmovement 0
	playse SE_NOT_EFFECTIVE
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_MaxieFight_ArchieKnockedBack
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_MaxieFight_YouCannotStopMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_MaxieFight_ArchieApproachMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieFight_MaxieApproachPlayer
	applymovement LOCALID_TABITHA, MtPyre_Summit_Movement_MaxieFight_TabithaApproachPlayer
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtPyre_Summit_Movement_MaxieFight_EmmiePosition
	waitmovement 0
	msgbox MtPyre_Summit_Text_MaxieFight_EliminateYouBoth, MSGBOX_DEFAULT
	goto MtPyre_Summit_EventScript_MaxieFightBattle
	end

MtPyre_Summit_EventScript_MaxieFightBattle::
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_ne VAR_RESULT, 0, MtPyre_Summit_EventScript_MaxieFightDoMultiBattle
	special LoadPlayerParty
	goto MtPyre_Summit_EventScript_MaxieFight_NoRunningNow
	releaseall
	end

MtPyre_Summit_EventScript_MaxieFight_NoRunningNow::
	msgbox MtPyre_Summit_Text_MaxieFight_NoRunningNow, MSGBOX_DEFAULT
	waitmessage
	goto MtPyre_Summit_EventScript_MaxieFightBattle

MtPyre_Summit_EventScript_MaxieFightDoMultiBattle::
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
	multi_2_vs_1 TRAINER_MAXIE_MT_PYRE, MtPyre_Summit_Text_MaxieDefeat, PARTNER_ARCHIE
	switch VAR_RESULT
	case 1, MtPyre_Summit_EventScript_MaxieDefeated
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

MtPyre_Summit_EventScript_MaxieDefeated::
	playse SE_NOT_EFFECTIVE
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieFight_MaxieDefeated
	waitmovement 0
	msgbox MtPyre_Summit_Text_MaxieFight_MaxiePostBattle, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_TABITHA, MtPyre_Summit_Movement_MaxieFight_TabithaPushPlayer
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_MaxieFight_PlayerPushedRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox MtPyre_Summit_Text_MaxieFight_TabithaWeHaveWhatWeCameFor, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieFight_MaxieApproachPlayer
	waitmovement 0
	msgbox MtPyre_Summit_Text_MaxieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_MAXIE
	removeobject LOCALID_TABITHA
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_GRUNT_4
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_MAGMA
	setvar VAR_LEVEL_CAP, 70
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	delay 20
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_MaxieFight_MattApproachArchie
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MtPyre_Summit_Text_MaxieFight_ArchieReturnToBase, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
	waitmovement 0
	msgbox MtPyre_Summit_Text_MaxieFight_ArchieDontFollowUs, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_MATT
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
	clearflag FLAG_HIDE_ROUTE_111_TEAM_MAGMA
	setflag FLAG_HIDE_ROUTE_121_TEAM_MAGMA_GRUNTS
	setflag FLAG_MT_PYRE_MAXIE_DEFEATED
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	setvar VAR_MT_PYRE_STATE, 9
	setrespawn HEAL_LOCATION_MAUVILLE_CITY @Prevents skipping Winona split by wiping to Lavaridge Town
	call MtPyre_Summit_EventScript_OldLadyApproachPlayer2
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
	giveitem ITEM_MAGMA_EMBLEM
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
	releaseall
	end

MtPyre_Summit_Movement_MaxieFight_EmmiePosition:
	walk_slow_right
	face_up
	step_end

MtPyre_Summit_Movement_MaxieFight_MaxiePushArchie:
	walk_fast_right
	step_end

MtPyre_Summit_Movement_MaxieFight_ArchieKnockedBack:
	face_left
	lock_facing_direction
	walk_fast_right
	walk_fast_right
	unlock_facing_direction
	step_end

MtPyre_Summit_Movement_MaxieFight_ArchieApproachMaxie:
	walk_left
	walk_left
	walk_down
	face_left
	step_end

MtPyre_Summit_Movement_MaxieFight_MaxieApproachPlayer:
	walk_slow_down
	step_end

MtPyre_Summit_Movement_MaxieFight_TabithaApproachPlayer:
	walk_slow_left
	face_up 
	step_end 

MtPyre_Summit_Movement_MaxieFight_MaxieDefeated:
	lock_facing_direction
	walk_fast_up
	unlock_facing_direction
	step_end

MtPyre_Summit_Movement_MaxieFight_TabithaPushPlayer:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

MtPyre_Summit_Movement_MaxieFight_PlayerPushedRight:
	delay_16
	face_left
	lock_facing_direction
	walk_fast_right
	unlock_facing_direction
	step_end

MtPyre_Summit_Movement_MaxieFight_MattApproachArchie:
	walk_right
	walk_up
	walk_up
	walk_up
	step_end


MtPyre_Summit_Text_MaxieFight_YouCannotStopMe:
	.string "Maxie: Foolish child! You cannot stop\n"
	.string "me.$"

MtPyre_Summit_Text_MaxieFight_EliminateYouBoth:
	.string "Maxie: I will eliminate you both\n"
	.string "here and now!$"

MtPyre_Summit_Text_MaxieFight_NoRunningNow:
	.string "Maxie: There's no running now!$"

MtPyre_Summit_Text_MaxieDefeat:
	.string "Team Magma are not the villains here!$"

MtPyre_Summit_Text_MaxieFight_MaxiePostBattle:
	.string "Maxie: …\n"
	.string "You are far stronger than you appear.$"

MtPyre_Summit_Text_MaxieFight_TabithaWeHaveWhatWeCameFor:
	.string "Tabitha: Boss! We have what we came\n"
	.string "here for.\p"
	.string "It's time for us to get out of here!$"

MtPyre_Summit_Text_MaxieFight_ArchieReturnToBase:
	.string "Archie: It's time for us to head back\n"
	.string "to Lilycove.\p"
	.string "Shelly is still close to Mt. Chimney\n"
	.string "and will report when Team Magma return\l"
	.string "to their base.$"

MtPyre_Summit_Text_MaxieFight_ArchieDontFollowUs:
	.string "Archie: I appreciate your assistance\n"
	.string "once again.\p"
	.string "I strongly suggest you do not involve\n"
	.string "involve yourself in these matters\l"
	.string "further.\p"
	.string "Farewell…$"


MtPyre_Summit_EventScript_ChooseLeaderFight_Text_0:
	.string "Who will you fight?$"

MtPyre_Summit_Text_MaxieIRememberYou:
	.string "Maxie: You… I remember you from Mt.\n"
	.string "Chimney.\p"
	.string "This time you're too late. We have\n"
	.string "already obtained what we came for.$"

MtPyre_Summit_Text_ArchieIToldYou:
	.string "Archie: {PLAYER}! Emmie!\p"
	.string "Team Magma have stolen the Blue Orb\n"
	.string "and they want to use it to awaken the\l"
	.string "legendary Pokémon within Mt. Chimney.\p"
	.string "This is what Team Aqua have been\n"
	.string "preparing for all this time.$"

MtPyre_Summit_Text_MaxieDontBeFooled:
	.string "Maxie: Don't be led astray by Archie.\p"
	.string "Team Aqua have taken the Red Orb which\n"
	.string "serves no purpose other than to awaken\l"
	.string "the legendary Pokémon of the sea!$"

MtPyre_Summit_Text_ArchieChooseASide:
	.string "Archie: You have seen first hand what\n"
	.string "Team Magma are prepared to do.\p"
	.string "It's time for you to choose as side!\p"
	.string "Please, stand with me against Maxie\n"
	.string "once again.$"


MtPyre_Summit_EventScript_TeamAquaExits::
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 50
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_GRUNT_4
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
	fadedefaultbgm
	fadescreenswapbuffers FADE_FROM_BLACK
	delay 20
	setvar VAR_MT_PYRE_STATE, 1
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_OldLadyApproachPlayer0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_OldLadyApproachPlayer1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_OldLadyApproachPlayer2
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
	giveitem ITEM_MAGMA_EMBLEM
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
	releaseall
	end

MtPyre_Summit_EventScript_ArchieFacePlayer0::
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
	waitmovement 0
	return

@ Archie is already facing player
MtPyre_Summit_EventScript_ArchieFacePlayer1::
	return

MtPyre_Summit_EventScript_ArchieFacePlayer2::
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
	waitmovement 0
	return

MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
	waitmovement 0
	return

MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
	waitmovement 0
	return

MtPyre_Summit_Movement_PlayerApproachLeaders:
	walk_up
	step_end

MtPyre_Summit_Movement_OldLadyApproachPlayer0:
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_OldLadyApproachPlayer1:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_OldLadyApproachPlayer2:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_ArchieFacePlayer0:
	walk_left
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_ArchieFacePlayer2:
	walk_right
	walk_in_place_faster_down
	step_end

MtPyre_Summit_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
	release
	end

MtPyre_Summit_EventScript_OldManAfterRayquaza::
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
	release
	end

MtPyre_Summit_EventScript_OldManTale::
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
	return

MtPyre_Summit_EventScript_DeclineOldManTale::
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
	return

MtPyre_Summit_EventScript_OldManNewTale::
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
	return

MtPyre_Summit_EventScript_OldLady::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
	call_if_ge VAR_MT_PYRE_STATE, 10, MtPyre_Summit_EventScript_OldLadyOrbsReturned
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
	release
	end

MtPyre_Summit_EventScript_OldLadyOrbsReturned::
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
	release
	end

MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
	release
	end

MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
	release
	end

MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
	lockall
	setvar VAR_0x8008, 0
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end

MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
	lockall
	setvar VAR_0x8008, 1
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end

MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
	lockall
	setvar VAR_0x8008, 2
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 60
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
	playse SE_PIN
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
	waitmovement 0
	delay 30
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
	delay 30
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_MAXIE
	setvar VAR_MT_PYRE_STATE, 11
	releaseall
	end

MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	return

MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	return

MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachPlayer0::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachPlayer1::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachPlayer2::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachArchie0::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachArchie1::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachArchie2::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_Movement_PlayerFaceMaxie0:
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_PlayerFaceMaxie:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_ArchieExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtPyre_Summit_Movement_MaxieExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
	delay_16
	delay_8
	walk_left
	walk_in_place_faster_right
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
	delay_16
	delay_8
	walk_right
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
	delay_16
	delay_8
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_MaxieApproachPlayer0:
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

MtPyre_Summit_Movement_MaxieApproachPlayer1:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_MaxieApproachPlayer2:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_ArchieWatchMaxie:
	delay_16
	walk_in_place_faster_up
	step_end

MtPyre_Summit_Movement_PlayerWatchMaxie:
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_MaxieApproachArchie0:
	walk_down
	walk_right
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_MaxieApproachArchie1:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_MaxieApproachArchie2:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_EventScript_Grunt1::
	faceplayer
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_EventScript_Grunt2::
	faceplayer
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_EventScript_Grunt_Mt_Pyre_1Grunt_Mt_Pyre_2::
	lockall
	setvar VAR_0x8008, LOCALID_GRUNT_1
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	waitmovement 0
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MtPyre_Summit_Text_Grunt1Intro MSGBOX_AUTOCLOSE
	setvar VAR_0x8008, LOCALID_GRUNT_2
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	waitmovement 0
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MtPyre_Summit_Text_Grunt2Intro MSGBOX_AUTOCLOSE
	goto MtPyre_Summit_EventScript_Grunt_Mt_Pyre_1Grunt_Mt_Pyre_2DoMultiBattle
	releaseall
	end

MtPyre_Summit_EventScript_Grunt_Mt_Pyre_1Grunt_Mt_Pyre_2DoMultiBattle::
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
	multi_2p_vs_2 TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Defeat, TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Defeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, MtPyre_Summit_EventScript_Grunt_Mt_Pyre_1Grunt_Mt_Pyre_2Victory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

MtPyre_Summit_EventScript_Grunt_Mt_Pyre_1Grunt_Mt_Pyre_2Victory::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	addvar VAR_MT_PYRE_STATE, 1
	end

MtPyre_Summit_EventScript_Grunt3::
	faceplayer
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_EventScript_Grunt4::
	faceplayer
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_EventScript_Grunt_Mt_Pyre_3Grunt_Mt_Pyre_4::
	lockall
	setvar VAR_0x8008, LOCALID_GRUNT_3
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	waitmovement 0
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MtPyre_Summit_Text_Grunt3Intro MSGBOX_AUTOCLOSE
	setvar VAR_0x8008, LOCALID_GRUNT_4
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	waitmovement 0
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MtPyre_Summit_Text_Grunt4Intro MSGBOX_AUTOCLOSE
	goto MtPyre_Summit_EventScript_Grunt_Mt_Pyre_3Grunt_Mt_Pyre_4DoMultiBattle
	releaseall
	end

MtPyre_Summit_EventScript_Grunt_Mt_Pyre_3Grunt_Mt_Pyre_4DoMultiBattle::
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
	multi_2p_vs_2 TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Defeat, TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Defeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, MtPyre_Summit_EventScript_Grunt_Mt_Pyre_3Grunt_Mt_Pyre_4Victory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

MtPyre_Summit_EventScript_Grunt_Mt_Pyre_3Grunt_Mt_Pyre_4Victory::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	addvar VAR_MT_PYRE_STATE, 1
	end

MtPyre_Summit_EventScript_MattTabitha::
	lockall
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
	call_if_eq VAR_TEMP_3, 22, MtPyre_Summit_EventScript_MattTabithaEmmiePositionA
	call_if_eq VAR_TEMP_3, 23, MtPyre_Summit_EventScript_MattTabithaEmmiePositionB
	call_if_eq VAR_TEMP_3, 24, MtPyre_Summit_EventScript_MattTabithaEmmiePositionC
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	msgbox MtPyre_Summit_Text_TabithaAllYouGot, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TABITHA, MtPyre_Summit_Movement_TabithaApproachMatt
	waitmovement 0
	playse SE_NOT_EFFECTIVE
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_MattKnockedBack
	waitmovement 0
	msgbox MtPyre_Summit_Text_TabithaHehehe, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	msgbox MtPyre_Summit_Text_MattNotOver, MSGBOX_DEFAULT
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_MattApproachTabitha
	waitmovement 0
	playse SE_NOT_EFFECTIVE
	applymovement LOCALID_TABITHA, MtPyre_Summit_Movement_TabithaKnockedBack
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_MATT, Common_Movement_ExclamationMark
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_TabithaWhatDoWeHaveHere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_MattLastThingWeNeed, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MtPyre_Summit_Text_TabithaDoWeHaveADeal, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MtPyre_Summit_Text_MattSettleThisLater, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
	call_if_eq VAR_TEMP_2, 22, MtPyre_Summit_EventScript_MattTabithaFight_A
	call_if_eq VAR_TEMP_2, 23, MtPyre_Summit_EventScript_MattTabithaFight_B
	call_if_eq VAR_TEMP_2, 24, MtPyre_Summit_EventScript_MattTabithaFight_C
	end

MtPyre_Summit_EventScript_MattTabithaFight_A::
	msgbox MtPyre_Summit_Text_CantBeatBothOfUs, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_MattApproachPlayer_A
	applymovement LOCALID_TABITHA, MtPyre_Summit_Movement_TabithaApproachPlayer_A
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
	waitmovement 0
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
	multi_2p_vs_2 TRAINER_TABITHA_MT_PYRE, MtPyre_Summit_Text_Tabitha_Mt_PyreDefeat, TRAINER_MATT_MT_PYRE, MtPyre_Summit_Text_Matt_Mt_PyreDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, MtPyre_Summit_EventScript_Matt_Mt_PyreTabitha_Mt_PyreVictory_A
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

MtPyre_Summit_EventScript_Matt_Mt_PyreTabitha_Mt_PyreVictory_A::
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_Matt_Mt_PyrePostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_Tabitha_Mt_PyrePostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_AdminReturnToPosition
	applymovement LOCALID_TABITHA, MtPyre_Summit_Movement_TabithaReturnToPosition
	waitmovement 0
	applymovement LOCALID_MATT, Common_Movement_FaceOriginalDirection
	applymovement LOCALID_TABITHA, Common_Movement_FaceOriginalDirection
	addvar VAR_MT_PYRE_STATE, 1
	end

MtPyre_Summit_EventScript_MattTabithaEmmiePositionA::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtPyre_Summit_Movement_MattTabithaEmmiePositionA
	return

MtPyre_Summit_EventScript_MattTabithaEmmiePositionB::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtPyre_Summit_Movement_MattTabithaEmmiePositionA
	return

MtPyre_Summit_EventScript_MattTabithaEmmiePositionC::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtPyre_Summit_Movement_MattTabithaEmmiePositionC
	return

MtPyre_Summit_Movement_MattTabithaEmmiePositionA:
	walk_right
	walk_up
	step_end

MtPyre_Summit_Movement_MattTabithaEmmiePositionC:
	walk_left
	walk_up
	step_end

MtPyre_Summit_Movement_AdminReturnToPosition:
	walk_up
	step_end

MtPyre_Summit_Movement_TabithaReturnToPosition:
	walk_up
	walk_right
	face_left
	step_end

MtPyre_Summit_Movement_MattReturnToPosition:
	walk_up
	walk_left
	face_right
	step_end

MtPyre_Summit_Movement_MattApproachPlayer_A:
	walk_slow_down
	step_end

MtPyre_Summit_Movement_TabithaApproachPlayer_A:
	walk_left
	walk_down
	step_end

MtPyre_Summit_EventScript_MattTabithaFight_B::
	msgbox MtPyre_Summit_Text_CantBeatBothOfUs, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_MattApproachPlayer_B
	applymovement LOCALID_TABITHA, MtPyre_Summit_Movement_TabithaApproachPlayer_B
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
	waitmovement 0
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
	multi_2p_vs_2 TRAINER_TABITHA_MT_PYRE, MtPyre_Summit_Text_Tabitha_Mt_PyreDefeat, TRAINER_MATT_MT_PYRE, MtPyre_Summit_Text_Matt_Mt_PyreDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, MtPyre_Summit_EventScript_Matt_Mt_PyreTabitha_Mt_PyreVictory_B
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

MtPyre_Summit_EventScript_Matt_Mt_PyreTabitha_Mt_PyreVictory_B::
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_Matt_Mt_PyrePostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_Tabitha_Mt_PyrePostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_MattReturnToPosition
	applymovement LOCALID_TABITHA, MtPyre_Summit_Movement_AdminReturnToPosition
	waitmovement 0
	applymovement LOCALID_MATT, Common_Movement_FaceOriginalDirection
	applymovement LOCALID_TABITHA, Common_Movement_FaceOriginalDirection
	addvar VAR_MT_PYRE_STATE, 1
	end

MtPyre_Summit_Movement_MattApproachPlayer_B:
	walk_right
	walk_down
	step_end

MtPyre_Summit_Movement_TabithaApproachPlayer_B:
	walk_slow_down
	step_end


MtPyre_Summit_EventScript_MattTabithaFight_C::
	msgbox MtPyre_Summit_Text_CantBeatBothOfUs, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_MattApproachPlayer_C
	applymovement LOCALID_TABITHA, MtPyre_Summit_Movement_TabithaApproachPlayer_C
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
	waitmovement 0
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
	multi_2p_vs_2 TRAINER_TABITHA_MT_PYRE, MtPyre_Summit_Text_Tabitha_Mt_PyreDefeat, TRAINER_MATT_MT_PYRE, MtPyre_Summit_Text_Matt_Mt_PyreDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, MtPyre_Summit_EventScript_Matt_Mt_PyreTabitha_Mt_PyreVictory_C
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

MtPyre_Summit_EventScript_Matt_Mt_PyreTabitha_Mt_PyreVictory_C::
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_Matt_Mt_PyrePostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MtPyre_Summit_Text_Tabitha_Mt_PyrePostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_MattReturnToPosition
	applymovement LOCALID_TABITHA, MtPyre_Summit_Movement_AdminReturnToPosition
	waitmovement 0
	applymovement LOCALID_MATT, Common_Movement_FaceOriginalDirection
	applymovement LOCALID_TABITHA, Common_Movement_FaceOriginalDirection
	addvar VAR_MT_PYRE_STATE, 1
	end

MtPyre_Summit_Movement_MattApproachPlayer_C:
	walk_right
	walk_down
	step_end

MtPyre_Summit_Movement_TabithaApproachPlayer_C:
	walk_slow_down
	step_end

MtPyre_Summit_Movement_TabithaApproachMatt:
	walk_fast_left
	step_end

MtPyre_Summit_Movement_MattKnockedBack:
	lock_facing_direction
	walk_fast_left
	delay_16
	delay_16
	unlock_facing_direction
	step_end

MtPyre_Summit_Movement_MattApproachTabitha:
	walk_fast_right 
	step_end

MtPyre_Summit_Movement_TabithaKnockedBack:
	lock_facing_direction
	walk_fast_right
	walk_fast_right
	delay_16
	delay_16
	walk_slow_left
	unlock_facing_direction
	step_end

MtPyre_Summit_EventScript_Matt::
	faceplayer
	msgbox MtPyre_Summit_Text_Matt_Mt_PyrePostBattle, MSGBOX_DEFAULT
	closemessage
	end

MtPyre_Summit_EventScript_Tabitha::
	faceplayer
	msgbox MtPyre_Summit_Text_Tabitha_Mt_PyrePostBattle, MSGBOX_DEFAULT
	closemessage
	end

MtPyre_Summit_Text_TabithaAllYouGot:
	.string "Tabitha: Hehehehe! Oh Matt, for someone\n"
	.string "so built, you aren't half weak!\p"
	.string "Is this the best you can do?$"

MtPyre_Summit_Text_TabithaHehehe:
	.string "Tabitha: Hehehehehe!$"

MtPyre_Summit_Text_MattNotOver:
	.string "Matt: This is far from over you little\n"
	.string "punk!$"

MtPyre_Summit_Text_TabithaWhatDoWeHaveHere:
	.string "Tabitha: Well, well, well… What do we\n"
	.string "have here?$"

MtPyre_Summit_Text_MattLastThingWeNeed:
	.string "Matt: You again? The last thing Archie\n"
	.string "needs is you kids getting in the way.$"

MtPyre_Summit_Text_TabithaDoWeHaveADeal:
	.string "Tabitha: Now then Matty, it looks like\n"
	.string "our interests are momentarily aligned.\p"
	.string "What say we call a two-minute truce?$"

MtPyre_Summit_Text_MattSettleThisLater:
	.string "Matt: Fine. But we're far from done.\p"
	.string "We'll settle this afterwards!$"

MtPyre_Summit_Text_CantBeatBothOfUs:
	.string "You can't beat both of us!$"

MtPyre_Summit_Text_Matt_Mt_PyreDefeat:
	.string "How did I lose to you again?!$"

MtPyre_Summit_Text_Tabitha_Mt_PyreDefeat:
	.string "Hehe… You kids really are the real\n"
	.string "deal…$"

MtPyre_Summit_Text_Matt_Mt_PyrePostBattle:
	.string "Matt: Archie will have claimed what\n"
	.string "we came here for… Next time you\l"
	.string "won't be so lucky.$"

MtPyre_Summit_Text_Tabitha_Mt_PyrePostBattle:
	.string "Tabitha: No matter! You won't stand\n"
	.string "a chance against Maxie this time!$"

MtPyre_Summit_Text_Grunt1Intro:
	.string "The boss and Maxie are fighting it out\n"
	.string "up ahead too!$"

MtPyre_Summit_Text_Grunt1Defeat:
	.string "Interrupting them isn't smart…$"

MtPyre_Summit_Text_Grunt1PostBattle:
	.string "Do what you like kids. It's chaos\n"
	.string "up ahead!$"

MtPyre_Summit_Text_Grunt3Intro:
	.string "Matt and Tabitha are scrapping just\n"
	.string "ahead too!$"

MtPyre_Summit_Text_Grunt3Defeat:
	.string "Urgh… I should'nt have taken on\n"
	.string "Team Magma first…$"

MtPyre_Summit_Text_Grunt3PostBattle:
	.string "I wouldn't want to find myself in the\n"
	.string "middle of that!$"

MtPyre_Summit_Text_Grunt2Intro:
	.string "You…\n"
	.string "We saw you at Mt Chimney.\p"
	.string "You don't belong to either team, so why\n"
	.string "would you be here?$"

MtPyre_Summit_Text_Grunt2Defeat:
	.string "If you're going to mess with anyone,\n"
	.string "let it be Team Aqua…$"

MtPyre_Summit_Text_Grunt2PostBattle:
	.string "Heh, it doesn't matter!\n"
	.string "We bought ourselves some time!\p"
	.string "The boss should have snatched what\n"
	.string "he was after!$"

MtPyre_Summit_Text_Grunt4Intro:
	.string "You're too late! We will be finished\n"
	.string "here once the boss has wiped the floor\l"
	.string "with Archie!$"

MtPyre_Summit_Text_Grunt4Defeat:
	.string "You cannot stop what is coming…$"

MtPyre_Summit_Text_Grunt4PostBattle:
	.string "I'm telling you, you're too late…$"

MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo:
	.string "Archie: You're right.\p"
	.string "The Red Orb preserved at Mt. Pyre…\n"
	.string "I, Archie, now have it in my possession!\p"
	.string "Okay, team!\n"
	.string "We're pulling out!$"

MtPyre_Summit_Text_MaxieWeGotTheOrbLetsGo:
	.string "Maxie: You're right.\p"
	.string "The Blue Orb preserved at Mt. Pyre…\n"
	.string "I, Maxie, now have it in my possession!\p"
	.string "Okay, team!\n"
	.string "We're pulling out!$"

MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
	.string "Oh, no…\n"
	.string "This cannot happen…\p"
	.string "Not only the BLUE ORB, but even\n"
	.string "the RED ORB has been taken…\p"
	.string "The BLUE ORB and RED ORB must never\n"
	.string "be separated. They belong together.\p"
	.string "What are those men trying to do with\n"
	.string "the two ORBS?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
	.string "and took the BLUE ORB first?\p"
	.string "Well, in their haste, they left this\n"
	.string "behind.\p"
	.string "I couldn't imagine what exactly it\n"
	.string "could be.\p"
	.string "I would like you to have it.\n"
	.string "Perhaps it will be useful in some way.$"

MtPyre_Summit_Text_OrbsHaveBeenTaken:
	.string "The BLUE ORB and RED ORB taken by\n"
	.string "those sinister men…\p"
	.string "They must never be apart…\n"
	.string "I fear something terrible will happen…$"

MtPyre_Summit_Text_GroudonKyogreAwakened:
	.string "Oh, my goodness…\p"
	.string "You say that both GROUDON and KYOGRE\n"
	.string "have been awakened?\p"
	.string "It is said that the BLUE ORB and\n"
	.string "the RED ORB quelled the rage of\l"
	.string "the two POKéMON…\p"
	.string "It is also said that the true owner\n"
	.string "of the ORBS still exists.\p"
	.string "However, no one knows who, or what\n"
	.string "exactly, the ORBS belong to.\p"
	.string "It could be a human, or perhaps\n"
	.string "a POKéMON, but no one knows.$"

MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
	.string "The two men who took the ORBS came\n"
	.string "back to return them on their own.\p"
	.string "Those men…\n"
	.string "Perhaps they are not so evil after all…$"

MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
	.string "The embodiments of the land, sea,\n"
	.string "and the sky…\p"
	.string "That is said to be the identities of\n"
	.string "the super-ancient POKéMON…\p"
	.string "In the same way that we humans and\n"
	.string "POKéMON have life, our world, too,\l"
	.string "is alive…\p"
	.string "The super-ancient POKéMON have\n"
	.string "taught us that…$"

MtPyre_Summit_Text_WillYouHearOutMyTale:
	.string "MT. PYRE is where we calm the spirits\n"
	.string "of POKéMON that have passed on…\p"
	.string "This is a high place where one can\n"
	.string "see all of HOENN…\p"
	.string "The disembodied spirits of POKéMON\n"
	.string "must find solace here…\p"
	.string "Is it coincidence that you are here…\p"
	.string "Will you hear out my tale? A tale long\n"
	.string "told in the HOENN region?$"

MtPyre_Summit_Text_GroudonKyogreTale:
	.string "It happened long, long ago…\p"
	.string "The world was wracked by a ferocious\n"
	.string "clash between the POKéMON of the land\l"
	.string "and the POKéMON of the sea…\p"
	.string "The POKéMON of the land raised\n"
	.string "mountains and created continents…\p"
	.string "The POKéMON of the sea raised huge\n"
	.string "waves and carved out oceans…\p"
	.string "Their fierce duel raged without end.\p"
	.string "The world was engulfed in massive\n"
	.string "infernos and vicious storms.\p"
	.string "The BLUE ORB and the RED ORB brought\n"
	.string "an end to the calamity.\p"
	.string "Light poured from the two ORBS and\n"
	.string "becalmed the enraged adversaries.\p"
	.string "The pair, made docile, dove deep into\n"
	.string "the sea where eventually they\l"
	.string "disappeared…$"

MtPyre_Summit_Text_WellThatTooIsFine:
	.string "I see…\n"
	.string "Well, that, too, is fine…$"

MtPyre_Summit_Text_MaxieSilence:
	.string "MAXIE: {PLAYER}…\p"
	.string "… … … … … …\n"
	.string "… … … … … …$"

MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
	.string "It is my role to pass on the legends\n"
	.string "of HOENN to future generations.\p"
	.string "And the crisis that just ended in\n"
	.string "SOOTOPOLIS rewrote a legend…\p"
	.string "Have you the time to hear the new\n"
	.string "legend of HOENN?$"

MtPyre_Summit_Text_HoennTrioTale:
	.string "It happened long, long ago…\p"
	.string "The world was wracked by a ferocious\n"
	.string "clash between the POKéMON of the land\l"
	.string "and the POKéMON of the sea…\p"
	.string "The POKéMON of the land raised\n"
	.string "mountains and created continents…\p"
	.string "The POKéMON of the sea raised huge\n"
	.string "waves and carved out oceans…\p"
	.string "Their fierce duel raged without end.\p"
	.string "The world was engulfed in massive\n"
	.string "fires and vicious storms.\p"
	.string "It was then that the POKéMON of\n"
	.string "the sky descended from a storm.\p"
	.string "The POKéMON, shining a vivid green,\n"
	.string "becalmed the two enraged POKéMON.\p"
	.string "Then, its duty done, the green POKéMON\n"
	.string "flew off into the wild blue yonder…$"

