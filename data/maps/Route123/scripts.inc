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
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 26 "data/maps/Route123/scripts.pory"
	special SetRoute123Weather
# 27 "data/maps/Route123/scripts.pory"
	end
# 28 "data/maps/Route123/scripts.pory"

# 29 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl::
# 30 "data/maps/Route123/scripts.pory"
	lock
# 31 "data/maps/Route123/scripts.pory"
	faceplayer
# 32 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, Route123_EventScript_ReceivedGigaDrain
# 33 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveAny, MSGBOX_DEFAULT
# 34 "data/maps/Route123/scripts.pory"
	special IsGrassTypeInParty
# 35 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route123_EventScript_NoGrassMons
# 36 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YouLikeGrassMonsTooHaveThis, MSGBOX_DEFAULT
# 37 "data/maps/Route123/scripts.pory"
	giveitem ITEM_TM_GIGA_DRAIN
# 38 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 39 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
# 40 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 41 "data/maps/Route123/scripts.pory"
	release
# 42 "data/maps/Route123/scripts.pory"
	end
# 43 "data/maps/Route123/scripts.pory"

# 44 "data/maps/Route123/scripts.pory"
Route123_EventScript_NoGrassMons::
# 45 "data/maps/Route123/scripts.pory"
	release
# 46 "data/maps/Route123/scripts.pory"
	end
# 47 "data/maps/Route123/scripts.pory"

# 48 "data/maps/Route123/scripts.pory"
Route123_EventScript_ReceivedGigaDrain::
# 49 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 50 "data/maps/Route123/scripts.pory"
	release
# 51 "data/maps/Route123/scripts.pory"
	end
# 52 "data/maps/Route123/scripts.pory"

# 53 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSign::
# 54 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
# 55 "data/maps/Route123/scripts.pory"
	end
# 56 "data/maps/Route123/scripts.pory"

# 57 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSignMtPyre::
# 58 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
# 59 "data/maps/Route123/scripts.pory"
	end
# 60 "data/maps/Route123/scripts.pory"

# 61 "data/maps/Route123/scripts.pory"
Route123_EventScript_BerryMastersHouseSign::
# 62 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
# 63 "data/maps/Route123/scripts.pory"
	end
# 64 "data/maps/Route123/scripts.pory"

# 65 "data/maps/Route123/scripts.pory"
Route123_EventScript_BraxtonWendy::
# 66 "data/maps/Route123/scripts.pory"
lockall
# 67 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_BRAXTON
# 68 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 69 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 70 "data/maps/Route123/scripts.pory"
waitmovement 0
# 71 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 72 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 73 "data/maps/Route123/scripts.pory"
waitmovement 0
# 74 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_BraxtonIntro MSGBOX_AUTOCLOSE
# 75 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_WENDY
# 76 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 77 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 78 "data/maps/Route123/scripts.pory"
waitmovement 0
# 79 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 80 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 81 "data/maps/Route123/scripts.pory"
waitmovement 0
# 82 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_WendyIntro, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_BraxtonWendyDoMultiBattle
# 84 "data/maps/Route123/scripts.pory"
releaseall
# 85 "data/maps/Route123/scripts.pory"
end
# 86 "data/maps/Route123/scripts.pory"

# 87 "data/maps/Route123/scripts.pory"
Route123_EventScript_BraxtonWendyDoMultiBattle::
# 88 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 89 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_BRAXTON, Route123_Text_BraxtonDefeat, TRAINER_WENDY, Route123_Text_WendyDefeat, PARTNER_EMMIE
# 90 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 91 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_BraxtonWendyVictory
# 92 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 93 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 94 "data/maps/Route123/scripts.pory"
waitstate
# 95 "data/maps/Route123/scripts.pory"

# 96 "data/maps/Route123/scripts.pory"
Route123_EventScript_BraxtonWendyVictory::
# 97 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 98 "data/maps/Route123/scripts.pory"
waitmovement 0
# 99 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 101 "data/maps/Route123/scripts.pory"
waitmovement 0
# 102 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 104 "data/maps/Route123/scripts.pory"
end
# 105 "data/maps/Route123/scripts.pory"

