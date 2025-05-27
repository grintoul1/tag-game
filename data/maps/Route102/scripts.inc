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
	end
# 14 "data/maps/Route102/scripts.pory"

# 15 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 16 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 17 "data/maps/Route102/scripts.pory"
	end
# 18 "data/maps/Route102/scripts.pory"

# 19 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 20 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 21 "data/maps/Route102/scripts.pory"
	end
# 22 "data/maps/Route102/scripts.pory"

# 23 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 24 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 25 "data/maps/Route102/scripts.pory"
	end
# 26 "data/maps/Route102/scripts.pory"

# 27 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 28 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 29 "data/maps/Route102/scripts.pory"
	end
# 30 "data/maps/Route102/scripts.pory"

# 31 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRick::
# 32 "data/maps/Route102/scripts.pory"
lockall
# 33 "data/maps/Route102/scripts.pory"
setvar VAR_0x8008, LOCALID_CALVIN
# 34 "data/maps/Route102/scripts.pory"
playse SE_PIN
# 35 "data/maps/Route102/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 36 "data/maps/Route102/scripts.pory"
waitmovement 0
# 37 "data/maps/Route102/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 38 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 39 "data/maps/Route102/scripts.pory"
waitmovement 0
# 40 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_CalvinIntro MSGBOX_AUTOCLOSE
# 41 "data/maps/Route102/scripts.pory"
setvar VAR_0x8008, LOCALID_RICK
# 42 "data/maps/Route102/scripts.pory"
playse SE_PIN
# 43 "data/maps/Route102/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 44 "data/maps/Route102/scripts.pory"
waitmovement 0
# 45 "data/maps/Route102/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 46 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 47 "data/maps/Route102/scripts.pory"
waitmovement 0
# 48 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_RickIntro, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route102/scripts.pory"
goto Route102_EventScript_CalvinRickDoMultiBattle
# 50 "data/maps/Route102/scripts.pory"
releaseall
# 51 "data/maps/Route102/scripts.pory"
end
# 52 "data/maps/Route102/scripts.pory"

# 53 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRickDoMultiBattle::
# 54 "data/maps/Route102/scripts.pory"
playbgm MUS_ROUTE101, TRUE
# 55 "data/maps/Route102/scripts.pory"
multi_2p_vs_2 TRAINER_CALVIN_1, Route102_Text_CalvinDefeated, TRAINER_RICK, Route102_Text_RickDefeated, PARTNER_EMMIE
# 56 "data/maps/Route102/scripts.pory"
switch VAR_RESULT
# 57 "data/maps/Route102/scripts.pory"
case 1, Route102_EventScript_CalvinRickVictory
# 58 "data/maps/Route102/scripts.pory"
fadescreen FADE_TO_BLACK
# 59 "data/maps/Route102/scripts.pory"
special SetCB2WhiteOut
# 60 "data/maps/Route102/scripts.pory"
waitstate
# 61 "data/maps/Route102/scripts.pory"

# 62 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRickVictory::
# 63 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 64 "data/maps/Route102/scripts.pory"
waitmovement 0
# 65 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 67 "data/maps/Route102/scripts.pory"
waitmovement 0
# 68 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route102/scripts.pory"
addvar VAR_ROUTE102_STATE, 1
# 70 "data/maps/Route102/scripts.pory"
end
# 71 "data/maps/Route102/scripts.pory"

# 72 "data/maps/Route102/scripts.pory"
Route102_Movement_CalvinRick_NotReady:
# 73 "data/maps/Route102/scripts.pory"
	walk_right
# 74 "data/maps/Route102/scripts.pory"
	step_end
# 75 "data/maps/Route102/scripts.pory"

# 76 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 77 "data/maps/Route102/scripts.pory"
	faceplayer
# 78 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route102/scripts.pory"
	end
# 80 "data/maps/Route102/scripts.pory"

# 81 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 82 "data/maps/Route102/scripts.pory"
	faceplayer
# 83 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route102/scripts.pory"
	end
# 85 "data/maps/Route102/scripts.pory"

