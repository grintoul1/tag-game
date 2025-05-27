# 1 "data/maps/Route123/scripts.pory"

# 2 "data/maps/Route123/scripts.pory"
.set LOCALID_DAVIS, 42
# 3 "data/maps/Route123/scripts.pory"
.set LOCALID_JAZMYN, 41
# 4 "data/maps/Route123/scripts.pory"
.set LOCALID_JACKI, 30
# 5 "data/maps/Route123/scripts.pory"
.set LOCALID_FREDERICK, 39
# 6 "data/maps/Route123/scripts.pory"
.set LOCALID_BRAXTON, 9
# 7 "data/maps/Route123/scripts.pory"
.set LOCALID_WENDY, 8
# 8 "data/maps/Route123/scripts.pory"
.set LOCALID_MIU, 28
# 9 "data/maps/Route123/scripts.pory"
.set LOCALID_YUKI, 27
# 10 "data/maps/Route123/scripts.pory"
.set LOCALID_VIOLET, 26
# 11 "data/maps/Route123/scripts.pory"
.set LOCALID_CAMERON, 29
# 12 "data/maps/Route123/scripts.pory"
.set LOCALID_ALBERTO, 38
# 13 "data/maps/Route123/scripts.pory"
.set LOCALID_FERNANDO, 37
# 14 "data/maps/Route123/scripts.pory"
.set LOCALID_ED, 36
# 15 "data/maps/Route123/scripts.pory"
.set LOCALID_KINDRA, 31
# 16 "data/maps/Route123/scripts.pory"
.set LOCALID_KAYLEY, 35
# 17 "data/maps/Route123/scripts.pory"
.set LOCALID_JONAS, 34
# 18 "data/maps/Route123/scripts.pory"

# 19 "data/maps/Route123/scripts.pory"
Route123_MapScripts::
# 20 "data/maps/Route123/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_OnTransition
# 21 "data/maps/Route123/scripts.pory"
	.byte 0
# 22 "data/maps/Route123/scripts.pory"

# 23 "data/maps/Route123/scripts.pory"
Route123_OnTransition:
# 24 "data/maps/Route123/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 25 "data/maps/Route123/scripts.pory"
	special SetRoute123Weather
# 26 "data/maps/Route123/scripts.pory"
	end
# 27 "data/maps/Route123/scripts.pory"

# 28 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl::
# 29 "data/maps/Route123/scripts.pory"
	lock
# 30 "data/maps/Route123/scripts.pory"
	faceplayer
# 31 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, Route123_EventScript_ReceivedGigaDrain
# 32 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveAny, MSGBOX_DEFAULT
# 33 "data/maps/Route123/scripts.pory"
	special IsGrassTypeInParty
# 34 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route123_EventScript_NoGrassMons
# 35 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YouLikeGrassMonsTooHaveThis, MSGBOX_DEFAULT
# 36 "data/maps/Route123/scripts.pory"
	giveitem ITEM_TM_GIGA_DRAIN
# 37 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 38 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
# 39 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 40 "data/maps/Route123/scripts.pory"
	release
# 41 "data/maps/Route123/scripts.pory"
	end
# 42 "data/maps/Route123/scripts.pory"

# 43 "data/maps/Route123/scripts.pory"
Route123_EventScript_NoGrassMons::
# 44 "data/maps/Route123/scripts.pory"
	release
# 45 "data/maps/Route123/scripts.pory"
	end
# 46 "data/maps/Route123/scripts.pory"

# 47 "data/maps/Route123/scripts.pory"
Route123_EventScript_ReceivedGigaDrain::
# 48 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 49 "data/maps/Route123/scripts.pory"
	release
# 50 "data/maps/Route123/scripts.pory"
	end
# 51 "data/maps/Route123/scripts.pory"

# 52 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSign::
# 53 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
# 54 "data/maps/Route123/scripts.pory"
	end
# 55 "data/maps/Route123/scripts.pory"

# 56 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSignMtPyre::
# 57 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
# 58 "data/maps/Route123/scripts.pory"
	end
# 59 "data/maps/Route123/scripts.pory"

# 60 "data/maps/Route123/scripts.pory"
Route123_EventScript_BerryMastersHouseSign::
# 61 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
# 62 "data/maps/Route123/scripts.pory"
	end
# 63 "data/maps/Route123/scripts.pory"

