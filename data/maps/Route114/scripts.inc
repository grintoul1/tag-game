.set LOCALID_GRUNT_ROUTE_114_1, 17
.set LOCALID_GRUNT_ROUTE_114_2, 4
.set LOCALID_GRUNT_ROUTE_114_3, 3
.set LOCALID_GRUNT_ROUTE_114_4, 25
.set LOCALID_GRUNT_ROUTE_114_5, 6
.set LOCALID_GRUNT_ROUTE_114_6, 5
.set LOCALID_IVY, 22
.set LOCALID_TYRA, 23
.set LOCALID_KAI, 27
.set LOCALID_CLAUDE, 16
.set LOCALID_STEVE, 7
.set LOCALID_CHARLOTTE, 24

Route114_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
	.byte 0

Route114_Movement_PlayerWallyRival1:
	walk_left
	walk_down
	walk_down
	face_left
	step_end

Route114_EventScript_WallyRival1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_PlayerWallyRival1
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route114_Movement_EmmieWallyRival1
	waitmovement 0
	goto Route114_EventScript_WallyRivalBattle
	end

Route114_EventScript_WallyRival2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_PlayerWallyRival2
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route114_Movement_EmmieWallyRival2
	waitmovement 0
	goto Route114_EventScript_WallyRivalBattle
	end

Route114_EventScript_WallyRival3::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_PlayerWallyRival3
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route114_Movement_EmmieWallyRival3
	waitmovement 0
	goto Route114_EventScript_WallyRivalBattle
	end

Route114_EventScript_WallyRival4::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_PlayerWallyRival4
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route114_Movement_EmmieWallyRival4
	waitmovement 0
	goto Route114_EventScript_WallyRivalBattle
	end

Route114_EventScript_WallyRivalBattle::
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	addobject LOCALID_ROUTE114_RIVAL
	applymovement LOCALID_ROUTE114_RIVAL, Route114_Movement_RivalApproachPlayer
	waitmovement 0
	applymovement LOCALID_ROUTE114_RIVAL, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route114_EventScript_ShowMayMessage
	call_if_eq VAR_RESULT, FEMALE, Route114_EventScript_ShowBrendanMessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
	applymovement LOCALID_ROUTE114_RIVAL, Common_Movement_QuestionMark
	waitmovement 0
	addobject LOCALID_ROUTE114_WALLY
	applymovement LOCALID_ROUTE114_WALLY, Route114_Movement_WallyApproachPlayer
	waitmovement 0
	applymovement LOCALID_ROUTE114_WALLY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox Route114_Text_WallyMessage, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
	applymovement LOCALID_ROUTE114_RIVAL, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route114_EventScript_MayWallyJoinMe
	call_if_eq VAR_RESULT, FEMALE, Route114_EventScript_BrendanWallyJoinMe
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
	applymovement LOCALID_ROUTE114_WALLY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox Route114_Text_WallySureLetsGo, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
	waitmovement 0
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route114_EventScript_MayWallySetupBattle
	goto_if_eq VAR_RESULT, FEMALE, Route114_EventScript_BrendanWallySetupBattle
	releaseall
	end

Route114_EventScript_MayWallySetupBattle::
	switch VAR_STARTER_MON
	case 0, Route114_EventScript_MayBattleTreecko
	case 1, Route114_EventScript_MayBattleTorchic
	case 2, Route114_EventScript_MayBattleMudkip
	end

Route114_EventScript_BrendanWallySetupBattle::
	switch VAR_STARTER_MON
	case 0, Route114_EventScript_BrendanBattleTreecko
	case 1, Route114_EventScript_BrendanBattleTorchic
	case 2, Route114_EventScript_BrendanBattleMudkip
	end

Route114_EventScript_MayBattleTreecko::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	multi_2p_vs_2 TRAINER_MAY_ROUTE_114_TREECKO, Route114_Text_RivalDefeat, TRAINER_WALLY_ROUTE_114, Route114_Text_WallyDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, Route114_EventScript_RivalWallyVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

