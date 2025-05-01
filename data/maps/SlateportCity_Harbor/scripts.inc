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
	waitmovement 0
# 54 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 55 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"

# 57 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene::
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 59 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 60 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterRight
# 62 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 63 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 64 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove, MSGBOX_DEFAULT
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 66 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_GRUNT, SlateportCity_Harbor_Movement_AquaBoardSub
# 67 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_Harbor_Movement_AquaBoardSub
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SUBMARINE, SlateportCity_Harbor_Movement_SubmarineExit
# 69 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 70 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_GRUNT
# 71 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_ARCHIE
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SUBMARINE
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 75 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_MET_TEAM_AQUA_HARBOR
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
# 79 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 80 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 0, SlateportCity_Harbor_EventScript_SternApproachPlayer0
# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 1, SlateportCity_Harbor_EventScript_SternApproachPlayer1
# 82 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 2, SlateportCity_Harbor_EventScript_SternApproachPlayer
# 83 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 3, SlateportCity_Harbor_EventScript_SternApproachPlayer
# 84 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 86 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 87 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
# 88 "data/maps/SlateportCity_Harbor/scripts.pory"
	copyobjectxytoperm LOCALID_CAPT_STERN
# 89 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_RIGHT
# 90 "data/maps/SlateportCity_Harbor/scripts.pory"
	releaseall
# 91 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 92 "data/maps/SlateportCity_Harbor/scripts.pory"

# 93 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer0::
# 94 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer0
# 95 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 96 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 97 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 98 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 99 "data/maps/SlateportCity_Harbor/scripts.pory"

# 100 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer1::
# 101 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer1
# 102 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 103 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 104 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 105 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 106 "data/maps/SlateportCity_Harbor/scripts.pory"

# 107 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer::
# 108 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer
# 109 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 110 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 111 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 113 "data/maps/SlateportCity_Harbor/scripts.pory"

# 114 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_AquaBoardSub:
# 115 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 116 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 117 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 118 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 119 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"

# 121 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused, Archie instead shares above identical movement script with Grunt
# 122 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_ArchieBoardSub:
# 123 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 124 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 125 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 126 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 127 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 128 "data/maps/SlateportCity_Harbor/scripts.pory"

# 129 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SubmarineExit:
# 130 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 131 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 132 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 133 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 134 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 135 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 136 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 137 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 138 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 139 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 140 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 141 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 142 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 143 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 144 "data/maps/SlateportCity_Harbor/scripts.pory"

# 145 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer0:
# 146 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 147 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 148 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 149 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 150 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 151 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 152 "data/maps/SlateportCity_Harbor/scripts.pory"

# 153 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer1:
# 154 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 155 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 156 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 157 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 158 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 159 "data/maps/SlateportCity_Harbor/scripts.pory"

# 160 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer:
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 162 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 164 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 165 "data/maps/SlateportCity_Harbor/scripts.pory"

# 166 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_PlayerWalkUp:
# 167 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 168 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 169 "data/maps/SlateportCity_Harbor/scripts.pory"

# 170 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryAttendant::
# 171 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 172 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 173 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_AskForTicket
# 174 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FerryServiceUnavailable, MSGBOX_DEFAULT
# 175 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 177 "data/maps/SlateportCity_Harbor/scripts.pory"

# 178 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskForTicket::
# 179 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 180 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_FlashedTicketWhereTo
# 181 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 182 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 183 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 184 "data/maps/SlateportCity_Harbor/scripts.pory"

# 185 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination::
# 186 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_ON_SS_TIDAL, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier
# 187 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 18, 8, MULTI_SSTIDAL_SLATEPORT_NO_BF, 2, FALSE
# 188 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 189 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 190 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 191 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 193 "data/maps/SlateportCity_Harbor/scripts.pory"

# 194 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier::
# 195 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 17, 6, MULTI_SSTIDAL_SLATEPORT_WITH_BF, 2, FALSE
# 196 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 197 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 198 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_BattleFrontier
# 199 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 201 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 202 "data/maps/SlateportCity_Harbor/scripts.pory"

# 203 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused. Should be impossible for player to reach Ferry without having received SS Tidal ticket
# 204 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NoTicket::
# 205 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_YouMustHaveTicket, MSGBOX_DEFAULT
# 206 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 207 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 208 "data/maps/SlateportCity_Harbor/scripts.pory"