# 64 "data/maps/Route123/scripts.pory"
Route123_EventScript_BraxtonWendy::
# 65 "data/maps/Route123/scripts.pory"
lockall
# 66 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_BRAXTON
# 67 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 68 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 69 "data/maps/Route123/scripts.pory"
waitmovement 0
# 70 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 71 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 72 "data/maps/Route123/scripts.pory"
waitmovement 0
# 73 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_BraxtonIntro MSGBOX_AUTOCLOSE
# 74 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_WENDY
# 75 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 76 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 77 "data/maps/Route123/scripts.pory"
waitmovement 0
# 78 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 79 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 80 "data/maps/Route123/scripts.pory"
waitmovement 0
# 81 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_WendyIntro, MSGBOX_AUTOCLOSE
# 82 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_BraxtonWendyDoMultiBattle
# 83 "data/maps/Route123/scripts.pory"
releaseall
# 84 "data/maps/Route123/scripts.pory"
end
# 85 "data/maps/Route123/scripts.pory"

# 86 "data/maps/Route123/scripts.pory"
Route123_EventScript_BraxtonWendyDoMultiBattle::
# 87 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 88 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_BRAXTON, Route123_Text_BraxtonDefeat, TRAINER_WENDY, Route123_Text_WendyDefeat, PARTNER_EMMIE
# 89 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 90 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_BraxtonWendyVictory
# 91 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 92 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 93 "data/maps/Route123/scripts.pory"
waitstate
# 94 "data/maps/Route123/scripts.pory"

# 95 "data/maps/Route123/scripts.pory"
Route123_EventScript_BraxtonWendyVictory::
# 96 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 97 "data/maps/Route123/scripts.pory"
waitmovement 0
# 98 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 100 "data/maps/Route123/scripts.pory"
waitmovement 0
# 101 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 103 "data/maps/Route123/scripts.pory"
end
# 104 "data/maps/Route123/scripts.pory"

# 105 "data/maps/Route123/scripts.pory"
Route123_EventScript_Wendy::
# 106 "data/maps/Route123/scripts.pory"
	faceplayer
# 107 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route123/scripts.pory"
	end
# 109 "data/maps/Route123/scripts.pory"

# 110 "data/maps/Route123/scripts.pory"
Route123_EventScript_Braxton::
# 111 "data/maps/Route123/scripts.pory"
	faceplayer
# 112 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route123/scripts.pory"
	end
# 114 "data/maps/Route123/scripts.pory"

# 115 "data/maps/Route123/scripts.pory"
Route123_EventScript_Violet::
# 116 "data/maps/Route123/scripts.pory"
	faceplayer
# 117 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route123/scripts.pory"
	end
# 119 "data/maps/Route123/scripts.pory"

# 120 "data/maps/Route123/scripts.pory"
Route123_EventScript_CameronViolet::
# 121 "data/maps/Route123/scripts.pory"
lockall
# 122 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_CAMERON
# 123 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 124 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 125 "data/maps/Route123/scripts.pory"
waitmovement 0
# 126 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 127 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 128 "data/maps/Route123/scripts.pory"
waitmovement 0
# 129 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_CameronIntro MSGBOX_AUTOCLOSE
# 130 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_VIOLET
# 131 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 132 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 133 "data/maps/Route123/scripts.pory"
waitmovement 0
# 134 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 135 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 136 "data/maps/Route123/scripts.pory"
waitmovement 0
# 137 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_VioletIntro, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_CameronVioletDoMultiBattle
# 139 "data/maps/Route123/scripts.pory"
releaseall
# 140 "data/maps/Route123/scripts.pory"
end
# 141 "data/maps/Route123/scripts.pory"

# 142 "data/maps/Route123/scripts.pory"
Route123_EventScript_CameronVioletDoMultiBattle::
# 143 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 144 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_CAMERON_1, Route123_Text_CameronDefeat, TRAINER_VIOLET, Route123_Text_VioletDefeat, PARTNER_EMMIE
# 145 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 146 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_CameronVioletVictory
# 147 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 148 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 149 "data/maps/Route123/scripts.pory"
waitstate
# 150 "data/maps/Route123/scripts.pory"

# 151 "data/maps/Route123/scripts.pory"
Route123_EventScript_CameronVioletVictory::
# 152 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 153 "data/maps/Route123/scripts.pory"
waitmovement 0
# 154 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 156 "data/maps/Route123/scripts.pory"
waitmovement 0
# 157 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 158 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 159 "data/maps/Route123/scripts.pory"
end
# 160 "data/maps/Route123/scripts.pory"

# 161 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron::
# 162 "data/maps/Route123/scripts.pory"
	faceplayer
