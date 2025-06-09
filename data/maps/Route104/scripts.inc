# 1 "data/maps/Route104/scripts.pory"

# 2 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 3 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/Route104/scripts.pory"
.set LOCALID_RIVAL, 33
# 5 "data/maps/Route104/scripts.pory"
.set LOCALID_DARIAN, 32
# 6 "data/maps/Route104/scripts.pory"
.set LOCALID_IVAN, 8
# 7 "data/maps/Route104/scripts.pory"
.set LOCALID_HALEY, 34
# 8 "data/maps/Route104/scripts.pory"
.set LOCALID_BILLY, 27
# 9 "data/maps/Route104/scripts.pory"
.set LOCALID_CINDY, 25
# 10 "data/maps/Route104/scripts.pory"
.set LOCALID_WINSTON, 24
# 11 "data/maps/Route104/scripts.pory"
.set LOCALID_GINA, 22
# 12 "data/maps/Route104/scripts.pory"
.set LOCALID_MIA, 23
# 13 "data/maps/Route104/scripts.pory"

# 14 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 15 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 16 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 17 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route104_OnWarp
# 18 "data/maps/Route104/scripts.pory"
	.byte 0
# 19 "data/maps/Route104/scripts.pory"

# 20 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 21 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 22 "data/maps/Route104/scripts.pory"
	.2byte 0
# 23 "data/maps/Route104/scripts.pory"

# 24 "data/maps/Route104/scripts.pory"
Route104_OnWarp:
# 25 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewfordAddEmmie
# 26 "data/maps/Route104/scripts.pory"
	.2byte 0
# 27 "data/maps/Route104/scripts.pory"

# 28 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 29 "data/maps/Route104/scripts.pory"
	lockall
# 30 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 31 "data/maps/Route104/scripts.pory"
	end
# 32 "data/maps/Route104/scripts.pory"

# 33 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 34 "data/maps/Route104/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 35 "data/maps/Route104/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 36 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 37 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 38 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 39 "data/maps/Route104/scripts.pory"
	end
# 40 "data/maps/Route104/scripts.pory"

# 41 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewfordAddEmmie::
# 42 "data/maps/Route104/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 14, 51
# 43 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_ROUTE104
# 44 "data/maps/Route104/scripts.pory"
	end
# 45 "data/maps/Route104/scripts.pory"

# 46 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 47 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 48 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 49 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 50 "data/maps/Route104/scripts.pory"
	return
# 51 "data/maps/Route104/scripts.pory"

# 52 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 53 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 54 "data/maps/Route104/scripts.pory"
	return
# 55 "data/maps/Route104/scripts.pory"

# 56 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 57 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 58 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 59 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 60 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 61 "data/maps/Route104/scripts.pory"
	return
# 62 "data/maps/Route104/scripts.pory"

# 63 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 64 "data/maps/Route104/scripts.pory"
	return
# 65 "data/maps/Route104/scripts.pory"

# 66 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 67 "data/maps/Route104/scripts.pory"
	lockall
# 68 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 69 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 70 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 72 "data/maps/Route104/scripts.pory"

# 73 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 74 "data/maps/Route104/scripts.pory"
	lockall
# 75 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 76 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 77 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 78 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 79 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route104/scripts.pory"
	delay 10
# 81 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL
# 82 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 83 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 84 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 86 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route104/scripts.pory"
	delay 20
# 88 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 89 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 90 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 91 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 92 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 94 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 96 "data/maps/Route104/scripts.pory"

# 97 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 98 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 99 "data/maps/Route104/scripts.pory"
	checkplayergender
# 100 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 101 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 102 "data/maps/Route104/scripts.pory"
	return
# 103 "data/maps/Route104/scripts.pory"

# 104 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 105 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 106 "data/maps/Route104/scripts.pory"
	return
# 107 "data/maps/Route104/scripts.pory"

# 108 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 109 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 110 "data/maps/Route104/scripts.pory"
	return
# 111 "data/maps/Route104/scripts.pory"

# 112 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 113 "data/maps/Route104/scripts.pory"
	checkplayergender
# 114 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 115 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 116 "data/maps/Route104/scripts.pory"
	end
# 117 "data/maps/Route104/scripts.pory"

# 118 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 119 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 120 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 121 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 122 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 123 "data/maps/Route104/scripts.pory"
	closemessage
# 124 "data/maps/Route104/scripts.pory"
	delay 30
# 125 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 126 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 127 "data/maps/Route104/scripts.pory"
	waitfanfare
# 128 "data/maps/Route104/scripts.pory"
	closemessage
# 129 "data/maps/Route104/scripts.pory"
	delay 30
# 130 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 131 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 132 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 133 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 134 "data/maps/Route104/scripts.pory"
	closemessage
# 135 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 137 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 139 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 140 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 141 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 142 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 143 "data/maps/Route104/scripts.pory"
	releaseall
# 144 "data/maps/Route104/scripts.pory"
	end
# 145 "data/maps/Route104/scripts.pory"

# 146 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 147 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 148 "data/maps/Route104/scripts.pory"
	step_end
# 149 "data/maps/Route104/scripts.pory"

# 150 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 151 "data/maps/Route104/scripts.pory"
	walk_down
# 152 "data/maps/Route104/scripts.pory"
	face_right
# 153 "data/maps/Route104/scripts.pory"
	step_end
# 154 "data/maps/Route104/scripts.pory"

# 155 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 156 "data/maps/Route104/scripts.pory"
	delay_4
# 157 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 158 "data/maps/Route104/scripts.pory"
	step_end
# 159 "data/maps/Route104/scripts.pory"

# 160 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 161 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 162 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 163 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 164 "data/maps/Route104/scripts.pory"
	releaseall
# 165 "data/maps/Route104/scripts.pory"
	end
# 166 "data/maps/Route104/scripts.pory"

# 167 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 168 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 169 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 170 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 171 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 172 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 173 "data/maps/Route104/scripts.pory"
	end
# 174 "data/maps/Route104/scripts.pory"

# 175 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 176 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 177 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 178 "data/maps/Route104/scripts.pory"
	releaseall
# 179 "data/maps/Route104/scripts.pory"
	end
# 180 "data/maps/Route104/scripts.pory"

# 181 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 182 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 183 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 184 "data/maps/Route104/scripts.pory"
	return
# 185 "data/maps/Route104/scripts.pory"

# 186 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 187 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 188 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 189 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 190 "data/maps/Route104/scripts.pory"
	end
# 191 "data/maps/Route104/scripts.pory"

# 192 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 193 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 194 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 195 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 196 "data/maps/Route104/scripts.pory"
	end
# 197 "data/maps/Route104/scripts.pory"

# 198 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 199 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 200 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 201 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 202 "data/maps/Route104/scripts.pory"
	end
# 203 "data/maps/Route104/scripts.pory"

# 204 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 205 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 206 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 207 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 208 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 209 "data/maps/Route104/scripts.pory"
	closemessage
# 210 "data/maps/Route104/scripts.pory"
	delay 30
# 211 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 212 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 213 "data/maps/Route104/scripts.pory"
	waitfanfare
# 214 "data/maps/Route104/scripts.pory"
	closemessage
# 215 "data/maps/Route104/scripts.pory"
	delay 30
# 216 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 217 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 218 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 219 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 220 "data/maps/Route104/scripts.pory"
	closemessage
# 221 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 222 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 223 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 225 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 226 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 227 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 228 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 229 "data/maps/Route104/scripts.pory"
	releaseall
# 230 "data/maps/Route104/scripts.pory"
	end
# 231 "data/maps/Route104/scripts.pory"

# 232 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 233 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 234 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 235 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 236 "data/maps/Route104/scripts.pory"
<<<<<<< HEAD
	releaseall
# 237 "data/maps/Route104/scripts.pory"
	end
# 238 "data/maps/Route104/scripts.pory"

# 239 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 240 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 241 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 242 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 243 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 244 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 245 "data/maps/Route104/scripts.pory"
	end
# 246 "data/maps/Route104/scripts.pory"

# 247 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 248 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 249 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 250 "data/maps/Route104/scripts.pory"
	releaseall
# 251 "data/maps/Route104/scripts.pory"
	end
# 252 "data/maps/Route104/scripts.pory"

# 253 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 254 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 255 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 256 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 257 "data/maps/Route104/scripts.pory"
	end
# 258 "data/maps/Route104/scripts.pory"

# 259 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 260 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 261 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 262 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 263 "data/maps/Route104/scripts.pory"
	end
