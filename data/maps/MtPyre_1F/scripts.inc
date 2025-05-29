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
	.byte 0
# 8 "data/maps/MtPyre_1F/scripts.pory"

# 9 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_OnTransition::
# 10 "data/maps/MtPyre_1F/scripts.pory"
	end
# 11 "data/maps/MtPyre_1F/scripts.pory"

# 12 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Grunts_Fight::
# 13 "data/maps/MtPyre_1F/scripts.pory"
	lockall
# 14 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 15 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 16 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 17 "data/maps/MtPyre_1F/scripts.pory"
	playse SE_PIN
# 18 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 19 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 20 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_ExclamationMark
# 21 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_ExclamationMark
# 22 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterLeft
# 24 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterLeft
# 25 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterLeft
# 27 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 28 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_WhereDidTheyComeFrom, MSGBOX_DEFAULT
# 29 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 30 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterDown
# 31 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterDown
# 34 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_WereBothInTrouble, MSGBOX_DEFAULT
# 36 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 37 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterUp
# 38 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 39 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_EnemyOfMyEnemy, MSGBOX_DEFAULT
# 40 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 41 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterDown
# 42 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_EnemyOfMyEnemy2, MSGBOX_DEFAULT
# 44 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 45 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterLeft
# 46 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterLeft
# 47 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtPyre_1F/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 49 "data/maps/MtPyre_1F/scripts.pory"
	playse SE_PIN
# 50 "data/maps/MtPyre_1F/scripts.pory"
	call_if_eq VAR_TEMP_2, 6, MtPyre1F_EventScript_Grunts_Fight_A
# 51 "data/maps/MtPyre_1F/scripts.pory"
	call_if_eq VAR_TEMP_2, 5, MtPyre1F_EventScript_Grunts_Fight_B
# 52 "data/maps/MtPyre_1F/scripts.pory"
	call_if_eq VAR_TEMP_2, 4, MtPyre1F_EventScript_Grunts_Fight_C
# 53 "data/maps/MtPyre_1F/scripts.pory"
	end
# 54 "data/maps/MtPyre_1F/scripts.pory"

# 55 "data/maps/MtPyre_1F/scripts.pory"
MtPyre1F_EventScript_Grunts_Fight_A::
# 56 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, MtPyre_1F_Movement_Grunt_Advance_B
# 57 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, MtPyre_1F_Movement_Grunt_Advance_B
# 58 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_1F_Movement_EmmieStepBack
# 59 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtPyre_1F_Movement_MoveForEmmie
# 60 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 61 "data/maps/MtPyre_1F/scripts.pory"
	multi_2p_vs_2 TRAINER_PYRE_MAGMAGRUNT6, MtPyre_1F_Text_Pyre_MagmaGrunt6Defeat, TRAINER_PYRE_AQUAGRUNT4, MtPyre_1F_Text_Pyre_AquaGrunt4Defeat, PARTNER_EMMIE
# 62 "data/maps/MtPyre_1F/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/MtPyre_1F/scripts.pory"
	case 1, MtPyre_1F_EventScript_Pyre_AquaGrunt4Pyre_MagmaGrunt6Victory
# 64 "data/maps/MtPyre_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 65 "data/maps/MtPyre_1F/scripts.pory"
	special SetCB2WhiteOut
# 66 "data/maps/MtPyre_1F/scripts.pory"
	waitstate
# 67 "data/maps/MtPyre_1F/scripts.pory"

# 68 "data/maps/MtPyre_1F/scripts.pory"
MtPyre1F_EventScript_Grunts_Fight_B::
# 69 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, MtPyre_1F_Movement_Grunt_Advance_B
# 70 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, MtPyre_1F_Movement_Grunt_Advance_B
# 71 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 72 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 73 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/MtPyre_1F/scripts.pory"
	multi_2p_vs_2 TRAINER_PYRE_AQUAGRUNT4, MtPyre_1F_Text_Pyre_AquaGrunt4Defeat, TRAINER_PYRE_MAGMAGRUNT6, MtPyre_1F_Text_Pyre_MagmaGrunt6Defeat, PARTNER_EMMIE
