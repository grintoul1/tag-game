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
	end
# 23 "data/maps/Route121/scripts.pory"

# 24 "data/maps/Route121/scripts.pory"
Route121_EventScript_Woman::
# 25 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
# 26 "data/maps/Route121/scripts.pory"
	end
# 27 "data/maps/Route121/scripts.pory"

# 28 "data/maps/Route121/scripts.pory"
Route121_EventScript_MtPyrePierSign::
# 29 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
# 30 "data/maps/Route121/scripts.pory"
	end
# 31 "data/maps/Route121/scripts.pory"

# 32 "data/maps/Route121/scripts.pory"
Route121_EventScript_SafariZoneSign::
# 33 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
# 34 "data/maps/Route121/scripts.pory"
	end
# 35 "data/maps/Route121/scripts.pory"

# 36 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGruntsMoveOut::
# 37 "data/maps/Route121/scripts.pory"
	lockall
# 38 "data/maps/Route121/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 39 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
# 40 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
# 42 "data/maps/Route121/scripts.pory"
	closemessage
# 43 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_1, Route121_Movement_Grunt1Exit
# 44 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Route121_Movement_Grunt2Exit
# 45 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route121_Movement_Grunt3Exit
# 46 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route121/scripts.pory"
	fadedefaultbgm
# 48 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 49 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 50 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 51 "data/maps/Route121/scripts.pory"
	setvar VAR_ROUTE121_STATE, 1
# 52 "data/maps/Route121/scripts.pory"
	releaseall
# 53 "data/maps/Route121/scripts.pory"
	end
# 54 "data/maps/Route121/scripts.pory"

# 55 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGrunt1::
# 56 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AquaGrunt1, MSGBOX_DEFAULT
# 57 "data/maps/Route121/scripts.pory"
	closemessage
# 58 "data/maps/Route121/scripts.pory"
	end
# 59 "data/maps/Route121/scripts.pory"

# 60 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGrunt2::
# 61 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AquaGrunt2, MSGBOX_DEFAULT
# 62 "data/maps/Route121/scripts.pory"
	closemessage
# 63 "data/maps/Route121/scripts.pory"
	end
# 64 "data/maps/Route121/scripts.pory"

# 65 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGrunt3::
# 66 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AquaGrunt3, MSGBOX_DEFAULT
# 67 "data/maps/Route121/scripts.pory"
	closemessage
# 68 "data/maps/Route121/scripts.pory"
	end
# 69 "data/maps/Route121/scripts.pory"

# 70 "data/maps/Route121/scripts.pory"
Route121_EventScript_MagmaGrunt1::
# 71 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MagmaGrunt1, MSGBOX_DEFAULT
# 72 "data/maps/Route121/scripts.pory"
	closemessage
# 73 "data/maps/Route121/scripts.pory"
	end
# 74 "data/maps/Route121/scripts.pory"

# 75 "data/maps/Route121/scripts.pory"
Route121_EventScript_MagmaGrunt2::
# 76 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MagmaGrunt2, MSGBOX_DEFAULT
# 77 "data/maps/Route121/scripts.pory"
	closemessage
# 78 "data/maps/Route121/scripts.pory"
	end
# 79 "data/maps/Route121/scripts.pory"

# 80 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt1Exit:
# 81 "data/maps/Route121/scripts.pory"
	walk_down
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
	step_end
# 90 "data/maps/Route121/scripts.pory"

# 91 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt2Exit:
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
	walk_down
# 100 "data/maps/Route121/scripts.pory"
	step_end
# 101 "data/maps/Route121/scripts.pory"

# 102 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt3Exit:
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
	walk_down
# 111 "data/maps/Route121/scripts.pory"
	step_end
# 112 "data/maps/Route121/scripts.pory"

# 113 "data/maps/Route121/scripts.pory"
Route121_EventScript_Vanessa::
# 114 "data/maps/Route121/scripts.pory"
	faceplayer
# 115 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/Route121/scripts.pory"
	end
# 117 "data/maps/Route121/scripts.pory"

