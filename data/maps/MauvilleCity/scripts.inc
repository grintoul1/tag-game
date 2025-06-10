# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 6
# 3 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLYS_UNCLE, 7
# 4 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_SCOTT, 11
# 5 "data/maps/MauvilleCity/scripts.pory"

# 6 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 7 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 8 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 9 "data/maps/MauvilleCity/scripts.pory"

# 10 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
MauvilleCity_OnTransition:
# 11 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 12 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 13 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 14 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 15 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 16 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 17 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 18 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 19 "data/maps/MauvilleCity/scripts.pory"
	end
# 20 "data/maps/MauvilleCity/scripts.pory"

# 21 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 22 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 23 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 24 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 25 "data/maps/MauvilleCity/scripts.pory"
	return
# 26 "data/maps/MauvilleCity/scripts.pory"

# 27 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 28 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 29 "data/maps/MauvilleCity/scripts.pory"
	end
# 30 "data/maps/MauvilleCity/scripts.pory"

# 31 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 32 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 33 "data/maps/MauvilleCity/scripts.pory"
	end
# 34 "data/maps/MauvilleCity/scripts.pory"

# 35 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 36 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 37 "data/maps/MauvilleCity/scripts.pory"
	end
# 38 "data/maps/MauvilleCity/scripts.pory"

# 39 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 40 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 41 "data/maps/MauvilleCity/scripts.pory"
	end
# 42 "data/maps/MauvilleCity/scripts.pory"

# 43 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 44 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 45 "data/maps/MauvilleCity/scripts.pory"
	end
# 46 "data/maps/MauvilleCity/scripts.pory"

# 47 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 48 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 49 "data/maps/MauvilleCity/scripts.pory"
	end
# 50 "data/maps/MauvilleCity/scripts.pory"

# 51 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 52 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 53 "data/maps/MauvilleCity/scripts.pory"
	end
# 54 "data/maps/MauvilleCity/scripts.pory"

# 55 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 56 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 57 "data/maps/MauvilleCity/scripts.pory"
	end
# 58 "data/maps/MauvilleCity/scripts.pory"

# 59 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 60 "data/maps/MauvilleCity/scripts.pory"
	lock
# 61 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 62 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 63 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 64 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 65 "data/maps/MauvilleCity/scripts.pory"
	release
# 66 "data/maps/MauvilleCity/scripts.pory"
	end
# 67 "data/maps/MauvilleCity/scripts.pory"

# 68 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 69 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 70 "data/maps/MauvilleCity/scripts.pory"
=======

# 11 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnFrame:
# 12 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 1, MauvilleCity_EventScript_ProgressEmmieState
# 13 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 3, MauvilleCity_EventScript_ProgressEmmieState
# 14 "data/maps/MauvilleCity/scripts.pory"
	.2byte 0
# 15 "data/maps/MauvilleCity/scripts.pory"

# 16 "data/maps/MauvilleCity/scripts.pory"
Test::
# 17 "data/maps/MauvilleCity/scripts.pory"
	destroyfollowernpc
# 18 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_MAUVILLE_GYM_STATE, 1
# 19 "data/maps/MauvilleCity/scripts.pory"
	end
# 20 "data/maps/MauvilleCity/scripts.pory"
	
# 21 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ProgressEmmieState::
# 22 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 2
# 23 "data/maps/MauvilleCity/scripts.pory"
	return
# 24 "data/maps/MauvilleCity/scripts.pory"

# 25 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 26 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 27 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 28 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 29 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 30 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 31 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 32 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 33 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 34 "data/maps/MauvilleCity/scripts.pory"
	end
# 35 "data/maps/MauvilleCity/scripts.pory"

# 36 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 37 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 38 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 39 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 40 "data/maps/MauvilleCity/scripts.pory"
	return
# 41 "data/maps/MauvilleCity/scripts.pory"

# 42 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 43 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 44 "data/maps/MauvilleCity/scripts.pory"
	end
# 45 "data/maps/MauvilleCity/scripts.pory"

# 46 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 47 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 48 "data/maps/MauvilleCity/scripts.pory"
	end
# 49 "data/maps/MauvilleCity/scripts.pory"

# 50 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 51 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 52 "data/maps/MauvilleCity/scripts.pory"
	end
# 53 "data/maps/MauvilleCity/scripts.pory"

# 54 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 55 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 56 "data/maps/MauvilleCity/scripts.pory"
	end
