# 1 "data/maps/OldaleTown/scripts.pory"

# 2 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_MART_EMPLOYEE, 2
# 3 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_FOOTPRINTS_MAN, 3
# 4 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_RIVAL, 4
# 5 "data/maps/OldaleTown/scripts.pory"

# 6 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 7 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 8 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 9 "data/maps/OldaleTown/scripts.pory"

# 10 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 11 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 12 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 13 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 14 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 15 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 16 "data/maps/OldaleTown/scripts.pory"
	end
# 17 "data/maps/OldaleTown/scripts.pory"

# 18 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 19 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 20 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 21 "data/maps/OldaleTown/scripts.pory"
	return
# 22 "data/maps/OldaleTown/scripts.pory"

# 23 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 24 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 25 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 26 "data/maps/OldaleTown/scripts.pory"
	return
# 27 "data/maps/OldaleTown/scripts.pory"

# 28 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 29 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_MART_EMPLOYEE, 13, 14
# 30 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 31 "data/maps/OldaleTown/scripts.pory"
	return
# 32 "data/maps/OldaleTown/scripts.pory"

# 33 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 34 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 35 "data/maps/OldaleTown/scripts.pory"
	end
# 36 "data/maps/OldaleTown/scripts.pory"

# 37 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 38 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 39 "data/maps/OldaleTown/scripts.pory"
	end
# 40 "data/maps/OldaleTown/scripts.pory"

# 41 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 42 "data/maps/OldaleTown/scripts.pory"
	lock
# 43 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 44 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 45 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 46 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 47 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 48 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 49 "data/maps/OldaleTown/scripts.pory"
	end
# 50 "data/maps/OldaleTown/scripts.pory"

# 51 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 52 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 53 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
# 54 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 55 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 56 "data/maps/OldaleTown/scripts.pory"
	end
# 57 "data/maps/OldaleTown/scripts.pory"

# 58 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 59 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 60 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
# 61 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 62 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 63 "data/maps/OldaleTown/scripts.pory"
	end
# 64 "data/maps/OldaleTown/scripts.pory"

# 65 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 66 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
# 67 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 68 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 69 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 70 "data/maps/OldaleTown/scripts.pory"
	end
# 71 "data/maps/OldaleTown/scripts.pory"

# 72 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 73 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 74 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 75 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 76 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 77 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 78 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 79 "data/maps/OldaleTown/scripts.pory"
	release
# 80 "data/maps/OldaleTown/scripts.pory"
	end
# 81 "data/maps/OldaleTown/scripts.pory"

# 82 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 83 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 84 "data/maps/OldaleTown/scripts.pory"
	release
# 85 "data/maps/OldaleTown/scripts.pory"
	end
# 86 "data/maps/OldaleTown/scripts.pory"

# 87 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 88 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 89 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 90 "data/maps/OldaleTown/scripts.pory"
	release
# 91 "data/maps/OldaleTown/scripts.pory"
	end
# 92 "data/maps/OldaleTown/scripts.pory"

# 93 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 94 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 96 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 97 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 99 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 100 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 102 "data/maps/OldaleTown/scripts.pory"
	step_end
# 103 "data/maps/OldaleTown/scripts.pory"

# 104 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 105 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 106 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 107 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 109 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 110 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 112 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 113 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 115 "data/maps/OldaleTown/scripts.pory"
	step_end
# 116 "data/maps/OldaleTown/scripts.pory"

# 117 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 122 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 124 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 125 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 126 "data/maps/OldaleTown/scripts.pory"
	step_end
# 127 "data/maps/OldaleTown/scripts.pory"

# 128 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 129 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 130 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 132 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 133 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 134 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 135 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 136 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 137 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 138 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 139 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 140 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 141 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 142 "data/maps/OldaleTown/scripts.pory"
	step_end
# 143 "data/maps/OldaleTown/scripts.pory"

# 144 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 145 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 146 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 148 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 149 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 150 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 151 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 152 "data/maps/OldaleTown/scripts.pory"
	step_end
# 153 "data/maps/OldaleTown/scripts.pory"

# 154 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 155 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 156 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 157 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 158 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 159 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 160 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 161 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 162 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 163 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 164 "data/maps/OldaleTown/scripts.pory"
	step_end
# 165 "data/maps/OldaleTown/scripts.pory"

# 166 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 167 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 168 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 171 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 172 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 173 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 174 "data/maps/OldaleTown/scripts.pory"
	step_end
# 175 "data/maps/OldaleTown/scripts.pory"

# 176 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 180 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 188 "data/maps/OldaleTown/scripts.pory"
	step_end
# 189 "data/maps/OldaleTown/scripts.pory"

# 190 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 191 "data/maps/OldaleTown/scripts.pory"
	lock
# 192 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 193 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 194 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 195 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 196 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 197 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 198 "data/maps/OldaleTown/scripts.pory"
	release
# 199 "data/maps/OldaleTown/scripts.pory"
	end
# 200 "data/maps/OldaleTown/scripts.pory"

# 201 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 202 "data/maps/OldaleTown/scripts.pory"
	lockall