# 118 "data/maps/Route121/scripts.pory"
Route121_EventScript_VanessaWalter::
# 119 "data/maps/Route121/scripts.pory"
lockall
# 120 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_VANESSA
# 121 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 122 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 123 "data/maps/Route121/scripts.pory"
waitmovement 0
# 124 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 125 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 126 "data/maps/Route121/scripts.pory"
waitmovement 0
# 127 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_VanessaIntro MSGBOX_AUTOCLOSE
# 128 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_WALTER
# 129 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 130 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 131 "data/maps/Route121/scripts.pory"
waitmovement 0
# 132 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 133 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 134 "data/maps/Route121/scripts.pory"
waitmovement 0
# 135 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_WalterIntro, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_VanessaWalterDoMultiBattle
# 137 "data/maps/Route121/scripts.pory"
releaseall
# 138 "data/maps/Route121/scripts.pory"
end
# 139 "data/maps/Route121/scripts.pory"

# 140 "data/maps/Route121/scripts.pory"
Route121_EventScript_VanessaWalterDoMultiBattle::
# 141 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 142 "data/maps/Route121/scripts.pory"
multi_2p_vs_2 TRAINER_VANESSA, Route121_Text_VanessaDefeat, TRAINER_WALTER_1, Route121_Text_WalterDefeat, PARTNER_EMMIE
# 143 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 144 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_VanessaWalterVictory
# 145 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 146 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 147 "data/maps/Route121/scripts.pory"
waitstate
# 148 "data/maps/Route121/scripts.pory"

# 149 "data/maps/Route121/scripts.pory"
Route121_EventScript_VanessaWalterVictory::
# 150 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 151 "data/maps/Route121/scripts.pory"
waitmovement 0
# 152 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 153 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 154 "data/maps/Route121/scripts.pory"
waitmovement 0
# 155 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_WalterPostBattle, MSGBOX_AUTOCLOSE
# 156 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 157 "data/maps/Route121/scripts.pory"
end
# 158 "data/maps/Route121/scripts.pory"

# 159 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter::
# 160 "data/maps/Route121/scripts.pory"
	faceplayer
# 161 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
# 162 "data/maps/Route121/scripts.pory"
	release
# 163 "data/maps/Route121/scripts.pory"
	end
# 164 "data/maps/Route121/scripts.pory"

# 165 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterWalter::
# 166 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 167 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
# 169 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_WALTER_1
# 170 "data/maps/Route121/scripts.pory"
	release
# 171 "data/maps/Route121/scripts.pory"
	end
# 172 "data/maps/Route121/scripts.pory"

# 173 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchWalter::
# 174 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
# 175 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
# 176 "data/maps/Route121/scripts.pory"
	end
# 177 "data/maps/Route121/scripts.pory"

# 178 "data/maps/Route121/scripts.pory"
Route121_EventScript_Tammy::
# 179 "data/maps/Route121/scripts.pory"
	faceplayer
# 180 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 181 "data/maps/Route121/scripts.pory"
	end
# 182 "data/maps/Route121/scripts.pory"

# 183 "data/maps/Route121/scripts.pory"
Route121_EventScript_KateJoy::
# 184 "data/maps/Route121/scripts.pory"
lockall
# 185 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_KATE
# 186 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 187 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 188 "data/maps/Route121/scripts.pory"
applymovement LOCALID_JOY, Common_Movement_ExclamationMark
# 189 "data/maps/Route121/scripts.pory"
waitmovement 0
# 190 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 191 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 192 "data/maps/Route121/scripts.pory"
waitmovement 0
# 193 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_KateIntro, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_KateJoyDoMultiBattle
# 195 "data/maps/Route121/scripts.pory"
releaseall
# 196 "data/maps/Route121/scripts.pory"
end
# 197 "data/maps/Route121/scripts.pory"

# 198 "data/maps/Route121/scripts.pory"
Route121_EventScript_KateJoyDoMultiBattle::
# 199 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 200 "data/maps/Route121/scripts.pory"
multi_2p_vs_1 TRAINER_KATE_AND_JOY, Route121_Text_KateDefeat, PARTNER_EMMIE
# 201 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 202 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_KateJoyVictory
# 203 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 204 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 205 "data/maps/Route121/scripts.pory"
waitstate
# 206 "data/maps/Route121/scripts.pory"

# 207 "data/maps/Route121/scripts.pory"
Route121_EventScript_KateJoyVictory::
# 208 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 209 "data/maps/Route121/scripts.pory"
waitmovement 0
# 210 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 212 "data/maps/Route121/scripts.pory"
end
# 213 "data/maps/Route121/scripts.pory"

