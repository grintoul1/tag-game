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
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_OnFrame
# 9 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 10 "data/maps/MauvilleCity/scripts.pory"

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
MauvilleCity_EventScript_ProgressEmmieState::
# 17 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 2
# 18 "data/maps/MauvilleCity/scripts.pory"
	return
# 19 "data/maps/MauvilleCity/scripts.pory"

# 20 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 21 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 22 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 23 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 24 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 25 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 26 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 27 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 28 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 29 "data/maps/MauvilleCity/scripts.pory"
	end
# 30 "data/maps/MauvilleCity/scripts.pory"

# 31 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 32 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 33 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 34 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 35 "data/maps/MauvilleCity/scripts.pory"
	return
# 36 "data/maps/MauvilleCity/scripts.pory"

# 37 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 38 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 39 "data/maps/MauvilleCity/scripts.pory"
	end
# 40 "data/maps/MauvilleCity/scripts.pory"

# 41 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 42 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 43 "data/maps/MauvilleCity/scripts.pory"
	end
# 44 "data/maps/MauvilleCity/scripts.pory"

# 45 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 46 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 47 "data/maps/MauvilleCity/scripts.pory"
	end
# 48 "data/maps/MauvilleCity/scripts.pory"

# 49 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 50 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 51 "data/maps/MauvilleCity/scripts.pory"
	end
# 52 "data/maps/MauvilleCity/scripts.pory"

# 53 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 54 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 55 "data/maps/MauvilleCity/scripts.pory"
	end
# 56 "data/maps/MauvilleCity/scripts.pory"

# 57 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 58 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 59 "data/maps/MauvilleCity/scripts.pory"
	end
# 60 "data/maps/MauvilleCity/scripts.pory"

# 61 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 62 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 63 "data/maps/MauvilleCity/scripts.pory"
	end
# 64 "data/maps/MauvilleCity/scripts.pory"

# 65 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 66 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 67 "data/maps/MauvilleCity/scripts.pory"
	end
# 68 "data/maps/MauvilleCity/scripts.pory"

# 69 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 70 "data/maps/MauvilleCity/scripts.pory"
	lock
# 71 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 72 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 73 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 74 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 75 "data/maps/MauvilleCity/scripts.pory"
	release
# 76 "data/maps/MauvilleCity/scripts.pory"
	end
# 77 "data/maps/MauvilleCity/scripts.pory"

# 78 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 79 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 80 "data/maps/MauvilleCity/scripts.pory"
	release
# 81 "data/maps/MauvilleCity/scripts.pory"
	end
# 82 "data/maps/MauvilleCity/scripts.pory"

# 83 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 84 "data/maps/MauvilleCity/scripts.pory"
	lock
# 85 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 86 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 87 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 88 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 89 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 90 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/MauvilleCity/scripts.pory"
	release
# 92 "data/maps/MauvilleCity/scripts.pory"
	end
# 93 "data/maps/MauvilleCity/scripts.pory"

# 94 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 95 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 96 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 97 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 98 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/MauvilleCity/scripts.pory"
	release
# 100 "data/maps/MauvilleCity/scripts.pory"
	end
# 101 "data/maps/MauvilleCity/scripts.pory"

# 102 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 103 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 104 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 105 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 106 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 108 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 109 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 110 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 111 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 112 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 113 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 114 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 115 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 116 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 117 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 118 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 119 "data/maps/MauvilleCity/scripts.pory"
	end
# 120 "data/maps/MauvilleCity/scripts.pory"

# 121 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 122 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 123 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 124 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 125 "data/maps/MauvilleCity/scripts.pory"
	end
# 126 "data/maps/MauvilleCity/scripts.pory"

# 127 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 128 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 129 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 130 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 131 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 132 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 133 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 134 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 136 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 137 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 138 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 139 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 140 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 142 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 143 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 144 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 145 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 146 "data/maps/MauvilleCity/scripts.pory"
	end
# 147 "data/maps/MauvilleCity/scripts.pory"

# 148 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 149 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 150 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 151 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 152 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 153 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 154 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 156 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 157 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 158 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 159 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 160 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 161 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 162 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 163 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 164 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 165 "data/maps/MauvilleCity/scripts.pory"
	end
# 166 "data/maps/MauvilleCity/scripts.pory"

# 167 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 168 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 169 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 170 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 171 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 172 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 173 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 174 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 175 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 176 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 177 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 178 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 179 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 180 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 181 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 182 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 183 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 184 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 185 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 186 "data/maps/MauvilleCity/scripts.pory"
	end