# 57 "data/maps/MauvilleCity/scripts.pory"

# 58 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 59 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 60 "data/maps/MauvilleCity/scripts.pory"
	end
# 61 "data/maps/MauvilleCity/scripts.pory"

# 62 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 63 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 64 "data/maps/MauvilleCity/scripts.pory"
	end
# 65 "data/maps/MauvilleCity/scripts.pory"

# 66 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 67 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 68 "data/maps/MauvilleCity/scripts.pory"
	end
# 69 "data/maps/MauvilleCity/scripts.pory"

# 70 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 71 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 72 "data/maps/MauvilleCity/scripts.pory"
	end
# 73 "data/maps/MauvilleCity/scripts.pory"

# 74 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 75 "data/maps/MauvilleCity/scripts.pory"
	lock
# 76 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 77 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 78 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 79 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 80 "data/maps/MauvilleCity/scripts.pory"
>>>>>>> parent of afa6a5f807 (20250609 02)
	release
# 71 "data/maps/MauvilleCity/scripts.pory"
	end
# 72 "data/maps/MauvilleCity/scripts.pory"

<<<<<<< HEAD
# 73 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 74 "data/maps/MauvilleCity/scripts.pory"
	lock
# 75 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 76 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 77 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 78 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 79 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 80 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 81 "data/maps/MauvilleCity/scripts.pory"
	release
# 82 "data/maps/MauvilleCity/scripts.pory"
	end
# 83 "data/maps/MauvilleCity/scripts.pory"

# 84 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 85 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 86 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 87 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 88 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/MauvilleCity/scripts.pory"
	release
# 90 "data/maps/MauvilleCity/scripts.pory"
	end
# 91 "data/maps/MauvilleCity/scripts.pory"

# 92 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 93 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 94 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 95 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 96 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 98 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 99 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 100 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 101 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 103 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 104 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 106 "data/maps/MauvilleCity/scripts.pory"
=======
# 83 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 84 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 85 "data/maps/MauvilleCity/scripts.pory"
	release
# 86 "data/maps/MauvilleCity/scripts.pory"
	end
# 87 "data/maps/MauvilleCity/scripts.pory"

# 88 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 89 "data/maps/MauvilleCity/scripts.pory"
	lock
# 90 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 91 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 92 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 93 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 94 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 95 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 96 "data/maps/MauvilleCity/scripts.pory"
	release
# 97 "data/maps/MauvilleCity/scripts.pory"
	end
# 98 "data/maps/MauvilleCity/scripts.pory"

# 99 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 100 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 101 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 102 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 103 "data/maps/MauvilleCity/scripts.pory"
>>>>>>> parent of afa6a5f807 (20250609 02)
	waitmovement 0
# 104 "data/maps/MauvilleCity/scripts.pory"
	release
# 105 "data/maps/MauvilleCity/scripts.pory"
	end
# 106 "data/maps/MauvilleCity/scripts.pory"

# 107 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 108 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 109 "data/maps/MauvilleCity/scripts.pory"
	end
# 110 "data/maps/MauvilleCity/scripts.pory"

# 111 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 112 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 113 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 114 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 115 "data/maps/MauvilleCity/scripts.pory"
	end
# 116 "data/maps/MauvilleCity/scripts.pory"

# 117 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 118 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 119 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 120 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 121 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 122 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 124 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 125 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 126 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 127 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 128 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 129 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 130 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 131 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 132 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 133 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 134 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 136 "data/maps/MauvilleCity/scripts.pory"
	end
# 137 "data/maps/MauvilleCity/scripts.pory"

# 138 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 139 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 140 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 142 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 143 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 144 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 145 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 147 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 148 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 149 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 150 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 151 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 152 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 153 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 154 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 155 "data/maps/MauvilleCity/scripts.pory"
	end
# 156 "data/maps/MauvilleCity/scripts.pory"

# 157 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 158 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 159 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 160 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 161 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 162 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 163 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 164 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 165 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 166 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 167 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 168 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 169 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 170 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 171 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 172 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 173 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 174 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 175 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 176 "data/maps/MauvilleCity/scripts.pory"
	end
# 177 "data/maps/MauvilleCity/scripts.pory"

# 178 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 179 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 180 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 181 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 182 "data/maps/MauvilleCity/scripts.pory"
	return
# 183 "data/maps/MauvilleCity/scripts.pory"

