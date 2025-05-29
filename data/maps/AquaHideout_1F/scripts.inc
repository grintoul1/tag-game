# 1 "data/maps/AquaHideout_1F/scripts.pory"

# 2 "data/maps/AquaHideout_1F/scripts.pory"
.set LOCALID_TABITHA, 3
# 3 "data/maps/AquaHideout_1F/scripts.pory"
.set LOCALID_EMMIE, 4
# 4 "data/maps/AquaHideout_1F/scripts.pory"

# 5 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_MapScripts::
# 6 "data/maps/AquaHideout_1F/scripts.pory"
	.byte 0
# 7 "data/maps/AquaHideout_1F/scripts.pory"

# 8 "data/maps/AquaHideout_1F/scripts.pory"
@ The below two entrance guards give hints about what to do to progress the story
# 9 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
# 10 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 11 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 12 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint1
# 13 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint1
# 14 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
# 15 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 16 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 17 "data/maps/AquaHideout_1F/scripts.pory"

# 18 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_FirstEntrance::
# 19 "data/maps/AquaHideout_1F/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 10, 34
# 20 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceUp
# 21 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 22 "data/maps/AquaHideout_1F/scripts.pory"
	addobject LOCALID_SHELLY
# 23 "data/maps/AquaHideout_1F/scripts.pory"
	playse SE_PIN
# 24 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_1F_Movement_PlayerEnterHideout
# 25 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_1F_Movement_EmmieEnterHideout
# 26 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 27 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 28 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 29 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 30 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieYouAgain, MSGBOX_DEFAULT
# 31 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 32 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 33 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaKnewYouWouldCome, MSGBOX_DEFAULT
# 35 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 36 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 37 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieYoureOneToTalk, MSGBOX_DEFAULT
# 39 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 40 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 41 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaNotHereForALecture, MSGBOX_DEFAULT
# 43 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 44 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_FaceUp
# 45 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaIveWatchedYou, MSGBOX_DEFAULT
# 47 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 48 "data/maps/AquaHideout_1F/scripts.pory"
	playse SE_PIN
# 49 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 50 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 52 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_FaceLeft
# 53 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 54 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieHeDidWhat, MSGBOX_DEFAULT
# 55 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 56 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 58 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaTemporaryTruce, MSGBOX_DEFAULT
# 60 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 62 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieDontLikeThis, MSGBOX_DEFAULT
# 64 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 66 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 67 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaThatSettlesIt, MSGBOX_DEFAULT
# 69 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 70 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 71 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 72 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieBeRightHere, MSGBOX_DEFAULT
# 73 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 74 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 75 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, AquaHideout_1F_Movement_TabithaJoin
# 76 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 77 "data/maps/AquaHideout_1F/scripts.pory"
	addobject LOCALID_EMMIE
# 78 "data/maps/AquaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
# 79 "data/maps/AquaHideout_1F/scripts.pory"
	destroyfollowernpc
# 80 "data/maps/AquaHideout_1F/scripts.pory"
	setfollowernpc 3, FNPC_WHITE_OUT, Common_EventScript_Tabitha, PARTNER_TABITHA
# 81 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 82 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_B2F_EMMIE
# 83 "data/maps/AquaHideout_1F/scripts.pory"
	addvar VAR_FOLLOWER_AQUA_HIDEOUT_TABITHA, 1
# 84 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 85 "data/maps/AquaHideout_1F/scripts.pory"

# 86 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_LaterEntrance::
# 87 "data/maps/AquaHideout_1F/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 88 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_4, 10, AquaHideout_1F_EventScript_LeavingHideout
# 89 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_4, 12, AquaHideout_1F_EventScript_EnteringHideout
# 90 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 91 "data/maps/AquaHideout_1F/scripts.pory"

# 92 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_LeavingHideout::
# 93 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 94 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 95 "data/maps/AquaHideout_1F/scripts.pory"
 	waitmovement 0
# 96 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaDontBeLong, MSGBOX_DEFAULT
# 97 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage 
# 98 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_1F_Movement_TabithaWaiting
# 99 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 100 "data/maps/AquaHideout_1F/scripts.pory"
	addobject LOCALID_TABITHA
# 101 "data/maps/AquaHideout_1F/scripts.pory"
	destroyfollowernpc
# 102 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_1F_Movement_PlayerLeaving
# 103 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_EMMIE, AquaHideout_1F_Movement_EmmieLeaving
# 104 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 105 "data/maps/AquaHideout_1F/scripts.pory"
	setfollowernpc 4, FNPC_ALL, Common_EventScript_Emmie, PARTNER_EMMIE
