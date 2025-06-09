# 1 "data/maps/Route121/scripts.pory"

# 2 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_1, 12
# 3 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_2, 13
# 4 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_3, 14
# 5 "data/maps/Route121/scripts.pory"
.set LOCALID_CALE, 23
# 6 "data/maps/Route121/scripts.pory"
.set LOCALID_TAMMY, 19
# 7 "data/maps/Route121/scripts.pory"
.set LOCALID_KATE, 10
# 8 "data/maps/Route121/scripts.pory"
.set LOCALID_JOY, 11
# 9 "data/maps/Route121/scripts.pory"
.set LOCALID_MARCEL, 26
# 10 "data/maps/Route121/scripts.pory"
.set LOCALID_CRISTIN, 27
# 11 "data/maps/Route121/scripts.pory"
.set LOCALID_VANESSA, 17
# 12 "data/maps/Route121/scripts.pory"
.set LOCALID_WALTER, 18
# 13 "data/maps/Route121/scripts.pory"
.set LOCALID_MYLES, 24
# 14 "data/maps/Route121/scripts.pory"
.set LOCALID_PAT, 25
# 15 "data/maps/Route121/scripts.pory"

# 16 "data/maps/Route121/scripts.pory"
Route121_MapScripts::
# 17 "data/maps/Route121/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route121_OnTransition
# 18 "data/maps/Route121/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route121_OnFrame
# 19 "data/maps/Route121/scripts.pory"
	.byte 0
# 20 "data/maps/Route121/scripts.pory"

# 21 "data/maps/Route121/scripts.pory"
Route121_OnFrame:
# 22 "data/maps/Route121/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 31, Route121_EventScript_ProgressEmmieState
# 23 "data/maps/Route121/scripts.pory"
	.2byte 0
# 24 "data/maps/Route121/scripts.pory"

# 25 "data/maps/Route121/scripts.pory"
Route121_EventScript_ProgressEmmieState::
# 26 "data/maps/Route121/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 32
# 27 "data/maps/Route121/scripts.pory"
	return
# 28 "data/maps/Route121/scripts.pory"

# 29 "data/maps/Route121/scripts.pory"
Route121_OnTransition:
# 30 "data/maps/Route121/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 31 "data/maps/Route121/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 32 "data/maps/Route121/scripts.pory"
	end
# 33 "data/maps/Route121/scripts.pory"

# 34 "data/maps/Route121/scripts.pory"
Route121_EventScript_Woman::
# 35 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
# 36 "data/maps/Route121/scripts.pory"
	end
# 37 "data/maps/Route121/scripts.pory"

# 38 "data/maps/Route121/scripts.pory"
Route121_EventScript_MtPyrePierSign::
# 39 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
# 40 "data/maps/Route121/scripts.pory"
	end
# 41 "data/maps/Route121/scripts.pory"

# 42 "data/maps/Route121/scripts.pory"
Route121_EventScript_SafariZoneSign::
# 43 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
# 44 "data/maps/Route121/scripts.pory"
	end
# 45 "data/maps/Route121/scripts.pory"

# 46 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGruntsMoveOut::
# 47 "data/maps/Route121/scripts.pory"
	lockall
# 48 "data/maps/Route121/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 49 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
# 50 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
# 52 "data/maps/Route121/scripts.pory"
	closemessage
# 53 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_1, Route121_Movement_Grunt1Exit
# 54 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Route121_Movement_Grunt2Exit
# 55 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route121_Movement_Grunt3Exit
# 56 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route121/scripts.pory"
	fadedefaultbgm
# 58 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 59 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 60 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 61 "data/maps/Route121/scripts.pory"
	setvar VAR_ROUTE121_STATE, 1
# 62 "data/maps/Route121/scripts.pory"
	releaseall
# 63 "data/maps/Route121/scripts.pory"
	end
# 64 "data/maps/Route121/scripts.pory"

# 65 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGrunt1::
# 66 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AquaGrunt1, MSGBOX_DEFAULT
# 67 "data/maps/Route121/scripts.pory"
	closemessage
# 68 "data/maps/Route121/scripts.pory"
	end
