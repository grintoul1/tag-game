# 1 "data/maps/Route106/scripts.pory"

# 2 "data/maps/Route106/scripts.pory"
.set LOCALID_ELLIOT, 3
# 3 "data/maps/Route106/scripts.pory"
.set LOCALID_NED, 4
# 4 "data/maps/Route106/scripts.pory"

# 5 "data/maps/Route106/scripts.pory"
Route106_MapScripts::
# 6 "data/maps/Route106/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route106_OnTransition
# 7 "data/maps/Route106/scripts.pory"
	.byte 0
# 8 "data/maps/Route106/scripts.pory"

# 9 "data/maps/Route106/scripts.pory"
Route106_OnTransition:
# 10 "data/maps/Route106/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 11 "data/maps/Route106/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 12 "data/maps/Route106/scripts.pory"
	end
# 13 "data/maps/Route106/scripts.pory"

# 14 "data/maps/Route106/scripts.pory"
Route106_EventScript_TrainerTipsSign::
# 15 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
# 16 "data/maps/Route106/scripts.pory"
	end
# 17 "data/maps/Route106/scripts.pory"

# 18 "data/maps/Route106/scripts.pory"
Route106_EventScript_Douglas::
# 19 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 20 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 21 "data/maps/Route106/scripts.pory"
	end
# 22 "data/maps/Route106/scripts.pory"

# 23 "data/maps/Route106/scripts.pory"
Route106_EventScript_Kyla::
# 24 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 25 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
# 26 "data/maps/Route106/scripts.pory"
	end
# 27 "data/maps/Route106/scripts.pory"

# 28 "data/maps/Route106/scripts.pory"
Route106_EventScript_NedElliot::
# 29 "data/maps/Route106/scripts.pory"
lockall
# 30 "data/maps/Route106/scripts.pory"
setvar VAR_0x8008, LOCALID_NED
# 31 "data/maps/Route106/scripts.pory"
playse SE_PIN
# 32 "data/maps/Route106/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 33 "data/maps/Route106/scripts.pory"
waitmovement 0
# 34 "data/maps/Route106/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 35 "data/maps/Route106/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 36 "data/maps/Route106/scripts.pory"
waitmovement 0
# 37 "data/maps/Route106/scripts.pory"
msgbox Route106_Text_NedIntro MSGBOX_AUTOCLOSE
# 38 "data/maps/Route106/scripts.pory"
setvar VAR_0x8008, LOCALID_ELLIOT
# 39 "data/maps/Route106/scripts.pory"
playse SE_PIN
# 40 "data/maps/Route106/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 41 "data/maps/Route106/scripts.pory"
waitmovement 0
# 42 "data/maps/Route106/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 43 "data/maps/Route106/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 44 "data/maps/Route106/scripts.pory"
waitmovement 0
# 45 "data/maps/Route106/scripts.pory"
msgbox Route106_Text_ElliotIntro, MSGBOX_AUTOCLOSE
# 46 "data/maps/Route106/scripts.pory"
goto Route106_EventScript_NedElliotDoMultiBattle
# 47 "data/maps/Route106/scripts.pory"
releaseall
# 48 "data/maps/Route106/scripts.pory"
end
# 49 "data/maps/Route106/scripts.pory"

# 50 "data/maps/Route106/scripts.pory"
Route106_EventScript_NedElliotDoMultiBattle::
# 51 "data/maps/Route106/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 52 "data/maps/Route106/scripts.pory"
multi_2p_vs_2 TRAINER_NED, Route106_Text_NedDefeated, TRAINER_ELLIOT_1, Route106_Text_ElliotDefeated, PARTNER_EMMIE
# 53 "data/maps/Route106/scripts.pory"
switch VAR_RESULT
# 54 "data/maps/Route106/scripts.pory"
case 1, Route106_EventScript_NedElliotVictory
# 55 "data/maps/Route106/scripts.pory"
fadescreen FADE_TO_BLACK
# 56 "data/maps/Route106/scripts.pory"
special SetCB2WhiteOut
# 57 "data/maps/Route106/scripts.pory"
waitstate
# 58 "data/maps/Route106/scripts.pory"

# 59 "data/maps/Route106/scripts.pory"
Route106_EventScript_NedElliotVictory::
# 60 "data/maps/Route106/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/Route106/scripts.pory"
waitmovement 0
# 62 "data/maps/Route106/scripts.pory"
msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/Route106/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 64 "data/maps/Route106/scripts.pory"
waitmovement 0
# 65 "data/maps/Route106/scripts.pory"
msgbox Route106_Text_ElliotPostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/Route106/scripts.pory"
addvar VAR_ROUTE106_STATE, 1
# 67 "data/maps/Route106/scripts.pory"
end
# 68 "data/maps/Route106/scripts.pory"

# 69 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot::
# 70 "data/maps/Route106/scripts.pory"
	faceplayer
# 71 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
# 72 "data/maps/Route106/scripts.pory"
	release
# 73 "data/maps/Route106/scripts.pory"
	end
# 74 "data/maps/Route106/scripts.pory"

# 75 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
# 76 "data/maps/Route106/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 77 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
# 79 "data/maps/Route106/scripts.pory"
	register_matchcall TRAINER_ELLIOT_1
# 80 "data/maps/Route106/scripts.pory"
	release
# 81 "data/maps/Route106/scripts.pory"
	end
# 82 "data/maps/Route106/scripts.pory"

# 83 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRematch::
# 84 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route106/scripts.pory"
	end
# 86 "data/maps/Route106/scripts.pory"

# 87 "data/maps/Route106/scripts.pory"
Route106_EventScript_Ned::
# 88 "data/maps/Route106/scripts.pory"
	faceplayer
# 89 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 90 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route106/scripts.pory"
	end
# 92 "data/maps/Route106/scripts.pory"

# 93 "data/maps/Route106/scripts.pory"
Route106_Text_TrainerTips:
# 94 "data/maps/Route106/scripts.pory"
	.string "TRAINER TIPS\p"
# 95 "data/maps/Route106/scripts.pory"
	.string "Advice on catching POKéMON with a ROD:\n"
# 96 "data/maps/Route106/scripts.pory"
	.string "Press the A Button if you get a bite.$"
