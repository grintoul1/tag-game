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
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 13 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 14 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 15 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 17 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 2, LavaridgeTown_EventScript_CheckSetRivalPos
# 18 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 2, LavaridgeTown_EventScript_HideMapNamePopup
# 19 "data/maps/LavaridgeTown/scripts.pory"
	end
# 20 "data/maps/LavaridgeTown/scripts.pory"

# 21 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 22 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 23 "data/maps/LavaridgeTown/scripts.pory"
	return
# 24 "data/maps/LavaridgeTown/scripts.pory"

# 25 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 26 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 27 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 28 "data/maps/LavaridgeTown/scripts.pory"
	return
# 29 "data/maps/LavaridgeTown/scripts.pory"

# 30 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 31 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 11, 9
# 32 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
# 33 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 35 "data/maps/LavaridgeTown/scripts.pory"
	return
# 36 "data/maps/LavaridgeTown/scripts.pory"

# 37 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 38 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 39 "data/maps/LavaridgeTown/scripts.pory"
	return
# 40 "data/maps/LavaridgeTown/scripts.pory"

# 41 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 42 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 43 "data/maps/LavaridgeTown/scripts.pory"
	return
# 44 "data/maps/LavaridgeTown/scripts.pory"

# 45 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 46 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 47 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 2, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 48 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 49 "data/maps/LavaridgeTown/scripts.pory"

# 50 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 51 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 52 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 53 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 54 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 55 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 56 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 57 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 58 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 59 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 60 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 61 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 62 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
# 63 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 64 "data/maps/LavaridgeTown/scripts.pory"
	end
# 65 "data/maps/LavaridgeTown/scripts.pory"

# 66 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 67 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 68 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 69 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 70 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 71 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 72 "data/maps/LavaridgeTown/scripts.pory"
	end
# 73 "data/maps/LavaridgeTown/scripts.pory"

# 74 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 75 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 76 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 77 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 78 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 79 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 80 "data/maps/LavaridgeTown/scripts.pory"
	end
# 81 "data/maps/LavaridgeTown/scripts.pory"

# 82 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 83 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 84 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 85 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 86 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 87 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 88 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 89 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 90 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 91 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 92 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE
# 93 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 94 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 95 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 96 "data/maps/LavaridgeTown/scripts.pory"
	end
# 97 "data/maps/LavaridgeTown/scripts.pory"

# 98 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 99 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 100 "data/maps/LavaridgeTown/scripts.pory"
	return
# 101 "data/maps/LavaridgeTown/scripts.pory"

# 102 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 103 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 104 "data/maps/LavaridgeTown/scripts.pory"
	return
# 105 "data/maps/LavaridgeTown/scripts.pory"

# 106 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 107 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 108 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 109 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 110 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 111 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 112 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 113 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 114 "data/maps/LavaridgeTown/scripts.pory"
	return
# 115 "data/maps/LavaridgeTown/scripts.pory"

# 116 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 117 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 118 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 119 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 120 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 121 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 122 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 123 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 124 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 125 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 126 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 127 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 128 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 129 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 130 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 131 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 132 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 133 "data/maps/LavaridgeTown/scripts.pory"
	return
# 134 "data/maps/LavaridgeTown/scripts.pory"

# 135 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 136 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 137 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 138 "data/maps/LavaridgeTown/scripts.pory"
	return
# 139 "data/maps/LavaridgeTown/scripts.pory"

# 140 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 141 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 142 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/LavaridgeTown/scripts.pory"
	return
# 144 "data/maps/LavaridgeTown/scripts.pory"

# 145 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 146 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 147 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 148 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/LavaridgeTown/scripts.pory"
	return
# 150 "data/maps/LavaridgeTown/scripts.pory"

# 151 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 152 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 153 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 154 "data/maps/LavaridgeTown/scripts.pory"
	return
# 155 "data/maps/LavaridgeTown/scripts.pory"

# 156 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 157 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 158 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 159 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 160 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 161 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 162 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 163 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 164 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 165 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 166 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 167 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 168 "data/maps/LavaridgeTown/scripts.pory"

