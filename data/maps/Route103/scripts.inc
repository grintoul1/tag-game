# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"
.set LOCALID_ANDREW, 6
# 3 "data/maps/Route103/scripts.pory"
.set LOCALID_MIGUEL, 12
# 4 "data/maps/Route103/scripts.pory"
.set LOCALID_AMY, 5
# 5 "data/maps/Route103/scripts.pory"
.set LOCALID_RHETT, 16
# 6 "data/maps/Route103/scripts.pory"
.set LOCALID_MARCOS, 17
# 7 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 8 "data/maps/Route103/scripts.pory"

# 9 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 10 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 11 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 12 "data/maps/Route103/scripts.pory"
	.byte 0
# 13 "data/maps/Route103/scripts.pory"

# 14 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 15 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 16 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 17 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 19 "data/maps/Route103/scripts.pory"
	end
# 20 "data/maps/Route103/scripts.pory"

# 21 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 22 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 23 "data/maps/Route103/scripts.pory"
	end
# 24 "data/maps/Route103/scripts.pory"

# 25 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 26 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 27 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 28 "data/maps/Route103/scripts.pory"
	return
# 29 "data/maps/Route103/scripts.pory"

# 30 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 31 "data/maps/Route103/scripts.pory"
	lockall
# 32 "data/maps/Route103/scripts.pory"
	checkplayergender
# 33 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 34 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 35 "data/maps/Route103/scripts.pory"
	end
# 36 "data/maps/Route103/scripts.pory"

# 37 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 38 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 39 "data/maps/Route103/scripts.pory"
	closemessage
# 40 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 41 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 42 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 44 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 46 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 48 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 49 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 50 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 51 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 52 "data/maps/Route103/scripts.pory"
	end
# 53 "data/maps/Route103/scripts.pory"

# 54 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 55 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 56 "data/maps/Route103/scripts.pory"
	closemessage
# 57 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 58 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 59 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 61 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 63 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 65 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 66 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 67 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 68 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 69 "data/maps/Route103/scripts.pory"
	end
# 70 "data/maps/Route103/scripts.pory"

# 71 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 72 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 73 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 74 "data/maps/Route103/scripts.pory"
	end
# 75 "data/maps/Route103/scripts.pory"

# 76 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 77 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 78 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 79 "data/maps/Route103/scripts.pory"
	end
# 80 "data/maps/Route103/scripts.pory"

# 81 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 82 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 83 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 84 "data/maps/Route103/scripts.pory"
	end
# 85 "data/maps/Route103/scripts.pory"

# 86 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 87 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 88 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 89 "data/maps/Route103/scripts.pory"
	end
# 90 "data/maps/Route103/scripts.pory"

# 91 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 92 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 93 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 94 "data/maps/Route103/scripts.pory"
	end
# 95 "data/maps/Route103/scripts.pory"

# 96 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 97 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 98 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 99 "data/maps/Route103/scripts.pory"
	end
# 100 "data/maps/Route103/scripts.pory"

# 101 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 102 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 103 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 104 "data/maps/Route103/scripts.pory"
	end
# 105 "data/maps/Route103/scripts.pory"

# 106 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 107 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 108 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 109 "data/maps/Route103/scripts.pory"
	end
# 110 "data/maps/Route103/scripts.pory"

# 111 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 112 "data/maps/Route103/scripts.pory"
	closemessage
# 113 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 114 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 115 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 116 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 117 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 118 "data/maps/Route103/scripts.pory"
	end
# 119 "data/maps/Route103/scripts.pory"

# 120 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 121 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 122 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 123 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 125 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 126 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 128 "data/maps/Route103/scripts.pory"
	end
# 129 "data/maps/Route103/scripts.pory"

# 130 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 131 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 132 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 133 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 135 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 136 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 138 "data/maps/Route103/scripts.pory"
	end
# 139 "data/maps/Route103/scripts.pory"

# 140 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 141 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 142 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 144 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 145 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 147 "data/maps/Route103/scripts.pory"
	end
# 148 "data/maps/Route103/scripts.pory"

