# 1 "data/maps/Route133/scripts.pory"

# 2 "data/maps/Route133/scripts.pory"
Route133_MapScripts::
# 3 "data/maps/Route133/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route133_OnTransition
# 4 "data/maps/Route133/scripts.pory"
	.byte 0
# 5 "data/maps/Route133/scripts.pory"

# 6 "data/maps/Route133/scripts.pory"
Route133_OnTransition:
# 7 "data/maps/Route133/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 8 "data/maps/Route133/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 9 "data/maps/Route133/scripts.pory"
	end
# 10 "data/maps/Route133/scripts.pory"

# 11 "data/maps/Route133/scripts.pory"
Route133_EventScript_MollieConor::
# 12 "data/maps/Route133/scripts.pory"
lockall
# 13 "data/maps/Route133/scripts.pory"
playse SE_PIN
# 14 "data/maps/Route133/scripts.pory"
applymovement LOCALID_MOLLIE, Common_Movement_ExclamationMark
# 15 "data/maps/Route133/scripts.pory"
waitmovement 0
# 16 "data/maps/Route133/scripts.pory"
playbgm MUS_ENCOUNTER_FEMALE, TRUE
# 17 "data/maps/Route133/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 18 "data/maps/Route133/scripts.pory"
waitmovement 0
# 19 "data/maps/Route133/scripts.pory"
msgbox Route133_Text_MollieIntro MSGBOX_AUTOCLOSE
# 20 "data/maps/Route133/scripts.pory"
playse SE_PIN
# 21 "data/maps/Route133/scripts.pory"
applymovement  LOCALID_CONOR, Common_Movement_ExclamationMark
# 22 "data/maps/Route133/scripts.pory"
waitmovement 0
# 23 "data/maps/Route133/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 24 "data/maps/Route133/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 25 "data/maps/Route133/scripts.pory"
waitmovement 0
# 26 "data/maps/Route133/scripts.pory"
msgbox Route133_Text_ConorIntro MSGBOX_AUTOCLOSE
# 27 "data/maps/Route133/scripts.pory"
goto Route133_EventScript_MollieConorDoMultiBattle
# 28 "data/maps/Route133/scripts.pory"
releaseall
# 29 "data/maps/Route133/scripts.pory"
end
# 30 "data/maps/Route133/scripts.pory"

# 31 "data/maps/Route133/scripts.pory"
Route133_EventScript_MollieConorDoMultiBattle::
# 32 "data/maps/Route133/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 33 "data/maps/Route133/scripts.pory"
multi_2p_vs_2 TRAINER_MOLLIE, Route133_Text_MollieDefeat, TRAINER_CONOR, Route133_Text_ConorDefeat, PARTNER_EMMIE
# 34 "data/maps/Route133/scripts.pory"
switch VAR_RESULT
# 35 "data/maps/Route133/scripts.pory"
case 1, Route133_EventScript_MollieConorVictory
# 36 "data/maps/Route133/scripts.pory"
fadescreen FADE_TO_BLACK
# 37 "data/maps/Route133/scripts.pory"
special SetCB2WhiteOut
# 38 "data/maps/Route133/scripts.pory"
waitstate
# 39 "data/maps/Route133/scripts.pory"

# 40 "data/maps/Route133/scripts.pory"
Route133_EventScript_MollieConorVictory::
# 41 "data/maps/Route133/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/Route133/scripts.pory"
waitmovement 0
# 43 "data/maps/Route133/scripts.pory"
msgbox Route133_Text_MolliePostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route133/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 45 "data/maps/Route133/scripts.pory"
waitmovement 0
# 46 "data/maps/Route133/scripts.pory"
msgbox Route133_Text_ConorPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route133/scripts.pory"
addvar VAR_ROUTE134_STATE, 1
# 48 "data/maps/Route133/scripts.pory"
end
# 49 "data/maps/Route133/scripts.pory"