# 163 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_DEFAULT
# 164 "data/maps/Route123/scripts.pory"
	release
# 165 "data/maps/Route123/scripts.pory"
	end
# 166 "data/maps/Route123/scripts.pory"

# 167 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterCameron::
# 168 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 169 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 171 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_CAMERON_1
# 172 "data/maps/Route123/scripts.pory"
	release
# 173 "data/maps/Route123/scripts.pory"
	end
# 174 "data/maps/Route123/scripts.pory"

# 175 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchCameron::
# 176 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 177 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route123/scripts.pory"
	end
# 179 "data/maps/Route123/scripts.pory"

# 180 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki::
# 181 "data/maps/Route123/scripts.pory"
	faceplayer
# 182 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_DEFAULT
# 183 "data/maps/Route123/scripts.pory"
	release
# 184 "data/maps/Route123/scripts.pory"
	end
# 185 "data/maps/Route123/scripts.pory"

# 186 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterJacki::
# 187 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 188 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 190 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
# 191 "data/maps/Route123/scripts.pory"
	release
# 192 "data/maps/Route123/scripts.pory"
	end
# 193 "data/maps/Route123/scripts.pory"

# 194 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchJacki::
# 195 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 196 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route123/scripts.pory"
	end
# 198 "data/maps/Route123/scripts.pory"

# 199 "data/maps/Route123/scripts.pory"
Route123_EventScript_YukiMiu::
# 200 "data/maps/Route123/scripts.pory"
lockall
# 201 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_YUKI
# 202 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 203 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 204 "data/maps/Route123/scripts.pory"
waitmovement 0
# 205 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 206 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 207 "data/maps/Route123/scripts.pory"
waitmovement 0
# 208 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_YukiIntro, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_YukiMiuDoMultiBattle
# 210 "data/maps/Route123/scripts.pory"
releaseall
# 211 "data/maps/Route123/scripts.pory"
end
# 212 "data/maps/Route123/scripts.pory"

# 213 "data/maps/Route123/scripts.pory"
Route123_EventScript_YukiMiuDoMultiBattle::
# 214 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 215 "data/maps/Route123/scripts.pory"
multi_2p_vs_1 TRAINER_MIU_AND_YUKI, Route123_Text_YukiDefeat, PARTNER_EMMIE
# 216 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 217 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_YukiMiuVictory
# 218 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 219 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 220 "data/maps/Route123/scripts.pory"
waitstate
# 221 "data/maps/Route123/scripts.pory"

# 222 "data/maps/Route123/scripts.pory"
Route123_EventScript_YukiMiuVictory::
# 223 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 224 "data/maps/Route123/scripts.pory"
waitmovement 0
# 225 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 226 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 227 "data/maps/Route123/scripts.pory"
end
# 228 "data/maps/Route123/scripts.pory"

# 229 "data/maps/Route123/scripts.pory"
Route123_EventScript_Miu::
# 230 "data/maps/Route123/scripts.pory"
	faceplayer
# 231 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/Route123/scripts.pory"
	end
# 233 "data/maps/Route123/scripts.pory"

# 234 "data/maps/Route123/scripts.pory"
Route123_EventScript_Yuki::
# 235 "data/maps/Route123/scripts.pory"
	faceplayer
# 236 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/Route123/scripts.pory"
	end
# 238 "data/maps/Route123/scripts.pory"

# 239 "data/maps/Route123/scripts.pory"
Route123_EventScript_KindraEd::
# 240 "data/maps/Route123/scripts.pory"
lockall
# 241 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_KINDRA
# 242 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 243 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 244 "data/maps/Route123/scripts.pory"
waitmovement 0
# 245 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 246 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 247 "data/maps/Route123/scripts.pory"
waitmovement 0
# 248 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_KindraIntro MSGBOX_AUTOCLOSE
# 249 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_ED
# 250 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 251 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 252 "data/maps/Route123/scripts.pory"
waitmovement 0
# 253 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 254 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 255 "data/maps/Route123/scripts.pory"
waitmovement 0
# 256 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_EdIntro, MSGBOX_AUTOCLOSE
# 257 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_KindraEdDoMultiBattle
# 258 "data/maps/Route123/scripts.pory"
releaseall
# 259 "data/maps/Route123/scripts.pory"
end
# 260 "data/maps/Route123/scripts.pory"

