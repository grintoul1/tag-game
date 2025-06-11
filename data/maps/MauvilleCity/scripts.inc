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
	map_script_2 VAR_PARTNER_EMMIE_STATE, 26, MauvilleCity_EventScript_ProgressEmmieStateReturnToChimney
# 15 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 33, MauvilleCity_EventScript_ProgressEmmieStateReturnToPyre
# 16 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 35, MauvilleCity_EventScript_ProgressEmmieStateReturnToPyre
# 17 "data/maps/MauvilleCity/scripts.pory"
	.2byte 0
# 18 "data/maps/MauvilleCity/scripts.pory"

# 19 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ProgressEmmieStateReturnToPyre::
# 20 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 34
# 21 "data/maps/MauvilleCity/scripts.pory"
	return
# 22 "data/maps/MauvilleCity/scripts.pory"

# 23 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ProgressEmmieStateReturnToChimney::
# 24 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 27
# 25 "data/maps/MauvilleCity/scripts.pory"
	return
# 26 "data/maps/MauvilleCity/scripts.pory"

# 27 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ProgressEmmieState::
# 28 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 2
# 29 "data/maps/MauvilleCity/scripts.pory"
	return
# 30 "data/maps/MauvilleCity/scripts.pory"

# 31 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 32 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 33 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 34 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 35 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 36 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 37 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 38 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 39 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 40 "data/maps/MauvilleCity/scripts.pory"
	end
# 41 "data/maps/MauvilleCity/scripts.pory"

# 42 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 43 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 44 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 45 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 46 "data/maps/MauvilleCity/scripts.pory"
	return
# 47 "data/maps/MauvilleCity/scripts.pory"

# 48 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 49 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 50 "data/maps/MauvilleCity/scripts.pory"
	end
# 51 "data/maps/MauvilleCity/scripts.pory"

# 52 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 53 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 54 "data/maps/MauvilleCity/scripts.pory"
	end
# 55 "data/maps/MauvilleCity/scripts.pory"

# 56 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 57 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 58 "data/maps/MauvilleCity/scripts.pory"
	end
# 59 "data/maps/MauvilleCity/scripts.pory"

# 60 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 61 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 62 "data/maps/MauvilleCity/scripts.pory"
	end
# 63 "data/maps/MauvilleCity/scripts.pory"

# 64 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 65 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 66 "data/maps/MauvilleCity/scripts.pory"
	end
# 67 "data/maps/MauvilleCity/scripts.pory"

# 68 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 69 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 70 "data/maps/MauvilleCity/scripts.pory"
	end
# 71 "data/maps/MauvilleCity/scripts.pory"

# 72 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 73 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 74 "data/maps/MauvilleCity/scripts.pory"
	end
# 75 "data/maps/MauvilleCity/scripts.pory"

# 76 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 77 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 78 "data/maps/MauvilleCity/scripts.pory"
	end
# 79 "data/maps/MauvilleCity/scripts.pory"

# 80 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 81 "data/maps/MauvilleCity/scripts.pory"
	lock
# 82 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 83 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 84 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 85 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 86 "data/maps/MauvilleCity/scripts.pory"
	release
# 87 "data/maps/MauvilleCity/scripts.pory"
	end
# 88 "data/maps/MauvilleCity/scripts.pory"

# 89 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 90 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 91 "data/maps/MauvilleCity/scripts.pory"
	release
# 92 "data/maps/MauvilleCity/scripts.pory"
	end
# 93 "data/maps/MauvilleCity/scripts.pory"

# 94 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 95 "data/maps/MauvilleCity/scripts.pory"
	lock
# 96 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 97 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 98 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 99 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 100 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 101 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/MauvilleCity/scripts.pory"
	release
# 103 "data/maps/MauvilleCity/scripts.pory"
	end
# 104 "data/maps/MauvilleCity/scripts.pory"

# 105 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 106 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 107 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 108 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 109 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 110 "data/maps/MauvilleCity/scripts.pory"
	release
# 111 "data/maps/MauvilleCity/scripts.pory"
	end
# 112 "data/maps/MauvilleCity/scripts.pory"

# 113 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 114 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 115 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 116 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 117 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 118 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 119 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 120 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 121 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 122 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 124 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 125 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 126 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 127 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 128 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 129 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 130 "data/maps/MauvilleCity/scripts.pory"
	end
# 131 "data/maps/MauvilleCity/scripts.pory"

# 132 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 133 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 134 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 135 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 136 "data/maps/MauvilleCity/scripts.pory"
	end
# 137 "data/maps/MauvilleCity/scripts.pory"

# 138 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 139 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 140 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 142 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 143 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 144 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 145 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 146 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 147 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 148 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 149 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 151 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 152 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 153 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 154 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 155 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 156 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 157 "data/maps/MauvilleCity/scripts.pory"
	end
