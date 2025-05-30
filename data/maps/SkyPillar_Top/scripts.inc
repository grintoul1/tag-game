# 1 "data/maps/SkyPillar_Top/scripts.pory"

# 2 "data/maps/SkyPillar_Top/scripts.pory"

# 3 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_MapScripts::
# 4 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
# 5 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
# 6 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_OnWarp
# 7 "data/maps/SkyPillar_Top/scripts.pory"
	.byte 0
# 8 "data/maps/SkyPillar_Top/scripts.pory"

# 9 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume:
# 10 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
# 11 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 12 "data/maps/SkyPillar_Top/scripts.pory"

# 13 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 14 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 18 "data/maps/SkyPillar_Top/scripts.pory"

# 19 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition:
# 20 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 8, SkyPillar_Top_EventScript_SetCleanLayout
# 21 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_TryShowRayquaza
# 22 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_MattTabithaPos
# 23 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 5, SkyPillar_Top_EventScript_ShellyCourtneyPos
# 24 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_LeaderVars
# 25 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_LeaderPos
# 26 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 27 "data/maps/SkyPillar_Top/scripts.pory"

# 28 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_LeaderPos::
# 29 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectxyperm VAR_0x8003, 12, 10
# 30 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype VAR_0x8003, MOVEMENT_TYPE_FACE_UP
# 31 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 32 "data/maps/SkyPillar_Top/scripts.pory"

# 33 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_LeaderVars::
# 34 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieVars
# 35 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieVars
# 36 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 37 "data/maps/SkyPillar_Top/scripts.pory"

# 38 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieVars::
# 39 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8002, LOCALID_SKYPILLAR_MAXIE
# 40 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8003, LOCALID_SKYPILLAR_ARCHIE
# 41 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 42 "data/maps/SkyPillar_Top/scripts.pory"

# 43 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieVars::
# 44 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8002, LOCALID_SKYPILLAR_ARCHIE
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8003, LOCALID_SKYPILLAR_MAXIE
# 46 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 47 "data/maps/SkyPillar_Top/scripts.pory"

# 48 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaPos::
# 49 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectxyperm LOCALID_SKYPILLAR_MATT, 12, 21
# 50 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectxyperm LOCALID_SKYPILLAR_TABITHA, 12, 19
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_JOG_IN_PLACE_UP
# 52 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_JOG_IN_PLACE_DOWN
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_JOG_IN_PLACE_LEFT
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_JOG_IN_PLACE_RIGHT
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 56 "data/maps/SkyPillar_Top/scripts.pory"

# 57 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShellyCourtneyPos::
# 58 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_JOG_IN_PLACE_LEFT
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_JOG_IN_PLACE_RIGHT
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 61 "data/maps/SkyPillar_Top/scripts.pory"

# 62 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 66 "data/maps/SkyPillar_Top/scripts.pory"

# 67 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 70 "data/maps/SkyPillar_Top/scripts.pory"

# 71 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 72 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 74 "data/maps/SkyPillar_Top/scripts.pory"

# 75 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 76 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 77 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 78 "data/maps/SkyPillar_Top/scripts.pory"

# 79 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 82 "data/maps/SkyPillar_Top/scripts.pory"

# 83 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachMatt:
# 84 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	walk_down
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	face_left
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 88 "data/maps/SkyPillar_Top/scripts.pory"

# 89 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattLeaveWellAlone:
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: You two, again!\p"
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You just don't know when to quit\n"
# 92 "data/maps/SkyPillar_Top/scripts.pory"
	.string "do you?$"
# 93 "data/maps/SkyPillar_Top/scripts.pory"

# 94 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaTenacious:
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Heh… Tenacious aren't you…$"
# 96 "data/maps/SkyPillar_Top/scripts.pory"

# 97 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattBeenHereBefore:
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: We've been here before…\p"
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Let's get it right this time.$"
# 100 "data/maps/SkyPillar_Top/scripts.pory"

