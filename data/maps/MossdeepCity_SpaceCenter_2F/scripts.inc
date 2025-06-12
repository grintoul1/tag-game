# 1 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_RICH_BOY, 1
# 3 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GENTLEMAN, 2
# 4 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_SCIENTIST, 3
# 5 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_STEVEN, 4
# 6 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Grunt names numbered like their Trainer values (which are for the full Space Center)
# 7 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT6, 5
# 8 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT5, 7
# 9 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_TABITHA, 6
# 10 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_COURTNEY, 8
# 11 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_MAXIE, 9
# 12 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 13 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_MapScripts::
# 14 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
# 15 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_OnFrame
# 16 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.byte 0
# 17 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 18 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ProgressEmmieState::
# 19 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 56
# 20 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 21 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 22 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition:
# 23 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians
# 24 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_SPACE_CENTER_STATE, 4, MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts
# 25 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 26 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 27 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians::
# 28 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 29 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 5, 3
# 30 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 31 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 3, 2
# 32 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 33 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GENTLEMAN, 1, 3
# 34 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
# 35 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 36 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 37 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts::
# 38 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT6, 11, 3
# 39 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 13, 5
# 40 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT5, 15, 3
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 42 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 43 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnFrame:
# 44 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 3, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts
# 45 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 55, MossdeepCity_SpaceCenter_2F_EventScript_ProgressEmmieState
# 46 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.2byte 0
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 48 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_MOSSDEEP_CITY_SPACE_CENTER_2F
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkDown
# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerEnter
# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 54 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 55 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 58 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn, MSGBOX_YESNO
# 59 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 60 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_GoodAnswer, MSGBOX_DEFAULT
# 61 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 62 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerExit
# 63 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MossdeepCity_SpaceCenter_2F_Movement_EmmieExit
# 64 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 65 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	warp MAP_MOSSDEEP_CITY_SPACE_CENTER_1F, 13, 1
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 67 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 68 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 70 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_PlayerEnter:
# 71 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 72 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 73 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 74 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_EmmieExit:
# 75 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_up
# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 78 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 79 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_PlayerExit:
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_up
# 81 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_up
# 82 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 83 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 84 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts::
# 85 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT5, Common_Movement_WalkInPlaceFasterLeft
# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 88 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro MSGBOX_AUTOCLOSE
# 89 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT6, Common_Movement_WalkInPlaceFasterRight
# 91 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 92 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro MSGBOX_AUTOCLOSE
# 93 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_Grunt5Grunt6DoMultiBattle
# 94 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 95 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5Grunt6DoMultiBattle::
# 97 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 98 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	multi_2p_vs_2 TRAINER_GRUNT_SPACE_CENTER_5, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat, TRAINER_GRUNT_SPACE_CENTER_6, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat, PARTNER_EMMIE
# 99 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_Grunt5Grunt6Victory
# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 102 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SetCB2WhiteOut
# 103 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 104 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 105 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5Grunt6Victory::
# 106 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 107 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 108 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT5, MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated
# 110 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 112 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT6, MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated
# 115 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 116 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 117 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_TabithaIntro MSGBOX_AUTOCLOSE
# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_TabithaDoMultiBattle
# 120 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 121 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 122 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 123 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_TabithaDoMultiBattle::
# 124 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 125 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	multi_2p_vs_1 TRAINER_TABITHA_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_TabithaDefeat, PARTNER_EMMIE
# 126 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_RESULT
# 127 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_TabithaVictory
# 128 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 129 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SetCB2WhiteOut
# 130 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 132 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_TabithaVictory::
# 133 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 8
# 134 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 135 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_TABITHA, MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated
# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT6
# 140 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_TABITHA
# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT5
# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 143 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 144 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 145 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated:
# 146 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 147 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 148 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 149 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 151 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated:
# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_right
# 154 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 155 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 156 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 157 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated:
# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_down
# 160 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 161 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 162 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 163 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 168 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 169 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 170 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 171 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 172 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
# 174 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 176 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 177 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
# 178 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
# 179 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 182 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
# 183 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 184 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 185 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 186 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 188 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 189 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 190 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 191 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
# 192 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
# 193 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 194 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 195 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 196 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
# 198 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 199 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 200 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 201 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 203 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 204 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 205 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 206 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 213 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 214 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 215 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
# 216 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 220 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Battle for the below 3 grunts is handled in MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 221 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
# 222 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
# 223 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Tabitha::
# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_TabithaPostBattle, MSGBOX_NPC
# 227 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Courtney::
# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou, MSGBOX_DEFAULT
# 237 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 241 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 242 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 243 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 244 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere, MSGBOX_DEFAULT
# 245 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 246 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 248 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 249 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 250 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER, MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 251 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel, MSGBOX_DEFAULT
# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano, MSGBOX_DEFAULT
# 254 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 255 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 30
# 256 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 258 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth
# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFight
# 260 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 261 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 262 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 263 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth::
# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 267 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 268 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 269 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFight:
# 271 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 272 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 273 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 274 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 275 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 276 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 277 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 279 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 280 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 281 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth:
# 282 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_left
# 283 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 284 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 285 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 286 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 287 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 288 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 289 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 290 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 291 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
# 292 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 293 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 294 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt::
# 295 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 296 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 297 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle, MSGBOX_YESNO
# 298 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly, MSGBOX_DEFAULT
# 300 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 301 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 302 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 303 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 304 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 305 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 306 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle::
# 307 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 308 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SavePlayerParty
# 310 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 311 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 312 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 313 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle
# 314 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special LoadPlayerParty
# 315 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 316 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 317 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle::
# 318 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, TRAINER_COURTNEY_MOSSDEEP, MossdeepCity_SpaceCenter_Text_CourtneyDefeat, PARTNER_STEVEN
# 319 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_RESULT
# 320 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieCourtney
# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 322 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SetCB2WhiteOut
# 323 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 324 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 325 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieCourtney::
# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided, MSGBOX_DEFAULT
# 327 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 328 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 329 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 330 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 332 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 60
# 333 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 334 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 335 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 337 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp, MSGBOX_DEFAULT
# 338 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 339 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 340 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadedefaultbgm
# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 342 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 6
# 343 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 57
# 344 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 345 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 347 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT6
# 348 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_TABITHA
# 349 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT5
# 350 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_COURTNEY
# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_MAXIE
# 352 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SCIENTIST, 5, 6
# 353 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SCIENTIST, DIR_SOUTH
# 354 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_GENTLEMAN, 11, 8
# 355 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_GENTLEMAN, DIR_NORTH
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_RICH_BOY, 6, 2
# 357 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_RICH_BOY, DIR_NORTH
# 358 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer
# 359 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 360 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome, MSGBOX_DEFAULT
# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 362 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 363 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 364 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 365 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_STEVEN
# 366 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 367 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 368 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 369 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 370 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 371 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 372 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 5, 6
# 373 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
# 374 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SCIENTIST
# 375 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#ifdef BUGFIX
# 377 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 378 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#endif
# 379 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 380 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 381 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer::
# 382 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 383 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth
# 384 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest
# 385 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 386 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 387 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth::
# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_NORTH
# 389 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 390 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 391 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest::
# 392 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_EAST
# 393 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 394 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 395 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
# 396 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 397 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkplayergender
# 398 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
# 399 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
# 400 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 401 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 402 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 403 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 404 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 405 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
# 406 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_MayRayquazaCall
# 407 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 408 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 409 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 410 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
# 411 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_BrendanRayquazaCall
# 412 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 413 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 414 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 415 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets:
# 416 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MOSSDEEP has mainly sunny weather,\n"
# 417 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "and its winds are stable.\p"
# 418 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's an ideal location for launching\n"
# 419 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "rockets.$"
# 420 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 421 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel:
# 422 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Why would TEAM MAGMA want to steal\n"
# 423 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "our rocket fuel in the first place?$"
# 424 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 425 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut:
# 426 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If only I was a little younger, I would\n"
# 427 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "have liked being an astronaut…\p"
# 428 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "No… It's not too late!\n"
# 429 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I can and will try!$"
# 430 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 431 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis:
# 432 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If TEAM MAGMA takes the rocket fuel,\n"
# 433 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I won't be able to go to space!\p"
# 434 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "They can't be allowed to get away\n"
# 435 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "with such an outrage!$"
# 436 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 437 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace:
# 438 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I wish ordinary people could go into\n"
# 439 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "space one day…$"
# 440 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 441 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace:
# 442 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "TEAM MAGMA…\n"
# 443 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Do they want to go to space, too?$"
# 444 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 445 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn:
# 446 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Tabitha: Hehehe! I said I'd see\n"
# 447 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "you again soon.\p"
# 448 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're made of impressive stuff I'll\n"
# 449 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "give you that.\p"
# 450 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "This time we have you three to two.\n"
# 451 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "How confident are you feeling?\l"
# 452 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You still want to take us on?$"
# 453 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 454 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_GoodAnswer:
# 455 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Good answer!\n"
# 456 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what a smart person'll do!$"
# 457 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 458 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro:
# 459 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "A reckless go-getter, are you?\n"
# 460 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Okay, we'll go first!$"
# 461 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 462 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat:
# 463 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost!\n"
# 464 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 465 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 466 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro:
# 467 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You'll never defeat both of us!$"
# 468 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 469 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat:
# 470 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost, too!\n"
# 471 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 472 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 473 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_TabithaIntro:
# 474 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Tabitha: I bet you want to take a break.\n"
# 475 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But I'm not about to let you do that!$"
# 476 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 477 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_TabithaDefeat:
# 478 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We should've taken a break…\n"
# 479 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what we should've done…$"
# 480 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 481 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle:
# 482 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Three of us here, and look at the sorry\n"
# 483 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "mess we got ourselves into.$"
# 484 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 485 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_TabithaPostBattle:
# 486 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Hehe… You're unstoppable!$"
# 487 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 488 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle:
# 489 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are we being useful to our leader\n"
# 490 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "at all?$"
# 491 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 492 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou:
# 493 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Courtney: Hehehe! Long time no see!\p"
# 494 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We come all the way here to get some\n"
# 495 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel, and we're interfered with again!\p"
# 496 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If you're going to mess with us too,\n"
# 497 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we'll take care of you at the same time!$"
# 498 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 499 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere:
# 500 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: Clear out of the way!\n"
# 501 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Don't you dare interfere!$"
# 502 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 503 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel:
# 504 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: TEAM MAGMA…\p"
# 505 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's the point of stealing rocket\n"
# 506 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel?$"
# 507 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 508 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano:
# 509 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Maxie: Fufufu… Since you're so\n"
# 510 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "curious, you deserve an explanation.\p"
# 511 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We're going to jettison the entire\n"
# 512 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "load into MT. CHIMNEY!\p"
# 513 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "With GROUDON gone, we have no need\n"
# 514 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "for that slag heap of a mountain!\p"
# 515 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "So we'll use the fuel's power to make\n"
# 516 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the volcano erupt!\p"
# 517 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It will be savage!$"
# 518 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 519 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle:
# 520 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
# 521 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're going to help me?\p"
# 522 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Let's go into battle together!\n"
# 523 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are you ready?$"
# 524 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 525 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly:
# 526 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Then, hurry!\n"
# 527 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Get ready quickly!$"
# 528 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 529 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand:
# 530 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "All I want…\n"
# 531 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I just want to expand the land mass…$"
# 532 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 533 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_Text_CourtneyDefeat:
# 534 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm with our leader…$"
# 535 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 536 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided:
# 537 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: I succeeded in controling GROUDON\n"
# 538 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "after we had awoken it…\p"
# 539 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Yes still you protest against Team Magma's\n"
# 540 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "vision…\p"
# 541 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Is our goal to expand the land\n"
# 542 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "misguided?\p"
# 543 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\n"
# 544 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 545 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If…\n"
# 546 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If we, Team Magma, are wrong…\l"
# 547 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 548 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Then might Team Aqua's goal to expand\n"
# 549 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the sea also be equally misguided?$"
# 550 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 551 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp:
# 552 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: All right…\n"
# 553 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We will give up on the fuel…\p"
# 554 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "There appear to be more important\n"
# 555 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "matters that I must examine…$"
# 556 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 557 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome:
# 558 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Whew, that was too tense.\n"
# 559 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{PLAYER}{KUN}, thank you.\p"
# 560 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I have something to give you as\n"
# 561 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "thanks for your support.\p"
# 562 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Please come see me at home\n"
# 563 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "after this.\p"
# 564 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Oh, yes, I don't live in RUSTBORO CITY.\n"
# 565 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I live right here on this island.$"
