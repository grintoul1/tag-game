# 1 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 2 "data/maps/CaveOfOrigin_B1F/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/CaveOfOrigin_B1F/scripts.pory"
.set LOCALID_MAXIE, 3
# 4 "data/maps/CaveOfOrigin_B1F/scripts.pory"
.set LOCALID_ARCHIE, 2
# 5 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 6 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_MapScripts::
# 7 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CaveOfOrigin_B1F_OnWarp
# 8 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.byte 0
# 9 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 10 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_OnWarp:
# 11 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 2, CaveOfOrigin_B1F_EventScript_SetEvilLeaderVars
# 12 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.byte 0
# 13 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 14 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_SetEvilLeaderVars::
# 15 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, CaveOfOrigin_B1F_EventScript_ArchieMtPyreVars
# 16 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, CaveOfOrigin_B1F_EventScript_MaxieMtPyreVars
# 17 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 18 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 19 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_ArchieMtPyreVars::
# 20 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 21 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 22 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 23 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 24 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_MaxieMtPyreVars::
# 25 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MAXIE
# 26 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_ARCHIE
# 27 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 28 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 29 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_Wallace::
# 30 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 31 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	faceplayer
# 32 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FacePlayer
# 33 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
# 34 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 35 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 36 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 37 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 60
# 38 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_PIN
# 39 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_ExclamationMark
# 40 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 41 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_Delay48
# 42 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 30
# 44 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_FacePlayer
# 45 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
# 47 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 48 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 49 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 50 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza::
# 51 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
# 52 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	switch VAR_RESULT
# 53 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 0, CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
# 54 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 1, CaveOfOrigin_B1F_EventScript_AtMtPyre
# 55 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 2, CaveOfOrigin_B1F_EventScript_AtSkyPillar
# 56 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 3, CaveOfOrigin_B1F_EventScript_DontRemember
# 57 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_DontRemember
# 58 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 59 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 60 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
# 61 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
# 62 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 63 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 64 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 65 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtMtPyre::
# 66 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
# 67 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 68 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 69 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 70 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_DontRemember::
# 71 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
# 72 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 73 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 74 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 75 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_PanToAction::
# 76 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CaveOfOrigin_B1F_Movement_PanToAction
# 77 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 78 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 79 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 80 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_PanToActionWest::
# 81 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CaveOfOrigin_B1F_Movement_PanToActionWest
# 82 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 84 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 85 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtSkyPillar::
# 86 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT
# 87 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 88 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 8
# 89 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	special SpawnCameraObject
# 90 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, CaveOfOrigin_B1F_EventScript_PanToAction
# 91 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, CaveOfOrigin_B1F_EventScript_PanToActionWest
# 92 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	special RemoveCameraObject
# 93 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 30
# 94 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 95 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	addobject VAR_0x8005
# 96 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 16
# 97 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 98 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 99 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 100 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement VAR_0x8005, CaveOfOrigin_B1F_Movement_EvilLeaderApproachPlayer
# 101 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0 
# 102 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 103 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	addobject VAR_0x8004
# 104 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 16
# 105 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement VAR_0x8004, CaveOfOrigin_B1F_Movement_GoodLeaderApproachPlayer
# 106 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0 
# 107 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterDown
# 108 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 109 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, CaveOfOrigin_B1F_EventScript_MaxieSkyPillarYouSay
# 110 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, CaveOfOrigin_B1F_EventScript_ArchieSkyPillarYouSay
# 111 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement VAR_0x8005, Common_Movement_FaceRight
# 112 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 113 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 114 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, CaveOfOrigin_B1F_EventScript_ArchieCantYouSee
# 115 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, CaveOfOrigin_B1F_EventScript_MaxieCantYouSee
# 116 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterRight
# 117 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 118 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, CaveOfOrigin_B1F_EventScript_MaxieLackConviction
# 119 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, CaveOfOrigin_B1F_EventScript_ArchieLackConviction
# 120 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement VAR_0x8005, CaveOfOrigin_B1F_Movement_EvilLeaderLeave1
# 121 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 122 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 123 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement VAR_0x8004, CaveOfOrigin_B1F_Movement_GoodLeaderKnockedBack
# 124 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 125 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement VAR_0x8005, CaveOfOrigin_B1F_Movement_EvilLeaderLeave2
# 126 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 127 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 128 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject VAR_0x8005
# 129 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 16
# 130 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkSlowDown
# 131 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 132 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, CaveOfOrigin_B1F_EventScript_ArchieThisIsntGood
# 133 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, CaveOfOrigin_B1F_EventScript_MaxieThisIsntGood
# 134 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement VAR_0x8004, CaveOfOrigin_B1F_Movement_GoodLeaderLeave
# 135 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 136 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 137 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject VAR_0x8004
# 138 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 8
# 139 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	special SpawnCameraObject
# 140 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, CaveOfOrigin_B1F_EventScript_ReturnFromAction
# 141 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, CaveOfOrigin_B1F_EventScript_ReturnFromActionWest
# 142 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	special RemoveCameraObject
# 143 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 30
# 144 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST CaveOfOrigin_B1F_EventScript_FaceDirectionsWest
# 145 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST CaveOfOrigin_B1F_EventScript_FaceDirectionsEast
# 146 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar2, MSGBOX_DEFAULT
# 147 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 148 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 149 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 150 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
# 151 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 152 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject LOCALID_WALLACE
# 153 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
# 154 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 155 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 156 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 157 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
# 158 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 159 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 160 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_ReturnFromAction::
# 161 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CaveOfOrigin_B1F_Movement_ReturnFromAction
# 162 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 163 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 164 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 165 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_ReturnFromActionWest::
# 166 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CaveOfOrigin_B1F_Movement_ReturnFromActionWest
# 167 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 168 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 169 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 170 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_FaceDirectionsWest:
# 171 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 172 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 173 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 174 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 175 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 176 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 177 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_FaceDirectionsEast:
# 178 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 179 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 180 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterLeft
# 181 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 182 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 183 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 184 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Movement_GoodLeaderLeave:
# 185 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_right
# 186 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_up
# 187 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	step_end
# 188 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 189 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_MaxieThisIsntGood::
# 190 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_MaxieThisIsntGood, MSGBOX_AUTOCLOSE
# 191 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 192 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 193 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_MaxieThisIsntGood:
# 194 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Maxie: This is bad.\n"
# 195 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Archie isn't prepared to give up.\p"
# 196 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I have to go after him.$"
# 197 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 198 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_ArchieThisIsntGood::
# 199 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_ArchieThisIsntGood, MSGBOX_AUTOCLOSE
# 200 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 201 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 202 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ArchieThisIsntGood:
# 203 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Archie: This is bad.\n"
# 204 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Maxie isn't prepared to give up.\p"
# 205 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I have to go after him.$"
# 206 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 207 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Movement_EvilLeaderLeave2:
# 208 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_right
# 209 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_right
# 210 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_up
# 211 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	step_end
# 212 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 213 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Movement_GoodLeaderKnockedBack:
# 214 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	face_down
# 215 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock_facing_direction
# 216 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_fast_up
# 217 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	unlock_facing_direction
# 218 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	step_end
# 219 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 220 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Movement_EvilLeaderLeave1:
# 221 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_up
# 222 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_right
# 223 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	step_end
# 224 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 225 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_MaxieLackConviction::
# 226 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_MaxieLackConviction, MSGBOX_AUTOCLOSE
# 227 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 228 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 229 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_ArchieLackConviction::
# 230 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_ArchieLackConviction, MSGBOX_AUTOCLOSE
# 231 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 232 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 233 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_MaxieLackConviction:
# 234 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Maxie: You lack conviction, Archie.\p"
# 235 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "This is why Team Aqua will never prevail\n"
# 236 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "over Team Magma.$"
# 237 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 238 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ArchieLackConviction:
# 239 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Archie: You lack conviction, Maxie.\p"
# 240 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "This is why Team Magma will never prevail\n"
# 241 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "over Team Aqua.$"
# 242 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 243 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_ArchieCantYouSee::
# 244 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_ArchieCantYouSee, MSGBOX_AUTOCLOSE
# 245 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 246 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 247 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_MaxieCantYouSee::
# 248 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_MaxieCantYouSee, MSGBOX_AUTOCLOSE
# 249 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 250 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 251 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ArchieCantYouSee:
# 252 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Archie: Maxie, can't you see what our\n"
# 253 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "actions have already led to?\p"
# 254 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Our visions were misguided and order\n"
# 255 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "must be restored.\p"
# 256 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It's time for us to stand aside and let\n"
# 257 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "this chaos come to an end.$"
# 258 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 259 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_MaxieCantYouSee:
# 260 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Maxie: Archie, can't you see what our\n"
# 261 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "actions have already led to?\p"
# 262 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Our visions were misguided and order\n"
# 263 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "must be restored.\p"
# 264 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It's time for us to stand aside and let\n"
# 265 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "this chaos come to an end.$"
# 266 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 267 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_MaxieSkyPillarYouSay::
# 268 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_MaxieSkyPillarYouSay, MSGBOX_AUTOCLOSE
# 269 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 270 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 271 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 272 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_ArchieSkyPillarYouSay::
# 273 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_ArchieSkyPillarYouSay, MSGBOX_AUTOCLOSE
# 274 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 275 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	return
# 276 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 277 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_MaxieSkyPillarYouSay:
# 278 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Maxie: Sky Pillar, you say?\p"
# 279 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "A third legendary Pokémon, capable of\n"
# 280 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "controlling the effects of the others…\p"
# 281 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Team Magma's vision may not yet be lost.$"
# 282 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 283 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ArchieSkyPillarYouSay:
# 284 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Archie: Sky Pillar, you say?\p"
# 285 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "A third legendary Pokémon, capable of\n"
# 286 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "controlling the effects of the others…\p"
# 287 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Team Aqua's vision may not yet be lost.$"
# 288 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 289 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Movement_GoodLeaderApproachPlayer:
# 290 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_down
# 291 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_left
# 292 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	step_end
# 293 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 294 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Movement_EvilLeaderApproachPlayer:
# 295 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_down
# 296 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_left
# 297 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_left
# 298 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_left
# 299 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_down
# 300 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	step_end
# 301 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 302 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Movement_PanToAction:
# 303 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_up
# 304 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_up
# 305 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_up
# 306 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_up
# 307 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	step_end
# 308 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 309 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Movement_PanToActionWest:
# 310 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_diag_northwest
# 311 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_diag_northwest
# 312 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_up
# 313 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_up
# 314 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	step_end
# 315 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 316 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Movement_ReturnFromAction:
# 317 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_down
# 318 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_down
# 319 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_down
# 320 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_down
# 321 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	step_end
# 322 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 323 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Movement_ReturnFromActionWest:
# 324 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_diag_southeast
# 325 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_diag_southeast
# 326 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_down
# 327 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	walk_down
# 328 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	step_end
# 329 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 330 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WallaceStory:
# 331 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}?\n"
# 332 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I've heard tales of your exploits.\p"
# 333 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "My name is WALLACE.\p"
# 334 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I was once the GYM LEADER of\n"
# 335 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "SOOTOPOLIS, but something came up.\p"
# 336 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "So now, I've entrusted my mentor JUAN\n"
# 337 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "with the GYM's operation.\p"
# 338 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\n"
# 339 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\p"
# 340 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "GROUDON and KYOGRE, the two POKéMON\n"
# 341 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "wreaking havoc here, are considered\l"
# 342 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "to be super-ancient POKéMON.\p"
# 343 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But there aren't just two super-\n"
# 344 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ancient POKéMON.\p"
# 345 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "There is one more somewhere.\p"
# 346 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Somewhere, there is a super-\n"
# 347 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "ancient POKéMON named RAYQUAZA.\p"
# 348 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It's said that it was RAYQUAZA that\n"
# 349 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "becalmed the two combatants in\l"
# 350 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "the distant past.\p"
# 351 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But even I have no clue as to\n"
# 352 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "RAYQUAZA's whereabouts…$"
# 353 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 354 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WhereIsRayquaza:
# 355 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}, do you perhaps\n"
# 356 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "know where RAYQUAZA is now?\p"
# 357 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "If you do, please tell me.$"
# 358 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 359 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin:
# 360 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: The CAVE OF ORIGIN?\p"
# 361 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But that's right here!\n"
# 362 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I need you to do better than that!\p"
# 363 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Please, I need you to think about\n"
# 364 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "where RAYQUAZA might be right now.$"
# 365 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 366 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat:
# 367 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: MT. PYRE?\p"
# 368 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "But when I met the old lady there\n"
# 369 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "earlier, she made no mention of it.\p"
# 370 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "I very much doubt that the old lady\n"
# 371 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "would try to hide something from me…\p"
# 372 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, could you think about this\n"
# 373 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "more carefully for me?$"
# 374 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 375 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_CantYouRememberSomehow:
# 376 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: Huh? You don't remember?\n"
# 377 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Hmm… That's a problem…\p"
# 378 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Can't you remember somehow?$"
# 379 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 380 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WellHeadToSkyPillar:
# 381 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "WALLACE: The Sky Pillar?\p"
# 382 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "That's it!\n"
# 383 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "It must be the Sky Pillar!$"
# 384 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 385 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WellHeadToSkyPillar2:
# 386 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, there's not a moment to lose!\n"
# 387 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "We'll head to the Sky Pillar right away!$"
