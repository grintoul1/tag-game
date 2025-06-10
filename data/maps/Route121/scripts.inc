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
	.byte 0
# 19 "data/maps/Route121/scripts.pory"

# 20 "data/maps/Route121/scripts.pory"
Route121_OnTransition:
# 21 "data/maps/Route121/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 22 "data/maps/Route121/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 23 "data/maps/Route121/scripts.pory"
	end
# 24 "data/maps/Route121/scripts.pory"

# 25 "data/maps/Route121/scripts.pory"
Route121_EventScript_Woman::
# 26 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
# 27 "data/maps/Route121/scripts.pory"
	end
# 28 "data/maps/Route121/scripts.pory"

# 29 "data/maps/Route121/scripts.pory"
Route121_EventScript_MtPyrePierSign::
# 30 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
# 31 "data/maps/Route121/scripts.pory"
	end
# 32 "data/maps/Route121/scripts.pory"

# 33 "data/maps/Route121/scripts.pory"
Route121_EventScript_SafariZoneSign::
# 34 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
# 35 "data/maps/Route121/scripts.pory"
	end
# 36 "data/maps/Route121/scripts.pory"

# 37 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGruntsMoveOut::
# 38 "data/maps/Route121/scripts.pory"
	lockall
# 39 "data/maps/Route121/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 40 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
# 41 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
# 43 "data/maps/Route121/scripts.pory"
	closemessage
# 44 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_1, Route121_Movement_Grunt1Exit
# 45 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Route121_Movement_Grunt2Exit
# 46 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route121_Movement_Grunt3Exit
# 47 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route121/scripts.pory"
	fadedefaultbgm
# 49 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 50 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 51 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 52 "data/maps/Route121/scripts.pory"
	setvar VAR_ROUTE121_STATE, 1
# 53 "data/maps/Route121/scripts.pory"
	releaseall
# 54 "data/maps/Route121/scripts.pory"
	end
# 55 "data/maps/Route121/scripts.pory"

# 56 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGrunt1::
# 57 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AquaGrunt1, MSGBOX_DEFAULT
# 58 "data/maps/Route121/scripts.pory"
	closemessage
# 59 "data/maps/Route121/scripts.pory"
	end
# 60 "data/maps/Route121/scripts.pory"

# 61 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGrunt2::
# 62 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AquaGrunt2, MSGBOX_DEFAULT
# 63 "data/maps/Route121/scripts.pory"
	closemessage
# 64 "data/maps/Route121/scripts.pory"
	end
# 65 "data/maps/Route121/scripts.pory"

# 66 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGrunt3::
# 67 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AquaGrunt3, MSGBOX_DEFAULT
# 68 "data/maps/Route121/scripts.pory"
	closemessage
# 69 "data/maps/Route121/scripts.pory"
	end
# 70 "data/maps/Route121/scripts.pory"

# 71 "data/maps/Route121/scripts.pory"
Route121_EventScript_MagmaGrunt1::
# 72 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MagmaGrunt1, MSGBOX_DEFAULT
# 73 "data/maps/Route121/scripts.pory"
	closemessage
# 74 "data/maps/Route121/scripts.pory"
	end
# 75 "data/maps/Route121/scripts.pory"

# 76 "data/maps/Route121/scripts.pory"
Route121_EventScript_MagmaGrunt2::
# 77 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MagmaGrunt2, MSGBOX_DEFAULT
# 78 "data/maps/Route121/scripts.pory"
	closemessage
# 79 "data/maps/Route121/scripts.pory"
	end
# 80 "data/maps/Route121/scripts.pory"

# 81 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt1Exit:
# 82 "data/maps/Route121/scripts.pory"
	walk_down
# 83 "data/maps/Route121/scripts.pory"
	walk_down
# 84 "data/maps/Route121/scripts.pory"
	walk_down
# 85 "data/maps/Route121/scripts.pory"
	walk_down
# 86 "data/maps/Route121/scripts.pory"
	walk_down
# 87 "data/maps/Route121/scripts.pory"
	walk_down
# 88 "data/maps/Route121/scripts.pory"
	walk_down
# 89 "data/maps/Route121/scripts.pory"
	walk_down
# 90 "data/maps/Route121/scripts.pory"
	step_end
# 91 "data/maps/Route121/scripts.pory"

# 92 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt2Exit:
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
	walk_down