# 69 "data/maps/Route121/scripts.pory"

# 70 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGrunt2::
# 71 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AquaGrunt2, MSGBOX_DEFAULT
# 72 "data/maps/Route121/scripts.pory"
	closemessage
# 73 "data/maps/Route121/scripts.pory"
	end
# 74 "data/maps/Route121/scripts.pory"

# 75 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGrunt3::
# 76 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AquaGrunt3, MSGBOX_DEFAULT
# 77 "data/maps/Route121/scripts.pory"
	closemessage
# 78 "data/maps/Route121/scripts.pory"
	end
# 79 "data/maps/Route121/scripts.pory"

# 80 "data/maps/Route121/scripts.pory"
Route121_EventScript_MagmaGrunt1::
# 81 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MagmaGrunt1, MSGBOX_DEFAULT
# 82 "data/maps/Route121/scripts.pory"
	closemessage
# 83 "data/maps/Route121/scripts.pory"
	end
# 84 "data/maps/Route121/scripts.pory"

# 85 "data/maps/Route121/scripts.pory"
Route121_EventScript_MagmaGrunt2::
# 86 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MagmaGrunt2, MSGBOX_DEFAULT
# 87 "data/maps/Route121/scripts.pory"
	closemessage
# 88 "data/maps/Route121/scripts.pory"
	end
# 89 "data/maps/Route121/scripts.pory"

# 90 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt1Exit:
# 91 "data/maps/Route121/scripts.pory"
	walk_down
# 92 "data/maps/Route121/scripts.pory"
	walk_down
# 93 "data/maps/Route121/scripts.pory"
	walk_down
# 94 "data/maps/Route121/scripts.pory"
	walk_down
# 95 "data/maps/Route121/scripts.pory"
	walk_down
# 96 "data/maps/Route121/scripts.pory"
	walk_down
# 97 "data/maps/Route121/scripts.pory"
	walk_down
# 98 "data/maps/Route121/scripts.pory"
	walk_down
# 99 "data/maps/Route121/scripts.pory"
	step_end
# 100 "data/maps/Route121/scripts.pory"

# 101 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt2Exit:
# 102 "data/maps/Route121/scripts.pory"
	walk_down
# 103 "data/maps/Route121/scripts.pory"
	walk_down
# 104 "data/maps/Route121/scripts.pory"
	walk_down
# 105 "data/maps/Route121/scripts.pory"
	walk_down
# 106 "data/maps/Route121/scripts.pory"
	walk_down
# 107 "data/maps/Route121/scripts.pory"
	walk_down
# 108 "data/maps/Route121/scripts.pory"
	walk_down
# 109 "data/maps/Route121/scripts.pory"
	walk_down
# 110 "data/maps/Route121/scripts.pory"
	step_end
# 111 "data/maps/Route121/scripts.pory"

# 112 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt3Exit:
# 113 "data/maps/Route121/scripts.pory"
	walk_down
# 114 "data/maps/Route121/scripts.pory"
	walk_down
# 115 "data/maps/Route121/scripts.pory"
	walk_down
# 116 "data/maps/Route121/scripts.pory"
	walk_down
# 117 "data/maps/Route121/scripts.pory"
	walk_down
# 118 "data/maps/Route121/scripts.pory"
	walk_down
# 119 "data/maps/Route121/scripts.pory"
	walk_down
# 120 "data/maps/Route121/scripts.pory"
	walk_down
# 121 "data/maps/Route121/scripts.pory"
	step_end
# 122 "data/maps/Route121/scripts.pory"

# 123 "data/maps/Route121/scripts.pory"
Route121_EventScript_Vanessa::
# 124 "data/maps/Route121/scripts.pory"
	faceplayer
# 125 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route121/scripts.pory"
	end
# 127 "data/maps/Route121/scripts.pory"