# 264 "data/maps/Route104/scripts.pory"

# 265 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 266 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 267 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 268 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 269 "data/maps/Route104/scripts.pory"
	end
# 270 "data/maps/Route104/scripts.pory"

# 271 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 272 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 273 "data/maps/Route104/scripts.pory"
	walk_down
# 274 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 275 "data/maps/Route104/scripts.pory"
	step_end
# 276 "data/maps/Route104/scripts.pory"

# 277 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 278 "data/maps/Route104/scripts.pory"
	walk_down
# 279 "data/maps/Route104/scripts.pory"
	step_end
# 280 "data/maps/Route104/scripts.pory"

# 281 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 282 "data/maps/Route104/scripts.pory"
	lock
# 283 "data/maps/Route104/scripts.pory"
	faceplayer
# 284 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 285 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 286 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 287 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 288 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 289 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 290 "data/maps/Route104/scripts.pory"
	release
# 291 "data/maps/Route104/scripts.pory"
	end
# 292 "data/maps/Route104/scripts.pory"

# 293 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 294 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 295 "data/maps/Route104/scripts.pory"
	release
# 296 "data/maps/Route104/scripts.pory"
	end
# 297 "data/maps/Route104/scripts.pory"

# 298 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 299 "data/maps/Route104/scripts.pory"
	lock
# 300 "data/maps/Route104/scripts.pory"
	faceplayer
# 301 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 302 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 303 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 304 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 305 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 306 "data/maps/Route104/scripts.pory"
	release
# 307 "data/maps/Route104/scripts.pory"
	end
# 308 "data/maps/Route104/scripts.pory"

# 309 "data/maps/Route104/scripts.pory"
Route104_EventScript_Reporters::
# 310 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_Reporters, MSGBOX_NPC
# 311 "data/maps/Route104/scripts.pory"
	end
# 312 "data/maps/Route104/scripts.pory"

# 313 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 314 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 315 "data/maps/Route104/scripts.pory"
	release
# 316 "data/maps/Route104/scripts.pory"
	end
# 317 "data/maps/Route104/scripts.pory"

# 318 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 319 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 320 "data/maps/Route104/scripts.pory"
	end
# 321 "data/maps/Route104/scripts.pory"

# 322 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 323 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 324 "data/maps/Route104/scripts.pory"
	end
# 325 "data/maps/Route104/scripts.pory"

# 326 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 327 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 328 "data/maps/Route104/scripts.pory"
	end
# 329 "data/maps/Route104/scripts.pory"

# 330 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 331 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 332 "data/maps/Route104/scripts.pory"
	end
# 333 "data/maps/Route104/scripts.pory"

# 334 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 335 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 336 "data/maps/Route104/scripts.pory"
	end
# 337 "data/maps/Route104/scripts.pory"

# 338 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 339 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 340 "data/maps/Route104/scripts.pory"
	end
# 341 "data/maps/Route104/scripts.pory"

# 342 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 343 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 344 "data/maps/Route104/scripts.pory"
	end
# 345 "data/maps/Route104/scripts.pory"

# 346 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 347 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 348 "data/maps/Route104/scripts.pory"
	end
# 349 "data/maps/Route104/scripts.pory"

# 350 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 351 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 352 "data/maps/Route104/scripts.pory"
	end
# 353 "data/maps/Route104/scripts.pory"

# 354 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 355 "data/maps/Route104/scripts.pory"
	lock
# 356 "data/maps/Route104/scripts.pory"
	faceplayer
# 357 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 358 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 359 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 360 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 361 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 362 "data/maps/Route104/scripts.pory"
	release
# 363 "data/maps/Route104/scripts.pory"
	end
# 364 "data/maps/Route104/scripts.pory"

# 365 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 366 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 367 "data/maps/Route104/scripts.pory"
	release
# 368 "data/maps/Route104/scripts.pory"
	end
# 369 "data/maps/Route104/scripts.pory"

# 370 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 371 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 372 "data/maps/Route104/scripts.pory"
	end
# 373 "data/maps/Route104/scripts.pory"

# 374 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 375 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 376 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 377 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_NPC_FOLLOWER, MAP_ROUTE104, 0
# 378 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 379 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 380 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 381 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 382 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 383 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 384 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route104_Movement_EmmieBoardBoat
# 385 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 386 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_ROUTE104
# 387 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 388 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewfordNoCall
# 389 "data/maps/Route104/scripts.pory"
	end
# 390 "data/maps/Route104/scripts.pory"

# 391 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 392 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 393 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 394 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 395 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 396 "data/maps/Route104/scripts.pory"

# 397 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 398 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 399 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 400 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 401 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 402 "data/maps/Route104/scripts.pory"
	waitmessage
# 403 "data/maps/Route104/scripts.pory"
	delay 30
# 404 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 405 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 406 "data/maps/Route104/scripts.pory"
	waitfanfare
# 407 "data/maps/Route104/scripts.pory"
	closemessage
# 408 "data/maps/Route104/scripts.pory"
	delay 30
# 409 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 410 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 411 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 412 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 413 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 414 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 415 "data/maps/Route104/scripts.pory"

# 416 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 417 "data/maps/Route104/scripts.pory"
	delay 50
# 418 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 419 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 420 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 421 "data/maps/Route104/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 12, 9
# 422 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_DEWFORD_TOWN
# 423 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route104_Movement_EmmieExitBoat
# 424 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 425 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 426 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 427 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 428 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 429 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 430 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 431 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 432 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 433 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 434 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 435 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 436 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 437 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 438 "data/maps/Route104/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 439 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 440 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 441 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_NPC_FOLLOWER, MAP_ROUTE104
# 442 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 443 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 444 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 445 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 446 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 447 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 448 "data/maps/Route104/scripts.pory"
	end
# 449 "data/maps/Route104/scripts.pory"

# 450 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 451 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 452 "data/maps/Route104/scripts.pory"
	releaseall
# 453 "data/maps/Route104/scripts.pory"
	end
# 454 "data/maps/Route104/scripts.pory"

# 455 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 456 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 457 "data/maps/Route104/scripts.pory"
	releaseall
# 458 "data/maps/Route104/scripts.pory"
	end
# 459 "data/maps/Route104/scripts.pory"

# 460 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
=======
	releaseall
# 237 "data/maps/Route104/scripts.pory"
	end
# 238 "data/maps/Route104/scripts.pory"

# 239 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 240 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 241 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 242 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 243 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 244 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 245 "data/maps/Route104/scripts.pory"
	end
# 246 "data/maps/Route104/scripts.pory"

# 247 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 248 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 249 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 250 "data/maps/Route104/scripts.pory"
	releaseall
# 251 "data/maps/Route104/scripts.pory"
	end
# 252 "data/maps/Route104/scripts.pory"

# 253 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 254 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 255 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 256 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 257 "data/maps/Route104/scripts.pory"
	end
# 258 "data/maps/Route104/scripts.pory"

# 259 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 260 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 261 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 262 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 263 "data/maps/Route104/scripts.pory"
	end
# 264 "data/maps/Route104/scripts.pory"

# 265 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 266 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 267 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 268 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 269 "data/maps/Route104/scripts.pory"
	end
# 270 "data/maps/Route104/scripts.pory"

# 271 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 272 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 273 "data/maps/Route104/scripts.pory"
	walk_down
# 274 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 275 "data/maps/Route104/scripts.pory"
	step_end
# 276 "data/maps/Route104/scripts.pory"

# 277 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 278 "data/maps/Route104/scripts.pory"
	walk_down
# 279 "data/maps/Route104/scripts.pory"
	step_end
# 280 "data/maps/Route104/scripts.pory"

# 281 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 282 "data/maps/Route104/scripts.pory"
	lock
# 283 "data/maps/Route104/scripts.pory"
	faceplayer
# 284 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 285 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 286 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 287 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 288 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 289 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 290 "data/maps/Route104/scripts.pory"
	release
# 291 "data/maps/Route104/scripts.pory"
	end
# 292 "data/maps/Route104/scripts.pory"

# 293 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 294 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 295 "data/maps/Route104/scripts.pory"
	release
# 296 "data/maps/Route104/scripts.pory"
	end
# 297 "data/maps/Route104/scripts.pory"

# 298 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 299 "data/maps/Route104/scripts.pory"
	lock
# 300 "data/maps/Route104/scripts.pory"
	faceplayer
# 301 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 302 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 303 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 304 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 305 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 306 "data/maps/Route104/scripts.pory"
	release
# 307 "data/maps/Route104/scripts.pory"
	end
