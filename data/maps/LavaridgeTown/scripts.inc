# 1 "data/maps/LavaridgeTown/scripts.pory"

# 2 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 7
# 3 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL, 8
# 4 "data/maps/LavaridgeTown/scripts.pory"

# 5 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 6 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 7 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 8 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 9 "data/maps/LavaridgeTown/scripts.pory"

# 10 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 11 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 12 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 13 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 14 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 15 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 16 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 17 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 18 "data/maps/LavaridgeTown/scripts.pory"
	end
# 19 "data/maps/LavaridgeTown/scripts.pory"

# 20 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 21 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 22 "data/maps/LavaridgeTown/scripts.pory"
	return
# 23 "data/maps/LavaridgeTown/scripts.pory"

# 24 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 25 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 26 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 27 "data/maps/LavaridgeTown/scripts.pory"
	return
# 28 "data/maps/LavaridgeTown/scripts.pory"

# 29 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 30 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 11, 9
# 31 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
# 32 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 33 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 34 "data/maps/LavaridgeTown/scripts.pory"
	return
# 35 "data/maps/LavaridgeTown/scripts.pory"

# 36 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 37 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 38 "data/maps/LavaridgeTown/scripts.pory"
	return
# 39 "data/maps/LavaridgeTown/scripts.pory"

# 40 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 41 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 42 "data/maps/LavaridgeTown/scripts.pory"
	return
# 43 "data/maps/LavaridgeTown/scripts.pory"

# 44 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 45 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 28, LavaridgeTown_EventScript_ProgressEmmieState
# 46 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 30, LavaridgeTown_EventScript_ProgressEmmieState
# 47 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 43, LavaridgeTown_EventScript_ProgressEmmieStateReturnMagmaHideout
# 48 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 44, LavaridgeTown_EventScript_ProgressEmmieStateReturnMagmaHideout
# 49 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 50 "data/maps/LavaridgeTown/scripts.pory"

# 51 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ProgressEmmieStateReturnMagmaHideout::
# 52 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 42
# 53 "data/maps/LavaridgeTown/scripts.pory"
	return
# 54 "data/maps/LavaridgeTown/scripts.pory"

# 55 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ProgressEmmieState::
# 56 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 29
# 57 "data/maps/LavaridgeTown/scripts.pory"
	return
# 58 "data/maps/LavaridgeTown/scripts.pory"

# 59 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 60 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 61 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 62 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 63 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 64 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 65 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 66 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 67 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 68 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 69 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 70 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 71 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
# 72 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 73 "data/maps/LavaridgeTown/scripts.pory"
	end
# 74 "data/maps/LavaridgeTown/scripts.pory"

# 75 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 76 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 77 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 78 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 79 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 80 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 81 "data/maps/LavaridgeTown/scripts.pory"
	end
# 82 "data/maps/LavaridgeTown/scripts.pory"

# 83 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 84 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 85 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 86 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 87 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 88 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 89 "data/maps/LavaridgeTown/scripts.pory"
	end
# 90 "data/maps/LavaridgeTown/scripts.pory"

# 91 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 92 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 93 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 94 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 95 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 96 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 97 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 98 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 99 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 100 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 101 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE
# 102 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 103 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 104 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 105 "data/maps/LavaridgeTown/scripts.pory"
	end
# 106 "data/maps/LavaridgeTown/scripts.pory"

# 107 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 108 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 109 "data/maps/LavaridgeTown/scripts.pory"
	return
# 110 "data/maps/LavaridgeTown/scripts.pory"

# 111 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 112 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 113 "data/maps/LavaridgeTown/scripts.pory"
	return
# 114 "data/maps/LavaridgeTown/scripts.pory"

# 115 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 116 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 117 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 118 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 119 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 120 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 121 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 122 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/LavaridgeTown/scripts.pory"
	return
# 124 "data/maps/LavaridgeTown/scripts.pory"

# 125 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 126 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 127 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 128 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 129 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 130 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 131 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 132 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 133 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 134 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 135 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 136 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 137 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 138 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 139 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 140 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 141 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/LavaridgeTown/scripts.pory"
	return
# 143 "data/maps/LavaridgeTown/scripts.pory"

# 144 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 145 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 146 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/LavaridgeTown/scripts.pory"
	return
# 148 "data/maps/LavaridgeTown/scripts.pory"

# 149 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 150 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 151 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 152 "data/maps/LavaridgeTown/scripts.pory"
	return
