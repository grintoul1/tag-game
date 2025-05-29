# 1 "data/maps/Route128/scripts.pory"

# 2 "data/maps/Route128/scripts.pory"
.set LOCALID_STEVEN, 3
# 3 "data/maps/Route128/scripts.pory"
.set LOCALID_ARCHIE, 4
# 4 "data/maps/Route128/scripts.pory"
.set LOCALID_MAXIE, 5
# 5 "data/maps/Route128/scripts.pory"
.set LOCALID_CARLEE, 9
# 6 "data/maps/Route128/scripts.pory"
.set LOCALID_HARRISON, 10
# 7 "data/maps/Route128/scripts.pory"
.set LOCALID_KATELYN, 2
# 8 "data/maps/Route128/scripts.pory"
.set LOCALID_ISAIAH, 1
# 9 "data/maps/Route128/scripts.pory"

# 10 "data/maps/Route128/scripts.pory"
Route128_MapScripts::
# 11 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_OnTransition
# 12 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_OnFrame
# 13 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route128_OnWarp
# 14 "data/maps/Route128/scripts.pory"
	.byte 0
# 15 "data/maps/Route128/scripts.pory"

# 16 "data/maps/Route128/scripts.pory"
Route128_OnTransition:
# 17 "data/maps/Route128/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 18 "data/maps/Route128/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 19 "data/maps/Route128/scripts.pory"
	end
# 20 "data/maps/Route128/scripts.pory"

# 21 "data/maps/Route128/scripts.pory"
Route128_OnWarp:
# 22 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedSceneEmmiePos
# 23 "data/maps/Route128/scripts.pory"
	.2byte 0
# 24 "data/maps/Route128/scripts.pory"

# 25 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedSceneEmmiePos:
# 26 "data/maps/Route128/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 39, 21
# 27 "data/maps/Route128/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_ROUTE128
# 28 "data/maps/Route128/scripts.pory"
	return
# 29 "data/maps/Route128/scripts.pory"

# 30 "data/maps/Route128/scripts.pory"
Route128_OnFrame:
# 31 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
# 32 "data/maps/Route128/scripts.pory"
	.2byte 0
# 33 "data/maps/Route128/scripts.pory"

# 34 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene::
# 35 "data/maps/Route128/scripts.pory"
	lockall
# 36 "data/maps/Route128/scripts.pory"
	delay 20
# 37 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieLookAround
# 38 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieWhatHappened, MSGBOX_DEFAULT
# 40 "data/maps/Route128/scripts.pory"
	closemessage
# 41 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieBackUp
# 42 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieIOnlyWanted, MSGBOX_DEFAULT
# 44 "data/maps/Route128/scripts.pory"
	closemessage
# 45 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachArchie
# 46 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 48 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieDoYouUnderstandNow, MSGBOX_DEFAULT
# 50 "data/maps/Route128/scripts.pory"
	closemessage
# 51 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachPlayer
# 52 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 54 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieResposibilityFallsToArchieAndMe, MSGBOX_DEFAULT
# 56 "data/maps/Route128/scripts.pory"
	closemessage
# 57 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieRunLeft
# 58 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 59 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieWalkLeft
# 60 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieThisDefiesBelief, MSGBOX_DEFAULT
# 62 "data/maps/Route128/scripts.pory"
	closemessage
# 63 "data/maps/Route128/scripts.pory"
	delay 40
# 64 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieExit
# 65 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieExit
# 66 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route128_Movement_EmmieReturnToPlayer
# 67 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_MAXIE
# 69 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ARCHIE
# 70 "data/maps/Route128/scripts.pory"
	delay 100
# 71 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 72 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 73 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 74 "data/maps/Route128/scripts.pory"
	addobject LOCALID_STEVEN
# 75 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Route128_Movement_StevenApproachPlayer
# 76 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 78 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 79 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWhatIsHappening, MSGBOX_DEFAULT
# 81 "data/maps/Route128/scripts.pory"
	closemessage
