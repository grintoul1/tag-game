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
	.byte 0
# 18 "data/maps/Route104/scripts.pory"

# 19 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 20 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 21 "data/maps/Route104/scripts.pory"
	.2byte 0
# 22 "data/maps/Route104/scripts.pory"

# 23 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 24 "data/maps/Route104/scripts.pory"
	lockall
# 25 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 26 "data/maps/Route104/scripts.pory"
	end
# 27 "data/maps/Route104/scripts.pory"

# 28 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 29 "data/maps/Route104/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 30 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 31 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 32 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 33 "data/maps/Route104/scripts.pory"
	end
# 34 "data/maps/Route104/scripts.pory"

# 35 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 36 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 37 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 38 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 39 "data/maps/Route104/scripts.pory"
	return
# 40 "data/maps/Route104/scripts.pory"

# 41 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 42 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 43 "data/maps/Route104/scripts.pory"
	return
# 44 "data/maps/Route104/scripts.pory"

# 45 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 46 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 47 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 48 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 49 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 50 "data/maps/Route104/scripts.pory"
	return
# 51 "data/maps/Route104/scripts.pory"

# 52 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 53 "data/maps/Route104/scripts.pory"
	return
# 54 "data/maps/Route104/scripts.pory"

# 55 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 56 "data/maps/Route104/scripts.pory"
	lockall
# 57 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 58 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 59 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 61 "data/maps/Route104/scripts.pory"

# 62 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 63 "data/maps/Route104/scripts.pory"
	lockall
# 64 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 65 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 66 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 67 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 68 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route104/scripts.pory"
	delay 10
# 70 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL
# 71 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 72 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 73 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 75 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route104/scripts.pory"
	delay 20
# 77 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 78 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 79 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 80 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 81 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 83 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 85 "data/maps/Route104/scripts.pory"

# 86 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 87 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 88 "data/maps/Route104/scripts.pory"
	checkplayergender
# 89 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 90 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 91 "data/maps/Route104/scripts.pory"
	return
# 92 "data/maps/Route104/scripts.pory"

# 93 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 94 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 95 "data/maps/Route104/scripts.pory"
	return
# 96 "data/maps/Route104/scripts.pory"

# 97 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 98 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 99 "data/maps/Route104/scripts.pory"
	return
# 100 "data/maps/Route104/scripts.pory"

# 101 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 102 "data/maps/Route104/scripts.pory"
	checkplayergender
# 103 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 104 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 105 "data/maps/Route104/scripts.pory"
	end
# 106 "data/maps/Route104/scripts.pory"

# 107 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 108 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 109 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 110 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 111 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 112 "data/maps/Route104/scripts.pory"
	closemessage
# 113 "data/maps/Route104/scripts.pory"
	delay 30
# 114 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 115 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 116 "data/maps/Route104/scripts.pory"
	waitfanfare
# 117 "data/maps/Route104/scripts.pory"
	closemessage
# 118 "data/maps/Route104/scripts.pory"
	delay 30
# 119 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 120 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 121 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 122 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 123 "data/maps/Route104/scripts.pory"
	closemessage
# 124 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 126 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 128 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 129 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 130 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 131 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 132 "data/maps/Route104/scripts.pory"
	releaseall
# 133 "data/maps/Route104/scripts.pory"
	end
# 134 "data/maps/Route104/scripts.pory"

# 135 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 136 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 137 "data/maps/Route104/scripts.pory"
	step_end
# 138 "data/maps/Route104/scripts.pory"

# 139 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 140 "data/maps/Route104/scripts.pory"
	walk_down
# 141 "data/maps/Route104/scripts.pory"
	face_right
# 142 "data/maps/Route104/scripts.pory"
	step_end
# 143 "data/maps/Route104/scripts.pory"

# 144 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 145 "data/maps/Route104/scripts.pory"
	delay_4
# 146 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 147 "data/maps/Route104/scripts.pory"
	step_end
# 148 "data/maps/Route104/scripts.pory"

# 149 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 150 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 151 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 152 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 153 "data/maps/Route104/scripts.pory"
	releaseall
# 154 "data/maps/Route104/scripts.pory"
	end
# 155 "data/maps/Route104/scripts.pory"

# 156 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 157 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 158 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 159 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 160 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 161 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 162 "data/maps/Route104/scripts.pory"
	end
# 163 "data/maps/Route104/scripts.pory"

# 164 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 165 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 166 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 167 "data/maps/Route104/scripts.pory"
	releaseall
# 168 "data/maps/Route104/scripts.pory"
	end
