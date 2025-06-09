# 1 "data/maps/AquaHideout_1F/scripts.pory"

# 2 "data/maps/AquaHideout_1F/scripts.pory"
.set LOCALID_TABITHA, 3
# 3 "data/maps/AquaHideout_1F/scripts.pory"
.set LOCALID_EMMIE, 4
# 4 "data/maps/AquaHideout_1F/scripts.pory"

# 5 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_MapScripts::
# 6 "data/maps/AquaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AquaHideout_1F_OnFrame
# 7 "data/maps/AquaHideout_1F/scripts.pory"
	.byte 0
# 8 "data/maps/AquaHideout_1F/scripts.pory"

# 9 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_OnFrame:
# 10 "data/maps/AquaHideout_1F/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 47, AquaHideout_1F_EventScript_ProgressEmmieState
# 11 "data/maps/AquaHideout_1F/scripts.pory"
	.2byte 0
# 12 "data/maps/AquaHideout_1F/scripts.pory"

# 13 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_ProgressEmmieState::
# 14 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 48
# 15 "data/maps/AquaHideout_1F/scripts.pory"
	return
# 16 "data/maps/AquaHideout_1F/scripts.pory"

# 17 "data/maps/AquaHideout_1F/scripts.pory"
@ The below two entrance guards give hints about what to do to progress the story
# 18 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
# 19 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 20 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 21 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint1
# 22 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint1
# 23 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
# 24 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 25 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 26 "data/maps/AquaHideout_1F/scripts.pory"

# 27 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_FirstEntrance::
# 28 "data/maps/AquaHideout_1F/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 10, 34
# 29 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceUp
# 30 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/AquaHideout_1F/scripts.pory"
	addobject LOCALID_SHELLY
# 32 "data/maps/AquaHideout_1F/scripts.pory"
	playse SE_PIN
# 33 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_1F_Movement_PlayerEnterHideout
# 34 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_1F_Movement_EmmieEnterHideout
# 35 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 36 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 37 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 38 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 39 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieYouAgain, MSGBOX_DEFAULT
# 40 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 41 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 42 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaKnewYouWouldCome, MSGBOX_DEFAULT
# 44 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 45 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 46 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 47 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieYoureOneToTalk, MSGBOX_DEFAULT
# 48 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 49 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 50 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaNotHereForALecture, MSGBOX_DEFAULT
# 52 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_FaceUp
# 54 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 55 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaIveWatchedYou, MSGBOX_DEFAULT
# 56 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	playse SE_PIN
# 58 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 59 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_FaceLeft
# 62 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieHeDidWhat, MSGBOX_DEFAULT
# 64 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 66 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 67 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaTemporaryTruce, MSGBOX_DEFAULT
# 69 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 70 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 71 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 72 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieDontLikeThis, MSGBOX_DEFAULT
# 73 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 74 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 75 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 76 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 77 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaThatSettlesIt, MSGBOX_DEFAULT
# 78 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 79 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 80 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 81 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieBeRightHere, MSGBOX_DEFAULT
# 82 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 83 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 84 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, AquaHideout_1F_Movement_TabithaJoin
# 85 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 86 "data/maps/AquaHideout_1F/scripts.pory"
	addobject LOCALID_EMMIE
# 87 "data/maps/AquaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
# 88 "data/maps/AquaHideout_1F/scripts.pory"
	destroyfollowernpc
# 89 "data/maps/AquaHideout_1F/scripts.pory"
	setfollowernpc 3, FNPC_WHITE_OUT, Common_EventScript_Tabitha, PARTNER_TABITHA
# 90 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 91 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_B2F_EMMIE
# 92 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 49
# 93 "data/maps/AquaHideout_1F/scripts.pory"
	addvar VAR_FOLLOWER_AQUA_HIDEOUT_TABITHA, 1
# 94 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 95 "data/maps/AquaHideout_1F/scripts.pory"

# 96 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_LaterEntrance::
# 97 "data/maps/AquaHideout_1F/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 98 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_4, 10, AquaHideout_1F_EventScript_LeavingHideout
# 99 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_4, 12, AquaHideout_1F_EventScript_EnteringHideout
# 100 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 101 "data/maps/AquaHideout_1F/scripts.pory"

# 102 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_LeavingHideout::
# 103 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 104 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 105 "data/maps/AquaHideout_1F/scripts.pory"
 	waitmovement 0
