# 1 "data/maps/Route130/scripts.pory"

# 2 "data/maps/Route130/scripts.pory"
.set LOCALID_KATIE, 2
# 3 "data/maps/Route130/scripts.pory"
.set LOCALID_SANTIAGO, 4
# 4 "data/maps/Route130/scripts.pory"
.set LOCALID_RODNEY, 1
# 5 "data/maps/Route130/scripts.pory"

# 6 "data/maps/Route130/scripts.pory"
Route130_MapScripts::
# 7 "data/maps/Route130/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route130_OnTransition
# 8 "data/maps/Route130/scripts.pory"
	.byte 0
# 9 "data/maps/Route130/scripts.pory"

# 10 "data/maps/Route130/scripts.pory"
Route130_OnTransition:
# 11 "data/maps/Route130/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_RAIN, Common_EventScript_SetWeatherIntenseRain
# 12 "data/maps/Route130/scripts.pory"
	specialvar VAR_RESULT, IsMirageIslandPresent
# 13 "data/maps/Route130/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route130_EventScript_SetMirageIslandLayout
# 14 "data/maps/Route130/scripts.pory"
@ Mirage Island isn't currently visible, hide any objects on the island. Only the first flag is actually associated with anything.
# 15 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_HIDE_MIRAGE_ISLAND_BERRY_TREE
# 16 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_12
# 17 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_13
# 18 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_14
# 19 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_15
# 20 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_16
# 21 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_17
# 22 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_18
# 23 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_19
# 24 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1A
# 25 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1B
# 26 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1C
# 27 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1D
# 28 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1E
# 29 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1F
# 30 "data/maps/Route130/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE130
# 31 "data/maps/Route130/scripts.pory"
	end
# 32 "data/maps/Route130/scripts.pory"

# 33 "data/maps/Route130/scripts.pory"
Route130_EventScript_SetMirageIslandLayout::
# 34 "data/maps/Route130/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE130_MIRAGE_ISLAND
# 35 "data/maps/Route130/scripts.pory"
	end
# 36 "data/maps/Route130/scripts.pory"

# 37 "data/maps/Route130/scripts.pory"
Route130_EventScript_CheckSetAbnormalWeather::
# 38 "data/maps/Route130/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 39 "data/maps/Route130/scripts.pory"
	return
# 40 "data/maps/Route130/scripts.pory"

# 41 "data/maps/Route130/scripts.pory"
Route130_EventScript_KatieSantiago::
# 42 "data/maps/Route130/scripts.pory"
lockall
# 43 "data/maps/Route130/scripts.pory"
playse SE_PIN
# 44 "data/maps/Route130/scripts.pory"
applymovement LOCALID_KATIE, Common_Movement_ExclamationMark
# 45 "data/maps/Route130/scripts.pory"
waitmovement 0
# 46 "data/maps/Route130/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 47 "data/maps/Route130/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 48 "data/maps/Route130/scripts.pory"
waitmovement 0
# 49 "data/maps/Route130/scripts.pory"
msgbox Route130_Text_KatieIntro MSGBOX_AUTOCLOSE
# 50 "data/maps/Route130/scripts.pory"
playse SE_PIN
# 51 "data/maps/Route130/scripts.pory"
applymovement  LOCALID_SANTIAGO, Common_Movement_ExclamationMark
# 52 "data/maps/Route130/scripts.pory"
waitmovement 0
# 53 "data/maps/Route130/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 54 "data/maps/Route130/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 55 "data/maps/Route130/scripts.pory"
waitmovement 0
# 56 "data/maps/Route130/scripts.pory"
msgbox Route130_Text_SantiagoIntro MSGBOX_AUTOCLOSE
# 57 "data/maps/Route130/scripts.pory"
goto Route130_EventScript_KatieSantiagoDoMultiBattle
# 58 "data/maps/Route130/scripts.pory"
releaseall
# 59 "data/maps/Route130/scripts.pory"
end
# 60 "data/maps/Route130/scripts.pory"

