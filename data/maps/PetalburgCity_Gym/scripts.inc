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
	map_script_2 VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_EmmiePositionBeforeWally
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_EmmiePositionAfterWally
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"

# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EmmiePositionBeforeWally::
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 5, 111
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_PETALBURG_CITY_GYM
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"

# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EmmiePositionAfterWally::
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 3, 108
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_PETALBURG_CITY_GYM
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"

# 93 "data/maps/PetalburgCity_Gym/scripts.pory"

# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"

# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_EnterRoom2
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"

# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom2::
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp3
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"

# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOnYourWay, MSGBOX_DEFAULT
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"

# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"

# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_AUTOCLOSE
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_NormanDoMultiBattle
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"

# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanDoMultiBattle::
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat, PARTNER_EMMIE
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_NormanVictory
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"

# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanVictory::
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
addvar VAR_PETALBURG_GYM_STATE, 1
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
setvar VAR_LEVEL_CAP, 42
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_NormanDefeated
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"

# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Norman_NotReady:
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
walk_down
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
step_end
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"

# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"

# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"

# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"

# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"

# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"

# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyArriveNorth
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyFaceDown
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 9
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"

# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"

# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"

# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"

# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"

# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"

# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"

# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"

# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"

# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"

# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"

# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"

# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"

# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"

# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"

# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"

# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"

# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"

# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"

# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"

# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"

# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"

# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"

# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"

# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"

# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"

# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"

# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"

# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"

# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"

# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanDefeated::
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RANDALL_DEFEATED
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_MARY_DEFEATED
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_PARKER_DEFEATED
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_ALEXIA_DEFEATED
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_GEORGE_DEFEATED
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_JODY_DEFEATED
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BERKE_DEFEATED
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"

# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"

# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"

# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"

# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"

# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"

# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"

# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"

# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"

# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"

# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"

# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"

# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"

# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"

# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"

# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"

# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"

# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"

# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"

# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"

# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"

# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"

# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"

# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"

# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"

# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"

# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"

# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"

# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"

# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"

# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"

# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"

# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"

# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"

# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"

# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"

# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"

# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"

# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"

# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"

# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"

# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RANDALL_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"

# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RANDALL_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"

# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_MARY_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"

# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_MARY_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"

# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_PARKER_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"

# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_ALEXIA_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"

# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_ALEXIA_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"

# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_GEORGE_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"

# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_JODY_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"

# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_BERKE_DEFEATED, PetalburgCity_Gym_EventScript_DoorLocked
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"

# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_RANDALL_DEFEATED, PetalburgCity_Gym_EventScript_Randall2
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_RandallIntro, MSGBOX_AUTOCLOSE
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_RandallDoMultiBattle
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"

# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallDoMultiBattle::
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallDefeat, PARTNER_EMMIE
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_RandallVictory
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"

# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallVictory::
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_RANDALL_DEFEATED
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"

# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall2::
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"

# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"

# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"

# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_PARKER_DEFEATED, PetalburgCity_Gym_EventScript_Parker2
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_ParkerIntro, MSGBOX_AUTOCLOSE
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_ParkerDoMultiBattle
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"

# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerDoMultiBattle::
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerDefeat, PARTNER_EMMIE
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_ParkerVictory
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"

# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerVictory::
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_PARKER_DEFEATED
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"

# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker2::
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"

# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_GEORGE_DEFEATED, PetalburgCity_Gym_EventScript_George2
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_GeorgeIntro, MSGBOX_AUTOCLOSE
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_GeorgeDoMultiBattle
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgeDoMultiBattle::
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeDefeat, PARTNER_EMMIE
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_GeorgeVictory
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgeVictory::
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_GEORGE_DEFEATED
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George2::
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_BERKE_DEFEATED, PetalburgCity_Gym_EventScript_Berke2
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_BerkeIntro, MSGBOX_AUTOCLOSE
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_BerkeDoMultiBattle
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkeDoMultiBattle::
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeDefeat, PARTNER_EMMIE
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_BerkeVictory
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkeVictory::
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_BERKE_DEFEATED
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke2::
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_MARY_DEFEATED, PetalburgCity_Gym_EventScript_Mary2
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_MaryIntro, MSGBOX_AUTOCLOSE
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_MaryDoMultiBattle
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryDoMultiBattle::
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_MARY, PetalburgCity_Gym_Text_MaryDefeat, PARTNER_EMMIE
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_MaryVictory
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryVictory::
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_MARY_DEFEATED
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary2::
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_ALEXIA_DEFEATED, PetalburgCity_Gym_EventScript_Alexia2
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_AlexiaIntro, MSGBOX_AUTOCLOSE
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_AlexiaDoMultiBattle
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaDoMultiBattle::
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaDefeat, PARTNER_EMMIE
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_AlexiaVictory
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaVictory::
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_ALEXIA_DEFEATED
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia2::
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
faceplayer
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_JODY_DEFEATED, PetalburgCity_Gym_EventScript_Jody2
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_JodyIntro, MSGBOX_AUTOCLOSE
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_JodyDoMultiBattle
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyDoMultiBattle::
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_JODY, PetalburgCity_Gym_Text_JodyDefeat, PARTNER_EMMIE
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_JodyVictory
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyVictory::
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_JODY_DEFEATED
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody2::
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_VarReset::
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm?\p"
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your POKéMON.\p"
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a POKéMON, please…$"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm? You're… Uh… Oh, right.\n"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're WALLY, right?$"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: I'm going to go stay with my\n"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in VERDANTURF TOWN.\p"
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a POKéMON along.\p"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a POKéMON before.\n"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm. I see.$"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}, you heard that,\n"
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with WALLY and make sure that he\n"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a POKéMON.$"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY, here, I'll loan you my POKéMON.\p"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a ZIGZAGOON!$"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A POKéMON!\p"
# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm. I'll give you a POKé BALL, too.\n"
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a POKé BALL!$"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: So, did it work out?$"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Thank you, yes, it did.\n"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your POKéMON back.\p"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my POKéMON.\p"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Now…\p"
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "If you want to become strong\n"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "trainers, here's my advice.\p"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for Mauville City beyond this\n"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the gym leader, Wattson.\p"
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After him, go on to Roxanne in\n"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Rustboro City and defeat her.\p"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect badges from them,\n"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a gym leader, too.\n"
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you collect\n"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "2 badges.\p"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, I know I'm away from home a lot,\n"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have a gift for you.\p"
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "With this you will be able to\n"
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "visit me with ease at any time.$"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOnYourWay:
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Now, be on your way kids!$"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm? Aren't you going to the\n"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON GYM in RUSTBORO CITY?\p"
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn TRAINER.\p"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me two GYM BADGES, okay?$"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: I see… So, you've beaten\n"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD TOWN is a\n"
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER named BRAWLY.\p"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm… {PLAYER}, you have gotten\n"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm…\n"
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get two GYM BADGES.\p"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fine, as I promised, we will have\n"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON battle.\p"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a real battle with my own child.\p"
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a GYM LEADER to win.\p"
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\n"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from DAD!$"
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: With that BADGE, the DEFENSE\n"
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of all your POKéMON will increase.\p"
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON that know the HM move SURF\n"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use it correctly.$"
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: TM42 contains FACADE.\p"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It doubles the power of moves if\n"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the POKéMON is poisoned, paralyzed,\l"
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "or burned.\p"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It might be able to turn a bad\n"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "situation into an advantage.$"
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: As the GYM LEADER, I can't\n"
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…\p"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Anyway, I want you to continue to\n"
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "grow as a trainer.\p"
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I've heard that Mr. Briney and his\n"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wingull, Peeko, have been reunited.\p"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm sure if you go speak with him\n"
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "at his house to the west, he will\p"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "take you kids on to Dewford Town.$"
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, you don't mind, do you?\p"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}, you should go visit\n"
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a TRAINER to\n"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}, how are things going?\p"
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of POKéMON is deep.\p"
# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, kids?\p"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Every battle in the gym will be a\n"
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "two vs one double battle.\p"
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Choose your doors carefully, and\n"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best of luck!$"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your POKéMON.\p"
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your POKéMON!$"
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1630 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1632 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1633 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1634 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1635 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our LEADER's kid.\p"
# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A TRAINER's abilities are\n"
# 1646 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1647 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1648 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1649 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The ONE-HIT KO ROOM is next.$"
# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1651 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
# 1653 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a LEADER.$"
# 1654 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1657 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 1658 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1659 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON to take a critical hit!$"
# 1660 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1662 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1663 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1664 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1665 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1666 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1667 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 1668 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1670 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1671 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1672 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1673 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1674 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the LEADER,\n"
# 1675 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1676 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1677 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1678 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1680 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1681 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1682 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1683 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1684 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1685 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1686 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1687 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1689 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1690 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1691 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1692 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your POKéMON's ATTACK power will be\n"
# 1693 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1694 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1695 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1696 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1697 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1698 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1699 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our POKéMON.$"
# 1700 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1701 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1702 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1703 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1704 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1705 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1706 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1707 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1708 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1709 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1710 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1711 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1712 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1713 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1714 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1716 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1717 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1718 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1719 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1720 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1721 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1722 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 1723 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1724 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1725 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LEADER's kid!$"
# 1726 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1727 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1728 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1729 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1730 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1731 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your POKéMON…\n"
# 1732 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1733 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The GYM LEADER, your\n"
# 1734 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1735 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1736 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1737 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your POKéMON\n"
# 1738 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1739 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1740 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 1741 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their POKéMON.$"
# 1742 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1743 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1744 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1745 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1746 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1747 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1748 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 1749 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1750 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1751 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1752 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1753 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1754 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1755 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1756 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1757 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 1758 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1759 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1760 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1761 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 1762 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1763 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1764 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1765 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 1766 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1767 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1768 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1769 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1770 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1771 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1772 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1773 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1774 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1775 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1776 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1777 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 1778 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1779 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1780 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1781 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1782 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what POKéMON await\n"
# 1783 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1784 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1785 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1786 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1787 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"
# 1788 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1789 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1790 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 1791 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN'S CERTIFIED TRAINERS:\n"
# 1792 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1793 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1794 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1795 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}…\n"
# 1796 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1797 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1798 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1799 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1800 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1801 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1802 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1803 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1804 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1805 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1806 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1807 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1808 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1809 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1810 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1811 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}…\n"
# 1812 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1813 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1814 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1815 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1816 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1817 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1818 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}…\n"
# 1819 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1820 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1821 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1822 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1823 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1824 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1825 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1826 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one POKéMON that is\n"
# 1827 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1828 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1829 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
# 1830 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1831 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReadyToFight:
# 1832 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Are you ready, kids?$"
# 1833 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1834 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ComeBackWhenReady:
# 1835 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Don't leave me waiting too long!$"