# 261 "data/maps/Route123/scripts.pory"
Route123_EventScript_KindraEdDoMultiBattle::
# 262 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 263 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_KINDRA, Route123_Text_KindraDefeat, TRAINER_ED, Route123_Text_EdDefeat, PARTNER_EMMIE
# 264 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 265 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_KindraEdVictory
# 266 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 267 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 268 "data/maps/Route123/scripts.pory"
waitstate
# 269 "data/maps/Route123/scripts.pory"

# 270 "data/maps/Route123/scripts.pory"
Route123_EventScript_KindraEdVictory::
# 271 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 272 "data/maps/Route123/scripts.pory"
waitmovement 0
# 273 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 274 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 275 "data/maps/Route123/scripts.pory"
waitmovement 0
# 276 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 277 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 278 "data/maps/Route123/scripts.pory"
end
# 279 "data/maps/Route123/scripts.pory"

# 280 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kindra::
# 281 "data/maps/Route123/scripts.pory"
	faceplayer
# 282 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 283 "data/maps/Route123/scripts.pory"
	end
# 284 "data/maps/Route123/scripts.pory"

# 285 "data/maps/Route123/scripts.pory"
Route123_EventScript_JackiFrederick::
# 286 "data/maps/Route123/scripts.pory"
lockall
# 287 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_JACKI
# 288 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 289 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 290 "data/maps/Route123/scripts.pory"
waitmovement 0
# 291 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 292 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 293 "data/maps/Route123/scripts.pory"
waitmovement 0
# 294 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JackiIntro MSGBOX_AUTOCLOSE
# 295 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_FREDERICK
# 296 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 297 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 298 "data/maps/Route123/scripts.pory"
waitmovement 0
# 299 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 300 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 301 "data/maps/Route123/scripts.pory"
waitmovement 0
# 302 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_FrederickIntro, MSGBOX_AUTOCLOSE
# 303 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_JackiFrederickDoMultiBattle
# 304 "data/maps/Route123/scripts.pory"
releaseall
# 305 "data/maps/Route123/scripts.pory"
end
# 306 "data/maps/Route123/scripts.pory"

# 307 "data/maps/Route123/scripts.pory"
Route123_EventScript_JackiFrederickDoMultiBattle::
# 308 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 309 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_JACKI_1, Route123_Text_JackiDefeat, TRAINER_FREDRICK, Route123_Text_FrederickDefeat, PARTNER_EMMIE
# 310 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 311 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_JackiFrederickVictory
# 312 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 313 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 314 "data/maps/Route123/scripts.pory"
waitstate
# 315 "data/maps/Route123/scripts.pory"

# 316 "data/maps/Route123/scripts.pory"
Route123_EventScript_JackiFrederickVictory::
# 317 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 318 "data/maps/Route123/scripts.pory"
waitmovement 0
# 319 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JackiPostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 321 "data/maps/Route123/scripts.pory"
waitmovement 0
# 322 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 323 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 324 "data/maps/Route123/scripts.pory"
end
# 325 "data/maps/Route123/scripts.pory"

# 326 "data/maps/Route123/scripts.pory"
Route123_EventScript_Frederick::
# 327 "data/maps/Route123/scripts.pory"
	faceplayer
# 328 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route123/scripts.pory"
	end
# 330 "data/maps/Route123/scripts.pory"

# 331 "data/maps/Route123/scripts.pory"
Route123_EventScript_FernandoAlberto::
# 332 "data/maps/Route123/scripts.pory"
lockall
# 333 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_FERNANDO
# 334 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 335 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 336 "data/maps/Route123/scripts.pory"
waitmovement 0
# 337 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 338 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 339 "data/maps/Route123/scripts.pory"
waitmovement 0
# 340 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_FernandoIntro MSGBOX_AUTOCLOSE
# 341 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_ALBERTO
# 342 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 343 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 344 "data/maps/Route123/scripts.pory"
waitmovement 0
# 345 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 346 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 347 "data/maps/Route123/scripts.pory"
waitmovement 0
# 348 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_AlbertoIntro, MSGBOX_AUTOCLOSE
# 349 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_FernandoAlbertoDoMultiBattle
# 350 "data/maps/Route123/scripts.pory"
releaseall
# 351 "data/maps/Route123/scripts.pory"
end
# 352 "data/maps/Route123/scripts.pory"

# 353 "data/maps/Route123/scripts.pory"
Route123_EventScript_FernandoAlbertoDoMultiBattle::
# 354 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 355 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_FERNANDO_1, Route123_Text_FernandoDefeat, TRAINER_ALBERTO, Route123_Text_AlbertoDefeat, PARTNER_EMMIE
# 356 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 357 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_FernandoAlbertoVictory
# 358 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 359 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 360 "data/maps/Route123/scripts.pory"
waitstate
# 361 "data/maps/Route123/scripts.pory"