# 149 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 150 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 151 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 152 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 153 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 154 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 155 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 156 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 157 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 158 "data/maps/Route103/scripts.pory"
	releaseall
# 159 "data/maps/Route103/scripts.pory"
	end
# 160 "data/maps/Route103/scripts.pory"

# 161 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 162 "data/maps/Route103/scripts.pory"
	walk_left
# 163 "data/maps/Route103/scripts.pory"
	walk_down
# 164 "data/maps/Route103/scripts.pory"
	step_end
# 165 "data/maps/Route103/scripts.pory"

# 166 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 167 "data/maps/Route103/scripts.pory"
	jump_2_down
# 168 "data/maps/Route103/scripts.pory"
	delay_16
# 169 "data/maps/Route103/scripts.pory"
	walk_down
# 170 "data/maps/Route103/scripts.pory"
	walk_down
# 171 "data/maps/Route103/scripts.pory"
	walk_down
# 172 "data/maps/Route103/scripts.pory"
	walk_down
# 173 "data/maps/Route103/scripts.pory"
	step_end
# 174 "data/maps/Route103/scripts.pory"

# 175 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 176 "data/maps/Route103/scripts.pory"
	delay_16
# 177 "data/maps/Route103/scripts.pory"
	delay_4
# 178 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 179 "data/maps/Route103/scripts.pory"
	delay_16
# 180 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 181 "data/maps/Route103/scripts.pory"
	step_end
# 182 "data/maps/Route103/scripts.pory"

# 183 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 184 "data/maps/Route103/scripts.pory"
	walk_down
# 185 "data/maps/Route103/scripts.pory"
	step_end
# 186 "data/maps/Route103/scripts.pory"

# 187 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 188 "data/maps/Route103/scripts.pory"
	jump_2_down
# 189 "data/maps/Route103/scripts.pory"
	delay_16
# 190 "data/maps/Route103/scripts.pory"
	walk_down
# 191 "data/maps/Route103/scripts.pory"
	walk_down
# 192 "data/maps/Route103/scripts.pory"
	walk_down
# 193 "data/maps/Route103/scripts.pory"
	step_end
# 194 "data/maps/Route103/scripts.pory"

# 195 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 196 "data/maps/Route103/scripts.pory"
	delay_16
# 197 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 198 "data/maps/Route103/scripts.pory"
	step_end
# 199 "data/maps/Route103/scripts.pory"

# 200 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 201 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 202 "data/maps/Route103/scripts.pory"
	end
# 203 "data/maps/Route103/scripts.pory"

# 204 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 205 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 206 "data/maps/Route103/scripts.pory"
	end
# 207 "data/maps/Route103/scripts.pory"

# 208 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 209 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 210 "data/maps/Route103/scripts.pory"
	end
# 211 "data/maps/Route103/scripts.pory"

# 212 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 213 "data/maps/Route103/scripts.pory"
	faceplayer
# 214 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/Route103/scripts.pory"
	end
# 216 "data/maps/Route103/scripts.pory"

# 217 "data/maps/Route103/scripts.pory"
Route103_EventScript_AmyLiv::
# 218 "data/maps/Route103/scripts.pory"
lockall
# 219 "data/maps/Route103/scripts.pory"
setvar VAR_0x8008, LOCALID_AMY
# 220 "data/maps/Route103/scripts.pory"
playse SE_PIN
# 221 "data/maps/Route103/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 222 "data/maps/Route103/scripts.pory"
waitmovement 0
# 223 "data/maps/Route103/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 224 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 225 "data/maps/Route103/scripts.pory"
waitmovement 0
# 226 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_AmyIntro, MSGBOX_AUTOCLOSE
# 227 "data/maps/Route103/scripts.pory"
goto Route103_EventScript_AmyLivDoMultiBattle
# 228 "data/maps/Route103/scripts.pory"
releaseall
# 229 "data/maps/Route103/scripts.pory"
end
# 230 "data/maps/Route103/scripts.pory"