# 101 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaWhyNot:
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Sure, why not?$"
# 103 "data/maps/SkyPillar_Top/scripts.pory"

# 104 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaApproachPlayer:
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	face_right
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 108 "data/maps/SkyPillar_Top/scripts.pory"

# 109 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaNotLikePyre:
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Hehehe… This isn't going to\n"
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	.string "end like Mt Pyre!$"
# 112 "data/maps/SkyPillar_Top/scripts.pory"

# 113 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattDefeat:
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I concede. Team Aqua may never be able\n"
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to hold you back…$"
# 116 "data/maps/SkyPillar_Top/scripts.pory"

# 117 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaDefeat:
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Hehe… Hehehehe…$"
# 119 "data/maps/SkyPillar_Top/scripts.pory"

# 120 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaMattKnockedBack:
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_left
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_left
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 126 "data/maps/SkyPillar_Top/scripts.pory"

# 127 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattPostBattle:
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: Whatever happens now is beyond\n"
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	.string "my control.$"
# 130 "data/maps/SkyPillar_Top/scripts.pory"

# 131 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaPostBattle:
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Nothing you say or do will\n"
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	.string "ever weaken my faith in Maxie…$"
# 134 "data/maps/SkyPillar_Top/scripts.pory"

# 135 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_MattReturnToPosition:
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 141 "data/maps/SkyPillar_Top/scripts.pory"

# 142 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaReturnToPosition:
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 146 "data/maps/SkyPillar_Top/scripts.pory"

# 147 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieNearlyThere:
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: C'mon, {PLAYER}, we're almost\n"
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	.string "there!$"
# 150 "data/maps/SkyPillar_Top/scripts.pory"

# 151 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabitha::
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachMatt
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_FACE_UP
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_FACE_DOWN
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_FaceRight
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_FaceRight
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_ExclamationMark
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_ExclamationMark
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterRight
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattLeaveWellAlone, MSGBOX_DEFAULT
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaTenacious, MSGBOX_DEFAULT
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_FaceDown
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterUp
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattBeenHereBefore, MSGBOX_DEFAULT
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 180 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaWhyNot, MSGBOX_DEFAULT
# 182 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 183 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaApproachPlayer
# 184 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkSlowRight
# 185 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowLeft
# 186 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowLeft
# 187 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 188 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 189 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 190 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaNotLikePyre, MSGBOX_DEFAULT
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 192 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_MattTabithaDoMultiBattle
# 193 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 194 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 195 "data/maps/SkyPillar_Top/scripts.pory"

# 196 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaDoMultiBattle::
# 197 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_NONE, TRUE
# 198 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2p_vs_2 TRAINER_MATT_SKY_PILLAR, SkyPillar_Top_Text_MattDefeat, TRAINER_TABITHA_SKY_PILLAR, SkyPillar_Top_Text_TabithaDefeat, PARTNER_EMMIE
# 199 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 200 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_MattTabithaVictory
# 201 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 202 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 203 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 204 "data/maps/SkyPillar_Top/scripts.pory"

# 205 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaVictory::
# 206 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 207 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaMattKnockedBack
# 208 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, SkyPillar_Top_Movement_TabithaMattKnockedBack
# 209 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 210 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterRight
# 211 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 212 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattPostBattle, MSGBOX_DEFAULT
# 213 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 214 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 215 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 216 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaPostBattle, MSGBOX_DEFAULT
# 217 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 218 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, SkyPillar_Top_Movement_MattReturnToPosition
# 219 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaReturnToPosition
# 220 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowLeft
# 221 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 222 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_FACE_DOWN
# 223 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_FACE_DOWN
# 224 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 225 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 226 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 227 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieNearlyThere, MSGBOX_DEFAULT
# 228 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 229 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 230 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 231 "data/maps/SkyPillar_Top/scripts.pory"