# 128 "data/maps/Route121/scripts.pory"
Route121_EventScript_VanessaWalter::
# 129 "data/maps/Route121/scripts.pory"
lockall
# 130 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_VANESSA
# 131 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 132 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 133 "data/maps/Route121/scripts.pory"
waitmovement 0
# 134 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 135 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 136 "data/maps/Route121/scripts.pory"
waitmovement 0
# 137 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_VanessaIntro MSGBOX_AUTOCLOSE
# 138 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_WALTER
# 139 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 140 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 141 "data/maps/Route121/scripts.pory"
waitmovement 0
# 142 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 143 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 144 "data/maps/Route121/scripts.pory"
waitmovement 0
# 145 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_WalterIntro, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_VanessaWalterDoMultiBattle
# 147 "data/maps/Route121/scripts.pory"
releaseall
# 148 "data/maps/Route121/scripts.pory"
end
# 149 "data/maps/Route121/scripts.pory"

# 150 "data/maps/Route121/scripts.pory"
Route121_EventScript_VanessaWalterDoMultiBattle::
# 151 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 152 "data/maps/Route121/scripts.pory"
multi_2p_vs_2 TRAINER_VANESSA, Route121_Text_VanessaDefeat, TRAINER_WALTER_1, Route121_Text_WalterDefeat, PARTNER_EMMIE
# 153 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 154 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_VanessaWalterVictory
# 155 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 156 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 157 "data/maps/Route121/scripts.pory"
waitstate
# 158 "data/maps/Route121/scripts.pory"

# 159 "data/maps/Route121/scripts.pory"
Route121_EventScript_VanessaWalterVictory::
# 160 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 161 "data/maps/Route121/scripts.pory"
waitmovement 0
# 162 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 164 "data/maps/Route121/scripts.pory"
waitmovement 0
# 165 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_WalterPostBattle, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 167 "data/maps/Route121/scripts.pory"
end
# 168 "data/maps/Route121/scripts.pory"

# 169 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter::
# 170 "data/maps/Route121/scripts.pory"
	faceplayer
# 171 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
# 172 "data/maps/Route121/scripts.pory"
	release
# 173 "data/maps/Route121/scripts.pory"
	end
# 174 "data/maps/Route121/scripts.pory"

# 175 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterWalter::
# 176 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 177 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 178 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
# 179 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_WALTER_1
# 180 "data/maps/Route121/scripts.pory"
	release
# 181 "data/maps/Route121/scripts.pory"
	end
# 182 "data/maps/Route121/scripts.pory"

# 183 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchWalter::
# 184 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
# 185 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
# 186 "data/maps/Route121/scripts.pory"
	end
# 187 "data/maps/Route121/scripts.pory"

# 188 "data/maps/Route121/scripts.pory"
Route121_EventScript_Tammy::
# 189 "data/maps/Route121/scripts.pory"
	faceplayer
# 190 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 191 "data/maps/Route121/scripts.pory"
	end
# 192 "data/maps/Route121/scripts.pory"

# 193 "data/maps/Route121/scripts.pory"
Route121_EventScript_KateJoy::
# 194 "data/maps/Route121/scripts.pory"
lockall
# 195 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_KATE
# 196 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 197 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 198 "data/maps/Route121/scripts.pory"
applymovement LOCALID_JOY, Common_Movement_ExclamationMark
# 199 "data/maps/Route121/scripts.pory"
waitmovement 0
# 200 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 201 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 202 "data/maps/Route121/scripts.pory"
waitmovement 0
# 203 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_KateIntro, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_KateJoyDoMultiBattle
# 205 "data/maps/Route121/scripts.pory"
releaseall
# 206 "data/maps/Route121/scripts.pory"
end
# 207 "data/maps/Route121/scripts.pory"

# 208 "data/maps/Route121/scripts.pory"
Route121_EventScript_KateJoyDoMultiBattle::
# 209 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 210 "data/maps/Route121/scripts.pory"
multi_2p_vs_1 TRAINER_KATE_AND_JOY, Route121_Text_KateDefeat, PARTNER_EMMIE
# 211 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 212 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_KateJoyVictory
# 213 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 214 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 215 "data/maps/Route121/scripts.pory"
waitstate
# 216 "data/maps/Route121/scripts.pory"