# 169 "data/maps/Route104/scripts.pory"

# 170 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 171 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 172 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 173 "data/maps/Route104/scripts.pory"
	return
# 174 "data/maps/Route104/scripts.pory"

# 175 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 176 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 177 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 178 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 179 "data/maps/Route104/scripts.pory"
	end
# 180 "data/maps/Route104/scripts.pory"

# 181 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 182 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 183 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 184 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 185 "data/maps/Route104/scripts.pory"
	end
# 186 "data/maps/Route104/scripts.pory"

# 187 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 188 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 189 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 190 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 191 "data/maps/Route104/scripts.pory"
	end
# 192 "data/maps/Route104/scripts.pory"

# 193 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 194 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 195 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 196 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 197 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 198 "data/maps/Route104/scripts.pory"
	closemessage
# 199 "data/maps/Route104/scripts.pory"
	delay 30
# 200 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 201 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 202 "data/maps/Route104/scripts.pory"
	waitfanfare
# 203 "data/maps/Route104/scripts.pory"
	closemessage
# 204 "data/maps/Route104/scripts.pory"
	delay 30
# 205 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 206 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 207 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 208 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 209 "data/maps/Route104/scripts.pory"
	closemessage
# 210 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 212 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 214 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 215 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 216 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 217 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 218 "data/maps/Route104/scripts.pory"
	releaseall
# 219 "data/maps/Route104/scripts.pory"
	end
# 220 "data/maps/Route104/scripts.pory"

# 221 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 222 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 223 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 224 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 225 "data/maps/Route104/scripts.pory"
	releaseall
# 226 "data/maps/Route104/scripts.pory"
	end
# 227 "data/maps/Route104/scripts.pory"

# 228 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 229 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 230 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 231 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 232 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 233 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 234 "data/maps/Route104/scripts.pory"
	end
# 235 "data/maps/Route104/scripts.pory"

# 236 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 237 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 238 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 239 "data/maps/Route104/scripts.pory"
	releaseall
# 240 "data/maps/Route104/scripts.pory"
	end
# 241 "data/maps/Route104/scripts.pory"

# 242 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 243 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 244 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 245 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 246 "data/maps/Route104/scripts.pory"
	end
# 247 "data/maps/Route104/scripts.pory"

# 248 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 249 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 250 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 251 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 252 "data/maps/Route104/scripts.pory"
	end
# 253 "data/maps/Route104/scripts.pory"

# 254 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 255 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 256 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 257 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 258 "data/maps/Route104/scripts.pory"
	end
# 259 "data/maps/Route104/scripts.pory"

# 260 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 261 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 262 "data/maps/Route104/scripts.pory"
	walk_down
# 263 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 264 "data/maps/Route104/scripts.pory"
	step_end
# 265 "data/maps/Route104/scripts.pory"

# 266 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 267 "data/maps/Route104/scripts.pory"
	walk_down
# 268 "data/maps/Route104/scripts.pory"
	step_end
# 269 "data/maps/Route104/scripts.pory"

# 270 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 271 "data/maps/Route104/scripts.pory"
	lock
# 272 "data/maps/Route104/scripts.pory"
	faceplayer
# 273 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 274 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 275 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 276 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 277 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 278 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 279 "data/maps/Route104/scripts.pory"
	release
# 280 "data/maps/Route104/scripts.pory"
	end
# 281 "data/maps/Route104/scripts.pory"

# 282 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 283 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 284 "data/maps/Route104/scripts.pory"
	release
# 285 "data/maps/Route104/scripts.pory"
	end
# 286 "data/maps/Route104/scripts.pory"

# 287 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 288 "data/maps/Route104/scripts.pory"
	lock
# 289 "data/maps/Route104/scripts.pory"
	faceplayer
# 290 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 291 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 292 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 293 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 294 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 295 "data/maps/Route104/scripts.pory"
	release
# 296 "data/maps/Route104/scripts.pory"
	end
# 297 "data/maps/Route104/scripts.pory"

# 298 "data/maps/Route104/scripts.pory"
Route104_EventScript_Reporters::
# 299 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_Reporters, MSGBOX_NPC
# 300 "data/maps/Route104/scripts.pory"
	end
# 301 "data/maps/Route104/scripts.pory"

# 302 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 303 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 304 "data/maps/Route104/scripts.pory"
	release
# 305 "data/maps/Route104/scripts.pory"
	end
# 306 "data/maps/Route104/scripts.pory"

# 307 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 308 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 309 "data/maps/Route104/scripts.pory"
	end
# 310 "data/maps/Route104/scripts.pory"