# 232 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Matt::
# 233 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 234 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattPostBattle, MSGBOX_DEFAULT
# 235 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 236 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 237 "data/maps/SkyPillar_Top/scripts.pory"

# 238 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Tabitha::
# 239 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 240 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaPostBattle, MSGBOX_DEFAULT
# 241 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 242 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 243 "data/maps/SkyPillar_Top/scripts.pory"

# 244 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyNoInterruptions:
# 245 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: Maxie instructed me that\n"
# 246 "data/maps/SkyPillar_Top/scripts.pory"
	.string "there are to be no interruptions.\p"
# 247 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Nobody makes me break a promise with\n"
# 248 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie, especially not you Shelly!$"
# 249 "data/maps/SkyPillar_Top/scripts.pory"

# 250 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_PlayerApproachShelly:
# 251 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 252 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 253 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 254 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 255 "data/maps/SkyPillar_Top/scripts.pory"

# 256 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachCourtney:
# 257 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 258 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 259 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 260 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 261 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 262 "data/maps/SkyPillar_Top/scripts.pory"

# 263 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyShouldHaveKnown:
# 264 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Shelly: I should have known you two\n"
# 265 "data/maps/SkyPillar_Top/scripts.pory"
	.string "would turn up sooner or later…\p"
# 266 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I trust that Archie knows what's\n"
# 267 "data/maps/SkyPillar_Top/scripts.pory"
	.string "best, and every time you show up,\l"
# 268 "data/maps/SkyPillar_Top/scripts.pory"
	.string "things only ever get worse…$"
# 269 "data/maps/SkyPillar_Top/scripts.pory"

# 270 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneySpeechless:
# 271 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: … … … … … …$"
# 272 "data/maps/SkyPillar_Top/scripts.pory"

# 273 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShellyCourtney::
# 274 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 275 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_FACE_RIGHT
# 276 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_FACE_LEFT
# 277 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SkyPillar_Top_Movement_PlayerApproachShelly
# 278 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachCourtney
# 279 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 280 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 281 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 282 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 283 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyNoInterruptions, MSGBOX_DEFAULT
# 284 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 285 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_FaceDown
# 286 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_FaceDown
# 287 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 289 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_ExclamationMark
# 290 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_ExclamationMark
# 291 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 292 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 293 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 294 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyShouldHaveKnown, MSGBOX_DEFAULT
# 295 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 296 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_FaceRight
# 297 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_FaceLeft
# 298 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 299 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 300 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneySpeechless, MSGBOX_DEFAULT
# 301 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 302 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkDown
# 303 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkDown
# 304 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 305 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_CourtneyShellyDoMultiBattle
# 306 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 307 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 308 "data/maps/SkyPillar_Top/scripts.pory"

# 309 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CourtneyShellyDoMultiBattle::
# 310 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_NONE, TRUE
# 311 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_FACE_DOWN
# 312 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_FACE_DOWN
# 313 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2p_vs_2 TRAINER_SHELLY_SKY_PILLAR, SkyPillar_Top_Text_ShellyDefeat, TRAINER_COURTNEY_SKY_PILLAR, SkyPillar_Top_Text_CourtneyDefeat, PARTNER_EMMIE
# 314 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 315 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_CourtneyShellyVictory
# 316 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 317 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 318 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 319 "data/maps/SkyPillar_Top/scripts.pory"

# 320 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CourtneyShellyVictory::
# 321 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 322 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, SkyPillar_Top_Movement_CourtneyShellyKnockedBack
# 323 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, SkyPillar_Top_Movement_CourtneyShellyKnockedBack
# 324 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 325 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 326 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 327 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 329 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 330 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 331 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 332 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 333 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowRight
# 334 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 335 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 336 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieThisIsIt, MSGBOX_DEFAULT
# 337 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 338 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 339 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 340 "data/maps/SkyPillar_Top/scripts.pory"