# 184 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 185 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 186 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 187 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 188 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 189 "data/maps/MauvilleCity/scripts.pory"
	return
# 190 "data/maps/MauvilleCity/scripts.pory"

# 191 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 192 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 193 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 194 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 195 "data/maps/MauvilleCity/scripts.pory"
	return
# 196 "data/maps/MauvilleCity/scripts.pory"

# 197 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 198 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 199 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 200 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 201 "data/maps/MauvilleCity/scripts.pory"
	return
# 202 "data/maps/MauvilleCity/scripts.pory"

# 203 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 204 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 205 "data/maps/MauvilleCity/scripts.pory"
	multi_2p_vs_1 TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat, PARTNER_EMMIE
# 206 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_RESULT
# 207 "data/maps/MauvilleCity/scripts.pory"
	case 1, MauvilleCity_EventScript_WallyVictory
# 208 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 209 "data/maps/MauvilleCity/scripts.pory"
	special SetCB2WhiteOut
# 210 "data/maps/MauvilleCity/scripts.pory"
	waitstate
# 211 "data/maps/MauvilleCity/scripts.pory"

# 212 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyVictory::
# 213 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 214 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 215 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 216 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 217 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 218 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 219 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 220 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 221 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 222 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 223 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 224 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 225 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 226 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 227 "data/maps/MauvilleCity/scripts.pory"
	end
# 228 "data/maps/MauvilleCity/scripts.pory"

# 229 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 230 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 231 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 232 "data/maps/MauvilleCity/scripts.pory"
	release
# 233 "data/maps/MauvilleCity/scripts.pory"
	end
# 234 "data/maps/MauvilleCity/scripts.pory"

# 235 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 236 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 237 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 238 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 239 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 240 "data/maps/MauvilleCity/scripts.pory"
	end
# 241 "data/maps/MauvilleCity/scripts.pory"

# 242 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 243 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 244 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 245 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 246 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 247 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 248 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 249 "data/maps/MauvilleCity/scripts.pory"

# 250 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 251 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 252 "data/maps/MauvilleCity/scripts.pory"
	walk_down
=======
MauvilleCity_EventScript_Wally::
# 108 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 109 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 110 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 111 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 112 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 113 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 114 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 115 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 116 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 117 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 118 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 119 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 120 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 121 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 122 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 123 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 124 "data/maps/MauvilleCity/scripts.pory"
	end
# 125 "data/maps/MauvilleCity/scripts.pory"

# 126 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 127 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 128 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 129 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 130 "data/maps/MauvilleCity/scripts.pory"
	end
# 131 "data/maps/MauvilleCity/scripts.pory"

# 132 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 133 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 134 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 135 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 136 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 137 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 138 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 139 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 140 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 142 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 143 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 144 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 145 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 147 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 148 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 149 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 151 "data/maps/MauvilleCity/scripts.pory"
	end
# 152 "data/maps/MauvilleCity/scripts.pory"

# 153 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 154 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 155 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 156 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 157 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 158 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 159 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 160 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 161 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 162 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 163 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 164 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 165 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 166 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 167 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 168 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 169 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 170 "data/maps/MauvilleCity/scripts.pory"
	end
# 171 "data/maps/MauvilleCity/scripts.pory"

# 172 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 173 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 174 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 175 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 176 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 177 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 178 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 179 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 180 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 181 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 182 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 183 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 184 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 185 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 186 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 187 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 188 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 189 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 190 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 191 "data/maps/MauvilleCity/scripts.pory"
	end
# 192 "data/maps/MauvilleCity/scripts.pory"

# 193 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 194 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 195 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 196 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 197 "data/maps/MauvilleCity/scripts.pory"
	return
# 198 "data/maps/MauvilleCity/scripts.pory"

# 199 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 200 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 201 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 202 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 203 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 204 "data/maps/MauvilleCity/scripts.pory"
	return
# 205 "data/maps/MauvilleCity/scripts.pory"

# 206 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 207 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 208 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 209 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 210 "data/maps/MauvilleCity/scripts.pory"
	return
# 211 "data/maps/MauvilleCity/scripts.pory"

# 212 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 213 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 214 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 215 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 216 "data/maps/MauvilleCity/scripts.pory"
	return
# 217 "data/maps/MauvilleCity/scripts.pory"

# 218 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 219 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 220 "data/maps/MauvilleCity/scripts.pory"
	multi_2p_vs_1 TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat, PARTNER_EMMIE