# 214 "data/maps/Route121/scripts.pory"
Route121_EventScript_Kate::
# 215 "data/maps/Route121/scripts.pory"
	faceplayer
# 216 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/Route121/scripts.pory"
	end
# 218 "data/maps/Route121/scripts.pory"

# 219 "data/maps/Route121/scripts.pory"
Route121_EventScript_Joy::
# 220 "data/maps/Route121/scripts.pory"
	faceplayer
# 221 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/Route121/scripts.pory"
	end
# 223 "data/maps/Route121/scripts.pory"

# 224 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica::
# 225 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
# 226 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 227 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchJessica
# 228 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
# 229 "data/maps/Route121/scripts.pory"
	release
# 230 "data/maps/Route121/scripts.pory"
	end
# 231 "data/maps/Route121/scripts.pory"

# 232 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterJessica::
# 233 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 234 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
# 236 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_JESSICA_1
# 237 "data/maps/Route121/scripts.pory"
	release
# 238 "data/maps/Route121/scripts.pory"
	end
# 239 "data/maps/Route121/scripts.pory"

# 240 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchJessica::
# 241 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
# 242 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
# 243 "data/maps/Route121/scripts.pory"
	end
# 244 "data/maps/Route121/scripts.pory"

# 245 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cale::
# 246 "data/maps/Route121/scripts.pory"
	faceplayer
# 247 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route121/scripts.pory"
	end
# 249 "data/maps/Route121/scripts.pory"

# 250 "data/maps/Route121/scripts.pory"
Route121_EventScript_CaleTammy::
# 251 "data/maps/Route121/scripts.pory"
lockall
# 252 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_CALE
# 253 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 254 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 255 "data/maps/Route121/scripts.pory"
waitmovement 0
# 256 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 257 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 258 "data/maps/Route121/scripts.pory"
waitmovement 0
# 259 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_CaleIntro MSGBOX_AUTOCLOSE
# 260 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_TAMMY
# 261 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 262 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 263 "data/maps/Route121/scripts.pory"
waitmovement 0
# 264 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 265 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 266 "data/maps/Route121/scripts.pory"
waitmovement 0
# 267 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_TammyIntro, MSGBOX_AUTOCLOSE
# 268 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_CaleTammyDoMultiBattle
# 269 "data/maps/Route121/scripts.pory"
releaseall
# 270 "data/maps/Route121/scripts.pory"
end
# 271 "data/maps/Route121/scripts.pory"

# 272 "data/maps/Route121/scripts.pory"
Route121_EventScript_CaleTammyDoMultiBattle::
# 273 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 274 "data/maps/Route121/scripts.pory"
multi_2p_vs_2 TRAINER_CALE, Route121_Text_CaleDefeat, TRAINER_TAMMY, Route121_Text_TammyDefeat, PARTNER_EMMIE
# 275 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 276 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_CaleTammyVictory
# 277 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 278 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 279 "data/maps/Route121/scripts.pory"
waitstate
# 280 "data/maps/Route121/scripts.pory"

# 281 "data/maps/Route121/scripts.pory"
Route121_EventScript_CaleTammyVictory::
# 282 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 283 "data/maps/Route121/scripts.pory"
waitmovement 0
# 284 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 286 "data/maps/Route121/scripts.pory"
waitmovement 0
# 287 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 289 "data/maps/Route121/scripts.pory"
end
# 290 "data/maps/Route121/scripts.pory"

# 291 "data/maps/Route121/scripts.pory"
Route121_EventScript_PatMyles::
# 292 "data/maps/Route121/scripts.pory"
lockall
# 293 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_PAT
# 294 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 295 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 296 "data/maps/Route121/scripts.pory"
waitmovement 0
# 297 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 298 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 299 "data/maps/Route121/scripts.pory"
waitmovement 0
# 300 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_PatIntro MSGBOX_AUTOCLOSE
# 301 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_MYLES
# 302 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 303 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 304 "data/maps/Route121/scripts.pory"
waitmovement 0
# 305 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 306 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 307 "data/maps/Route121/scripts.pory"
waitmovement 0
# 308 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_MylesIntro, MSGBOX_AUTOCLOSE
# 309 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_PatMylesDoMultiBattle
# 310 "data/maps/Route121/scripts.pory"
releaseall
# 311 "data/maps/Route121/scripts.pory"
end
# 312 "data/maps/Route121/scripts.pory"