# 158 "data/maps/MauvilleCity/scripts.pory"

# 159 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 160 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 161 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 162 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 163 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 164 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 165 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 166 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 167 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 168 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 169 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 170 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 171 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 172 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 173 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 174 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 175 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 176 "data/maps/MauvilleCity/scripts.pory"
	end
# 177 "data/maps/MauvilleCity/scripts.pory"

# 178 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 179 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 180 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 181 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 182 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 183 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 184 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 185 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 186 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 187 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 188 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 189 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 190 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 191 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 192 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 193 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 194 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 195 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 196 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 197 "data/maps/MauvilleCity/scripts.pory"
	end
# 198 "data/maps/MauvilleCity/scripts.pory"

# 199 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 200 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 201 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 202 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 203 "data/maps/MauvilleCity/scripts.pory"
	return
# 204 "data/maps/MauvilleCity/scripts.pory"

# 205 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 206 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 207 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 208 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 209 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 210 "data/maps/MauvilleCity/scripts.pory"
	return
# 211 "data/maps/MauvilleCity/scripts.pory"

# 212 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 213 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 214 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 215 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 216 "data/maps/MauvilleCity/scripts.pory"
	return
# 217 "data/maps/MauvilleCity/scripts.pory"

# 218 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 219 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 220 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 221 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 222 "data/maps/MauvilleCity/scripts.pory"
	return
# 223 "data/maps/MauvilleCity/scripts.pory"

# 224 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 225 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 226 "data/maps/MauvilleCity/scripts.pory"
	multi_2p_vs_1 TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat, PARTNER_EMMIE
# 227 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_RESULT
# 228 "data/maps/MauvilleCity/scripts.pory"
	case 1, MauvilleCity_EventScript_WallyVictory
# 229 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 230 "data/maps/MauvilleCity/scripts.pory"
	special SetCB2WhiteOut
# 231 "data/maps/MauvilleCity/scripts.pory"
	waitstate
# 232 "data/maps/MauvilleCity/scripts.pory"

# 233 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyVictory::
# 234 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 235 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 236 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 237 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 238 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 239 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 240 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 241 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 242 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 243 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 244 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 245 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 246 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 247 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 248 "data/maps/MauvilleCity/scripts.pory"
	end
# 249 "data/maps/MauvilleCity/scripts.pory"

# 250 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 251 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 252 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 253 "data/maps/MauvilleCity/scripts.pory"
	release
# 254 "data/maps/MauvilleCity/scripts.pory"
	end
# 255 "data/maps/MauvilleCity/scripts.pory"

# 256 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 257 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 258 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 259 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 260 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 261 "data/maps/MauvilleCity/scripts.pory"
	end
# 262 "data/maps/MauvilleCity/scripts.pory"

# 263 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 264 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 265 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 266 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 267 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 268 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 269 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 270 "data/maps/MauvilleCity/scripts.pory"

# 271 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 272 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 273 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 274 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 275 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 276 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 277 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 278 "data/maps/MauvilleCity/scripts.pory"

# 279 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 280 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 281 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 282 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 283 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 284 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	delay_8
# 291 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 292 "data/maps/MauvilleCity/scripts.pory"

# 293 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 294 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 295 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 296 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 297 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 298 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 299 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 300 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 301 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 302 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 303 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 304 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 305 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 306 "data/maps/MauvilleCity/scripts.pory"

# 307 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 308 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 309 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 310 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 311 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 312 "data/maps/MauvilleCity/scripts.pory"

# 313 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 314 "data/maps/MauvilleCity/scripts.pory"
	delay_16
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
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 321 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 322 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 323 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 324 "data/maps/MauvilleCity/scripts.pory"

# 325 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 326 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 327 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 328 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 329 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 330 "data/maps/MauvilleCity/scripts.pory"

# 331 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 332 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 333 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 334 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 335 "data/maps/MauvilleCity/scripts.pory"

# 336 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 337 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 338 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 339 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 340 "data/maps/MauvilleCity/scripts.pory"

# 341 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 344 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 347 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 348 "data/maps/MauvilleCity/scripts.pory"

# 349 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 354 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 355 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 356 "data/maps/MauvilleCity/scripts.pory"

# 357 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 358 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 359 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 360 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 361 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 362 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 363 "data/maps/MauvilleCity/scripts.pory"

# 364 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 367 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 368 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 369 "data/maps/MauvilleCity/scripts.pory"

# 370 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 372 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 373 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 374 "data/maps/MauvilleCity/scripts.pory"

# 375 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	step_end
# 385 "data/maps/MauvilleCity/scripts.pory"

# 386 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 392 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 396 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 397 "data/maps/MauvilleCity/scripts.pory"

# 398 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 399 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 400 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 405 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 410 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 411 "data/maps/MauvilleCity/scripts.pory"