# 100 "data/maps/Route121/scripts.pory"
	walk_down
# 101 "data/maps/Route121/scripts.pory"
	step_end
# 102 "data/maps/Route121/scripts.pory"

# 103 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt3Exit:
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
	walk_down
# 111 "data/maps/Route121/scripts.pory"
	walk_down
# 112 "data/maps/Route121/scripts.pory"
	step_end
# 113 "data/maps/Route121/scripts.pory"

# 114 "data/maps/Route121/scripts.pory"
Route121_EventScript_Vanessa::
# 115 "data/maps/Route121/scripts.pory"
	faceplayer
# 116 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route121/scripts.pory"
	end
# 118 "data/maps/Route121/scripts.pory"

# 119 "data/maps/Route121/scripts.pory"
Route121_EventScript_VanessaWalter::
# 120 "data/maps/Route121/scripts.pory"
lockall
# 121 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_VANESSA
# 122 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 123 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 124 "data/maps/Route121/scripts.pory"
waitmovement 0
# 125 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 126 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 127 "data/maps/Route121/scripts.pory"
waitmovement 0
# 128 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_VanessaIntro MSGBOX_AUTOCLOSE
# 129 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_WALTER
# 130 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 131 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 132 "data/maps/Route121/scripts.pory"
waitmovement 0
# 133 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 134 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 135 "data/maps/Route121/scripts.pory"
waitmovement 0
# 136 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_WalterIntro, MSGBOX_AUTOCLOSE
# 137 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_VanessaWalterDoMultiBattle
# 138 "data/maps/Route121/scripts.pory"
releaseall
# 139 "data/maps/Route121/scripts.pory"
end
# 140 "data/maps/Route121/scripts.pory"

# 141 "data/maps/Route121/scripts.pory"
Route121_EventScript_VanessaWalterDoMultiBattle::
# 142 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 143 "data/maps/Route121/scripts.pory"
multi_2p_vs_2 TRAINER_VANESSA, Route121_Text_VanessaDefeat, TRAINER_WALTER_1, Route121_Text_WalterDefeat, PARTNER_EMMIE
# 144 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 145 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_VanessaWalterVictory
# 146 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 147 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 148 "data/maps/Route121/scripts.pory"
waitstate
# 149 "data/maps/Route121/scripts.pory"

# 150 "data/maps/Route121/scripts.pory"
Route121_EventScript_VanessaWalterVictory::
# 151 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 152 "data/maps/Route121/scripts.pory"
waitmovement 0
# 153 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 154 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 155 "data/maps/Route121/scripts.pory"
waitmovement 0
# 156 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_WalterPostBattle, MSGBOX_AUTOCLOSE
# 157 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 158 "data/maps/Route121/scripts.pory"
end
# 159 "data/maps/Route121/scripts.pory"

# 160 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter::
# 161 "data/maps/Route121/scripts.pory"
	faceplayer
# 162 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
# 163 "data/maps/Route121/scripts.pory"
	release
# 164 "data/maps/Route121/scripts.pory"
	end
# 165 "data/maps/Route121/scripts.pory"

# 166 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterWalter::
# 167 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 168 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
# 170 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_WALTER_1
# 171 "data/maps/Route121/scripts.pory"
	release
# 172 "data/maps/Route121/scripts.pory"
	end
# 173 "data/maps/Route121/scripts.pory"

# 174 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchWalter::
# 175 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
# 176 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route121/scripts.pory"
	end
# 178 "data/maps/Route121/scripts.pory"

# 179 "data/maps/Route121/scripts.pory"
Route121_EventScript_Tammy::
# 180 "data/maps/Route121/scripts.pory"
	faceplayer
# 181 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route121/scripts.pory"
	end
# 183 "data/maps/Route121/scripts.pory"

# 184 "data/maps/Route121/scripts.pory"
Route121_EventScript_KateJoy::
# 185 "data/maps/Route121/scripts.pory"
lockall
# 186 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_KATE
# 187 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 188 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 189 "data/maps/Route121/scripts.pory"
applymovement LOCALID_JOY, Common_Movement_ExclamationMark
# 190 "data/maps/Route121/scripts.pory"
waitmovement 0
# 191 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 192 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 193 "data/maps/Route121/scripts.pory"
waitmovement 0
# 194 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_KateIntro, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_KateJoyDoMultiBattle
# 196 "data/maps/Route121/scripts.pory"
releaseall
# 197 "data/maps/Route121/scripts.pory"
end
# 198 "data/maps/Route121/scripts.pory"