# 217 "data/maps/Route121/scripts.pory"
Route121_EventScript_KateJoyVictory::
# 218 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 219 "data/maps/Route121/scripts.pory"
waitmovement 0
# 220 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 222 "data/maps/Route121/scripts.pory"
end
# 223 "data/maps/Route121/scripts.pory"

# 224 "data/maps/Route121/scripts.pory"
Route121_EventScript_Kate::
# 225 "data/maps/Route121/scripts.pory"
	faceplayer
# 226 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/Route121/scripts.pory"
	end
# 228 "data/maps/Route121/scripts.pory"

# 229 "data/maps/Route121/scripts.pory"
Route121_EventScript_Joy::
# 230 "data/maps/Route121/scripts.pory"
	faceplayer
# 231 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/Route121/scripts.pory"
	end
# 233 "data/maps/Route121/scripts.pory"

# 234 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica::
# 235 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
# 236 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 237 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchJessica
# 238 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
# 239 "data/maps/Route121/scripts.pory"
	release
# 240 "data/maps/Route121/scripts.pory"
	end
# 241 "data/maps/Route121/scripts.pory"

# 242 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterJessica::
# 243 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 244 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
# 246 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_JESSICA_1
# 247 "data/maps/Route121/scripts.pory"
	release
# 248 "data/maps/Route121/scripts.pory"
	end
# 249 "data/maps/Route121/scripts.pory"

# 250 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchJessica::
# 251 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
# 252 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
# 253 "data/maps/Route121/scripts.pory"
	end
# 254 "data/maps/Route121/scripts.pory"

# 255 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cale::
# 256 "data/maps/Route121/scripts.pory"
	faceplayer
# 257 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route121/scripts.pory"
	end
# 259 "data/maps/Route121/scripts.pory"

# 260 "data/maps/Route121/scripts.pory"
Route121_EventScript_CaleTammy::
# 261 "data/maps/Route121/scripts.pory"
lockall
# 262 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_CALE
# 263 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 264 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 265 "data/maps/Route121/scripts.pory"
waitmovement 0
# 266 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 267 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 268 "data/maps/Route121/scripts.pory"
waitmovement 0
# 269 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_CaleIntro MSGBOX_AUTOCLOSE
# 270 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_TAMMY
# 271 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 272 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 273 "data/maps/Route121/scripts.pory"
waitmovement 0
# 274 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 275 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 276 "data/maps/Route121/scripts.pory"
waitmovement 0
# 277 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_TammyIntro, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_CaleTammyDoMultiBattle
# 279 "data/maps/Route121/scripts.pory"
releaseall
# 280 "data/maps/Route121/scripts.pory"
end
# 281 "data/maps/Route121/scripts.pory"

# 282 "data/maps/Route121/scripts.pory"
Route121_EventScript_CaleTammyDoMultiBattle::
# 283 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 284 "data/maps/Route121/scripts.pory"
multi_2p_vs_2 TRAINER_CALE, Route121_Text_CaleDefeat, TRAINER_TAMMY, Route121_Text_TammyDefeat, PARTNER_EMMIE
# 285 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 286 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_CaleTammyVictory
# 287 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 288 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 289 "data/maps/Route121/scripts.pory"
waitstate
# 290 "data/maps/Route121/scripts.pory"

# 291 "data/maps/Route121/scripts.pory"
Route121_EventScript_CaleTammyVictory::
# 292 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 293 "data/maps/Route121/scripts.pory"
waitmovement 0
# 294 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 296 "data/maps/Route121/scripts.pory"
waitmovement 0
# 297 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 298 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 299 "data/maps/Route121/scripts.pory"
end
# 300 "data/maps/Route121/scripts.pory"

# 301 "data/maps/Route121/scripts.pory"
Route121_EventScript_PatMyles::
# 302 "data/maps/Route121/scripts.pory"
lockall
# 303 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_PAT
# 304 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 305 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 306 "data/maps/Route121/scripts.pory"
waitmovement 0
# 307 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 308 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 309 "data/maps/Route121/scripts.pory"
waitmovement 0
# 310 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_PatIntro MSGBOX_AUTOCLOSE
# 311 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_MYLES
# 312 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 313 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 314 "data/maps/Route121/scripts.pory"
waitmovement 0
# 315 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 316 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 317 "data/maps/Route121/scripts.pory"
waitmovement 0
# 318 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_MylesIntro, MSGBOX_AUTOCLOSE
# 319 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_PatMylesDoMultiBattle
# 320 "data/maps/Route121/scripts.pory"
releaseall
# 321 "data/maps/Route121/scripts.pory"
end
# 322 "data/maps/Route121/scripts.pory"