# 311 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 312 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 313 "data/maps/Route104/scripts.pory"
	end
# 314 "data/maps/Route104/scripts.pory"

# 315 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 316 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 317 "data/maps/Route104/scripts.pory"
	end
# 318 "data/maps/Route104/scripts.pory"

# 319 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 320 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 321 "data/maps/Route104/scripts.pory"
	end
# 322 "data/maps/Route104/scripts.pory"

# 323 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 324 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 325 "data/maps/Route104/scripts.pory"
	end
# 326 "data/maps/Route104/scripts.pory"

# 327 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 328 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 329 "data/maps/Route104/scripts.pory"
	end
# 330 "data/maps/Route104/scripts.pory"

# 331 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 332 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 333 "data/maps/Route104/scripts.pory"
	end
# 334 "data/maps/Route104/scripts.pory"

# 335 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 336 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 337 "data/maps/Route104/scripts.pory"
	end
# 338 "data/maps/Route104/scripts.pory"

# 339 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 340 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 341 "data/maps/Route104/scripts.pory"
	end
# 342 "data/maps/Route104/scripts.pory"

# 343 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 344 "data/maps/Route104/scripts.pory"
	lock
# 345 "data/maps/Route104/scripts.pory"
	faceplayer
# 346 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 347 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 348 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 349 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 350 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 351 "data/maps/Route104/scripts.pory"
	release
# 352 "data/maps/Route104/scripts.pory"
	end
# 353 "data/maps/Route104/scripts.pory"

# 354 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 355 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 356 "data/maps/Route104/scripts.pory"
	release
# 357 "data/maps/Route104/scripts.pory"
	end
# 358 "data/maps/Route104/scripts.pory"

# 359 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 360 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 361 "data/maps/Route104/scripts.pory"
	end
# 362 "data/maps/Route104/scripts.pory"

# 363 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 364 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 365 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 366 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 367 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 369 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 370 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 371 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 372 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 373 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewfordNoCall
# 374 "data/maps/Route104/scripts.pory"
	end
# 375 "data/maps/Route104/scripts.pory"

# 376 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 377 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 378 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 379 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 380 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 381 "data/maps/Route104/scripts.pory"

# 382 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 383 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 384 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 385 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 386 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 387 "data/maps/Route104/scripts.pory"
	waitmessage
# 388 "data/maps/Route104/scripts.pory"
	delay 30
# 389 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 390 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 391 "data/maps/Route104/scripts.pory"
	waitfanfare
# 392 "data/maps/Route104/scripts.pory"
	closemessage
# 393 "data/maps/Route104/scripts.pory"
	delay 30
# 394 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 395 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 396 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 397 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 398 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 399 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 400 "data/maps/Route104/scripts.pory"

# 401 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 402 "data/maps/Route104/scripts.pory"
	delay 50
# 403 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 404 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 405 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 406 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 407 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 408 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 409 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 410 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 411 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 412 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 413 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 414 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 415 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 416 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 417 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 418 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 419 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 420 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 421 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 422 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 423 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 424 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 425 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 426 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 427 "data/maps/Route104/scripts.pory"
	end
# 428 "data/maps/Route104/scripts.pory"

# 429 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 430 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 431 "data/maps/Route104/scripts.pory"
	releaseall
# 432 "data/maps/Route104/scripts.pory"
	end
# 433 "data/maps/Route104/scripts.pory"

# 434 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 435 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 436 "data/maps/Route104/scripts.pory"
	releaseall
# 437 "data/maps/Route104/scripts.pory"
	end
# 438 "data/maps/Route104/scripts.pory"

# 439 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 440 "data/maps/Route104/scripts.pory"
	walk_down
# 441 "data/maps/Route104/scripts.pory"
	walk_down
# 442 "data/maps/Route104/scripts.pory"
	walk_down
# 443 "data/maps/Route104/scripts.pory"
	walk_down
# 444 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 445 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 447 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 448 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 449 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 451 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 452 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 453 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 454 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 455 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 456 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 457 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 458 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 459 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 460 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 461 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 462 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 463 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 464 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 465 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 466 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 467 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 468 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 469 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 470 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 471 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 472 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 473 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 474 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 475 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 476 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 477 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 478 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 479 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 480 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 481 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 482 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 483 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 484 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 485 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 486 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 487 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 488 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 489 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 490 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 491 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 492 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 493 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 494 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 495 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 496 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 497 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 498 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 499 "data/maps/Route104/scripts.pory"
	walk_faster_down
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
	step_end