# 86 "data/maps/Route102/scripts.pory"
Route102_EventScript_AllenTiana::
# 87 "data/maps/Route102/scripts.pory"
lockall
# 88 "data/maps/Route102/scripts.pory"
setvar VAR_0x8008, LOCALID_ALLEN
# 89 "data/maps/Route102/scripts.pory"
playse SE_PIN
# 90 "data/maps/Route102/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 91 "data/maps/Route102/scripts.pory"
waitmovement 0
# 92 "data/maps/Route102/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 93 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 94 "data/maps/Route102/scripts.pory"
waitmovement 0
# 95 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_AllenIntro MSGBOX_AUTOCLOSE
# 96 "data/maps/Route102/scripts.pory"
setvar VAR_0x8008, LOCALID_TIANA
# 97 "data/maps/Route102/scripts.pory"
playse SE_PIN
# 98 "data/maps/Route102/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 99 "data/maps/Route102/scripts.pory"
waitmovement 0
# 100 "data/maps/Route102/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 101 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 102 "data/maps/Route102/scripts.pory"
waitmovement 0
# 103 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_TianaIntro, MSGBOX_AUTOCLOSE
# 104 "data/maps/Route102/scripts.pory"
goto Route102_EventScript_AllenTianaDoMultiBattle
# 105 "data/maps/Route102/scripts.pory"
releaseall
# 106 "data/maps/Route102/scripts.pory"
end
# 107 "data/maps/Route102/scripts.pory"

# 108 "data/maps/Route102/scripts.pory"
Route102_EventScript_AllenTianaDoMultiBattle::
# 109 "data/maps/Route102/scripts.pory"
playbgm MUS_ROUTE101, TRUE
# 110 "data/maps/Route102/scripts.pory"
multi_2p_vs_2 TRAINER_ALLEN, Route102_Text_AllenDefeated, TRAINER_TIANA, Route102_Text_TianaDefeated, PARTNER_EMMIE
# 111 "data/maps/Route102/scripts.pory"
switch VAR_RESULT
# 112 "data/maps/Route102/scripts.pory"
case 1, Route102_EventScript_AllenTianaVictory
# 113 "data/maps/Route102/scripts.pory"
fadescreen FADE_TO_BLACK
# 114 "data/maps/Route102/scripts.pory"
special SetCB2WhiteOut
# 115 "data/maps/Route102/scripts.pory"
waitstate
# 116 "data/maps/Route102/scripts.pory"

# 117 "data/maps/Route102/scripts.pory"
Route102_EventScript_AllenTianaVictory::
# 118 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 119 "data/maps/Route102/scripts.pory"
waitmovement 0
# 120 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route102/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 122 "data/maps/Route102/scripts.pory"
waitmovement 0
# 123 "data/maps/Route102/scripts.pory"
msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route102/scripts.pory"
addvar VAR_ROUTE102_STATE, 1
# 125 "data/maps/Route102/scripts.pory"
end
# 126 "data/maps/Route102/scripts.pory"

# 127 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 128 "data/maps/Route102/scripts.pory"
	faceplayer
# 129 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/Route102/scripts.pory"
	end
# 131 "data/maps/Route102/scripts.pory"

# 132 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 133 "data/maps/Route102/scripts.pory"
	faceplayer
# 134 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/Route102/scripts.pory"
	end
# 136 "data/maps/Route102/scripts.pory"

# 137 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 138 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 139 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 140 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 141 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 142 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 143 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 144 "data/maps/Route102/scripts.pory"

# 145 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 146 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 147 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 148 "data/maps/Route102/scripts.pory"

# 149 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 150 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 151 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 152 "data/maps/Route102/scripts.pory"

# 153 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 154 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 155 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 156 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 157 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 158 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 159 "data/maps/Route102/scripts.pory"

# 160 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 161 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 162 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 163 "data/maps/Route102/scripts.pory"

# 164 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 165 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 166 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 167 "data/maps/Route102/scripts.pory"

# 168 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 169 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 170 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"
# 171 "data/maps/Route102/scripts.pory"

# 172 "data/maps/Route102/scripts.pory"
Route102_Text_ReadyToFight:
# 173 "data/maps/Route102/scripts.pory"
	.string "Are you ready?$"
# 174 "data/maps/Route102/scripts.pory"

# 175 "data/maps/Route102/scripts.pory"
Route102_Text_ComeBackWhenReady:
# 176 "data/maps/Route102/scripts.pory"
	.string "Come back when you're ready.$"
