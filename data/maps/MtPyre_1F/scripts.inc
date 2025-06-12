# 1 "data/maps/MtPyre_1F/scripts.pory"

# 2 "data/maps/MtPyre_1F/scripts.pory"
.set LOCALID_PYRE_AQUAGRUNT4, 2
# 3 "data/maps/MtPyre_1F/scripts.pory"
.set LOCALID_PYRE_MAGMAGRUNT6, 3
# 4 "data/maps/MtPyre_1F/scripts.pory"

# 5 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_MapScripts::
# 6 "data/maps/MtPyre_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_1F_OnTransition
# 7 "data/maps/MtPyre_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtPyre_1F_OnFrame
# 8 "data/maps/MtPyre_1F/scripts.pory"
	.byte 0
# 9 "data/maps/MtPyre_1F/scripts.pory"

# 10 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_OnFrame:
# 11 "data/maps/MtPyre_1F/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 31, MtPyre_1F_EventScript_ProgressEmmieState
# 12 "data/maps/MtPyre_1F/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 32, MtPyre_1F_EventScript_ProgressEmmieState
# 13 "data/maps/MtPyre_1F/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 34, MtPyre_1F_EventScript_ProgressEmmieState
# 14 "data/maps/MtPyre_1F/scripts.pory"
	.2byte 0
# 15 "data/maps/MtPyre_1F/scripts.pory"

# 16 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_ProgressEmmieState::
# 17 "data/maps/MtPyre_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 33
# 18 "data/maps/MtPyre_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 19 "data/maps/MtPyre_1F/scripts.pory"
	return
# 20 "data/maps/MtPyre_1F/scripts.pory"

# 21 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_OnTransition::
# 22 "data/maps/MtPyre_1F/scripts.pory"
	end
# 23 "data/maps/MtPyre_1F/scripts.pory"

# 24 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Grunts_Fight::
# 25 "data/maps/MtPyre_1F/scripts.pory"
	lockall
# 26 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 27 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 28 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 29 "data/maps/MtPyre_1F/scripts.pory"
	playse SE_PIN
# 30 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 31 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 32 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_ExclamationMark
# 33 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_ExclamationMark
# 34 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterLeft
# 36 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterLeft
# 37 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterLeft
# 39 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_WhereDidTheyComeFrom, MSGBOX_DEFAULT
# 41 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 42 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterDown
# 43 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterUp
# 44 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 45 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterDown
# 46 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 47 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_WereBothInTrouble, MSGBOX_DEFAULT
# 48 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 49 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterUp
# 50 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_EnemyOfMyEnemy, MSGBOX_DEFAULT
# 52 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 53 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterDown
# 54 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 55 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_EnemyOfMyEnemy2, MSGBOX_DEFAULT
# 56 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 57 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterLeft
# 58 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterLeft
# 59 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/MtPyre_1F/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 61 "data/maps/MtPyre_1F/scripts.pory"
	playse SE_PIN
# 62 "data/maps/MtPyre_1F/scripts.pory"
	call_if_eq VAR_TEMP_2, 6, MtPyre1F_EventScript_Grunts_Fight_A
# 63 "data/maps/MtPyre_1F/scripts.pory"
	call_if_eq VAR_TEMP_2, 5, MtPyre1F_EventScript_Grunts_Fight_B
# 64 "data/maps/MtPyre_1F/scripts.pory"
	call_if_eq VAR_TEMP_2, 4, MtPyre1F_EventScript_Grunts_Fight_C
# 65 "data/maps/MtPyre_1F/scripts.pory"
	end
# 66 "data/maps/MtPyre_1F/scripts.pory"

# 67 "data/maps/MtPyre_1F/scripts.pory"
MtPyre1F_EventScript_Grunts_Fight_A::
# 68 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, MtPyre_1F_Movement_Grunt_Advance_B
# 69 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, MtPyre_1F_Movement_Grunt_Advance_B
# 70 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_1F_Movement_EmmieStepBack
# 71 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtPyre_1F_Movement_MoveForEmmie
# 72 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/MtPyre_1F/scripts.pory"
	multi_2p_vs_2 TRAINER_PYRE_MAGMAGRUNT6, MtPyre_1F_Text_Pyre_MagmaGrunt6Defeat, TRAINER_PYRE_AQUAGRUNT4, MtPyre_1F_Text_Pyre_AquaGrunt4Defeat, PARTNER_EMMIE
# 74 "data/maps/MtPyre_1F/scripts.pory"
	switch VAR_RESULT