# 323 "data/maps/Route121/scripts.pory"
Route121_EventScript_PatMylesDoMultiBattle::
# 324 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 325 "data/maps/Route121/scripts.pory"
multi_2p_vs_2 TRAINER_PAT, Route121_Text_PatDefeat, TRAINER_MYLES, Route121_Text_MylesDefeat, PARTNER_EMMIE
# 326 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 327 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_PatMylesVictory
# 328 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 329 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 330 "data/maps/Route121/scripts.pory"
waitstate
# 331 "data/maps/Route121/scripts.pory"

# 332 "data/maps/Route121/scripts.pory"
Route121_EventScript_PatMylesVictory::
# 333 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 334 "data/maps/Route121/scripts.pory"
waitmovement 0
# 335 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 336 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 337 "data/maps/Route121/scripts.pory"
waitmovement 0
# 338 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 339 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 340 "data/maps/Route121/scripts.pory"
end
# 341 "data/maps/Route121/scripts.pory"

# 342 "data/maps/Route121/scripts.pory"
Route121_EventScript_Myles::
# 343 "data/maps/Route121/scripts.pory"
	faceplayer
# 344 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 345 "data/maps/Route121/scripts.pory"
	end
# 346 "data/maps/Route121/scripts.pory"

# 347 "data/maps/Route121/scripts.pory"
Route121_EventScript_Pat::
# 348 "data/maps/Route121/scripts.pory"
	faceplayer
# 349 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 350 "data/maps/Route121/scripts.pory"
	end
# 351 "data/maps/Route121/scripts.pory"

# 352 "data/maps/Route121/scripts.pory"
Route121_EventScript_Marcel::
# 353 "data/maps/Route121/scripts.pory"
	faceplayer
# 354 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 355 "data/maps/Route121/scripts.pory"
	end
# 356 "data/maps/Route121/scripts.pory"

# 357 "data/maps/Route121/scripts.pory"
Route121_EventScript_MarcelCristin::
# 358 "data/maps/Route121/scripts.pory"
lockall
# 359 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_MARCEL
# 360 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 361 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 362 "data/maps/Route121/scripts.pory"
waitmovement 0
# 363 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 364 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 365 "data/maps/Route121/scripts.pory"
waitmovement 0
# 366 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_MarcelIntro MSGBOX_AUTOCLOSE
# 367 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_CRISTIN
# 368 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 369 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 370 "data/maps/Route121/scripts.pory"
waitmovement 0
# 371 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 372 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 373 "data/maps/Route121/scripts.pory"
waitmovement 0
# 374 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_CristinIntro, MSGBOX_AUTOCLOSE
# 375 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_MarcelCristinDoMultiBattle
# 376 "data/maps/Route121/scripts.pory"
releaseall
# 377 "data/maps/Route121/scripts.pory"
end
# 378 "data/maps/Route121/scripts.pory"

# 379 "data/maps/Route121/scripts.pory"
Route121_EventScript_MarcelCristinDoMultiBattle::
# 380 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 381 "data/maps/Route121/scripts.pory"
multi_2p_vs_2 TRAINER_MARCEL, Route121_Text_MarcelDefeat, TRAINER_CRISTIN_1, Route121_Text_CristinDefeat, PARTNER_EMMIE
# 382 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 383 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_MarcelCristinVictory
# 384 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 385 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 386 "data/maps/Route121/scripts.pory"
waitstate
# 387 "data/maps/Route121/scripts.pory"

