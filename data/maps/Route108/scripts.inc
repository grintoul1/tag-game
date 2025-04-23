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
	end
# 9 "data/maps/Route108/scripts.pory"

# 10 "data/maps/Route108/scripts.pory"
Route108_EventScript_Jerome::
# 11 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated
# 12 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/Route108/scripts.pory"
	end
# 14 "data/maps/Route108/scripts.pory"

# 15 "data/maps/Route108/scripts.pory"
Route108_EventScript_Matthew::
# 16 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
# 17 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/Route108/scripts.pory"
	end
# 19 "data/maps/Route108/scripts.pory"

# 20 "data/maps/Route108/scripts.pory"
Route108_EventScript_Tara::
# 21 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
# 22 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/Route108/scripts.pory"
	end
# 24 "data/maps/Route108/scripts.pory"

# 25 "data/maps/Route108/scripts.pory"
Route108_EventScript_Missy::
# 26 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated
# 27 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route108/scripts.pory"
	end
# 29 "data/maps/Route108/scripts.pory"

# 30 "data/maps/Route108/scripts.pory"
Route108_EventScript_Carolina::
# 31 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CAROLINA, Route108_Text_CarolinaIntro, Route108_Text_CarolinaDefeated
# 32 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route108/scripts.pory"
	end
# 34 "data/maps/Route108/scripts.pory"

# 35 "data/maps/Route108/scripts.pory"
Route108_EventScript_Cory::
# 36 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
# 37 "data/maps/Route108/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 38 "data/maps/Route108/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route108_EventScript_CoryRematch
# 39 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
# 40 "data/maps/Route108/scripts.pory"
	release
# 41 "data/maps/Route108/scripts.pory"
	end
# 42 "data/maps/Route108/scripts.pory"

# 43 "data/maps/Route108/scripts.pory"
Route108_EventScript_CoryRegisterMatchCallAfterBattle::
# 44 "data/maps/Route108/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 45 "data/maps/Route108/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
# 47 "data/maps/Route108/scripts.pory"
	register_matchcall TRAINER_CORY_1
# 48 "data/maps/Route108/scripts.pory"
	release
# 49 "data/maps/Route108/scripts.pory"
	end
# 50 "data/maps/Route108/scripts.pory"

# 51 "data/maps/Route108/scripts.pory"
Route108_EventScript_CoryRematch::
# 52 "data/maps/Route108/scripts.pory"
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
# 53 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route108/scripts.pory"
	end