# 362 "data/maps/Route123/scripts.pory"
Route123_EventScript_FernandoAlbertoVictory::
# 363 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 364 "data/maps/Route123/scripts.pory"
waitmovement 0
# 365 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_FernandoPostBattle, MSGBOX_AUTOCLOSE
# 366 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 367 "data/maps/Route123/scripts.pory"
waitmovement 0
# 368 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 369 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 370 "data/maps/Route123/scripts.pory"
end
# 371 "data/maps/Route123/scripts.pory"

# 372 "data/maps/Route123/scripts.pory"
Route123_EventScript_Alberto::
# 373 "data/maps/Route123/scripts.pory"
	faceplayer
# 374 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 375 "data/maps/Route123/scripts.pory"
	end
# 376 "data/maps/Route123/scripts.pory"

# 377 "data/maps/Route123/scripts.pory"
Route123_EventScript_Ed::
# 378 "data/maps/Route123/scripts.pory"
	faceplayer
# 379 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 380 "data/maps/Route123/scripts.pory"
	end
# 381 "data/maps/Route123/scripts.pory"

# 382 "data/maps/Route123/scripts.pory"
Route123_EventScript_JonasKayley::
# 383 "data/maps/Route123/scripts.pory"
lockall
# 384 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_JONAS
# 385 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 386 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 387 "data/maps/Route123/scripts.pory"
waitmovement 0
# 388 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 389 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 390 "data/maps/Route123/scripts.pory"
waitmovement 0
# 391 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JonasIntro MSGBOX_AUTOCLOSE
# 392 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_KAYLEY
# 393 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 394 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 395 "data/maps/Route123/scripts.pory"
waitmovement 0
# 396 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 397 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 398 "data/maps/Route123/scripts.pory"
waitmovement 0
# 399 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_KayleyIntro, MSGBOX_AUTOCLOSE
# 400 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_JonasKayleyDoMultiBattle
# 401 "data/maps/Route123/scripts.pory"
releaseall
# 402 "data/maps/Route123/scripts.pory"
end
# 403 "data/maps/Route123/scripts.pory"

# 404 "data/maps/Route123/scripts.pory"
Route123_EventScript_JonasKayleyDoMultiBattle::
# 405 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 406 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_JONAS, Route123_Text_JonasDefeat, TRAINER_KAYLEY, Route123_Text_KayleyDefeat, PARTNER_EMMIE
# 407 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 408 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_JonasKayleyVictory
# 409 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 410 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 411 "data/maps/Route123/scripts.pory"
waitstate
# 412 "data/maps/Route123/scripts.pory"

# 413 "data/maps/Route123/scripts.pory"
Route123_EventScript_JonasKayleyVictory::
# 414 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 415 "data/maps/Route123/scripts.pory"
waitmovement 0
# 416 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 417 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 418 "data/maps/Route123/scripts.pory"
waitmovement 0
# 419 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 420 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 421 "data/maps/Route123/scripts.pory"
end
# 422 "data/maps/Route123/scripts.pory"

# 423 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kayley::
# 424 "data/maps/Route123/scripts.pory"
	faceplayer
# 425 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 426 "data/maps/Route123/scripts.pory"
	end
# 427 "data/maps/Route123/scripts.pory"

# 428 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jonas::
# 429 "data/maps/Route123/scripts.pory"
	faceplayer
# 430 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 431 "data/maps/Route123/scripts.pory"
	end
# 432 "data/maps/Route123/scripts.pory"

# 433 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jazmyn::
# 434 "data/maps/Route123/scripts.pory"
	faceplayer
# 435 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 436 "data/maps/Route123/scripts.pory"
	end
# 437 "data/maps/Route123/scripts.pory"

# 438 "data/maps/Route123/scripts.pory"
Route123_EventScript_DavisJazmyn::
# 439 "data/maps/Route123/scripts.pory"
lockall
# 440 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_DAVIS
# 441 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 442 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 443 "data/maps/Route123/scripts.pory"
waitmovement 0
# 444 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 445 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 446 "data/maps/Route123/scripts.pory"
waitmovement 0
# 447 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_DavisIntro MSGBOX_AUTOCLOSE
# 448 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_JAZMYN
# 449 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 450 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 451 "data/maps/Route123/scripts.pory"
waitmovement 0
# 452 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 453 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 454 "data/maps/Route123/scripts.pory"
waitmovement 0
# 455 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JazmynIntro, MSGBOX_AUTOCLOSE
# 456 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_DavisJazmynDoMultiBattle
# 457 "data/maps/Route123/scripts.pory"
releaseall
# 458 "data/maps/Route123/scripts.pory"
end
# 459 "data/maps/Route123/scripts.pory"