# 199 "data/maps/Route121/scripts.pory"
Route121_EventScript_KateJoyDoMultiBattle::
# 200 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 201 "data/maps/Route121/scripts.pory"
multi_2p_vs_1 TRAINER_KATE_AND_JOY, Route121_Text_KateDefeat, PARTNER_EMMIE
# 202 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 203 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_KateJoyVictory
# 204 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 205 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 206 "data/maps/Route121/scripts.pory"
waitstate
# 207 "data/maps/Route121/scripts.pory"

# 208 "data/maps/Route121/scripts.pory"
Route121_EventScript_KateJoyVictory::
# 209 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 210 "data/maps/Route121/scripts.pory"
waitmovement 0
# 211 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 213 "data/maps/Route121/scripts.pory"
end
# 214 "data/maps/Route121/scripts.pory"

# 215 "data/maps/Route121/scripts.pory"
Route121_EventScript_Kate::
# 216 "data/maps/Route121/scripts.pory"
	faceplayer
# 217 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route121/scripts.pory"
	end
# 219 "data/maps/Route121/scripts.pory"

# 220 "data/maps/Route121/scripts.pory"
Route121_EventScript_Joy::
# 221 "data/maps/Route121/scripts.pory"
	faceplayer
# 222 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
# 223 "data/maps/Route121/scripts.pory"
	end
# 224 "data/maps/Route121/scripts.pory"

# 225 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica::
# 226 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
# 227 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 228 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchJessica
# 229 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
# 230 "data/maps/Route121/scripts.pory"
	release
# 231 "data/maps/Route121/scripts.pory"
	end
# 232 "data/maps/Route121/scripts.pory"

# 233 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterJessica::
# 234 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 235 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
# 237 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_JESSICA_1
# 238 "data/maps/Route121/scripts.pory"
	release
# 239 "data/maps/Route121/scripts.pory"
	end
# 240 "data/maps/Route121/scripts.pory"

# 241 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchJessica::
# 242 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
# 243 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
# 244 "data/maps/Route121/scripts.pory"
	end
# 245 "data/maps/Route121/scripts.pory"

# 246 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cale::
# 247 "data/maps/Route121/scripts.pory"
	faceplayer
# 248 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/Route121/scripts.pory"
	end
# 250 "data/maps/Route121/scripts.pory"

# 251 "data/maps/Route121/scripts.pory"
Route121_EventScript_CaleTammy::
# 252 "data/maps/Route121/scripts.pory"
lockall
# 253 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_CALE
# 254 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 255 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 256 "data/maps/Route121/scripts.pory"
waitmovement 0
# 257 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 258 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 259 "data/maps/Route121/scripts.pory"
waitmovement 0
# 260 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_CaleIntro MSGBOX_AUTOCLOSE
# 261 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_TAMMY
# 262 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 263 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 264 "data/maps/Route121/scripts.pory"
waitmovement 0
# 265 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 266 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 267 "data/maps/Route121/scripts.pory"
waitmovement 0
# 268 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_TammyIntro, MSGBOX_AUTOCLOSE
# 269 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_CaleTammyDoMultiBattle
# 270 "data/maps/Route121/scripts.pory"
releaseall
# 271 "data/maps/Route121/scripts.pory"
end
# 272 "data/maps/Route121/scripts.pory"

# 273 "data/maps/Route121/scripts.pory"
Route121_EventScript_CaleTammyDoMultiBattle::
# 274 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 275 "data/maps/Route121/scripts.pory"
multi_2p_vs_2 TRAINER_CALE, Route121_Text_CaleDefeat, TRAINER_TAMMY, Route121_Text_TammyDefeat, PARTNER_EMMIE
# 276 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 277 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_CaleTammyVictory
# 278 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 279 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 280 "data/maps/Route121/scripts.pory"
waitstate
# 281 "data/maps/Route121/scripts.pory"

# 282 "data/maps/Route121/scripts.pory"
Route121_EventScript_CaleTammyVictory::
# 283 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 284 "data/maps/Route121/scripts.pory"
waitmovement 0
# 285 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 287 "data/maps/Route121/scripts.pory"
waitmovement 0
# 288 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 289 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 290 "data/maps/Route121/scripts.pory"
end
# 291 "data/maps/Route121/scripts.pory"