# 169 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 170 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 171 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 172 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 173 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 174 "data/maps/LavaridgeTown/scripts.pory"

# 175 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 176 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 177 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 178 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 179 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 180 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 181 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 182 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 183 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 184 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 185 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 186 "data/maps/LavaridgeTown/scripts.pory"

# 187 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 188 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 189 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 190 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 191 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 192 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 193 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 194 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 195 "data/maps/LavaridgeTown/scripts.pory"

# 196 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 197 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 198 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 199 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 200 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 201 "data/maps/LavaridgeTown/scripts.pory"

# 202 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 203 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 204 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 205 "data/maps/LavaridgeTown/scripts.pory"

# 206 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 207 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 208 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 209 "data/maps/LavaridgeTown/scripts.pory"
	end
# 210 "data/maps/LavaridgeTown/scripts.pory"

# 211 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 212 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 213 "data/maps/LavaridgeTown/scripts.pory"
	end
# 214 "data/maps/LavaridgeTown/scripts.pory"

# 215 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 216 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 217 "data/maps/LavaridgeTown/scripts.pory"
	end
# 218 "data/maps/LavaridgeTown/scripts.pory"

# 219 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 220 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 221 "data/maps/LavaridgeTown/scripts.pory"
	end
# 222 "data/maps/LavaridgeTown/scripts.pory"

# 223 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 224 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 225 "data/maps/LavaridgeTown/scripts.pory"
	end
# 226 "data/maps/LavaridgeTown/scripts.pory"

# 227 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 228 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 229 "data/maps/LavaridgeTown/scripts.pory"
	end
# 230 "data/maps/LavaridgeTown/scripts.pory"

# 231 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 232 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 233 "data/maps/LavaridgeTown/scripts.pory"
	end
# 234 "data/maps/LavaridgeTown/scripts.pory"

# 235 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 236 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 237 "data/maps/LavaridgeTown/scripts.pory"
	end
# 238 "data/maps/LavaridgeTown/scripts.pory"

# 239 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman::
# 240 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 241 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 242 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_ReceivedEgg
# 243 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 244 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
# 245 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 246 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
# 247 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 248 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 249 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 250 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 251 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 252 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 253 "data/maps/LavaridgeTown/scripts.pory"
	release
# 254 "data/maps/LavaridgeTown/scripts.pory"
	end
# 255 "data/maps/LavaridgeTown/scripts.pory"

# 256 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ReceivedEgg::
# 257 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 258 "data/maps/LavaridgeTown/scripts.pory"
	release
# 259 "data/maps/LavaridgeTown/scripts.pory"
	end
# 260 "data/maps/LavaridgeTown/scripts.pory"

# 261 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_NoRoomForEgg::
# 262 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 263 "data/maps/LavaridgeTown/scripts.pory"
	release
# 264 "data/maps/LavaridgeTown/scripts.pory"
	end
# 265 "data/maps/LavaridgeTown/scripts.pory"

# 266 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_DeclineEgg::
# 267 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 268 "data/maps/LavaridgeTown/scripts.pory"
	release
# 269 "data/maps/LavaridgeTown/scripts.pory"
	end
# 270 "data/maps/LavaridgeTown/scripts.pory"

# 271 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 272 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 273 "data/maps/LavaridgeTown/scripts.pory"
	end
# 274 "data/maps/LavaridgeTown/scripts.pory"

# 275 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 276 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 277 "data/maps/LavaridgeTown/scripts.pory"
	end
# 278 "data/maps/LavaridgeTown/scripts.pory"

# 279 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 280 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 281 "data/maps/LavaridgeTown/scripts.pory"
	end
# 282 "data/maps/LavaridgeTown/scripts.pory"

# 283 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 284 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}! Long time no see!\p"
# 285 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 286 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the LAVARIDGE GYM BADGE.\p"
# 287 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 288 "data/maps/LavaridgeTown/scripts.pory"
	.string "good POKéMON…\l"
# 289 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 290 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 291 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 292 "data/maps/LavaridgeTown/scripts.pory"