# 153 "data/maps/LavaridgeTown/scripts.pory"

# 154 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 155 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 156 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 157 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/LavaridgeTown/scripts.pory"
	return
# 159 "data/maps/LavaridgeTown/scripts.pory"

# 160 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 161 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 162 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/LavaridgeTown/scripts.pory"
	return
# 164 "data/maps/LavaridgeTown/scripts.pory"

# 165 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 166 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 167 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 168 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 169 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 170 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 171 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 172 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 173 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 174 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 175 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 176 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 177 "data/maps/LavaridgeTown/scripts.pory"

# 178 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 179 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 180 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 181 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 182 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 183 "data/maps/LavaridgeTown/scripts.pory"

# 184 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 185 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 186 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 187 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 188 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 189 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 190 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 191 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 192 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 193 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 194 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 195 "data/maps/LavaridgeTown/scripts.pory"

# 196 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 197 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 198 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 199 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 200 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 201 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 202 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 203 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 204 "data/maps/LavaridgeTown/scripts.pory"

# 205 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 206 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 207 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 208 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 209 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 210 "data/maps/LavaridgeTown/scripts.pory"

# 211 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 212 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 213 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 214 "data/maps/LavaridgeTown/scripts.pory"

# 215 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 216 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 217 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 218 "data/maps/LavaridgeTown/scripts.pory"
	end
# 219 "data/maps/LavaridgeTown/scripts.pory"

# 220 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 221 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 222 "data/maps/LavaridgeTown/scripts.pory"
	end
# 223 "data/maps/LavaridgeTown/scripts.pory"

# 224 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 225 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 226 "data/maps/LavaridgeTown/scripts.pory"
	end
# 227 "data/maps/LavaridgeTown/scripts.pory"

# 228 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 229 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 230 "data/maps/LavaridgeTown/scripts.pory"
	end
# 231 "data/maps/LavaridgeTown/scripts.pory"

# 232 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 233 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 234 "data/maps/LavaridgeTown/scripts.pory"
	end
# 235 "data/maps/LavaridgeTown/scripts.pory"

# 236 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 237 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 238 "data/maps/LavaridgeTown/scripts.pory"
	end
# 239 "data/maps/LavaridgeTown/scripts.pory"

# 240 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 241 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 242 "data/maps/LavaridgeTown/scripts.pory"
	end
# 243 "data/maps/LavaridgeTown/scripts.pory"

# 244 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 245 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 246 "data/maps/LavaridgeTown/scripts.pory"
	end
# 247 "data/maps/LavaridgeTown/scripts.pory"

# 248 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman::
# 249 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 250 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 251 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_ReceivedEgg
# 252 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 253 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
# 254 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 255 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
# 256 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 257 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 258 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 259 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 260 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 261 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 262 "data/maps/LavaridgeTown/scripts.pory"
	release
# 263 "data/maps/LavaridgeTown/scripts.pory"
	end
# 264 "data/maps/LavaridgeTown/scripts.pory"

# 265 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ReceivedEgg::
# 266 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 267 "data/maps/LavaridgeTown/scripts.pory"
	release
# 268 "data/maps/LavaridgeTown/scripts.pory"
	end
# 269 "data/maps/LavaridgeTown/scripts.pory"

# 270 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_NoRoomForEgg::
# 271 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 272 "data/maps/LavaridgeTown/scripts.pory"
	release
# 273 "data/maps/LavaridgeTown/scripts.pory"
	end
# 274 "data/maps/LavaridgeTown/scripts.pory"

# 275 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_DeclineEgg::
# 276 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 277 "data/maps/LavaridgeTown/scripts.pory"
	release
# 278 "data/maps/LavaridgeTown/scripts.pory"
	end
# 279 "data/maps/LavaridgeTown/scripts.pory"

# 280 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 281 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 282 "data/maps/LavaridgeTown/scripts.pory"
	end
# 283 "data/maps/LavaridgeTown/scripts.pory"

# 284 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 285 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 286 "data/maps/LavaridgeTown/scripts.pory"
	end
# 287 "data/maps/LavaridgeTown/scripts.pory"

# 288 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 289 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 290 "data/maps/LavaridgeTown/scripts.pory"
	end
# 291 "data/maps/LavaridgeTown/scripts.pory"