# 292 "data/maps/Route121/scripts.pory"
Route121_EventScript_PatMyles::
# 293 "data/maps/Route121/scripts.pory"
lockall
# 294 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_PAT
# 295 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 296 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 297 "data/maps/Route121/scripts.pory"
waitmovement 0
# 298 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 299 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 300 "data/maps/Route121/scripts.pory"
waitmovement 0
# 301 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_PatIntro MSGBOX_AUTOCLOSE
# 302 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_MYLES
# 303 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 304 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 305 "data/maps/Route121/scripts.pory"
waitmovement 0
# 306 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 307 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 308 "data/maps/Route121/scripts.pory"
waitmovement 0
# 309 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_MylesIntro, MSGBOX_AUTOCLOSE
# 310 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_PatMylesDoMultiBattle
# 311 "data/maps/Route121/scripts.pory"
releaseall
# 312 "data/maps/Route121/scripts.pory"
end
# 313 "data/maps/Route121/scripts.pory"

# 314 "data/maps/Route121/scripts.pory"
Route121_EventScript_PatMylesDoMultiBattle::
# 315 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 316 "data/maps/Route121/scripts.pory"
multi_2p_vs_2 TRAINER_PAT, Route121_Text_PatDefeat, TRAINER_MYLES, Route121_Text_MylesDefeat, PARTNER_EMMIE
# 317 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 318 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_PatMylesVictory
# 319 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 320 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 321 "data/maps/Route121/scripts.pory"
waitstate
# 322 "data/maps/Route121/scripts.pory"

# 323 "data/maps/Route121/scripts.pory"
Route121_EventScript_PatMylesVictory::
# 324 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 325 "data/maps/Route121/scripts.pory"
waitmovement 0
# 326 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 327 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 328 "data/maps/Route121/scripts.pory"
waitmovement 0
# 329 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 330 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 331 "data/maps/Route121/scripts.pory"
end
# 332 "data/maps/Route121/scripts.pory"

# 333 "data/maps/Route121/scripts.pory"
Route121_EventScript_Myles::
# 334 "data/maps/Route121/scripts.pory"
	faceplayer
# 335 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 336 "data/maps/Route121/scripts.pory"
	end
# 337 "data/maps/Route121/scripts.pory"

# 338 "data/maps/Route121/scripts.pory"
Route121_EventScript_Pat::
# 339 "data/maps/Route121/scripts.pory"
	faceplayer
# 340 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 341 "data/maps/Route121/scripts.pory"
	end
# 342 "data/maps/Route121/scripts.pory"

# 343 "data/maps/Route121/scripts.pory"
Route121_EventScript_Marcel::
# 344 "data/maps/Route121/scripts.pory"
	faceplayer
# 345 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 346 "data/maps/Route121/scripts.pory"
	end
# 347 "data/maps/Route121/scripts.pory"

# 348 "data/maps/Route121/scripts.pory"
Route121_EventScript_MarcelCristin::
# 349 "data/maps/Route121/scripts.pory"
lockall
# 350 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_MARCEL
# 351 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 352 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 353 "data/maps/Route121/scripts.pory"
waitmovement 0
# 354 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 355 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 356 "data/maps/Route121/scripts.pory"
waitmovement 0
# 357 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_MarcelIntro MSGBOX_AUTOCLOSE
# 358 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_CRISTIN
# 359 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 360 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 361 "data/maps/Route121/scripts.pory"
waitmovement 0
# 362 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 363 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 364 "data/maps/Route121/scripts.pory"
waitmovement 0
# 365 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_CristinIntro, MSGBOX_AUTOCLOSE
# 366 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_MarcelCristinDoMultiBattle
# 367 "data/maps/Route121/scripts.pory"
releaseall
# 368 "data/maps/Route121/scripts.pory"
end
# 369 "data/maps/Route121/scripts.pory"

# 370 "data/maps/Route121/scripts.pory"
Route121_EventScript_MarcelCristinDoMultiBattle::
# 371 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 372 "data/maps/Route121/scripts.pory"
multi_2p_vs_2 TRAINER_MARCEL, Route121_Text_MarcelDefeat, TRAINER_CRISTIN_1, Route121_Text_CristinDefeat, PARTNER_EMMIE
# 373 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 374 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_MarcelCristinVictory
# 375 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 376 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 377 "data/maps/Route121/scripts.pory"
waitstate
# 378 "data/maps/Route121/scripts.pory"