Route114_EventScript_MayBattleTorchic::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	multi_2p_vs_2 TRAINER_MAY_ROUTE_114_TORCHIC, Route114_Text_RivalDefeat, TRAINER_WALLY_ROUTE_114, Route114_Text_WallyDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, Route114_EventScript_RivalWallyVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

Route114_EventScript_MayBattleMudkip::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	multi_2p_vs_2 TRAINER_MAY_ROUTE_114_MUDKIP, Route114_Text_RivalDefeat, TRAINER_WALLY_ROUTE_114, Route114_Text_WallyDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, Route114_EventScript_RivalWallyVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

Route114_EventScript_BrendanBattleTreecko::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	multi_2p_vs_2 TRAINER_BRENDAN_ROUTE_114_TREECKO, Route114_Text_RivalDefeat, TRAINER_WALLY_ROUTE_114, Route114_Text_WallyDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, Route114_EventScript_RivalWallyVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

Route114_EventScript_BrendanBattleTorchic::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	multi_2p_vs_2 TRAINER_BRENDAN_ROUTE_114_TORCHIC, Route114_Text_RivalDefeat, TRAINER_WALLY_ROUTE_114, Route114_Text_WallyDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, Route114_EventScript_RivalWallyVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

Route114_EventScript_BrendanBattleMudkip::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	multi_2p_vs_2 TRAINER_BRENDAN_ROUTE_114_MUDKIP, Route114_Text_RivalDefeat, TRAINER_WALLY_ROUTE_114, Route114_Text_WallyDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, Route114_EventScript_RivalWallyVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

Route114_EventScript_RivalWallyVictory::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
	applymovement LOCALID_ROUTE114_RIVAL, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route114_EventScript_MayPostBattle
	call_if_eq VAR_RESULT, FEMALE, Route114_EventScript_BrendanPostBattle
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_PlayerWatchRivalApproachWally
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route114_Movement_PlayerWatchRivalApproachWally
	applymovement LOCALID_ROUTE114_WALLY, Route114_Movement_WallyWatchRivalApproachWally
	applymovement LOCALID_ROUTE114_RIVAL, Route114_Movement_RivalApproachWally
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route114_EventScript_MayWallyWithMe
	call_if_eq VAR_RESULT, FEMALE, Route114_EventScript_BrendanWallyWithMe
	applymovement LOCALID_ROUTE114_WALLY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route114_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_ROUTE114_RIVAL, Common_Movement_FaceLeft
	applymovement LOCALID_ROUTE114_WALLY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox Route114_Text_WallySeeYouAround, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement LOCALID_ROUTE114_RIVAL, Route114_Movement_RivalWallyExit
	applymovement LOCALID_ROUTE114_WALLY, Route114_Movement_RivalWallyExit
	waitmovement 0
	removeobject LOCALID_ROUTE114_RIVAL
	removeobject LOCALID_ROUTE114_WALLY
	addvar VAR_ROUTE114_STATE, 1
	setvar VAR_PARTNER_EMMIE_STATE, 23
	setflag FLAG_HIDE_ROUTE_114_WALLY
	setflag FLAG_HIDE_ROUTE_114_RIVAL
	playbgm MUS_ROUTE110, FALSE
	releaseall
	end

Route114_Movement_RivalWallyExit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route114_Text_WallySeeYouAround:
	.string "Wally: I suppose we'll see you\n"
	.string "around then.\p"
	.string "Next time we're going to be\n"
	.string "ready for you!$"

Route114_Text_WallyPostBattle:
	.string "Wally: Well, we may have lost\n"
	.string "the battle, but I did have a lot\l"
	.string "of fun battling alongside you.\p"
	.string "That sounds good. I would love the\n"
	.string "company too!$"

Route114_EventScript_MayWallyWithMe::
	msgbox Route114_Text_MayWallyWithMe, MSGBOX_AUTOCLOSE
	waitmessage
	return

Route114_EventScript_BrendanWallyWithMe::
	msgbox Route114_Text_BrendanWallyWithMe, MSGBOX_AUTOCLOSE
	waitmessage
	return