# 187 "data/maps/MauvilleCity/scripts.pory"

# 188 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 189 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 190 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 191 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 192 "data/maps/MauvilleCity/scripts.pory"
	return
# 193 "data/maps/MauvilleCity/scripts.pory"

# 194 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 195 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 196 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 197 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 198 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 199 "data/maps/MauvilleCity/scripts.pory"
	return
# 200 "data/maps/MauvilleCity/scripts.pory"

# 201 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 202 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 203 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 204 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/MauvilleCity/scripts.pory"
	return
# 206 "data/maps/MauvilleCity/scripts.pory"

# 207 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 208 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 209 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 210 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/MauvilleCity/scripts.pory"
	return
# 212 "data/maps/MauvilleCity/scripts.pory"

# 213 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 214 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 215 "data/maps/MauvilleCity/scripts.pory"
	multi_2p_vs_1 TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat, PARTNER_EMMIE
# 216 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_RESULT
# 217 "data/maps/MauvilleCity/scripts.pory"
	case 1, MauvilleCity_EventScript_WallyVictory
# 218 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 219 "data/maps/MauvilleCity/scripts.pory"
	special SetCB2WhiteOut
# 220 "data/maps/MauvilleCity/scripts.pory"
	waitstate
# 221 "data/maps/MauvilleCity/scripts.pory"

# 222 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyVictory::
# 223 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 224 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 225 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 226 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 227 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 228 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 229 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 230 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 231 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 232 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 233 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 234 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 235 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 236 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 237 "data/maps/MauvilleCity/scripts.pory"
	end
# 238 "data/maps/MauvilleCity/scripts.pory"

# 239 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 240 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 241 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 242 "data/maps/MauvilleCity/scripts.pory"
	release
# 243 "data/maps/MauvilleCity/scripts.pory"
	end
# 244 "data/maps/MauvilleCity/scripts.pory"

# 245 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 246 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 247 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 248 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 249 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 250 "data/maps/MauvilleCity/scripts.pory"
	end
# 251 "data/maps/MauvilleCity/scripts.pory"

# 252 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 254 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 256 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 257 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 258 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 259 "data/maps/MauvilleCity/scripts.pory"

# 260 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 262 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 263 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 264 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 265 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 266 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 267 "data/maps/MauvilleCity/scripts.pory"

# 268 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 269 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 270 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 271 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 272 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 273 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 274 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 275 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 276 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 277 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 278 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 279 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 280 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 281 "data/maps/MauvilleCity/scripts.pory"

# 282 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 283 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 284 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 285 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 286 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 287 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 288 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 289 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 290 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 291 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 292 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 293 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 294 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 295 "data/maps/MauvilleCity/scripts.pory"

# 296 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 297 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 298 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 299 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 300 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 301 "data/maps/MauvilleCity/scripts.pory"

# 302 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 303 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 304 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 305 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 306 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 307 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 308 "data/maps/MauvilleCity/scripts.pory"

# 309 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 310 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 311 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 312 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 313 "data/maps/MauvilleCity/scripts.pory"

# 314 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 315 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 316 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 317 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 318 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 319 "data/maps/MauvilleCity/scripts.pory"

# 320 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 321 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 322 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 323 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 324 "data/maps/MauvilleCity/scripts.pory"

# 325 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 326 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 327 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 328 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 329 "data/maps/MauvilleCity/scripts.pory"

# 330 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 331 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 333 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 336 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 337 "data/maps/MauvilleCity/scripts.pory"

# 338 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 339 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 344 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 345 "data/maps/MauvilleCity/scripts.pory"

# 346 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 347 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 348 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 349 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 351 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 352 "data/maps/MauvilleCity/scripts.pory"

# 353 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 354 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 355 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 356 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 357 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 358 "data/maps/MauvilleCity/scripts.pory"

# 359 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 360 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 361 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 362 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 363 "data/maps/MauvilleCity/scripts.pory"

# 364 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 367 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 370 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 372 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 373 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 374 "data/maps/MauvilleCity/scripts.pory"

# 375 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 378 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 380 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 382 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 384 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 385 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 386 "data/maps/MauvilleCity/scripts.pory"

# 387 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 392 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 398 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 399 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 400 "data/maps/MauvilleCity/scripts.pory"

# 401 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 405 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_up
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
# 412 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 413 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 414 "data/maps/MauvilleCity/scripts.pory"

# 415 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 416 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 417 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 418 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 419 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 420 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 421 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 422 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 423 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 424 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 425 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 426 "data/maps/MauvilleCity/scripts.pory"

