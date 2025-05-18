# 1 "data/maps/SlateportCity_Harbor/scripts.pory"

# 2 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_CAPT_STERN, 4
# 3 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_SS_TIDAL, 5
# 4 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_GRUNT, 6
# 5 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_ARCHIE, 7
# 6 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_SUBMARINE, 8
# 7 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_GRUNT_2, 9
# 8 "data/maps/SlateportCity_Harbor/scripts.pory"

# 9 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_MapScripts::
# 10 "data/maps/SlateportCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_Harbor_OnTransition
# 11 "data/maps/SlateportCity_Harbor/scripts.pory"
	.byte 0
# 12 "data/maps/SlateportCity_Harbor/scripts.pory"

# 13 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_OnTransition:
# 14 "data/maps/SlateportCity_Harbor/scripts.pory"
	setescapewarp MAP_SLATEPORT_CITY, 28, 13
# 15 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 16 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_SLATEPORT_HARBOR_STATE, 1, SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene
# 17 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_ShowSSTidal
# 18 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 19 "data/maps/SlateportCity_Harbor/scripts.pory"

# 20 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ShowSSTidal::
# 21 "data/maps/SlateportCity_Harbor/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
# 22 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 23 "data/maps/SlateportCity_Harbor/scripts.pory"

# 24 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene::
# 25 "data/maps/SlateportCity_Harbor/scripts.pory"
	savebgm MUS_ENCOUNTER_AQUA
# 26 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 12, 13
# 27 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_LEFT
# 28 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 29 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 30 "data/maps/SlateportCity_Harbor/scripts.pory"

# 31 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger0::
# 32 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 33 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 0
# 34 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 35 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 36 "data/maps/SlateportCity_Harbor/scripts.pory"

# 37 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger1::
# 38 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 39 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 1
# 40 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 41 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 42 "data/maps/SlateportCity_Harbor/scripts.pory"

# 43 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger2::
# 44 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 45 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 2
# 46 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 47 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 48 "data/maps/SlateportCity_Harbor/scripts.pory"

# 49 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger3::
# 50 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 51 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 3
# 52 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_PlayerWalkUp
# 53 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SlateportCity_Harbor_Movement_PlayerWalkUp
# 54 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 55 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 57 "data/maps/SlateportCity_Harbor/scripts.pory"

# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene::
# 59 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 60 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 62 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterRight
# 63 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 64 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 66 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove, MSGBOX_DEFAULT
# 67 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_GRUNT, SlateportCity_Harbor_Movement_AquaBoardSub
# 69 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_Harbor_Movement_AquaBoardSub
# 70 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SUBMARINE, SlateportCity_Harbor_Movement_SubmarineExit
# 71 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_GRUNT
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_ARCHIE
# 74 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SUBMARINE
# 75 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
# 79 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_MET_TEAM_AQUA_HARBOR
# 80 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 82 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 0, SlateportCity_Harbor_EventScript_SternApproachPlayer0
# 83 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 1, SlateportCity_Harbor_EventScript_SternApproachPlayer1
# 84 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 2, SlateportCity_Harbor_EventScript_SternApproachPlayer
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 3, SlateportCity_Harbor_EventScript_SternApproachPlayer
# 86 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 87 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 88 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 89 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
# 90 "data/maps/SlateportCity_Harbor/scripts.pory"
	copyobjectxytoperm LOCALID_CAPT_STERN
# 91 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_RIGHT
# 92 "data/maps/SlateportCity_Harbor/scripts.pory"
	releaseall
# 93 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 94 "data/maps/SlateportCity_Harbor/scripts.pory"

# 95 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer0::
# 96 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer0
# 97 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 98 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 99 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 100 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 101 "data/maps/SlateportCity_Harbor/scripts.pory"

# 102 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer1::
# 103 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer1
# 104 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 105 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 106 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 107 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 108 "data/maps/SlateportCity_Harbor/scripts.pory"

