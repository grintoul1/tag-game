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
	call Common_EventScript_SetupRivalGfxId
# 17 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 18 "data/maps/Route103/scripts.pory"
	end
# 19 "data/maps/Route103/scripts.pory"

# 20 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 21 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 22 "data/maps/Route103/scripts.pory"
	end
# 23 "data/maps/Route103/scripts.pory"

# 24 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 25 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 26 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 27 "data/maps/Route103/scripts.pory"
	return
# 28 "data/maps/Route103/scripts.pory"

# 29 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 30 "data/maps/Route103/scripts.pory"
	lockall
# 31 "data/maps/Route103/scripts.pory"
	checkplayergender
# 32 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 33 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 34 "data/maps/Route103/scripts.pory"
	end
# 35 "data/maps/Route103/scripts.pory"

# 36 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 37 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 38 "data/maps/Route103/scripts.pory"
	closemessage
# 39 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 40 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 41 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 43 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 45 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 47 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 48 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 49 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 50 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 51 "data/maps/Route103/scripts.pory"
	end
# 52 "data/maps/Route103/scripts.pory"

# 53 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 54 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 55 "data/maps/Route103/scripts.pory"
	closemessage
# 56 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 57 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 58 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 60 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 62 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 64 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 65 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 66 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 67 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 68 "data/maps/Route103/scripts.pory"
	end
# 69 "data/maps/Route103/scripts.pory"

# 70 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 71 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 72 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 73 "data/maps/Route103/scripts.pory"
	end
# 74 "data/maps/Route103/scripts.pory"

# 75 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 76 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 77 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 78 "data/maps/Route103/scripts.pory"
	end
# 79 "data/maps/Route103/scripts.pory"

# 80 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 81 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 82 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 83 "data/maps/Route103/scripts.pory"
	end
# 84 "data/maps/Route103/scripts.pory"

# 85 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 86 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 87 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 88 "data/maps/Route103/scripts.pory"
	end
# 89 "data/maps/Route103/scripts.pory"

# 90 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 91 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 92 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 93 "data/maps/Route103/scripts.pory"
	end
# 94 "data/maps/Route103/scripts.pory"

# 95 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 96 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 97 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 98 "data/maps/Route103/scripts.pory"
	end
# 99 "data/maps/Route103/scripts.pory"

# 100 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 101 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 102 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 103 "data/maps/Route103/scripts.pory"
	end
# 104 "data/maps/Route103/scripts.pory"

# 105 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 106 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 107 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 108 "data/maps/Route103/scripts.pory"
	end
# 109 "data/maps/Route103/scripts.pory"

# 110 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 111 "data/maps/Route103/scripts.pory"
	closemessage
# 112 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 113 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 114 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 115 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 116 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 117 "data/maps/Route103/scripts.pory"
	end
# 118 "data/maps/Route103/scripts.pory"

# 119 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 120 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 121 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 122 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 124 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 125 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 127 "data/maps/Route103/scripts.pory"
	end
# 128 "data/maps/Route103/scripts.pory"

# 129 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 130 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 131 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 132 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 134 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 135 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 137 "data/maps/Route103/scripts.pory"
	end
# 138 "data/maps/Route103/scripts.pory"

# 139 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 140 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 141 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 143 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 144 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 146 "data/maps/Route103/scripts.pory"
	end
# 147 "data/maps/Route103/scripts.pory"

# 148 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 149 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 150 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 151 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 152 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 153 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 154 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 155 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 156 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 157 "data/maps/Route103/scripts.pory"
	releaseall
# 158 "data/maps/Route103/scripts.pory"
	end
# 159 "data/maps/Route103/scripts.pory"

# 160 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 161 "data/maps/Route103/scripts.pory"
	walk_left
# 162 "data/maps/Route103/scripts.pory"
	walk_down
# 163 "data/maps/Route103/scripts.pory"
	step_end
# 164 "data/maps/Route103/scripts.pory"