# 82 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Route128_Movement_StevenWalkUp
# 83 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 84 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWholeWorldWillDrown, MSGBOX_DEFAULT
# 86 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenImGoingToSootopolis, MSGBOX_DEFAULT
# 89 "data/maps/Route128/scripts.pory"
	closemessage
# 90 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route128/scripts.pory"
	delay 50
# 93 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 94 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 95 "data/maps/Route128/scripts.pory"
	delay 15
# 96 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_STEVEN
# 97 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 98 "data/maps/Route128/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 99 "data/maps/Route128/scripts.pory"
	setvar VAR_ROUTE128_STATE, 2
# 100 "data/maps/Route128/scripts.pory"
	releaseall
# 101 "data/maps/Route128/scripts.pory"
	end
# 102 "data/maps/Route128/scripts.pory"

# 103 "data/maps/Route128/scripts.pory"
Route128_Movement_EmmieReturnToPlayer:
# 104 "data/maps/Route128/scripts.pory"
	walk_slow_left
# 105 "data/maps/Route128/scripts.pory"
	face_down
# 106 "data/maps/Route128/scripts.pory"
	step_end
# 107 "data/maps/Route128/scripts.pory"

# 108 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused1:
# 109 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 110 "data/maps/Route128/scripts.pory"
	step_end
# 111 "data/maps/Route128/scripts.pory"

# 112 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused2:
# 113 "data/maps/Route128/scripts.pory"
	walk_left
# 114 "data/maps/Route128/scripts.pory"
	walk_left
# 115 "data/maps/Route128/scripts.pory"
	walk_left
# 116 "data/maps/Route128/scripts.pory"
	walk_left
# 117 "data/maps/Route128/scripts.pory"
	walk_left
# 118 "data/maps/Route128/scripts.pory"
	walk_left
# 119 "data/maps/Route128/scripts.pory"
	walk_up
# 120 "data/maps/Route128/scripts.pory"
	walk_up
# 121 "data/maps/Route128/scripts.pory"
	walk_up
# 122 "data/maps/Route128/scripts.pory"
	walk_up
# 123 "data/maps/Route128/scripts.pory"
	walk_up
# 124 "data/maps/Route128/scripts.pory"
	walk_up
# 125 "data/maps/Route128/scripts.pory"
	step_end
# 126 "data/maps/Route128/scripts.pory"

# 127 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenWalkUp:
# 128 "data/maps/Route128/scripts.pory"
	walk_up
# 129 "data/maps/Route128/scripts.pory"
	step_end
# 130 "data/maps/Route128/scripts.pory"

# 131 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenApproachPlayer:
# 132 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 133 "data/maps/Route128/scripts.pory"
	step_end
# 134 "data/maps/Route128/scripts.pory"

# 135 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieLookAround:
# 136 "data/maps/Route128/scripts.pory"
	walk_fast_down
# 137 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_left
# 138 "data/maps/Route128/scripts.pory"
	delay_16
# 139 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 140 "data/maps/Route128/scripts.pory"
	delay_16
# 141 "data/maps/Route128/scripts.pory"
	delay_16
# 142 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 143 "data/maps/Route128/scripts.pory"
	step_end
# 144 "data/maps/Route128/scripts.pory"

# 145 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieBackUp:
# 146 "data/maps/Route128/scripts.pory"
	lock_facing_direction
# 147 "data/maps/Route128/scripts.pory"
	walk_slow_up
# 148 "data/maps/Route128/scripts.pory"
	delay_16
# 149 "data/maps/Route128/scripts.pory"
	unlock_facing_direction
# 150 "data/maps/Route128/scripts.pory"
	step_end
# 151 "data/maps/Route128/scripts.pory"

# 152 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieRunLeft:
# 153 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 154 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 155 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 156 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 157 "data/maps/Route128/scripts.pory"
	step_end
# 158 "data/maps/Route128/scripts.pory"

# 159 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieExit:
# 160 "data/maps/Route128/scripts.pory"
	delay_16
# 161 "data/maps/Route128/scripts.pory"
	delay_16
# 162 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 163 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 164 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 165 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 166 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 167 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 168 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 169 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 170 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 171 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 172 "data/maps/Route128/scripts.pory"
	step_end
