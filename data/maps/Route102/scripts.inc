# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
.set LOCALID_CALVIN, 2
# 3 "data/maps/Route102/scripts.pory"
.set LOCALID_RICK, 3
# 4 "data/maps/Route102/scripts.pory"
.set LOCALID_ALLEN, 9
# 5 "data/maps/Route102/scripts.pory"
.set LOCALID_TIANA, 4
# 6 "data/maps/Route102/scripts.pory"

# 7 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 8 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route102_OnTransition
# 9 "data/maps/Route102/scripts.pory"
	.byte 0
# 10 "data/maps/Route102/scripts.pory"

# 11 "data/maps/Route102/scripts.pory"
Route102_OnTransition:
# 12 "data/maps/Route102/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 13 "data/maps/Route102/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 14 "data/maps/Route102/scripts.pory"
	end
# 15 "data/maps/Route102/scripts.pory"

# 16 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 17 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 18 "data/maps/Route102/scripts.pory"
	end
# 19 "data/maps/Route102/scripts.pory"

# 20 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 21 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 22 "data/maps/Route102/scripts.pory"
	end
# 23 "data/maps/Route102/scripts.pory"

# 24 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 25 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 26 "data/maps/Route102/scripts.pory"
	end
# 27 "data/maps/Route102/scripts.pory"

# 28 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 29 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 30 "data/maps/Route102/scripts.pory"
	end
# 31 "data/maps/Route102/scripts.pory"

# 32 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRick::
# 33 "data/maps/Route102/scripts.pory"
lockall
# 34 "data/maps/Route102/scripts.pory"
setvar VAR_0x8008, LOCALID_CALVIN
# 35 "data/maps/Route102/scripts.pory"
playse SE_PIN
# 36 "data/maps/Route102/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 37 "data/maps/Route102/scripts.pory"
waitmovement 0
# 38 "data/maps/Route102/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 39 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 40 "data/maps/Route102/scripts.pory"
waitmovement 0
# 41 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_CalvinIntro MSGBOX_AUTOCLOSE
# 42 "data/maps/Route102/scripts.pory"
setvar VAR_0x8008, LOCALID_RICK
# 43 "data/maps/Route102/scripts.pory"
playse SE_PIN
# 44 "data/maps/Route102/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 45 "data/maps/Route102/scripts.pory"
waitmovement 0
# 46 "data/maps/Route102/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 47 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 48 "data/maps/Route102/scripts.pory"
waitmovement 0
# 49 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_RickIntro, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route102/scripts.pory"
goto Route102_EventScript_CalvinRickDoMultiBattle
# 51 "data/maps/Route102/scripts.pory"
releaseall
# 52 "data/maps/Route102/scripts.pory"
end
# 53 "data/maps/Route102/scripts.pory"

# 54 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRickDoMultiBattle::
# 55 "data/maps/Route102/scripts.pory"
playbgm MUS_ROUTE101, TRUE
# 56 "data/maps/Route102/scripts.pory"
multi_2p_vs_2 TRAINER_CALVIN_1, Route102_Text_CalvinDefeated, TRAINER_RICK, Route102_Text_RickDefeated, PARTNER_EMMIE
# 57 "data/maps/Route102/scripts.pory"
switch VAR_RESULT
# 58 "data/maps/Route102/scripts.pory"
case 1, Route102_EventScript_CalvinRickVictory
# 59 "data/maps/Route102/scripts.pory"
fadescreen FADE_TO_BLACK
# 60 "data/maps/Route102/scripts.pory"
special SetCB2WhiteOut
# 61 "data/maps/Route102/scripts.pory"
waitstate
# 62 "data/maps/Route102/scripts.pory"

# 63 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRickVictory::
# 64 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 65 "data/maps/Route102/scripts.pory"
waitmovement 0
# 66 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 68 "data/maps/Route102/scripts.pory"
waitmovement 0
# 69 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route102/scripts.pory"
addvar VAR_ROUTE102_STATE, 1
# 71 "data/maps/Route102/scripts.pory"
end
# 72 "data/maps/Route102/scripts.pory"

# 73 "data/maps/Route102/scripts.pory"
Route102_Movement_CalvinRick_NotReady:
# 74 "data/maps/Route102/scripts.pory"
	walk_right
# 75 "data/maps/Route102/scripts.pory"
	step_end
# 76 "data/maps/Route102/scripts.pory"

# 77 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 78 "data/maps/Route102/scripts.pory"
	faceplayer
# 79 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route102/scripts.pory"
	end
# 81 "data/maps/Route102/scripts.pory"