# 221 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_RESULT
# 222 "data/maps/MauvilleCity/scripts.pory"
	case 1, MauvilleCity_EventScript_WallyVictory
# 223 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/MauvilleCity/scripts.pory"
	special SetCB2WhiteOut
# 225 "data/maps/MauvilleCity/scripts.pory"
	waitstate
# 226 "data/maps/MauvilleCity/scripts.pory"

# 227 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyVictory::
# 228 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 229 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 230 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 231 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 232 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 233 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 234 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 235 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 236 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 237 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 238 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 239 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 240 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 241 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 242 "data/maps/MauvilleCity/scripts.pory"
	end
# 243 "data/maps/MauvilleCity/scripts.pory"

# 244 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 245 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 246 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 247 "data/maps/MauvilleCity/scripts.pory"
	release
# 248 "data/maps/MauvilleCity/scripts.pory"
	end
# 249 "data/maps/MauvilleCity/scripts.pory"

# 250 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 251 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 252 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
>>>>>>> parent of afa6a5f807 (20250609 02)
# 253 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 254 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 255 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
	walk_left
# 256 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 257 "data/maps/MauvilleCity/scripts.pory"

# 258 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 259 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 260 "data/maps/MauvilleCity/scripts.pory"
	delay_16
=======
	end
# 256 "data/maps/MauvilleCity/scripts.pory"

# 257 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 258 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 260 "data/maps/MauvilleCity/scripts.pory"
	walk_down
>>>>>>> parent of afa6a5f807 (20250609 02)
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 262 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 263 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
	walk_left
# 264 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 265 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 266 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 267 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 268 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 269 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 270 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 271 "data/maps/MauvilleCity/scripts.pory"

# 272 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 273 "data/maps/MauvilleCity/scripts.pory"
	delay_16
=======
	step_end
# 264 "data/maps/MauvilleCity/scripts.pory"

# 265 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 266 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 267 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 268 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 269 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 270 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 271 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 272 "data/maps/MauvilleCity/scripts.pory"

# 273 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
>>>>>>> parent of afa6a5f807 (20250609 02)
# 274 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 275 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 276 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 277 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 278 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 279 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 280 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 281 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 282 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 283 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
	delay_8
# 284 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 285 "data/maps/MauvilleCity/scripts.pory"

# 286 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 287 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 288 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 289 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 290 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 291 "data/maps/MauvilleCity/scripts.pory"

# 292 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 293 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 294 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 295 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 296 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 297 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 298 "data/maps/MauvilleCity/scripts.pory"

# 299 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 300 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 301 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 302 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 303 "data/maps/MauvilleCity/scripts.pory"

# 304 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 305 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 306 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 307 "data/maps/MauvilleCity/scripts.pory"
=======
	walk_left
# 284 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 285 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 286 "data/maps/MauvilleCity/scripts.pory"

# 287 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 288 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 289 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 290 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 291 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 292 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 293 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 294 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 295 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 296 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 297 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 298 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 299 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 300 "data/maps/MauvilleCity/scripts.pory"

# 301 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 302 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 303 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 304 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 305 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 306 "data/maps/MauvilleCity/scripts.pory"

# 307 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 308 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 309 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 310 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 311 "data/maps/MauvilleCity/scripts.pory"
>>>>>>> parent of afa6a5f807 (20250609 02)
	walk_in_place_faster_left
# 308 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 309 "data/maps/MauvilleCity/scripts.pory"

<<<<<<< HEAD
# 310 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 311 "data/maps/MauvilleCity/scripts.pory"
=======
# 314 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 315 "data/maps/MauvilleCity/scripts.pory"
>>>>>>> parent of afa6a5f807 (20250609 02)
	delay_16
# 312 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 313 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 314 "data/maps/MauvilleCity/scripts.pory"

# 315 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 316 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 317 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 318 "data/maps/MauvilleCity/scripts.pory"

# 319 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 320 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
MauvilleCity_Movement_WallysUncleExitNorth1:
# 321 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 322 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 323 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 325 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 326 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 327 "data/maps/MauvilleCity/scripts.pory"

# 328 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 329 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 331 "data/maps/MauvilleCity/scripts.pory"
	walk_down
=======
	delay_16
# 321 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 322 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 323 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 324 "data/maps/MauvilleCity/scripts.pory"

# 325 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 326 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 327 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 328 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 329 "data/maps/MauvilleCity/scripts.pory"