# 61 "data/maps/Route130/scripts.pory"
Route130_EventScript_KatieSantiagoDoMultiBattle::
# 62 "data/maps/Route130/scripts.pory"
playbgm MUS_SURF, TRUE
# 63 "data/maps/Route130/scripts.pory"
multi_2p_vs_2 TRAINER_KATIE, Route130_Text_KatieDefeat, TRAINER_SANTIAGO, Route130_Text_SantiagoDefeat, PARTNER_EMMIE
# 64 "data/maps/Route130/scripts.pory"
switch VAR_RESULT
# 65 "data/maps/Route130/scripts.pory"
case 1, Route130_EventScript_KatieSantiagoVictory
# 66 "data/maps/Route130/scripts.pory"
fadescreen FADE_TO_BLACK
# 67 "data/maps/Route130/scripts.pory"
special SetCB2WhiteOut
# 68 "data/maps/Route130/scripts.pory"
waitstate
# 69 "data/maps/Route130/scripts.pory"

# 70 "data/maps/Route130/scripts.pory"
Route130_EventScript_KatieSantiagoVictory::
# 71 "data/maps/Route130/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 72 "data/maps/Route130/scripts.pory"
waitmovement 0
# 73 "data/maps/Route130/scripts.pory"
msgbox Route130_Text_KatiePostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route130/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 75 "data/maps/Route130/scripts.pory"
waitmovement 0
# 76 "data/maps/Route130/scripts.pory"
msgbox Route130_Text_SantiagoPostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route130/scripts.pory"
addvar VAR_ROUTE130_STATE, 1
# 78 "data/maps/Route130/scripts.pory"
end
# 79 "data/maps/Route130/scripts.pory"

# 80 "data/maps/Route130/scripts.pory"
Route130_EventScript_RodneyBattle::
# 81 "data/maps/Route130/scripts.pory"
lockall
# 82 "data/maps/Route130/scripts.pory"
playse SE_PIN
# 83 "data/maps/Route130/scripts.pory"
applymovement  LOCALID_RODNEY, Common_Movement_ExclamationMark
# 84 "data/maps/Route130/scripts.pory"
waitmovement 0
# 85 "data/maps/Route130/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 86 "data/maps/Route130/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 87 "data/maps/Route130/scripts.pory"
waitmovement 0
# 88 "data/maps/Route130/scripts.pory"
msgbox Route130_Text_RodneyIntro MSGBOX_AUTOCLOSE
# 89 "data/maps/Route130/scripts.pory"
goto Route130_EventScript_RodneyDoMultiBattle
# 90 "data/maps/Route130/scripts.pory"
releaseall
# 91 "data/maps/Route130/scripts.pory"
end
# 92 "data/maps/Route130/scripts.pory"

# 93 "data/maps/Route130/scripts.pory"
Route130_EventScript_RodneyDoMultiBattle::
# 94 "data/maps/Route130/scripts.pory"
playbgm MUS_SURF, TRUE
# 95 "data/maps/Route130/scripts.pory"
multi_2p_vs_1 TRAINER_RODNEY, Route130_Text_RodneyDefeat, PARTNER_EMMIE
# 96 "data/maps/Route130/scripts.pory"
switch VAR_RESULT
# 97 "data/maps/Route130/scripts.pory"
case 1, Route130_EventScript_RodneyVictory
# 98 "data/maps/Route130/scripts.pory"
fadescreen FADE_TO_BLACK
# 99 "data/maps/Route130/scripts.pory"
special SetCB2WhiteOut
# 100 "data/maps/Route130/scripts.pory"
waitstate
# 101 "data/maps/Route130/scripts.pory"

# 102 "data/maps/Route130/scripts.pory"
Route130_EventScript_RodneyVictory::
# 103 "data/maps/Route130/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 104 "data/maps/Route130/scripts.pory"
waitmovement 0
# 105 "data/maps/Route130/scripts.pory"
msgbox Route130_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/Route130/scripts.pory"
addvar VAR_ROUTE130_STATE, 1
# 107 "data/maps/Route130/scripts.pory"
end
# 108 "data/maps/Route130/scripts.pory"

# 109 "data/maps/Route130/scripts.pory"
Route130_EventScript_Rodney::
# 110 "data/maps/Route130/scripts.pory"
	faceplayer
# 111 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/Route130/scripts.pory"
	end
# 113 "data/maps/Route130/scripts.pory"

# 114 "data/maps/Route130/scripts.pory"
Route130_EventScript_Katie::
# 115 "data/maps/Route130/scripts.pory"
	faceplayer
# 116 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_KatiePostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route130/scripts.pory"
	end
# 118 "data/maps/Route130/scripts.pory"

# 119 "data/maps/Route130/scripts.pory"
Route130_EventScript_Santiago::
# 120 "data/maps/Route130/scripts.pory"
	faceplayer
# 121 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_SantiagoPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route130/scripts.pory"
	end