# 379 "data/maps/Route121/scripts.pory"
Route121_EventScript_MarcelCristinVictory::
# 380 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 381 "data/maps/Route121/scripts.pory"
waitmovement 0
# 382 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 383 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 384 "data/maps/Route121/scripts.pory"
waitmovement 0
# 385 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_CristinPostBattle, MSGBOX_AUTOCLOSE
# 386 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 387 "data/maps/Route121/scripts.pory"
end
# 388 "data/maps/Route121/scripts.pory"

# 389 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin::
# 390 "data/maps/Route121/scripts.pory"
	faceplayer
# 391 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
# 392 "data/maps/Route121/scripts.pory"
	release
# 393 "data/maps/Route121/scripts.pory"
	end
# 394 "data/maps/Route121/scripts.pory"

# 395 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterCristin::
# 396 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 397 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 398 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
# 399 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_CRISTIN_1
# 400 "data/maps/Route121/scripts.pory"
	release
# 401 "data/maps/Route121/scripts.pory"
	end
# 402 "data/maps/Route121/scripts.pory"

# 403 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchCristin::
# 404 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
# 405 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
# 406 "data/maps/Route121/scripts.pory"
	end
# 407 "data/maps/Route121/scripts.pory"

# 408 "data/maps/Route121/scripts.pory"
Route121_Text_OkayMoveOutToMtPyre:
# 409 "data/maps/Route121/scripts.pory"
	.string "Okay!\n"
# 410 "data/maps/Route121/scripts.pory"
	.string "We're to move out to MT. PYRE!$"
# 411 "data/maps/Route121/scripts.pory"

# 412 "data/maps/Route121/scripts.pory"
Route121_Text_AheadLoomsMtPyre:
# 413 "data/maps/Route121/scripts.pory"
	.string "Ahead looms MT. PYRE…\p"
# 414 "data/maps/Route121/scripts.pory"
	.string "It is a natural monument to the spirits \n"
# 415 "data/maps/Route121/scripts.pory"
	.string "of departed POKéMON…$"
# 416 "data/maps/Route121/scripts.pory"

# 417 "data/maps/Route121/scripts.pory"
Route121_Text_MtPyrePierSign:
# 418 "data/maps/Route121/scripts.pory"
	.string "MT. PYRE PIER\p"
# 419 "data/maps/Route121/scripts.pory"
	.string "…The sign is old and worn out.\n"
# 420 "data/maps/Route121/scripts.pory"
	.string "The words are barely legible…$"
# 421 "data/maps/Route121/scripts.pory"

# 422 "data/maps/Route121/scripts.pory"
Route121_Text_SafariZoneSign:
# 423 "data/maps/Route121/scripts.pory"
	.string "“Filled with rare POKéMON!”\n"
# 424 "data/maps/Route121/scripts.pory"
	.string "SAFARI ZONE$"
# 425 "data/maps/Route121/scripts.pory"

# 426 "data/maps/Route121/scripts.pory"
Route121_Text_AquaGrunt1:
# 427 "data/maps/Route121/scripts.pory"
	.string "Beat it kid!$"
# 428 "data/maps/Route121/scripts.pory"

# 429 "data/maps/Route121/scripts.pory"
Route121_Text_AquaGrunt2:
# 430 "data/maps/Route121/scripts.pory"
	.string "Team Aqua control this area!$"
# 431 "data/maps/Route121/scripts.pory"

# 432 "data/maps/Route121/scripts.pory"
Route121_Text_AquaGrunt3:
# 433 "data/maps/Route121/scripts.pory"
	.string "We're standing guard until the boss\n"
# 434 "data/maps/Route121/scripts.pory"
	.string "tells us to stand down!$"
# 435 "data/maps/Route121/scripts.pory"

# 436 "data/maps/Route121/scripts.pory"
Route121_Text_MagmaGrunt1:
# 437 "data/maps/Route121/scripts.pory"
	.string "Team Magma have this area under control!$"
# 438 "data/maps/Route121/scripts.pory"

# 439 "data/maps/Route121/scripts.pory"
Route121_Text_MagmaGrunt2:
# 440 "data/maps/Route121/scripts.pory"
	.string "Nobody goes through this area while\n"
# 441 "data/maps/Route121/scripts.pory"
	.string "Team Magma operates at Mt. Pyre!$"