# 165 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 166 "data/maps/Route103/scripts.pory"
	jump_2_down
# 167 "data/maps/Route103/scripts.pory"
	delay_16
# 168 "data/maps/Route103/scripts.pory"
	walk_down
# 169 "data/maps/Route103/scripts.pory"
	walk_down
# 170 "data/maps/Route103/scripts.pory"
	walk_down
# 171 "data/maps/Route103/scripts.pory"
	walk_down
# 172 "data/maps/Route103/scripts.pory"
	step_end
# 173 "data/maps/Route103/scripts.pory"

# 174 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 175 "data/maps/Route103/scripts.pory"
	delay_16
# 176 "data/maps/Route103/scripts.pory"
	delay_4
# 177 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 178 "data/maps/Route103/scripts.pory"
	delay_16
# 179 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 180 "data/maps/Route103/scripts.pory"
	step_end
# 181 "data/maps/Route103/scripts.pory"

# 182 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 183 "data/maps/Route103/scripts.pory"
	walk_down
# 184 "data/maps/Route103/scripts.pory"
	step_end
# 185 "data/maps/Route103/scripts.pory"

# 186 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 187 "data/maps/Route103/scripts.pory"
	jump_2_down
# 188 "data/maps/Route103/scripts.pory"
	delay_16
# 189 "data/maps/Route103/scripts.pory"
	walk_down
# 190 "data/maps/Route103/scripts.pory"
	walk_down
# 191 "data/maps/Route103/scripts.pory"
	walk_down
# 192 "data/maps/Route103/scripts.pory"
	step_end
# 193 "data/maps/Route103/scripts.pory"

# 194 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 195 "data/maps/Route103/scripts.pory"
	delay_16
# 196 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 197 "data/maps/Route103/scripts.pory"
	step_end
# 198 "data/maps/Route103/scripts.pory"

# 199 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 200 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 201 "data/maps/Route103/scripts.pory"
	end
# 202 "data/maps/Route103/scripts.pory"

# 203 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 204 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 205 "data/maps/Route103/scripts.pory"
	end
# 206 "data/maps/Route103/scripts.pory"

# 207 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 208 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 209 "data/maps/Route103/scripts.pory"
	end
# 210 "data/maps/Route103/scripts.pory"

# 211 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 212 "data/maps/Route103/scripts.pory"
	faceplayer
# 213 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route103/scripts.pory"
	end
# 215 "data/maps/Route103/scripts.pory"

# 216 "data/maps/Route103/scripts.pory"
Route103_EventScript_AmyLiv::
# 217 "data/maps/Route103/scripts.pory"
lockall
# 218 "data/maps/Route103/scripts.pory"
setvar VAR_0x8008, LOCALID_AMY
# 219 "data/maps/Route103/scripts.pory"
playse SE_PIN
# 220 "data/maps/Route103/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 221 "data/maps/Route103/scripts.pory"
waitmovement 0
# 222 "data/maps/Route103/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 223 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 224 "data/maps/Route103/scripts.pory"
waitmovement 0
# 225 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_AmyIntro, MSGBOX_AUTOCLOSE
# 226 "data/maps/Route103/scripts.pory"
goto Route103_EventScript_AmyLivDoMultiBattle
# 227 "data/maps/Route103/scripts.pory"
releaseall
# 228 "data/maps/Route103/scripts.pory"
end
# 229 "data/maps/Route103/scripts.pory"

# 230 "data/maps/Route103/scripts.pory"
Route103_EventScript_AmyLivDoMultiBattle::
# 231 "data/maps/Route103/scripts.pory"
playbgm MUS_ROUTE101, TRUE
# 232 "data/maps/Route103/scripts.pory"
multi_2p_vs_1 TRAINER_AMY_AND_LIV_1, Route103_Text_AmyDefeated, PARTNER_EMMIE
# 233 "data/maps/Route103/scripts.pory"
switch VAR_RESULT
# 234 "data/maps/Route103/scripts.pory"
case 1, Route103_EventScript_AmyLivVictory
# 235 "data/maps/Route103/scripts.pory"
fadescreen FADE_TO_BLACK
# 236 "data/maps/Route103/scripts.pory"
special SetCB2WhiteOut
# 237 "data/maps/Route103/scripts.pory"
waitstate
# 238 "data/maps/Route103/scripts.pory"