# 109 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer::
# 110 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer
# 111 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 113 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 114 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 115 "data/maps/SlateportCity_Harbor/scripts.pory"

# 116 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_AquaBoardSub:
# 117 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 118 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 119 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 121 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 122 "data/maps/SlateportCity_Harbor/scripts.pory"

# 123 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused, Archie instead shares above identical movement script with Grunt
# 124 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_ArchieBoardSub:
# 125 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 126 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 127 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 128 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 129 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 130 "data/maps/SlateportCity_Harbor/scripts.pory"

# 131 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SubmarineExit:
# 132 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 133 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 134 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 135 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 136 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 137 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 138 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 139 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 140 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 141 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 142 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 143 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 144 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 145 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 146 "data/maps/SlateportCity_Harbor/scripts.pory"

# 147 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer0:
# 148 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 149 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 150 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 151 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 152 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 153 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 154 "data/maps/SlateportCity_Harbor/scripts.pory"

# 155 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer1:
# 156 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 157 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 158 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 159 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 160 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"

# 162 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer:
# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 164 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 165 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 166 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 167 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 168 "data/maps/SlateportCity_Harbor/scripts.pory"
	face_down
# 169 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 170 "data/maps/SlateportCity_Harbor/scripts.pory"

# 171 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_PlayerWalkUp:
# 172 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 173 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 174 "data/maps/SlateportCity_Harbor/scripts.pory"

# 175 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryAttendant::
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 177 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 178 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_AskForTicket
# 179 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FerryServiceUnavailable, MSGBOX_DEFAULT
# 180 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 181 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 182 "data/maps/SlateportCity_Harbor/scripts.pory"

# 183 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskForTicket::
# 184 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 185 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_FlashedTicketWhereTo
# 186 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 187 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 188 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 189 "data/maps/SlateportCity_Harbor/scripts.pory"

# 190 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination::
# 191 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_ON_SS_TIDAL, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 18, 8, MULTI_SSTIDAL_SLATEPORT_NO_BF, 2, FALSE
# 193 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 194 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 195 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 196 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 197 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 198 "data/maps/SlateportCity_Harbor/scripts.pory"

# 199 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier::
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 17, 6, MULTI_SSTIDAL_SLATEPORT_WITH_BF, 2, FALSE
# 201 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 202 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 203 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_BattleFrontier
# 204 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 205 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 206 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 207 "data/maps/SlateportCity_Harbor/scripts.pory"

# 208 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused. Should be impossible for player to reach Ferry without having received SS Tidal ticket
# 209 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NoTicket::
# 210 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_YouMustHaveTicket, MSGBOX_DEFAULT
# 211 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 212 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 213 "data/maps/SlateportCity_Harbor/scripts.pory"

# 214 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Lilycove::
# 215 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LilycoveItIs, MSGBOX_YESNO
# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 217 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT
# 218 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 219 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 220 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 221 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 223 "data/maps/SlateportCity_Harbor/scripts.pory"

# 224 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BattleFrontier::
# 225 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 226 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 227 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 229 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 231 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"

# 233 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseNewDestination::
# 234 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhereWouldYouLikeToGo
# 235 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 237 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 238 "data/maps/SlateportCity_Harbor/scripts.pory"

# 239 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry::
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 241 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 242 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 244 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 245 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_SLATEPORT_CITY_HARBOR
# 246 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SlateportCity_Harbor_EventScript_BoardFerryNorth
# 247 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_Harbor_EventScript_BoardFerryEast
# 248 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 249 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 250 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 252 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 253 "data/maps/SlateportCity_Harbor/scripts.pory"

# 254 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CancelDestinationSelect::
# 255 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 256 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 257 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 258 "data/maps/SlateportCity_Harbor/scripts.pory"

# 259 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryEast::
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryEast
# 261 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 263 "data/maps/SlateportCity_Harbor/scripts.pory"

# 264 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryNorth::
# 265 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryNorth
# 266 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 267 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"

