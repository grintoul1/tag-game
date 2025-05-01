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
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 15 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/MtPyre_1F/scripts.pory"
	playse SE_PIN
# 17 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 18 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_ExclamationMark
# 19 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_ExclamationMark
# 20 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterLeft
# 22 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterLeft
# 23 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 24 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterLeft
# 25 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_WhereDidTheyComeFrom, MSGBOX_DEFAULT
# 27 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 28 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterDown
# 29 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterUp
# 30 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterDown
# 32 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_WereBothInTrouble, MSGBOX_DEFAULT
# 34 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 35 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterUp
# 36 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 37 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_EnemyOfMyEnemy, MSGBOX_DEFAULT
# 38 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 39 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterDown
# 40 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 41 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_EnemyOfMyEnemy2, MSGBOX_DEFAULT
# 42 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 43 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterLeft
# 44 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterLeft
# 45 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/MtPyre_1F/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 47 "data/maps/MtPyre_1F/scripts.pory"
	playse SE_PIN
# 48 "data/maps/MtPyre_1F/scripts.pory"
	call_if_eq VAR_TEMP_2, 6, MtPyre1F_EventScript_Grunts_Fight_A
# 49 "data/maps/MtPyre_1F/scripts.pory"
	call_if_eq VAR_TEMP_2, 5, MtPyre1F_EventScript_Grunts_Fight_B
# 50 "data/maps/MtPyre_1F/scripts.pory"
	call_if_eq VAR_TEMP_2, 4, MtPyre1F_EventScript_Grunts_Fight_C
# 51 "data/maps/MtPyre_1F/scripts.pory"
	end
# 52 "data/maps/MtPyre_1F/scripts.pory"

# 53 "data/maps/MtPyre_1F/scripts.pory"

# 54 "data/maps/MtPyre_1F/scripts.pory"
MtPyre1F_EventScript_Grunts_Fight_A::
# 55 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, MtPyre_1F_Movement_Grunt_Advance_A
# 56 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, MtPyre_1F_Movement_Grunt_Advance_A
# 57 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 58 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/MtPyre_1F/scripts.pory"
	multi_2p_vs_2 TRAINER_PYRE_MAGMAGRUNT6, MtPyre_1F_Text_Pyre_MagmaGrunt6Defeat, TRAINER_PYRE_AQUAGRUNT4, MtPyre_1F_Text_Pyre_AquaGrunt4Defeat, PARTNER_EMMIE
# 60 "data/maps/MtPyre_1F/scripts.pory"
	switch VAR_RESULT
# 61 "data/maps/MtPyre_1F/scripts.pory"
	case 1, MtPyre_1F_EventScript_Pyre_AquaGrunt4Pyre_MagmaGrunt6Victory
# 62 "data/maps/MtPyre_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 63 "data/maps/MtPyre_1F/scripts.pory"
	special SetCB2WhiteOut
# 64 "data/maps/MtPyre_1F/scripts.pory"
	waitstate
# 65 "data/maps/MtPyre_1F/scripts.pory"

# 66 "data/maps/MtPyre_1F/scripts.pory"
MtPyre1F_EventScript_Grunts_Fight_B::
# 67 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, MtPyre_1F_Movement_Grunt_Advance_B
# 68 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, MtPyre_1F_Movement_Grunt_Advance_B
# 69 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 70 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/MtPyre_1F/scripts.pory"
	multi_2p_vs_2 TRAINER_PYRE_AQUAGRUNT4, MtPyre_1F_Text_Pyre_AquaGrunt4Defeat, TRAINER_PYRE_MAGMAGRUNT6, MtPyre_1F_Text_Pyre_MagmaGrunt6Defeat, PARTNER_EMMIE
# 72 "data/maps/MtPyre_1F/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/MtPyre_1F/scripts.pory"
	case 1, MtPyre_1F_EventScript_Pyre_AquaGrunt4Pyre_MagmaGrunt6Victory
# 74 "data/maps/MtPyre_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 75 "data/maps/MtPyre_1F/scripts.pory"
	special SetCB2WhiteOut
# 76 "data/maps/MtPyre_1F/scripts.pory"
	waitstate
# 77 "data/maps/MtPyre_1F/scripts.pory"

# 78 "data/maps/MtPyre_1F/scripts.pory"
MtPyre1F_EventScript_Grunts_Fight_C::
# 79 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, MtPyre_1F_Movement_Grunt_Advance_C
# 80 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, MtPyre_1F_Movement_Grunt_Advance_C
# 81 "data/maps/MtPyre_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 82 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/MtPyre_1F/scripts.pory"

# 84 "data/maps/MtPyre_1F/scripts.pory"
	multi_2p_vs_2 TRAINER_PYRE_AQUAGRUNT4, MtPyre_1F_Text_Pyre_AquaGrunt4Defeat, TRAINER_PYRE_MAGMAGRUNT6, MtPyre_1F_Text_Pyre_MagmaGrunt6Defeat, PARTNER_EMMIE