# 75 "data/maps/MtPyre_1F/scripts.pory"
	switch VAR_RESULT
# 76 "data/maps/MtPyre_1F/scripts.pory"
	case 1, MtPyre_1F_EventScript_Pyre_AquaGrunt4Pyre_MagmaGrunt6Victory
# 77 "data/maps/MtPyre_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/MtPyre_1F/scripts.pory"
	special SetCB2WhiteOut
# 79 "data/maps/MtPyre_1F/scripts.pory"
	waitstate
# 80 "data/maps/MtPyre_1F/scripts.pory"

# 81 "data/maps/MtPyre_1F/scripts.pory"
MtPyre1F_EventScript_Grunts_Fight_C::
# 82 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, MtPyre_1F_Movement_Grunt_Advance_C
# 83 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, MtPyre_1F_Movement_Grunt_Advance_C
# 84 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtPyre_1F_Movement_EmmieStepBack
# 85 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_1F_Movement_MoveForEmmie
# 86 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 87 "data/maps/MtPyre_1F/scripts.pory"
	multi_2p_vs_2 TRAINER_PYRE_AQUAGRUNT4, MtPyre_1F_Text_Pyre_AquaGrunt4Defeat, TRAINER_PYRE_MAGMAGRUNT6, MtPyre_1F_Text_Pyre_MagmaGrunt6Defeat, PARTNER_EMMIE
# 88 "data/maps/MtPyre_1F/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/MtPyre_1F/scripts.pory"
	case 1, MtPyre_1F_EventScript_Pyre_AquaGrunt4Pyre_MagmaGrunt6Victory
# 90 "data/maps/MtPyre_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 91 "data/maps/MtPyre_1F/scripts.pory"
	special SetCB2WhiteOut
# 92 "data/maps/MtPyre_1F/scripts.pory"
	waitstate
# 93 "data/maps/MtPyre_1F/scripts.pory"

# 94 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Pyre_AquaGrunt4Pyre_MagmaGrunt6Victory::
# 95 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterLeft
# 96 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 97 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_Pyre_AquaGrunt4PostBattle, MSGBOX_DEFAULT
# 98 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 99 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, MtPyre_1F_Movement_AquaGruntLeave
# 100 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterLeft
# 102 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 103 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_Pyre_MagmaGrunt6PostBattle, MSGBOX_DEFAULT
# 104 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 105 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, MtPyre_1F_Movement_MagmaGruntLeave
# 106 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 107 "data/maps/MtPyre_1F/scripts.pory"
	removeobject LOCALID_PYRE_AQUAGRUNT4
# 108 "data/maps/MtPyre_1F/scripts.pory"
	removeobject LOCALID_PYRE_MAGMAGRUNT6
# 109 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_1F_GRUNTS
# 110 "data/maps/MtPyre_1F/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 111 "data/maps/MtPyre_1F/scripts.pory"
	addvar VAR_MT_PYRE_STATE, 1
# 112 "data/maps/MtPyre_1F/scripts.pory"
	releaseall
# 113 "data/maps/MtPyre_1F/scripts.pory"
	end
# 114 "data/maps/MtPyre_1F/scripts.pory"

# 115 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_CleanseTagWoman::
# 116 "data/maps/MtPyre_1F/scripts.pory"
	lock
# 117 "data/maps/MtPyre_1F/scripts.pory"
	faceplayer
# 118 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
# 119 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
# 120 "data/maps/MtPyre_1F/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 121 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 122 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_RECEIVED_CLEANSE_TAG
# 123 "data/maps/MtPyre_1F/scripts.pory"
	release
# 124 "data/maps/MtPyre_1F/scripts.pory"
	end
# 125 "data/maps/MtPyre_1F/scripts.pory"

# 126 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_ReceivedCleanseTag::
# 127 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
# 128 "data/maps/MtPyre_1F/scripts.pory"
	release
# 129 "data/maps/MtPyre_1F/scripts.pory"
	end
# 130 "data/maps/MtPyre_1F/scripts.pory"

# 131 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Pyre_AquaGrunt4::
# 132 "data/maps/MtPyre_1F/scripts.pory"
	lockall