# 106 "data/maps/Route123/scripts.pory"
Route123_EventScript_Wendy::
# 107 "data/maps/Route123/scripts.pory"
	faceplayer
# 108 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route123/scripts.pory"
	end
# 110 "data/maps/Route123/scripts.pory"

# 111 "data/maps/Route123/scripts.pory"
Route123_EventScript_Braxton::
# 112 "data/maps/Route123/scripts.pory"
	faceplayer
# 113 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route123/scripts.pory"
	end
# 115 "data/maps/Route123/scripts.pory"

# 116 "data/maps/Route123/scripts.pory"
Route123_EventScript_Violet::
# 117 "data/maps/Route123/scripts.pory"
	faceplayer
# 118 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route123/scripts.pory"
	end
# 120 "data/maps/Route123/scripts.pory"

# 121 "data/maps/Route123/scripts.pory"
Route123_EventScript_CameronViolet::
# 122 "data/maps/Route123/scripts.pory"
lockall
# 123 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_CAMERON
# 124 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 125 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 126 "data/maps/Route123/scripts.pory"
waitmovement 0
# 127 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 128 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 129 "data/maps/Route123/scripts.pory"
waitmovement 0
# 130 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_CameronIntro MSGBOX_AUTOCLOSE
# 131 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_VIOLET
# 132 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 133 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 134 "data/maps/Route123/scripts.pory"
waitmovement 0
# 135 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 136 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 137 "data/maps/Route123/scripts.pory"
waitmovement 0
# 138 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_VioletIntro, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_CameronVioletDoMultiBattle
# 140 "data/maps/Route123/scripts.pory"
releaseall
# 141 "data/maps/Route123/scripts.pory"
end
# 142 "data/maps/Route123/scripts.pory"

# 143 "data/maps/Route123/scripts.pory"
Route123_EventScript_CameronVioletDoMultiBattle::
# 144 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 145 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_CAMERON_1, Route123_Text_CameronDefeat, TRAINER_VIOLET, Route123_Text_VioletDefeat, PARTNER_EMMIE
# 146 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 147 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_CameronVioletVictory
# 148 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 149 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 150 "data/maps/Route123/scripts.pory"
waitstate
# 151 "data/maps/Route123/scripts.pory"

# 152 "data/maps/Route123/scripts.pory"
Route123_EventScript_CameronVioletVictory::
# 153 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 154 "data/maps/Route123/scripts.pory"
waitmovement 0
# 155 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
# 156 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 157 "data/maps/Route123/scripts.pory"
waitmovement 0
# 158 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 159 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 160 "data/maps/Route123/scripts.pory"
end
# 161 "data/maps/Route123/scripts.pory"

# 162 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron::
# 163 "data/maps/Route123/scripts.pory"
	faceplayer
# 164 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_DEFAULT
# 165 "data/maps/Route123/scripts.pory"
	release
# 166 "data/maps/Route123/scripts.pory"
	end
# 167 "data/maps/Route123/scripts.pory"

# 168 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterCameron::
# 169 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 170 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 171 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 172 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_CAMERON_1
# 173 "data/maps/Route123/scripts.pory"
	release
# 174 "data/maps/Route123/scripts.pory"
	end
# 175 "data/maps/Route123/scripts.pory"

# 176 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchCameron::
# 177 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 178 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route123/scripts.pory"
	end
# 180 "data/maps/Route123/scripts.pory"

# 181 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki::
# 182 "data/maps/Route123/scripts.pory"
	faceplayer
# 183 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_DEFAULT
# 184 "data/maps/Route123/scripts.pory"
	release
# 185 "data/maps/Route123/scripts.pory"
	end
# 186 "data/maps/Route123/scripts.pory"

# 187 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterJacki::
# 188 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 189 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 191 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
# 192 "data/maps/Route123/scripts.pory"
	release
# 193 "data/maps/Route123/scripts.pory"
	end
# 194 "data/maps/Route123/scripts.pory"

# 195 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchJacki::
# 196 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 197 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route123/scripts.pory"
	end
# 199 "data/maps/Route123/scripts.pory"