# 231 "data/maps/Route103/scripts.pory"
Route103_EventScript_AmyLivDoMultiBattle::
# 232 "data/maps/Route103/scripts.pory"
playbgm MUS_ROUTE101, TRUE
# 233 "data/maps/Route103/scripts.pory"
multi_2p_vs_1 TRAINER_AMY_AND_LIV_1, Route103_Text_AmyDefeated, PARTNER_EMMIE
# 234 "data/maps/Route103/scripts.pory"
switch VAR_RESULT
# 235 "data/maps/Route103/scripts.pory"
case 1, Route103_EventScript_AmyLivVictory
# 236 "data/maps/Route103/scripts.pory"
fadescreen FADE_TO_BLACK
# 237 "data/maps/Route103/scripts.pory"
special SetCB2WhiteOut
# 238 "data/maps/Route103/scripts.pory"
waitstate
# 239 "data/maps/Route103/scripts.pory"

# 240 "data/maps/Route103/scripts.pory"
Route103_EventScript_AmyLivVictory::
# 241 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 242 "data/maps/Route103/scripts.pory"
waitmovement 0
# 243 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/Route103/scripts.pory"
addvar VAR_ROUTE103_STATE, 1
# 245 "data/maps/Route103/scripts.pory"
end
# 246 "data/maps/Route103/scripts.pory"

# 247 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 248 "data/maps/Route103/scripts.pory"
	faceplayer
# 249 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 250 "data/maps/Route103/scripts.pory"
	end
# 251 "data/maps/Route103/scripts.pory"

# 252 "data/maps/Route103/scripts.pory"
Route103_EventScript_AmyRegisterMatchCallAfterBattle::
# 253 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 254 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 255 "data/maps/Route103/scripts.pory"
	release
# 256 "data/maps/Route103/scripts.pory"
	end
# 257 "data/maps/Route103/scripts.pory"

# 258 "data/maps/Route103/scripts.pory"
Route103_EventScript_AmyRematch::
# 259 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 260 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/Route103/scripts.pory"
	end
# 262 "data/maps/Route103/scripts.pory"

# 263 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 264 "data/maps/Route103/scripts.pory"
	faceplayer
# 265 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 266 "data/maps/Route103/scripts.pory"
	end
# 267 "data/maps/Route103/scripts.pory"

# 268 "data/maps/Route103/scripts.pory"
Route103_EventScript_LivRegisterMatchCallAfterBattle::
# 269 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 270 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 271 "data/maps/Route103/scripts.pory"
	release
# 272 "data/maps/Route103/scripts.pory"
	end
# 273 "data/maps/Route103/scripts.pory"

# 274 "data/maps/Route103/scripts.pory"
Route103_EventScript_LivRematch::
# 275 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 276 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 277 "data/maps/Route103/scripts.pory"
	end
# 278 "data/maps/Route103/scripts.pory"

# 279 "data/maps/Route103/scripts.pory"
Route103_EventScript_AndrewMiguel::
# 280 "data/maps/Route103/scripts.pory"
lockall
# 281 "data/maps/Route103/scripts.pory"
setvar VAR_0x8008, LOCALID_ANDREW
# 282 "data/maps/Route103/scripts.pory"
playse SE_PIN
# 283 "data/maps/Route103/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 284 "data/maps/Route103/scripts.pory"
waitmovement 0
# 285 "data/maps/Route103/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 286 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 287 "data/maps/Route103/scripts.pory"
waitmovement 0
# 288 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_AndrewIntro MSGBOX_AUTOCLOSE
# 289 "data/maps/Route103/scripts.pory"
setvar VAR_0x8008, LOCALID_MIGUEL
# 290 "data/maps/Route103/scripts.pory"
playse SE_PIN
# 291 "data/maps/Route103/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 292 "data/maps/Route103/scripts.pory"
waitmovement 0
# 293 "data/maps/Route103/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 294 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 295 "data/maps/Route103/scripts.pory"
waitmovement 0
# 296 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_MiguelIntro, MSGBOX_AUTOCLOSE
# 297 "data/maps/Route103/scripts.pory"
goto Route103_EventScript_AndrewMiguelDoMultiBattle
# 298 "data/maps/Route103/scripts.pory"
releaseall
# 299 "data/maps/Route103/scripts.pory"
end
# 300 "data/maps/Route103/scripts.pory"