# 460 "data/maps/Route123/scripts.pory"
Route123_EventScript_DavisJazmynDoMultiBattle::
# 461 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 462 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_DAVIS, Route123_Text_DavisDefeat, TRAINER_JAZMYN, Route123_Text_JazmynDefeat, PARTNER_EMMIE
# 463 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 464 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_DavisJazmynVictory
# 465 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 466 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 467 "data/maps/Route123/scripts.pory"
waitstate
# 468 "data/maps/Route123/scripts.pory"

# 469 "data/maps/Route123/scripts.pory"
Route123_EventScript_DavisJazmynVictory::
# 470 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 471 "data/maps/Route123/scripts.pory"
waitmovement 0
# 472 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 473 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 474 "data/maps/Route123/scripts.pory"
waitmovement 0
# 475 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 476 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 477 "data/maps/Route123/scripts.pory"
end
# 478 "data/maps/Route123/scripts.pory"

# 479 "data/maps/Route123/scripts.pory"
Route123_EventScript_Davis::
# 480 "data/maps/Route123/scripts.pory"
	faceplayer
# 481 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 482 "data/maps/Route123/scripts.pory"
	end
# 483 "data/maps/Route123/scripts.pory"

# 484 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando::
# 485 "data/maps/Route123/scripts.pory"
	faceplayer
# 486 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_DEFAULT
# 487 "data/maps/Route123/scripts.pory"
	release
# 488 "data/maps/Route123/scripts.pory"
	end
# 489 "data/maps/Route123/scripts.pory"

# 490 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterFernando::
# 491 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 492 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 493 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 494 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
# 495 "data/maps/Route123/scripts.pory"
	release
# 496 "data/maps/Route123/scripts.pory"
	end
# 497 "data/maps/Route123/scripts.pory"

# 498 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchFernando::
# 499 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 500 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
# 501 "data/maps/Route123/scripts.pory"
	end
# 502 "data/maps/Route123/scripts.pory"

# 503 "data/maps/Route123/scripts.pory"
Route123_Text_LoveGrassMonsHaveAny:
# 504 "data/maps/Route123/scripts.pory"
	.string "I love GRASS-type POKéMON!\p"
# 505 "data/maps/Route123/scripts.pory"
	.string "Do you have any GRASS-type POKéMON?$"
# 506 "data/maps/Route123/scripts.pory"

# 507 "data/maps/Route123/scripts.pory"
Route123_Text_YouLikeGrassMonsTooHaveThis:
# 508 "data/maps/Route123/scripts.pory"
	.string "Oh?\p"
# 509 "data/maps/Route123/scripts.pory"
	.string "You like GRASS-type POKéMON, too,\n"
# 510 "data/maps/Route123/scripts.pory"
	.string "don't you?\p"
# 511 "data/maps/Route123/scripts.pory"
	.string "I'm so happy, you can have this!\n"
# 512 "data/maps/Route123/scripts.pory"
	.string "It's a token of our friendship.$"
# 513 "data/maps/Route123/scripts.pory"

# 514 "data/maps/Route123/scripts.pory"
Route123_Text_CheckTreesWithMyGrassMon:
# 515 "data/maps/Route123/scripts.pory"
	.string "I check trees with my GRASS-type\n"
# 516 "data/maps/Route123/scripts.pory"
	.string "POKéMON. I'm like a tree doctor.$"
# 517 "data/maps/Route123/scripts.pory"

# 518 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSign:
# 519 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 123\n"
# 520 "data/maps/Route123/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 118$"
# 521 "data/maps/Route123/scripts.pory"

# 522 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSignMtPyre:
# 523 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} MT. PYRE\n"
# 524 "data/maps/Route123/scripts.pory"
	.string "“Forbidden to the faint of heart.”$"
# 525 "data/maps/Route123/scripts.pory"

# 526 "data/maps/Route123/scripts.pory"
Route123_Text_BerryMastersHouse:
# 527 "data/maps/Route123/scripts.pory"
	.string "BERRY MASTER'S HOUSE$"
