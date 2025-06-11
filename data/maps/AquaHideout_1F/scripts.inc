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
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 29 "data/maps/AquaHideout_1F/scripts.pory"
	playse SE_PIN
# 30 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_1F_Movement_PlayerEnterHideout
# 31 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_1F_Movement_EmmieEnterHideout
# 32 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 33 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 35 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieYouAgain, MSGBOX_DEFAULT
# 37 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 38 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 39 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaKnewYouWouldCome, MSGBOX_DEFAULT
# 41 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 42 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 43 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieYoureOneToTalk, MSGBOX_DEFAULT
# 45 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 46 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 47 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 48 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaNotHereForALecture, MSGBOX_DEFAULT
# 49 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 50 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_FaceUp
# 51 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 52 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaIveWatchedYou, MSGBOX_DEFAULT
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 54 "data/maps/AquaHideout_1F/scripts.pory"
	playse SE_PIN
# 55 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 56 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 58 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_FaceLeft
# 59 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieHeDidWhat, MSGBOX_DEFAULT
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 62 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 64 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaTemporaryTruce, MSGBOX_DEFAULT
# 66 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 67 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 68 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 69 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieDontLikeThis, MSGBOX_DEFAULT
# 70 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 71 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 72 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 73 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaThatSettlesIt, MSGBOX_DEFAULT
# 75 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 76 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 77 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 78 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieBeRightHere, MSGBOX_DEFAULT
# 79 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 80 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 81 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, AquaHideout_1F_Movement_TabithaJoin
# 82 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/AquaHideout_1F/scripts.pory"
	addobject LOCALID_EMMIE
# 84 "data/maps/AquaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
# 85 "data/maps/AquaHideout_1F/scripts.pory"
	destroyfollowernpc
# 86 "data/maps/AquaHideout_1F/scripts.pory"
	setfollowernpc 3, FNPC_WHITE_OUT, Common_EventScript_Tabitha, PARTNER_TABITHA
# 87 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 88 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_B2F_EMMIE
# 89 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 49
# 90 "data/maps/AquaHideout_1F/scripts.pory"
	addvar VAR_FOLLOWER_AQUA_HIDEOUT_TABITHA, 1
# 91 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 92 "data/maps/AquaHideout_1F/scripts.pory"

# 93 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_LaterEntrance::
# 94 "data/maps/AquaHideout_1F/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 95 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_4, 10, AquaHideout_1F_EventScript_LeavingHideout
# 96 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_4, 12, AquaHideout_1F_EventScript_EnteringHideout
# 97 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 98 "data/maps/AquaHideout_1F/scripts.pory"

# 99 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_LeavingHideout::
# 100 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 101 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 102 "data/maps/AquaHideout_1F/scripts.pory"
 	waitmovement 0
# 103 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaDontBeLong, MSGBOX_DEFAULT
# 104 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage 
# 105 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_1F_Movement_TabithaWaiting
# 106 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 107 "data/maps/AquaHideout_1F/scripts.pory"
	addobject LOCALID_TABITHA
# 108 "data/maps/AquaHideout_1F/scripts.pory"
	destroyfollowernpc
# 109 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_1F_Movement_PlayerLeaving
# 110 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_EMMIE, AquaHideout_1F_Movement_EmmieLeaving
# 111 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 112 "data/maps/AquaHideout_1F/scripts.pory"
	setfollowernpc 4, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
# 113 "data/maps/AquaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 114 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 48
# 115 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
# 116 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 117 "data/maps/AquaHideout_1F/scripts.pory"

# 118 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_EnteringHideout::
# 119 "data/maps/AquaHideout_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 120 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_1F_Movement_PlayerEnterHideout
# 121 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_1F_Movement_EmmieEnterHideout
# 122 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, AquaHideout_1F_Movement_TabithaRejoin
# 123 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 124 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterUp
# 125 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 126 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaThanksForComingBack, MSGBOX_DEFAULT
# 127 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 128 "data/maps/AquaHideout_1F/scripts.pory"
	addobject LOCALID_EMMIE
# 129 "data/maps/AquaHideout_1F/scripts.pory"
	destroyfollowernpc