# 209 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Lilycove::
# 210 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LilycoveItIs, MSGBOX_YESNO
# 211 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 212 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT
# 213 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 214 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 215 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 217 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 218 "data/maps/SlateportCity_Harbor/scripts.pory"

# 219 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BattleFrontier::
# 220 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 221 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 223 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 224 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 225 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 226 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 227 "data/maps/SlateportCity_Harbor/scripts.pory"

# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseNewDestination::
# 229 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhereWouldYouLikeToGo
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 231 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 233 "data/maps/SlateportCity_Harbor/scripts.pory"

# 234 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry::
# 235 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 237 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 238 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 239 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_SLATEPORT_CITY_HARBOR
# 241 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SlateportCity_Harbor_EventScript_BoardFerryNorth
# 242 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_Harbor_EventScript_BoardFerryEast
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 244 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 245 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 246 "data/maps/SlateportCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 247 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 248 "data/maps/SlateportCity_Harbor/scripts.pory"

# 249 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CancelDestinationSelect::
# 250 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 252 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 253 "data/maps/SlateportCity_Harbor/scripts.pory"

# 254 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryEast::
# 255 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryEast
# 256 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 257 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 258 "data/maps/SlateportCity_Harbor/scripts.pory"

# 259 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryNorth::
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryNorth
# 261 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 263 "data/maps/SlateportCity_Harbor/scripts.pory"

# 264 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryEast:
# 265 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 266 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 267 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"

# 269 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryNorth:
# 270 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 271 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 272 "data/maps/SlateportCity_Harbor/scripts.pory"

# 273 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor::
# 274 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 275 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 276 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather
# 277 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 278 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 279 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 280 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_0x8004, 2, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather  @ Defeated both
# 281 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_AbnormalWeather, MSGBOX_DEFAULT
# 282 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 283 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 284 "data/maps/SlateportCity_Harbor/scripts.pory"

# 285 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather::
# 286 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday, MSGBOX_DEFAULT
# 287 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 288 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 289 "data/maps/SlateportCity_Harbor/scripts.pory"

# 290 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CountDefeatedLegendary::
# 291 "data/maps/SlateportCity_Harbor/scripts.pory"
	addvar VAR_0x8004, 1
# 292 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 293 "data/maps/SlateportCity_Harbor/scripts.pory"

# 294 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FatMan::
# 295 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SubTooSmallForMe, MSGBOX_NPC
# 296 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 297 "data/maps/SlateportCity_Harbor/scripts.pory"

# 298 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern::
# 299 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 300 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 301 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment
# 302 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE, SlateportCity_Harbor_EventScript_NeedDive
# 303 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive
# 304 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_SLATEPORT_HARBOR_STATE, 2, SlateportCity_Harbor_EventScript_WhyStealSubmarine
# 305 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum, MSGBOX_DEFAULT
# 306 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 307 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 308 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 309 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 310 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 311 "data/maps/SlateportCity_Harbor/scripts.pory"

# 312 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_WhyStealSubmarine::
# 313 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 314 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 315 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 316 "data/maps/SlateportCity_Harbor/scripts.pory"

# 317 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive::
# 318 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE
# 319 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TeamAquaLeftNeedDive, MSGBOX_DEFAULT
# 320 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 321 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 322 "data/maps/SlateportCity_Harbor/scripts.pory"

# 323 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NeedDive::
# 324 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_NeedDiveToCatchSub, MSGBOX_DEFAULT
# 325 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 326 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 327 "data/maps/SlateportCity_Harbor/scripts.pory"

# 328 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment::
# 329 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, SlateportCity_Harbor_EventScript_TradedScanner
# 330 "data/maps/SlateportCity_Harbor/scripts.pory"
	checkitem ITEM_SCANNER
# 331 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_Harbor_EventScript_AskToTradeScanner
# 332 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_FerryFinished
# 333 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry, MSGBOX_DEFAULT
# 334 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 335 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 336 "data/maps/SlateportCity_Harbor/scripts.pory"

# 337 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryFinished::
# 338 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FinishedMakingFerry, MSGBOX_DEFAULT
# 339 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 340 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 341 "data/maps/SlateportCity_Harbor/scripts.pory"

# 342 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskToTradeScanner::
# 343 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WouldYouTradeScanner
# 344 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 345 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 346 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 347 "data/maps/SlateportCity_Harbor/scripts.pory"