# 75 "data/maps/MtPyre_1F/scripts.pory"
	case 1, MtPyre_1F_EventScript_Pyre_AquaGrunt4Pyre_MagmaGrunt6Victory
# 76 "data/maps/MtPyre_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/MtPyre_1F/scripts.pory"
	special SetCB2WhiteOut
# 78 "data/maps/MtPyre_1F/scripts.pory"
	waitstate
# 79 "data/maps/MtPyre_1F/scripts.pory"

# 80 "data/maps/MtPyre_1F/scripts.pory"
MtPyre1F_EventScript_Grunts_Fight_B::
# 81 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, MtPyre_1F_Movement_Grunt_Advance_B
# 82 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, MtPyre_1F_Movement_Grunt_Advance_B
# 83 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 84 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 85 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 86 "data/maps/MtPyre_1F/scripts.pory"
	multi_2p_vs_2 TRAINER_PYRE_AQUAGRUNT4, MtPyre_1F_Text_Pyre_AquaGrunt4Defeat, TRAINER_PYRE_MAGMAGRUNT6, MtPyre_1F_Text_Pyre_MagmaGrunt6Defeat, PARTNER_EMMIE
# 87 "data/maps/MtPyre_1F/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/MtPyre_1F/scripts.pory"
	case 1, MtPyre_1F_EventScript_Pyre_AquaGrunt4Pyre_MagmaGrunt6Victory
# 89 "data/maps/MtPyre_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data/maps/MtPyre_1F/scripts.pory"
	special SetCB2WhiteOut
# 91 "data/maps/MtPyre_1F/scripts.pory"
	waitstate
# 92 "data/maps/MtPyre_1F/scripts.pory"

# 93 "data/maps/MtPyre_1F/scripts.pory"
MtPyre1F_EventScript_Grunts_Fight_C::
# 94 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, MtPyre_1F_Movement_Grunt_Advance_C
# 95 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, MtPyre_1F_Movement_Grunt_Advance_C
# 96 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtPyre_1F_Movement_EmmieStepBack
# 97 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_1F_Movement_MoveForEmmie
# 98 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 99 "data/maps/MtPyre_1F/scripts.pory"
	multi_2p_vs_2 TRAINER_PYRE_AQUAGRUNT4, MtPyre_1F_Text_Pyre_AquaGrunt4Defeat, TRAINER_PYRE_MAGMAGRUNT6, MtPyre_1F_Text_Pyre_MagmaGrunt6Defeat, PARTNER_EMMIE
# 100 "data/maps/MtPyre_1F/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/MtPyre_1F/scripts.pory"
	case 1, MtPyre_1F_EventScript_Pyre_AquaGrunt4Pyre_MagmaGrunt6Victory
# 102 "data/maps/MtPyre_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 103 "data/maps/MtPyre_1F/scripts.pory"
	special SetCB2WhiteOut
# 104 "data/maps/MtPyre_1F/scripts.pory"
	waitstate
# 105 "data/maps/MtPyre_1F/scripts.pory"

# 106 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Pyre_AquaGrunt4Pyre_MagmaGrunt6Victory::
# 107 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterLeft
# 108 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 109 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_Pyre_AquaGrunt4PostBattle, MSGBOX_DEFAULT
# 110 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 111 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, MtPyre_1F_Movement_AquaGruntLeave
# 112 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 113 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterLeft
# 114 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 115 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_Pyre_MagmaGrunt6PostBattle, MSGBOX_DEFAULT
# 116 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 117 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, MtPyre_1F_Movement_MagmaGruntLeave
# 118 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 119 "data/maps/MtPyre_1F/scripts.pory"
	removeobject LOCALID_PYRE_AQUAGRUNT4
# 120 "data/maps/MtPyre_1F/scripts.pory"
	removeobject LOCALID_PYRE_MAGMAGRUNT6
# 121 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_1F_GRUNTS
# 122 "data/maps/MtPyre_1F/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 123 "data/maps/MtPyre_1F/scripts.pory"
	addvar VAR_MT_PYRE_STATE, 1
# 124 "data/maps/MtPyre_1F/scripts.pory"
	releaseall
# 125 "data/maps/MtPyre_1F/scripts.pory"
	end
# 126 "data/maps/MtPyre_1F/scripts.pory"

# 127 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_CleanseTagWoman::
# 128 "data/maps/MtPyre_1F/scripts.pory"
	lock
# 129 "data/maps/MtPyre_1F/scripts.pory"
	faceplayer