# 308 "data/maps/Route104/scripts.pory"

# 309 "data/maps/Route104/scripts.pory"
Route104_EventScript_Reporters::
# 310 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_Reporters, MSGBOX_NPC
# 311 "data/maps/Route104/scripts.pory"
	end
# 312 "data/maps/Route104/scripts.pory"

# 313 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 314 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 315 "data/maps/Route104/scripts.pory"
	release
# 316 "data/maps/Route104/scripts.pory"
	end
# 317 "data/maps/Route104/scripts.pory"

# 318 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 319 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 320 "data/maps/Route104/scripts.pory"
	end
# 321 "data/maps/Route104/scripts.pory"

# 322 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 323 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 324 "data/maps/Route104/scripts.pory"
	end
# 325 "data/maps/Route104/scripts.pory"

# 326 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 327 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 328 "data/maps/Route104/scripts.pory"
	end
# 329 "data/maps/Route104/scripts.pory"

# 330 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 331 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 332 "data/maps/Route104/scripts.pory"
	end
# 333 "data/maps/Route104/scripts.pory"

# 334 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 335 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 336 "data/maps/Route104/scripts.pory"
	end
# 337 "data/maps/Route104/scripts.pory"

# 338 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 339 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 340 "data/maps/Route104/scripts.pory"
	end
# 341 "data/maps/Route104/scripts.pory"

# 342 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 343 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 344 "data/maps/Route104/scripts.pory"
	end
# 345 "data/maps/Route104/scripts.pory"

# 346 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 347 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 348 "data/maps/Route104/scripts.pory"
	end
# 349 "data/maps/Route104/scripts.pory"

# 350 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 351 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 352 "data/maps/Route104/scripts.pory"
	end
# 353 "data/maps/Route104/scripts.pory"

# 354 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 355 "data/maps/Route104/scripts.pory"
	lock
# 356 "data/maps/Route104/scripts.pory"
	faceplayer
# 357 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 358 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 359 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 360 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 361 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 362 "data/maps/Route104/scripts.pory"
	release
# 363 "data/maps/Route104/scripts.pory"
	end
# 364 "data/maps/Route104/scripts.pory"

# 365 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 366 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 367 "data/maps/Route104/scripts.pory"
	release
# 368 "data/maps/Route104/scripts.pory"
	end
# 369 "data/maps/Route104/scripts.pory"

# 370 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 371 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 372 "data/maps/Route104/scripts.pory"
	end
# 373 "data/maps/Route104/scripts.pory"

# 374 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 375 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 376 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 377 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_NPC_FOLLOWER, MAP_ROUTE104, 0
# 378 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 379 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 380 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 381 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 382 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 383 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 384 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route104_Movement_EmmieBoardBoat
# 385 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 386 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_ROUTE104
# 387 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 388 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewfordNoCall
# 389 "data/maps/Route104/scripts.pory"
	end
# 390 "data/maps/Route104/scripts.pory"

# 391 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 392 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 393 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 394 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 395 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 396 "data/maps/Route104/scripts.pory"

# 397 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 398 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 399 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 400 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 401 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 402 "data/maps/Route104/scripts.pory"
	waitmessage
# 403 "data/maps/Route104/scripts.pory"
	delay 30
# 404 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 405 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 406 "data/maps/Route104/scripts.pory"
	waitfanfare
# 407 "data/maps/Route104/scripts.pory"
	closemessage
# 408 "data/maps/Route104/scripts.pory"
	delay 30
# 409 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 410 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 411 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 412 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 413 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 414 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 415 "data/maps/Route104/scripts.pory"

# 416 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 417 "data/maps/Route104/scripts.pory"
	delay 50
# 418 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 419 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 420 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 421 "data/maps/Route104/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 12, 9
# 422 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_DEWFORD_TOWN
# 423 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route104_Movement_EmmieExitBoat
# 424 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 425 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 426 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 427 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 428 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 429 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 430 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 431 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 432 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 433 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 434 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 435 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 436 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 437 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 438 "data/maps/Route104/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 439 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 440 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 441 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_NPC_FOLLOWER, MAP_ROUTE104
# 442 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 443 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 444 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 445 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 446 "data/maps/Route104/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE 13
# 447 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 448 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 449 "data/maps/Route104/scripts.pory"
	end
# 450 "data/maps/Route104/scripts.pory"

# 451 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 452 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 453 "data/maps/Route104/scripts.pory"
	releaseall
# 454 "data/maps/Route104/scripts.pory"
	end
# 455 "data/maps/Route104/scripts.pory"

# 456 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 457 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 458 "data/maps/Route104/scripts.pory"
	releaseall
# 459 "data/maps/Route104/scripts.pory"
	end
# 460 "data/maps/Route104/scripts.pory"

>>>>>>> 4e01050c72 (20250609 01)
# 461 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 462 "data/maps/Route104/scripts.pory"
	walk_down
# 463 "data/maps/Route104/scripts.pory"
	walk_down
# 464 "data/maps/Route104/scripts.pory"
	walk_down
# 465 "data/maps/Route104/scripts.pory"
	walk_down
# 466 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 467 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 468 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 469 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 470 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 471 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 472 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 473 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 474 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 475 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 476 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 477 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 478 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 479 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 480 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 481 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 482 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 483 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 484 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 485 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 486 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 487 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 488 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 489 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 490 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 491 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 492 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 493 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 494 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 495 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 496 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 497 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 498 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 499 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 500 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 501 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 502 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 503 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 504 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 505 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 506 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 507 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 508 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 509 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 510 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 511 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 512 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 513 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 514 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 515 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 516 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 517 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 518 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 519 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 520 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 521 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 522 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 523 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 524 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 525 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 526 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 527 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 528 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 529 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 530 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 531 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 532 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 533 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 534 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 538 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 539 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 540 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 541 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 542 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 543 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 544 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 545 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 546 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 547 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 548 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 549 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 550 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 551 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 552 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 553 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 554 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 555 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 556 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 557 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 558 "data/maps/Route104/scripts.pory"
<<<<<<< HEAD
	step_end
# 559 "data/maps/Route104/scripts.pory"

# 560 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
=======
	walk_faster_down
# 559 "data/maps/Route104/scripts.pory"
	step_end
# 560 "data/maps/Route104/scripts.pory"

>>>>>>> 4e01050c72 (20250609 01)
# 561 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 566 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 567 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 568 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 569 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 570 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 571 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 572 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 573 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 574 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 575 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 576 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 577 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 578 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 579 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 580 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 582 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 583 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 584 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 585 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 586 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 587 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 588 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 589 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 590 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 591 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 592 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 593 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 594 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 595 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 596 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 597 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 598 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 599 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 600 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 601 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 602 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 603 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 604 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 605 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 606 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 607 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 608 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 609 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 610 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 611 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 612 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 613 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 614 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 615 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 616 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 617 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 618 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 619 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 620 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 621 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 622 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 623 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 624 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 625 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 626 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 627 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 628 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 629 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 630 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 631 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 632 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 633 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 634 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 635 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 636 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 637 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 638 "data/maps/Route104/scripts.pory"
	walk_right
# 639 "data/maps/Route104/scripts.pory"
	walk_right
# 640 "data/maps/Route104/scripts.pory"
	walk_down
# 641 "data/maps/Route104/scripts.pory"
	walk_down
# 642 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 643 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 644 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 645 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 646 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 647 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 648 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 649 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 650 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 651 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 652 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 653 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 654 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 655 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 656 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 657 "data/maps/Route104/scripts.pory"
	walk_down
# 658 "data/maps/Route104/scripts.pory"
<<<<<<< HEAD
	step_end
# 659 "data/maps/Route104/scripts.pory"

# 660 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
=======
	walk_down
# 659 "data/maps/Route104/scripts.pory"
	step_end
# 660 "data/maps/Route104/scripts.pory"

>>>>>>> 4e01050c72 (20250609 01)
# 661 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 662 "data/maps/Route104/scripts.pory"
	walk_down
# 663 "data/maps/Route104/scripts.pory"
	walk_down
# 664 "data/maps/Route104/scripts.pory"
	walk_down
# 665 "data/maps/Route104/scripts.pory"
	walk_down