# 200 "data/maps/Route123/scripts.pory"
Route123_EventScript_YukiMiu::
# 201 "data/maps/Route123/scripts.pory"
lockall
# 202 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_YUKI
# 203 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 204 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 205 "data/maps/Route123/scripts.pory"
waitmovement 0
# 206 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 207 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 208 "data/maps/Route123/scripts.pory"
waitmovement 0
# 209 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_YukiIntro, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_YukiMiuDoMultiBattle
# 211 "data/maps/Route123/scripts.pory"
releaseall
# 212 "data/maps/Route123/scripts.pory"
end
# 213 "data/maps/Route123/scripts.pory"

# 214 "data/maps/Route123/scripts.pory"
Route123_EventScript_YukiMiuDoMultiBattle::
# 215 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 216 "data/maps/Route123/scripts.pory"
multi_2p_vs_1 TRAINER_MIU_AND_YUKI, Route123_Text_YukiDefeat, PARTNER_EMMIE
# 217 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 218 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_YukiMiuVictory
# 219 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 220 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 221 "data/maps/Route123/scripts.pory"
waitstate
# 222 "data/maps/Route123/scripts.pory"

# 223 "data/maps/Route123/scripts.pory"
Route123_EventScript_YukiMiuVictory::
# 224 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 225 "data/maps/Route123/scripts.pory"
waitmovement 0
# 226 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 228 "data/maps/Route123/scripts.pory"
end
# 229 "data/maps/Route123/scripts.pory"

# 230 "data/maps/Route123/scripts.pory"
Route123_EventScript_Miu::
# 231 "data/maps/Route123/scripts.pory"
	faceplayer
# 232 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route123/scripts.pory"
	end
# 234 "data/maps/Route123/scripts.pory"

# 235 "data/maps/Route123/scripts.pory"
Route123_EventScript_Yuki::
# 236 "data/maps/Route123/scripts.pory"
	faceplayer
# 237 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route123/scripts.pory"
	end
# 239 "data/maps/Route123/scripts.pory"

# 240 "data/maps/Route123/scripts.pory"
Route123_EventScript_KindraEd::
# 241 "data/maps/Route123/scripts.pory"
lockall
# 242 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_KINDRA
# 243 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 244 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 245 "data/maps/Route123/scripts.pory"
waitmovement 0
# 246 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 247 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 248 "data/maps/Route123/scripts.pory"
waitmovement 0
# 249 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_KindraIntro MSGBOX_AUTOCLOSE
# 250 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_ED
# 251 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 252 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 253 "data/maps/Route123/scripts.pory"
waitmovement 0
# 254 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 255 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 256 "data/maps/Route123/scripts.pory"
waitmovement 0
# 257 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_EdIntro, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_KindraEdDoMultiBattle
# 259 "data/maps/Route123/scripts.pory"
releaseall
# 260 "data/maps/Route123/scripts.pory"
end
# 261 "data/maps/Route123/scripts.pory"

# 262 "data/maps/Route123/scripts.pory"
Route123_EventScript_KindraEdDoMultiBattle::
# 263 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 264 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_KINDRA, Route123_Text_KindraDefeat, TRAINER_ED, Route123_Text_EdDefeat, PARTNER_EMMIE
# 265 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 266 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_KindraEdVictory
# 267 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 268 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 269 "data/maps/Route123/scripts.pory"
waitstate
# 270 "data/maps/Route123/scripts.pory"

# 271 "data/maps/Route123/scripts.pory"
Route123_EventScript_KindraEdVictory::
# 272 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 273 "data/maps/Route123/scripts.pory"
waitmovement 0
# 274 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 275 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 276 "data/maps/Route123/scripts.pory"
waitmovement 0
# 277 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 279 "data/maps/Route123/scripts.pory"
end
# 280 "data/maps/Route123/scripts.pory"

# 281 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kindra::
# 282 "data/maps/Route123/scripts.pory"
	faceplayer
# 283 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 284 "data/maps/Route123/scripts.pory"
	end
# 285 "data/maps/Route123/scripts.pory"