Route114_Text_MayWallyWithMe:
	.string "May: Hey, Wally, is it?\p"
	.string "I know we've only just met\n"
	.string "but I feel like we worked well\l"
	.string "together just now.\p"
	.string "Why don't we travel together\n"
	.string "for a while?$"

Route114_Text_BrendanWallyWithMe:
	.string "Brendan: Hey, Wally, is it?\p"
	.string "I know we've only just met\n"
	.string "but I feel like we worked well\l"
	.string "together just now.\p"
	.string "Why don't we travel together\n"
	.string "for a while?$"

Route114_Movement_RivalApproachWally:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

Route114_Movement_PlayerWatchRivalApproachWally:
	delay_16
	face_down
	delay_16
	delay_16
	face_right
	step_end

Route114_Movement_WallyWatchRivalApproachWally:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	step_end

Route114_EventScript_MayPostBattle::
	msgbox Route114_Text_MayPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	return

Route114_EventScript_BrendanPostBattle::
	msgbox Route114_Text_BrendanPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	return

Route114_Text_MayPostBattle:
	.string "May: Wow… I was so confident that\n"
	.string "working together we could defeat\l"
	.string "you guys…$"

Route114_Text_BrendanPostBattle:
	.string "Brendan: Wow… I was so confident that\n"
	.string "working together we could defeat\l"
	.string "you guys…$"

Route114_Text_WallyDefeat:
	.string "You two make quite the team too…$"

Route114_Text_RivalDefeat:
	.string "I really thought we could win…$"

Route114_Text_WallySureLetsGo:
	.string "Wally: Sure, why not?\p"
	.string "I can show the teamwork skills I\n"
	.string "learned while training with Ralts.\p"
	.string "Let's go!$"

Route114_EventScript_MayWallyJoinMe::
	msgbox Route114_Text_MayWallyJoinMe, MSGBOX_AUTOCLOSE
	waitmessage
	return

Route114_EventScript_BrendanWallyJoinMe::
	msgbox Route114_Text_BrendanWallyJoinMe, MSGBOX_AUTOCLOSE
	waitmessage
	return

Route114_Text_MayWallyJoinMe:
	.string "May: Hey there!\p"
	.string "I think you've arrived at the\n"
	.string "perfect time actually.\p"
	.string "Last time I battled these two,\n"
	.string "I took quite the beating!\p"
	.string "You should join me this time, I\n"
	.string "promise it'll be fun!$"

Route114_Text_BrendanWallyJoinMe:
	.string "Brendan: Hey there!\p"
	.string "I think you've arrived at the\n"
	.string "perfect time actually.\p"
	.string "Last time I battled these two,\n"
	.string "I took quite the beating!\p"
	.string "You should join me this time, I\n"
	.string "promise it'll be fun!$"

Route114_EventScript_ShowMayMessage::
	msgbox Route114_Text_MayMessage, MSGBOX_AUTOCLOSE
	waitmessage
	return

Route114_EventScript_ShowBrendanMessage::
	msgbox Route114_Text_BrendanMessage, MSGBOX_AUTOCLOSE
	waitmessage
	return

Route114_Text_WallyMessage:
	.string "Wally: Hey, {PLAYER}, Emmie,\n"
	.string "fancy seeing you guys out here!\p"
	.string "Ralts and I trained hard together\n"
	.string	"and…\p"
	.string "Sorry… Am I interrupting something?$"

Route114_Text_MayMessage:
	.string "May: Hey, {PLAYER}, Emmie,\n"
	.string "fancy seeing you guys out here!\p"
	.string "I came up here to search for Pokémon\n"
	.string "for my dad in Meteor Falls.\p"
	.string "There are these strange people dressed\n"
	.string "in red who wouldn't let me pass up\l"
	.string "ahead though…\p"
	.string "Still, as we're all here, why don't\n"
	.string "we have a battle to pass some time?$"

Route114_Text_BrendanMessage:
	.string "Brendan: Hey, {PLAYER}, Emmie,\n"
	.string "fancy seeing you guys out here!\p"
	.string "I came up here to search for Pokémon\n"
	.string "for my dad in Meteor Falls.\p"
	.string "There are these strange people dressed\n"
	.string "in red who wouldn't let me pass up\l"
	.string "ahead though…\p"
	.string "Still, as we're all here, why don't\n"
	.string "we have a battle to pass some time?$"