# 666 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 667 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 668 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 669 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 670 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 671 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 672 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 673 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 674 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 675 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 676 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 677 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 678 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 679 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 680 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 681 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 682 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 683 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 684 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 685 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 686 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 687 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 688 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 689 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 690 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 691 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 692 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 693 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 694 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 695 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 696 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 697 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 698 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 699 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 700 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 701 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 702 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 703 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 704 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 705 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 706 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 707 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 708 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 709 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 710 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 711 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 712 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 713 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 714 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 715 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 716 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 717 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 718 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 719 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 720 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 721 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 722 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 723 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 724 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 725 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 726 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 727 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 728 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 729 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 730 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 731 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 732 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 733 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 734 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 735 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 736 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 737 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 738 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 739 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 740 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 741 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 742 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 743 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 744 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 745 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 746 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 747 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 748 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 749 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 750 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 751 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 752 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 753 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 754 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 755 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 756 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 757 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 758 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 759 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 760 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 761 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 762 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 763 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 764 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 765 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 766 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 767 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 768 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 769 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 770 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 771 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 772 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 773 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 774 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 775 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 776 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 777 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 778 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 779 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 780 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 781 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 782 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 783 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 784 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 785 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 786 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 787 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 788 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 789 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 790 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 791 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 792 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 793 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 794 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 795 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 796 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 797 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 798 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 799 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 800 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 801 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 802 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 803 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 804 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 805 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 806 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 807 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 808 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 809 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 810 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 811 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 812 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 813 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 814 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 815 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 816 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 817 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 818 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 819 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 820 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 821 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 822 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 823 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 824 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 825 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 826 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 827 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 828 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 829 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 830 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 831 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 832 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 833 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 834 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 835 "data/maps/Route104/scripts.pory"
	walk_right
# 836 "data/maps/Route104/scripts.pory"
	walk_right
# 837 "data/maps/Route104/scripts.pory"
	walk_down
# 838 "data/maps/Route104/scripts.pory"
	walk_down
# 839 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 840 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 841 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 842 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 843 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 844 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 845 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 846 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 847 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 848 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 849 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 850 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 851 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 852 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 853 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 854 "data/maps/Route104/scripts.pory"
	walk_down
# 855 "data/maps/Route104/scripts.pory"
<<<<<<< HEAD
	step_end
# 856 "data/maps/Route104/scripts.pory"

# 857 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 858 "data/maps/Route104/scripts.pory"
	walk_left
=======
	walk_down
# 856 "data/maps/Route104/scripts.pory"
	step_end
# 857 "data/maps/Route104/scripts.pory"

# 858 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
>>>>>>> 4e01050c72 (20250609 01)
# 859 "data/maps/Route104/scripts.pory"
	walk_left
# 860 "data/maps/Route104/scripts.pory"
	walk_down
# 861 "data/maps/Route104/scripts.pory"
<<<<<<< HEAD
	step_end
# 862 "data/maps/Route104/scripts.pory"

# 863 "data/maps/Route104/scripts.pory"
Route104_Movement_EmmieBoardBoat:
=======
	walk_down
# 862 "data/maps/Route104/scripts.pory"
	step_end
# 863 "data/maps/Route104/scripts.pory"

>>>>>>> 4e01050c72 (20250609 01)
# 864 "data/maps/Route104/scripts.pory"
Route104_Movement_EmmieBoardBoat:
# 865 "data/maps/Route104/scripts.pory"
	walk_left
# 866 "data/maps/Route104/scripts.pory"
	walk_left
# 867 "data/maps/Route104/scripts.pory"
	walk_down
# 868 "data/maps/Route104/scripts.pory"
<<<<<<< HEAD
	step_end
# 869 "data/maps/Route104/scripts.pory"

# 870 "data/maps/Route104/scripts.pory"
Route104_Movement_EmmieExitBoat:
=======
	walk_down
# 869 "data/maps/Route104/scripts.pory"
	step_end
# 870 "data/maps/Route104/scripts.pory"

>>>>>>> 4e01050c72 (20250609 01)
# 871 "data/maps/Route104/scripts.pory"
Route104_Movement_EmmieExitBoat:
# 872 "data/maps/Route104/scripts.pory"
	walk_left
# 873 "data/maps/Route104/scripts.pory"
<<<<<<< HEAD
	walk_in_place_faster_right
# 874 "data/maps/Route104/scripts.pory"
	step_end
# 875 "data/maps/Route104/scripts.pory"

# 876 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 877 "data/maps/Route104/scripts.pory"
	walk_down
# 878 "data/maps/Route104/scripts.pory"
	step_end
# 879 "data/maps/Route104/scripts.pory"

# 880 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 881 "data/maps/Route104/scripts.pory"
	walk_down
# 882 "data/maps/Route104/scripts.pory"
	walk_left
# 883 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 884 "data/maps/Route104/scripts.pory"
	step_end
# 885 "data/maps/Route104/scripts.pory"

# 886 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
=======
	walk_left
# 874 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 875 "data/maps/Route104/scripts.pory"
	step_end
# 876 "data/maps/Route104/scripts.pory"

# 877 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 878 "data/maps/Route104/scripts.pory"
	walk_down
# 879 "data/maps/Route104/scripts.pory"
	step_end
# 880 "data/maps/Route104/scripts.pory"

# 881 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 882 "data/maps/Route104/scripts.pory"
	walk_down
# 883 "data/maps/Route104/scripts.pory"
	walk_left
# 884 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 885 "data/maps/Route104/scripts.pory"
	step_end
# 886 "data/maps/Route104/scripts.pory"

>>>>>>> 4e01050c72 (20250609 01)
# 887 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 888 "data/maps/Route104/scripts.pory"
	walk_down
# 889 "data/maps/Route104/scripts.pory"
<<<<<<< HEAD
	step_end
# 890 "data/maps/Route104/scripts.pory"

# 891 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 892 "data/maps/Route104/scripts.pory"
	walk_down
# 893 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 894 "data/maps/Route104/scripts.pory"
	step_end
# 895 "data/maps/Route104/scripts.pory"

# 896 "data/maps/Route104/scripts.pory"
Route104_EventScript_IvanDarian::
# 897 "data/maps/Route104/scripts.pory"
lockall
# 898 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_IVAN
# 899 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 900 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 901 "data/maps/Route104/scripts.pory"
waitmovement 0
# 902 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 903 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 904 "data/maps/Route104/scripts.pory"
waitmovement 0
# 905 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_IvanIntro MSGBOX_AUTOCLOSE
# 906 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_DARIAN
# 907 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 908 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 909 "data/maps/Route104/scripts.pory"
waitmovement 0
# 910 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 911 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 912 "data/maps/Route104/scripts.pory"
waitmovement 0
# 913 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_DarianIntro, MSGBOX_AUTOCLOSE
# 914 "data/maps/Route104/scripts.pory"
goto Route104_EventScript_IvanDarianDoMultiBattle
# 915 "data/maps/Route104/scripts.pory"
releaseall
# 916 "data/maps/Route104/scripts.pory"
end
# 917 "data/maps/Route104/scripts.pory"

# 918 "data/maps/Route104/scripts.pory"
Route104_EventScript_IvanDarianDoMultiBattle::
# 919 "data/maps/Route104/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 920 "data/maps/Route104/scripts.pory"
multi_2p_vs_2 TRAINER_IVAN, Route104_Text_IvanDefeat, TRAINER_DARIAN, Route104_Text_DarianDefeat, PARTNER_EMMIE
# 921 "data/maps/Route104/scripts.pory"
switch VAR_RESULT
# 922 "data/maps/Route104/scripts.pory"
case 1, Route104_EventScript_IvanDarianVictory
# 923 "data/maps/Route104/scripts.pory"
fadescreen FADE_TO_BLACK
# 924 "data/maps/Route104/scripts.pory"
special SetCB2WhiteOut
# 925 "data/maps/Route104/scripts.pory"
waitstate
# 926 "data/maps/Route104/scripts.pory"

# 927 "data/maps/Route104/scripts.pory"
Route104_EventScript_IvanDarianVictory::
# 928 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 929 "data/maps/Route104/scripts.pory"
waitmovement 0
# 930 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 931 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 932 "data/maps/Route104/scripts.pory"
waitmovement 0
# 933 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 934 "data/maps/Route104/scripts.pory"
addvar VAR_ROUTE104_STATE, 1
# 935 "data/maps/Route104/scripts.pory"
end
# 936 "data/maps/Route104/scripts.pory"

# 937 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 938 "data/maps/Route104/scripts.pory"
	faceplayer
# 939 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 940 "data/maps/Route104/scripts.pory"
	end
# 941 "data/maps/Route104/scripts.pory"

