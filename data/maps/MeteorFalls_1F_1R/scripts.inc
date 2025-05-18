# 1 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 5
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 6
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_ARCHIE, 7
# 5 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_1, 8
# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_2, 9
# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceDown
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceDown
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_ExclamationMark
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_Delay48
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_ARCHIE
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_1
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_2
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieArrive
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_eq VAR_TEMP_3, 15, MeteorFalls_1F_1R_EventScript_EmmieMoveForTabitha
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_eq VAR_TEMP_3, 13, MeteorFalls_1F_1R_EventScript_EmmieMoveForPlayer
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_eq VAR_TEMP_3, 15, MeteorFalls_1F_1R_EventScript_EmmieMoveToPlayer1
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_eq VAR_TEMP_3, 14, MeteorFalls_1F_1R_EventScript_EmmieMoveToPlayer2
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_ARCHIE
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_1
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_2
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_AQUA_1
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_AQUA_2
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_EmmieMoveToPlayer1::
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MeteorFalls_1F_1R_Movement_EmmieMoveToPlayer1
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_EmmieMoveToPlayer2::
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MeteorFalls_1F_1R_Movement_EmmieMoveToPlayer2
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_EmmieMoveForTabitha::
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MeteorFalls_1F_1R_Movement_EmmieMoveForTabitha
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_EmmieMoveForPlayer::
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MeteorFalls_1F_1R_Movement_EmmieMoveForPlayer
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_EmmieMoveToPlayer1:
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_EmmieMoveToPlayer2:
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_EmmieMoveForTabitha:
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_8
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_left
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_EmmieMoveForPlayer:
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Tabitha: Hehehe!\p"
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "With this Meteorite, that thing in\n"
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Mt. Chimney will…$"
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Tabitha: Heh?\p"
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't know who you are, but if you get\n"
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "in the way of Team Magma, don't\l"
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "expect any mercy!$"
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Archie: Hold it right there, Team Magma!\n"
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Shelly said you were headed this way.\p" 
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're badly mistaken if you think you\n"
# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "can have your way with the world!$"
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Even Team Aqua joins us!\p"
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But it's too much trouble to deal with\n"
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "you all…\p"
# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh, it doesn't matter!\p"
# 319 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got the Meteorite, so off to\n"
# 320 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Mt. Chimney we go!\p"
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe! Be seeing you, you Team\n"
# 322 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Aqua dingbats!$"
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 324 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Archie: Didn't I see you before?\n"
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At Slateport's museum?\p"
# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ah, so your name is {PLAYER}.\p"
# 328 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At the time, I thought you were one\n"
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "of Team Magma's goons.\p"
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Humph…\n"
# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're one odd kid.\p"
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Team Magma is a dangerous group of\n"
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "total fanatics.\p"
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They engage in destruction, claiming\n"
# 335 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to expand the land mass.\p"
# 336 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Surely you can see this now.\p"
# 337 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Our actions in Slateport are only in\n"
# 338 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "preparation for Team Magma realising\l"
# 339 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "their disastrous vision.\p"
# 340 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They are the rivals to us,\n"
# 341 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "the sea-loving Team Aqua!$"
# 342 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 343 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 344 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 345 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BOSS, we should give chase to\n"
# 346 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA…$"
# 347 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 348 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 349 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Yes, yes, we must!\n"
# 350 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got to hurry.\p"
# 351 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "There's no telling what TEAM MAGMA\n"
# 352 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "will do at MT. CHIMNEY!$"
# 353 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 354 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 355 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: {PLAYER}, you should keep\n"
# 356 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "an eye out for Team Magma, too.\p"
# 357 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Farewell!$"
# 358 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 359 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 360 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
# 361 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a PROFESSOR…\p"
# 362 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA asked me to guide them\n"
# 363 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to METEOR FALLS…\p"
# 364 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 365 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my METEORITE away…\p"
# 366 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 367 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM AQUA showed up.\p"
# 368 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 369 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 370 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that TEAM MAGMA…\p"
# 371 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 373 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 374 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 375 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: But that TEAM MAGMA…\p"
# 376 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 377 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
