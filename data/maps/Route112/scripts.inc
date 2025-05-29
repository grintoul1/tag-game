# 1 "data/maps/Route112/scripts.pory"

# 2 "data/maps/Route112/scripts.pory"
.set LOCALID_GRUNT_1, 1
# 3 "data/maps/Route112/scripts.pory"
.set LOCALID_GRUNT_2, 6
# 4 "data/maps/Route112/scripts.pory"

# 5 "data/maps/Route112/scripts.pory"
Route112_MapScripts::
# 6 "data/maps/Route112/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_OnTransition
# 7 "data/maps/Route112/scripts.pory"
	.byte 0
# 8 "data/maps/Route112/scripts.pory"

# 9 "data/maps/Route112/scripts.pory"
Route112_OnTransition:
# 10 "data/maps/Route112/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 11 "data/maps/Route112/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 12 "data/maps/Route112/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 13 "data/maps/Route112/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 14 "data/maps/Route112/scripts.pory"
	end
# 15 "data/maps/Route112/scripts.pory"

# 16 "data/maps/Route112/scripts.pory"
Route112_EventScript_MagmaGrunts::
# 17 "data/maps/Route112/scripts.pory"
	lockall
# 18 "data/maps/Route112/scripts.pory"
	delay 40
# 19 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 20 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 21 "data/maps/Route112/scripts.pory"
	delay 20
# 22 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LeaderGoingToAwakenThing, MSGBOX_DEFAULT
# 23 "data/maps/Route112/scripts.pory"
	closemessage
# 24 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 25 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route112/scripts.pory"
	delay 40
# 27 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 28 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route112/scripts.pory"
	delay 20
# 30 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_YeahWeNeedMeteorite, MSGBOX_DEFAULT
# 31 "data/maps/Route112/scripts.pory"
	closemessage
# 32 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 33 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route112/scripts.pory"
	delay 40
# 35 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 36 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route112/scripts.pory"
	delay 20
# 38 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_OhThatsWhyCrewWentToFallarbor, MSGBOX_DEFAULT
# 39 "data/maps/Route112/scripts.pory"
	closemessage
# 40 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 41 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route112/scripts.pory"
	delay 40
# 43 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 44 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route112/scripts.pory"
	delay 20
# 46 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CantLetAnyonePassUntilTheyreBack, MSGBOX_DEFAULT
# 47 "data/maps/Route112/scripts.pory"
	closemessage
# 48 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 49 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route112/scripts.pory"
	releaseall
# 51 "data/maps/Route112/scripts.pory"
	end
# 52 "data/maps/Route112/scripts.pory"

# 53 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneyCableCarSign::
# 54 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
# 55 "data/maps/Route112/scripts.pory"
	end
# 56 "data/maps/Route112/scripts.pory"

# 57 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneySign::
# 58 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
# 59 "data/maps/Route112/scripts.pory"
	end
# 60 "data/maps/Route112/scripts.pory"

# 61 "data/maps/Route112/scripts.pory"
Route112_EventScript_RouteSignLavaridge::
# 62 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
# 63 "data/maps/Route112/scripts.pory"
	end
# 64 "data/maps/Route112/scripts.pory"

# 65 "data/maps/Route112/scripts.pory"
Route112_EventScript_Hiker::
# 66 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
# 67 "data/maps/Route112/scripts.pory"
	end
# 68 "data/maps/Route112/scripts.pory"

# 69 "data/maps/Route112/scripts.pory"
Route112_EventScript_Brice::
# 70 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
# 71 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/Route112/scripts.pory"
	end
# 73 "data/maps/Route112/scripts.pory"

# 74 "data/maps/Route112/scripts.pory"
Route112_EventScript_Trent::
# 75 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
# 76 "data/maps/Route112/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 77 "data/maps/Route112/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route112_EventScript_RematchTrent
# 78 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
# 79 "data/maps/Route112/scripts.pory"
	release
# 80 "data/maps/Route112/scripts.pory"
	end
# 81 "data/maps/Route112/scripts.pory"

# 82 "data/maps/Route112/scripts.pory"
Route112_EventScript_RegisterTrent::
# 83 "data/maps/Route112/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 84 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
# 86 "data/maps/Route112/scripts.pory"
	register_matchcall TRAINER_TRENT_1