# 286 "data/maps/Route123/scripts.pory"
Route123_EventScript_JackiFrederick::
# 287 "data/maps/Route123/scripts.pory"
lockall
# 288 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_JACKI
# 289 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 290 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 291 "data/maps/Route123/scripts.pory"
waitmovement 0
# 292 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 293 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 294 "data/maps/Route123/scripts.pory"
waitmovement 0
# 295 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JackiIntro MSGBOX_AUTOCLOSE
# 296 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_FREDERICK
# 297 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 298 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 299 "data/maps/Route123/scripts.pory"
waitmovement 0
# 300 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 301 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 302 "data/maps/Route123/scripts.pory"
waitmovement 0
# 303 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_FrederickIntro, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_JackiFrederickDoMultiBattle
# 305 "data/maps/Route123/scripts.pory"
releaseall
# 306 "data/maps/Route123/scripts.pory"
end
# 307 "data/maps/Route123/scripts.pory"

# 308 "data/maps/Route123/scripts.pory"
Route123_EventScript_JackiFrederickDoMultiBattle::
# 309 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 310 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_JACKI_1, Route123_Text_JackiDefeat, TRAINER_FREDRICK, Route123_Text_FrederickDefeat, PARTNER_EMMIE
# 311 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 312 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_JackiFrederickVictory
# 313 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 314 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 315 "data/maps/Route123/scripts.pory"
waitstate
# 316 "data/maps/Route123/scripts.pory"

# 317 "data/maps/Route123/scripts.pory"
Route123_EventScript_JackiFrederickVictory::
# 318 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 319 "data/maps/Route123/scripts.pory"
waitmovement 0
# 320 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JackiPostBattle, MSGBOX_AUTOCLOSE
# 321 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 322 "data/maps/Route123/scripts.pory"
waitmovement 0
# 323 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 324 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 325 "data/maps/Route123/scripts.pory"
end
# 326 "data/maps/Route123/scripts.pory"

# 327 "data/maps/Route123/scripts.pory"
Route123_EventScript_Frederick::
# 328 "data/maps/Route123/scripts.pory"
	faceplayer
# 329 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 330 "data/maps/Route123/scripts.pory"
	end
# 331 "data/maps/Route123/scripts.pory"

# 332 "data/maps/Route123/scripts.pory"
Route123_EventScript_FernandoAlberto::
# 333 "data/maps/Route123/scripts.pory"
lockall
# 334 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_FERNANDO
# 335 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 336 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 337 "data/maps/Route123/scripts.pory"
waitmovement 0
# 338 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 339 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 340 "data/maps/Route123/scripts.pory"
waitmovement 0
# 341 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_FernandoIntro MSGBOX_AUTOCLOSE
# 342 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_ALBERTO
# 343 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 344 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 345 "data/maps/Route123/scripts.pory"
waitmovement 0
# 346 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 347 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 348 "data/maps/Route123/scripts.pory"
waitmovement 0
# 349 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_AlbertoIntro, MSGBOX_AUTOCLOSE
# 350 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_FernandoAlbertoDoMultiBattle
# 351 "data/maps/Route123/scripts.pory"
releaseall
# 352 "data/maps/Route123/scripts.pory"
end
# 353 "data/maps/Route123/scripts.pory"

# 354 "data/maps/Route123/scripts.pory"
Route123_EventScript_FernandoAlbertoDoMultiBattle::
# 355 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 356 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_FERNANDO_1, Route123_Text_FernandoDefeat, TRAINER_ALBERTO, Route123_Text_AlbertoDefeat, PARTNER_EMMIE
# 357 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 358 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_FernandoAlbertoVictory
# 359 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 360 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 361 "data/maps/Route123/scripts.pory"
waitstate
# 362 "data/maps/Route123/scripts.pory"

# 363 "data/maps/Route123/scripts.pory"
Route123_EventScript_FernandoAlbertoVictory::
# 364 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 365 "data/maps/Route123/scripts.pory"
waitmovement 0
# 366 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_FernandoPostBattle, MSGBOX_AUTOCLOSE
# 367 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 368 "data/maps/Route123/scripts.pory"
waitmovement 0
# 369 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 370 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 371 "data/maps/Route123/scripts.pory"
end
# 372 "data/maps/Route123/scripts.pory"