# 130 "data/maps/AquaHideout_1F/scripts.pory"
	setfollowernpc 3, FNPC_WHITE_OUT, Common_EventScript_Tabitha, PARTNER_TABITHA
# 131 "data/maps/AquaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
# 132 "data/maps/AquaHideout_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 49
# 133 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 134 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 135 "data/maps/AquaHideout_1F/scripts.pory"

# 136 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Emmie::
# 137 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 138 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieBeRightHere, MSGBOX_DEFAULT
# 139 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 140 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_FaceOriginalDirection
# 141 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 142 "data/maps/AquaHideout_1F/scripts.pory"

# 143 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PlayerEnterHideout:
# 144 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 145 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 146 "data/maps/AquaHideout_1F/scripts.pory"
	face_down
# 147 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 148 "data/maps/AquaHideout_1F/scripts.pory"

# 149 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_EmmieEnterHideout:
# 150 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 151 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 152 "data/maps/AquaHideout_1F/scripts.pory"
	walk_left
# 153 "data/maps/AquaHideout_1F/scripts.pory"
	face_right
# 154 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 155 "data/maps/AquaHideout_1F/scripts.pory"

# 156 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaThanksForComingBack:
# 157 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: Thanks for coming back. Hurry\n"
# 158 "data/maps/AquaHideout_1F/scripts.pory"
	.string "up, let's get moving.$"
# 159 "data/maps/AquaHideout_1F/scripts.pory"

# 160 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_TabithaJoin:
# 161 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 162 "data/maps/AquaHideout_1F/scripts.pory"
	walk_left
# 163 "data/maps/AquaHideout_1F/scripts.pory"
	face_up
# 164 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 165 "data/maps/AquaHideout_1F/scripts.pory"

# 166 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_TabithaRejoin:
# 167 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 168 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 169 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 170 "data/maps/AquaHideout_1F/scripts.pory"
	walk_left
# 171 "data/maps/AquaHideout_1F/scripts.pory"
	face_up
# 172 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 173 "data/maps/AquaHideout_1F/scripts.pory"

# 174 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint1::
# 175 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
# 176 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 177 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 178 "data/maps/AquaHideout_1F/scripts.pory"

# 179 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint1::
# 180 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
# 181 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 182 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 183 "data/maps/AquaHideout_1F/scripts.pory"

# 184 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
# 185 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 186 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 187 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint2
# 188 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint2
# 189 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
# 190 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 191 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 192 "data/maps/AquaHideout_1F/scripts.pory"

# 193 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint2::
# 194 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
# 195 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 196 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 197 "data/maps/AquaHideout_1F/scripts.pory"

# 198 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint2::
# 199 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
# 200 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 201 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 202 "data/maps/AquaHideout_1F/scripts.pory"

# 203 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1::
# 204 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 205 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 206 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 207 "data/maps/AquaHideout_1F/scripts.pory"

# 208 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1Defeated::
# 209 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
# 210 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 211 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 212 "data/maps/AquaHideout_1F/scripts.pory"

# 213 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PlayerLeaving:
# 214 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 215 "data/maps/AquaHideout_1F/scripts.pory"
	walk_down
# 216 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 217 "data/maps/AquaHideout_1F/scripts.pory"

# 218 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_EmmieLeaving:
# 219 "data/maps/AquaHideout_1F/scripts.pory"
	walk_right
# 220 "data/maps/AquaHideout_1F/scripts.pory"
	walk_down
# 221 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 222 "data/maps/AquaHideout_1F/scripts.pory"

# 223 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_TabithaWaiting:
# 224 "data/maps/AquaHideout_1F/scripts.pory"
	walk_right
# 225 "data/maps/AquaHideout_1F/scripts.pory"
	face_left
# 226 "data/maps/AquaHideout_1F/scripts.pory"
	step_end 
# 227 "data/maps/AquaHideout_1F/scripts.pory"

# 228 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaDontBeLong:
# 229 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: You need to leave?\p"
# 230 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tick, tock… We haven't got all day you\n"
# 231 "data/maps/AquaHideout_1F/scripts.pory"
	.string "know… I'll be waiting here.$"