# 173 "data/maps/Route128/scripts.pory"

# 174 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieWalkLeft:
# 175 "data/maps/Route128/scripts.pory"
	walk_left
# 176 "data/maps/Route128/scripts.pory"
	walk_left
# 177 "data/maps/Route128/scripts.pory"
	delay_8
# 178 "data/maps/Route128/scripts.pory"
	delay_4
# 179 "data/maps/Route128/scripts.pory"
	step_end
# 180 "data/maps/Route128/scripts.pory"

# 181 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachArchie:
# 182 "data/maps/Route128/scripts.pory"
	walk_left
# 183 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 184 "data/maps/Route128/scripts.pory"
	step_end
# 185 "data/maps/Route128/scripts.pory"

# 186 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieExit:
# 187 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 188 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 189 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 190 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 191 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 192 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 193 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 194 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 195 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 196 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 197 "data/maps/Route128/scripts.pory"
	step_end
# 198 "data/maps/Route128/scripts.pory"

# 199 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachPlayer:
# 200 "data/maps/Route128/scripts.pory"
	walk_right
# 201 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 202 "data/maps/Route128/scripts.pory"
	step_end
# 203 "data/maps/Route128/scripts.pory"

# 204 "data/maps/Route128/scripts.pory"
Route128_EventScript_KatelynIsaiah::
# 205 "data/maps/Route128/scripts.pory"
lockall
# 206 "data/maps/Route128/scripts.pory"
playse SE_PIN
# 207 "data/maps/Route128/scripts.pory"
applymovement LOCALID_KATELYN, Common_Movement_ExclamationMark
# 208 "data/maps/Route128/scripts.pory"
waitmovement 0
# 209 "data/maps/Route128/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 210 "data/maps/Route128/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 211 "data/maps/Route128/scripts.pory"
waitmovement 0
# 212 "data/maps/Route128/scripts.pory"
msgbox Route128_Text_KatelynIntro MSGBOX_AUTOCLOSE
# 213 "data/maps/Route128/scripts.pory"
playse SE_PIN
# 214 "data/maps/Route128/scripts.pory"
applymovement  LOCALID_ISAIAH, Common_Movement_ExclamationMark
# 215 "data/maps/Route128/scripts.pory"
waitmovement 0
# 216 "data/maps/Route128/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 217 "data/maps/Route128/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 218 "data/maps/Route128/scripts.pory"
waitmovement 0
# 219 "data/maps/Route128/scripts.pory"
msgbox Route128_Text_IsaiahIntro MSGBOX_AUTOCLOSE
# 220 "data/maps/Route128/scripts.pory"
goto Route128_EventScript_KatelynIsaiahDoMultiBattle
# 221 "data/maps/Route128/scripts.pory"
releaseall
# 222 "data/maps/Route128/scripts.pory"
end
# 223 "data/maps/Route128/scripts.pory"

# 224 "data/maps/Route128/scripts.pory"
Route128_EventScript_KatelynIsaiahDoMultiBattle::
# 225 "data/maps/Route128/scripts.pory"
playbgm MUS_ROUTE122, TRUE
# 226 "data/maps/Route128/scripts.pory"
multi_2p_vs_2 TRAINER_KATELYN_1, Route128_Text_KatelynDefeat, TRAINER_ISAIAH_1, Route128_Text_IsaiahDefeat, PARTNER_EMMIE
# 227 "data/maps/Route128/scripts.pory"
switch VAR_RESULT
# 228 "data/maps/Route128/scripts.pory"
case 1, Route128_EventScript_KatelynIsaiahVictory
# 229 "data/maps/Route128/scripts.pory"
fadescreen FADE_TO_BLACK
# 230 "data/maps/Route128/scripts.pory"
special SetCB2WhiteOut
# 231 "data/maps/Route128/scripts.pory"
waitstate
# 232 "data/maps/Route128/scripts.pory"

