# 1 "data/maps/Route108/scripts.pory"

# 2 "data/maps/Route108/scripts.pory"
Route108_MapScripts::
# 3 "data/maps/Route108/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route108_OnTransition
# 4 "data/maps/Route108/scripts.pory"
	.byte 0
# 5 "data/maps/Route108/scripts.pory"

# 6 "data/maps/Route108/scripts.pory"
Route108_OnTransition:
# 7 "data/maps/Route108/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 8 "data/maps/Route108/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 9 "data/maps/Route108/scripts.pory"
	end
# 10 "data/maps/Route108/scripts.pory"

# 11 "data/maps/Route108/scripts.pory"
Route108_EventScript_MissyMatthew::
# 12 "data/maps/Route108/scripts.pory"
lockall
# 13 "data/maps/Route108/scripts.pory"
playse SE_PIN
# 14 "data/maps/Route108/scripts.pory"
applymovement LOCALID_MISSY, Common_Movement_ExclamationMark
# 15 "data/maps/Route108/scripts.pory"
waitmovement 0
# 16 "data/maps/Route108/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 17 "data/maps/Route108/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 18 "data/maps/Route108/scripts.pory"
waitmovement 0
# 19 "data/maps/Route108/scripts.pory"
msgbox Route108_Text_MissyIntro MSGBOX_AUTOCLOSE
# 20 "data/maps/Route108/scripts.pory"
playse SE_PIN
# 21 "data/maps/Route108/scripts.pory"
applymovement  LOCALID_MATTHEW, Common_Movement_ExclamationMark
# 22 "data/maps/Route108/scripts.pory"
waitmovement 0
# 23 "data/maps/Route108/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 24 "data/maps/Route108/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 25 "data/maps/Route108/scripts.pory"
waitmovement 0
# 26 "data/maps/Route108/scripts.pory"
msgbox Route108_Text_MatthewIntro MSGBOX_AUTOCLOSE
# 27 "data/maps/Route108/scripts.pory"
goto Route108_EventScript_MissyMatthewDoMultiBattle
# 28 "data/maps/Route108/scripts.pory"
releaseall
# 29 "data/maps/Route108/scripts.pory"
end
# 30 "data/maps/Route108/scripts.pory"

# 31 "data/maps/Route108/scripts.pory"
Route108_EventScript_MissyMatthewDoMultiBattle::
# 32 "data/maps/Route108/scripts.pory"
playbgm MUS_SURF, TRUE
# 33 "data/maps/Route108/scripts.pory"
multi_2p_vs_2 TRAINER_MISSY, Route108_Text_MissyDefeated, TRAINER_MATTHEW, Route108_Text_MatthewDefeated, PARTNER_EMMIE
# 34 "data/maps/Route108/scripts.pory"
switch VAR_RESULT
# 35 "data/maps/Route108/scripts.pory"
case 1, Route108_EventScript_MissyMatthewVictory
# 36 "data/maps/Route108/scripts.pory"
fadescreen FADE_TO_BLACK
# 37 "data/maps/Route108/scripts.pory"
special SetCB2WhiteOut
# 38 "data/maps/Route108/scripts.pory"
waitstate
# 39 "data/maps/Route108/scripts.pory"

# 40 "data/maps/Route108/scripts.pory"
Route108_EventScript_MissyMatthewVictory::
# 41 "data/maps/Route108/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 42 "data/maps/Route108/scripts.pory"
waitmovement 0
# 43 "data/maps/Route108/scripts.pory"
msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route108/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 45 "data/maps/Route108/scripts.pory"
waitmovement 0
# 46 "data/maps/Route108/scripts.pory"
msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route108/scripts.pory"
addvar VAR_ROUTE108_MEGA_STATE, 1
# 48 "data/maps/Route108/scripts.pory"
end
# 49 "data/maps/Route108/scripts.pory"

