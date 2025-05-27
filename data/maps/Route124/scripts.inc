# 1 "data/maps/Route124/scripts.pory"

# 2 "data/maps/Route124/scripts.pory"
	.set LOCALID_GRACE, 4
# 3 "data/maps/Route124/scripts.pory"
	.set LOCALID_DECLAN, 11
# 4 "data/maps/Route124/scripts.pory"

# 5 "data/maps/Route124/scripts.pory"
Route124_MapScripts::
# 6 "data/maps/Route124/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_OnTransition
# 7 "data/maps/Route124/scripts.pory"
	.byte 0
# 8 "data/maps/Route124/scripts.pory"

# 9 "data/maps/Route124/scripts.pory"
Route124_OnTransition:
# 10 "data/maps/Route124/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 11 "data/maps/Route124/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 12 "data/maps/Route124/scripts.pory"
	end
# 13 "data/maps/Route124/scripts.pory"

# 14 "data/maps/Route124/scripts.pory"
Route124_EventScript_HuntersHouseSign::
# 15 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_HuntersHouse, MSGBOX_SIGN
# 16 "data/maps/Route124/scripts.pory"
	end
# 17 "data/maps/Route124/scripts.pory"

# 18 "data/maps/Route124/scripts.pory"
Route124_EventScript_Spencer::
# 19 "data/maps/Route124/scripts.pory"
	faceplayer
# 20 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
# 21 "data/maps/Route124/scripts.pory"
	end
# 22 "data/maps/Route124/scripts.pory"

# 23 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roland::
# 24 "data/maps/Route124/scripts.pory"
	faceplayer
# 25 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
# 26 "data/maps/Route124/scripts.pory"
	end
# 27 "data/maps/Route124/scripts.pory"

# 28 "data/maps/Route124/scripts.pory"
Route124_EventScript_Jenny::
# 29 "data/maps/Route124/scripts.pory"
	faceplayer
# 30 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostBattle, MSGBOX_DEFAULT
# 31 "data/maps/Route124/scripts.pory"
	release
# 32 "data/maps/Route124/scripts.pory"
	end
# 33 "data/maps/Route124/scripts.pory"

# 34 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterJenny::
# 35 "data/maps/Route124/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 36 "data/maps/Route124/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyRegister, MSGBOX_DEFAULT
# 38 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_JENNY_1
# 39 "data/maps/Route124/scripts.pory"
	release
# 40 "data/maps/Route124/scripts.pory"
	end
# 41 "data/maps/Route124/scripts.pory"

# 42 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchJenny::
# 43 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch TRAINER_JENNY_1, Route124_Text_JennyRematchIntro, Route124_Text_JennyRematchDefeat
# 44 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostRematch, MSGBOX_AUTOCLOSE
# 45 "data/maps/Route124/scripts.pory"
	end
# 46 "data/maps/Route124/scripts.pory"

# 47 "data/maps/Route124/scripts.pory"
Route124_EventScript_GraceDeclan::
# 48 "data/maps/Route124/scripts.pory"
lockall
# 49 "data/maps/Route124/scripts.pory"
playse SE_PIN
# 50 "data/maps/Route124/scripts.pory"
applymovement  LOCALID_DECLAN, Common_Movement_ExclamationMark
# 51 "data/maps/Route124/scripts.pory"
waitmovement 0
# 52 "data/maps/Route124/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 53 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 54 "data/maps/Route124/scripts.pory"
waitmovement 0
# 55 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_GraceIntro MSGBOX_AUTOCLOSE
# 56 "data/maps/Route124/scripts.pory"
playse SE_PIN
# 57 "data/maps/Route124/scripts.pory"
applymovement  LOCALID_DECLAN, Common_Movement_ExclamationMark
# 58 "data/maps/Route124/scripts.pory"
waitmovement 0
# 59 "data/maps/Route124/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 60 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 61 "data/maps/Route124/scripts.pory"
waitmovement 0
# 62 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_DeclanIntro MSGBOX_AUTOCLOSE
# 63 "data/maps/Route124/scripts.pory"
goto Route124_EventScript_GraceDeclanDoMultiBattle
# 64 "data/maps/Route124/scripts.pory"
releaseall
# 65 "data/maps/Route124/scripts.pory"
end
# 66 "data/maps/Route124/scripts.pory"