# 232 "data/maps/AquaHideout_1F/scripts.pory"

# 233 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieBeRightHere:
# 234 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: {PLAYER}, I'll be waiting here for\n"
# 235 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you, and we can leave any time you want.$"
# 236 "data/maps/AquaHideout_1F/scripts.pory"

# 237 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaThatSettlesIt:
# 238 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: That settles it then!\p"
# 239 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie, you wait here, and I'll have\n"
# 240 "data/maps/AquaHideout_1F/scripts.pory"
	.string "{PLAYER} back in no time.\p"
# 241 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Hehe… What's the matter, don't you trust\n"
# 242 "data/maps/AquaHideout_1F/scripts.pory"
	.string "me?$"
# 243 "data/maps/AquaHideout_1F/scripts.pory"

# 244 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieDontLikeThis:
# 245 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: I don't like this one bit, but\n"
# 246 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I know what you are going to say.\p"
# 247 "data/maps/AquaHideout_1F/scripts.pory"
	.string "You've proven yourself capable and I\n"
# 248 "data/maps/AquaHideout_1F/scripts.pory"
	.string "trust that you will be okay.$"
# 249 "data/maps/AquaHideout_1F/scripts.pory"

# 250 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaTemporaryTruce:
# 251 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: Oh quit fussing. {PLAYER} is fine,\n"
# 252 "data/maps/AquaHideout_1F/scripts.pory"
	.string "barely a singed hair.\p"
# 253 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Anyway, as you know, I'm not against\n"
# 254 "data/maps/AquaHideout_1F/scripts.pory"
	.string "forging alliances when necessary.\p"
# 255 "data/maps/AquaHideout_1F/scripts.pory"
	.string "So how about we call a temporary truce\n"
# 256 "data/maps/AquaHideout_1F/scripts.pory"
	.string "and find out what's going on in here?$"
# 257 "data/maps/AquaHideout_1F/scripts.pory"

# 258 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieHeDidWhat:
# 259 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: They did what?\p"
# 260 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Well you certainly kept quiet about that\n"
# 261 "data/maps/AquaHideout_1F/scripts.pory"
	.string "little detail!$"
# 262 "data/maps/AquaHideout_1F/scripts.pory"

# 263 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaNotHereForALecture:
# 264 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: Save it. I'm not interested in\n"
# 265 "data/maps/AquaHideout_1F/scripts.pory"
	.string "the whinges of a child.\p"
# 266 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What I am interested in are your\n"
# 267 "data/maps/AquaHideout_1F/scripts.pory"
	.string "battling skills.$"
# 268 "data/maps/AquaHideout_1F/scripts.pory"

# 269 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaIveWatchedYou:
# 270 "data/maps/AquaHideout_1F/scripts.pory"
	.string "{PLAYER}, I've watched you handle yourself\n"
# 271 "data/maps/AquaHideout_1F/scripts.pory"
	.string "in battle with Maxie and Archie.\p"
# 272 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Courtney and I even had you backed up\n"
# 273 "data/maps/AquaHideout_1F/scripts.pory"
	.string "against a pit of magma in the heart of\l"
# 274 "data/maps/AquaHideout_1F/scripts.pory"
	.string "a volcano and you didn't give in.$"
# 275 "data/maps/AquaHideout_1F/scripts.pory"

# 276 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieYoureOneToTalk:
# 277 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: You're one to talk. Have you felt\n"
# 278 "data/maps/AquaHideout_1F/scripts.pory"
	.string "how hot it is outside?\p"
# 279 "data/maps/AquaHideout_1F/scripts.pory"
	.string "You're both as bad as each other and you\n"
# 280 "data/maps/AquaHideout_1F/scripts.pory"
	.string "leave only destruction wherever you go!$"
# 281 "data/maps/AquaHideout_1F/scripts.pory"

# 282 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaKnewYouWouldCome:
# 283 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: Heh… Surprised are we?\p"
# 284 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I knew if I waited here you would turn\n"
# 285 "data/maps/AquaHideout_1F/scripts.pory"
	.string "up sooner or later.\p"