# 301 "data/maps/Route103/scripts.pory"
Route103_EventScript_AndrewMiguelDoMultiBattle::
# 302 "data/maps/Route103/scripts.pory"
playbgm MUS_ROUTE101, TRUE
# 303 "data/maps/Route103/scripts.pory"
multi_2p_vs_2 TRAINER_ANDREW, Route103_Text_AndrewDefeated, TRAINER_MIGUEL_1, Route103_Text_MiguelDefeated, PARTNER_EMMIE
# 304 "data/maps/Route103/scripts.pory"
switch VAR_RESULT
# 305 "data/maps/Route103/scripts.pory"
case 1, Route103_EventScript_AndrewMiguelVictory
# 306 "data/maps/Route103/scripts.pory"
fadescreen FADE_TO_BLACK
# 307 "data/maps/Route103/scripts.pory"
special SetCB2WhiteOut
# 308 "data/maps/Route103/scripts.pory"
waitstate
# 309 "data/maps/Route103/scripts.pory"

# 310 "data/maps/Route103/scripts.pory"
Route103_EventScript_AndrewMiguelVictory::
# 311 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 312 "data/maps/Route103/scripts.pory"
waitmovement 0
# 313 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 314 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 315 "data/maps/Route103/scripts.pory"
waitmovement 0
# 316 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_MiguelPostBattle, MSGBOX_AUTOCLOSE
# 317 "data/maps/Route103/scripts.pory"
addvar VAR_ROUTE103_STATE, 1
# 318 "data/maps/Route103/scripts.pory"
end
# 319 "data/maps/Route103/scripts.pory"

# 320 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 321 "data/maps/Route103/scripts.pory"
	faceplayer
# 322 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 323 "data/maps/Route103/scripts.pory"
	end
# 324 "data/maps/Route103/scripts.pory"

# 325 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 326 "data/maps/Route103/scripts.pory"
	faceplayer
# 327 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 328 "data/maps/Route103/scripts.pory"
	release
# 329 "data/maps/Route103/scripts.pory"
	end
# 330 "data/maps/Route103/scripts.pory"

# 331 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRegisterMatchCallAfterBattle::
# 332 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 333 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 334 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 335 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 336 "data/maps/Route103/scripts.pory"
	release
# 337 "data/maps/Route103/scripts.pory"
	end
# 338 "data/maps/Route103/scripts.pory"

# 339 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 340 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 341 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 342 "data/maps/Route103/scripts.pory"
	end
# 343 "data/maps/Route103/scripts.pory"

# 344 "data/maps/Route103/scripts.pory"
Route103_EventScript_MarcosRhett::
# 345 "data/maps/Route103/scripts.pory"
lockall
# 346 "data/maps/Route103/scripts.pory"
setvar VAR_0x8008, LOCALID_MARCOS
# 347 "data/maps/Route103/scripts.pory"
playse SE_PIN
# 348 "data/maps/Route103/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 349 "data/maps/Route103/scripts.pory"
waitmovement 0
# 350 "data/maps/Route103/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 351 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 352 "data/maps/Route103/scripts.pory"
waitmovement 0
# 353 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_MarcosIntro MSGBOX_AUTOCLOSE
# 354 "data/maps/Route103/scripts.pory"
setvar VAR_0x8008, LOCALID_RHETT
# 355 "data/maps/Route103/scripts.pory"
playse SE_PIN
# 356 "data/maps/Route103/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 357 "data/maps/Route103/scripts.pory"
waitmovement 0
# 358 "data/maps/Route103/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 359 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 360 "data/maps/Route103/scripts.pory"
waitmovement 0
# 361 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_RhettIntro, MSGBOX_AUTOCLOSE
# 362 "data/maps/Route103/scripts.pory"
goto Route103_EventScript_MarcosRhettDoMultiBattle
# 363 "data/maps/Route103/scripts.pory"
releaseall
# 364 "data/maps/Route103/scripts.pory"
end
# 365 "data/maps/Route103/scripts.pory"