# 233 "data/maps/Route128/scripts.pory"
Route128_EventScript_KatelynIsaiahVictory::
# 234 "data/maps/Route128/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 235 "data/maps/Route128/scripts.pory"
waitmovement 0
# 236 "data/maps/Route128/scripts.pory"
msgbox Route128_Text_KatelynPostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/Route128/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 238 "data/maps/Route128/scripts.pory"
waitmovement 0
# 239 "data/maps/Route128/scripts.pory"
msgbox Route128_Text_IsaiahPostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/Route128/scripts.pory"
addvar VAR_ROUTE128_BATTLE_STATE, 1
# 241 "data/maps/Route128/scripts.pory"
end
# 242 "data/maps/Route128/scripts.pory"

# 243 "data/maps/Route128/scripts.pory"
Route128_EventScript_Isaiah::
# 244 "data/maps/Route128/scripts.pory"
	faceplayer
# 245 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_DEFAULT
# 246 "data/maps/Route128/scripts.pory"
	release
# 247 "data/maps/Route128/scripts.pory"
	end
# 248 "data/maps/Route128/scripts.pory"

# 249 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterIsaiah::
# 250 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 251 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahRegister, MSGBOX_DEFAULT
# 253 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_ISAIAH_1
# 254 "data/maps/Route128/scripts.pory"
	release
# 255 "data/maps/Route128/scripts.pory"
	end
# 256 "data/maps/Route128/scripts.pory"

# 257 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchIsaiah::
# 258 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_ISAIAH_1, Route128_Text_IsaiahRematchIntro, Route128_Text_IsaiahRematchDefeat
# 259 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostRematch, MSGBOX_AUTOCLOSE
# 260 "data/maps/Route128/scripts.pory"
	end
# 261 "data/maps/Route128/scripts.pory"

# 262 "data/maps/Route128/scripts.pory"
Route128_EventScript_Katelyn::
# 263 "data/maps/Route128/scripts.pory"
	faceplayer
# 264 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_DEFAULT
# 265 "data/maps/Route128/scripts.pory"
	release
# 266 "data/maps/Route128/scripts.pory"
	end
# 267 "data/maps/Route128/scripts.pory"

# 268 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterKatelyn::
# 269 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 270 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynRegister, MSGBOX_DEFAULT
# 272 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_KATELYN_1
# 273 "data/maps/Route128/scripts.pory"
	release
# 274 "data/maps/Route128/scripts.pory"
	end
# 275 "data/maps/Route128/scripts.pory"

# 276 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchKatelyn::
# 277 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_KATELYN_1, Route128_Text_KatelynRematchIntro, Route128_Text_KatelynRematchDefeat
# 278 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostRematch, MSGBOX_AUTOCLOSE
# 279 "data/maps/Route128/scripts.pory"
	end
# 280 "data/maps/Route128/scripts.pory"

# 281 "data/maps/Route128/scripts.pory"
Route128_EventScript_Alexa::
# 282 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
# 283 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 284 "data/maps/Route128/scripts.pory"
	end
# 285 "data/maps/Route128/scripts.pory"

# 286 "data/maps/Route128/scripts.pory"
Route128_EventScript_Ruben::
# 287 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_RUBEN, Route128_Text_RubenIntro, Route128_Text_RubenDefeat
# 288 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
# 289 "data/maps/Route128/scripts.pory"
	end
# 290 "data/maps/Route128/scripts.pory"

# 291 "data/maps/Route128/scripts.pory"
Route128_EventScript_Wayne::
# 292 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
# 293 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route128/scripts.pory"
	end
# 295 "data/maps/Route128/scripts.pory"