# 942 "data/maps/Route104/scripts.pory"
Route104_EventScript_HaleyBilly::
# 943 "data/maps/Route104/scripts.pory"
lockall
# 944 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_HALEY
# 945 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 946 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 947 "data/maps/Route104/scripts.pory"
waitmovement 0
# 948 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 949 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 950 "data/maps/Route104/scripts.pory"
waitmovement 0
# 951 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_HaleyIntro MSGBOX_AUTOCLOSE
# 952 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_BILLY
# 953 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 954 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 955 "data/maps/Route104/scripts.pory"
waitmovement 0
# 956 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 957 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 958 "data/maps/Route104/scripts.pory"
waitmovement 0
# 959 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_BillyIntro, MSGBOX_AUTOCLOSE
# 960 "data/maps/Route104/scripts.pory"
goto Route104_EventScript_HaleyBillyDoMultiBattle
# 961 "data/maps/Route104/scripts.pory"
releaseall
# 962 "data/maps/Route104/scripts.pory"
end
# 963 "data/maps/Route104/scripts.pory"

# 964 "data/maps/Route104/scripts.pory"
Route104_EventScript_HaleyBillyDoMultiBattle::
# 965 "data/maps/Route104/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 966 "data/maps/Route104/scripts.pory"
multi_2p_vs_2 TRAINER_HALEY_1, Route104_Text_HaleyDefeat, TRAINER_BILLY, Route104_Text_BillyDefeat, PARTNER_EMMIE
# 967 "data/maps/Route104/scripts.pory"
switch VAR_RESULT
# 968 "data/maps/Route104/scripts.pory"
case 1, Route104_EventScript_HaleyBillyVictory
# 969 "data/maps/Route104/scripts.pory"
fadescreen FADE_TO_BLACK
# 970 "data/maps/Route104/scripts.pory"
special SetCB2WhiteOut
# 971 "data/maps/Route104/scripts.pory"
waitstate
# 972 "data/maps/Route104/scripts.pory"

# 973 "data/maps/Route104/scripts.pory"
Route104_EventScript_HaleyBillyVictory::
# 974 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 975 "data/maps/Route104/scripts.pory"
waitmovement 0
# 976 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_HaleyPostBattle, MSGBOX_AUTOCLOSE
# 977 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 978 "data/maps/Route104/scripts.pory"
waitmovement 0
# 979 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 980 "data/maps/Route104/scripts.pory"
addvar VAR_ROUTE104_STATE, 1
# 981 "data/maps/Route104/scripts.pory"
end
# 982 "data/maps/Route104/scripts.pory"

# 983 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 984 "data/maps/Route104/scripts.pory"
	faceplayer
# 985 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 986 "data/maps/Route104/scripts.pory"
	end
# 987 "data/maps/Route104/scripts.pory"

# 988 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 989 "data/maps/Route104/scripts.pory"
	faceplayer
# 990 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 991 "data/maps/Route104/scripts.pory"
	release
# 992 "data/maps/Route104/scripts.pory"
	end
# 993 "data/maps/Route104/scripts.pory"

# 994 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 995 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 996 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 997 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 998 "data/maps/Route104/scripts.pory"
	release
# 999 "data/maps/Route104/scripts.pory"
	end
# 1000 "data/maps/Route104/scripts.pory"

# 1001 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 1002 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 1003 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 1004 "data/maps/Route104/scripts.pory"
	release
# 1005 "data/maps/Route104/scripts.pory"
	end
# 1006 "data/maps/Route104/scripts.pory"

# 1007 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 1008 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 1009 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 1010 "data/maps/Route104/scripts.pory"
	release
# 1011 "data/maps/Route104/scripts.pory"
	end
# 1012 "data/maps/Route104/scripts.pory"

# 1013 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 1014 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 1015 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 1016 "data/maps/Route104/scripts.pory"
	release
# 1017 "data/maps/Route104/scripts.pory"
	end
# 1018 "data/maps/Route104/scripts.pory"

# 1019 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 1020 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 1021 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 1022 "data/maps/Route104/scripts.pory"
	end
# 1023 "data/maps/Route104/scripts.pory"

# 1024 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 1025 "data/maps/Route104/scripts.pory"
	faceplayer
# 1026 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1027 "data/maps/Route104/scripts.pory"
	release
# 1028 "data/maps/Route104/scripts.pory"
	end
# 1029 "data/maps/Route104/scripts.pory"

# 1030 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 1031 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1032 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1033 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 1034 "data/maps/Route104/scripts.pory"
	release
# 1035 "data/maps/Route104/scripts.pory"
	end
# 1036 "data/maps/Route104/scripts.pory"

# 1037 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 1038 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 1039 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1040 "data/maps/Route104/scripts.pory"
	release
# 1041 "data/maps/Route104/scripts.pory"
	end
# 1042 "data/maps/Route104/scripts.pory"

# 1043 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 1044 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 1045 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1046 "data/maps/Route104/scripts.pory"
	release
# 1047 "data/maps/Route104/scripts.pory"
	end
# 1048 "data/maps/Route104/scripts.pory"

# 1049 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 1050 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 1051 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1052 "data/maps/Route104/scripts.pory"
	release
# 1053 "data/maps/Route104/scripts.pory"
	end
# 1054 "data/maps/Route104/scripts.pory"

# 1055 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 1056 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 1057 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 1058 "data/maps/Route104/scripts.pory"
	end
# 1059 "data/maps/Route104/scripts.pory"

# 1060 "data/maps/Route104/scripts.pory"
Route104_EventScript_CindyWinston::
# 1061 "data/maps/Route104/scripts.pory"
lockall
# 1062 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_CINDY
# 1063 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 1064 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1065 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1066 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 1067 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1068 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1069 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_CindyIntro MSGBOX_AUTOCLOSE
# 1070 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_WINSTON
# 1071 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 1072 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1073 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1074 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 1075 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1076 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1077 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_WinstonIntro, MSGBOX_AUTOCLOSE
# 1078 "data/maps/Route104/scripts.pory"
goto Route104_EventScript_CindyWinstonDoMultiBattle
# 1079 "data/maps/Route104/scripts.pory"
releaseall
# 1080 "data/maps/Route104/scripts.pory"
end
# 1081 "data/maps/Route104/scripts.pory"

# 1082 "data/maps/Route104/scripts.pory"
Route104_EventScript_CindyWinstonDoMultiBattle::
# 1083 "data/maps/Route104/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 1084 "data/maps/Route104/scripts.pory"
multi_2p_vs_2 TRAINER_CINDY_1, Route104_Text_CindyDefeat, TRAINER_WINSTON_1, Route104_Text_WinstonDefeat, PARTNER_EMMIE
# 1085 "data/maps/Route104/scripts.pory"
switch VAR_RESULT
# 1086 "data/maps/Route104/scripts.pory"
case 1, Route104_EventScript_CindyWinstonVictory
# 1087 "data/maps/Route104/scripts.pory"
fadescreen FADE_TO_BLACK
# 1088 "data/maps/Route104/scripts.pory"
special SetCB2WhiteOut
# 1089 "data/maps/Route104/scripts.pory"
waitstate
# 1090 "data/maps/Route104/scripts.pory"

# 1091 "data/maps/Route104/scripts.pory"
Route104_EventScript_CindyWinstonVictory::
# 1092 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1093 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1094 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_CindyPostBattle, MSGBOX_AUTOCLOSE
# 1095 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1096 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1097 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_WinstonPostBattle, MSGBOX_AUTOCLOSE
# 1098 "data/maps/Route104/scripts.pory"
addvar VAR_ROUTE104_STATE, 1
# 1099 "data/maps/Route104/scripts.pory"
end
# 1100 "data/maps/Route104/scripts.pory"

# 1101 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 1102 "data/maps/Route104/scripts.pory"
	faceplayer
# 1103 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1104 "data/maps/Route104/scripts.pory"
	release
# 1105 "data/maps/Route104/scripts.pory"
	end
# 1106 "data/maps/Route104/scripts.pory"

# 1107 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 1108 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1109 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1110 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 1111 "data/maps/Route104/scripts.pory"
	release
# 1112 "data/maps/Route104/scripts.pory"
	end
# 1113 "data/maps/Route104/scripts.pory"

# 1114 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 1115 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 1116 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1117 "data/maps/Route104/scripts.pory"
	release
# 1118 "data/maps/Route104/scripts.pory"
	end
# 1119 "data/maps/Route104/scripts.pory"

# 1120 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 1121 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 1122 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1123 "data/maps/Route104/scripts.pory"
	release
# 1124 "data/maps/Route104/scripts.pory"
	end
# 1125 "data/maps/Route104/scripts.pory"