# 373 "data/maps/Route123/scripts.pory"
Route123_EventScript_Alberto::
# 374 "data/maps/Route123/scripts.pory"
	faceplayer
# 375 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 376 "data/maps/Route123/scripts.pory"
	end
# 377 "data/maps/Route123/scripts.pory"

# 378 "data/maps/Route123/scripts.pory"
Route123_EventScript_Ed::
# 379 "data/maps/Route123/scripts.pory"
	faceplayer
# 380 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 381 "data/maps/Route123/scripts.pory"
	end
# 382 "data/maps/Route123/scripts.pory"

# 383 "data/maps/Route123/scripts.pory"
Route123_EventScript_JonasKayley::
# 384 "data/maps/Route123/scripts.pory"
lockall
# 385 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_JONAS
# 386 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 387 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 388 "data/maps/Route123/scripts.pory"
waitmovement 0
# 389 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 390 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 391 "data/maps/Route123/scripts.pory"
waitmovement 0
# 392 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JonasIntro MSGBOX_AUTOCLOSE
# 393 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_KAYLEY
# 394 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 395 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 396 "data/maps/Route123/scripts.pory"
waitmovement 0
# 397 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 398 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 399 "data/maps/Route123/scripts.pory"
waitmovement 0
# 400 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_KayleyIntro, MSGBOX_AUTOCLOSE
# 401 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_JonasKayleyDoMultiBattle
# 402 "data/maps/Route123/scripts.pory"
releaseall
# 403 "data/maps/Route123/scripts.pory"
end
# 404 "data/maps/Route123/scripts.pory"

# 405 "data/maps/Route123/scripts.pory"
Route123_EventScript_JonasKayleyDoMultiBattle::
# 406 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 407 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_JONAS, Route123_Text_JonasDefeat, TRAINER_KAYLEY, Route123_Text_KayleyDefeat, PARTNER_EMMIE
# 408 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 409 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_JonasKayleyVictory
# 410 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 411 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 412 "data/maps/Route123/scripts.pory"
waitstate
# 413 "data/maps/Route123/scripts.pory"

# 414 "data/maps/Route123/scripts.pory"
Route123_EventScript_JonasKayleyVictory::
# 415 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 416 "data/maps/Route123/scripts.pory"
waitmovement 0
# 417 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 418 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 419 "data/maps/Route123/scripts.pory"
waitmovement 0
# 420 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 421 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 422 "data/maps/Route123/scripts.pory"
end
# 423 "data/maps/Route123/scripts.pory"

# 424 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kayley::
# 425 "data/maps/Route123/scripts.pory"
	faceplayer
# 426 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 427 "data/maps/Route123/scripts.pory"
	end
# 428 "data/maps/Route123/scripts.pory"

# 429 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jonas::
# 430 "data/maps/Route123/scripts.pory"
	faceplayer
# 431 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 432 "data/maps/Route123/scripts.pory"
	end
# 433 "data/maps/Route123/scripts.pory"

# 434 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jazmyn::
# 435 "data/maps/Route123/scripts.pory"
	faceplayer
# 436 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 437 "data/maps/Route123/scripts.pory"
	end
# 438 "data/maps/Route123/scripts.pory"

# 439 "data/maps/Route123/scripts.pory"
Route123_EventScript_DavisJazmyn::
# 440 "data/maps/Route123/scripts.pory"
lockall
# 441 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_DAVIS
# 442 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 443 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 444 "data/maps/Route123/scripts.pory"
waitmovement 0
# 445 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 446 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 447 "data/maps/Route123/scripts.pory"
waitmovement 0
# 448 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_DavisIntro MSGBOX_AUTOCLOSE
# 449 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_JAZMYN
# 450 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 451 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 452 "data/maps/Route123/scripts.pory"
waitmovement 0
# 453 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 454 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 455 "data/maps/Route123/scripts.pory"
waitmovement 0
# 456 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JazmynIntro, MSGBOX_AUTOCLOSE
# 457 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_DavisJazmynDoMultiBattle
# 458 "data/maps/Route123/scripts.pory"
releaseall
# 459 "data/maps/Route123/scripts.pory"
end
# 460 "data/maps/Route123/scripts.pory"

