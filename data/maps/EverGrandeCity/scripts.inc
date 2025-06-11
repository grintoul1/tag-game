# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 3 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 4 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_OnWarp
# 5 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_OnFrame
# 6 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity/scripts.pory"

# 8 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnWarp:
# 9 "data/maps/EverGrandeCity/scripts.pory"
	map_script_2 VAR_EMMIE_BATTLE_STATE, 3, EverGrandeCity_EventScript_EmmieCutsceneEmmiePos
# 10 "data/maps/EverGrandeCity/scripts.pory"
	.2byte 0
# 11 "data/maps/EverGrandeCity/scripts.pory"

# 12 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnFrame:
# 13 "data/maps/EverGrandeCity/scripts.pory"
	map_script_2 VAR_EMMIE_BATTLE_STATE, 3, EverGrandeCity_EventScript_EmmieCutscene
# 14 "data/maps/EverGrandeCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 73, EverGrandeCity_EventScript_EmmieStateEliteFourWipe
# 15 "data/maps/EverGrandeCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 74, EverGrandeCity_EventScript_EmmieStateEliteFourWipe
# 16 "data/maps/EverGrandeCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 75, EverGrandeCity_EventScript_EmmieStateEliteFourWipe
# 17 "data/maps/EverGrandeCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 76, EverGrandeCity_EventScript_EmmieStateEliteFourWipe
# 18 "data/maps/EverGrandeCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 77, EverGrandeCity_EventScript_EmmieStateEliteFourWipe
# 19 "data/maps/EverGrandeCity/scripts.pory"
	.2byte 0
# 20 "data/maps/EverGrandeCity/scripts.pory"

# 21 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_EmmieStateEliteFourWipe::
# 22 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 72
# 23 "data/maps/EverGrandeCity/scripts.pory"
	return
# 24 "data/maps/EverGrandeCity/scripts.pory"

# 25 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 26 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 27 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 28 "data/maps/EverGrandeCity/scripts.pory"
	end
# 29 "data/maps/EverGrandeCity/scripts.pory"

# 30 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_EmmieCutsceneEmmiePos:
# 31 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 32 "data/maps/EverGrandeCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 28, 16
# 33 "data/maps/EverGrandeCity/scripts.pory"
	turnobject OBJ_EVENT_ID_NPC_FOLLOWER, DIR_EAST
# 34 "data/maps/EverGrandeCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 35 "data/maps/EverGrandeCity/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_EVER_GRANDE_CITY
# 36 "data/maps/EverGrandeCity/scripts.pory"
	end
# 37 "data/maps/EverGrandeCity/scripts.pory"

# 38 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_EmmieCutscene:
# 39 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 40 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 41 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 42 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EmmieWasntSure, MSGBOX_AUTOCLOSE
# 43 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 44 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 45 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 46 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 47 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EmmieThanksForPlaying, MSGBOX_AUTOCLOSE
# 48 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 49 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_EMMIE_BATTLE_STATE, 4
# 50 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_EXIT
# 51 "data/maps/EverGrandeCity/scripts.pory"
	warpsilent MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, 9, 6
# 52 "data/maps/EverGrandeCity/scripts.pory"
	end
# 53 "data/maps/EverGrandeCity/scripts.pory"

# 54 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_Heart:
# 55 "data/maps/EverGrandeCity/scripts.pory"
	emote_heart
# 56 "data/maps/EverGrandeCity/scripts.pory"
	step_end
# 57 "data/maps/EverGrandeCity/scripts.pory"

# 58 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EmmieThanksForPlaying:
# 59 "data/maps/EverGrandeCity/scripts.pory"
	.string "Thanks for playing with me!\p"
# 60 "data/maps/EverGrandeCity/scripts.pory"
	.string "Now, let's get in there and finish this!$"
# 61 "data/maps/EverGrandeCity/scripts.pory"

# 62 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EmmieWasntSure:
# 63 "data/maps/EverGrandeCity/scripts.pory"
	.string "Emmie: Thank you for coming outside. I\n"
# 64 "data/maps/EverGrandeCity/scripts.pory"
	.string "just wanted to say something before\l"
# 65 "data/maps/EverGrandeCity/scripts.pory"
	.string "we went inside.\p"
# 66 "data/maps/EverGrandeCity/scripts.pory"
	.string "When I first had the idea of us going on\n"
# 67 "data/maps/EverGrandeCity/scripts.pory"
	.string "this journey together, I admit I wasn't\l"
# 68 "data/maps/EverGrandeCity/scripts.pory"
	.string "sure if you would be up for it.\p"
# 69 "data/maps/EverGrandeCity/scripts.pory"
	.string "I guess I was worried that I wouldn't\n"
# 70 "data/maps/EverGrandeCity/scripts.pory"
	.string "give you the adventure that you were\l"
# 71 "data/maps/EverGrandeCity/scripts.pory"
	.string "looking for…\p"
# 72 "data/maps/EverGrandeCity/scripts.pory"
	.string "I mean, who wants their big sister\n"
# 73 "data/maps/EverGrandeCity/scripts.pory"
	.string "cramping their style, right?\p"
# 74 "data/maps/EverGrandeCity/scripts.pory"
	.string "But look how far we've come thanks to\n"
# 75 "data/maps/EverGrandeCity/scripts.pory"
	.string "your remarkable skills!\p"
# 76 "data/maps/EverGrandeCity/scripts.pory"
	.string "Whatever happens in there, I want you\n"
# 77 "data/maps/EverGrandeCity/scripts.pory"
	.string "to know how proud of you I am.\p"
# 78 "data/maps/EverGrandeCity/scripts.pory"
	.string "I hope that the fact that we've\n"
# 79 "data/maps/EverGrandeCity/scripts.pory"
	.string "travelled so far means you've enjoyed\l"
# 80 "data/maps/EverGrandeCity/scripts.pory"
	.string "our time together.\p"
# 81 "data/maps/EverGrandeCity/scripts.pory"
	.string "I suppose what I really want to say is…$"
# 82 "data/maps/EverGrandeCity/scripts.pory"

# 83 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 84 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 85 "data/maps/EverGrandeCity/scripts.pory"
	end
# 86 "data/maps/EverGrandeCity/scripts.pory"

# 87 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 88 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 89 "data/maps/EverGrandeCity/scripts.pory"
	end
# 90 "data/maps/EverGrandeCity/scripts.pory"

# 91 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 92 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 93 "data/maps/EverGrandeCity/scripts.pory"
	end
# 94 "data/maps/EverGrandeCity/scripts.pory"

# 95 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 96 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 97 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 98 "data/maps/EverGrandeCity/scripts.pory"
	end
# 99 "data/maps/EverGrandeCity/scripts.pory"

# 100 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 101 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 102 "data/maps/EverGrandeCity/scripts.pory"

# 103 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 104 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 105 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 106 "data/maps/EverGrandeCity/scripts.pory"

# 107 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 108 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 109 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 110 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"