# 538 "data/maps/Route104/scripts.pory"

# 539 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
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
	walk_faster_down
# 559 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 564 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 565 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 566 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 567 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 568 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 569 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 570 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 571 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 572 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 573 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 574 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 575 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 576 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 577 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 578 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 579 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 580 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 582 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 583 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 584 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 585 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 586 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 587 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 588 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 589 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 590 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 591 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 592 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 593 "data/maps/Route104/scripts.pory"
	walk_faster_right
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
	walk_fast_right
# 613 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 614 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 615 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 616 "data/maps/Route104/scripts.pory"
	walk_right
# 617 "data/maps/Route104/scripts.pory"
	walk_right
# 618 "data/maps/Route104/scripts.pory"
	walk_down
# 619 "data/maps/Route104/scripts.pory"
	walk_down
# 620 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 621 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 622 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 623 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 624 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 625 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 626 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 627 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 628 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 629 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 630 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 631 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 632 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 633 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 634 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 635 "data/maps/Route104/scripts.pory"
	walk_down
# 636 "data/maps/Route104/scripts.pory"
	walk_down
# 637 "data/maps/Route104/scripts.pory"
	step_end
# 638 "data/maps/Route104/scripts.pory"

# 639 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 640 "data/maps/Route104/scripts.pory"
	walk_down
# 641 "data/maps/Route104/scripts.pory"
	walk_down
# 642 "data/maps/Route104/scripts.pory"
	walk_down
# 643 "data/maps/Route104/scripts.pory"
	walk_down
# 644 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 645 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 646 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 647 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 648 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 649 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 650 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 651 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 652 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 653 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 654 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 655 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 656 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 657 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 658 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 659 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 660 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 661 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 662 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 663 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 664 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 665 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 666 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 667 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 668 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 669 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 670 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 671 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 672 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 673 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 674 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 675 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 676 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 677 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 678 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 679 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 680 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 681 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 682 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 683 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 684 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 685 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 686 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 687 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 688 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 689 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 690 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 691 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 692 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 693 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 694 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 695 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 696 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 697 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 698 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 699 "data/maps/Route104/scripts.pory"
	walk_faster_down
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
	walk_fast_down
# 762 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 763 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 764 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 765 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 766 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 767 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 768 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 769 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 770 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 771 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 772 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 773 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 774 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 775 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 776 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 777 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 778 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 779 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 780 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 781 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 782 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 783 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 784 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 785 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 786 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 787 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 788 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 789 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 790 "data/maps/Route104/scripts.pory"
	walk_faster_right
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
	walk_fast_right
# 810 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 811 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 812 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 813 "data/maps/Route104/scripts.pory"
	walk_right
# 814 "data/maps/Route104/scripts.pory"
	walk_right
# 815 "data/maps/Route104/scripts.pory"
	walk_down
# 816 "data/maps/Route104/scripts.pory"
	walk_down
# 817 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 818 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 819 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 820 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 821 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 822 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 823 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 824 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 825 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 826 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 827 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 828 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 829 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 830 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 831 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 832 "data/maps/Route104/scripts.pory"
	walk_down
# 833 "data/maps/Route104/scripts.pory"
	walk_down
# 834 "data/maps/Route104/scripts.pory"
	step_end
# 835 "data/maps/Route104/scripts.pory"

# 836 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 837 "data/maps/Route104/scripts.pory"
	walk_left
# 838 "data/maps/Route104/scripts.pory"
	walk_down
# 839 "data/maps/Route104/scripts.pory"
	walk_down
# 840 "data/maps/Route104/scripts.pory"
	step_end
# 841 "data/maps/Route104/scripts.pory"

# 842 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 843 "data/maps/Route104/scripts.pory"
	walk_down
# 844 "data/maps/Route104/scripts.pory"
	step_end
# 845 "data/maps/Route104/scripts.pory"

# 846 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 847 "data/maps/Route104/scripts.pory"
	walk_down
# 848 "data/maps/Route104/scripts.pory"
	walk_left
# 849 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 850 "data/maps/Route104/scripts.pory"
	step_end
# 851 "data/maps/Route104/scripts.pory"

# 852 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 853 "data/maps/Route104/scripts.pory"
	walk_down
# 854 "data/maps/Route104/scripts.pory"
	walk_down
# 855 "data/maps/Route104/scripts.pory"
	step_end
# 856 "data/maps/Route104/scripts.pory"

# 857 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 858 "data/maps/Route104/scripts.pory"
	walk_down
# 859 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 860 "data/maps/Route104/scripts.pory"
	step_end