# 1126 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 1127 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 1128 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1129 "data/maps/Route104/scripts.pory"
	release
# 1130 "data/maps/Route104/scripts.pory"
	end
# 1131 "data/maps/Route104/scripts.pory"

# 1132 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 1133 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 1134 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 1135 "data/maps/Route104/scripts.pory"
	end
# 1136 "data/maps/Route104/scripts.pory"

# 1137 "data/maps/Route104/scripts.pory"
Route104_EventScript_GinaMia::
# 1138 "data/maps/Route104/scripts.pory"
lockall
# 1139 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_GINA
# 1140 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 1141 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1142 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1143 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 1144 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1145 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1146 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_GinaIntro, MSGBOX_AUTOCLOSE
# 1147 "data/maps/Route104/scripts.pory"
goto Route104_EventScript_GinaMiaDoMultiBattle
# 1148 "data/maps/Route104/scripts.pory"
releaseall
# 1149 "data/maps/Route104/scripts.pory"
end
# 1150 "data/maps/Route104/scripts.pory"

# 1151 "data/maps/Route104/scripts.pory"
Route104_EventScript_GinaMiaDoMultiBattle::
# 1152 "data/maps/Route104/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 1153 "data/maps/Route104/scripts.pory"
multi_2p_vs_1 TRAINER_GINA_AND_MIA_1, Route104_Text_GinaDefeat, PARTNER_EMMIE
# 1154 "data/maps/Route104/scripts.pory"
switch VAR_RESULT
# 1155 "data/maps/Route104/scripts.pory"
case 1, Route104_EventScript_GinaMiaVictory
# 1156 "data/maps/Route104/scripts.pory"
fadescreen FADE_TO_BLACK
# 1157 "data/maps/Route104/scripts.pory"
special SetCB2WhiteOut
# 1158 "data/maps/Route104/scripts.pory"
waitstate
# 1159 "data/maps/Route104/scripts.pory"

# 1160 "data/maps/Route104/scripts.pory"
Route104_EventScript_GinaMiaVictory::
# 1161 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1162 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1163 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_GinaPostBattle, MSGBOX_AUTOCLOSE
# 1164 "data/maps/Route104/scripts.pory"
addvar VAR_ROUTE104_STATE, 1
# 1165 "data/maps/Route104/scripts.pory"
end
# 1166 "data/maps/Route104/scripts.pory"

# 1167 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 1168 "data/maps/Route104/scripts.pory"
	faceplayer
# 1169 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1170 "data/maps/Route104/scripts.pory"
	release
# 1171 "data/maps/Route104/scripts.pory"
	end
# 1172 "data/maps/Route104/scripts.pory"

# 1173 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 1174 "data/maps/Route104/scripts.pory"
	faceplayer
# 1175 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1176 "data/maps/Route104/scripts.pory"
	release
# 1177 "data/maps/Route104/scripts.pory"
	end
# 1178 "data/maps/Route104/scripts.pory"

# 1179 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 1180 "data/maps/Route104/scripts.pory"
	faceplayer
# 1181 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1182 "data/maps/Route104/scripts.pory"
	end
# 1183 "data/maps/Route104/scripts.pory"

# 1184 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1185 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 1186 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 1187 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 1188 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 1189 "data/maps/Route104/scripts.pory"

# 1190 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1191 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 1192 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 1193 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 1194 "data/maps/Route104/scripts.pory"

# 1195 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1196 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 1197 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 1198 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1199 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1200 "data/maps/Route104/scripts.pory"

# 1201 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1202 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1203 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1204 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1205 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 1206 "data/maps/Route104/scripts.pory"

# 1207 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1208 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1209 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1210 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1211 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1212 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1213 "data/maps/Route104/scripts.pory"

# 1214 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1215 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1216 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1217 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1218 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1219 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1220 "data/maps/Route104/scripts.pory"

# 1221 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1222 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1223 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1224 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1225 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1226 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1227 "data/maps/Route104/scripts.pory"

# 1228 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1229 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1230 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1231 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1232 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1233 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1234 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1235 "data/maps/Route104/scripts.pory"

# 1236 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1237 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1238 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1239 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1240 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1241 "data/maps/Route104/scripts.pory"

# 1242 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1243 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1244 "data/maps/Route104/scripts.pory"

# 1245 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1246 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1247 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1248 "data/maps/Route104/scripts.pory"

# 1249 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1250 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1251 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1252 "data/maps/Route104/scripts.pory"

# 1253 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1254 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1255 "data/maps/Route104/scripts.pory"

# 1256 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1257 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1258 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1259 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1260 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1261 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1262 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1263 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1264 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1265 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 1266 "data/maps/Route104/scripts.pory"

# 1267 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1268 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1269 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 1270 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1271 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1272 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1273 "data/maps/Route104/scripts.pory"

# 1274 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1275 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1276 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1277 "data/maps/Route104/scripts.pory"

# 1278 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1279 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1280 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 1281 "data/maps/Route104/scripts.pory"

# 1282 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1283 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1284 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1285 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1286 "data/maps/Route104/scripts.pory"

# 1287 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1288 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1289 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1290 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 1291 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1292 "data/maps/Route104/scripts.pory"

# 1293 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1294 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1295 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1296 "data/maps/Route104/scripts.pory"

# 1297 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1298 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1299 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1300 "data/maps/Route104/scripts.pory"

# 1301 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1302 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1303 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1304 "data/maps/Route104/scripts.pory"

# 1305 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1306 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1307 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 1308 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1309 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1310 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1311 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 1312 "data/maps/Route104/scripts.pory"

# 1313 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1314 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1315 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1316 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 1317 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1318 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 1319 "data/maps/Route104/scripts.pory"

# 1320 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1321 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1322 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1323 "data/maps/Route104/scripts.pory"

# 1324 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1325 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 1326 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1327 "data/maps/Route104/scripts.pory"

# 1328 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1329 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1330 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1331 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1332 "data/maps/Route104/scripts.pory"

# 1333 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1334 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1335 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1336 "data/maps/Route104/scripts.pory"

# 1337 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1338 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1339 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1340 "data/maps/Route104/scripts.pory"

# 1341 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1342 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1343 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1344 "data/maps/Route104/scripts.pory"

# 1345 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1346 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1347 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1348 "data/maps/Route104/scripts.pory"

# 1349 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1350 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1351 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 1352 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1353 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 1354 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1355 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"
# 1356 "data/maps/Route104/scripts.pory"

# 1357 "data/maps/Route104/scripts.pory"
Route104_Text_Reporters:
# 1358 "data/maps/Route104/scripts.pory"
	.string "We are covering an ongoing incident\n"
# 1359 "data/maps/Route104/scripts.pory"
	.string "with Team Aqua and a missing Wingull.\p"
# 1360 "data/maps/Route104/scripts.pory"
	.string "Apologies but we cannot let you\n"
# 1361 "data/maps/Route104/scripts.pory"
=======
	walk_down
# 890 "data/maps/Route104/scripts.pory"
	step_end
# 891 "data/maps/Route104/scripts.pory"

# 892 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 893 "data/maps/Route104/scripts.pory"
	walk_down
# 894 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 895 "data/maps/Route104/scripts.pory"
	step_end
# 896 "data/maps/Route104/scripts.pory"

# 897 "data/maps/Route104/scripts.pory"
Route104_EventScript_IvanDarian::
# 898 "data/maps/Route104/scripts.pory"
lockall
# 899 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_IVAN
# 900 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 901 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 902 "data/maps/Route104/scripts.pory"
waitmovement 0
# 903 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 904 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 905 "data/maps/Route104/scripts.pory"
waitmovement 0
# 906 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_IvanIntro MSGBOX_AUTOCLOSE
# 907 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_DARIAN
# 908 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 909 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 910 "data/maps/Route104/scripts.pory"
waitmovement 0
# 911 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 912 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 913 "data/maps/Route104/scripts.pory"
waitmovement 0
# 914 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_DarianIntro, MSGBOX_AUTOCLOSE
# 915 "data/maps/Route104/scripts.pory"
goto Route104_EventScript_IvanDarianDoMultiBattle
# 916 "data/maps/Route104/scripts.pory"
releaseall
# 917 "data/maps/Route104/scripts.pory"
end
# 918 "data/maps/Route104/scripts.pory"