# 293 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 294 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: With those GO-GOGGLES, you'll\n"
# 295 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting through the\l"
# 296 "data/maps/LavaridgeTown/scripts.pory"
	.string "desert near ROUTE 111.\p"
# 297 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 298 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging GYMS…\p"
# 299 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 300 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 301 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 302 "data/maps/LavaridgeTown/scripts.pory"
	.string "your dad in PETALBURG GYM.\p"
# 303 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 304 "data/maps/LavaridgeTown/scripts.pory"

# 305 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 306 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: {PLAYER}, hey, it's been a while.\n"
# 307 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 308 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 309 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of BADGES.\p"
# 310 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 311 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 312 "data/maps/LavaridgeTown/scripts.pory"

# 313 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 314 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: Keep those with you if you're\n"
# 315 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that desert near\l"
# 316 "data/maps/LavaridgeTown/scripts.pory"
	.string "ROUTE 111.\p"
# 317 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some POKéMON that\n"
# 318 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively desert-dwellers.\l"
# 319 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 320 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 321 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering challenging NORMAN,\l"
# 322 "data/maps/LavaridgeTown/scripts.pory"
	.string "the GYM LEADER of PETALBURG.\p"
# 323 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
# 324 "data/maps/LavaridgeTown/scripts.pory"
	.string "he really is tough.\p"
# 325 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 326 "data/maps/LavaridgeTown/scripts.pory"

# 327 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 328 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an EGG.\p"
# 329 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 330 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 331 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 332 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 333 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with POKéMON and\l"
# 334 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 335 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a TRAINER, yes?\n"
# 336 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your POKéMON radiate vitality.\p"
# 337 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 338 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this EGG to hatch?$"
# 339 "data/maps/LavaridgeTown/scripts.pory"

# 340 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 341 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 342 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here EGG!$"
# 343 "data/maps/LavaridgeTown/scripts.pory"

# 344 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 345 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the EGG.$"
# 346 "data/maps/LavaridgeTown/scripts.pory"

# 347 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 348 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many POKéMON.\n"
# 349 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this EGG…$"
# 350 "data/maps/LavaridgeTown/scripts.pory"

# 351 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 352 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 353 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 354 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this EGG, I will be here.$"
# 355 "data/maps/LavaridgeTown/scripts.pory"

# 356 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 357 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an EGG will be found at\n"
# 358 "data/maps/LavaridgeTown/scripts.pory"
	.string "the POKéMON DAY CARE.\p"
# 359 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 360 "data/maps/LavaridgeTown/scripts.pory"

# 361 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 362 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 363 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 364 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 365 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 366 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 367 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 368 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 369 "data/maps/LavaridgeTown/scripts.pory"

# 370 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 371 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 372 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 373 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 374 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 375 "data/maps/LavaridgeTown/scripts.pory"
	.string "A POKéMON nipped my backside!$"
# 376 "data/maps/LavaridgeTown/scripts.pory"

# 377 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 378 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 379 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 380 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 381 "data/maps/LavaridgeTown/scripts.pory"

# 382 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 383 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 384 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 385 "data/maps/LavaridgeTown/scripts.pory"
	.string "GYM LEADER like FLANNERY.$"
# 386 "data/maps/LavaridgeTown/scripts.pory"

# 387 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 388 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put POKéMON in hot springs,\n"
# 389 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 390 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 391 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 392 "data/maps/LavaridgeTown/scripts.pory"

# 393 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 394 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 395 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 396 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 397 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 398 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 399 "data/maps/LavaridgeTown/scripts.pory"

# 400 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 401 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN\p"
# 402 "data/maps/LavaridgeTown/scripts.pory"
	.string "“POKéMON CENTER HOT SPRINGS\n"
# 403 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 404 "data/maps/LavaridgeTown/scripts.pory"

# 405 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 406 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\n"
# 407 "data/maps/LavaridgeTown/scripts.pory"
	.string "LEADER: FLANNERY\l"
# 408 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 409 "data/maps/LavaridgeTown/scripts.pory"

# 410 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 411 "data/maps/LavaridgeTown/scripts.pory"
	.string "POKéMON HERB SHOP\n"
# 412 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"