# 861 "data/maps/Route104/scripts.pory"

# 862 "data/maps/Route104/scripts.pory"
Route104_EventScript_IvanDarian::
# 863 "data/maps/Route104/scripts.pory"
lockall
# 864 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_IVAN
# 865 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 866 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 867 "data/maps/Route104/scripts.pory"
waitmovement 0
# 868 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 869 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 870 "data/maps/Route104/scripts.pory"
waitmovement 0
# 871 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_IvanIntro MSGBOX_AUTOCLOSE
# 872 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_DARIAN
# 873 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 874 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 875 "data/maps/Route104/scripts.pory"
waitmovement 0
# 876 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 877 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 878 "data/maps/Route104/scripts.pory"
waitmovement 0
# 879 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_DarianIntro MSGBOX_AUTOCLOSE
# 880 "data/maps/Route104/scripts.pory"
goto Route104_EventScript_IvanDarianDoMultiBattle
# 881 "data/maps/Route104/scripts.pory"
releaseall
# 882 "data/maps/Route104/scripts.pory"
end
# 883 "data/maps/Route104/scripts.pory"

# 884 "data/maps/Route104/scripts.pory"
Route104_EventScript_IvanDarianDoMultiBattle::
# 885 "data/maps/Route104/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 886 "data/maps/Route104/scripts.pory"
multi_2p_vs_2 TRAINER_IVAN, Route104_Text_IvanDefeat, TRAINER_DARIAN, Route104_Text_DarianDefeat, PARTNER_EMMIE
# 887 "data/maps/Route104/scripts.pory"
switch VAR_RESULT
# 888 "data/maps/Route104/scripts.pory"
case 1, Route104_EventScript_IvanDarianVictory
# 889 "data/maps/Route104/scripts.pory"
fadescreen FADE_TO_BLACK
# 890 "data/maps/Route104/scripts.pory"
special SetCB2WhiteOut
# 891 "data/maps/Route104/scripts.pory"
waitstate
# 892 "data/maps/Route104/scripts.pory"

# 893 "data/maps/Route104/scripts.pory"
Route104_EventScript_IvanDarianVictory::
# 894 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 895 "data/maps/Route104/scripts.pory"
waitmovement 0
# 896 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 897 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 898 "data/maps/Route104/scripts.pory"
waitmovement 0
# 899 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 900 "data/maps/Route104/scripts.pory"
addvar VAR_ROUTE104_STATE, 1
# 901 "data/maps/Route104/scripts.pory"
end
# 902 "data/maps/Route104/scripts.pory"

# 903 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 904 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 905 "data/maps/Route104/scripts.pory"
	end
# 906 "data/maps/Route104/scripts.pory"

# 907 "data/maps/Route104/scripts.pory"
Route104_EventScript_HaleyBilly::
# 908 "data/maps/Route104/scripts.pory"
lockall
# 909 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_HALEY
# 910 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 911 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 912 "data/maps/Route104/scripts.pory"
waitmovement 0
# 913 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 914 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 915 "data/maps/Route104/scripts.pory"
waitmovement 0
# 916 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_HaleyIntro MSGBOX_AUTOCLOSE
# 917 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_BILLY
# 918 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 919 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 920 "data/maps/Route104/scripts.pory"
waitmovement 0
# 921 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 922 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 923 "data/maps/Route104/scripts.pory"
waitmovement 0
# 924 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_BillyIntro MSGBOX_AUTOCLOSE
# 925 "data/maps/Route104/scripts.pory"
goto Route104_EventScript_HaleyBillyDoMultiBattle
# 926 "data/maps/Route104/scripts.pory"
releaseall
# 927 "data/maps/Route104/scripts.pory"
end
# 928 "data/maps/Route104/scripts.pory"

# 929 "data/maps/Route104/scripts.pory"
Route104_EventScript_HaleyBillyDoMultiBattle::
# 930 "data/maps/Route104/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 931 "data/maps/Route104/scripts.pory"
multi_2p_vs_2 TRAINER_HALEY_1, Route104_Text_HaleyDefeat, TRAINER_BILLY, Route104_Text_BillyDefeat, PARTNER_EMMIE
# 932 "data/maps/Route104/scripts.pory"
switch VAR_RESULT
# 933 "data/maps/Route104/scripts.pory"
case 1, Route104_EventScript_HaleyBillyVictory
# 934 "data/maps/Route104/scripts.pory"
fadescreen FADE_TO_BLACK
# 935 "data/maps/Route104/scripts.pory"
special SetCB2WhiteOut
# 936 "data/maps/Route104/scripts.pory"
waitstate
# 937 "data/maps/Route104/scripts.pory"