# 67 "data/maps/Route124/scripts.pory"
Route124_EventScript_GraceDeclanDoMultiBattle::
# 68 "data/maps/Route124/scripts.pory"
playbgm MUS_SURF, TRUE
# 69 "data/maps/Route124/scripts.pory"
multi_2p_vs_2 TRAINER_GRACE, Route124_Text_GraceDefeat, TRAINER_DECLAN, Route124_Text_DeclanDefeat, PARTNER_EMMIE
# 70 "data/maps/Route124/scripts.pory"
switch VAR_RESULT
# 71 "data/maps/Route124/scripts.pory"
case 1, Route124_EventScript_GraceDeclanVictory
# 72 "data/maps/Route124/scripts.pory"
fadescreen FADE_TO_BLACK
# 73 "data/maps/Route124/scripts.pory"
special SetCB2WhiteOut
# 74 "data/maps/Route124/scripts.pory"
waitstate
# 75 "data/maps/Route124/scripts.pory"

# 76 "data/maps/Route124/scripts.pory"
Route124_EventScript_GraceDeclanVictory::
# 77 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 78 "data/maps/Route124/scripts.pory"
waitmovement 0
# 79 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 81 "data/maps/Route124/scripts.pory"
waitmovement 0
# 82 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route124/scripts.pory"
addvar VAR_ROUTE124_STATE, 1
# 84 "data/maps/Route124/scripts.pory"
end
# 85 "data/maps/Route124/scripts.pory"

# 86 "data/maps/Route124/scripts.pory"
Route124_EventScript_Grace::
# 87 "data/maps/Route124/scripts.pory"
	faceplayer
# 88 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route124/scripts.pory"
	end
# 90 "data/maps/Route124/scripts.pory"

# 91 "data/maps/Route124/scripts.pory"
Route124_EventScript_Chad::
# 92 "data/maps/Route124/scripts.pory"
	faceplayer
# 93 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_ChadPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route124/scripts.pory"
	end
# 95 "data/maps/Route124/scripts.pory"

# 96 "data/maps/Route124/scripts.pory"
Route124_EventScript_Lila::
# 97 "data/maps/Route124/scripts.pory"
	faceplayer
# 98 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostBattle, MSGBOX_DEFAULT
# 99 "data/maps/Route124/scripts.pory"
	release
# 100 "data/maps/Route124/scripts.pory"
	end
# 101 "data/maps/Route124/scripts.pory"

# 102 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterLila::
# 103 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 104 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 105 "data/maps/Route124/scripts.pory"
	release
# 106 "data/maps/Route124/scripts.pory"
	end
# 107 "data/maps/Route124/scripts.pory"

# 108 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchLila::
# 109 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaRematchIntro, Route124_Text_LilaRematchDefeat, Route124_Text_LilaRematchNotEnoughMons
# 110 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostRematch, MSGBOX_AUTOCLOSE
# 111 "data/maps/Route124/scripts.pory"
	end
# 112 "data/maps/Route124/scripts.pory"

# 113 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roy::
# 114 "data/maps/Route124/scripts.pory"
	faceplayer
# 115 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostBattle, MSGBOX_DEFAULT
# 116 "data/maps/Route124/scripts.pory"
	release
# 117 "data/maps/Route124/scripts.pory"
	end
# 118 "data/maps/Route124/scripts.pory"

# 119 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterRoy::
# 120 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 121 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 122 "data/maps/Route124/scripts.pory"
	release
# 123 "data/maps/Route124/scripts.pory"
	end
# 124 "data/maps/Route124/scripts.pory"

# 125 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchRoy::
# 126 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyRematchIntro, Route124_Text_RoyRematchDefeat, Route124_Text_RoyRematchNotEnoughMons
# 127 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostRematch, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route124/scripts.pory"
	end
# 129 "data/maps/Route124/scripts.pory"

# 130 "data/maps/Route124/scripts.pory"
Route124_EventScript_Declan::
# 131 "data/maps/Route124/scripts.pory"
	faceplayer
# 132 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/Route124/scripts.pory"
	end
# 134 "data/maps/Route124/scripts.pory"

# 135 "data/maps/Route124/scripts.pory"
Route124_EventScript_Isabella::
# 136 "data/maps/Route124/scripts.pory"
	faceplayer
# 137 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route124/scripts.pory"
	end
# 139 "data/maps/Route124/scripts.pory"

# 140 "data/maps/Route124/scripts.pory"
Route124_Text_HuntersHouse:
# 141 "data/maps/Route124/scripts.pory"
	.string "HUNTER'S HOUSE$"