# 85 "data/maps/MtPyre_1F/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/MtPyre_1F/scripts.pory"
	case 1, MtPyre_1F_EventScript_Pyre_AquaGrunt4Pyre_MagmaGrunt6Victory
# 87 "data/maps/MtPyre_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/MtPyre_1F/scripts.pory"
	special SetCB2WhiteOut
# 89 "data/maps/MtPyre_1F/scripts.pory"
	waitstate
# 90 "data/maps/MtPyre_1F/scripts.pory"

# 91 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Pyre_AquaGrunt4Pyre_MagmaGrunt6Victory::
# 92 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_WalkInPlaceFasterLeft
# 93 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 94 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_Pyre_AquaGrunt4PostBattle, MSGBOX_DEFAULT
# 95 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 96 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, MtPyre_1F_Movement_AquaGruntLeave
# 97 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_WalkInPlaceFasterLeft
# 99 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 100 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_Pyre_MagmaGrunt6PostBattle, MSGBOX_DEFAULT
# 101 "data/maps/MtPyre_1F/scripts.pory"
	closemessage
# 102 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, MtPyre_1F_Movement_MagmaGruntLeave
# 103 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 104 "data/maps/MtPyre_1F/scripts.pory"
	removeobject LOCALID_PYRE_AQUAGRUNT4
# 105 "data/maps/MtPyre_1F/scripts.pory"
	removeobject LOCALID_PYRE_MAGMAGRUNT6
# 106 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_1F_GRUNTS
# 107 "data/maps/MtPyre_1F/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 108 "data/maps/MtPyre_1F/scripts.pory"
	addvar VAR_MT_PYRE_STATE, 1
# 109 "data/maps/MtPyre_1F/scripts.pory"
	releaseall
# 110 "data/maps/MtPyre_1F/scripts.pory"
	end
# 111 "data/maps/MtPyre_1F/scripts.pory"

# 112 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_CleanseTagWoman::
# 113 "data/maps/MtPyre_1F/scripts.pory"
	lock
# 114 "data/maps/MtPyre_1F/scripts.pory"
	faceplayer
# 115 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
# 116 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
# 117 "data/maps/MtPyre_1F/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 118 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 119 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_RECEIVED_CLEANSE_TAG
# 120 "data/maps/MtPyre_1F/scripts.pory"
	release
# 121 "data/maps/MtPyre_1F/scripts.pory"
	end
# 122 "data/maps/MtPyre_1F/scripts.pory"

# 123 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_ReceivedCleanseTag::
# 124 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
# 125 "data/maps/MtPyre_1F/scripts.pory"
	release
# 126 "data/maps/MtPyre_1F/scripts.pory"
	end
# 127 "data/maps/MtPyre_1F/scripts.pory"

# 128 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Pyre_AquaGrunt4::
# 129 "data/maps/MtPyre_1F/scripts.pory"
	lockall
# 130 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_CantYouSeeWereBusy, MSGBOX_NPC
# 131 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_AQUAGRUNT4, Common_Movement_FaceOriginalDirection
# 132 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 133 "data/maps/MtPyre_1F/scripts.pory"
	releaseall
# 134 "data/maps/MtPyre_1F/scripts.pory"
	end
# 135 "data/maps/MtPyre_1F/scripts.pory"

# 136 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Pyre_MagmaGrunt6::
# 137 "data/maps/MtPyre_1F/scripts.pory"
	lockall
# 138 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_TeamAquaWillNeverWin, MSGBOX_NPC
# 139 "data/maps/MtPyre_1F/scripts.pory"
	applymovement LOCALID_PYRE_MAGMAGRUNT6, Common_Movement_FaceOriginalDirection
# 140 "data/maps/MtPyre_1F/scripts.pory"
	waitmovement 0
# 141 "data/maps/MtPyre_1F/scripts.pory"
	releaseall
# 142 "data/maps/MtPyre_1F/scripts.pory"
	end
# 143 "data/maps/MtPyre_1F/scripts.pory"

# 144 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_PlayerWalkDown:
# 145 "data/maps/MtPyre_1F/scripts.pory"
	walk_down
# 146 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 147 "data/maps/MtPyre_1F/scripts.pory"

# 148 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_Grunt_Advance_A:
# 149 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 150 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 151 "data/maps/MtPyre_1F/scripts.pory"

# 152 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_Grunt_Advance_B:
# 153 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 154 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 155 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 156 "data/maps/MtPyre_1F/scripts.pory"

# 157 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_Grunt_Advance_C:
# 158 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 159 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 160 "data/maps/MtPyre_1F/scripts.pory"
	walk_left
# 161 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 162 "data/maps/MtPyre_1F/scripts.pory"

# 163 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_AquaGruntLeave:
# 164 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 165 "data/maps/MtPyre_1F/scripts.pory"
	walk_down
# 166 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 167 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 168 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 169 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 170 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 171 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 172 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 173 "data/maps/MtPyre_1F/scripts.pory"

# 174 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Movement_MagmaGruntLeave:
# 175 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 176 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 177 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 178 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 179 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 180 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 181 "data/maps/MtPyre_1F/scripts.pory"
	walk_right
# 182 "data/maps/MtPyre_1F/scripts.pory"
	step_end
