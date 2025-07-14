.set LOCALID_CALVIN, 2
.set LOCALID_RICK, 3
.set LOCALID_ALLEN, 9
.set LOCALID_TIANA, 4

Route102_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route102_OnTransition
	.byte 0

Route102_OnTransition:
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
	end

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_EventScript_CalvinRick::
lockall
setvar VAR_0x8008, LOCALID_CALVIN
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MALE, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox Route102_Text_CalvinIntro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_RICK
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MALE, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox Route102_Text_RickIntro, MSGBOX_AUTOCLOSE
goto Route102_EventScript_CalvinRickDoMultiBattle
releaseall
end

Route102_EventScript_CalvinRickDoMultiBattle::
playbgm MUS_ROUTE101, TRUE
multi_2p_vs_2 TRAINER_CALVIN_1, Route102_Text_CalvinDefeated, TRAINER_RICK, Route102_Text_RickDefeated, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route102_EventScript_CalvinRickVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route102_EventScript_CalvinRickVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox Route102_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE102_STATE, 1
end

Route102_Movement_CalvinRick_NotReady:
	walk_right
	step_end

Route102_EventScript_Calvin::
	faceplayer
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Rick::
	faceplayer
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_AllenTiana::
lockall
setvar VAR_0x8008, LOCALID_ALLEN
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MALE, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox Route102_Text_AllenIntro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_TIANA
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_GIRL, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox Route102_Text_TianaIntro, MSGBOX_AUTOCLOSE
goto Route102_EventScript_AllenTianaDoMultiBattle
releaseall
end

Route102_EventScript_AllenTianaDoMultiBattle::
playbgm MUS_ROUTE101, TRUE
multi_2p_vs_2 TRAINER_ALLEN, Route102_Text_AllenDefeated, TRAINER_TIANA, Route102_Text_TianaDefeated, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route102_EventScript_AllenTianaVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route102_EventScript_AllenTianaVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE102_STATE, 1
end

Route102_EventScript_Tiana::
	faceplayer
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen::
	faceplayer
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale:
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg:
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route102_Text_ReadyToFight:
	.string "Are you ready?$"

Route102_Text_ComeBackWhenReady:
	.string "Come back when you're ready.$"