# 938 "data/maps/Route104/scripts.pory"
Route104_EventScript_HaleyBillyVictory::
# 939 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 940 "data/maps/Route104/scripts.pory"
waitmovement 0
# 941 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_HaleyPostBattle, MSGBOX_AUTOCLOSE
# 942 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 943 "data/maps/Route104/scripts.pory"
waitmovement 0
# 944 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 945 "data/maps/Route104/scripts.pory"
addvar VAR_ROUTE104_STATE, 1
# 946 "data/maps/Route104/scripts.pory"
end
# 947 "data/maps/Route104/scripts.pory"

# 948 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 949 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 950 "data/maps/Route104/scripts.pory"
	end
# 951 "data/maps/Route104/scripts.pory"

# 952 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 953 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 954 "data/maps/Route104/scripts.pory"
	release
# 955 "data/maps/Route104/scripts.pory"
	end
# 956 "data/maps/Route104/scripts.pory"

# 957 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 958 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 959 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 960 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 961 "data/maps/Route104/scripts.pory"
	release
# 962 "data/maps/Route104/scripts.pory"
	end
# 963 "data/maps/Route104/scripts.pory"

# 964 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 965 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 966 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 967 "data/maps/Route104/scripts.pory"
	release
# 968 "data/maps/Route104/scripts.pory"
	end
# 969 "data/maps/Route104/scripts.pory"

# 970 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 971 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 972 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 973 "data/maps/Route104/scripts.pory"
	release
# 974 "data/maps/Route104/scripts.pory"
	end
# 975 "data/maps/Route104/scripts.pory"

# 976 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 977 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 978 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 979 "data/maps/Route104/scripts.pory"
	release
# 980 "data/maps/Route104/scripts.pory"
	end
# 981 "data/maps/Route104/scripts.pory"

# 982 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 983 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 984 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 985 "data/maps/Route104/scripts.pory"
	end
# 986 "data/maps/Route104/scripts.pory"

# 987 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 988 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 989 "data/maps/Route104/scripts.pory"
	release
# 990 "data/maps/Route104/scripts.pory"
	end
# 991 "data/maps/Route104/scripts.pory"

# 992 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 993 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 994 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 995 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 996 "data/maps/Route104/scripts.pory"
	release
# 997 "data/maps/Route104/scripts.pory"
	end
# 998 "data/maps/Route104/scripts.pory"

# 999 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 1000 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 1001 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1002 "data/maps/Route104/scripts.pory"
	release
# 1003 "data/maps/Route104/scripts.pory"
	end
# 1004 "data/maps/Route104/scripts.pory"

# 1005 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 1006 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 1007 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1008 "data/maps/Route104/scripts.pory"
	release
# 1009 "data/maps/Route104/scripts.pory"
	end
# 1010 "data/maps/Route104/scripts.pory"

# 1011 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 1012 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 1013 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1014 "data/maps/Route104/scripts.pory"
	release
# 1015 "data/maps/Route104/scripts.pory"
	end
# 1016 "data/maps/Route104/scripts.pory"

# 1017 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 1018 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 1019 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 1020 "data/maps/Route104/scripts.pory"
	end
# 1021 "data/maps/Route104/scripts.pory"

# 1022 "data/maps/Route104/scripts.pory"
Route104_EventScript_CindyWinston::
# 1023 "data/maps/Route104/scripts.pory"
lockall
# 1024 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_CINDY
# 1025 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 1026 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1027 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1028 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 1029 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1030 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1031 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_CindyIntro MSGBOX_AUTOCLOSE
# 1032 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_WINSTON
# 1033 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 1034 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1035 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1036 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 1037 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1038 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1039 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_WinstonIntro MSGBOX_AUTOCLOSE
# 1040 "data/maps/Route104/scripts.pory"
goto Route104_EventScript_CindyWinstonDoMultiBattle
# 1041 "data/maps/Route104/scripts.pory"
releaseall
# 1042 "data/maps/Route104/scripts.pory"
end
# 1043 "data/maps/Route104/scripts.pory"

