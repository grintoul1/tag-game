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
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 12 "data/maps/Route112/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 13 "data/maps/Route112/scripts.pory"
	end
# 14 "data/maps/Route112/scripts.pory"

# 15 "data/maps/Route112/scripts.pory"
Route112_EventScript_MagmaGrunts::
# 16 "data/maps/Route112/scripts.pory"
	lockall
# 17 "data/maps/Route112/scripts.pory"
	delay 40
# 18 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 19 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route112/scripts.pory"
	delay 20
# 21 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LeaderGoingToAwakenThing, MSGBOX_DEFAULT
# 22 "data/maps/Route112/scripts.pory"
	closemessage
# 23 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 24 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route112/scripts.pory"
	delay 40
# 26 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 27 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route112/scripts.pory"
	delay 20
# 29 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_YeahWeNeedMeteorite, MSGBOX_DEFAULT
# 30 "data/maps/Route112/scripts.pory"
	closemessage
# 31 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 32 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route112/scripts.pory"
	delay 40
# 34 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 35 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route112/scripts.pory"
	delay 20
# 37 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_OhThatsWhyCrewWentToFallarbor, MSGBOX_DEFAULT
# 38 "data/maps/Route112/scripts.pory"
	closemessage
# 39 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 40 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route112/scripts.pory"
	delay 40
# 42 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route112/scripts.pory"
	delay 20
# 45 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CantLetAnyonePassUntilTheyreBack, MSGBOX_DEFAULT
# 46 "data/maps/Route112/scripts.pory"
	closemessage
# 47 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 48 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route112/scripts.pory"
	releaseall
# 50 "data/maps/Route112/scripts.pory"
	end
# 51 "data/maps/Route112/scripts.pory"

# 52 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneyCableCarSign::
# 53 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
# 54 "data/maps/Route112/scripts.pory"
	end
# 55 "data/maps/Route112/scripts.pory"

# 56 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneySign::
# 57 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
# 58 "data/maps/Route112/scripts.pory"
	end
# 59 "data/maps/Route112/scripts.pory"

# 60 "data/maps/Route112/scripts.pory"
Route112_EventScript_RouteSignLavaridge::
# 61 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
# 62 "data/maps/Route112/scripts.pory"
	end
# 63 "data/maps/Route112/scripts.pory"

# 64 "data/maps/Route112/scripts.pory"
Route112_EventScript_Hiker::
# 65 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
# 66 "data/maps/Route112/scripts.pory"
	end
# 67 "data/maps/Route112/scripts.pory"

# 68 "data/maps/Route112/scripts.pory"
Route112_EventScript_Brice::
# 69 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
# 70 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route112/scripts.pory"
	end
# 72 "data/maps/Route112/scripts.pory"

# 73 "data/maps/Route112/scripts.pory"
Route112_EventScript_Trent::
# 74 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
# 75 "data/maps/Route112/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 76 "data/maps/Route112/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route112_EventScript_RematchTrent
# 77 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
# 78 "data/maps/Route112/scripts.pory"
	release
# 79 "data/maps/Route112/scripts.pory"
	end
# 80 "data/maps/Route112/scripts.pory"

# 81 "data/maps/Route112/scripts.pory"
Route112_EventScript_RegisterTrent::
# 82 "data/maps/Route112/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 83 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
# 85 "data/maps/Route112/scripts.pory"
	register_matchcall TRAINER_TRENT_1
# 86 "data/maps/Route112/scripts.pory"
	release
# 87 "data/maps/Route112/scripts.pory"
	end
# 88 "data/maps/Route112/scripts.pory"

# 89 "data/maps/Route112/scripts.pory"
Route112_EventScript_RematchTrent::
# 90 "data/maps/Route112/scripts.pory"
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
# 91 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route112/scripts.pory"
	end
# 93 "data/maps/Route112/scripts.pory"

# 94 "data/maps/Route112/scripts.pory"
Route112_EventScript_Larry::
# 95 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 96 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route112/scripts.pory"
	end
# 98 "data/maps/Route112/scripts.pory"

# 99 "data/maps/Route112/scripts.pory"
Route112_EventScript_Carol::
# 100 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 101 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route112/scripts.pory"
	end
# 103 "data/maps/Route112/scripts.pory"

# 104 "data/maps/Route112/scripts.pory"
Route112_EventScript_Bryant::
# 105 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 106 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route112/scripts.pory"
	end
# 108 "data/maps/Route112/scripts.pory"

# 109 "data/maps/Route112/scripts.pory"
Route112_EventScript_Shayla::
# 110 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 111 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/Route112/scripts.pory"
	end
# 113 "data/maps/Route112/scripts.pory"

# 114 "data/maps/Route112/scripts.pory"
Route112_Text_LeaderGoingToAwakenThing:
# 115 "data/maps/Route112/scripts.pory"
	.string "Hey, man, is our leader really going\n"
# 116 "data/maps/Route112/scripts.pory"
	.string "to awaken that thing?$"
# 117 "data/maps/Route112/scripts.pory"

# 118 "data/maps/Route112/scripts.pory"
Route112_Text_YeahWeNeedMeteorite:
# 119 "data/maps/Route112/scripts.pory"
	.string "Sounds like it, yeah. But I heard\n"
# 120 "data/maps/Route112/scripts.pory"
	.string "we need a METEORITE to do it.$"
# 121 "data/maps/Route112/scripts.pory"

# 122 "data/maps/Route112/scripts.pory"
Route112_Text_OhThatsWhyCrewWentToFallarbor:
# 123 "data/maps/Route112/scripts.pory"
	.string "Oh, I get it now. That's why the rest\n"
# 124 "data/maps/Route112/scripts.pory"
	.string "of the crew went out to FALLARBOR.$"
# 125 "data/maps/Route112/scripts.pory"

# 126 "data/maps/Route112/scripts.pory"
Route112_Text_CantLetAnyonePassUntilTheyreBack:
# 127 "data/maps/Route112/scripts.pory"
	.string "You got it. And until they come back,\n"
# 128 "data/maps/Route112/scripts.pory"
	.string "we're not to let anyone pass, right.$"
# 129 "data/maps/Route112/scripts.pory"

# 130 "data/maps/Route112/scripts.pory"
Route112_Text_NotEasyToGetBackToLavaridge:
# 131 "data/maps/Route112/scripts.pory"
	.string "Eh, I'd like to get to MAUVILLE, but if\n"
# 132 "data/maps/Route112/scripts.pory"
	.string "I went down these ledges, it'd be no\l"
# 133 "data/maps/Route112/scripts.pory"
	.string "easy matter to get back to LAVARIDGE.$"
# 134 "data/maps/Route112/scripts.pory"

# 135 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneyCableCarSign:
# 136 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY CABLE CAR\n"
# 137 "data/maps/Route112/scripts.pory"
	.string "“A short walk {UP_ARROW} way!”$"
# 138 "data/maps/Route112/scripts.pory"

# 139 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneySign:
# 140 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY\p"
# 141 "data/maps/Route112/scripts.pory"
	.string "“For LAVARIDGE TOWN or the summit,\n"
# 142 "data/maps/Route112/scripts.pory"
	.string "please take the CABLE CAR.”$"
# 143 "data/maps/Route112/scripts.pory"

# 144 "data/maps/Route112/scripts.pory"
Route112_Text_RouteSignLavaridge:
# 145 "data/maps/Route112/scripts.pory"
	.string "ROUTE 112\n"
# 146 "data/maps/Route112/scripts.pory"
	.string "{LEFT_ARROW} LAVARIDGE TOWN$"