# 341 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Shelly::
# 342 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 343 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 344 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 345 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 346 "data/maps/SkyPillar_Top/scripts.pory"

# 347 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Courtney::
# 348 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 349 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 350 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 351 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 352 "data/maps/SkyPillar_Top/scripts.pory"

# 353 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyDefeat:
# 354 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maybe I was wrong about you…\n"
# 355 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Perhaps you are the answer…$"
# 356 "data/maps/SkyPillar_Top/scripts.pory"

# 357 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyDefeat:
# 358 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie trusted me and I've let\n"
# 359 "data/maps/SkyPillar_Top/scripts.pory"
	.string "him down…$"
# 360 "data/maps/SkyPillar_Top/scripts.pory"

# 361 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieThisIsIt:
# 362 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: We made it, {PLAYER}.\n"
# 363 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie and Maxie are up ahead.\p"
# 364 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Once we get involved, there's no\n"
# 365 "data/maps/SkyPillar_Top/scripts.pory"
	.string "turning back.\p"
# 366 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We better make sure we're prepared\n"
# 367 "data/maps/SkyPillar_Top/scripts.pory"
	.string "before we go any further.$"
# 368 "data/maps/SkyPillar_Top/scripts.pory"

# 369 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyPostBattle:
# 370 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: Please! You can't interrupt\n"
# 371 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie now, this is too important!$"
# 372 "data/maps/SkyPillar_Top/scripts.pory"

# 373 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyPostBattle:
# 374 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Shelly: There really is no stopping\n"
# 375 "data/maps/SkyPillar_Top/scripts.pory"
	.string "you two is there…$"
# 376 "data/maps/SkyPillar_Top/scripts.pory"

# 377 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CourtneyShellyKnockedBack:
# 378 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 379 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 380 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 381 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 382 "data/maps/SkyPillar_Top/scripts.pory"

# 383 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 384 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 385 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 386 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 387 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 388 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 389 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 390 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 391 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 392 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 393 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 394 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 395 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 396 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 397 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 398 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 399 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 400 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 401 "data/maps/SkyPillar_Top/scripts.pory"

# 402 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 403 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 404 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 405 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 406 "data/maps/SkyPillar_Top/scripts.pory"

# 407 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 408 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 409 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 410 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 411 "data/maps/SkyPillar_Top/scripts.pory"

# 412 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 413 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 414 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 415 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 416 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 417 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 418 "data/maps/SkyPillar_Top/scripts.pory"

# 419 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 420 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 421 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 422 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 423 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 424 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 425 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 426 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 427 "data/maps/SkyPillar_Top/scripts.pory"

# 428 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 429 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 430 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 431 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 432 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 433 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 434 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 435 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 436 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 437 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 438 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 439 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 440 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 441 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 442 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 443 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 444 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 445 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 446 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 447 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 448 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 449 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 450 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 451 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 452 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 453 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 454 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 455 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 456 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 457 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 458 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 459 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 460 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 461 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 462 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 463 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 464 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 465 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 466 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 467 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 468 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 469 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 470 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 471 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 472 "data/maps/SkyPillar_Top/scripts.pory"

# 473 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 474 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 475 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 476 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 477 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 478 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 479 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 480 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 481 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 482 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 483 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 484 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 485 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 486 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 487 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 488 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 489 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 490 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 491 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 492 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 493 "data/maps/SkyPillar_Top/scripts.pory"

# 494 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 495 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 496 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 497 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 498 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 499 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 500 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 501 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 502 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 503 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 504 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 505 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 506 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 507 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 508 "data/maps/SkyPillar_Top/scripts.pory"

# 509 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 510 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 511 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 512 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 513 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 514 "data/maps/SkyPillar_Top/scripts.pory"

# 515 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 516 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 517 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 518 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 519 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 520 "data/maps/SkyPillar_Top/scripts.pory"

# 521 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 522 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"