# 1044 "data/maps/Route104/scripts.pory"
Route104_EventScript_CindyWinstonDoMultiBattle::
# 1045 "data/maps/Route104/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 1046 "data/maps/Route104/scripts.pory"
multi_2p_vs_2 TRAINER_CINDY_1, Route104_Text_CindyDefeat, TRAINER_WINSTON_1, Route104_Text_WinstonDefeat, PARTNER_EMMIE
# 1047 "data/maps/Route104/scripts.pory"
switch VAR_RESULT
# 1048 "data/maps/Route104/scripts.pory"
case 1, Route104_EventScript_CindyWinstonVictory
# 1049 "data/maps/Route104/scripts.pory"
fadescreen FADE_TO_BLACK
# 1050 "data/maps/Route104/scripts.pory"
special SetCB2WhiteOut
# 1051 "data/maps/Route104/scripts.pory"
waitstate
# 1052 "data/maps/Route104/scripts.pory"

# 1053 "data/maps/Route104/scripts.pory"
Route104_EventScript_CindyWinstonVictory::
# 1054 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1055 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1056 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_CindyPostBattle, MSGBOX_AUTOCLOSE
# 1057 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1058 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1059 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_WinstonPostBattle, MSGBOX_AUTOCLOSE
# 1060 "data/maps/Route104/scripts.pory"
addvar VAR_ROUTE104_STATE, 1
# 1061 "data/maps/Route104/scripts.pory"
end
# 1062 "data/maps/Route104/scripts.pory"

# 1063 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 1064 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1065 "data/maps/Route104/scripts.pory"
	release
# 1066 "data/maps/Route104/scripts.pory"
	end
# 1067 "data/maps/Route104/scripts.pory"

# 1068 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 1069 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1070 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1071 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 1072 "data/maps/Route104/scripts.pory"
	release
# 1073 "data/maps/Route104/scripts.pory"
	end
# 1074 "data/maps/Route104/scripts.pory"

# 1075 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 1076 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 1077 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1078 "data/maps/Route104/scripts.pory"
	release
# 1079 "data/maps/Route104/scripts.pory"
	end
# 1080 "data/maps/Route104/scripts.pory"

# 1081 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 1082 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 1083 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1084 "data/maps/Route104/scripts.pory"
	release
# 1085 "data/maps/Route104/scripts.pory"
	end
# 1086 "data/maps/Route104/scripts.pory"

# 1087 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 1088 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 1089 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1090 "data/maps/Route104/scripts.pory"
	release
# 1091 "data/maps/Route104/scripts.pory"
	end
# 1092 "data/maps/Route104/scripts.pory"

# 1093 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 1094 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 1095 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 1096 "data/maps/Route104/scripts.pory"
	end
# 1097 "data/maps/Route104/scripts.pory"

# 1098 "data/maps/Route104/scripts.pory"
Route104_EventScript_GinaMia::
# 1099 "data/maps/Route104/scripts.pory"
lockall
# 1100 "data/maps/Route104/scripts.pory"
setvar VAR_0x8008, LOCALID_GINA
# 1101 "data/maps/Route104/scripts.pory"
playse SE_PIN
# 1102 "data/maps/Route104/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 1103 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1104 "data/maps/Route104/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 1105 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1106 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1107 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_GinaIntro MSGBOX_AUTOCLOSE
# 1108 "data/maps/Route104/scripts.pory"
goto Route104_EventScript_GinaMiaDoMultiBattle
# 1109 "data/maps/Route104/scripts.pory"
releaseall
# 1110 "data/maps/Route104/scripts.pory"
end
# 1111 "data/maps/Route104/scripts.pory"

# 1112 "data/maps/Route104/scripts.pory"
Route104_EventScript_GinaMiaDoMultiBattle::
# 1113 "data/maps/Route104/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 1114 "data/maps/Route104/scripts.pory"
multi_2p_vs_1 TRAINER_GINA_AND_MIA_1, Route104_Text_GinaDefeat, PARTNER_EMMIE
# 1115 "data/maps/Route104/scripts.pory"
switch VAR_RESULT
# 1116 "data/maps/Route104/scripts.pory"
case 1, Route104_EventScript_GinaMiaVictory
# 1117 "data/maps/Route104/scripts.pory"
fadescreen FADE_TO_BLACK
# 1118 "data/maps/Route104/scripts.pory"
special SetCB2WhiteOut
# 1119 "data/maps/Route104/scripts.pory"
waitstate
# 1120 "data/maps/Route104/scripts.pory"

# 1121 "data/maps/Route104/scripts.pory"
Route104_EventScript_GinaMiaVictory::
# 1122 "data/maps/Route104/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1123 "data/maps/Route104/scripts.pory"
waitmovement 0
# 1124 "data/maps/Route104/scripts.pory"
msgbox Route104_Text_GinaPostBattle, MSGBOX_AUTOCLOSE
# 1125 "data/maps/Route104/scripts.pory"
addvar VAR_ROUTE104_STATE, 1
# 1126 "data/maps/Route104/scripts.pory"
end
# 1127 "data/maps/Route104/scripts.pory"