# 106 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaDontBeLong, MSGBOX_DEFAULT
# 107 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage 
# 108 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_1F_Movement_TabithaWaiting
# 109 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 110 "data/maps/AquaHideout_1F/scripts.pory"
	addobject LOCALID_TABITHA
# 111 "data/maps/AquaHideout_1F/scripts.pory"
	destroyfollowernpc
# 112 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_1F_Movement_PlayerLeaving
# 113 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_EMMIE, AquaHideout_1F_Movement_EmmieLeaving
# 114 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 115 "data/maps/AquaHideout_1F/scripts.pory"
	setfollowernpc 4, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
# 116 "data/maps/AquaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 117 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 48
# 118 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
# 119 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 120 "data/maps/AquaHideout_1F/scripts.pory"

# 121 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_EnteringHideout::
# 122 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_1F_Movement_PlayerEnterHideout
# 123 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_1F_Movement_EmmieEnterHideout
# 124 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, AquaHideout_1F_Movement_TabithaRejoin
# 125 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 126 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterUp
# 127 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 128 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaThanksForComingBack, MSGBOX_DEFAULT
# 129 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 130 "data/maps/AquaHideout_1F/scripts.pory"
	addobject LOCALID_EMMIE
# 131 "data/maps/AquaHideout_1F/scripts.pory"
	destroyfollowernpc
# 132 "data/maps/AquaHideout_1F/scripts.pory"
	setfollowernpc 3, FNPC_WHITE_OUT, Common_EventScript_Tabitha, PARTNER_TABITHA
# 133 "data/maps/AquaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
# 134 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 49
# 135 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 136 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 137 "data/maps/AquaHideout_1F/scripts.pory"

# 138 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Emmie::
# 139 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 140 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieBeRightHere, MSGBOX_DEFAULT
# 141 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 142 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_FaceOriginalDirection
# 143 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 144 "data/maps/AquaHideout_1F/scripts.pory"

# 145 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PlayerEnterHideout:
# 146 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 147 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 148 "data/maps/AquaHideout_1F/scripts.pory"
	face_down
# 149 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 150 "data/maps/AquaHideout_1F/scripts.pory"

# 151 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_EmmieEnterHideout:
# 152 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 153 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 154 "data/maps/AquaHideout_1F/scripts.pory"
	walk_left
# 155 "data/maps/AquaHideout_1F/scripts.pory"
	face_right
# 156 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 157 "data/maps/AquaHideout_1F/scripts.pory"

# 158 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaThanksForComingBack:
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: Thanks for coming back. Hurry\n"
# 160 "data/maps/AquaHideout_1F/scripts.pory"
	.string "up, let's get moving.$"
# 161 "data/maps/AquaHideout_1F/scripts.pory"

# 162 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_TabithaJoin:
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 164 "data/maps/AquaHideout_1F/scripts.pory"
	walk_left
# 165 "data/maps/AquaHideout_1F/scripts.pory"
	face_up
# 166 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 167 "data/maps/AquaHideout_1F/scripts.pory"

# 168 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_TabithaRejoin:
# 169 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 170 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 171 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 172 "data/maps/AquaHideout_1F/scripts.pory"
	walk_left
# 173 "data/maps/AquaHideout_1F/scripts.pory"
	face_up
# 174 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 175 "data/maps/AquaHideout_1F/scripts.pory"

# 176 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint1::
# 177 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
# 178 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 179 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 180 "data/maps/AquaHideout_1F/scripts.pory"

# 181 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint1::
# 182 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
# 183 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 184 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 185 "data/maps/AquaHideout_1F/scripts.pory"

# 186 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
# 187 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 188 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 189 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint2
# 190 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint2
# 191 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
# 192 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 193 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 194 "data/maps/AquaHideout_1F/scripts.pory"

# 195 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint2::
# 196 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
# 197 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 198 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 199 "data/maps/AquaHideout_1F/scripts.pory"

# 200 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint2::
# 201 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
# 202 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 203 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 204 "data/maps/AquaHideout_1F/scripts.pory"

# 205 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1::
# 206 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 207 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 209 "data/maps/AquaHideout_1F/scripts.pory"

# 210 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1Defeated::
# 211 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
# 212 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 213 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 214 "data/maps/AquaHideout_1F/scripts.pory"

# 215 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PlayerLeaving:
# 216 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 217 "data/maps/AquaHideout_1F/scripts.pory"
	walk_down
# 218 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 219 "data/maps/AquaHideout_1F/scripts.pory"

# 220 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_EmmieLeaving:
# 221 "data/maps/AquaHideout_1F/scripts.pory"
	walk_right