# 313 "data/maps/Route121/scripts.pory"
Route121_EventScript_PatMylesDoMultiBattle::
# 314 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 315 "data/maps/Route121/scripts.pory"
multi_2p_vs_2 TRAINER_PAT, Route121_Text_PatDefeat, TRAINER_MYLES, Route121_Text_MylesDefeat, PARTNER_EMMIE
# 316 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 317 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_PatMylesVictory
# 318 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 319 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 320 "data/maps/Route121/scripts.pory"
waitstate
# 321 "data/maps/Route121/scripts.pory"

# 322 "data/maps/Route121/scripts.pory"
Route121_EventScript_PatMylesVictory::
# 323 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 324 "data/maps/Route121/scripts.pory"
waitmovement 0
# 325 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 326 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 327 "data/maps/Route121/scripts.pory"
waitmovement 0
# 328 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 330 "data/maps/Route121/scripts.pory"
end
# 331 "data/maps/Route121/scripts.pory"

# 332 "data/maps/Route121/scripts.pory"
Route121_EventScript_Myles::
# 333 "data/maps/Route121/scripts.pory"
	faceplayer
# 334 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 335 "data/maps/Route121/scripts.pory"
	end
# 336 "data/maps/Route121/scripts.pory"

# 337 "data/maps/Route121/scripts.pory"
Route121_EventScript_Pat::
# 338 "data/maps/Route121/scripts.pory"
	faceplayer
# 339 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 340 "data/maps/Route121/scripts.pory"
	end
# 341 "data/maps/Route121/scripts.pory"

# 342 "data/maps/Route121/scripts.pory"
Route121_EventScript_Marcel::
# 343 "data/maps/Route121/scripts.pory"
	faceplayer
# 344 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 345 "data/maps/Route121/scripts.pory"
	end
# 346 "data/maps/Route121/scripts.pory"

# 347 "data/maps/Route121/scripts.pory"
Route121_EventScript_MarcelCristin::
# 348 "data/maps/Route121/scripts.pory"
lockall
# 349 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_MARCEL
# 350 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 351 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 352 "data/maps/Route121/scripts.pory"
waitmovement 0
# 353 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 354 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 355 "data/maps/Route121/scripts.pory"
waitmovement 0
# 356 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_MarcelIntro MSGBOX_AUTOCLOSE
# 357 "data/maps/Route121/scripts.pory"
setvar VAR_0x8008, LOCALID_CRISTIN
# 358 "data/maps/Route121/scripts.pory"
playse SE_PIN
# 359 "data/maps/Route121/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 360 "data/maps/Route121/scripts.pory"
waitmovement 0
# 361 "data/maps/Route121/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 362 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 363 "data/maps/Route121/scripts.pory"
waitmovement 0
# 364 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_CristinIntro, MSGBOX_AUTOCLOSE
# 365 "data/maps/Route121/scripts.pory"
goto Route121_EventScript_MarcelCristinDoMultiBattle
# 366 "data/maps/Route121/scripts.pory"
releaseall
# 367 "data/maps/Route121/scripts.pory"
end
# 368 "data/maps/Route121/scripts.pory"

# 369 "data/maps/Route121/scripts.pory"
Route121_EventScript_MarcelCristinDoMultiBattle::
# 370 "data/maps/Route121/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 371 "data/maps/Route121/scripts.pory"
multi_2p_vs_2 TRAINER_MARCEL, Route121_Text_MarcelDefeat, TRAINER_CRISTIN_1, Route121_Text_CristinDefeat, PARTNER_EMMIE
# 372 "data/maps/Route121/scripts.pory"
switch VAR_RESULT
# 373 "data/maps/Route121/scripts.pory"
case 1, Route121_EventScript_MarcelCristinVictory
# 374 "data/maps/Route121/scripts.pory"
fadescreen FADE_TO_BLACK
# 375 "data/maps/Route121/scripts.pory"
special SetCB2WhiteOut
# 376 "data/maps/Route121/scripts.pory"
waitstate
# 377 "data/maps/Route121/scripts.pory"