# 133 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_CantYouSeeWereBusy, MSGBOX_NPC
# 134 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_FaceOriginalDirection
# 135 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 136 "data/maps/MtPyre_1F/scripts.pory"
	releaseall
# 137 "data/maps/MtPyre_1F/scripts.pory"
	end
# 138 "data/maps/MtPyre_1F/scripts.pory"

# 139 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Pyre_MagmaGrunt6::
# 140 "data/maps/MtPyre_1F/scripts.pory"
	lockall
# 141 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_TeamAquaWillNeverWin, MSGBOX_NPC
# 142 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_FaceOriginalDirection
# 143 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 144 "data/maps/MtPyre_1F/scripts.pory"
	releaseall
# 145 "data/maps/MtPyre_1F/scripts.pory"
	end
# 146 "data/maps/MtPyre_1F/scripts.pory"

# 147 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_PlayerWalkDown:
# 148 "data/maps/MtPyre_1F/scripts.pory"
	walk_down
# 149 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 150 "data/maps/MtPyre_1F/scripts.pory"

# 151 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_MoveTowardsGrunts:
# 152 "data/maps/MtPyre_1F/scripts.pory"
	emote_exclamation_mark
# 153 "data/maps/MtPyre_1F/scripts.pory"
	walk_down
# 154 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 155 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 156 "data/maps/MtPyre_1F/scripts.pory"

# 157 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_MoveForEmmie:
# 158 "data/maps/MtPyre_1F/scripts.pory"
	emote_exclamation_mark
# 159 "data/maps/MtPyre_1F/scripts.pory"
	walk_down
# 160 "data/maps/MtPyre_1F/scripts.pory"
	face_right
# 161 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 162 "data/maps/MtPyre_1F/scripts.pory"
	
# 163 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_EmmieStepBack:
# 164 "data/maps/MtPyre_1F/scripts.pory"
	emote_exclamation_mark
# 165 "data/maps/MtPyre_1F/scripts.pory"
	lock_facing_direction
# 166 "data/maps/MtPyre_1F/scripts.pory"
	walk_slow_left
# 167 "data/maps/MtPyre_1F/scripts.pory"
	unlock_facing_direction
# 168 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 169 "data/maps/MtPyre_1F/scripts.pory"

# 170 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_Grunt_Advance_A:
# 171 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 172 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 173 "data/maps/MtPyre_1F/scripts.pory"

# 174 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_Grunt_Advance_B:
# 175 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 176 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 177 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 178 "data/maps/MtPyre_1F/scripts.pory"

# 179 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_Grunt_Advance_C:
# 180 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 181 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 182 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 183 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 184 "data/maps/MtPyre_1F/scripts.pory"

# 185 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_AquaGruntLeave:
# 186 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 187 "data/maps/MtPyre_1F/scripts.pory"
	walk_down
# 188 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 189 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 190 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 191 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 192 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 193 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 194 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 195 "data/maps/MtPyre_1F/scripts.pory"

# 196 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_MagmaGruntLeave:
# 197 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 198 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 199 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 200 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 201 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 202 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 203 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 204 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 205 "data/maps/MtPyre_1F/scripts.pory"

# 206 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_Pyre_AquaGrunt4Defeat:
# 207 "data/maps/MtPyre_1F/scripts.pory"
	.string "This wasn't supposed to happen!$"
# 208 "data/maps/MtPyre_1F/scripts.pory"

# 209 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_Pyre_MagmaGrunt6Defeat:
# 210 "data/maps/MtPyre_1F/scripts.pory"
	.string "Now we're definitely in trouble!$"
# 211 "data/maps/MtPyre_1F/scripts.pory"

# 212 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_Pyre_AquaGrunt4PostBattle:
# 213 "data/maps/MtPyre_1F/scripts.pory"
	.string "Aqua Grunt: Archie's gonna be mad at\n"
# 214 "data/maps/MtPyre_1F/scripts.pory"
	.string "me for this!$"
# 215 "data/maps/MtPyre_1F/scripts.pory"