# 427 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 428 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 429 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 430 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 431 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 432 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 433 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 434 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 435 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 436 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 437 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 438 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 439 "data/maps/MauvilleCity/scripts.pory"

# 440 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 441 "data/maps/MauvilleCity/scripts.pory"
	lock
# 442 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 443 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 444 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 445 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 446 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 447 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 448 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 449 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 450 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 451 "data/maps/MauvilleCity/scripts.pory"
	release
# 452 "data/maps/MauvilleCity/scripts.pory"
	end
# 453 "data/maps/MauvilleCity/scripts.pory"

# 454 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 455 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 456 "data/maps/MauvilleCity/scripts.pory"
	release
# 457 "data/maps/MauvilleCity/scripts.pory"
	end
# 458 "data/maps/MauvilleCity/scripts.pory"

# 459 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 460 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 461 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 462 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 463 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 464 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 465 "data/maps/MauvilleCity/scripts.pory"
	release
# 466 "data/maps/MauvilleCity/scripts.pory"
	end
# 467 "data/maps/MauvilleCity/scripts.pory"

# 468 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 469 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 470 "data/maps/MauvilleCity/scripts.pory"
	release
# 471 "data/maps/MauvilleCity/scripts.pory"
	end
# 472 "data/maps/MauvilleCity/scripts.pory"

# 473 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 474 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 475 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 476 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 477 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 478 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 479 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 480 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 481 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 482 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 483 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 484 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 485 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 486 "data/maps/MauvilleCity/scripts.pory"
	end
# 487 "data/maps/MauvilleCity/scripts.pory"

# 488 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 489 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 490 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 491 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 492 "data/maps/MauvilleCity/scripts.pory"

# 493 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 494 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 495 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 497 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 498 "data/maps/MauvilleCity/scripts.pory"

# 499 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 505 "data/maps/MauvilleCity/scripts.pory"

# 506 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 510 "data/maps/MauvilleCity/scripts.pory"

# 511 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 516 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 519 "data/maps/MauvilleCity/scripts.pory"

# 520 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 521 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 524 "data/maps/MauvilleCity/scripts.pory"

# 525 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 530 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 531 "data/maps/MauvilleCity/scripts.pory"

# 532 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 535 "data/maps/MauvilleCity/scripts.pory"

# 536 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 537 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 539 "data/maps/MauvilleCity/scripts.pory"

# 540 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 541 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 544 "data/maps/MauvilleCity/scripts.pory"

# 545 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 548 "data/maps/MauvilleCity/scripts.pory"

# 549 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 551 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 555 "data/maps/MauvilleCity/scripts.pory"

# 556 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 563 "data/maps/MauvilleCity/scripts.pory"

# 564 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 572 "data/maps/MauvilleCity/scripts.pory"

# 573 "data/maps/MauvilleCity/scripts.pory"

# 574 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 584 "data/maps/MauvilleCity/scripts.pory"

# 585 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 588 "data/maps/MauvilleCity/scripts.pory"

# 589 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 594 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 601 "data/maps/MauvilleCity/scripts.pory"

# 602 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 616 "data/maps/MauvilleCity/scripts.pory"

# 617 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 621 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 622 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 624 "data/maps/MauvilleCity/scripts.pory"

# 625 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 627 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 630 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 632 "data/maps/MauvilleCity/scripts.pory"

# 633 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 635 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 637 "data/maps/MauvilleCity/scripts.pory"

# 638 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 640 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 643 "data/maps/MauvilleCity/scripts.pory"

# 644 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 646 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 647 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 649 "data/maps/MauvilleCity/scripts.pory"

# 650 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 654 "data/maps/MauvilleCity/scripts.pory"

# 655 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 658 "data/maps/MauvilleCity/scripts.pory"

# 659 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 660 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 662 "data/maps/MauvilleCity/scripts.pory"

# 663 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 664 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 665 "data/maps/MauvilleCity/scripts.pory"
	.string "Leader: WATTSON\l"
# 666 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 667 "data/maps/MauvilleCity/scripts.pory"

# 668 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 669 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 670 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 671 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 672 "data/maps/MauvilleCity/scripts.pory"

# 673 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 674 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 675 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 676 "data/maps/MauvilleCity/scripts.pory"

# 677 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 678 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 679 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 680 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 681 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 682 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 683 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 684 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 685 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 686 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 687 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 688 "data/maps/MauvilleCity/scripts.pory"

# 689 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 690 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