# 82 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 83 "data/maps/Route102/scripts.pory"
	faceplayer
# 84 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route102/scripts.pory"
	end
# 86 "data/maps/Route102/scripts.pory"

# 87 "data/maps/Route102/scripts.pory"
Route102_EventScript_AllenTiana::
# 88 "data/maps/Route102/scripts.pory"
lockall
# 89 "data/maps/Route102/scripts.pory"
setvar VAR_0x8008, LOCALID_ALLEN
# 90 "data/maps/Route102/scripts.pory"
playse SE_PIN
# 91 "data/maps/Route102/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 92 "data/maps/Route102/scripts.pory"
waitmovement 0
# 93 "data/maps/Route102/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 94 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 95 "data/maps/Route102/scripts.pory"
waitmovement 0
# 96 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_AllenIntro MSGBOX_AUTOCLOSE
# 97 "data/maps/Route102/scripts.pory"
setvar VAR_0x8008, LOCALID_TIANA
# 98 "data/maps/Route102/scripts.pory"
playse SE_PIN
# 99 "data/maps/Route102/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 100 "data/maps/Route102/scripts.pory"
waitmovement 0
# 101 "data/maps/Route102/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 102 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 103 "data/maps/Route102/scripts.pory"
waitmovement 0
# 104 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_TianaIntro, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route102/scripts.pory"
goto Route102_EventScript_AllenTianaDoMultiBattle
# 106 "data/maps/Route102/scripts.pory"
releaseall
# 107 "data/maps/Route102/scripts.pory"
end
# 108 "data/maps/Route102/scripts.pory"

# 109 "data/maps/Route102/scripts.pory"
Route102_EventScript_AllenTianaDoMultiBattle::
# 110 "data/maps/Route102/scripts.pory"
playbgm MUS_ROUTE101, TRUE
# 111 "data/maps/Route102/scripts.pory"
multi_2p_vs_2 TRAINER_ALLEN, Route102_Text_AllenDefeated, TRAINER_TIANA, Route102_Text_TianaDefeated, PARTNER_EMMIE
# 112 "data/maps/Route102/scripts.pory"
switch VAR_RESULT
# 113 "data/maps/Route102/scripts.pory"
case 1, Route102_EventScript_AllenTianaVictory
# 114 "data/maps/Route102/scripts.pory"
fadescreen FADE_TO_BLACK
# 115 "data/maps/Route102/scripts.pory"
special SetCB2WhiteOut
# 116 "data/maps/Route102/scripts.pory"
waitstate
# 117 "data/maps/Route102/scripts.pory"

# 118 "data/maps/Route102/scripts.pory"
Route102_EventScript_AllenTianaVictory::
# 119 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 120 "data/maps/Route102/scripts.pory"
waitmovement 0
# 121 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 123 "data/maps/Route102/scripts.pory"
waitmovement 0
# 124 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route102/scripts.pory"
addvar VAR_ROUTE102_STATE, 1
# 126 "data/maps/Route102/scripts.pory"
end
# 127 "data/maps/Route102/scripts.pory"

# 128 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 129 "data/maps/Route102/scripts.pory"
	faceplayer
# 130 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route102/scripts.pory"
	end
# 132 "data/maps/Route102/scripts.pory"

# 133 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 134 "data/maps/Route102/scripts.pory"
	faceplayer
# 135 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route102/scripts.pory"
	end
# 137 "data/maps/Route102/scripts.pory"

# 138 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 139 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 140 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 141 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 142 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 143 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 144 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 145 "data/maps/Route102/scripts.pory"

# 146 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 147 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 148 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 149 "data/maps/Route102/scripts.pory"

# 150 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 151 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 152 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 153 "data/maps/Route102/scripts.pory"

# 154 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 155 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 156 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 157 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 158 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 159 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 160 "data/maps/Route102/scripts.pory"

# 161 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 162 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 163 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 164 "data/maps/Route102/scripts.pory"

# 165 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 166 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 167 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 168 "data/maps/Route102/scripts.pory"

# 169 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 170 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 171 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"
# 172 "data/maps/Route102/scripts.pory"

# 173 "data/maps/Route102/scripts.pory"
Route102_Text_ReadyToFight:
# 174 "data/maps/Route102/scripts.pory"
	.string "Are you ready?$"
# 175 "data/maps/Route102/scripts.pory"

# 176 "data/maps/Route102/scripts.pory"
Route102_Text_ComeBackWhenReady:
# 177 "data/maps/Route102/scripts.pory"
	.string "Come back when you're ready.$"