# 50 "data/maps/Route108/scripts.pory"
Route108_EventScript_TaraJerome::
# 51 "data/maps/Route108/scripts.pory"
lockall
# 52 "data/maps/Route108/scripts.pory"
playse SE_PIN
# 53 "data/maps/Route108/scripts.pory"
applymovement LOCALID_TARA, Common_Movement_ExclamationMark
# 54 "data/maps/Route108/scripts.pory"
waitmovement 0
# 55 "data/maps/Route108/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 56 "data/maps/Route108/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 57 "data/maps/Route108/scripts.pory"
waitmovement 0
# 58 "data/maps/Route108/scripts.pory"
msgbox Route108_Text_TaraIntro MSGBOX_AUTOCLOSE
# 59 "data/maps/Route108/scripts.pory"
playse SE_PIN
# 60 "data/maps/Route108/scripts.pory"
applymovement  LOCALID_JEROME, Common_Movement_ExclamationMark
# 61 "data/maps/Route108/scripts.pory"
waitmovement 0
# 62 "data/maps/Route108/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 63 "data/maps/Route108/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 64 "data/maps/Route108/scripts.pory"
waitmovement 0
# 65 "data/maps/Route108/scripts.pory"
msgbox Route108_Text_JeromeIntro MSGBOX_AUTOCLOSE
# 66 "data/maps/Route108/scripts.pory"
goto Route108_EventScript_TaraJeromeDoMultiBattle
# 67 "data/maps/Route108/scripts.pory"
releaseall
# 68 "data/maps/Route108/scripts.pory"
end
# 69 "data/maps/Route108/scripts.pory"

# 70 "data/maps/Route108/scripts.pory"
Route108_EventScript_TaraJeromeDoMultiBattle::
# 71 "data/maps/Route108/scripts.pory"
playbgm MUS_SURF, TRUE
# 72 "data/maps/Route108/scripts.pory"
multi_2p_vs_2 TRAINER_TARA, Route108_Text_TaraDefeated, TRAINER_JEROME, Route108_Text_JeromeDefeated, PARTNER_EMMIE
# 73 "data/maps/Route108/scripts.pory"
switch VAR_RESULT
# 74 "data/maps/Route108/scripts.pory"
case 1, Route108_EventScript_TaraJeromeVictory
# 75 "data/maps/Route108/scripts.pory"
fadescreen FADE_TO_BLACK
# 76 "data/maps/Route108/scripts.pory"
special SetCB2WhiteOut
# 77 "data/maps/Route108/scripts.pory"
waitstate
# 78 "data/maps/Route108/scripts.pory"

# 79 "data/maps/Route108/scripts.pory"
Route108_EventScript_TaraJeromeVictory::
# 80 "data/maps/Route108/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 81 "data/maps/Route108/scripts.pory"
waitmovement 0
# 82 "data/maps/Route108/scripts.pory"
msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route108/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 84 "data/maps/Route108/scripts.pory"
waitmovement 0
# 85 "data/maps/Route108/scripts.pory"
msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route108/scripts.pory"
addvar VAR_ROUTE108_STATE, 1
# 87 "data/maps/Route108/scripts.pory"
end
# 88 "data/maps/Route108/scripts.pory"

# 89 "data/maps/Route108/scripts.pory"
Route108_EventScript_CarolinaCory::
# 90 "data/maps/Route108/scripts.pory"
lockall
# 91 "data/maps/Route108/scripts.pory"
playse SE_PIN
# 92 "data/maps/Route108/scripts.pory"
applymovement LOCALID_CAROLINA, Common_Movement_ExclamationMark
# 93 "data/maps/Route108/scripts.pory"
waitmovement 0
# 94 "data/maps/Route108/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 95 "data/maps/Route108/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 96 "data/maps/Route108/scripts.pory"
waitmovement 0
# 97 "data/maps/Route108/scripts.pory"
msgbox Route108_Text_CarolinaIntro MSGBOX_AUTOCLOSE
# 98 "data/maps/Route108/scripts.pory"
playse SE_PIN
# 99 "data/maps/Route108/scripts.pory"
applymovement  LOCALID_CORY, Common_Movement_ExclamationMark
# 100 "data/maps/Route108/scripts.pory"
waitmovement 0
# 101 "data/maps/Route108/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 102 "data/maps/Route108/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 103 "data/maps/Route108/scripts.pory"
waitmovement 0
# 104 "data/maps/Route108/scripts.pory"
msgbox Route108_Text_CoryIntro MSGBOX_AUTOCLOSE
# 105 "data/maps/Route108/scripts.pory"
goto Route108_EventScript_CarolinaCoryDoMultiBattle
# 106 "data/maps/Route108/scripts.pory"
releaseall
# 107 "data/maps/Route108/scripts.pory"
end
# 108 "data/maps/Route108/scripts.pory"