# 348 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade::
# 349 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoice 0, 0, MULTI_STERN_DEEPSEA, FALSE
# 350 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 351 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_DeepSeaTooth
# 352 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_DeepSeaScale
# 353 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_DeclineTrade
# 354 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_DeclineTrade
# 355 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 356 "data/maps/SlateportCity_Harbor/scripts.pory"

# 357 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaTooth::
# 358 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaTooth, MSGBOX_YESNO
# 359 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 360 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH
# 361 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 362 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 363 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 364 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 365 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 366 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 367 "data/maps/SlateportCity_Harbor/scripts.pory"

# 368 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaScale::
# 369 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaScale, MSGBOX_YESNO
# 370 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 371 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
# 372 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 373 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 374 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 375 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 376 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 377 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 378 "data/maps/SlateportCity_Harbor/scripts.pory"

# 379 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeclineTrade::
# 380 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow, MSGBOX_DEFAULT
# 381 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 382 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 383 "data/maps/SlateportCity_Harbor/scripts.pory"

# 384 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDifferentTrade::
# 385 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhichOneDoYouWant
# 386 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 387 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 388 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 389 "data/maps/SlateportCity_Harbor/scripts.pory"

# 390 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TradedScanner::
# 391 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 392 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ThisWillHelpResearch, MSGBOX_DEFAULT
# 393 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 394 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 395 "data/maps/SlateportCity_Harbor/scripts.pory"

# 396 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FerryServiceUnavailable:
# 397 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
# 398 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're looking for a ship?\p"
# 399 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm sorry, the ferry service isn't\n"
# 400 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "available at present…$"
# 401 "data/maps/SlateportCity_Harbor/scripts.pory"

# 402 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_MayISeeYourTicket:
# 403 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 404 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "May I see your TICKET?$"
# 405 "data/maps/SlateportCity_Harbor/scripts.pory"

# 406 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_YouMustHaveTicket:
# 407 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 408 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 409 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You must have a TICKET to board\n"
# 410 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 411 "data/maps/SlateportCity_Harbor/scripts.pory"

# 412 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FlashedTicketWhereTo:
# 413 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 414 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 415 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 416 "data/maps/SlateportCity_Harbor/scripts.pory"

# 417 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SailAnotherTime:
# 418 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 419 "data/maps/SlateportCity_Harbor/scripts.pory"

# 420 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LilycoveItIs:
# 421 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 422 "data/maps/SlateportCity_Harbor/scripts.pory"

# 423 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_BattleFrontierItIs:
# 424 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"
# 425 "data/maps/SlateportCity_Harbor/scripts.pory"

# 426 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_PleaseBoardFerry:
# 427 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 428 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "departure.$"
# 429 "data/maps/SlateportCity_Harbor/scripts.pory"

# 430 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhereWouldYouLikeToGo:
# 431 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 432 "data/maps/SlateportCity_Harbor/scripts.pory"

# 433 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday:
# 434 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A journey to the bottom of the sea…\n"
# 435 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wonder what it'd be like?\p"
# 436 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'd love to go deep underwater like\n"
# 437 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that someday.$"
# 438 "data/maps/SlateportCity_Harbor/scripts.pory"

# 439 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_AbnormalWeather:
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "For a ship to sail safely, we need to\n"
# 441 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "know about the weather!\p"
# 442 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Speaking of weather, I heard something\n"
# 443 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "from a guy at the WEATHER INSTITUTE.\p"
# 444 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "He was saying abnormal weather has\n"
# 445 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "been reported all over the place!\p"
# 446 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You should visit the WEATHER INSTITUTE\n"
# 447 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "and ask around!$"
# 448 "data/maps/SlateportCity_Harbor/scripts.pory"

# 449 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SubTooSmallForMe:
# 450 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wanted to go with CAPT. STERN on\n"
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ocean floor exploration.\p"
# 452 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But the sub's too small for me.\p"
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "If I squeezed in, there wouldn't be\n"
# 454 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "any room for the CAPTAIN…$"
# 455 "data/maps/SlateportCity_Harbor/scripts.pory"

# 456 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum:
# 457 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Those thugs…\n"
# 458 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They're stealing the submarine!$"
# 459 "data/maps/SlateportCity_Harbor/scripts.pory"