Route114_Movement_WallyApproachPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route114_Movement_RivalApproachPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_right
	step_end

Route114_Movement_EmmieWallyRival1:
	walk_left
	walk_left
	walk_down
	face_left
	step_end

Route114_Movement_PlayerWallyRival2:
	walk_left
	walk_down
	face_left
	step_end

Route114_Movement_EmmieWallyRival2:
	walk_left
	walk_left
	step_end

Route114_Movement_PlayerWallyRival3:
	walk_left
	walk_up
	face_left
	step_end

Route114_Movement_EmmieWallyRival3:
	walk_left
	walk_left
	step_end

Route114_Movement_PlayerWallyRival4:
	walk_left
	walk_up
	walk_up
	face_left
	step_end

Route114_Movement_EmmieWallyRival4:
	walk_left
	walk_left
	walk_up
	face_left
	step_end

Route114_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
	end

Route114_OnLoad:
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
	end

Route114_OnFrame:
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0

Route114_EventScript_Man::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
	random NUM_ROUTE_114_MAN_BERRIES
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_ReceivedBerry::
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_RoarGentleman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_ROAR
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_ROAR
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_ReceivedRoar::
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_Poochyena::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route114_EventScript_MeteorFallsSign::
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
	end

Route114_EventScript_FossilManiacsHouseSign::
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
	end

Route114_EventScript_LanettesHouseSign::
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
	end

Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4::
lockall
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_3
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MAGMA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route114_Text_Grunt_Route_114_3Intro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_4
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MAGMA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route114_Text_Grunt_Route_114_4Intro, MSGBOX_AUTOCLOSE
goto Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4DoMultiBattle
releaseall
end

Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4DoMultiBattle::
playbgm MUS_ROUTE110, TRUE
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_3, Route114_Text_Grunt_Route_114_3Defeat, TRAINER_GRUNT_ROUTE_114_4, Route114_Text_Grunt_Route_114_4Defeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4Victory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4Victory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route114_Text_Grunt_Route_114_3PostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route114_Text_Grunt_Route_114_4PostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE114_STATE, 1
end

Route114_EventScript_Grunt_Route_114_3::
	faceplayer
	msgbox Route114_Text_Grunt_Route_114_3PostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Grunt_Route_114_2::
	faceplayer
	msgbox Route114_Text_Grunt_Route_114_2PostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Grunt_Route_114_6::
	faceplayer
	msgbox Route114_Text_Grunt_Route_114_6PostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6::
lockall
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_5
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MAGMA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route114_Text_Grunt_Route_114_5Intro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_6
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MAGMA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route114_Text_Grunt_Route_114_6Intro, MSGBOX_AUTOCLOSE
goto Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6DoMultiBattle
releaseall
end

Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6DoMultiBattle::
playbgm MUS_ROUTE110, TRUE
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_5, Route114_Text_Grunt_Route_114_5Defeat, TRAINER_GRUNT_ROUTE_114_6, Route114_Text_Grunt_Route_114_6Defeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6Victory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6Victory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route114_Text_Grunt_Route_114_5PostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route114_Text_Grunt_Route_114_6PostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE114_STATE, 1
end

Route114_EventScript_Grunt_Route_114_5::
	faceplayer
	msgbox Route114_Text_Grunt_Route_114_5PostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_SteveCharlotte::
lockall
setvar VAR_0x8008, LOCALID_STEVE
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox Route114_Text_SteveIntro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_CHARLOTTE
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_GIRL, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox Route114_Text_CharlotteIntro, MSGBOX_AUTOCLOSE
goto Route114_EventScript_SteveCharlotteDoMultiBattle
releaseall
end

Route114_EventScript_SteveCharlotteDoMultiBattle::
playbgm MUS_ROUTE110, TRUE
multi_2p_vs_2 TRAINER_STEVE_1, Route114_Text_SteveDefeat, TRAINER_CHARLOTTE, Route114_Text_CharlotteDefeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route114_EventScript_SteveCharlotteVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route114_EventScript_SteveCharlotteVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox Route114_Text_StevePostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE114_STATE, 1
end