# 269 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryEast:
# 270 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 271 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 272 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 273 "data/maps/SlateportCity_Harbor/scripts.pory"

# 274 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryNorth:
# 275 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 276 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 277 "data/maps/SlateportCity_Harbor/scripts.pory"

# 278 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor::
# 279 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 280 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 281 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather
# 282 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 283 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 284 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 285 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_0x8004, 2, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather  @ Defeated both
# 286 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_AbnormalWeather, MSGBOX_DEFAULT
# 287 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 288 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 289 "data/maps/SlateportCity_Harbor/scripts.pory"

# 290 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather::
# 291 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday, MSGBOX_DEFAULT
# 292 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 293 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 294 "data/maps/SlateportCity_Harbor/scripts.pory"

# 295 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CountDefeatedLegendary::
# 296 "data/maps/SlateportCity_Harbor/scripts.pory"
	addvar VAR_0x8004, 1
# 297 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 298 "data/maps/SlateportCity_Harbor/scripts.pory"

# 299 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FatMan::
# 300 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SubTooSmallForMe, MSGBOX_NPC
# 301 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 302 "data/maps/SlateportCity_Harbor/scripts.pory"

# 303 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern::
# 304 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 305 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 306 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment
# 307 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE, SlateportCity_Harbor_EventScript_NeedDive
# 308 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive
# 309 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_SLATEPORT_HARBOR_STATE, 2, SlateportCity_Harbor_EventScript_WhyStealSubmarine
# 310 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum, MSGBOX_DEFAULT
# 311 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 312 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 313 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 314 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 315 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 316 "data/maps/SlateportCity_Harbor/scripts.pory"

# 317 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_WhyStealSubmarine::
# 318 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 319 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 320 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 321 "data/maps/SlateportCity_Harbor/scripts.pory"

# 322 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive::
# 323 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE
# 324 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TeamAquaLeftNeedDive, MSGBOX_DEFAULT
# 325 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 326 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 327 "data/maps/SlateportCity_Harbor/scripts.pory"

# 328 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NeedDive::
# 329 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_NeedDiveToCatchSub, MSGBOX_DEFAULT
# 330 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 331 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 332 "data/maps/SlateportCity_Harbor/scripts.pory"

# 333 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment::
# 334 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, SlateportCity_Harbor_EventScript_TradedScanner
# 335 "data/maps/SlateportCity_Harbor/scripts.pory"
	checkitem ITEM_SCANNER
# 336 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_Harbor_EventScript_AskToTradeScanner
# 337 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_FerryFinished
# 338 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry, MSGBOX_DEFAULT
# 339 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 340 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 341 "data/maps/SlateportCity_Harbor/scripts.pory"

# 342 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryFinished::
# 343 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FinishedMakingFerry, MSGBOX_DEFAULT
# 344 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 345 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 346 "data/maps/SlateportCity_Harbor/scripts.pory"

# 347 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskToTradeScanner::
# 348 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WouldYouTradeScanner
# 349 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 350 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 351 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 352 "data/maps/SlateportCity_Harbor/scripts.pory"

# 353 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade::
# 354 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoice 0, 0, MULTI_STERN_DEEPSEA, FALSE
# 355 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 356 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_DeepSeaTooth
# 357 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_DeepSeaScale
# 358 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_DeclineTrade
# 359 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_DeclineTrade
# 360 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 361 "data/maps/SlateportCity_Harbor/scripts.pory"

# 362 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaTooth::
# 363 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaTooth, MSGBOX_YESNO
# 364 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 365 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH
# 366 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 367 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 368 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 369 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 370 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 371 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 372 "data/maps/SlateportCity_Harbor/scripts.pory"

# 373 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaScale::
# 374 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaScale, MSGBOX_YESNO
# 375 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 376 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
# 377 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 378 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 379 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 380 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 381 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 382 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 383 "data/maps/SlateportCity_Harbor/scripts.pory"