# 286 "data/maps/AquaHideout_1F/scripts.pory"
	.string "We both heard Shelly talk of retaliation\n"
# 287 "data/maps/AquaHideout_1F/scripts.pory"
	.string "back at our hideout, and Maxie wants me\l"
# 288 "data/maps/AquaHideout_1F/scripts.pory"
	.string "to uncover Team Aqua's plans.\p"
# 289 "data/maps/AquaHideout_1F/scripts.pory"
	.string "We heard about Team Aqua stealing that\n"
# 290 "data/maps/AquaHideout_1F/scripts.pory"
	.string "submarine from Slateport City.\p"
# 291 "data/maps/AquaHideout_1F/scripts.pory"
	.string "After Mt. Pyre it doesn't take a genius\n"
# 292 "data/maps/AquaHideout_1F/scripts.pory"
	.string "to work out their goal.$"
# 293 "data/maps/AquaHideout_1F/scripts.pory"

# 294 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieYouAgain:
# 295 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: You again?$"
# 296 "data/maps/AquaHideout_1F/scripts.pory"

# 297 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_OurBossIsSnatchingSomething:
# 298 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 299 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 300 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here! He's gone off to\n"
# 301 "data/maps/AquaHideout_1F/scripts.pory"
	.string "snatch something important!\p"
# 302 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 303 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Where did he go?\p"
# 304 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 305 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 306 "data/maps/AquaHideout_1F/scripts.pory"

# 307 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
# 308 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
# 309 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Are you a TEAM MAGMA grunt?\p"
# 310 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I hear that TEAM MAGMA is trying to\n"
# 311 "data/maps/AquaHideout_1F/scripts.pory"
	.string "awaken an awesome POKéMON at their\l"
# 312 "data/maps/AquaHideout_1F/scripts.pory"
	.string "HIDEOUT.\p"
# 313 "data/maps/AquaHideout_1F/scripts.pory"
	.string "But where might their HIDEOUT be?$"
# 314 "data/maps/AquaHideout_1F/scripts.pory"

# 315 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossWentToJackASubmarine:
# 316 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 317 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 318 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here!\n"
# 319 "data/maps/AquaHideout_1F/scripts.pory"
	.string "He's gone off to jack a submarine!\p"
# 320 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 321 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Where did he go?\p"
# 322 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 323 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 324 "data/maps/AquaHideout_1F/scripts.pory"

# 325 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsOnRoute122:
# 326 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 327 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 328 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here! He's on his way to\n"
# 329 "data/maps/AquaHideout_1F/scripts.pory"
	.string "MT. PYRE on ROUTE 122!\p"
# 330 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 331 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Why did he go?\p"
# 332 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 333 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 334 "data/maps/AquaHideout_1F/scripts.pory"

# 335 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TeamMagmaAtMtChimney:
# 336 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
# 337 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Are you a TEAM MAGMA grunt?\p"
# 338 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I hear that TEAM MAGMA is after\n"
# 339 "data/maps/AquaHideout_1F/scripts.pory"
	.string "an awesome POKéMON at MT. CHIMNEY.\p"
# 340 "data/maps/AquaHideout_1F/scripts.pory"
	.string "But what is that POKéMON like?$"
# 341 "data/maps/AquaHideout_1F/scripts.pory"

# 342 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsInSlateportCity:
# 343 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with\n"
# 344 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 345 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here!\n"
# 346 "data/maps/AquaHideout_1F/scripts.pory"
	.string "He's on his way to SLATEPORT CITY!\p"
# 347 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 348 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Why did he go?\p"
# 349 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 350 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 351 "data/maps/AquaHideout_1F/scripts.pory"

# 352 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Intro:
# 353 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ayiyiyi!\n"
# 354 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Suspicious character spotted!$"
# 355 "data/maps/AquaHideout_1F/scripts.pory"

# 356 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Defeat:
# 357 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Grrrrr…\n"
# 358 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I lost it!$"
# 359 "data/maps/AquaHideout_1F/scripts.pory"

# 360 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1PostBattle:
# 361 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I took the loss for the TEAM,\n"
# 362 "data/maps/AquaHideout_1F/scripts.pory"
	.string "but I did my job…$"