# 412 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 413 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 414 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 415 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 416 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 417 "data/maps/MauvilleCity/scripts.pory"
	walk_up
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
	walk_up
# 424 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 425 "data/maps/MauvilleCity/scripts.pory"

# 426 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 427 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 428 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	step_end
# 437 "data/maps/MauvilleCity/scripts.pory"

# 438 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 439 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 440 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 441 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 442 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 443 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 444 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 445 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 446 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 447 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 448 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 449 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 450 "data/maps/MauvilleCity/scripts.pory"

# 451 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 452 "data/maps/MauvilleCity/scripts.pory"
	lock
# 453 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 454 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 455 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 456 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 457 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 458 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 459 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 460 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 461 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 462 "data/maps/MauvilleCity/scripts.pory"
	release
# 463 "data/maps/MauvilleCity/scripts.pory"
	end
# 464 "data/maps/MauvilleCity/scripts.pory"

# 465 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 466 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 467 "data/maps/MauvilleCity/scripts.pory"
	release
# 468 "data/maps/MauvilleCity/scripts.pory"
	end
# 469 "data/maps/MauvilleCity/scripts.pory"

# 470 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 471 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 472 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 473 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 474 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 475 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 476 "data/maps/MauvilleCity/scripts.pory"
	release
# 477 "data/maps/MauvilleCity/scripts.pory"
	end
# 478 "data/maps/MauvilleCity/scripts.pory"

# 479 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 480 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 481 "data/maps/MauvilleCity/scripts.pory"
	release
# 482 "data/maps/MauvilleCity/scripts.pory"
	end
# 483 "data/maps/MauvilleCity/scripts.pory"

# 484 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 485 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 486 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 487 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 488 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 489 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 490 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 491 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 492 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 493 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 494 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 495 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 496 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 497 "data/maps/MauvilleCity/scripts.pory"
	end
# 498 "data/maps/MauvilleCity/scripts.pory"

# 499 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 503 "data/maps/MauvilleCity/scripts.pory"

# 504 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 509 "data/maps/MauvilleCity/scripts.pory"

# 510 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 516 "data/maps/MauvilleCity/scripts.pory"

# 517 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 521 "data/maps/MauvilleCity/scripts.pory"

# 522 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 524 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 530 "data/maps/MauvilleCity/scripts.pory"

# 531 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 535 "data/maps/MauvilleCity/scripts.pory"

# 536 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 537 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 541 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 542 "data/maps/MauvilleCity/scripts.pory"

# 543 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 546 "data/maps/MauvilleCity/scripts.pory"

# 547 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 550 "data/maps/MauvilleCity/scripts.pory"

# 551 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 555 "data/maps/MauvilleCity/scripts.pory"

# 556 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 559 "data/maps/MauvilleCity/scripts.pory"

# 560 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 566 "data/maps/MauvilleCity/scripts.pory"

# 567 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 574 "data/maps/MauvilleCity/scripts.pory"

# 575 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 583 "data/maps/MauvilleCity/scripts.pory"

# 584 "data/maps/MauvilleCity/scripts.pory"

# 585 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 594 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 595 "data/maps/MauvilleCity/scripts.pory"

# 596 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 599 "data/maps/MauvilleCity/scripts.pory"

# 600 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 612 "data/maps/MauvilleCity/scripts.pory"

# 613 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 616 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 621 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 622 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 627 "data/maps/MauvilleCity/scripts.pory"

# 628 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 630 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 635 "data/maps/MauvilleCity/scripts.pory"

# 636 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 640 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 643 "data/maps/MauvilleCity/scripts.pory"

# 644 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 646 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 647 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 648 "data/maps/MauvilleCity/scripts.pory"

# 649 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 650 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 654 "data/maps/MauvilleCity/scripts.pory"

# 655 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 659 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 660 "data/maps/MauvilleCity/scripts.pory"

# 661 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 662 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 663 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 664 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 665 "data/maps/MauvilleCity/scripts.pory"

# 666 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 667 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 668 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 669 "data/maps/MauvilleCity/scripts.pory"

# 670 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 671 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 672 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 673 "data/maps/MauvilleCity/scripts.pory"

# 674 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 675 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 676 "data/maps/MauvilleCity/scripts.pory"
	.string "Leader: WATTSON\l"
# 677 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 678 "data/maps/MauvilleCity/scripts.pory"

# 679 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 680 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 681 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 682 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 683 "data/maps/MauvilleCity/scripts.pory"

# 684 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 685 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 686 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 687 "data/maps/MauvilleCity/scripts.pory"

# 688 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 689 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 690 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 691 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 692 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 693 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 694 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 695 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 696 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 697 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 698 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 699 "data/maps/MauvilleCity/scripts.pory"

# 700 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 701 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