# 50 "data/maps/Route133/scripts.pory"
Route133_EventScript_BeckWarren::
# 51 "data/maps/Route133/scripts.pory"
lockall
# 52 "data/maps/Route133/scripts.pory"
playse SE_PIN
# 53 "data/maps/Route133/scripts.pory"
applymovement LOCALID_BECK, Common_Movement_ExclamationMark
# 54 "data/maps/Route133/scripts.pory"
waitmovement 0
# 55 "data/maps/Route133/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 56 "data/maps/Route133/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 57 "data/maps/Route133/scripts.pory"
waitmovement 0
# 58 "data/maps/Route133/scripts.pory"
msgbox Route133_Text_BeckIntro MSGBOX_AUTOCLOSE
# 59 "data/maps/Route133/scripts.pory"
playse SE_PIN
# 60 "data/maps/Route133/scripts.pory"
applymovement  LOCALID_WARREN, Common_Movement_ExclamationMark
# 61 "data/maps/Route133/scripts.pory"
waitmovement 0
# 62 "data/maps/Route133/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 63 "data/maps/Route133/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 64 "data/maps/Route133/scripts.pory"
waitmovement 0
# 65 "data/maps/Route133/scripts.pory"
msgbox Route133_Text_WarrenIntro MSGBOX_AUTOCLOSE
# 66 "data/maps/Route133/scripts.pory"
goto Route133_EventScript_BeckWarrenDoMultiBattle
# 67 "data/maps/Route133/scripts.pory"
releaseall
# 68 "data/maps/Route133/scripts.pory"
end
# 69 "data/maps/Route133/scripts.pory"

# 70 "data/maps/Route133/scripts.pory"
Route133_EventScript_BeckWarrenDoMultiBattle::
# 71 "data/maps/Route133/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 72 "data/maps/Route133/scripts.pory"
multi_2p_vs_2 TRAINER_BECK, Route133_Text_BeckDefeat, TRAINER_WARREN, Route133_Text_WarrenDefeat, PARTNER_EMMIE
# 73 "data/maps/Route133/scripts.pory"
switch VAR_RESULT
# 74 "data/maps/Route133/scripts.pory"
case 1, Route133_EventScript_BeckWarrenVictory
# 75 "data/maps/Route133/scripts.pory"
fadescreen FADE_TO_BLACK
# 76 "data/maps/Route133/scripts.pory"
special SetCB2WhiteOut
# 77 "data/maps/Route133/scripts.pory"
waitstate
# 78 "data/maps/Route133/scripts.pory"

# 79 "data/maps/Route133/scripts.pory"
Route133_EventScript_BeckWarrenVictory::
# 80 "data/maps/Route133/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 81 "data/maps/Route133/scripts.pory"
waitmovement 0
# 82 "data/maps/Route133/scripts.pory"
msgbox Route133_Text_BeckPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route133/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 84 "data/maps/Route133/scripts.pory"
waitmovement 0
# 85 "data/maps/Route133/scripts.pory"
msgbox Route133_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route133/scripts.pory"
addvar VAR_ROUTE134_STATE, 1
# 87 "data/maps/Route133/scripts.pory"
end
# 88 "data/maps/Route133/scripts.pory"

# 89 "data/maps/Route133/scripts.pory"
Route133_EventScript_FranklinDebra::
# 90 "data/maps/Route133/scripts.pory"
lockall
# 91 "data/maps/Route133/scripts.pory"
playse SE_PIN
# 92 "data/maps/Route133/scripts.pory"
applymovement LOCALID_FRANKLIN, Common_Movement_ExclamationMark
# 93 "data/maps/Route133/scripts.pory"
waitmovement 0
# 94 "data/maps/Route133/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 95 "data/maps/Route133/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 96 "data/maps/Route133/scripts.pory"
waitmovement 0
# 97 "data/maps/Route133/scripts.pory"
msgbox Route133_Text_FranklinIntro MSGBOX_AUTOCLOSE
# 98 "data/maps/Route133/scripts.pory"
playse SE_PIN
# 99 "data/maps/Route133/scripts.pory"
applymovement  LOCALID_DEBRA, Common_Movement_ExclamationMark
# 100 "data/maps/Route133/scripts.pory"
waitmovement 0
# 101 "data/maps/Route133/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 102 "data/maps/Route133/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 103 "data/maps/Route133/scripts.pory"
waitmovement 0
# 104 "data/maps/Route133/scripts.pory"
msgbox Route133_Text_DebraIntro MSGBOX_AUTOCLOSE
# 105 "data/maps/Route133/scripts.pory"
goto Route133_EventScript_FranklinDebraDoMultiBattle
# 106 "data/maps/Route133/scripts.pory"
releaseall
# 107 "data/maps/Route133/scripts.pory"
end
# 108 "data/maps/Route133/scripts.pory"