# 330 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 331 "data/maps/MauvilleCity/scripts.pory"
	delay_16
>>>>>>> parent of afa6a5f807 (20250609 02)
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 333 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
	walk_left
# 334 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 335 "data/maps/MauvilleCity/scripts.pory"

# 336 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 337 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 338 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 339 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
=======
	step_end
# 334 "data/maps/MauvilleCity/scripts.pory"

# 335 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 337 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 338 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 339 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_down
>>>>>>> parent of afa6a5f807 (20250609 02)
# 341 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 342 "data/maps/MauvilleCity/scripts.pory"

# 343 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 344 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 347 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 348 "data/maps/MauvilleCity/scripts.pory"

# 349 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 352 "data/maps/MauvilleCity/scripts.pory"
=======
MauvilleCity_Movement_WallysUncleExitEast1:
# 344 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 347 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 349 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 350 "data/maps/MauvilleCity/scripts.pory"

# 351 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 352 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 353 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 354 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 355 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 356 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 357 "data/maps/MauvilleCity/scripts.pory"

# 358 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 359 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 360 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 361 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 362 "data/maps/MauvilleCity/scripts.pory"
>>>>>>> parent of afa6a5f807 (20250609 02)
	step_end
# 353 "data/maps/MauvilleCity/scripts.pory"

<<<<<<< HEAD
# 354 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 355 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 356 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 357 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 358 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 359 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 360 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 361 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 362 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 363 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 364 "data/maps/MauvilleCity/scripts.pory"

# 365 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_down
=======
# 364 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_up
>>>>>>> parent of afa6a5f807 (20250609 02)
# 367 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 368 "data/maps/MauvilleCity/scripts.pory"

# 369 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 370 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 372 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 373 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 374 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 375 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
	step_end
# 376 "data/maps/MauvilleCity/scripts.pory"

=======
	walk_left
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_left
>>>>>>> parent of afa6a5f807 (20250609 02)
# 377 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 378 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
	walk_up
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 380 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_up
=======
	step_end
# 379 "data/maps/MauvilleCity/scripts.pory"

# 380 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_down
>>>>>>> parent of afa6a5f807 (20250609 02)
# 382 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 384 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 385 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 386 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 388 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
	walk_in_place_faster_up
# 389 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 390 "data/maps/MauvilleCity/scripts.pory"

# 391 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
=======
	walk_left
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 390 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 391 "data/maps/MauvilleCity/scripts.pory"

>>>>>>> parent of afa6a5f807 (20250609 02)
# 392 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 398 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
	walk_left
=======
	walk_up
>>>>>>> parent of afa6a5f807 (20250609 02)
# 399 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 400 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 403 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
	step_end
# 404 "data/maps/MauvilleCity/scripts.pory"

# 405 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 410 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 411 "data/maps/MauvilleCity/scripts.pory"
	walk_left
=======
	walk_in_place_faster_up
# 404 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 405 "data/maps/MauvilleCity/scripts.pory"

# 406 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 410 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 411 "data/maps/MauvilleCity/scripts.pory"
	walk_up
>>>>>>> parent of afa6a5f807 (20250609 02)
# 412 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 413 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 414 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 415 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
	step_end
=======
	walk_left
>>>>>>> parent of afa6a5f807 (20250609 02)
# 416 "data/maps/MauvilleCity/scripts.pory"

# 417 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
MauvilleCity_Movement_ScottExitEast:
# 418 "data/maps/MauvilleCity/scripts.pory"
	walk_down
=======
	walk_up
# 418 "data/maps/MauvilleCity/scripts.pory"
	step_end
>>>>>>> parent of afa6a5f807 (20250609 02)
# 419 "data/maps/MauvilleCity/scripts.pory"

# 420 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 421 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 422 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 423 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 424 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 425 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 426 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 427 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 428 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
	step_end
# 429 "data/maps/MauvilleCity/scripts.pory"

# 430 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 431 "data/maps/MauvilleCity/scripts.pory"
	lock
# 432 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 433 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 434 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 435 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 436 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 437 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 438 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 439 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 440 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 441 "data/maps/MauvilleCity/scripts.pory"
	release
# 442 "data/maps/MauvilleCity/scripts.pory"
	end
# 443 "data/maps/MauvilleCity/scripts.pory"

# 444 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 445 "data/maps/MauvilleCity/scripts.pory"
=======
	walk_left