# 109 "data/maps/Route108/scripts.pory"
Route108_EventScript_CarolinaCoryDoMultiBattle::
# 110 "data/maps/Route108/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 111 "data/maps/Route108/scripts.pory"
multi_2p_vs_2 TRAINER_CAROLINA, Route108_Text_CarolinaDefeated, TRAINER_CORY_1, Route108_Text_CoryDefeated, PARTNER_EMMIE
# 112 "data/maps/Route108/scripts.pory"
switch VAR_RESULT
# 113 "data/maps/Route108/scripts.pory"
case 1, Route108_EventScript_CarolinaCoryVictory
# 114 "data/maps/Route108/scripts.pory"
fadescreen FADE_TO_BLACK
# 115 "data/maps/Route108/scripts.pory"
special SetCB2WhiteOut
# 116 "data/maps/Route108/scripts.pory"
waitstate
# 117 "data/maps/Route108/scripts.pory"

# 118 "data/maps/Route108/scripts.pory"
Route108_EventScript_CarolinaCoryVictory::
# 119 "data/maps/Route108/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 120 "data/maps/Route108/scripts.pory"
waitmovement 0
# 121 "data/maps/Route108/scripts.pory"
msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route108/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 123 "data/maps/Route108/scripts.pory"
waitmovement 0
# 124 "data/maps/Route108/scripts.pory"
msgbox Route108_Text_CoryPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route108/scripts.pory"
addvar VAR_ROUTE108_STATE, 1
# 126 "data/maps/Route108/scripts.pory"
end
# 127 "data/maps/Route108/scripts.pory"

# 128 "data/maps/Route108/scripts.pory"
Route108_EventScript_Jerome::
# 129 "data/maps/Route108/scripts.pory"
	faceplayer
# 130 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route108/scripts.pory"
	end
# 132 "data/maps/Route108/scripts.pory"

# 133 "data/maps/Route108/scripts.pory"
Route108_EventScript_Matthew::
# 134 "data/maps/Route108/scripts.pory"
	faceplayer
# 135 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route108/scripts.pory"
	end
# 137 "data/maps/Route108/scripts.pory"

# 138 "data/maps/Route108/scripts.pory"
Route108_EventScript_Tara::
# 139 "data/maps/Route108/scripts.pory"
	faceplayer
# 140 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route108/scripts.pory"
	end
# 142 "data/maps/Route108/scripts.pory"

# 143 "data/maps/Route108/scripts.pory"
Route108_EventScript_Missy::
# 144 "data/maps/Route108/scripts.pory"
	faceplayer
# 145 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route108/scripts.pory"
	end
# 147 "data/maps/Route108/scripts.pory"

# 148 "data/maps/Route108/scripts.pory"
Route108_EventScript_Carolina::
# 149 "data/maps/Route108/scripts.pory"
	faceplayer
# 150 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route108/scripts.pory"
	end
# 152 "data/maps/Route108/scripts.pory"

# 153 "data/maps/Route108/scripts.pory"
Route108_EventScript_Cory::
# 154 "data/maps/Route108/scripts.pory"
	faceplayer
# 155 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
# 156 "data/maps/Route108/scripts.pory"
	release
# 157 "data/maps/Route108/scripts.pory"
	end
# 158 "data/maps/Route108/scripts.pory"

# 159 "data/maps/Route108/scripts.pory"
Route108_EventScript_CoryRegisterMatchCallAfterBattle::
# 160 "data/maps/Route108/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 161 "data/maps/Route108/scripts.pory"
	waitmovement 0
# 162 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
# 163 "data/maps/Route108/scripts.pory"
	register_matchcall TRAINER_CORY_1
# 164 "data/maps/Route108/scripts.pory"
	release
# 165 "data/maps/Route108/scripts.pory"
	end
# 166 "data/maps/Route108/scripts.pory"

# 167 "data/maps/Route108/scripts.pory"
Route108_EventScript_CoryRematch::
# 168 "data/maps/Route108/scripts.pory"
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
# 169 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/Route108/scripts.pory"
	end