# 239 "data/maps/Route103/scripts.pory"
Route103_EventScript_AmyLivVictory::
# 240 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 241 "data/maps/Route103/scripts.pory"
waitmovement 0
# 242 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 243 "data/maps/Route103/scripts.pory"
addvar VAR_ROUTE103_STATE, 1
# 244 "data/maps/Route103/scripts.pory"
end
# 245 "data/maps/Route103/scripts.pory"

# 246 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 247 "data/maps/Route103/scripts.pory"
	faceplayer
# 248 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/Route103/scripts.pory"
	end
# 250 "data/maps/Route103/scripts.pory"

# 251 "data/maps/Route103/scripts.pory"
Route103_EventScript_AmyRegisterMatchCallAfterBattle::
# 252 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 253 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 254 "data/maps/Route103/scripts.pory"
	release
# 255 "data/maps/Route103/scripts.pory"
	end
# 256 "data/maps/Route103/scripts.pory"

# 257 "data/maps/Route103/scripts.pory"
Route103_EventScript_AmyRematch::
# 258 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 259 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/Route103/scripts.pory"
	end
# 261 "data/maps/Route103/scripts.pory"

# 262 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 263 "data/maps/Route103/scripts.pory"
	faceplayer
# 264 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 265 "data/maps/Route103/scripts.pory"
	end
# 266 "data/maps/Route103/scripts.pory"

# 267 "data/maps/Route103/scripts.pory"
Route103_EventScript_LivRegisterMatchCallAfterBattle::
# 268 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 269 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 270 "data/maps/Route103/scripts.pory"
	release
# 271 "data/maps/Route103/scripts.pory"
	end
# 272 "data/maps/Route103/scripts.pory"

# 273 "data/maps/Route103/scripts.pory"
Route103_EventScript_LivRematch::
# 274 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 275 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 276 "data/maps/Route103/scripts.pory"
	end
# 277 "data/maps/Route103/scripts.pory"

# 278 "data/maps/Route103/scripts.pory"
Route103_EventScript_AndrewMiguel::
# 279 "data/maps/Route103/scripts.pory"
lockall
# 280 "data/maps/Route103/scripts.pory"
setvar VAR_0x8008, LOCALID_ANDREW
# 281 "data/maps/Route103/scripts.pory"
playse SE_PIN
# 282 "data/maps/Route103/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 283 "data/maps/Route103/scripts.pory"
waitmovement 0
# 284 "data/maps/Route103/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 285 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 286 "data/maps/Route103/scripts.pory"
waitmovement 0
# 287 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_AndrewIntro MSGBOX_AUTOCLOSE
# 288 "data/maps/Route103/scripts.pory"
setvar VAR_0x8008, LOCALID_MIGUEL
# 289 "data/maps/Route103/scripts.pory"
playse SE_PIN
# 290 "data/maps/Route103/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 291 "data/maps/Route103/scripts.pory"
waitmovement 0
# 292 "data/maps/Route103/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 293 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 294 "data/maps/Route103/scripts.pory"
waitmovement 0
# 295 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_MiguelIntro, MSGBOX_AUTOCLOSE
# 296 "data/maps/Route103/scripts.pory"
goto Route103_EventScript_AndrewMiguelDoMultiBattle
# 297 "data/maps/Route103/scripts.pory"
releaseall
# 298 "data/maps/Route103/scripts.pory"
end
# 299 "data/maps/Route103/scripts.pory"