# 216 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_Pyre_MagmaGrunt6PostBattle:
# 217 "data/maps/MtPyre_1F/scripts.pory"
	.string "Magma Grunt: And I don't want to be\n"
# 218 "data/maps/MtPyre_1F/scripts.pory"
	.string "on receiving end of Tabitha's wrath!$"
# 219 "data/maps/MtPyre_1F/scripts.pory"

# 220 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_WhereDidTheyComeFrom:
# 221 "data/maps/MtPyre_1F/scripts.pory"
	.string "Magma Grunt: Where the heck did you\n"
# 222 "data/maps/MtPyre_1F/scripts.pory"
	.string "guys come from?!$"
# 223 "data/maps/MtPyre_1F/scripts.pory"

# 224 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_WereBothInTrouble:
# 225 "data/maps/MtPyre_1F/scripts.pory"
	.string "Aqua Grunt: We're both in trouble\n"
# 226 "data/maps/MtPyre_1F/scripts.pory"
	.string "if these kids make it to the summit!$"
# 227 "data/maps/MtPyre_1F/scripts.pory"

# 228 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_EnemyOfMyEnemy:
# 229 "data/maps/MtPyre_1F/scripts.pory"
	.string "Magma Grunt: Enemy of my enemy?$"
# 230 "data/maps/MtPyre_1F/scripts.pory"

# 231 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_EnemyOfMyEnemy2:
# 232 "data/maps/MtPyre_1F/scripts.pory"
	.string "Aqua Grunt: Enemy of my enemy.$"
# 233 "data/maps/MtPyre_1F/scripts.pory"

# 234 "data/maps/MtPyre_1F/scripts.pory"

# 235 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_TakeThisForYourOwnGood:
# 236 "data/maps/MtPyre_1F/scripts.pory"
	.string "All sorts of beings wander the slopes\n"
# 237 "data/maps/MtPyre_1F/scripts.pory"
	.string "of MT. PYRE…\p"
# 238 "data/maps/MtPyre_1F/scripts.pory"
	.string "There is no telling what may happen.\n"
# 239 "data/maps/MtPyre_1F/scripts.pory"
	.string "Take this. It's for your own good.$"
# 240 "data/maps/MtPyre_1F/scripts.pory"

# 241 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ExplainCleanseTag:
# 242 "data/maps/MtPyre_1F/scripts.pory"
	.string "Have a POKéMON hold that\n"
# 243 "data/maps/MtPyre_1F/scripts.pory"
	.string "CLEANSE TAG.\p"
# 244 "data/maps/MtPyre_1F/scripts.pory"
	.string "It will help ward off wild POKéMON.$"
# 245 "data/maps/MtPyre_1F/scripts.pory"

# 246 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_CantYouSeeWereBusy:
# 247 "data/maps/MtPyre_1F/scripts.pory"
	.string "Can't you see I'm in the middle of\n"
# 248 "data/maps/MtPyre_1F/scripts.pory"
	.string "something?!$"
# 249 "data/maps/MtPyre_1F/scripts.pory"

# 250 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_TeamAquaWillNeverWin:
# 251 "data/maps/MtPyre_1F/scripts.pory"
	.string "Team Aqua will never prevail over\n"
# 252 "data/maps/MtPyre_1F/scripts.pory"
	.string "Team Magma!$"
# 253 "data/maps/MtPyre_1F/scripts.pory"

# 254 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ComeToPayRespects:
# 255 "data/maps/MtPyre_1F/scripts.pory"
	.string "Did you come to pay your respect\n"
# 256 "data/maps/MtPyre_1F/scripts.pory"
	.string "to the spirits of departed POKéMON?\p"
# 257 "data/maps/MtPyre_1F/scripts.pory"
	.string "You must care for your POKéMON a lot.$"
# 258 "data/maps/MtPyre_1F/scripts.pory"

# 259 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_RestingPlaceOfZigzagoon:
# 260 "data/maps/MtPyre_1F/scripts.pory"
	.string "This is the final resting place of my\n"
# 261 "data/maps/MtPyre_1F/scripts.pory"
	.string "ZIGZAGOON. I cherished it…$"