# 919 "data/maps/Route104/scripts.pory"
Route104_EventScript_IvanDarianDoMultiBattle::
# 920 "data/maps/Route104/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 921 "data/maps/Route104/scripts.pory"
multi_2p_vs_2 TRAINER_IVAN, Route104_Text_IvanDefeat, TRAINER_DARIAN, Route104_Text_DarianDefeat, PARTNER_EMMIE
# 922 "data/maps/Route104/scripts.pory"
switch VAR_RESULT
# 923 "data/maps/Route104/scripts.pory"
case 1, Route104_EventScript_IvanDarianVictory
# 924 "data/maps/Route104/scripts.pory"
fadescreen FADE_TO_BLACK
# 925 "data/maps/Route104/scripts.pory"
special SetCB2WhiteOut
# 926 "data/maps/Route104/scripts.pory"
waitstate
# 927 "data/maps/Route104/scripts.pory"

# 928 "data/maps/Route104/scripts.pory"
Route104_EventScript_IvanDarianVictory::
# 929 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 930 "data/maps/Route104/scripts.pory"
waitmovement 0
# 931 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 932 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 933 "data/maps/Route104/scripts.pory"
waitmovement 0
# 934 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 935 "data/maps/Route104/scripts.pory"
addvar VAR_ROUTE104_STATE, 1
# 936 "data/maps/Route104/scripts.pory"
end
# 937 "data/maps/Route104/scripts.pory"

# 938 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 939 "data/maps/Route104/scripts.pory"
	faceplayer
# 940 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 941 "data/maps/Route104/scripts.pory"
	end
# 942 "data/maps/Route104/scripts.pory"

# 943 "data/maps/Route104/scripts.pory"
Route104_EventScript_HaleyBilly::
# 944 "data/maps/Route104/scripts.pory"
lockall
# 945 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_HALEY
# 946 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 947 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 948 "data/maps/Route104/scripts.pory"
waitmovement 0
# 949 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 950 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 951 "data/maps/Route104/scripts.pory"
waitmovement 0
# 952 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_HaleyIntro MSGBOX_AUTOCLOSE
# 953 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_BILLY
# 954 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 955 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 956 "data/maps/Route104/scripts.pory"
waitmovement 0
# 957 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 958 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 959 "data/maps/Route104/scripts.pory"
waitmovement 0
# 960 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_BillyIntro, MSGBOX_AUTOCLOSE
# 961 "data/maps/Route104/scripts.pory"
goto Route104_EventScript_HaleyBillyDoMultiBattle
# 962 "data/maps/Route104/scripts.pory"
releaseall
# 963 "data/maps/Route104/scripts.pory"
end
# 964 "data/maps/Route104/scripts.pory"

# 965 "data/maps/Route104/scripts.pory"
Route104_EventScript_HaleyBillyDoMultiBattle::
# 966 "data/maps/Route104/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 967 "data/maps/Route104/scripts.pory"
multi_2p_vs_2 TRAINER_HALEY_1, Route104_Text_HaleyDefeat, TRAINER_BILLY, Route104_Text_BillyDefeat, PARTNER_EMMIE
# 968 "data/maps/Route104/scripts.pory"
switch VAR_RESULT
# 969 "data/maps/Route104/scripts.pory"
case 1, Route104_EventScript_HaleyBillyVictory
# 970 "data/maps/Route104/scripts.pory"
fadescreen FADE_TO_BLACK
# 971 "data/maps/Route104/scripts.pory"
special SetCB2WhiteOut
# 972 "data/maps/Route104/scripts.pory"
waitstate
# 973 "data/maps/Route104/scripts.pory"

# 974 "data/maps/Route104/scripts.pory"
Route104_EventScript_HaleyBillyVictory::
# 975 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 976 "data/maps/Route104/scripts.pory"
waitmovement 0
# 977 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_HaleyPostBattle, MSGBOX_AUTOCLOSE
# 978 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 979 "data/maps/Route104/scripts.pory"
waitmovement 0
# 980 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 981 "data/maps/Route104/scripts.pory"
addvar VAR_ROUTE104_STATE, 1
# 982 "data/maps/Route104/scripts.pory"
end
# 983 "data/maps/Route104/scripts.pory"

# 984 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 985 "data/maps/Route104/scripts.pory"
	faceplayer
# 986 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 987 "data/maps/Route104/scripts.pory"
	end
# 988 "data/maps/Route104/scripts.pory"

# 989 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 990 "data/maps/Route104/scripts.pory"
	faceplayer
# 991 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 992 "data/maps/Route104/scripts.pory"
	release
# 993 "data/maps/Route104/scripts.pory"
	end
# 994 "data/maps/Route104/scripts.pory"

# 995 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 996 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 997 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 998 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 999 "data/maps/Route104/scripts.pory"
	release
# 1000 "data/maps/Route104/scripts.pory"
	end
# 1001 "data/maps/Route104/scripts.pory"

# 1002 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 1003 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 1004 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 1005 "data/maps/Route104/scripts.pory"
	release
# 1006 "data/maps/Route104/scripts.pory"
	end
# 1007 "data/maps/Route104/scripts.pory"

# 1008 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 1009 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 1010 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 1011 "data/maps/Route104/scripts.pory"
	release
# 1012 "data/maps/Route104/scripts.pory"
	end
# 1013 "data/maps/Route104/scripts.pory"

# 1014 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 1015 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 1016 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 1017 "data/maps/Route104/scripts.pory"
	release
# 1018 "data/maps/Route104/scripts.pory"
	end
# 1019 "data/maps/Route104/scripts.pory"

# 1020 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 1021 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 1022 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 1023 "data/maps/Route104/scripts.pory"
	end
# 1024 "data/maps/Route104/scripts.pory"

# 1025 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 1026 "data/maps/Route104/scripts.pory"
	faceplayer
# 1027 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1028 "data/maps/Route104/scripts.pory"
	release
# 1029 "data/maps/Route104/scripts.pory"
	end
# 1030 "data/maps/Route104/scripts.pory"

# 1031 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 1032 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1033 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1034 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 1035 "data/maps/Route104/scripts.pory"
	release
# 1036 "data/maps/Route104/scripts.pory"
	end
# 1037 "data/maps/Route104/scripts.pory"

# 1038 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 1039 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 1040 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1041 "data/maps/Route104/scripts.pory"
	release
# 1042 "data/maps/Route104/scripts.pory"
	end
# 1043 "data/maps/Route104/scripts.pory"

# 1044 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 1045 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 1046 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1047 "data/maps/Route104/scripts.pory"
	release
# 1048 "data/maps/Route104/scripts.pory"
	end
# 1049 "data/maps/Route104/scripts.pory"

# 1050 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 1051 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 1052 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1053 "data/maps/Route104/scripts.pory"
	release
# 1054 "data/maps/Route104/scripts.pory"
	end
# 1055 "data/maps/Route104/scripts.pory"

# 1056 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 1057 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 1058 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 1059 "data/maps/Route104/scripts.pory"
	end
# 1060 "data/maps/Route104/scripts.pory"

# 1061 "data/maps/Route104/scripts.pory"
Route104_EventScript_CindyWinston::
# 1062 "data/maps/Route104/scripts.pory"
lockall
# 1063 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_CINDY
# 1064 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 1065 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1066 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1067 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 1068 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1069 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1070 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_CindyIntro MSGBOX_AUTOCLOSE
# 1071 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_WINSTON
# 1072 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 1073 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1074 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1075 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 1076 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1077 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1078 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_WinstonIntro, MSGBOX_AUTOCLOSE
# 1079 "data/maps/Route104/scripts.pory"
goto Route104_EventScript_CindyWinstonDoMultiBattle
# 1080 "data/maps/Route104/scripts.pory"
releaseall
# 1081 "data/maps/Route104/scripts.pory"
end
# 1082 "data/maps/Route104/scripts.pory"

# 1083 "data/maps/Route104/scripts.pory"
Route104_EventScript_CindyWinstonDoMultiBattle::
# 1084 "data/maps/Route104/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 1085 "data/maps/Route104/scripts.pory"
multi_2p_vs_2 TRAINER_CINDY_1, Route104_Text_CindyDefeat, TRAINER_WINSTON_1, Route104_Text_WinstonDefeat, PARTNER_EMMIE
# 1086 "data/maps/Route104/scripts.pory"
switch VAR_RESULT
# 1087 "data/maps/Route104/scripts.pory"
case 1, Route104_EventScript_CindyWinstonVictory
# 1088 "data/maps/Route104/scripts.pory"
fadescreen FADE_TO_BLACK
# 1089 "data/maps/Route104/scripts.pory"
special SetCB2WhiteOut
# 1090 "data/maps/Route104/scripts.pory"
waitstate
# 1091 "data/maps/Route104/scripts.pory"