# 300 "data/maps/Route103/scripts.pory"
Route103_EventScript_AndrewMiguelDoMultiBattle::
# 301 "data/maps/Route103/scripts.pory"
playbgm MUS_ROUTE101, TRUE
# 302 "data/maps/Route103/scripts.pory"
multi_2p_vs_2 TRAINER_ANDREW, Route103_Text_AndrewDefeated, TRAINER_MIGUEL_1, Route103_Text_MiguelDefeated, PARTNER_EMMIE
# 303 "data/maps/Route103/scripts.pory"
switch VAR_RESULT
# 304 "data/maps/Route103/scripts.pory"
case 1, Route103_EventScript_AndrewMiguelVictory
# 305 "data/maps/Route103/scripts.pory"
fadescreen FADE_TO_BLACK
# 306 "data/maps/Route103/scripts.pory"
special SetCB2WhiteOut
# 307 "data/maps/Route103/scripts.pory"
waitstate
# 308 "data/maps/Route103/scripts.pory"

# 309 "data/maps/Route103/scripts.pory"
Route103_EventScript_AndrewMiguelVictory::
# 310 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 311 "data/maps/Route103/scripts.pory"
waitmovement 0
# 312 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 313 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 314 "data/maps/Route103/scripts.pory"
waitmovement 0
# 315 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_MiguelPostBattle, MSGBOX_AUTOCLOSE
# 316 "data/maps/Route103/scripts.pory"
addvar VAR_ROUTE103_STATE, 1
# 317 "data/maps/Route103/scripts.pory"
end
# 318 "data/maps/Route103/scripts.pory"

# 319 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 320 "data/maps/Route103/scripts.pory"
	faceplayer
# 321 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 322 "data/maps/Route103/scripts.pory"
	end
# 323 "data/maps/Route103/scripts.pory"

# 324 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 325 "data/maps/Route103/scripts.pory"
	faceplayer
# 326 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 327 "data/maps/Route103/scripts.pory"
	release
# 328 "data/maps/Route103/scripts.pory"
	end
# 329 "data/maps/Route103/scripts.pory"

# 330 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRegisterMatchCallAfterBattle::
# 331 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 332 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 333 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 334 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 335 "data/maps/Route103/scripts.pory"
	release
# 336 "data/maps/Route103/scripts.pory"
	end
# 337 "data/maps/Route103/scripts.pory"

# 338 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 339 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 340 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 341 "data/maps/Route103/scripts.pory"
	end
# 342 "data/maps/Route103/scripts.pory"

# 343 "data/maps/Route103/scripts.pory"
Route103_EventScript_MarcosRhett::
# 344 "data/maps/Route103/scripts.pory"
lockall
# 345 "data/maps/Route103/scripts.pory"
setvar VAR_0x8008, LOCALID_MARCOS
# 346 "data/maps/Route103/scripts.pory"
playse SE_PIN
# 347 "data/maps/Route103/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 348 "data/maps/Route103/scripts.pory"
waitmovement 0
# 349 "data/maps/Route103/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 350 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 351 "data/maps/Route103/scripts.pory"
waitmovement 0
# 352 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_MarcosIntro MSGBOX_AUTOCLOSE
# 353 "data/maps/Route103/scripts.pory"
setvar VAR_0x8008, LOCALID_RHETT
# 354 "data/maps/Route103/scripts.pory"
playse SE_PIN
# 355 "data/maps/Route103/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 356 "data/maps/Route103/scripts.pory"
waitmovement 0
# 357 "data/maps/Route103/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 358 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 359 "data/maps/Route103/scripts.pory"
waitmovement 0
# 360 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_RhettIntro, MSGBOX_AUTOCLOSE
# 361 "data/maps/Route103/scripts.pory"
goto Route103_EventScript_MarcosRhettDoMultiBattle
# 362 "data/maps/Route103/scripts.pory"
releaseall
# 363 "data/maps/Route103/scripts.pory"
end
# 364 "data/maps/Route103/scripts.pory"

