# 1 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_RIVAL, 2
# 4 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_BIRCH, 3
# 5 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 6 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 7 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 8 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 9 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 10 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 11 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 13 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 7, 12
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_NPC_FOLLOWER, DIR_NORTH
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_EVER_GRANDE_CITY_CHAMPIONS_ROOM
# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp4
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace::
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_AUTOCLOSE
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject LOCALID_CHAMPIONS_ROOM_STEVEN, DIR_NORTH
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceDown
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_EXIT
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_STEVEN
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 8
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, EverGrandeCity_ChampionsRoom_Movement_StevenJoinWallace
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_WatchStevenJoinWallace
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EverGrandeCity_ChampionsRoom_Movement_WatchStevenJoinWallace
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenSpeech, MSGBOX_AUTOCLOSE
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_WallaceStevenDoMultiBattle
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_StevenJoinWallace:
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	face_down
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WatchStevenJoinWallace:
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	face_right
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	face_up
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallaceStevenDoMultiBattle::
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_VICTORY_ROAD, TRUE
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	multi_2p_vs_2 TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat, TRAINER_STEVEN, EverGrandeCity_ChampionsRoom_Text_StevenDefeat, PARTNER_EMMIE
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	switch VAR_RESULT
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	case 1, EverGrandeCity_ChampionsRoom_EventScript_WallaceStevenVictory
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special SetCB2WhiteOut
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_WallaceStevenVictory::
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_AUTOCLOSE
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech MSGBOX_DEFAULT
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_WALLY
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_RIVAL
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallyItsAlreadyOver:
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wally: I told you we wouldn't\n"
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "make it in time.\p"
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But it seems there was nothing\n"
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about after all!$"
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLY, Common_Movement_WalkInPlaceFasterLeft
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallyItsAlreadyOver, MSGBOX_DEFAULT
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLY, Common_Movement_WalkInPlaceFasterLeft
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallyItsAlreadyOver, MSGBOX_DEFAULT
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_BIRCH
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, EverGrandeCity_ChampionsRoom_Movement_StevenExit
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EverGrandeCity_ChampionsRoom_Movement_EmmieExit
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLY, EverGrandeCity_ChampionsRoom_Movement_WallyApproachPlayer
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallyApproachPlayer:
# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_StevenExit:
# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_EmmieExit:
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 342 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 344 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 345 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 346 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 348 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_IntroSpeech:
# 349 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: Welcome, {PLAYER}{KUN}, Emmie.\p"
# 350 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That incident in SOOTOPOLIS CITY…\n"
# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was superb work, putting an end\l"
# 352 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to that crisis all by yourselves.\p"
# 353 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Oops!\p"
# 354 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It wouldn't be fair to say that you\n"
# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "alone ended the crisis.\p"
# 356 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You overcame that difficult situation\n"
# 357 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "by working with your POKéMON.\p"
# 358 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "We TRAINERS raise POKéMON by giving\n"
# 359 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "them items and by teaching them new\l"
# 360 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "techniques for battle.\p"
# 361 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But we ourselves also learn many\n"
# 362 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "things from POKéMON.\p"
# 363 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And this is where your achievements\n"
# 364 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "are put to the test against what\l"
# 365 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "others like you have achieved.\p"
# 366 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now!\p"
# 367 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "As the two of you have challenged\n"
# 368 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the League together, we felt it only\l"
# 369 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "fair that two champions participate.\p"
# 370 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "So, I've enlisted the help of an old\n"
# 371 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "friend.$"
# 372 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 373 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenSpeech:
# 374 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Steven: Hello, {PLAYER}, Emmie.\p"
# 375 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I suppose I never told you that I\n"
# 376 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "was once the champion of Hoenn.\p"
# 377 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "After you helped me at the Mossdeep\n"
# 378 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Space Center, I knew it wouldn't be\l"
# 379 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "long before you made it here.\p"
# 380 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The talent you have displayed is\n"
# 381 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "truly remarkable.\p"
# 382 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could this be the day that we see\n"
# 383 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "a new pair of champions crowned?\p"
# 384 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Or perhaps, will the old guard be the\n"
# 385 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "ones standing victorious in the end?\p"
# 386 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The only way to find out is for you\n"
# 387 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to demonstrate your abilities to us\l"
# 388 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "one final time.\p"
# 389 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Show us right here and now!$"
# 390 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 391 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_Defeat:
# 392 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I, the CHAMPION, fall in defeat…\p"
# 393 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was wonderful work.\n"
# 394 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You were elegant, infuriatingly so.\l"
# 395 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And yet it was utterly glorious!\p"
# 396 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}, Emmie!\p"
# 397 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are truly noble POKéMON\n"
# 398 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "trainers!$"
# 399 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 400 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenDefeat:
# 401 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It has been a long time since I tasted\n"
# 402 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the bitter flavour of defeat.\p"
# 403 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Yet on this occasion it is somewhat\n"
# 404 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "sweet.\p"
# 405 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "A new generation has brought with\n"
# 406 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "it new champions.\p"
# 407 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "As those who came before us once\n"
# 408 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "passed it to us, we now pass the\l"
# 409 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the torch onto you.$"
# 410 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 411 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
# 412 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: The POKéMON you sent into\n"
# 413 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "battle…\p"
# 414 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "At times they danced like a spring\n"
# 415 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "breeze, and at times they struck\l"
# 416 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "like lightning.\p"
# 417 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It was with light, yet surefooted,\n"
# 418 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "elegance that you led your POKéMON.\p"
# 419 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Even I felt bedazzled by your\n"
# 420 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "masterful performance!$"
# 421 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 422 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenPostBattleSpeech:
# 423 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Steven: Indeed, a tremendous display\n"
# 424 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of both strength and teamwork.\p"
# 425 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the glorious peak\n"
# 426 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of the Pokémon League.\p"
# 427 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "We now proclaim you to be the new\n"
# 428 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "HOENN region…$"
# 429 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 430 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice:
# 431 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 432 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 433 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION…$"
# 434 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 435 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver:
# 436 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Huh?\n"
# 437 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 438 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 439 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 440 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?$"
# 441 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 442 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
# 443 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}!\p"
# 444 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 445 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the CHAMPION?…$"
# 446 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 447 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon:
# 448 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}…\p"
# 449 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Are you trying to tell me…\n"
# 450 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You've beaten the CHAMPION?$"
# 451 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 452 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
# 453 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: See?\n"
# 454 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you, {RIVAL}?\p"
# 455 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 456 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 457 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 458 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 459 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 460 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the PETALBURG GYM,\l"
# 461 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 462 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 463 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION!\p"
# 464 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 465 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your POKéDEX?\n"
# 466 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 467 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 468 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
# 469 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: See?\n"
# 470 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you, {RIVAL}?\p"
# 471 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 472 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 473 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 474 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 475 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 476 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the PETALBURG GYM,\l"
# 477 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 478 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 479 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION!\p"
# 480 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Anyways, congratulations!\p"
# 481 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 482 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 483 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe:
# 484 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}, Emmie…\p"
# 485 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 486 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new champions!\p"
# 487 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 488 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 489 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside:
# 490 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: I'm sorry, but…\p"
# 491 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 492 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 493 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside.$"
# 494 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 495 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
# 496 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Groan…\p"
# 497 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 498 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 499 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 500 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 501 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 502 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 503 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 504 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
# 505 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: Whaaaat?! … … … … …\n"
# 506 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 507 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 508 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 509 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