# 429 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 430 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 431 "data/maps/MauvilleCity/scripts.pory"

# 432 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 433 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 434 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 435 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 436 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 437 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 438 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 439 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 440 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 441 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 442 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 443 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 444 "data/maps/MauvilleCity/scripts.pory"

# 445 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 446 "data/maps/MauvilleCity/scripts.pory"
	lock
# 447 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 448 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 449 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 450 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 451 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 452 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 453 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 454 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 455 "data/maps/MauvilleCity/scripts.pory"
>>>>>>> parent of afa6a5f807 (20250609 02)
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 446 "data/maps/MauvilleCity/scripts.pory"
	release
# 447 "data/maps/MauvilleCity/scripts.pory"
	end
# 448 "data/maps/MauvilleCity/scripts.pory"

<<<<<<< HEAD
# 449 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 450 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 451 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 452 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 453 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 454 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 455 "data/maps/MauvilleCity/scripts.pory"
	release
# 456 "data/maps/MauvilleCity/scripts.pory"
	end
# 457 "data/maps/MauvilleCity/scripts.pory"

# 458 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 459 "data/maps/MauvilleCity/scripts.pory"
=======
# 459 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 460 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 461 "data/maps/MauvilleCity/scripts.pory"
	release
# 462 "data/maps/MauvilleCity/scripts.pory"
	end
# 463 "data/maps/MauvilleCity/scripts.pory"

# 464 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 465 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 466 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 467 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 468 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 469 "data/maps/MauvilleCity/scripts.pory"
>>>>>>> parent of afa6a5f807 (20250609 02)
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 460 "data/maps/MauvilleCity/scripts.pory"
	release
# 461 "data/maps/MauvilleCity/scripts.pory"
	end
# 462 "data/maps/MauvilleCity/scripts.pory"

<<<<<<< HEAD
# 463 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 464 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 465 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 466 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 467 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 468 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 469 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 470 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 471 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 472 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 473 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 474 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 475 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 476 "data/maps/MauvilleCity/scripts.pory"
	end
# 477 "data/maps/MauvilleCity/scripts.pory"

# 478 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 479 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 480 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 481 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 482 "data/maps/MauvilleCity/scripts.pory"

# 483 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 484 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 485 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 486 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 487 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 488 "data/maps/MauvilleCity/scripts.pory"

# 489 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 490 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 491 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 492 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 493 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 494 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 495 "data/maps/MauvilleCity/scripts.pory"

# 496 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 497 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 499 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 500 "data/maps/MauvilleCity/scripts.pory"

# 501 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 509 "data/maps/MauvilleCity/scripts.pory"

# 510 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 514 "data/maps/MauvilleCity/scripts.pory"

# 515 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 516 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 521 "data/maps/MauvilleCity/scripts.pory"

# 522 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 524 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 525 "data/maps/MauvilleCity/scripts.pory"

# 526 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 529 "data/maps/MauvilleCity/scripts.pory"

# 530 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 534 "data/maps/MauvilleCity/scripts.pory"

# 535 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 536 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 537 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 538 "data/maps/MauvilleCity/scripts.pory"

# 539 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 541 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 545 "data/maps/MauvilleCity/scripts.pory"

# 546 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 551 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 553 "data/maps/MauvilleCity/scripts.pory"

# 554 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 555 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 556 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 562 "data/maps/MauvilleCity/scripts.pory"

=======
# 473 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 474 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 475 "data/maps/MauvilleCity/scripts.pory"
	release
# 476 "data/maps/MauvilleCity/scripts.pory"
	end
# 477 "data/maps/MauvilleCity/scripts.pory"

# 478 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 479 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 480 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 481 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 482 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 483 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 484 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 485 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 486 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 487 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 488 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 489 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 490 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 491 "data/maps/MauvilleCity/scripts.pory"
	end
# 492 "data/maps/MauvilleCity/scripts.pory"

# 493 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 494 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 495 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 497 "data/maps/MauvilleCity/scripts.pory"

# 498 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 499 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 503 "data/maps/MauvilleCity/scripts.pory"

# 504 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 510 "data/maps/MauvilleCity/scripts.pory"

# 511 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 515 "data/maps/MauvilleCity/scripts.pory"

# 516 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 521 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 524 "data/maps/MauvilleCity/scripts.pory"

# 525 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 529 "data/maps/MauvilleCity/scripts.pory"

# 530 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 536 "data/maps/MauvilleCity/scripts.pory"

