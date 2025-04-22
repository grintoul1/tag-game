# 1 "data/maps/Route126/scripts.pory"

# 2 "data/maps/Route126/scripts.pory"
Route126_MapScripts::
# 3 "data/maps/Route126/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route126_OnTransition
# 4 "data/maps/Route126/scripts.pory"
	.byte 0
# 5 "data/maps/Route126/scripts.pory"

# 6 "data/maps/Route126/scripts.pory"
Route126_OnTransition:
# 7 "data/maps/Route126/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 8 "data/maps/Route126/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 9 "data/maps/Route126/scripts.pory"
	end
# 10 "data/maps/Route126/scripts.pory"

# 11 "data/maps/Route126/scripts.pory"
Route126_EventScript_Barry::
# 12 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_BARRY, Route126_Text_BarryIntro, Route126_Text_BarryDefeat
# 13 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BarryPostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/Route126/scripts.pory"
	end
# 15 "data/maps/Route126/scripts.pory"

# 16 "data/maps/Route126/scripts.pory"
Route126_EventScript_Dean::
# 17 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_DEAN, Route126_Text_DeanIntro, Route126_Text_DeanDefeat
# 18 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_DeanPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route126/scripts.pory"
	end
# 20 "data/maps/Route126/scripts.pory"

# 21 "data/maps/Route126/scripts.pory"
Route126_EventScript_Nikki::
# 22 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_NIKKI, Route126_Text_NikkiIntro, Route126_Text_NikkiDefeat
# 23 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route126/scripts.pory"
	end
# 25 "data/maps/Route126/scripts.pory"

# 26 "data/maps/Route126/scripts.pory"
Route126_EventScript_Brenda::
# 27 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_BRENDA, Route126_Text_BrendaIntro, Route126_Text_BrendaDefeat
# 28 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BrendaPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route126/scripts.pory"
	end
# 30 "data/maps/Route126/scripts.pory"

# 31 "data/maps/Route126/scripts.pory"
Route126_EventScript_Leonardo::
# 32 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_LEONARDO, Route126_Text_LeonardoIntro, Route126_Text_LeonardoDefeat
# 33 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_LeonardoPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route126/scripts.pory"
	end
# 35 "data/maps/Route126/scripts.pory"

# 36 "data/maps/Route126/scripts.pory"
Route126_EventScript_Isobel::
# 37 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_ISOBEL, Route126_Text_IsobelIntro, Route126_Text_IsobelDefeat
# 38 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_IsobelPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route126/scripts.pory"
	end
# 40 "data/maps/Route126/scripts.pory"

# 41 "data/maps/Route126/scripts.pory"
Route126_EventScript_Sienna::
# 42 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_SIENNA, Route126_Text_SiennaIntro, Route126_Text_SiennaDefeat
# 43 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_SiennaPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route126/scripts.pory"
	end
# 45 "data/maps/Route126/scripts.pory"

# 46 "data/maps/Route126/scripts.pory"
Route126_EventScript_Pablo::
# 47 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_PABLO_1, Route126_Text_PabloIntro, Route126_Text_PabloDefeat, Route126_EventScript_RegisterPablo
# 48 "data/maps/Route126/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 49 "data/maps/Route126/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route126_EventScript_RematchPablo
# 50 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostBattle, MSGBOX_DEFAULT
# 51 "data/maps/Route126/scripts.pory"
	release
# 52 "data/maps/Route126/scripts.pory"
	end
# 53 "data/maps/Route126/scripts.pory"

# 54 "data/maps/Route126/scripts.pory"
Route126_EventScript_RegisterPablo::
# 55 "data/maps/Route126/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 56 "data/maps/Route126/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloRegister, MSGBOX_DEFAULT
# 58 "data/maps/Route126/scripts.pory"
	register_matchcall TRAINER_PABLO_1
# 59 "data/maps/Route126/scripts.pory"
	release
# 60 "data/maps/Route126/scripts.pory"
	end
# 61 "data/maps/Route126/scripts.pory"

# 62 "data/maps/Route126/scripts.pory"
Route126_EventScript_RematchPablo::
# 63 "data/maps/Route126/scripts.pory"
	trainerbattle_rematch TRAINER_PABLO_1, Route126_Text_PabloRematchIntro, Route126_Text_PabloRematchDefeat
# 64 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostRematch, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route126/scripts.pory"
	end