# 222 "data/maps/AquaHideout_1F/scripts.pory"
	walk_down
# 223 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 224 "data/maps/AquaHideout_1F/scripts.pory"

# 225 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_TabithaWaiting:
# 226 "data/maps/AquaHideout_1F/scripts.pory"
	walk_right
# 227 "data/maps/AquaHideout_1F/scripts.pory"
	face_left
# 228 "data/maps/AquaHideout_1F/scripts.pory"
	step_end 
# 229 "data/maps/AquaHideout_1F/scripts.pory"

# 230 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaDontBeLong:
# 231 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: You need to leave?\p"
# 232 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tick, tock… We haven't got all day you\n"
# 233 "data/maps/AquaHideout_1F/scripts.pory"
	.string "know… I'll be waiting here.$"
# 234 "data/maps/AquaHideout_1F/scripts.pory"

# 235 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieBeRightHere:
# 236 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: {PLAYER}, I'll be waiting here for\n"
# 237 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you, and we can leave any time you want.$"
# 238 "data/maps/AquaHideout_1F/scripts.pory"

# 239 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaThatSettlesIt:
# 240 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: That settles it then!\p"
# 241 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie, you wait here, and I'll have\n"
# 242 "data/maps/AquaHideout_1F/scripts.pory"
	.string "{PLAYER} back in no time.\p"
# 243 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Hehe… What's the matter, don't you trust\n"
# 244 "data/maps/AquaHideout_1F/scripts.pory"
	.string "me?$"
# 245 "data/maps/AquaHideout_1F/scripts.pory"

# 246 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieDontLikeThis:
# 247 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: I don't like this one bit, but\n"
# 248 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I know what you are going to say.\p"
# 249 "data/maps/AquaHideout_1F/scripts.pory"
	.string "You've proven yourself capable and I\n"
# 250 "data/maps/AquaHideout_1F/scripts.pory"
	.string "trust that you will be okay.$"
# 251 "data/maps/AquaHideout_1F/scripts.pory"

# 252 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaTemporaryTruce:
# 253 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: Oh quit fussing. {PLAYER} is fine,\n"
# 254 "data/maps/AquaHideout_1F/scripts.pory"
	.string "barely a singed hair.\p"
# 255 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Anyway, as you know, I'm not against\n"
# 256 "data/maps/AquaHideout_1F/scripts.pory"
	.string "forging alliances when necessary.\p"
# 257 "data/maps/AquaHideout_1F/scripts.pory"
	.string "So how about we call a temporary truce\n"
# 258 "data/maps/AquaHideout_1F/scripts.pory"
	.string "and find out what's going on in here?$"
# 259 "data/maps/AquaHideout_1F/scripts.pory"

# 260 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieHeDidWhat:
# 261 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: They did what?\p"
# 262 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Well you certainly kept quiet about that\n"
# 263 "data/maps/AquaHideout_1F/scripts.pory"
	.string "little detail!$"
# 264 "data/maps/AquaHideout_1F/scripts.pory"

# 265 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaNotHereForALecture:
# 266 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: Save it. I'm not interested in\n"
# 267 "data/maps/AquaHideout_1F/scripts.pory"
	.string "the whinges of a child.\p"
# 268 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What I am interested in are your\n"
# 269 "data/maps/AquaHideout_1F/scripts.pory"
	.string "battling skills.$"
# 270 "data/maps/AquaHideout_1F/scripts.pory"

# 271 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaIveWatchedYou:
# 272 "data/maps/AquaHideout_1F/scripts.pory"
	.string "{PLAYER}, I've watched you handle yourself\n"
# 273 "data/maps/AquaHideout_1F/scripts.pory"
	.string "in battle with Maxie and Archie.\p"
# 274 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Courtney and I even had you backed up\n"
# 275 "data/maps/AquaHideout_1F/scripts.pory"
	.string "against a pit of magma in the heart of\l"
# 276 "data/maps/AquaHideout_1F/scripts.pory"
	.string "a volcano and you didn't give in.$"
# 277 "data/maps/AquaHideout_1F/scripts.pory"

# 278 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieYoureOneToTalk:
# 279 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: You're one to talk. Have you felt\n"
# 280 "data/maps/AquaHideout_1F/scripts.pory"
	.string "how hot it is outside?\p"
# 281 "data/maps/AquaHideout_1F/scripts.pory"
	.string "You're both as bad as each other and you\n"
# 282 "data/maps/AquaHideout_1F/scripts.pory"
	.string "leave only destruction wherever you go!$"