# 203 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 204 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 205 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 206 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 207 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 208 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 209 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 210 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 211 "data/maps/OldaleTown/scripts.pory"
	end
# 212 "data/maps/OldaleTown/scripts.pory"

# 213 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 214 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 215 "data/maps/OldaleTown/scripts.pory"
	release
# 216 "data/maps/OldaleTown/scripts.pory"
	end
# 217 "data/maps/OldaleTown/scripts.pory"

# 218 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 219 "data/maps/OldaleTown/scripts.pory"
	lockall
# 220 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 221 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 222 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 223 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 224 "data/maps/OldaleTown/scripts.pory"
	end
# 225 "data/maps/OldaleTown/scripts.pory"

# 226 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 227 "data/maps/OldaleTown/scripts.pory"
	lockall
# 228 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 229 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 230 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 231 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 232 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 233 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 234 "data/maps/OldaleTown/scripts.pory"
	end
# 235 "data/maps/OldaleTown/scripts.pory"

# 236 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 237 "data/maps/OldaleTown/scripts.pory"
	lockall
# 238 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 239 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 240 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 241 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 242 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 243 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 244 "data/maps/OldaleTown/scripts.pory"
	end
# 245 "data/maps/OldaleTown/scripts.pory"

# 246 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 247 "data/maps/OldaleTown/scripts.pory"
	lockall
# 248 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 249 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 250 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 251 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 252 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 253 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 254 "data/maps/OldaleTown/scripts.pory"
	end
# 255 "data/maps/OldaleTown/scripts.pory"

# 256 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 257 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 258 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 259 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 260 "data/maps/OldaleTown/scripts.pory"
	end
# 261 "data/maps/OldaleTown/scripts.pory"

# 262 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 263 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 264 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 265 "data/maps/OldaleTown/scripts.pory"
	end
# 266 "data/maps/OldaleTown/scripts.pory"

# 267 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 268 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 269 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 270 "data/maps/OldaleTown/scripts.pory"
	end
# 271 "data/maps/OldaleTown/scripts.pory"

# 272 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 273 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 274 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 275 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 276 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 277 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 278 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 279 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 280 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 281 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 282 "data/maps/OldaleTown/scripts.pory"
	end
# 283 "data/maps/OldaleTown/scripts.pory"

# 284 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 285 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 286 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 287 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 288 "data/maps/OldaleTown/scripts.pory"
	return
# 289 "data/maps/OldaleTown/scripts.pory"

# 290 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 291 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 292 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 293 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/OldaleTown/scripts.pory"
	return
# 295 "data/maps/OldaleTown/scripts.pory"

# 296 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 297 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 298 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 299 "data/maps/OldaleTown/scripts.pory"
	step_end
# 300 "data/maps/OldaleTown/scripts.pory"

# 301 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 302 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 303 "data/maps/OldaleTown/scripts.pory"
	step_end
# 304 "data/maps/OldaleTown/scripts.pory"

# 305 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 306 "data/maps/OldaleTown/scripts.pory"
	face_left
# 307 "data/maps/OldaleTown/scripts.pory"
	step_end
# 308 "data/maps/OldaleTown/scripts.pory"

# 309 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 310 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 311 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 312 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 313 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 314 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 315 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 316 "data/maps/OldaleTown/scripts.pory"
	step_end
# 317 "data/maps/OldaleTown/scripts.pory"

# 318 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 319 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 320 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 321 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 322 "data/maps/OldaleTown/scripts.pory"
	step_end
# 323 "data/maps/OldaleTown/scripts.pory"

# 324 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 325 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 326 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 327 "data/maps/OldaleTown/scripts.pory"
	step_end
# 328 "data/maps/OldaleTown/scripts.pory"

# 329 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 330 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 331 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 332 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 334 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 335 "data/maps/OldaleTown/scripts.pory"
	step_end
# 336 "data/maps/OldaleTown/scripts.pory"

# 337 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 338 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 339 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 340 "data/maps/OldaleTown/scripts.pory"
	step_end
# 341 "data/maps/OldaleTown/scripts.pory"

# 342 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 343 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 344 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 345 "data/maps/OldaleTown/scripts.pory"

# 346 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 347 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 348 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 349 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 350 "data/maps/OldaleTown/scripts.pory"

# 351 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 352 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 353 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 354 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 355 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 356 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 357 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 358 "data/maps/OldaleTown/scripts.pory"

# 359 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 360 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 361 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 362 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 363 "data/maps/OldaleTown/scripts.pory"

# 364 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 365 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 366 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 367 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 368 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 369 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 370 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 371 "data/maps/OldaleTown/scripts.pory"

# 372 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 373 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 374 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 375 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 376 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 377 "data/maps/OldaleTown/scripts.pory"

# 378 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 379 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 380 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 381 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 382 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 383 "data/maps/OldaleTown/scripts.pory"

# 384 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 386 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 387 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 388 "data/maps/OldaleTown/scripts.pory"

# 389 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 390 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 391 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 392 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 393 "data/maps/OldaleTown/scripts.pory"

# 394 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 395 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 396 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"