# 378 "data/maps/Route121/scripts.pory"
Route121_EventScript_MarcelCristinVictory::
# 379 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 380 "data/maps/Route121/scripts.pory"
waitmovement 0
# 381 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 382 "data/maps/Route121/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 383 "data/maps/Route121/scripts.pory"
waitmovement 0
# 384 "data/maps/Route121/scripts.pory"
msgbox Route121_Text_CristinPostBattle, MSGBOX_AUTOCLOSE
# 385 "data/maps/Route121/scripts.pory"
addvar VAR_ROUTE121_STATE, 1
# 386 "data/maps/Route121/scripts.pory"
end
# 387 "data/maps/Route121/scripts.pory"

# 388 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin::
# 389 "data/maps/Route121/scripts.pory"
	faceplayer
# 390 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
# 391 "data/maps/Route121/scripts.pory"
	release
# 392 "data/maps/Route121/scripts.pory"
	end
# 393 "data/maps/Route121/scripts.pory"

# 394 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterCristin::
# 395 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 396 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 397 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
# 398 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_CRISTIN_1
# 399 "data/maps/Route121/scripts.pory"
	release
# 400 "data/maps/Route121/scripts.pory"
	end
# 401 "data/maps/Route121/scripts.pory"

# 402 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchCristin::
# 403 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
# 404 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
# 405 "data/maps/Route121/scripts.pory"
	end
# 406 "data/maps/Route121/scripts.pory"

# 407 "data/maps/Route121/scripts.pory"
Route121_Text_OkayMoveOutToMtPyre:
# 408 "data/maps/Route121/scripts.pory"
	.string "Okay!\n"
# 409 "data/maps/Route121/scripts.pory"
	.string "We're to move out to MT. PYRE!$"
# 410 "data/maps/Route121/scripts.pory"

# 411 "data/maps/Route121/scripts.pory"
Route121_Text_AheadLoomsMtPyre:
# 412 "data/maps/Route121/scripts.pory"
	.string "Ahead looms MT. PYRE…\p"
# 413 "data/maps/Route121/scripts.pory"
	.string "It is a natural monument to the spirits \n"
# 414 "data/maps/Route121/scripts.pory"
	.string "of departed POKéMON…$"
# 415 "data/maps/Route121/scripts.pory"

# 416 "data/maps/Route121/scripts.pory"
Route121_Text_MtPyrePierSign:
# 417 "data/maps/Route121/scripts.pory"
	.string "MT. PYRE PIER\p"
# 418 "data/maps/Route121/scripts.pory"
	.string "…The sign is old and worn out.\n"
# 419 "data/maps/Route121/scripts.pory"
	.string "The words are barely legible…$"
# 420 "data/maps/Route121/scripts.pory"

# 421 "data/maps/Route121/scripts.pory"
Route121_Text_SafariZoneSign:
# 422 "data/maps/Route121/scripts.pory"
	.string "“Filled with rare POKéMON!”\n"
# 423 "data/maps/Route121/scripts.pory"
	.string "SAFARI ZONE$"
# 424 "data/maps/Route121/scripts.pory"

# 425 "data/maps/Route121/scripts.pory"
Route121_Text_AquaGrunt1:
# 426 "data/maps/Route121/scripts.pory"
	.string "Beat it kid!$"
# 427 "data/maps/Route121/scripts.pory"

# 428 "data/maps/Route121/scripts.pory"
Route121_Text_AquaGrunt2:
# 429 "data/maps/Route121/scripts.pory"
	.string "Team Aqua control this area!$"
# 430 "data/maps/Route121/scripts.pory"

# 431 "data/maps/Route121/scripts.pory"
Route121_Text_AquaGrunt3:
# 432 "data/maps/Route121/scripts.pory"
	.string "We're standing guard until the boss\n"
# 433 "data/maps/Route121/scripts.pory"
	.string "tells us to stand down!$"
# 434 "data/maps/Route121/scripts.pory"

# 435 "data/maps/Route121/scripts.pory"
Route121_Text_MagmaGrunt1:
# 436 "data/maps/Route121/scripts.pory"
	.string "Team Magma have this area under control!$"
# 437 "data/maps/Route121/scripts.pory"

# 438 "data/maps/Route121/scripts.pory"
Route121_Text_MagmaGrunt2:
# 439 "data/maps/Route121/scripts.pory"
	.string "Nobody goes through this area while\n"
# 440 "data/maps/Route121/scripts.pory"
	.string "Team Magma operates at Mt. Pyre!$"