Route114_EventScript_Steve::
	faceplayer
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_RegisterSteve::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_STEVE_1
	release
	end

Route114_EventScript_RematchSteve::
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2::
lockall
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_1
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MAGMA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox Route114_Text_Grunt_Route_114_1Intro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_2
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MAGMA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox Route114_Text_Grunt_Route_114_2Intro, MSGBOX_AUTOCLOSE
goto Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2DoMultiBattle
releaseall
end

Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2DoMultiBattle::
playbgm MUS_ROUTE110, TRUE
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_1, Route114_Text_Grunt_Route_114_1Defeat, TRAINER_GRUNT_ROUTE_114_2, Route114_Text_Grunt_Route_114_2Defeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2Victory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2Victory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox Route114_Text_Grunt_Route_114_1PostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox Route114_Text_Grunt_Route_114_2PostBattle, MSGBOX_AUTOCLOSE
setvar VAR_PARTNER_EMMIE_STATE, 24
addvar VAR_ROUTE114_STATE, 1
end

Route114_EventScript_Grunt_Route_114_1::
	faceplayer
	msgbox Route114_Text_Grunt_Route_114_1PostBattle, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_RegisterBernie::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_BERNIE_2
	release
	end

Route114_EventScript_RematchBernie::
	trainerbattle_rematch TRAINER_BERNIE_2, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Claude::
	faceplayer
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Nolan::
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_IvyTyra::
lockall
setvar VAR_0x8008, LOCALID_IVY
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_TWINS, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route114_Text_IvyIntro, MSGBOX_AUTOCLOSE
goto Route114_EventScript_IvyTyraDoMultiBattle
releaseall
end

Route114_EventScript_IvyTyraDoMultiBattle::
playbgm MUS_ROUTE110, TRUE
multi_2p_vs_1 TRAINER_TYRA_AND_IVY, Route114_Text_IvyDefeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route114_EventScript_IvyTyraVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route114_EventScript_IvyTyraVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE114_STATE, 1
end

Route114_EventScript_Tyra::
	faceplayer
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Ivy::
	faceplayer
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Grunt_Route_114_4::
	faceplayer
	msgbox Route114_Text_Grunt_Route_114_4PostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Charlotte::
	faceplayer
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_KaiClaude::
lockall
setvar VAR_0x8008, LOCALID_KAI
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_HIKER, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route114_Text_KaiIntro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_CLAUDE
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_HIKER, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route114_Text_ClaudeIntro, MSGBOX_AUTOCLOSE
goto Route114_EventScript_KaiClaudeDoMultiBattle
releaseall
end

Route114_EventScript_KaiClaudeDoMultiBattle::
playbgm MUS_ROUTE110, TRUE
multi_2p_vs_2 TRAINER_KAI, Route114_Text_KaiDefeat, TRAINER_CLAUDE, Route114_Text_ClaudeDefeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route114_EventScript_KaiClaudeVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route114_EventScript_KaiClaudeVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE114_STATE, 1
end

Route114_EventScript_Kai::
	faceplayer
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_Text_AllMyMonDoesIsRoarTakeThis:
	.string "All my POKéMON does is ROAR…\n"
	.string "No one dares to come near me…\p"
	.string "Sigh… If you would, please take\n"
	.string "this TM away…$"

Route114_Text_ExplainRoar:
	.string "TM05 contains ROAR.\n"
	.string "A ROAR sends POKéMON scurrying.$"

Route114_Text_Poochyena:
	.string "Bow! Bowwow!$"

Route114_Text_MeteorFallsSign:
	.string "METEOR FALLS\n"
	.string "RUSTBORO CITY THROUGH HERE$"

Route114_Text_FossilManiacsHouseSign:
	.string "FOSSIL MANIAC'S HOUSE\n"
	.string "“Fossils gratefully accepted!”$"

Route114_Text_LanettesHouse:
	.string "LANETTE'S HOUSE$"