# 106 "data/maps/AquaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 107 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
# 108 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 109 "data/maps/AquaHideout_1F/scripts.pory"

# 110 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_EnteringHideout::
# 111 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_1F_Movement_PlayerEnterHideout
# 112 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_1F_Movement_EmmieEnterHideout
# 113 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, AquaHideout_1F_Movement_TabithaRejoin
# 114 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 115 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterUp
# 116 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TabithaThanksForComingBack, MSGBOX_DEFAULT
# 118 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 119 "data/maps/AquaHideout_1F/scripts.pory"
	addobject LOCALID_EMMIE
# 120 "data/maps/AquaHideout_1F/scripts.pory"
	destroyfollowernpc
# 121 "data/maps/AquaHideout_1F/scripts.pory"
	setfollowernpc 3, FNPC_WHITE_OUT, Common_EventScript_Tabitha, PARTNER_TABITHA
# 122 "data/maps/AquaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
# 123 "data/maps/AquaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 124 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 125 "data/maps/AquaHideout_1F/scripts.pory"

# 126 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Emmie::
# 127 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 128 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_EmmieBeRightHere, MSGBOX_DEFAULT
# 129 "data/maps/AquaHideout_1F/scripts.pory"
	closemessage
# 130 "data/maps/AquaHideout_1F/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_FaceOriginalDirection
# 131 "data/maps/AquaHideout_1F/scripts.pory"
	waitmovement 0
# 132 "data/maps/AquaHideout_1F/scripts.pory"

# 133 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PlayerEnterHideout:
# 134 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 135 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 136 "data/maps/AquaHideout_1F/scripts.pory"
	face_down
# 137 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 138 "data/maps/AquaHideout_1F/scripts.pory"

# 139 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_EmmieEnterHideout:
# 140 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 141 "data/maps/AquaHideout_1F/scripts.pory"
	walk_up
# 142 "data/maps/AquaHideout_1F/scripts.pory"
	walk_left
# 143 "data/maps/AquaHideout_1F/scripts.pory"
	face_right
# 144 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 145 "data/maps/AquaHideout_1F/scripts.pory"

# 146 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaThanksForComingBack:
# 147 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: Thanks for coming back. Hurry\n"
# 148 "data/maps/AquaHideout_1F/scripts.pory"
	.string "up, let's get moving.$"
# 149 "data/maps/AquaHideout_1F/scripts.pory"

# 150 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_TabithaJoin:
# 151 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 152 "data/maps/AquaHideout_1F/scripts.pory"
	walk_left
# 153 "data/maps/AquaHideout_1F/scripts.pory"
	face_up
# 154 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 155 "data/maps/AquaHideout_1F/scripts.pory"

# 156 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_TabithaRejoin:
# 157 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 158 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 159 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 160 "data/maps/AquaHideout_1F/scripts.pory"
	walk_left
# 161 "data/maps/AquaHideout_1F/scripts.pory"
	face_up
# 162 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 163 "data/maps/AquaHideout_1F/scripts.pory"

# 164 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint1::
# 165 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
# 166 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 167 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 168 "data/maps/AquaHideout_1F/scripts.pory"

# 169 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint1::
# 170 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
# 171 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 172 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 173 "data/maps/AquaHideout_1F/scripts.pory"

# 174 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
# 175 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 176 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 177 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint2
# 178 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint2
# 179 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
# 180 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 181 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 182 "data/maps/AquaHideout_1F/scripts.pory"

# 183 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint2::
# 184 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
# 185 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 186 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 187 "data/maps/AquaHideout_1F/scripts.pory"

# 188 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint2::
# 189 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
# 190 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 191 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 192 "data/maps/AquaHideout_1F/scripts.pory"

# 193 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1::
# 194 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 195 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 196 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 197 "data/maps/AquaHideout_1F/scripts.pory"

# 198 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1Defeated::
# 199 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
# 200 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 201 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 202 "data/maps/AquaHideout_1F/scripts.pory"

# 203 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_PlayerLeaving:
# 204 "data/maps/AquaHideout_1F/scripts.pory"
	delay_16
# 205 "data/maps/AquaHideout_1F/scripts.pory"
	walk_down
# 206 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 207 "data/maps/AquaHideout_1F/scripts.pory"

# 208 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_EmmieLeaving:
# 209 "data/maps/AquaHideout_1F/scripts.pory"
	walk_right
# 210 "data/maps/AquaHideout_1F/scripts.pory"
	walk_down
# 211 "data/maps/AquaHideout_1F/scripts.pory"
	step_end
# 212 "data/maps/AquaHideout_1F/scripts.pory"