# 130 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
# 131 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
# 132 "data/maps/MtPyre_1F/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 133 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 134 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_RECEIVED_CLEANSE_TAG
# 135 "data/maps/MtPyre_1F/scripts.pory"
	release
# 136 "data/maps/MtPyre_1F/scripts.pory"
	end
# 137 "data/maps/MtPyre_1F/scripts.pory"

# 138 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_ReceivedCleanseTag::
# 139 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
# 140 "data/maps/MtPyre_1F/scripts.pory"
	release
# 141 "data/maps/MtPyre_1F/scripts.pory"
	end
# 142 "data/maps/MtPyre_1F/scripts.pory"

# 143 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Pyre_AquaGrunt4::
# 144 "data/maps/MtPyre_1F/scripts.pory"
	lockall
# 145 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_CantYouSeeWereBusy, MSGBOX_NPC
# 146 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_FaceOriginalDirection
# 147 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 148 "data/maps/MtPyre_1F/scripts.pory"
	releaseall
# 149 "data/maps/MtPyre_1F/scripts.pory"
	end
# 150 "data/maps/MtPyre_1F/scripts.pory"

# 151 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Pyre_MagmaGrunt6::
# 152 "data/maps/MtPyre_1F/scripts.pory"
	lockall
# 153 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_TeamAquaWillNeverWin, MSGBOX_NPC
# 154 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_FaceOriginalDirection
# 155 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 156 "data/maps/MtPyre_1F/scripts.pory"
	releaseall
# 157 "data/maps/MtPyre_1F/scripts.pory"
	end
# 158 "data/maps/MtPyre_1F/scripts.pory"

# 159 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_PlayerWalkDown:
# 160 "data/maps/MtPyre_1F/scripts.pory"
	walk_down
# 161 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 162 "data/maps/MtPyre_1F/scripts.pory"

# 163 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_MoveTowardsGrunts:
# 164 "data/maps/MtPyre_1F/scripts.pory"
	emote_exclamation_mark
# 165 "data/maps/MtPyre_1F/scripts.pory"
	walk_down
# 166 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 167 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 168 "data/maps/MtPyre_1F/scripts.pory"

# 169 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_MoveForEmmie:
# 170 "data/maps/MtPyre_1F/scripts.pory"
	emote_exclamation_mark
# 171 "data/maps/MtPyre_1F/scripts.pory"
	walk_down
# 172 "data/maps/MtPyre_1F/scripts.pory"
	face_right
# 173 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 174 "data/maps/MtPyre_1F/scripts.pory"
	
# 175 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_EmmieStepBack:
# 176 "data/maps/MtPyre_1F/scripts.pory"
	emote_exclamation_mark
# 177 "data/maps/MtPyre_1F/scripts.pory"
	lock_facing_direction
# 178 "data/maps/MtPyre_1F/scripts.pory"
	walk_slow_left
# 179 "data/maps/MtPyre_1F/scripts.pory"
	unlock_facing_direction
# 180 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 181 "data/maps/MtPyre_1F/scripts.pory"

# 182 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_Grunt_Advance_A:
# 183 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 184 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 185 "data/maps/MtPyre_1F/scripts.pory"

# 186 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_Grunt_Advance_B:
# 187 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 188 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 189 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 190 "data/maps/MtPyre_1F/scripts.pory"

# 191 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_Grunt_Advance_C:
# 192 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 193 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 194 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 195 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 196 "data/maps/MtPyre_1F/scripts.pory"

# 197 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_AquaGruntLeave:
# 198 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 199 "data/maps/MtPyre_1F/scripts.pory"
	walk_down
# 200 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 201 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 202 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 203 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 204 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 205 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 206 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 207 "data/maps/MtPyre_1F/scripts.pory"

# 208 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_MagmaGruntLeave:
# 209 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 210 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 211 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 212 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 213 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 214 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 215 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 216 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 217 "data/maps/MtPyre_1F/scripts.pory"

# 218 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_Pyre_AquaGrunt4Defeat:
# 219 "data/maps/MtPyre_1F/scripts.pory"
	.string "This wasn't supposed to happen!$"
# 220 "data/maps/MtPyre_1F/scripts.pory"

# 221 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_Pyre_MagmaGrunt6Defeat:
# 222 "data/maps/MtPyre_1F/scripts.pory"
	.string "Now we're definitely in trouble!$"
# 223 "data/maps/MtPyre_1F/scripts.pory"