# 461 "data/maps/Route123/scripts.pory"
Route123_EventScript_DavisJazmynDoMultiBattle::
# 462 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 463 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_DAVIS, Route123_Text_DavisDefeat, TRAINER_JAZMYN, Route123_Text_JazmynDefeat, PARTNER_EMMIE
# 464 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 465 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_DavisJazmynVictory
# 466 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 467 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 468 "data/maps/Route123/scripts.pory"
waitstate
# 469 "data/maps/Route123/scripts.pory"

# 470 "data/maps/Route123/scripts.pory"
Route123_EventScript_DavisJazmynVictory::
# 471 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 472 "data/maps/Route123/scripts.pory"
waitmovement 0
# 473 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 474 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 475 "data/maps/Route123/scripts.pory"
waitmovement 0
# 476 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 477 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 478 "data/maps/Route123/scripts.pory"
end
# 479 "data/maps/Route123/scripts.pory"

# 480 "data/maps/Route123/scripts.pory"
Route123_EventScript_Davis::
# 481 "data/maps/Route123/scripts.pory"
	faceplayer
# 482 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 483 "data/maps/Route123/scripts.pory"
	end
# 484 "data/maps/Route123/scripts.pory"

# 485 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando::
# 486 "data/maps/Route123/scripts.pory"
	faceplayer
# 487 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_DEFAULT
# 488 "data/maps/Route123/scripts.pory"
	release
# 489 "data/maps/Route123/scripts.pory"
	end
# 490 "data/maps/Route123/scripts.pory"

# 491 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterFernando::
# 492 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 493 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 494 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 495 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
# 496 "data/maps/Route123/scripts.pory"
	release
# 497 "data/maps/Route123/scripts.pory"
	end
# 498 "data/maps/Route123/scripts.pory"

# 499 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchFernando::
# 500 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 501 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
# 502 "data/maps/Route123/scripts.pory"
	end
# 503 "data/maps/Route123/scripts.pory"

# 504 "data/maps/Route123/scripts.pory"
Route123_Text_LoveGrassMonsHaveAny:
# 505 "data/maps/Route123/scripts.pory"
	.string "I love GRASS-type POKéMON!\p"
# 506 "data/maps/Route123/scripts.pory"
	.string "Do you have any GRASS-type POKéMON?$"
# 507 "data/maps/Route123/scripts.pory"

# 508 "data/maps/Route123/scripts.pory"
Route123_Text_YouLikeGrassMonsTooHaveThis:
# 509 "data/maps/Route123/scripts.pory"
	.string "Oh?\p"
# 510 "data/maps/Route123/scripts.pory"
	.string "You like GRASS-type POKéMON, too,\n"
# 511 "data/maps/Route123/scripts.pory"
	.string "don't you?\p"
# 512 "data/maps/Route123/scripts.pory"
	.string "I'm so happy, you can have this!\n"
# 513 "data/maps/Route123/scripts.pory"
	.string "It's a token of our friendship.$"
# 514 "data/maps/Route123/scripts.pory"

# 515 "data/maps/Route123/scripts.pory"
Route123_Text_CheckTreesWithMyGrassMon:
# 516 "data/maps/Route123/scripts.pory"
	.string "I check trees with my GRASS-type\n"
# 517 "data/maps/Route123/scripts.pory"
	.string "POKéMON. I'm like a tree doctor.$"
# 518 "data/maps/Route123/scripts.pory"

# 519 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSign:
# 520 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 123\n"
# 521 "data/maps/Route123/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 118$"
# 522 "data/maps/Route123/scripts.pory"

# 523 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSignMtPyre:
# 524 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} MT. PYRE\n"
# 525 "data/maps/Route123/scripts.pory"
	.string "“Forbidden to the faint of heart.”$"
# 526 "data/maps/Route123/scripts.pory"

# 527 "data/maps/Route123/scripts.pory"
Route123_Text_BerryMastersHouse:
# 528 "data/maps/Route123/scripts.pory"
	.string "BERRY MASTER'S HOUSE$"