# 213 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Movement_TabithaWaiting:
# 214 "data/maps/AquaHideout_1F/scripts.pory"
	walk_right
# 215 "data/maps/AquaHideout_1F/scripts.pory"
	face_left
# 216 "data/maps/AquaHideout_1F/scripts.pory"
	step_end 
# 217 "data/maps/AquaHideout_1F/scripts.pory"

# 218 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaDontBeLong:
# 219 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: You need to leave?\p"
# 220 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tick, tock… We haven't got all day you\n"
# 221 "data/maps/AquaHideout_1F/scripts.pory"
	.string "know… I'll be waiting here.$"
# 222 "data/maps/AquaHideout_1F/scripts.pory"

# 223 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieBeRightHere:
# 224 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: {PLAYER}, I'll be waiting here for\n"
# 225 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you, and we can leave any time you want.$"
# 226 "data/maps/AquaHideout_1F/scripts.pory"

# 227 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaThatSettlesIt:
# 228 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: That settles it then!\p"
# 229 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie, you wait here, and I'll have\n"
# 230 "data/maps/AquaHideout_1F/scripts.pory"
	.string "{PLAYER} back in no time.\p"
# 231 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Hehe… What's the matter, don't you trust\n"
# 232 "data/maps/AquaHideout_1F/scripts.pory"
	.string "me?$"
# 233 "data/maps/AquaHideout_1F/scripts.pory"

# 234 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieDontLikeThis:
# 235 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: I don't like this one bit, but\n"
# 236 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I know what you are going to say.\p"
# 237 "data/maps/AquaHideout_1F/scripts.pory"
	.string "You've proven yourself capable and I\n"
# 238 "data/maps/AquaHideout_1F/scripts.pory"
	.string "trust that you will be okay.$"
# 239 "data/maps/AquaHideout_1F/scripts.pory"

# 240 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaTemporaryTruce:
# 241 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: Oh quit fussing. {PLAYER} is fine,\n"
# 242 "data/maps/AquaHideout_1F/scripts.pory"
	.string "barely a singed hair.\p"
# 243 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Anyway, as you know, I'm not against\n"
# 244 "data/maps/AquaHideout_1F/scripts.pory"
	.string "forging alliances when necessary.\p"
# 245 "data/maps/AquaHideout_1F/scripts.pory"
	.string "So how about we call a temporary truce\n"
# 246 "data/maps/AquaHideout_1F/scripts.pory"
	.string "and find out what's going on in here?$"
# 247 "data/maps/AquaHideout_1F/scripts.pory"

# 248 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieHeDidWhat:
# 249 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: They did what?\p"
# 250 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Well you certainly kept quiet about that\n"
# 251 "data/maps/AquaHideout_1F/scripts.pory"
	.string "little detail!$"
# 252 "data/maps/AquaHideout_1F/scripts.pory"

# 253 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaNotHereForALecture:
# 254 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: Save it. I'm not interested in\n"
# 255 "data/maps/AquaHideout_1F/scripts.pory"
	.string "the whinges of a child.\p"
# 256 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What I am interested in are your\n"
# 257 "data/maps/AquaHideout_1F/scripts.pory"
	.string "battling skills.$"
# 258 "data/maps/AquaHideout_1F/scripts.pory"

# 259 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaIveWatchedYou:
# 260 "data/maps/AquaHideout_1F/scripts.pory"
	.string "{PLAYER}, I've watched you handle yourself\n"
# 261 "data/maps/AquaHideout_1F/scripts.pory"
	.string "in battle with Maxie and Archie.\p"
# 262 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Courtney and I even had you backed up\n"
# 263 "data/maps/AquaHideout_1F/scripts.pory"
	.string "against a pit of magma in the heart of\l"
# 264 "data/maps/AquaHideout_1F/scripts.pory"
	.string "a volcano and you didn't give in.$"
# 265 "data/maps/AquaHideout_1F/scripts.pory"

# 266 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieYoureOneToTalk:
# 267 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: You're one to talk. Have you felt\n"
# 268 "data/maps/AquaHideout_1F/scripts.pory"
	.string "how hot it is outside?\p"
# 269 "data/maps/AquaHideout_1F/scripts.pory"
	.string "You're both as bad as each other and you\n"
# 270 "data/maps/AquaHideout_1F/scripts.pory"
	.string "leave only destruction wherever you go!$"
# 271 "data/maps/AquaHideout_1F/scripts.pory"

# 272 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TabithaKnewYouWouldCome:
# 273 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Tabitha: Heh… Surprised are we?\p"
# 274 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I knew if I waited here you would turn\n"
# 275 "data/maps/AquaHideout_1F/scripts.pory"
	.string "up sooner or later.\p"