# 224 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_Pyre_AquaGrunt4PostBattle:
# 225 "data/maps/MtPyre_1F/scripts.pory"
	.string "Aqua Grunt: Archie's gonna be mad at\n"
# 226 "data/maps/MtPyre_1F/scripts.pory"
	.string "me for this!$"
# 227 "data/maps/MtPyre_1F/scripts.pory"

# 228 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_Pyre_MagmaGrunt6PostBattle:
# 229 "data/maps/MtPyre_1F/scripts.pory"
	.string "Magma Grunt: And I don't want to be\n"
# 230 "data/maps/MtPyre_1F/scripts.pory"
	.string "on receiving end of Tabitha's wrath!$"
# 231 "data/maps/MtPyre_1F/scripts.pory"

# 232 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_WhereDidTheyComeFrom:
# 233 "data/maps/MtPyre_1F/scripts.pory"
	.string "Magma Grunt: Where the heck did you\n"
# 234 "data/maps/MtPyre_1F/scripts.pory"
	.string "guys come from?!$"
# 235 "data/maps/MtPyre_1F/scripts.pory"

# 236 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_WereBothInTrouble:
# 237 "data/maps/MtPyre_1F/scripts.pory"
	.string "Aqua Grunt: We're both in trouble\n"
# 238 "data/maps/MtPyre_1F/scripts.pory"
	.string "if these kids make it to the summit!$"
# 239 "data/maps/MtPyre_1F/scripts.pory"

# 240 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_EnemyOfMyEnemy:
# 241 "data/maps/MtPyre_1F/scripts.pory"
	.string "Magma Grunt: Enemy of my enemy?$"
# 242 "data/maps/MtPyre_1F/scripts.pory"

# 243 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_EnemyOfMyEnemy2:
# 244 "data/maps/MtPyre_1F/scripts.pory"
	.string "Aqua Grunt: Enemy of my enemy.$"
# 245 "data/maps/MtPyre_1F/scripts.pory"

# 246 "data/maps/MtPyre_1F/scripts.pory"

# 247 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_TakeThisForYourOwnGood:
# 248 "data/maps/MtPyre_1F/scripts.pory"
	.string "All sorts of beings wander the slopes\n"
# 249 "data/maps/MtPyre_1F/scripts.pory"
	.string "of MT. PYRE…\p"
# 250 "data/maps/MtPyre_1F/scripts.pory"
	.string "There is no telling what may happen.\n"
# 251 "data/maps/MtPyre_1F/scripts.pory"
	.string "Take this. It's for your own good.$"
# 252 "data/maps/MtPyre_1F/scripts.pory"

# 253 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ExplainCleanseTag:
# 254 "data/maps/MtPyre_1F/scripts.pory"
	.string "Have a POKéMON hold that\n"
# 255 "data/maps/MtPyre_1F/scripts.pory"
	.string "CLEANSE TAG.\p"
# 256 "data/maps/MtPyre_1F/scripts.pory"
	.string "It will help ward off wild POKéMON.$"
# 257 "data/maps/MtPyre_1F/scripts.pory"

# 258 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_CantYouSeeWereBusy:
# 259 "data/maps/MtPyre_1F/scripts.pory"
	.string "Can't you see I'm in the middle of\n"
# 260 "data/maps/MtPyre_1F/scripts.pory"
	.string "something?!$"
# 261 "data/maps/MtPyre_1F/scripts.pory"

# 262 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_TeamAquaWillNeverWin:
# 263 "data/maps/MtPyre_1F/scripts.pory"
	.string "Team Aqua will never prevail over\n"
# 264 "data/maps/MtPyre_1F/scripts.pory"
	.string "Team Magma!$"
# 265 "data/maps/MtPyre_1F/scripts.pory"

# 266 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ComeToPayRespects:
# 267 "data/maps/MtPyre_1F/scripts.pory"
	.string "Did you come to pay your respect\n"
# 268 "data/maps/MtPyre_1F/scripts.pory"
	.string "to the spirits of departed POKéMON?\p"
# 269 "data/maps/MtPyre_1F/scripts.pory"
	.string "You must care for your POKéMON a lot.$"
# 270 "data/maps/MtPyre_1F/scripts.pory"

# 271 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_RestingPlaceOfZigzagoon:
# 272 "data/maps/MtPyre_1F/scripts.pory"
	.string "This is the final resting place of my\n"
# 273 "data/maps/MtPyre_1F/scripts.pory"
	.string "ZIGZAGOON. I cherished it…$"