# 292 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 293 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}! Long time no see!\p"
# 294 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 295 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the LAVARIDGE GYM BADGE.\p"
# 296 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 297 "data/maps/LavaridgeTown/scripts.pory"
	.string "good POKéMON…\l"
# 298 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 299 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 300 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 301 "data/maps/LavaridgeTown/scripts.pory"

# 302 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 303 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: With those GO-GOGGLES, you'll\n"
# 304 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting through the\l"
# 305 "data/maps/LavaridgeTown/scripts.pory"
	.string "desert near ROUTE 111.\p"
# 306 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 307 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging GYMS…\p"
# 308 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 309 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 310 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 311 "data/maps/LavaridgeTown/scripts.pory"
	.string "your dad in PETALBURG GYM.\p"
# 312 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 313 "data/maps/LavaridgeTown/scripts.pory"

# 314 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 315 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: {PLAYER}, hey, it's been a while.\n"
# 316 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 317 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 318 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of BADGES.\p"
# 319 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 320 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 321 "data/maps/LavaridgeTown/scripts.pory"

# 322 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 323 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: Keep those with you if you're\n"
# 324 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that desert near\l"
# 325 "data/maps/LavaridgeTown/scripts.pory"
	.string "ROUTE 111.\p"
# 326 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some POKéMON that\n"
# 327 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively desert-dwellers.\l"
# 328 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 329 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 330 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering challenging NORMAN,\l"
# 331 "data/maps/LavaridgeTown/scripts.pory"
	.string "the GYM LEADER of PETALBURG.\p"
# 332 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
# 333 "data/maps/LavaridgeTown/scripts.pory"
	.string "he really is tough.\p"
# 334 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 335 "data/maps/LavaridgeTown/scripts.pory"

# 336 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 337 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an EGG.\p"
# 338 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 339 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 340 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 341 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 342 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with POKéMON and\l"
# 343 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 344 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a TRAINER, yes?\n"
# 345 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your POKéMON radiate vitality.\p"
# 346 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 347 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this EGG to hatch?$"
# 348 "data/maps/LavaridgeTown/scripts.pory"

# 349 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 350 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 351 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here EGG!$"
# 352 "data/maps/LavaridgeTown/scripts.pory"

# 353 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 354 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the EGG.$"
# 355 "data/maps/LavaridgeTown/scripts.pory"

# 356 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 357 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many POKéMON.\n"
# 358 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this EGG…$"
# 359 "data/maps/LavaridgeTown/scripts.pory"

# 360 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 361 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 362 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 363 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this EGG, I will be here.$"
# 364 "data/maps/LavaridgeTown/scripts.pory"

# 365 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 366 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an EGG will be found at\n"
# 367 "data/maps/LavaridgeTown/scripts.pory"
	.string "the POKéMON DAY CARE.\p"
# 368 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 369 "data/maps/LavaridgeTown/scripts.pory"

# 370 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 371 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 372 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 373 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 374 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 375 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 376 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 377 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 378 "data/maps/LavaridgeTown/scripts.pory"

# 379 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 380 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 381 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 382 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 383 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 384 "data/maps/LavaridgeTown/scripts.pory"
	.string "A POKéMON nipped my backside!$"
# 385 "data/maps/LavaridgeTown/scripts.pory"

# 386 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 387 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 388 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 389 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 390 "data/maps/LavaridgeTown/scripts.pory"

# 391 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 392 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 393 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 394 "data/maps/LavaridgeTown/scripts.pory"
	.string "GYM LEADER like FLANNERY.$"
# 395 "data/maps/LavaridgeTown/scripts.pory"

# 396 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 397 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put POKéMON in hot springs,\n"
# 398 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 399 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 400 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 401 "data/maps/LavaridgeTown/scripts.pory"

# 402 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 403 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 404 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 405 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 406 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 407 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 408 "data/maps/LavaridgeTown/scripts.pory"

# 409 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 410 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN\p"
# 411 "data/maps/LavaridgeTown/scripts.pory"
	.string "“POKéMON CENTER HOT SPRINGS\n"
# 412 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 413 "data/maps/LavaridgeTown/scripts.pory"

# 414 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 415 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\n"
# 416 "data/maps/LavaridgeTown/scripts.pory"
	.string "Leader: FLANNERY\l"
# 417 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 418 "data/maps/LavaridgeTown/scripts.pory"

# 419 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 420 "data/maps/LavaridgeTown/scripts.pory"
	.string "POKéMON HERB SHOP\n"
# 421 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"
