# 1 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_NORMAN, 1
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_MARY, 2
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_RANDALL, 3
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_GEORGE, 6
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_ALEXIA, 5
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_PARKER, 4
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_BERKE, 8
# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_JODY, 7
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLY, 10
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLYS_DAD, 11
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"

# 13 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"

# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"

# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_RANDALL_DEFEATED, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_MARY_DEFEATED, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_PARKER_DEFEATED, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_ALEXIA_DEFEATED, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_GEORGE_DEFEATED, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_JODY_DEFEATED, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_BERKE_DEFEATED, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"

# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"

# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"

# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 5, 108
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"

# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"

# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"

# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"

# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_EmmiePositionAfterWally
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"

# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EmmiePositionBeforeWally::
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 5, 111
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_PETALBURG_CITY_GYM
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"

# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EmmiePositionAfterWally::
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 3, 108
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_PETALBURG_CITY_GYM
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"

# 92 "data/maps/PetalburgCity_Gym/scripts.pory"

# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 5, 111
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_PETALBURG_CITY_GYM
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"

# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_EnterRoom2
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 9, PetalburgCity_Gym_EventScript_ProgressEmmieState
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"

# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ProgressEmmieState::
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 10
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"

# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom2::
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp3
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"

# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOnYourWay, MSGBOX_DEFAULT
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"

# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"

# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_AUTOCLOSE
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_NormanDoMultiBattle
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"

# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanDoMultiBattle::
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat, PARTNER_EMMIE
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_NormanVictory
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"

# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanVictory::
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
addvar VAR_PETALBURG_GYM_STATE, 1
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
setvar VAR_LEVEL_CAP, 42
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
setvar VAR_PARTNER_EMMIE_STATE, 11
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_NormanDefeated
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"

# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Norman_NotReady:
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
walk_down
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
step_end
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"

# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"

# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"

# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"

# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"

# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"

# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyArriveNorth
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyFaceDown
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 9
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"

# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"

# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"

# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"

# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"

# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"

# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"

# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"

# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"

# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"

# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"

# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"

# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"

# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"

# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"

# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"

# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"

# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"

# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"

# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"

# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"

# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"

# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"

# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"

# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"

# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"

# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"

# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"

# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"

# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"

# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanDefeated::
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RANDALL_DEFEATED
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_MARY_DEFEATED
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_PARKER_DEFEATED
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_ALEXIA_DEFEATED
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_GEORGE_DEFEATED
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_JODY_DEFEATED
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BERKE_DEFEATED
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"

# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"

# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"

# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"

# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"

# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"

# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"

# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"

# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"

# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"

# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"

# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"

# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"

# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"

# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"

# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"

# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"

# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"

# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"

# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"

# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"

# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"

# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"

# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"

# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"

# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"

# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"

# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"

# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"

# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"

# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"

# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"

# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"

# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"

# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"

# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"

# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"

# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"

# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"

# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"

# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"

# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RANDALL_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"

# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RANDALL_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"

# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_MARY_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"

# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_MARY_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"

# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_PARKER_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"

# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_ALEXIA_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"

# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_ALEXIA_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"

# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_GEORGE_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"

# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_JODY_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"

# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_BERKE_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"

# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_RANDALL_DEFEATED, PetalburgCity_Gym_EventScript_Randall2
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_RandallIntro, MSGBOX_AUTOCLOSE
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_RandallDoMultiBattle
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"

# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallDoMultiBattle::
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallDefeat, PARTNER_EMMIE
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_RandallVictory
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"

# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallVictory::
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_RANDALL_DEFEATED
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"

# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall2::
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"

# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"

# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"

# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_PARKER_DEFEATED, PetalburgCity_Gym_EventScript_Parker2
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_ParkerIntro, MSGBOX_AUTOCLOSE
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_ParkerDoMultiBattle
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"

# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerDoMultiBattle::
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerDefeat, PARTNER_EMMIE
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_ParkerVictory
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"

# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerVictory::
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_PARKER_DEFEATED
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"

# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker2::
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_GEORGE_DEFEATED, PetalburgCity_Gym_EventScript_George2
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_GeorgeIntro, MSGBOX_AUTOCLOSE
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_GeorgeDoMultiBattle
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgeDoMultiBattle::
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeDefeat, PARTNER_EMMIE
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_GeorgeVictory
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgeVictory::
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_GEORGE_DEFEATED
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George2::
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_BERKE_DEFEATED, PetalburgCity_Gym_EventScript_Berke2
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_BerkeIntro, MSGBOX_AUTOCLOSE
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_BerkeDoMultiBattle
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkeDoMultiBattle::
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeDefeat, PARTNER_EMMIE
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_BerkeVictory
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkeVictory::
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_BERKE_DEFEATED
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke2::
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_MARY_DEFEATED, PetalburgCity_Gym_EventScript_Mary2
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_MaryIntro, MSGBOX_AUTOCLOSE
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_MaryDoMultiBattle
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryDoMultiBattle::
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_MARY, PetalburgCity_Gym_Text_MaryDefeat, PARTNER_EMMIE
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_MaryVictory
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryVictory::
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_MARY_DEFEATED
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary2::
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_ALEXIA_DEFEATED, PetalburgCity_Gym_EventScript_Alexia2
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_AlexiaIntro, MSGBOX_AUTOCLOSE
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_AlexiaDoMultiBattle
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaDoMultiBattle::
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaDefeat, PARTNER_EMMIE
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_AlexiaVictory
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaVictory::
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_ALEXIA_DEFEATED
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia2::
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_JODY_DEFEATED, PetalburgCity_Gym_EventScript_Jody2
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_JodyIntro, MSGBOX_AUTOCLOSE
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_JodyDoMultiBattle
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyDoMultiBattle::
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_JODY, PetalburgCity_Gym_Text_JodyDefeat, PARTNER_EMMIE
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_JodyVictory
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyVictory::
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_JODY_DEFEATED
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody2::
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_VarReset::
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm?\p"
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your POKéMON.\p"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a POKéMON, please…$"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm? You're… Uh… Oh, right.\n"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're WALLY, right?$"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: I'm going to go stay with my\n"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in VERDANTURF TOWN.\p"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a POKéMON along.\p"
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a POKéMON before.\n"
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm. I see.$"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}, you heard that,\n"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with WALLY and make sure that he\n"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a POKéMON.$"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY, here, I'll loan you my POKéMON.\p"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a ZIGZAGOON!$"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A POKéMON!\p"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm. I'll give you a POKé BALL, too.\n"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a POKé BALL!$"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: So, did it work out?$"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Thank you, yes, it did.\n"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your POKéMON back.\p"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my POKéMON.\p"
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Now…\p"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "If you want to become strong\n"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "trainers, here's my advice.\p"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for Mauville City beyond this\n"
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the gym leader, Wattson.\p"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After him, go on to Roxanne in\n"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Rustboro City and defeat her.\p"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect badges from them,\n"
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a gym leader, too.\n"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you collect\n"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "2 badges.\p"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, I know I'm away from home a lot,\n"
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have a gift for you.\p"
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "With this you will be able to\n"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "visit me with ease at any time.$"
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOnYourWay:
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Now, be on your way kids!$"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm? Aren't you going to the\n"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON GYM in RUSTBORO CITY?\p"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn TRAINER.\p"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me two GYM BADGES, okay?$"
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: I see… So, you've beaten\n"
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD TOWN is a\n"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER named BRAWLY.\p"
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm… {PLAYER}, you have gotten\n"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm…\n"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get two GYM BADGES.\p"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fine, as I promised, we will have\n"
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON battle.\p"
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a real battle with my own child.\p"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a GYM LEADER to win.\p"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\n"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from DAD!$"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: With that BADGE, the DEFENSE\n"
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of all your POKéMON will increase.\p"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON that know the HM move SURF\n"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use it correctly.$"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: TM42 contains FACADE.\p"
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It doubles the power of moves if\n"
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the POKéMON is poisoned, paralyzed,\l"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "or burned.\p"
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It might be able to turn a bad\n"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "situation into an advantage.$"
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: As the GYM LEADER, I can't\n"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…\p"
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Anyway, I want you to continue to\n"
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "grow as a trainer.\p"
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I've heard that Mr. Briney and his\n"
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wingull, Peeko, have been reunited.\p"
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm sure if you go speak with him\n"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "at his house to the west, he will\p"
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "take you kids on to Dewford Town.$"
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, you don't mind, do you?\p"
# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}, you should go visit\n"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a TRAINER to\n"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}, how are things going?\p"
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of POKéMON is deep.\p"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, kids?\p"
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Every battle in the gym will be a\n"
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "two vs one double battle.\p"
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Choose your doors carefully, and\n"
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best of luck!$"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your POKéMON.\p"
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your POKéMON!$"
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1630 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1632 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1633 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1634 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1635 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1646 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1647 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 1648 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1649 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1651 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our LEADER's kid.\p"
# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A TRAINER's abilities are\n"
# 1653 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1654 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The ONE-HIT KO ROOM is next.$"
# 1657 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1658 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1659 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
# 1660 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a LEADER.$"
# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1662 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1663 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1664 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 1665 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1666 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON to take a critical hit!$"
# 1667 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1668 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1670 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1671 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1672 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1673 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1674 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 1675 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1676 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1677 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1678 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1680 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1681 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the LEADER,\n"
# 1682 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1683 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1684 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1685 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1686 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1687 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1689 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1690 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1691 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1692 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1693 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1694 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1695 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1696 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1697 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1698 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1699 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your POKéMON's ATTACK power will be\n"
# 1700 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1701 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1702 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1703 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1704 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1705 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1706 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our POKéMON.$"
# 1707 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1708 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1709 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1710 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1711 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1712 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1713 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1714 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1716 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1717 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1718 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1719 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1720 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1721 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1722 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1723 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1724 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1725 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1726 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1727 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1728 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1729 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 1730 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1731 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1732 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LEADER's kid!$"
# 1733 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1734 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1735 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1736 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1737 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1738 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your POKéMON…\n"
# 1739 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1740 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The GYM LEADER, your\n"
# 1741 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1742 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1743 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1744 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your POKéMON\n"
# 1745 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1746 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1747 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 1748 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their POKéMON.$"
# 1749 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1750 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1751 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1752 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1753 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1754 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1755 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 1756 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1757 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1758 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1759 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1760 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1761 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1762 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1763 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1764 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 1765 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1766 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1767 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1768 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 1769 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1770 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1771 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1772 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 1773 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1774 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1775 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1776 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1777 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1778 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1779 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1780 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1781 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1782 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1783 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1784 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 1785 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1786 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1787 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1788 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1789 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what POKéMON await\n"
# 1790 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1791 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1792 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1793 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1794 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"
# 1795 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1796 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1797 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 1798 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN'S CERTIFIED TRAINERS:\n"
# 1799 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1800 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1801 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1802 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}…\n"
# 1803 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1804 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1805 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1806 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1807 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1808 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1809 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1810 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1811 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1812 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1813 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1814 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1815 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1816 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1817 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1818 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}…\n"
# 1819 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1820 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1821 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1822 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1823 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1824 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1825 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}…\n"
# 1826 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1827 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1828 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1829 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1830 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1831 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1832 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1833 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one POKéMON that is\n"
# 1834 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1835 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1836 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
# 1837 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1838 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReadyToFight:
# 1839 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Are you ready, kids?$"
# 1840 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1841 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ComeBackWhenReady:
# 1842 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Don't leave me waiting too long!$"