# 183 "data/maps/MtPyre_1F/scripts.pory"

# 184 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_Pyre_AquaGrunt4Defeat:
# 185 "data/maps/MtPyre_1F/scripts.pory"
	.string "This wasn't supposed to happen!$"
# 186 "data/maps/MtPyre_1F/scripts.pory"

# 187 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_Pyre_MagmaGrunt6Defeat:
# 188 "data/maps/MtPyre_1F/scripts.pory"
	.string "Now we're definitely in trouble!$"
# 189 "data/maps/MtPyre_1F/scripts.pory"

# 190 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_Pyre_AquaGrunt4PostBattle:
# 191 "data/maps/MtPyre_1F/scripts.pory"
	.string "Aqua Grunt: Archie's gonna be mad at\n"
# 192 "data/maps/MtPyre_1F/scripts.pory"
	.string "me for this!$"
# 193 "data/maps/MtPyre_1F/scripts.pory"

# 194 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_Pyre_MagmaGrunt6PostBattle:
# 195 "data/maps/MtPyre_1F/scripts.pory"
	.string "Magma Grunt: And I don't want to be\n"
# 196 "data/maps/MtPyre_1F/scripts.pory"
	.string "on receiving end of Tabitha's wrath!$"
# 197 "data/maps/MtPyre_1F/scripts.pory"

# 198 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_WhereDidTheyComeFrom:
# 199 "data/maps/MtPyre_1F/scripts.pory"
	.string "Magma Grunt: Where the heck did you\n"
# 200 "data/maps/MtPyre_1F/scripts.pory"
	.string "guys come from?!$"
# 201 "data/maps/MtPyre_1F/scripts.pory"

# 202 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_WereBothInTrouble:
# 203 "data/maps/MtPyre_1F/scripts.pory"
	.string "Aqua Grunt: We're both in trouble\n"
# 204 "data/maps/MtPyre_1F/scripts.pory"
	.string "if these kids make it to the summit!$"
# 205 "data/maps/MtPyre_1F/scripts.pory"

# 206 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_EnemyOfMyEnemy:
# 207 "data/maps/MtPyre_1F/scripts.pory"
	.string "Magma Grunt: Enemy of my enemy?$"
# 208 "data/maps/MtPyre_1F/scripts.pory"

# 209 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_EnemyOfMyEnemy2:
# 210 "data/maps/MtPyre_1F/scripts.pory"
	.string "Aqua Grunt: Enemy of my enemy.$"
# 211 "data/maps/MtPyre_1F/scripts.pory"

# 212 "data/maps/MtPyre_1F/scripts.pory"

# 213 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_TakeThisForYourOwnGood:
# 214 "data/maps/MtPyre_1F/scripts.pory"
	.string "All sorts of beings wander the slopes\n"
# 215 "data/maps/MtPyre_1F/scripts.pory"
	.string "of MT. PYRE…\p"
# 216 "data/maps/MtPyre_1F/scripts.pory"
	.string "There is no telling what may happen.\n"
# 217 "data/maps/MtPyre_1F/scripts.pory"
	.string "Take this. It's for your own good.$"
# 218 "data/maps/MtPyre_1F/scripts.pory"

# 219 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ExplainCleanseTag:
# 220 "data/maps/MtPyre_1F/scripts.pory"
	.string "Have a POKéMON hold that\n"
# 221 "data/maps/MtPyre_1F/scripts.pory"
	.string "CLEANSE TAG.\p"
# 222 "data/maps/MtPyre_1F/scripts.pory"
	.string "It will help ward off wild POKéMON.$"
# 223 "data/maps/MtPyre_1F/scripts.pory"

# 224 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_CantYouSeeWereBusy:
# 225 "data/maps/MtPyre_1F/scripts.pory"
	.string "Can't you see I'm in the middle of\n"
# 226 "data/maps/MtPyre_1F/scripts.pory"
	.string "something?!$"
# 227 "data/maps/MtPyre_1F/scripts.pory"

# 228 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_TeamAquaWillNeverWin:
# 229 "data/maps/MtPyre_1F/scripts.pory"
	.string "Team Aqua will never prevail over\n"
# 230 "data/maps/MtPyre_1F/scripts.pory"
	.string "Team Magma!$"
# 231 "data/maps/MtPyre_1F/scripts.pory"

# 232 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ComeToPayRespects:
# 233 "data/maps/MtPyre_1F/scripts.pory"
	.string "Did you come to pay your respect\n"
# 234 "data/maps/MtPyre_1F/scripts.pory"
	.string "to the spirits of departed POKéMON?\p"
# 235 "data/maps/MtPyre_1F/scripts.pory"
	.string "You must care for your POKéMON a lot.$"
# 236 "data/maps/MtPyre_1F/scripts.pory"

# 237 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_RestingPlaceOfZigzagoon:
# 238 "data/maps/MtPyre_1F/scripts.pory"
	.string "This is the final resting place of my\n"
# 239 "data/maps/MtPyre_1F/scripts.pory"
	.string "ZIGZAGOON. I cherished it…$"