# 384 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeclineTrade::
# 385 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow, MSGBOX_DEFAULT
# 386 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 387 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 388 "data/maps/SlateportCity_Harbor/scripts.pory"

# 389 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDifferentTrade::
# 390 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhichOneDoYouWant
# 391 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 392 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 393 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 394 "data/maps/SlateportCity_Harbor/scripts.pory"

# 395 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TradedScanner::
# 396 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 397 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ThisWillHelpResearch, MSGBOX_DEFAULT
# 398 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 399 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 400 "data/maps/SlateportCity_Harbor/scripts.pory"

# 401 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FerryServiceUnavailable:
# 402 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
# 403 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're looking for a ship?\p"
# 404 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm sorry, the ferry service isn't\n"
# 405 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "available at present…$"
# 406 "data/maps/SlateportCity_Harbor/scripts.pory"

# 407 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_MayISeeYourTicket:
# 408 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 409 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "May I see your TICKET?$"
# 410 "data/maps/SlateportCity_Harbor/scripts.pory"

# 411 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_YouMustHaveTicket:
# 412 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 413 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 414 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You must have a TICKET to board\n"
# 415 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 416 "data/maps/SlateportCity_Harbor/scripts.pory"

# 417 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FlashedTicketWhereTo:
# 418 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 419 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 420 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 421 "data/maps/SlateportCity_Harbor/scripts.pory"

# 422 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SailAnotherTime:
# 423 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 424 "data/maps/SlateportCity_Harbor/scripts.pory"

# 425 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LilycoveItIs:
# 426 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 427 "data/maps/SlateportCity_Harbor/scripts.pory"

# 428 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_BattleFrontierItIs:
# 429 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"
# 430 "data/maps/SlateportCity_Harbor/scripts.pory"

# 431 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_PleaseBoardFerry:
# 432 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 433 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "departure.$"
# 434 "data/maps/SlateportCity_Harbor/scripts.pory"

# 435 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhereWouldYouLikeToGo:
# 436 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 437 "data/maps/SlateportCity_Harbor/scripts.pory"

# 438 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday:
# 439 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A journey to the bottom of the sea…\n"
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wonder what it'd be like?\p"
# 441 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'd love to go deep underwater like\n"
# 442 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that someday.$"
# 443 "data/maps/SlateportCity_Harbor/scripts.pory"

# 444 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_AbnormalWeather:
# 445 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "For a ship to sail safely, we need to\n"
# 446 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "know about the weather!\p"
# 447 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Speaking of weather, I heard something\n"
# 448 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "from a guy at the WEATHER INSTITUTE.\p"
# 449 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "He was saying abnormal weather has\n"
# 450 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "been reported all over the place!\p"
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You should visit the WEATHER INSTITUTE\n"
# 452 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "and ask around!$"
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"

# 454 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SubTooSmallForMe:
# 455 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wanted to go with CAPT. STERN on\n"
# 456 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ocean floor exploration.\p"
# 457 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But the sub's too small for me.\p"
# 458 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "If I squeezed in, there wouldn't be\n"
# 459 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "any room for the CAPTAIN…$"
# 460 "data/maps/SlateportCity_Harbor/scripts.pory"

# 461 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum:
# 462 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Those thugs…\n"
# 463 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They're stealing the submarine!$"
# 464 "data/maps/SlateportCity_Harbor/scripts.pory"

# 465 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove:
# 466 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "ARCHIE: I'm afraid you're too late!\p"
# 467 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We're taking this submarine back to\n"
# 468 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "our Hideout in Lilycove City.\p"
# 469 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We are only doing this to safeguard\n"
# 470 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "against Team Magma's plans.\p"
# 471 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "One day you will thank us for this.\p"
# 472 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Shelly, Team Aqua have been seen\n"
# 473 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "operating in the north.\p"
# 474 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Investigate their activities and\n"
# 475 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "report back to me with your findings.$"
# 476 "data/maps/SlateportCity_Harbor/scripts.pory"