# 1128 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 1129 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1130 "data/maps/Route104/scripts.pory"
	release
# 1131 "data/maps/Route104/scripts.pory"
	end
# 1132 "data/maps/Route104/scripts.pory"

# 1133 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 1134 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1135 "data/maps/Route104/scripts.pory"
	release
# 1136 "data/maps/Route104/scripts.pory"
	end
# 1137 "data/maps/Route104/scripts.pory"

# 1138 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 1139 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1140 "data/maps/Route104/scripts.pory"
	end
# 1141 "data/maps/Route104/scripts.pory"

# 1142 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1143 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 1144 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 1145 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 1146 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 1147 "data/maps/Route104/scripts.pory"

# 1148 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1149 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 1150 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 1151 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 1152 "data/maps/Route104/scripts.pory"

# 1153 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1154 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 1155 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 1156 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1157 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1158 "data/maps/Route104/scripts.pory"

# 1159 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1160 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1161 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1162 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1163 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 1164 "data/maps/Route104/scripts.pory"

# 1165 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1166 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1167 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1168 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1169 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1170 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1171 "data/maps/Route104/scripts.pory"

# 1172 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1173 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1174 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1175 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1176 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1177 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1178 "data/maps/Route104/scripts.pory"

# 1179 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1180 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1181 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1182 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1183 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1184 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1185 "data/maps/Route104/scripts.pory"

# 1186 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1187 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1188 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1189 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1190 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1191 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1192 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1193 "data/maps/Route104/scripts.pory"

# 1194 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1195 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1196 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1197 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1198 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1199 "data/maps/Route104/scripts.pory"

# 1200 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1201 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1202 "data/maps/Route104/scripts.pory"

# 1203 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1204 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1205 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1206 "data/maps/Route104/scripts.pory"

# 1207 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1208 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1209 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1210 "data/maps/Route104/scripts.pory"

# 1211 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1212 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1213 "data/maps/Route104/scripts.pory"

# 1214 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1215 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1216 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1217 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1218 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1219 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1220 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1221 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1222 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1223 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 1224 "data/maps/Route104/scripts.pory"

# 1225 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1226 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1227 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 1228 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1229 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1230 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1231 "data/maps/Route104/scripts.pory"

# 1232 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1233 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1234 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1235 "data/maps/Route104/scripts.pory"

# 1236 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1237 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1238 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 1239 "data/maps/Route104/scripts.pory"

# 1240 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1241 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1242 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1243 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1244 "data/maps/Route104/scripts.pory"

# 1245 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1246 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1247 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1248 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 1249 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1250 "data/maps/Route104/scripts.pory"

# 1251 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1252 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1253 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1254 "data/maps/Route104/scripts.pory"

# 1255 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1256 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1257 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1258 "data/maps/Route104/scripts.pory"

# 1259 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1260 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1261 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1262 "data/maps/Route104/scripts.pory"

# 1263 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1264 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1265 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 1266 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1267 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1268 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1269 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 1270 "data/maps/Route104/scripts.pory"

# 1271 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1272 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1273 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1274 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 1275 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1276 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 1277 "data/maps/Route104/scripts.pory"

# 1278 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1279 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1280 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1281 "data/maps/Route104/scripts.pory"

# 1282 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1283 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 1284 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1285 "data/maps/Route104/scripts.pory"

# 1286 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1287 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1288 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1289 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1290 "data/maps/Route104/scripts.pory"

# 1291 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1292 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1293 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1294 "data/maps/Route104/scripts.pory"

# 1295 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1296 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1297 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1298 "data/maps/Route104/scripts.pory"

# 1299 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1300 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1301 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1302 "data/maps/Route104/scripts.pory"

# 1303 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1304 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1305 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1306 "data/maps/Route104/scripts.pory"

# 1307 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1308 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1309 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 1310 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1311 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 1312 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1313 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"
# 1314 "data/maps/Route104/scripts.pory"

# 1315 "data/maps/Route104/scripts.pory"
Route104_Text_Reporters:
# 1316 "data/maps/Route104/scripts.pory"
	.string "We are covering an ongoing incident\n"
# 1317 "data/maps/Route104/scripts.pory"
	.string "with Team Aqua and a missing Wingull.\p"
# 1318 "data/maps/Route104/scripts.pory"
	.string "Apologies but we cannot let you\n"
# 1319 "data/maps/Route104/scripts.pory"
	.string "through at this time.$"