# 460 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove:
# 461 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "ARCHIE: I'm afraid you're too late!\p"
# 462 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We're taking this submarine back to\n"
# 463 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "our Hideout in Lilycove City.\p"
# 464 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We are only doing this to safeguard\n"
# 465 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "against Team Magma's plans.\p"
# 466 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "One day you will thank us for this.\p"
# 467 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Shelly, Team Aqua have been seen\n"
# 468 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "operating in the north.\p"
# 469 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Investigate their activities and\n"
# 470 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "report back to me with your findings.$"
# 471 "data/maps/SlateportCity_Harbor/scripts.pory"

# 472 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine:
# 473 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Why…\p"
# 474 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Why would Team Aqua steal my\n"
# 475 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "SUBMARINE EXPLORER 1?\p"
# 476 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They can't be after the slumbering\n"
# 477 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Pokémon at the bottom of the sea…\p"
# 478 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But even if I were to chase them,\n"
# 479 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I don't stand a chance against them…$"
# 480 "data/maps/SlateportCity_Harbor/scripts.pory"

# 481 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TeamAquaLeftNeedDive:
# 482 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh, {PLAYER}{KUN}…\p"
# 483 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Okay… So TEAM AQUA left before you\n"
# 484 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "could stop them…\p"
# 485 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Oh, no, don't blame yourself.\n"
# 486 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're not responsible for this.\p"
# 487 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Trying to catch a submarine…\n"
# 488 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's impossible for most people.\p"
# 489 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You would need a POKéMON that knows\n"
# 490 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "how to DIVE…\p"
# 491 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perhaps if you went out to\n"
# 492 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MOSSDEEP CITY…\p"
# 493 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A lot of divers live out there, so\n"
# 494 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "someone might teach you…$"
# 495 "data/maps/SlateportCity_Harbor/scripts.pory"

# 496 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_NeedDiveToCatchSub:
# 497 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Trying to catch a\n"
# 498 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "submarine… It's impossible.\p"
# 499 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You would need a POKéMON that knows\n"
# 500 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "how to DIVE…\p"
# 501 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perhaps if you went out to\n"
# 502 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MOSSDEEP CITY…\p"
# 503 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A lot of divers live out there, so\n"
# 504 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "someone might teach you…$"
# 505 "data/maps/SlateportCity_Harbor/scripts.pory"

# 506 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry:
# 507 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh, yes.\n"
# 508 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MR. BRINEY came to our SHIPYARD.\p"
# 509 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It won't be long now before we finish\n"
# 510 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "making the ferry!$"
# 511 "data/maps/SlateportCity_Harbor/scripts.pory"

# 512 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FinishedMakingFerry:
# 513 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: {PLAYER}{KUN}!\p"
# 514 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We finally finished making the ferry\n"
# 515 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "S.S. TIDAL!\p"
# 516 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We couldn't have done it without\n"
# 517 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your friend MR. BRINEY.\p"
# 518 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please go for a short cruise on it!$"
# 519 "data/maps/SlateportCity_Harbor/scripts.pory"

# 520 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WouldYouTradeScanner:
# 521 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh?\n"
# 522 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, that item you have…\p"
# 523 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "That's a SCANNER! That would sure\n"
# 524 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "help us on our explorations.\p"
# 525 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, would you trade your\n"
# 526 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "SCANNER for something?\p"
# 527 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Like, say, a DEEPSEATOOTH or\n"
# 528 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "a DEEPSEASCALE that I have?$"
# 529 "data/maps/SlateportCity_Harbor/scripts.pory"

# 530 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow:
# 531 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Are you certain?\n"
# 532 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's useless to you, {PLAYER}{KUN}…\p"
# 533 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Well, okay, then. If you want to trade\n"
# 534 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your SCANNER, let me know.$"
# 535 "data/maps/SlateportCity_Harbor/scripts.pory"

# 536 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaTooth:
# 537 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 538 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEATOOTH?$"
# 539 "data/maps/SlateportCity_Harbor/scripts.pory"

# 540 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaScale:
# 541 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 542 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEASCALE?$"
# 543 "data/maps/SlateportCity_Harbor/scripts.pory"

# 544 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhichOneDoYouWant:
# 545 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Which one do you want?$"
# 546 "data/maps/SlateportCity_Harbor/scripts.pory"

# 547 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_HandedScannerToStern:
# 548 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} handed the SCANNER to\n"
# 549 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN.$"
# 550 "data/maps/SlateportCity_Harbor/scripts.pory"

# 551 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ThisWillHelpResearch:
# 552 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Thanks, {PLAYER}{KUN}!\n"
# 553 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "This will help our research a lot!$"
