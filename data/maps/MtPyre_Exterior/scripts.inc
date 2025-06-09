# 1 "data/maps/MtPyre_Exterior/scripts.pory"

# 2 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_MapScripts::
# 3 "data/maps/MtPyre_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Exterior_OnTransition
# 4 "data/maps/MtPyre_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtPyre_Exterior_OnFrame
# 5 "data/maps/MtPyre_Exterior/scripts.pory"
	.byte 0
# 6 "data/maps/MtPyre_Exterior/scripts.pory"

# 7 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_OnFrame:
# 8 "data/maps/MtPyre_Exterior/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 35, MtPyre_Exterior_EventScript_ProgressEmmieState
# 9 "data/maps/MtPyre_Exterior/scripts.pory"
	.2byte 0
# 10 "data/maps/MtPyre_Exterior/scripts.pory"

# 11 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_ProgressEmmieState::
# 12 "data/maps/MtPyre_Exterior/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 33
# 13 "data/maps/MtPyre_Exterior/scripts.pory"
	return
# 14 "data/maps/MtPyre_Exterior/scripts.pory"

# 15 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_OnTransition:
# 16 "data/maps/MtPyre_Exterior/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 17 "data/maps/MtPyre_Exterior/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 18 "data/maps/MtPyre_Exterior/scripts.pory"
	call MtPyre_Exterior_EventScript_CheckEnterFromSummit
# 19 "data/maps/MtPyre_Exterior/scripts.pory"
	end
# 20 "data/maps/MtPyre_Exterior/scripts.pory"

# 21 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_CheckEnterFromSummit::
# 22 "data/maps/MtPyre_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 23 "data/maps/MtPyre_Exterior/scripts.pory"
	goto_if_lt VAR_TEMP_1, 12, MtPyre_Exterior_EventScript_EnterFromSummit
# 24 "data/maps/MtPyre_Exterior/scripts.pory"
	return
# 25 "data/maps/MtPyre_Exterior/scripts.pory"

# 26 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_EnterFromSummit::
# 27 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 28 "data/maps/MtPyre_Exterior/scripts.pory"
	return
# 29 "data/maps/MtPyre_Exterior/scripts.pory"

# 30 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_FogTrigger::
# 31 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 32 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
# 33 "data/maps/MtPyre_Exterior/scripts.pory"
	end
# 34 "data/maps/MtPyre_Exterior/scripts.pory"

# 35 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_SunTrigger::
# 36 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_SUNNY
# 37 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
# 38 "data/maps/MtPyre_Exterior/scripts.pory"
	end