# 477 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine:
# 478 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Why…\p"
# 479 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Why would Team Aqua steal my\n"
# 480 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "SUBMARINE EXPLORER 1?\p"
# 481 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They can't be after the slumbering\n"
# 482 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Pokémon at the bottom of the sea…\p"
# 483 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But even if I were to chase them,\n"
# 484 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I don't stand a chance against them…$"
# 485 "data/maps/SlateportCity_Harbor/scripts.pory"

# 486 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TeamAquaLeftNeedDive:
# 487 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh, {PLAYER}{KUN}…\p"
# 488 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Okay… So TEAM AQUA left before you\n"
# 489 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "could stop them…\p"
# 490 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Oh, no, don't blame yourself.\n"
# 491 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're not responsible for this.\p"
# 492 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Trying to catch a submarine…\n"
# 493 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's impossible for most people.\p"
# 494 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You would need a POKéMON that knows\n"
# 495 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "how to DIVE…\p"
# 496 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perhaps if you went out to\n"
# 497 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MOSSDEEP CITY…\p"
# 498 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A lot of divers live out there, so\n"
# 499 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "someone might teach you…$"
# 500 "data/maps/SlateportCity_Harbor/scripts.pory"

# 501 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_NeedDiveToCatchSub:
# 502 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Trying to catch a\n"
# 503 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "submarine… It's impossible.\p"
# 504 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You would need a POKéMON that knows\n"
# 505 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "how to DIVE…\p"
# 506 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perhaps if you went out to\n"
# 507 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MOSSDEEP CITY…\p"
# 508 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A lot of divers live out there, so\n"
# 509 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "someone might teach you…$"
# 510 "data/maps/SlateportCity_Harbor/scripts.pory"

# 511 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry:
# 512 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh, yes.\n"
# 513 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MR. BRINEY came to our SHIPYARD.\p"
# 514 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It won't be long now before we finish\n"
# 515 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "making the ferry!$"
# 516 "data/maps/SlateportCity_Harbor/scripts.pory"

# 517 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FinishedMakingFerry:
# 518 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: {PLAYER}{KUN}!\p"
# 519 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We finally finished making the ferry\n"
# 520 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "S.S. TIDAL!\p"
# 521 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We couldn't have done it without\n"
# 522 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your friend MR. BRINEY.\p"
# 523 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please go for a short cruise on it!$"
# 524 "data/maps/SlateportCity_Harbor/scripts.pory"

# 525 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WouldYouTradeScanner:
# 526 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh?\n"
# 527 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, that item you have…\p"
# 528 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "That's a SCANNER! That would sure\n"
# 529 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "help us on our explorations.\p"
# 530 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, would you trade your\n"
# 531 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "SCANNER for something?\p"
# 532 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Like, say, a DEEPSEATOOTH or\n"
# 533 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "a DEEPSEASCALE that I have?$"
# 534 "data/maps/SlateportCity_Harbor/scripts.pory"

# 535 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow:
# 536 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Are you certain?\n"
# 537 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's useless to you, {PLAYER}{KUN}…\p"
# 538 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Well, okay, then. If you want to trade\n"
# 539 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your SCANNER, let me know.$"
# 540 "data/maps/SlateportCity_Harbor/scripts.pory"

# 541 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaTooth:
# 542 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 543 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEATOOTH?$"
# 544 "data/maps/SlateportCity_Harbor/scripts.pory"

# 545 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaScale:
# 546 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 547 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEASCALE?$"
# 548 "data/maps/SlateportCity_Harbor/scripts.pory"

# 549 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhichOneDoYouWant:
# 550 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Which one do you want?$"
# 551 "data/maps/SlateportCity_Harbor/scripts.pory"

# 552 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_HandedScannerToStern:
# 553 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} handed the SCANNER to\n"
# 554 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN.$"
# 555 "data/maps/SlateportCity_Harbor/scripts.pory"

# 556 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ThisWillHelpResearch:
# 557 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Thanks, {PLAYER}{KUN}!\n"
# 558 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "This will help our research a lot!$"