# 366 "data/maps/Route103/scripts.pory"
Route103_EventScript_MarcosRhettDoMultiBattle::
# 367 "data/maps/Route103/scripts.pory"
playbgm MUS_ROUTE101, TRUE
# 368 "data/maps/Route103/scripts.pory"
multi_2p_vs_2 TRAINER_MARCOS, Route103_Text_MarcosDefeated, TRAINER_RHETT, Route103_Text_RhettDefeated, PARTNER_EMMIE
# 369 "data/maps/Route103/scripts.pory"
switch VAR_RESULT
# 370 "data/maps/Route103/scripts.pory"
case 1, Route103_EventScript_MarcosRhettVictory
# 371 "data/maps/Route103/scripts.pory"
fadescreen FADE_TO_BLACK
# 372 "data/maps/Route103/scripts.pory"
special SetCB2WhiteOut
# 373 "data/maps/Route103/scripts.pory"
waitstate
# 374 "data/maps/Route103/scripts.pory"

# 375 "data/maps/Route103/scripts.pory"
Route103_EventScript_MarcosRhettVictory::
# 376 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 377 "data/maps/Route103/scripts.pory"
waitmovement 0
# 378 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 379 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 380 "data/maps/Route103/scripts.pory"
waitmovement 0
# 381 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 382 "data/maps/Route103/scripts.pory"
addvar VAR_ROUTE103_STATE, 1
# 383 "data/maps/Route103/scripts.pory"
end
# 384 "data/maps/Route103/scripts.pory"

# 385 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 386 "data/maps/Route103/scripts.pory"
	faceplayer
# 387 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 388 "data/maps/Route103/scripts.pory"
	end
# 389 "data/maps/Route103/scripts.pory"

# 390 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 391 "data/maps/Route103/scripts.pory"
	faceplayer
# 392 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 393 "data/maps/Route103/scripts.pory"
	end
# 394 "data/maps/Route103/scripts.pory"

# 395 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 396 "data/maps/Route103/scripts.pory"
	faceplayer
# 397 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 398 "data/maps/Route103/scripts.pory"
	end
# 399 "data/maps/Route103/scripts.pory"

# 400 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 401 "data/maps/Route103/scripts.pory"
	faceplayer
# 402 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 403 "data/maps/Route103/scripts.pory"
	end
# 404 "data/maps/Route103/scripts.pory"

# 405 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 406 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 407 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 408 "data/maps/Route103/scripts.pory"

# 409 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 410 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 411 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 412 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 413 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 414 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 415 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 416 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 417 "data/maps/Route103/scripts.pory"

# 418 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 419 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 420 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 421 "data/maps/Route103/scripts.pory"

# 422 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 423 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 424 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 425 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 426 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 427 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 428 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 429 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 430 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 431 "data/maps/Route103/scripts.pory"

# 432 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 433 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 434 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 435 "data/maps/Route103/scripts.pory"

# 436 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 437 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 438 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 439 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 440 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 441 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 442 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 443 "data/maps/Route103/scripts.pory"

# 444 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 445 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 446 "data/maps/Route103/scripts.pory"

# 447 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 448 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 449 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 450 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 451 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 452 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 453 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 454 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 455 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 456 "data/maps/Route103/scripts.pory"

# 457 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 458 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 459 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 460 "data/maps/Route103/scripts.pory"

# 461 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 462 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 463 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 464 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 465 "data/maps/Route103/scripts.pory"

# 466 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 467 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 468 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"
# 469 "data/maps/Route103/scripts.pory"

# 470 "data/maps/Route103/scripts.pory"
Route103_Text_ReadyToFight:
# 471 "data/maps/Route103/scripts.pory"
	.string "Are you ready?$"
# 472 "data/maps/Route103/scripts.pory"

# 473 "data/maps/Route103/scripts.pory"
Route103_Text_ComeBackWhenReady:
# 474 "data/maps/Route103/scripts.pory"
	.string "Come back when you're ready.$"