# 276 "data/maps/AquaHideout_1F/scripts.pory"
	.string "We both heard Shelly talk of retaliation\n"
# 277 "data/maps/AquaHideout_1F/scripts.pory"
	.string "back at our hideout, and Maxie wants me\l"
# 278 "data/maps/AquaHideout_1F/scripts.pory"
	.string "to uncover Team Aqua's plans.\p"
# 279 "data/maps/AquaHideout_1F/scripts.pory"
	.string "We heard about Team Aqua stealing that\n"
# 280 "data/maps/AquaHideout_1F/scripts.pory"
	.string "submarine from Slateport City.\p"
# 281 "data/maps/AquaHideout_1F/scripts.pory"
	.string "After Mt. Pyre it doesn't take a genius\n"
# 282 "data/maps/AquaHideout_1F/scripts.pory"
	.string "to work out their goal.$"
# 283 "data/maps/AquaHideout_1F/scripts.pory"

# 284 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_EmmieYouAgain:
# 285 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Emmie: You again?$"
# 286 "data/maps/AquaHideout_1F/scripts.pory"

# 287 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_OurBossIsSnatchingSomething:
# 288 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 289 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 290 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here! He's gone off to\n"
# 291 "data/maps/AquaHideout_1F/scripts.pory"
	.string "snatch something important!\p"
# 292 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 293 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Where did he go?\p"
# 294 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 295 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 296 "data/maps/AquaHideout_1F/scripts.pory"

# 297 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
# 298 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
# 299 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Are you a TEAM MAGMA grunt?\p"
# 300 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I hear that TEAM MAGMA is trying to\n"
# 301 "data/maps/AquaHideout_1F/scripts.pory"
	.string "awaken an awesome POKéMON at their\l"
# 302 "data/maps/AquaHideout_1F/scripts.pory"
	.string "HIDEOUT.\p"
# 303 "data/maps/AquaHideout_1F/scripts.pory"
	.string "But where might their HIDEOUT be?$"
# 304 "data/maps/AquaHideout_1F/scripts.pory"

# 305 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossWentToJackASubmarine:
# 306 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 307 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 308 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here!\n"
# 309 "data/maps/AquaHideout_1F/scripts.pory"
	.string "He's gone off to jack a submarine!\p"
# 310 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 311 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Where did he go?\p"
# 312 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 313 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 314 "data/maps/AquaHideout_1F/scripts.pory"

# 315 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsOnRoute122:
# 316 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with \n"
# 317 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 318 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here! He's on his way to\n"
# 319 "data/maps/AquaHideout_1F/scripts.pory"
	.string "MT. PYRE on ROUTE 122!\p"
# 320 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 321 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Why did he go?\p"
# 322 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 323 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 324 "data/maps/AquaHideout_1F/scripts.pory"

# 325 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TeamMagmaAtMtChimney:
# 326 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\n"
# 327 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Are you a TEAM MAGMA grunt?\p"
# 328 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I hear that TEAM MAGMA is after\n"
# 329 "data/maps/AquaHideout_1F/scripts.pory"
	.string "an awesome POKéMON at MT. CHIMNEY.\p"
# 330 "data/maps/AquaHideout_1F/scripts.pory"
	.string "But what is that POKéMON like?$"
# 331 "data/maps/AquaHideout_1F/scripts.pory"

# 332 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsInSlateportCity:
# 333 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with\n"
# 334 "data/maps/AquaHideout_1F/scripts.pory"
	.string "TEAM AQUA?\p"
# 335 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Our BOSS isn't here!\n"
# 336 "data/maps/AquaHideout_1F/scripts.pory"
	.string "He's on his way to SLATEPORT CITY!\p"
# 337 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 338 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Why did he go?\p"
# 339 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wahaha! Do you really think I'd tell\n"
# 340 "data/maps/AquaHideout_1F/scripts.pory"
	.string "you something that crucial?$"
# 341 "data/maps/AquaHideout_1F/scripts.pory"

# 342 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Intro:
# 343 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ayiyiyi!\n"
# 344 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Suspicious character spotted!$"
# 345 "data/maps/AquaHideout_1F/scripts.pory"

# 346 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Defeat:
# 347 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Grrrrr…\n"
# 348 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I lost it!$"
# 349 "data/maps/AquaHideout_1F/scripts.pory"

# 350 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1PostBattle:
# 351 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I took the loss for the TEAM,\n"
# 352 "data/maps/AquaHideout_1F/scripts.pory"
	.string "but I did my job…$"