# 365 "data/maps/Route103/scripts.pory"
Route103_EventScript_MarcosRhettDoMultiBattle::
# 366 "data/maps/Route103/scripts.pory"
playbgm MUS_ROUTE101, TRUE
# 367 "data/maps/Route103/scripts.pory"
multi_2p_vs_2 TRAINER_MARCOS, Route103_Text_MarcosDefeated, TRAINER_RHETT, Route103_Text_RhettDefeated, PARTNER_EMMIE
# 368 "data/maps/Route103/scripts.pory"
switch VAR_RESULT
# 369 "data/maps/Route103/scripts.pory"
case 1, Route103_EventScript_MarcosRhettVictory
# 370 "data/maps/Route103/scripts.pory"
fadescreen FADE_TO_BLACK
# 371 "data/maps/Route103/scripts.pory"
special SetCB2WhiteOut
# 372 "data/maps/Route103/scripts.pory"
waitstate
# 373 "data/maps/Route103/scripts.pory"

# 374 "data/maps/Route103/scripts.pory"
Route103_EventScript_MarcosRhettVictory::
# 375 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 376 "data/maps/Route103/scripts.pory"
waitmovement 0
# 377 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 378 "data/maps/Route103/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 379 "data/maps/Route103/scripts.pory"
waitmovement 0
# 380 "data/maps/Route103/scripts.pory"
msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 381 "data/maps/Route103/scripts.pory"
addvar VAR_ROUTE103_STATE, 1
# 382 "data/maps/Route103/scripts.pory"
end
# 383 "data/maps/Route103/scripts.pory"

# 384 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 385 "data/maps/Route103/scripts.pory"
	faceplayer
# 386 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 387 "data/maps/Route103/scripts.pory"
	end
# 388 "data/maps/Route103/scripts.pory"

# 389 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 390 "data/maps/Route103/scripts.pory"
	faceplayer
# 391 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 392 "data/maps/Route103/scripts.pory"
	end
# 393 "data/maps/Route103/scripts.pory"

# 394 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 395 "data/maps/Route103/scripts.pory"
	faceplayer
# 396 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 397 "data/maps/Route103/scripts.pory"
	end
# 398 "data/maps/Route103/scripts.pory"

# 399 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 400 "data/maps/Route103/scripts.pory"
	faceplayer
# 401 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 402 "data/maps/Route103/scripts.pory"
	end
# 403 "data/maps/Route103/scripts.pory"

# 404 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 405 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 406 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 407 "data/maps/Route103/scripts.pory"

# 408 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 409 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 410 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 411 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 412 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 413 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 414 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 415 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 416 "data/maps/Route103/scripts.pory"

# 417 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 418 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 419 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 420 "data/maps/Route103/scripts.pory"

# 421 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 422 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 423 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 424 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 425 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 426 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 427 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 428 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 429 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 430 "data/maps/Route103/scripts.pory"

# 431 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 432 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 433 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 434 "data/maps/Route103/scripts.pory"

# 435 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 436 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 437 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 438 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 439 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 440 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 441 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 442 "data/maps/Route103/scripts.pory"

# 443 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 444 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 445 "data/maps/Route103/scripts.pory"

# 446 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 447 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 448 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 449 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 450 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 451 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 452 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 453 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 454 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 455 "data/maps/Route103/scripts.pory"

# 456 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 457 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 458 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 459 "data/maps/Route103/scripts.pory"

# 460 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 461 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 462 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 463 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 464 "data/maps/Route103/scripts.pory"

# 465 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 466 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 467 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"
# 468 "data/maps/Route103/scripts.pory"

# 469 "data/maps/Route103/scripts.pory"
Route103_Text_ReadyToFight:
# 470 "data/maps/Route103/scripts.pory"
	.string "Are you ready?$"
# 471 "data/maps/Route103/scripts.pory"

# 472 "data/maps/Route103/scripts.pory"
Route103_Text_ComeBackWhenReady:
# 473 "data/maps/Route103/scripts.pory"
	.string "Come back when you're ready.$"