# 537 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 540 "data/maps/MauvilleCity/scripts.pory"

# 541 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 544 "data/maps/MauvilleCity/scripts.pory"

# 545 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 549 "data/maps/MauvilleCity/scripts.pory"

# 550 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 551 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 553 "data/maps/MauvilleCity/scripts.pory"

# 554 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 555 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 556 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 560 "data/maps/MauvilleCity/scripts.pory"

# 561 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
>>>>>>> parent of afa6a5f807 (20250609 02)
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 564 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
MauvilleCity_Text_WallyPokenavCall:
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 574 "data/maps/MauvilleCity/scripts.pory"

# 575 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 578 "data/maps/MauvilleCity/scripts.pory"

# 579 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 591 "data/maps/MauvilleCity/scripts.pory"

# 592 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 594 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 606 "data/maps/MauvilleCity/scripts.pory"

# 607 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 614 "data/maps/MauvilleCity/scripts.pory"

# 615 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 616 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 621 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 622 "data/maps/MauvilleCity/scripts.pory"

# 623 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 627 "data/maps/MauvilleCity/scripts.pory"

# 628 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 630 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 633 "data/maps/MauvilleCity/scripts.pory"

# 634 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 635 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 639 "data/maps/MauvilleCity/scripts.pory"

# 640 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 643 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 644 "data/maps/MauvilleCity/scripts.pory"

# 645 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 646 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 647 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 648 "data/maps/MauvilleCity/scripts.pory"

# 649 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 650 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 652 "data/maps/MauvilleCity/scripts.pory"

# 653 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 654 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 655 "data/maps/MauvilleCity/scripts.pory"
	.string "Leader: WATTSON\l"
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 657 "data/maps/MauvilleCity/scripts.pory"

# 658 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 659 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 660 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 662 "data/maps/MauvilleCity/scripts.pory"
=======
	.string "Why, what's keeping you from becoming\n"
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 568 "data/maps/MauvilleCity/scripts.pory"

# 569 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 574 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 577 "data/maps/MauvilleCity/scripts.pory"

# 578 "data/maps/MauvilleCity/scripts.pory"

# 579 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 589 "data/maps/MauvilleCity/scripts.pory"

# 590 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 593 "data/maps/MauvilleCity/scripts.pory"

# 594 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 606 "data/maps/MauvilleCity/scripts.pory"

# 607 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 616 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 621 "data/maps/MauvilleCity/scripts.pory"

# 622 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 627 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 629 "data/maps/MauvilleCity/scripts.pory"

# 630 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 635 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 637 "data/maps/MauvilleCity/scripts.pory"

# 638 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 640 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 642 "data/maps/MauvilleCity/scripts.pory"

# 643 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 644 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 646 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 647 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 648 "data/maps/MauvilleCity/scripts.pory"

# 649 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 650 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 654 "data/maps/MauvilleCity/scripts.pory"

# 655 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 659 "data/maps/MauvilleCity/scripts.pory"
>>>>>>> parent of afa6a5f807 (20250609 02)

# 660 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 662 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 663 "data/maps/MauvilleCity/scripts.pory"
<<<<<<< HEAD
MauvilleCity_Text_GameCornerSign:
# 664 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 665 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 666 "data/maps/MauvilleCity/scripts.pory"

# 667 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 668 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 669 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 670 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 671 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 672 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 673 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 674 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 675 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 676 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 677 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 678 "data/maps/MauvilleCity/scripts.pory"

# 679 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 680 "data/maps/MauvilleCity/scripts.pory"
=======

# 664 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 665 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 666 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 667 "data/maps/MauvilleCity/scripts.pory"

# 668 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 669 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 670 "data/maps/MauvilleCity/scripts.pory"
	.string "Leader: WATTSON\l"
# 671 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 672 "data/maps/MauvilleCity/scripts.pory"

# 673 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 674 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 675 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 676 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 677 "data/maps/MauvilleCity/scripts.pory"

# 678 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 679 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 680 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 681 "data/maps/MauvilleCity/scripts.pory"

# 682 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 683 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 684 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 685 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 686 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 687 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 688 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 689 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 690 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 691 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 692 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 693 "data/maps/MauvilleCity/scripts.pory"

# 694 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 695 "data/maps/MauvilleCity/scripts.pory"
>>>>>>> parent of afa6a5f807 (20250609 02)
	.string "Hi, have you been checking out TVs?$"