# 283 "data/maps/AquaHideout_1F/scripts.pory"

# 284 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaKnewYouWouldCome:
# 285 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: Heh… Surprised are we?\p"
# 286 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I knew if I waited here you would turn\n"
# 287 "data/maps/AquaHideout_1F/scripts.pory"
	.string "up sooner or later.\p"
# 288 "data/maps/AquaHideout_1F/scripts.pory"
	.string "We both heard Shelly talk of retaliation\n"
# 289 "data/maps/AquaHideout_1F/scripts.pory"
	.string "back at our hideout, and Maxie wants me\l"
# 290 "data/maps/AquaHideout_1F/scripts.pory"
	.string "to uncover Team Aqua's plans.\p"
# 291 "data/maps/AquaHideout_1F/scripts.pory"
	.string "We heard about Team Aqua stealing that\n"
# 292 "data/maps/AquaHideout_1F/scripts.pory"
	.string "submarine from Slateport City.\p"
# 293 "data/maps/AquaHideout_1F/scripts.pory"
	.string "After Mt. Pyre it doesn't take a genius\n"
# 294 "data/maps/AquaHideout_1F/scripts.pory"
	.string "to work out their goal.$"
# 295 "data/maps/AquaHideout_1F/scripts.pory"

# 296 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieYouAgain:
# 297 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: You again?$"
# 298 "data/maps/AquaHideout_1F/scripts.pory"

# 299 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_OurBossIsSnatchingSomething:
# 300 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 301 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 302 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here! He's gone off to\n"
# 303 "data/maps/AquaHideout_1F/scripts.pory"
	.string "snatch something important!\p"
# 304 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 305 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Where did he go?\p"
# 306 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 307 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 308 "data/maps/AquaHideout_1F/scripts.pory"

# 309 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
# 310 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
# 311 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Are you a TEAM MAGMA grunt?\p"
# 312 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I hear that TEAM MAGMA is trying to\n"
# 313 "data/maps/AquaHideout_1F/scripts.pory"
	.string "awaken an awesome POKéMON at their\l"
# 314 "data/maps/AquaHideout_1F/scripts.pory"
	.string "HIDEOUT.\p"
# 315 "data/maps/AquaHideout_1F/scripts.pory"
	.string "But where might their HIDEOUT be?$"
# 316 "data/maps/AquaHideout_1F/scripts.pory"

# 317 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossWentToJackASubmarine:
# 318 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 319 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 320 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here!\n"
# 321 "data/maps/AquaHideout_1F/scripts.pory"
	.string "He's gone off to jack a submarine!\p"
# 322 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 323 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Where did he go?\p"
# 324 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 325 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 326 "data/maps/AquaHideout_1F/scripts.pory"

# 327 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsOnRoute122:
# 328 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 329 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 330 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here! He's on his way to\n"
# 331 "data/maps/AquaHideout_1F/scripts.pory"
	.string "MT. PYRE on ROUTE 122!\p"
# 332 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 333 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Why did he go?\p"
# 334 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 335 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 336 "data/maps/AquaHideout_1F/scripts.pory"

# 337 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TeamMagmaAtMtChimney:
# 338 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
# 339 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Are you a TEAM MAGMA grunt?\p"
# 340 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I hear that TEAM MAGMA is after\n"
# 341 "data/maps/AquaHideout_1F/scripts.pory"
	.string "an awesome POKéMON at MT. CHIMNEY.\p"
# 342 "data/maps/AquaHideout_1F/scripts.pory"
	.string "But what is that POKéMON like?$"
# 343 "data/maps/AquaHideout_1F/scripts.pory"

# 344 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsInSlateportCity:
# 345 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with\n"
# 346 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 347 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here!\n"
# 348 "data/maps/AquaHideout_1F/scripts.pory"
	.string "He's on his way to SLATEPORT CITY!\p"
# 349 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 350 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Why did he go?\p"
# 351 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 352 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 353 "data/maps/AquaHideout_1F/scripts.pory"

# 354 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Intro:
# 355 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ayiyiyi!\n"
# 356 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Suspicious character spotted!$"
# 357 "data/maps/AquaHideout_1F/scripts.pory"

# 358 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Defeat:
# 359 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Grrrrr…\n"
# 360 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I lost it!$"
# 361 "data/maps/AquaHideout_1F/scripts.pory"

# 362 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1PostBattle:
# 363 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I took the loss for the TEAM,\n"
# 364 "data/maps/AquaHideout_1F/scripts.pory"
	.string "but I did my job…$"