# 1092 "data/maps/Route104/scripts.pory"
Route104_EventScript_CindyWinstonVictory::
# 1093 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1094 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1095 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_CindyPostBattle, MSGBOX_AUTOCLOSE
# 1096 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1097 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1098 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_WinstonPostBattle, MSGBOX_AUTOCLOSE
# 1099 "data/maps/Route104/scripts.pory"
addvar VAR_ROUTE104_STATE, 1
# 1100 "data/maps/Route104/scripts.pory"
end
# 1101 "data/maps/Route104/scripts.pory"

# 1102 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 1103 "data/maps/Route104/scripts.pory"
	faceplayer
# 1104 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1105 "data/maps/Route104/scripts.pory"
	release
# 1106 "data/maps/Route104/scripts.pory"
	end
# 1107 "data/maps/Route104/scripts.pory"

# 1108 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 1109 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1110 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1111 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 1112 "data/maps/Route104/scripts.pory"
	release
# 1113 "data/maps/Route104/scripts.pory"
	end
# 1114 "data/maps/Route104/scripts.pory"

# 1115 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 1116 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 1117 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1118 "data/maps/Route104/scripts.pory"
	release
# 1119 "data/maps/Route104/scripts.pory"
	end
# 1120 "data/maps/Route104/scripts.pory"

# 1121 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 1122 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 1123 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1124 "data/maps/Route104/scripts.pory"
	release
# 1125 "data/maps/Route104/scripts.pory"
	end
# 1126 "data/maps/Route104/scripts.pory"

# 1127 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 1128 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 1129 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1130 "data/maps/Route104/scripts.pory"
	release
# 1131 "data/maps/Route104/scripts.pory"
	end
# 1132 "data/maps/Route104/scripts.pory"

# 1133 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 1134 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 1135 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 1136 "data/maps/Route104/scripts.pory"
	end
# 1137 "data/maps/Route104/scripts.pory"

# 1138 "data/maps/Route104/scripts.pory"
Route104_EventScript_GinaMia::
# 1139 "data/maps/Route104/scripts.pory"
lockall
# 1140 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_GINA
# 1141 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 1142 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1143 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1144 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 1145 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1146 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1147 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_GinaIntro, MSGBOX_AUTOCLOSE
# 1148 "data/maps/Route104/scripts.pory"
goto Route104_EventScript_GinaMiaDoMultiBattle
# 1149 "data/maps/Route104/scripts.pory"
releaseall
# 1150 "data/maps/Route104/scripts.pory"
end
# 1151 "data/maps/Route104/scripts.pory"

# 1152 "data/maps/Route104/scripts.pory"
Route104_EventScript_GinaMiaDoMultiBattle::
# 1153 "data/maps/Route104/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 1154 "data/maps/Route104/scripts.pory"
multi_2p_vs_1 TRAINER_GINA_AND_MIA_1, Route104_Text_GinaDefeat, PARTNER_EMMIE
# 1155 "data/maps/Route104/scripts.pory"
switch VAR_RESULT
# 1156 "data/maps/Route104/scripts.pory"
case 1, Route104_EventScript_GinaMiaVictory
# 1157 "data/maps/Route104/scripts.pory"
fadescreen FADE_TO_BLACK
# 1158 "data/maps/Route104/scripts.pory"
special SetCB2WhiteOut
# 1159 "data/maps/Route104/scripts.pory"
waitstate
# 1160 "data/maps/Route104/scripts.pory"

# 1161 "data/maps/Route104/scripts.pory"
Route104_EventScript_GinaMiaVictory::
# 1162 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1163 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1164 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_GinaPostBattle, MSGBOX_AUTOCLOSE
# 1165 "data/maps/Route104/scripts.pory"
addvar VAR_ROUTE104_STATE, 1
# 1166 "data/maps/Route104/scripts.pory"
end
# 1167 "data/maps/Route104/scripts.pory"

# 1168 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 1169 "data/maps/Route104/scripts.pory"
	faceplayer
# 1170 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1171 "data/maps/Route104/scripts.pory"
	release
# 1172 "data/maps/Route104/scripts.pory"
	end
# 1173 "data/maps/Route104/scripts.pory"

# 1174 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 1175 "data/maps/Route104/scripts.pory"
	faceplayer
# 1176 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1177 "data/maps/Route104/scripts.pory"
	release
# 1178 "data/maps/Route104/scripts.pory"
	end
# 1179 "data/maps/Route104/scripts.pory"

# 1180 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 1181 "data/maps/Route104/scripts.pory"
	faceplayer
# 1182 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1183 "data/maps/Route104/scripts.pory"
	end
# 1184 "data/maps/Route104/scripts.pory"

# 1185 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1186 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 1187 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 1188 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 1189 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 1190 "data/maps/Route104/scripts.pory"

# 1191 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1192 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 1193 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 1194 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 1195 "data/maps/Route104/scripts.pory"

# 1196 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1197 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 1198 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 1199 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1200 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1201 "data/maps/Route104/scripts.pory"

# 1202 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1203 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1204 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1205 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1206 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 1207 "data/maps/Route104/scripts.pory"

# 1208 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1209 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1210 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1211 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1212 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1213 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1214 "data/maps/Route104/scripts.pory"

# 1215 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1216 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1217 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1218 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1219 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1220 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1221 "data/maps/Route104/scripts.pory"

# 1222 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1223 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1224 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1225 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1226 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1227 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1228 "data/maps/Route104/scripts.pory"

# 1229 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1230 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1231 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1232 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1233 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1234 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1235 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1236 "data/maps/Route104/scripts.pory"

# 1237 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1238 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1239 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1240 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1241 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1242 "data/maps/Route104/scripts.pory"

# 1243 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1244 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1245 "data/maps/Route104/scripts.pory"

# 1246 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1247 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1248 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1249 "data/maps/Route104/scripts.pory"

# 1250 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1251 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1252 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1253 "data/maps/Route104/scripts.pory"

# 1254 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1255 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1256 "data/maps/Route104/scripts.pory"

# 1257 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1258 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1259 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1260 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1261 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1262 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1263 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1264 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1265 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1266 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 1267 "data/maps/Route104/scripts.pory"

# 1268 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1269 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1270 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 1271 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1272 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1273 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1274 "data/maps/Route104/scripts.pory"

# 1275 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1276 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1277 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1278 "data/maps/Route104/scripts.pory"

# 1279 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1280 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1281 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 1282 "data/maps/Route104/scripts.pory"

# 1283 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1284 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1285 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1286 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1287 "data/maps/Route104/scripts.pory"

# 1288 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1289 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1290 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1291 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 1292 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1293 "data/maps/Route104/scripts.pory"

# 1294 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1295 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1296 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1297 "data/maps/Route104/scripts.pory"

# 1298 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1299 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1300 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1301 "data/maps/Route104/scripts.pory"

# 1302 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1303 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1304 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1305 "data/maps/Route104/scripts.pory"

# 1306 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1307 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1308 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 1309 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1310 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1311 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1312 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 1313 "data/maps/Route104/scripts.pory"

# 1314 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1315 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1316 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1317 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 1318 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1319 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 1320 "data/maps/Route104/scripts.pory"

# 1321 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1322 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1323 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1324 "data/maps/Route104/scripts.pory"

# 1325 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1326 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 1327 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1328 "data/maps/Route104/scripts.pory"

# 1329 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1330 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1331 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1332 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1333 "data/maps/Route104/scripts.pory"

# 1334 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1335 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1336 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1337 "data/maps/Route104/scripts.pory"

# 1338 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1339 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1340 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1341 "data/maps/Route104/scripts.pory"

# 1342 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1343 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1344 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1345 "data/maps/Route104/scripts.pory"

# 1346 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1347 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1348 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1349 "data/maps/Route104/scripts.pory"

# 1350 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1351 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1352 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 1353 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1354 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 1355 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1356 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"
# 1357 "data/maps/Route104/scripts.pory"

# 1358 "data/maps/Route104/scripts.pory"
Route104_Text_Reporters:
# 1359 "data/maps/Route104/scripts.pory"
	.string "We are covering an ongoing incident\n"
# 1360 "data/maps/Route104/scripts.pory"
	.string "with Team Aqua and a missing Wingull.\p"
# 1361 "data/maps/Route104/scripts.pory"
	.string "Apologies but we cannot let you\n"
# 1362 "data/maps/Route104/scripts.pory"
>>>>>>> 4e01050c72 (20250609 01)
	.string "through at this time.$"