# 388 "data/maps/Route121/scripts.pory"
Route121_EventScript_MarcelCristinVictory::
# 389 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 390 "data/maps/Route121/scripts.pory"
waitmovement 0
# 391 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 392 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 393 "data/maps/Route121/scripts.pory"
waitmovement 0
# 394 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_CristinPostBattle, MSGBOX_AUTOCLOSE
# 395 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 396 "data/maps/Route121/scripts.pory"
end
# 397 "data/maps/Route121/scripts.pory"

# 398 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin::
# 399 "data/maps/Route121/scripts.pory"
	faceplayer
# 400 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
# 401 "data/maps/Route121/scripts.pory"
	release
# 402 "data/maps/Route121/scripts.pory"
	end
# 403 "data/maps/Route121/scripts.pory"

# 404 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterCristin::
# 405 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 406 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 407 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
# 408 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_CRISTIN_1
# 409 "data/maps/Route121/scripts.pory"
	release
# 410 "data/maps/Route121/scripts.pory"
	end
# 411 "data/maps/Route121/scripts.pory"

# 412 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchCristin::
# 413 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
# 414 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
# 415 "data/maps/Route121/scripts.pory"
	end
# 416 "data/maps/Route121/scripts.pory"

# 417 "data/maps/Route121/scripts.pory"
Route121_Text_OkayMoveOutToMtPyre:
# 418 "data/maps/Route121/scripts.pory"
	.string "Okay!\n"
# 419 "data/maps/Route121/scripts.pory"
	.string "We're to move out to MT. PYRE!$"
# 420 "data/maps/Route121/scripts.pory"

# 421 "data/maps/Route121/scripts.pory"
Route121_Text_AheadLoomsMtPyre:
# 422 "data/maps/Route121/scripts.pory"
	.string "Ahead looms MT. PYRE…\p"
# 423 "data/maps/Route121/scripts.pory"
	.string "It is a natural monument to the spirits \n"
# 424 "data/maps/Route121/scripts.pory"
	.string "of departed POKéMON…$"
# 425 "data/maps/Route121/scripts.pory"

# 426 "data/maps/Route121/scripts.pory"
Route121_Text_MtPyrePierSign:
# 427 "data/maps/Route121/scripts.pory"
	.string "MT. PYRE PIER\p"
# 428 "data/maps/Route121/scripts.pory"
	.string "…The sign is old and worn out.\n"
# 429 "data/maps/Route121/scripts.pory"
	.string "The words are barely legible…$"
# 430 "data/maps/Route121/scripts.pory"

# 431 "data/maps/Route121/scripts.pory"
Route121_Text_SafariZoneSign:
# 432 "data/maps/Route121/scripts.pory"
	.string "“Filled with rare POKéMON!”\n"
# 433 "data/maps/Route121/scripts.pory"
	.string "SAFARI ZONE$"
# 434 "data/maps/Route121/scripts.pory"

# 435 "data/maps/Route121/scripts.pory"
Route121_Text_AquaGrunt1:
# 436 "data/maps/Route121/scripts.pory"
	.string "Beat it kid!$"
# 437 "data/maps/Route121/scripts.pory"

# 438 "data/maps/Route121/scripts.pory"
Route121_Text_AquaGrunt2:
# 439 "data/maps/Route121/scripts.pory"
	.string "Team Aqua control this area!$"
# 440 "data/maps/Route121/scripts.pory"

# 441 "data/maps/Route121/scripts.pory"
Route121_Text_AquaGrunt3:
# 442 "data/maps/Route121/scripts.pory"
	.string "We're standing guard until the boss\n"
# 443 "data/maps/Route121/scripts.pory"
	.string "tells us to stand down!$"
# 444 "data/maps/Route121/scripts.pory"

# 445 "data/maps/Route121/scripts.pory"
Route121_Text_MagmaGrunt1:
# 446 "data/maps/Route121/scripts.pory"
	.string "Team Magma have this area under control!$"
# 447 "data/maps/Route121/scripts.pory"

# 448 "data/maps/Route121/scripts.pory"
Route121_Text_MagmaGrunt2:
# 449 "data/maps/Route121/scripts.pory"
	.string "Nobody goes through this area while\n"
# 450 "data/maps/Route121/scripts.pory"
	.string "Team Magma operates at Mt. Pyre!$"
