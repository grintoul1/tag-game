# 1 "data/maps/Route124/scripts.pory"

# 2 "data/maps/Route124/scripts.pory"
Route124_MapScripts::
# 3 "data/maps/Route124/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_OnTransition
# 4 "data/maps/Route124/scripts.pory"
	.byte 0
# 5 "data/maps/Route124/scripts.pory"

# 6 "data/maps/Route124/scripts.pory"
Route124_OnTransition:
# 7 "data/maps/Route124/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 8 "data/maps/Route124/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 9 "data/maps/Route124/scripts.pory"
	end
# 10 "data/maps/Route124/scripts.pory"

# 11 "data/maps/Route124/scripts.pory"
Route124_EventScript_HuntersHouseSign::
# 12 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_HuntersHouse, MSGBOX_SIGN
# 13 "data/maps/Route124/scripts.pory"
	end
# 14 "data/maps/Route124/scripts.pory"

# 15 "data/maps/Route124/scripts.pory"
Route124_EventScript_Spencer::
# 16 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_SPENCER, Route124_Text_SpencerIntro, Route124_Text_SpencerDefeat
# 17 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/Route124/scripts.pory"
	end
# 19 "data/maps/Route124/scripts.pory"

# 20 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roland::
# 21 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_ROLAND, Route124_Text_RolandIntro, Route124_Text_RolandDefeat
# 22 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/Route124/scripts.pory"
	end
# 24 "data/maps/Route124/scripts.pory"

# 25 "data/maps/Route124/scripts.pory"
Route124_EventScript_Jenny::
# 26 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_JENNY_1, Route124_Text_JennyIntro, Route124_Text_JennyDefeat, Route124_EventScript_RegisterJenny
# 27 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 28 "data/maps/Route124/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchJenny
# 29 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostBattle, MSGBOX_DEFAULT
# 30 "data/maps/Route124/scripts.pory"
	release
# 31 "data/maps/Route124/scripts.pory"
	end
# 32 "data/maps/Route124/scripts.pory"

# 33 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterJenny::
# 34 "data/maps/Route124/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 35 "data/maps/Route124/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyRegister, MSGBOX_DEFAULT
# 37 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_JENNY_1
# 38 "data/maps/Route124/scripts.pory"
	release
# 39 "data/maps/Route124/scripts.pory"
	end
# 40 "data/maps/Route124/scripts.pory"

# 41 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchJenny::
# 42 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch TRAINER_JENNY_1, Route124_Text_JennyRematchIntro, Route124_Text_JennyRematchDefeat
# 43 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostRematch, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route124/scripts.pory"
	end
# 45 "data/maps/Route124/scripts.pory"

# 46 "data/maps/Route124/scripts.pory"
Route124_EventScript_Grace::
# 47 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_GRACE, Route124_Text_GraceIntro, Route124_Text_GraceDefeat
# 48 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route124/scripts.pory"
	end
# 50 "data/maps/Route124/scripts.pory"

# 51 "data/maps/Route124/scripts.pory"
Route124_EventScript_Chad::
# 52 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_CHAD, Route124_Text_ChadIntro, Route124_Text_ChadDefeat
# 53 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_ChadPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route124/scripts.pory"
	end
# 55 "data/maps/Route124/scripts.pory"

# 56 "data/maps/Route124/scripts.pory"
Route124_EventScript_Lila::
# 57 "data/maps/Route124/scripts.pory"
	trainerbattle_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaIntro, Route124_Text_LilaDefeat, Route124_Text_LilaNotEnoughMons, Route124_EventScript_RegisterLila
# 58 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 59 "data/maps/Route124/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchLila
# 60 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostBattle, MSGBOX_DEFAULT
# 61 "data/maps/Route124/scripts.pory"
	release
# 62 "data/maps/Route124/scripts.pory"
	end
# 63 "data/maps/Route124/scripts.pory"

# 64 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterLila::
# 65 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 66 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 67 "data/maps/Route124/scripts.pory"
	release
# 68 "data/maps/Route124/scripts.pory"
	end
# 69 "data/maps/Route124/scripts.pory"

# 70 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchLila::
# 71 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaRematchIntro, Route124_Text_LilaRematchDefeat, Route124_Text_LilaRematchNotEnoughMons
# 72 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostRematch, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route124/scripts.pory"
	end
# 74 "data/maps/Route124/scripts.pory"

# 75 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roy::
# 76 "data/maps/Route124/scripts.pory"
	trainerbattle_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyIntro, Route124_Text_RoyDefeat, Route124_Text_RoyNotEnoughMons, Route124_EventScript_RegisterRoy
# 77 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 78 "data/maps/Route124/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchRoy
# 79 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostBattle, MSGBOX_DEFAULT
# 80 "data/maps/Route124/scripts.pory"
	release
# 81 "data/maps/Route124/scripts.pory"
	end
# 82 "data/maps/Route124/scripts.pory"

# 83 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterRoy::
# 84 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 85 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 86 "data/maps/Route124/scripts.pory"
	release
# 87 "data/maps/Route124/scripts.pory"
	end
# 88 "data/maps/Route124/scripts.pory"

# 89 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchRoy::
# 90 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyRematchIntro, Route124_Text_RoyRematchDefeat, Route124_Text_RoyRematchNotEnoughMons
# 91 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostRematch, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route124/scripts.pory"
	end
# 93 "data/maps/Route124/scripts.pory"

# 94 "data/maps/Route124/scripts.pory"
Route124_EventScript_Declan::
# 95 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_DECLAN, Route124_Text_DeclanIntro, Route124_Text_DeclanDefeat
# 96 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route124/scripts.pory"
	end
# 98 "data/maps/Route124/scripts.pory"

# 99 "data/maps/Route124/scripts.pory"
Route124_EventScript_Isabella::
# 100 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_ISABELLA, Route124_Text_IsabellaIntro, Route124_Text_IsabellaDefeat
# 101 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route124/scripts.pory"
	end
# 103 "data/maps/Route124/scripts.pory"

# 104 "data/maps/Route124/scripts.pory"
Route124_Text_HuntersHouse:
# 105 "data/maps/Route124/scripts.pory"
	.string "HUNTER'S HOUSE$"