# 109 "data/maps/Route133/scripts.pory"
Route133_EventScript_FranklinDebraDoMultiBattle::
# 110 "data/maps/Route133/scripts.pory"
playbgm MUS_SURF, TRUE
# 111 "data/maps/Route133/scripts.pory"
multi_2p_vs_2 TRAINER_FRANKLIN, Route133_Text_FranklinDefeat, TRAINER_DEBRA, Route133_Text_DebraDefeat, PARTNER_EMMIE
# 112 "data/maps/Route133/scripts.pory"
switch VAR_RESULT
# 113 "data/maps/Route133/scripts.pory"
case 1, Route133_EventScript_FranklinDebraVictory
# 114 "data/maps/Route133/scripts.pory"
fadescreen FADE_TO_BLACK
# 115 "data/maps/Route133/scripts.pory"
special SetCB2WhiteOut
# 116 "data/maps/Route133/scripts.pory"
waitstate
# 117 "data/maps/Route133/scripts.pory"

# 118 "data/maps/Route133/scripts.pory"
Route133_EventScript_FranklinDebraVictory::
# 119 "data/maps/Route133/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 120 "data/maps/Route133/scripts.pory"
waitmovement 0
# 121 "data/maps/Route133/scripts.pory"
msgbox Route133_Text_FranklinPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route133/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 123 "data/maps/Route133/scripts.pory"
waitmovement 0
# 124 "data/maps/Route133/scripts.pory"
msgbox Route133_Text_DebraPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route133/scripts.pory"
addvar VAR_ROUTE132_STATE, 1
# 126 "data/maps/Route133/scripts.pory"
end
# 127 "data/maps/Route133/scripts.pory"

# 128 "data/maps/Route133/scripts.pory"
Route133_EventScript_Franklin::
# 129 "data/maps/Route133/scripts.pory"
	faceplayer
# 130 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_FranklinPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route133/scripts.pory"
	end
# 132 "data/maps/Route133/scripts.pory"

# 133 "data/maps/Route133/scripts.pory"
Route133_EventScript_Debra::
# 134 "data/maps/Route133/scripts.pory"
	faceplayer
# 135 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_DebraPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route133/scripts.pory"
	end
# 137 "data/maps/Route133/scripts.pory"

# 138 "data/maps/Route133/scripts.pory"
Route133_EventScript_Linda::
# 139 "data/maps/Route133/scripts.pory"
	faceplayer
# 140 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_LindaPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route133/scripts.pory"
	end
# 142 "data/maps/Route133/scripts.pory"

# 143 "data/maps/Route133/scripts.pory"
Route133_EventScript_Warren::
# 144 "data/maps/Route133/scripts.pory"
	faceplayer
# 145 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route133/scripts.pory"
	end
# 147 "data/maps/Route133/scripts.pory"

# 148 "data/maps/Route133/scripts.pory"
Route133_EventScript_Beck::
# 149 "data/maps/Route133/scripts.pory"
	faceplayer
# 150 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_BeckPostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route133/scripts.pory"
	end
# 152 "data/maps/Route133/scripts.pory"

# 153 "data/maps/Route133/scripts.pory"
Route133_EventScript_Mollie::
# 154 "data/maps/Route133/scripts.pory"
	faceplayer
# 155 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_MolliePostBattle, MSGBOX_AUTOCLOSE
# 156 "data/maps/Route133/scripts.pory"
	end
# 157 "data/maps/Route133/scripts.pory"

# 158 "data/maps/Route133/scripts.pory"
Route133_EventScript_Conor::
# 159 "data/maps/Route133/scripts.pory"
	faceplayer
# 160 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_ConorPostBattle, MSGBOX_AUTOCLOSE
# 161 "data/maps/Route133/scripts.pory"
	end