# 296 "data/maps/Route128/scripts.pory"
Route128_EventScript_HarrisonCarlee::
# 297 "data/maps/Route128/scripts.pory"
lockall
# 298 "data/maps/Route128/scripts.pory"
playse SE_PIN
# 299 "data/maps/Route128/scripts.pory"
applymovement LOCALID_HARRISON, Common_Movement_ExclamationMark
# 300 "data/maps/Route128/scripts.pory"
waitmovement 0
# 301 "data/maps/Route128/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 302 "data/maps/Route128/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 303 "data/maps/Route128/scripts.pory"
waitmovement 0
# 304 "data/maps/Route128/scripts.pory"
msgbox Route128_Text_HarrisonIntro MSGBOX_AUTOCLOSE
# 305 "data/maps/Route128/scripts.pory"
playse SE_PIN
# 306 "data/maps/Route128/scripts.pory"
applymovement  LOCALID_CARLEE, Common_Movement_ExclamationMark
# 307 "data/maps/Route128/scripts.pory"
waitmovement 0
# 308 "data/maps/Route128/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 309 "data/maps/Route128/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 310 "data/maps/Route128/scripts.pory"
waitmovement 0
# 311 "data/maps/Route128/scripts.pory"
msgbox Route128_Text_CarleeIntro MSGBOX_AUTOCLOSE
# 312 "data/maps/Route128/scripts.pory"
goto Route128_EventScript_HarrisonCarleeDoMultiBattle
# 313 "data/maps/Route128/scripts.pory"
releaseall
# 314 "data/maps/Route128/scripts.pory"
end
# 315 "data/maps/Route128/scripts.pory"

# 316 "data/maps/Route128/scripts.pory"
Route128_EventScript_HarrisonCarleeDoMultiBattle::
# 317 "data/maps/Route128/scripts.pory"
playbgm MUS_ROUTE122, TRUE
# 318 "data/maps/Route128/scripts.pory"
multi_2p_vs_2 TRAINER_HARRISON, Route128_Text_HarrisonDefeat, TRAINER_CARLEE, Route128_Text_CarleeDefeat, PARTNER_EMMIE
# 319 "data/maps/Route128/scripts.pory"
switch VAR_RESULT
# 320 "data/maps/Route128/scripts.pory"
case 1, Route128_EventScript_HarrisonCarleeVictory
# 321 "data/maps/Route128/scripts.pory"
fadescreen FADE_TO_BLACK
# 322 "data/maps/Route128/scripts.pory"
special SetCB2WhiteOut
# 323 "data/maps/Route128/scripts.pory"
waitstate
# 324 "data/maps/Route128/scripts.pory"

# 325 "data/maps/Route128/scripts.pory"
Route128_EventScript_HarrisonCarleeVictory::
# 326 "data/maps/Route128/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 327 "data/maps/Route128/scripts.pory"
waitmovement 0
# 328 "data/maps/Route128/scripts.pory"
msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route128/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 330 "data/maps/Route128/scripts.pory"
waitmovement 0
# 331 "data/maps/Route128/scripts.pory"
msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
# 332 "data/maps/Route128/scripts.pory"
addvar VAR_ROUTE128_BATTLE_STATE, 1
# 333 "data/maps/Route128/scripts.pory"
end
# 334 "data/maps/Route128/scripts.pory"

# 335 "data/maps/Route128/scripts.pory"
Route128_EventScript_Harrison::
# 336 "data/maps/Route128/scripts.pory"
	faceplayer
# 337 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
# 338 "data/maps/Route128/scripts.pory"
	end
# 339 "data/maps/Route128/scripts.pory"

# 340 "data/maps/Route128/scripts.pory"
Route128_EventScript_Carlee::
# 341 "data/maps/Route128/scripts.pory"
	faceplayer
# 342 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
# 343 "data/maps/Route128/scripts.pory"
	end
# 344 "data/maps/Route128/scripts.pory"

# 345 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieWhatHappened:
# 346 "data/maps/Route128/scripts.pory"
	.string "ARCHIE: What happened…\n"
# 347 "data/maps/Route128/scripts.pory"
	.string "What is this wretched scene…\p"
# 348 "data/maps/Route128/scripts.pory"
	.string "Did I…make a horrible mistake?$"
# 349 "data/maps/Route128/scripts.pory"

# 350 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieIOnlyWanted:
# 351 "data/maps/Route128/scripts.pory"
	.string "I…\n"
# 352 "data/maps/Route128/scripts.pory"
	.string "I only wanted…$"
# 353 "data/maps/Route128/scripts.pory"

# 354 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieDoYouUnderstandNow:
# 355 "data/maps/Route128/scripts.pory"
	.string "MAXIE: Do you understand now,\n"
# 356 "data/maps/Route128/scripts.pory"
	.string "ARCHIE?\p"
