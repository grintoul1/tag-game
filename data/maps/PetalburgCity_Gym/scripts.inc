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
.set LOCALID_CUTSCENE_EMMIE, 12
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"

# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"

# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 9, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 10, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"

# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_RANDALL_DEFEATED, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_MARY_DEFEATED, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_PARKER_DEFEATED, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_ALEXIA_DEFEATED, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_GEORGE_DEFEATED, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_JODY_DEFEATED, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_BERKE_DEFEATED, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"

# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"

# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"

# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 5, 108
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_CUTSCENE_EMMIE, 3, 108
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"

# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"

# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 11, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"

# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 11
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"

# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"

# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"

# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_EnterRoom2
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"

# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom2::
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_CUTSCENE_EMMIE
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_CUTSCENE_EMMIE, Common_Movement_WalkUp3
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"

# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_CUTSCENE_EMMIE, Common_Movement_WalkInPlaceFasterDown
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_CUTSCENE_EMMIE
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_CUTSCENE_EMMIE, Common_Movement_WalkInPlaceFasterUp
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOnYourWay, MSGBOX_DEFAULT
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"

# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"

# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_NORMAN
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
playse SE_PIN
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_NormanIntro MSGBOX_AUTOCLOSE
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_ReadyToFight MSGBOX_YESNO
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_NormanDoMultiBattle
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_ComeBackWhenReady, MSGBOX_DEFAULT
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
closemessage
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_Norman_NotReady
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"

# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanDoMultiBattle::
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat, PARTNER_EMMIE
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_NormanVictory
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"

# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanVictory::
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
addvar VAR_PETALBURG_GYM_STATE, 1
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_NormanDefeated
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"

# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Norman_NotReady:
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
walk_down
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
step_end
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"

# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 9, PetalburgCity_Gym_EventScript_NormanBattle
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 10, PetalburgCity_Gym_EventScript_NormanPostBattle
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 11, PetalburgCity_Gym_EventScript_NormanRematch
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"

# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"

# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"

# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"

# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"

# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyArriveNorth
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyFaceDown
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_CUTSCENE_EMMIE
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_CUTSCENE_EMMIE
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 9
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"

# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"

# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"

# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"

# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"

# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"

# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"

# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"

# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"

# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"

# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"

# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"

# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"

# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"

# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"

# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"

# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"

# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"

# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"

# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"

# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"

# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"

# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"

# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"

# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"

# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"

# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"

# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"

# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"

# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"

# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanDefeated::
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RANDALL_DEFEATED
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_MARY_DEFEATED
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_PARKER_DEFEATED
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_ALEXIA_DEFEATED
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_GEORGE_DEFEATED
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_JODY_DEFEATED
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BERKE_DEFEATED
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"

# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"

# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"

# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"

# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"

# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"

# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"

# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"

# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"

# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"

# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
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
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"

# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"

# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"

# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"

# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"

# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"

# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"

# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"

# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"

# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"

# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"

# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"

# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"

# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"

# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"

# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"

# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"

# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"

# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"

# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"

# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"

# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"

# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"

# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"

# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"

# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"

# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"

# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"

# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"

# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"

# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
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
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"

# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"

# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"

# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"

# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"

# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"

# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
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
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"

# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"

# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_RANDALL_DEFEATED, PetalburgCity_Gym_EventScript_Randall2
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_RANDALL
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
playse SE_PIN
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_RandallIntro MSGBOX_AUTOCLOSE
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_RandallDoMultiBattle
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"

# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallDoMultiBattle::
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallDefeat, PARTNER_EMMIE
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_RandallVictory
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"

# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallVictory::
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_RANDALL_DEFEATED
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"

# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall2::
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"

# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"

# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"

# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_PARKER_DEFEATED, PetalburgCity_Gym_EventScript_Parker2
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_PARKER
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
playse SE_PIN
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_ParkerIntro MSGBOX_AUTOCLOSE
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_ParkerDoMultiBattle
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"

# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerDoMultiBattle::
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerDefeat, PARTNER_EMMIE
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_ParkerVictory
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"

# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerVictory::
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_PARKER_DEFEATED
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker2::
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_GEORGE_DEFEATED, PetalburgCity_Gym_EventScript_George2
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_GEORGE
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
playse SE_PIN
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_GeorgeIntro MSGBOX_AUTOCLOSE
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_GeorgeDoMultiBattle
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgeDoMultiBattle::
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeDefeat, PARTNER_EMMIE
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_GeorgeVictory
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgeVictory::
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_GEORGE_DEFEATED
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George2::
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_BERKE_DEFEATED, PetalburgCity_Gym_EventScript_Berke2
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_BERKE
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
playse SE_PIN
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_BerkeIntro MSGBOX_AUTOCLOSE
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_BerkeDoMultiBattle
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkeDoMultiBattle::
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeDefeat, PARTNER_EMMIE
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_BerkeVictory
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkeVictory::
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_BERKE_DEFEATED
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke2::
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_MARY_DEFEATED, PetalburgCity_Gym_EventScript_Mary2
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_MARY
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
playse SE_PIN
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_MaryIntro MSGBOX_AUTOCLOSE
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_MaryDoMultiBattle
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryDoMultiBattle::
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_MARY, PetalburgCity_Gym_Text_MaryDefeat, PARTNER_EMMIE
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_MaryVictory
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryVictory::
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_MARY_DEFEATED
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary2::
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_ALEXIA_DEFEATED, PetalburgCity_Gym_EventScript_Alexia2
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_ALEXIA
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
playse SE_PIN
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_AlexiaIntro MSGBOX_AUTOCLOSE
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_AlexiaDoMultiBattle
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaDoMultiBattle::
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaDefeat, PARTNER_EMMIE
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_AlexiaVictory
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaVictory::
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_ALEXIA_DEFEATED
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia2::
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
goto_if_set FLAG_JODY_DEFEATED, PetalburgCity_Gym_EventScript_Jody2
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
lockall
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JODY
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
playse SE_PIN
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_JodyIntro MSGBOX_AUTOCLOSE
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
goto PetalburgCity_Gym_EventScript_JodyDoMultiBattle
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
releaseall
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyDoMultiBattle::
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_JODY, PetalburgCity_Gym_Text_JodyDefeat, PARTNER_EMMIE
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
switch VAR_RESULT
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
case 1, PetalburgCity_Gym_EventScript_JodyVictory
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
waitstate
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyVictory::
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
waitmovement 0
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
setflag FLAG_JODY_DEFEATED
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
end
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody2::
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm?\p"
# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your POKéMON.\p"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a POKéMON, please…$"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm? You're… Uh… Oh, right.\n"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're WALLY, right?$"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: I'm going to go stay with my\n"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in VERDANTURF TOWN.\p"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a POKéMON along.\p"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a POKéMON before.\n"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm. I see.$"
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}, you heard that,\n"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with WALLY and make sure that he\n"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a POKéMON.$"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY, here, I'll loan you my POKéMON.\p"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a ZIGZAGOON!$"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A POKéMON!\p"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm. I'll give you a POKé BALL, too.\n"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a POKé BALL!$"
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: So, did it work out?$"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Thank you, yes, it did.\n"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your POKéMON back.\p"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my POKéMON.\p"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Now…\p"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "If you want to become strong\n"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "trainers, here's my advice.\p"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for Mauville City beyond this\n"
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the gym leader, Wattson.\p"
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After him, go on to Roxanne in\n"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Rustboro City and defeat her.\p"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect badges from them,\n"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a gym leader, too.\n"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you collect\n"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "2 badges.\p"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, I know I'm away from home a lot,\n"
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have a gift for you.\p"
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "With this you will be able to\n"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "visit me with ease at any time.$"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOnYourWay:
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Now, be on your way kids!$"
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm? Aren't you going to the\n"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON GYM in RUSTBORO CITY?\p"
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn TRAINER.\p"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four GYM BADGES, okay?$"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: I see… So, you've beaten\n"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD TOWN is a\n"
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER named BRAWLY.\p"
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm… {PLAYER}, you have gotten\n"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: Hm…\n"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get four GYM BADGES.\p"
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fine, as I promised, we will have\n"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON battle.\p"
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a real battle with my own child.\p"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a GYM LEADER to win.\p"
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\n"
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from DAD!$"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: With that BADGE, the DEFENSE\n"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of all your POKéMON will increase.\p"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON that know the HM move SURF\n"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use it correctly.$"
# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: TM42 contains FACADE.\p"
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It doubles the power of moves if\n"
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the POKéMON is poisoned, paralyzed,\l"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "or burned.\p"
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It might be able to turn a bad\n"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "situation into an advantage.$"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: As the GYM LEADER, I can't\n"
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…\p"
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Anyway, I want you to continue to\n"
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "grow as a trainer.\p"
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I've heard that Mr. Briney and his\n"
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wingull, Peeko, have been reunited.\p"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm sure if you go speak with him\n"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "at his house to the west, he will\p"
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "take you kids on to Dewford Town.$"
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, you don't mind, do you?\p"
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}, you should go visit\n"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a TRAINER to\n"
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}, how are things going?\p"
# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of POKéMON is deep.\p"
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, kids?\p"
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Every battle in the gym will be a\n"
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "two vs one double battle.\p"
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Choose your doors carefully, and\n"
# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best of luck!$"
# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 1630 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1632 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1633 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1634 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1635 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1646 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1647 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1648 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1649 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1651 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your POKéMON.\p"
# 1653 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1654 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1657 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1658 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1659 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your POKéMON!$"
# 1660 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1662 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1663 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1664 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1665 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1666 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1667 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1668 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1670 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1671 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1672 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1673 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1674 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1675 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1676 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1677 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1678 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1680 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1681 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1682 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1683 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 1684 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1685 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1686 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1687 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our LEADER's kid.\p"
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A TRAINER's abilities are\n"
# 1689 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1690 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1691 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1692 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The ONE-HIT KO ROOM is next.$"
# 1693 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1694 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1695 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
# 1696 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a LEADER.$"
# 1697 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1698 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1699 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1700 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 1701 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1702 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON to take a critical hit!$"
# 1703 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1704 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1705 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1706 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1707 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1708 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1709 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1710 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 1711 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1712 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1713 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1714 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1716 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1717 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the LEADER,\n"
# 1718 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1719 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1720 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1721 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1722 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1723 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1724 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1725 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1726 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1727 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1728 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1729 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1730 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1731 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1732 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1733 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1734 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1735 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your POKéMON's ATTACK power will be\n"
# 1736 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1737 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1738 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1739 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1740 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1741 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1742 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our POKéMON.$"
# 1743 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1744 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1745 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1746 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1747 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1748 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1749 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1750 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1751 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1752 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1753 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1754 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1755 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1756 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1757 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1758 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1759 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1760 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1761 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1762 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1763 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1764 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1765 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 1766 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1767 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1768 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LEADER's kid!$"
# 1769 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1770 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1771 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1772 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1773 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1774 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your POKéMON…\n"
# 1775 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1776 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The GYM LEADER, your\n"
# 1777 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1778 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1779 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1780 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your POKéMON\n"
# 1781 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1782 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1783 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 1784 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their POKéMON.$"
# 1785 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1786 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1787 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1788 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1789 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1790 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1791 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 1792 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1793 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1794 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1795 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1796 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1797 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1798 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1799 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1800 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 1801 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1802 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1803 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1804 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 1805 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1806 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1807 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1808 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 1809 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1810 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1811 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1812 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1813 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1814 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1815 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1816 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1817 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1818 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1819 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1820 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 1821 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1822 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1823 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1824 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1825 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what POKéMON await\n"
# 1826 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1827 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1828 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1829 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1830 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"
# 1831 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1832 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1833 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 1834 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN'S CERTIFIED TRAINERS:\n"
# 1835 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1836 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1837 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1838 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}…\n"
# 1839 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1840 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1841 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1842 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1843 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1844 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1845 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1846 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1847 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1848 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1849 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1850 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1851 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1852 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1853 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1854 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}…\n"
# 1855 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1856 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1857 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1858 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1859 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1860 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1861 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman: {PLAYER}…\n"
# 1862 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1863 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1864 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1865 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1866 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1867 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1868 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1869 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one POKéMON that is\n"
# 1870 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1871 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1872 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
# 1873 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1874 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReadyToFight:
# 1875 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Are you ready, kids?$"
# 1876 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1877 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ComeBackWhenReady:
# 1878 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Don't leave me waiting too long!$"