# 87 "data/maps/Route112/scripts.pory"
	release
# 88 "data/maps/Route112/scripts.pory"
	end
# 89 "data/maps/Route112/scripts.pory"

# 90 "data/maps/Route112/scripts.pory"
Route112_EventScript_RematchTrent::
# 91 "data/maps/Route112/scripts.pory"
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
# 92 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/Route112/scripts.pory"
	end
# 94 "data/maps/Route112/scripts.pory"

# 95 "data/maps/Route112/scripts.pory"
Route112_EventScript_Larry::
# 96 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 97 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/Route112/scripts.pory"
	end
# 99 "data/maps/Route112/scripts.pory"

# 100 "data/maps/Route112/scripts.pory"
Route112_EventScript_Carol::
# 101 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 102 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route112/scripts.pory"
	end
# 104 "data/maps/Route112/scripts.pory"

# 105 "data/maps/Route112/scripts.pory"
Route112_EventScript_Bryant::
# 106 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 107 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route112/scripts.pory"
	end
# 109 "data/maps/Route112/scripts.pory"

# 110 "data/maps/Route112/scripts.pory"
Route112_EventScript_Shayla::
# 111 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 112 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route112/scripts.pory"
	end
# 114 "data/maps/Route112/scripts.pory"

# 115 "data/maps/Route112/scripts.pory"
Route112_Text_LeaderGoingToAwakenThing:
# 116 "data/maps/Route112/scripts.pory"
	.string "Hey, man, is our leader really going\n"
# 117 "data/maps/Route112/scripts.pory"
	.string "to awaken that thing?$"
# 118 "data/maps/Route112/scripts.pory"

# 119 "data/maps/Route112/scripts.pory"
Route112_Text_YeahWeNeedMeteorite:
# 120 "data/maps/Route112/scripts.pory"
	.string "Sounds like it, yeah. But I heard\n"
# 121 "data/maps/Route112/scripts.pory"
	.string "we need a METEORITE to do it.$"
# 122 "data/maps/Route112/scripts.pory"

# 123 "data/maps/Route112/scripts.pory"
Route112_Text_OhThatsWhyCrewWentToFallarbor:
# 124 "data/maps/Route112/scripts.pory"
	.string "Oh, I get it now. That's why the rest\n"
# 125 "data/maps/Route112/scripts.pory"
	.string "of the crew went out to FALLARBOR.$"
# 126 "data/maps/Route112/scripts.pory"

# 127 "data/maps/Route112/scripts.pory"
Route112_Text_CantLetAnyonePassUntilTheyreBack:
# 128 "data/maps/Route112/scripts.pory"
	.string "You got it. And until they come back,\n"
# 129 "data/maps/Route112/scripts.pory"
	.string "we're not to let anyone pass, right.$"
# 130 "data/maps/Route112/scripts.pory"

# 131 "data/maps/Route112/scripts.pory"
Route112_Text_NotEasyToGetBackToLavaridge:
# 132 "data/maps/Route112/scripts.pory"
	.string "Eh, I'd like to get to MAUVILLE, but if\n"
# 133 "data/maps/Route112/scripts.pory"
	.string "I went down these ledges, it'd be no\l"
# 134 "data/maps/Route112/scripts.pory"
	.string "easy matter to get back to LAVARIDGE.$"
# 135 "data/maps/Route112/scripts.pory"

# 136 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneyCableCarSign:
# 137 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY CABLE CAR\n"
# 138 "data/maps/Route112/scripts.pory"
	.string "“A short walk {UP_ARROW} way!”$"
# 139 "data/maps/Route112/scripts.pory"

# 140 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneySign:
# 141 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY\p"
# 142 "data/maps/Route112/scripts.pory"
	.string "“For LAVARIDGE TOWN or the summit,\n"
# 143 "data/maps/Route112/scripts.pory"
	.string "please take the CABLE CAR.”$"
# 144 "data/maps/Route112/scripts.pory"

# 145 "data/maps/Route112/scripts.pory"
Route112_Text_RouteSignLavaridge:
# 146 "data/maps/Route112/scripts.pory"
	.string "ROUTE 112\n"
# 147 "data/maps/Route112/scripts.pory"
	.string "{LEFT_ARROW} LAVARIDGE TOWN$"
