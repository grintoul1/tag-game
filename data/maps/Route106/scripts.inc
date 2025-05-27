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
	end
# 12 "data/maps/Route106/scripts.pory"

# 13 "data/maps/Route106/scripts.pory"
Route106_EventScript_TrainerTipsSign::
# 14 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
# 15 "data/maps/Route106/scripts.pory"
	end
# 16 "data/maps/Route106/scripts.pory"

# 17 "data/maps/Route106/scripts.pory"
Route106_EventScript_Douglas::
# 18 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 19 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 20 "data/maps/Route106/scripts.pory"
	end
# 21 "data/maps/Route106/scripts.pory"

# 22 "data/maps/Route106/scripts.pory"
Route106_EventScript_Kyla::
# 23 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 24 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
# 25 "data/maps/Route106/scripts.pory"
	end
# 26 "data/maps/Route106/scripts.pory"

# 27 "data/maps/Route106/scripts.pory"
Route106_EventScript_NedElliot::
# 28 "data/maps/Route106/scripts.pory"
lockall
# 29 "data/maps/Route106/scripts.pory"
setvar VAR_0x8008, LOCALID_NED
# 30 "data/maps/Route106/scripts.pory"
playse SE_PIN
# 31 "data/maps/Route106/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 32 "data/maps/Route106/scripts.pory"
waitmovement 0
# 33 "data/maps/Route106/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 34 "data/maps/Route106/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/Route106/scripts.pory"
waitmovement 0
# 36 "data/maps/Route106/scripts.pory"
msgbox Route106_Text_NedIntro MSGBOX_AUTOCLOSE
# 37 "data/maps/Route106/scripts.pory"
setvar VAR_0x8008, LOCALID_ELLIOT
# 38 "data/maps/Route106/scripts.pory"
playse SE_PIN
# 39 "data/maps/Route106/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 40 "data/maps/Route106/scripts.pory"
waitmovement 0
# 41 "data/maps/Route106/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 42 "data/maps/Route106/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 43 "data/maps/Route106/scripts.pory"
waitmovement 0
# 44 "data/maps/Route106/scripts.pory"
msgbox Route106_Text_ElliotIntro, MSGBOX_AUTOCLOSE
# 45 "data/maps/Route106/scripts.pory"
goto Route106_EventScript_NedElliotDoMultiBattle
# 46 "data/maps/Route106/scripts.pory"
releaseall
# 47 "data/maps/Route106/scripts.pory"
end
# 48 "data/maps/Route106/scripts.pory"

# 49 "data/maps/Route106/scripts.pory"
Route106_EventScript_NedElliotDoMultiBattle::
# 50 "data/maps/Route106/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 51 "data/maps/Route106/scripts.pory"
multi_2p_vs_2 TRAINER_NED, Route106_Text_NedDefeated, TRAINER_ELLIOT_1, Route106_Text_ElliotDefeated, PARTNER_EMMIE
# 52 "data/maps/Route106/scripts.pory"
switch VAR_RESULT
# 53 "data/maps/Route106/scripts.pory"
case 1, Route106_EventScript_NedElliotVictory
# 54 "data/maps/Route106/scripts.pory"
fadescreen FADE_TO_BLACK
# 55 "data/maps/Route106/scripts.pory"
special SetCB2WhiteOut
# 56 "data/maps/Route106/scripts.pory"
waitstate
# 57 "data/maps/Route106/scripts.pory"

# 58 "data/maps/Route106/scripts.pory"
Route106_EventScript_NedElliotVictory::
# 59 "data/maps/Route106/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 60 "data/maps/Route106/scripts.pory"
waitmovement 0
# 61 "data/maps/Route106/scripts.pory"
msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route106/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 63 "data/maps/Route106/scripts.pory"
waitmovement 0
# 64 "data/maps/Route106/scripts.pory"
msgbox Route106_Text_ElliotPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route106/scripts.pory"
addvar VAR_ROUTE106_STATE, 1
# 66 "data/maps/Route106/scripts.pory"
end
# 67 "data/maps/Route106/scripts.pory"

# 68 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot::
# 69 "data/maps/Route106/scripts.pory"
	faceplayer
# 70 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
# 71 "data/maps/Route106/scripts.pory"
	release
# 72 "data/maps/Route106/scripts.pory"
	end
# 73 "data/maps/Route106/scripts.pory"

# 74 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
# 75 "data/maps/Route106/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 76 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
# 78 "data/maps/Route106/scripts.pory"
	register_matchcall TRAINER_ELLIOT_1
# 79 "data/maps/Route106/scripts.pory"
	release
# 80 "data/maps/Route106/scripts.pory"
	end
# 81 "data/maps/Route106/scripts.pory"

# 82 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRematch::
# 83 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route106/scripts.pory"
	end
# 85 "data/maps/Route106/scripts.pory"

# 86 "data/maps/Route106/scripts.pory"
Route106_EventScript_Ned::
# 87 "data/maps/Route106/scripts.pory"
	faceplayer
# 88 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 89 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route106/scripts.pory"
	end
# 91 "data/maps/Route106/scripts.pory"

# 92 "data/maps/Route106/scripts.pory"
Route106_Text_TrainerTips:
# 93 "data/maps/Route106/scripts.pory"
	.string "TRAINER TIPS\p"
# 94 "data/maps/Route106/scripts.pory"
	.string "Advice on catching POKéMON with a ROD:\n"
# 95 "data/maps/Route106/scripts.pory"
	.string "Press the A Button if you get a bite.$"