# 357 "data/maps/Route128/scripts.pory"
	.string "Do you finally see how disastrous\n"
# 358 "data/maps/Route128/scripts.pory"
	.string "your dream turned out to be?\p"
# 359 "data/maps/Route128/scripts.pory"
	.string "We have to hurry! We have to do\n"
# 360 "data/maps/Route128/scripts.pory"
	.string "something before the situation goes\l"
# 361 "data/maps/Route128/scripts.pory"
	.string "completely out of control!$"
# 362 "data/maps/Route128/scripts.pory"

# 363 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieResposibilityFallsToArchieAndMe:
# 364 "data/maps/Route128/scripts.pory"
	.string "MAXIE: {PLAYER}, don't say anything.\p"
# 365 "data/maps/Route128/scripts.pory"
	.string "I know that I have no right to be\n"
# 366 "data/maps/Route128/scripts.pory"
	.string "critical of ARCHIE…\p"
# 367 "data/maps/Route128/scripts.pory"
	.string "But the way things are now, I doubt\n"
# 368 "data/maps/Route128/scripts.pory"
	.string "that we humans will be capable of\l"
# 369 "data/maps/Route128/scripts.pory"
	.string "doing anything about it.\p"
# 370 "data/maps/Route128/scripts.pory"
	.string "But neither can we stand by and\n"
# 371 "data/maps/Route128/scripts.pory"
	.string "just watch helplessly.\p"
# 372 "data/maps/Route128/scripts.pory"
	.string "The responsibility for putting an end\n"
# 373 "data/maps/Route128/scripts.pory"
	.string "to this falls to ARCHIE and me…$"
# 374 "data/maps/Route128/scripts.pory"

# 375 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieThisDefiesBelief:
# 376 "data/maps/Route128/scripts.pory"
	.string "MAXIE: This defies belief…\p"
# 377 "data/maps/Route128/scripts.pory"
	.string "Those super-ancient POKéMON…\p"
# 378 "data/maps/Route128/scripts.pory"
	.string "Their power is unbelievable.\n"
# 379 "data/maps/Route128/scripts.pory"
	.string "They've upset the balance of nature…$"
# 380 "data/maps/Route128/scripts.pory"

# 381 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWhatIsHappening:
# 382 "data/maps/Route128/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
# 383 "data/maps/Route128/scripts.pory"
	.string "What is happening?$"
# 384 "data/maps/Route128/scripts.pory"

# 385 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWholeWorldWillDrown:
# 386 "data/maps/Route128/scripts.pory"
	.string "This is terrible…\p"
# 387 "data/maps/Route128/scripts.pory"
	.string "After the scorching heat wave ended,\n"
# 388 "data/maps/Route128/scripts.pory"
	.string "this deluge began.\p"
# 389 "data/maps/Route128/scripts.pory"
	.string "If this doesn't stop, all of HOENN…\n"
# 390 "data/maps/Route128/scripts.pory"
	.string "No, the whole world will drown.\p"
# 391 "data/maps/Route128/scripts.pory"
	.string "This huge rain cloud is spreading\n"
# 392 "data/maps/Route128/scripts.pory"
	.string "from above SOOTOPOLIS…\p"
# 393 "data/maps/Route128/scripts.pory"
	.string "What in the world is taking place there?\p"
# 394 "data/maps/Route128/scripts.pory"
	.string "There's no point arguing here…\n"
# 395 "data/maps/Route128/scripts.pory"
	.string "SOOTOPOLIS might provide answers…$"
# 396 "data/maps/Route128/scripts.pory"

# 397 "data/maps/Route128/scripts.pory"
Route128_Text_StevenImGoingToSootopolis:
# 398 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 399 "data/maps/Route128/scripts.pory"
	.string "I don't know what you intend to do,\l"
# 400 "data/maps/Route128/scripts.pory"
	.string "but don't do anything reckless.\p"
# 401 "data/maps/Route128/scripts.pory"
	.string "Okay.\n"
# 402 "data/maps/Route128/scripts.pory"
	.string "I'm going to SOOTOPOLIS.$"
