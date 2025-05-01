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
msgbox Route123_Text_WendyIntro MSGBOX_AUTOCLOSE
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
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route123/scripts.pory"
	end
# 108 "data/maps/Route123/scripts.pory"

# 109 "data/maps/Route123/scripts.pory"
Route123_EventScript_Braxton::
# 110 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/Route123/scripts.pory"
	end
# 112 "data/maps/Route123/scripts.pory"

# 113 "data/maps/Route123/scripts.pory"
Route123_EventScript_Violet::
# 114 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route123/scripts.pory"
	end
# 116 "data/maps/Route123/scripts.pory"

# 117 "data/maps/Route123/scripts.pory"
Route123_EventScript_CameronViolet::
# 118 "data/maps/Route123/scripts.pory"
lockall
# 119 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_CAMERON
# 120 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 121 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 122 "data/maps/Route123/scripts.pory"
waitmovement 0
# 123 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 124 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 125 "data/maps/Route123/scripts.pory"
waitmovement 0
# 126 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_CameronIntro MSGBOX_AUTOCLOSE
# 127 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_VIOLET
# 128 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 129 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 130 "data/maps/Route123/scripts.pory"
waitmovement 0
# 131 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 132 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 133 "data/maps/Route123/scripts.pory"
waitmovement 0
# 134 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_VioletIntro MSGBOX_AUTOCLOSE
# 135 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_CameronVioletDoMultiBattle
# 136 "data/maps/Route123/scripts.pory"
releaseall
# 137 "data/maps/Route123/scripts.pory"
end
# 138 "data/maps/Route123/scripts.pory"

# 139 "data/maps/Route123/scripts.pory"
Route123_EventScript_CameronVioletDoMultiBattle::
# 140 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 141 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_CAMERON_1, Route123_Text_CameronDefeat, TRAINER_VIOLET, Route123_Text_VioletDefeat, PARTNER_EMMIE
# 142 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 143 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_CameronVioletVictory
# 144 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 145 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 146 "data/maps/Route123/scripts.pory"
waitstate
# 147 "data/maps/Route123/scripts.pory"

# 148 "data/maps/Route123/scripts.pory"
Route123_EventScript_CameronVioletVictory::
# 149 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 150 "data/maps/Route123/scripts.pory"
waitmovement 0
# 151 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
# 152 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 153 "data/maps/Route123/scripts.pory"
waitmovement 0
# 154 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 156 "data/maps/Route123/scripts.pory"
end
# 157 "data/maps/Route123/scripts.pory"

# 158 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron::
# 159 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_DEFAULT
# 160 "data/maps/Route123/scripts.pory"
	release
# 161 "data/maps/Route123/scripts.pory"
	end
# 162 "data/maps/Route123/scripts.pory"

# 163 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterCameron::
# 164 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 165 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 167 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_CAMERON_1
# 168 "data/maps/Route123/scripts.pory"
	release
# 169 "data/maps/Route123/scripts.pory"
	end
# 170 "data/maps/Route123/scripts.pory"

# 171 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchCameron::
# 172 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 173 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route123/scripts.pory"
	end
# 175 "data/maps/Route123/scripts.pory"

# 176 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki::
# 177 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_DEFAULT
# 178 "data/maps/Route123/scripts.pory"
	release
# 179 "data/maps/Route123/scripts.pory"
	end
# 180 "data/maps/Route123/scripts.pory"

# 181 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterJacki::
# 182 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 183 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 185 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
# 186 "data/maps/Route123/scripts.pory"
	release
# 187 "data/maps/Route123/scripts.pory"
	end
# 188 "data/maps/Route123/scripts.pory"

# 189 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchJacki::
# 190 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 191 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route123/scripts.pory"
	end
# 193 "data/maps/Route123/scripts.pory"

# 194 "data/maps/Route123/scripts.pory"
Route123_EventScript_YukiMiu::
# 195 "data/maps/Route123/scripts.pory"
lockall
# 196 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_YUKI
# 197 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 198 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 199 "data/maps/Route123/scripts.pory"
waitmovement 0
# 200 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 201 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 202 "data/maps/Route123/scripts.pory"
waitmovement 0
# 203 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_YukiIntro MSGBOX_AUTOCLOSE
# 204 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_YukiMiuDoMultiBattle
# 205 "data/maps/Route123/scripts.pory"
releaseall
# 206 "data/maps/Route123/scripts.pory"
end
# 207 "data/maps/Route123/scripts.pory"

# 208 "data/maps/Route123/scripts.pory"
Route123_EventScript_YukiMiuDoMultiBattle::
# 209 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 210 "data/maps/Route123/scripts.pory"
multi_2p_vs_1 TRAINER_MIU_AND_YUKI, Route123_Text_YukiDefeat, PARTNER_EMMIE
# 211 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 212 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_YukiMiuVictory
# 213 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 214 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 215 "data/maps/Route123/scripts.pory"
waitstate
# 216 "data/maps/Route123/scripts.pory"

# 217 "data/maps/Route123/scripts.pory"
Route123_EventScript_YukiMiuVictory::
# 218 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 219 "data/maps/Route123/scripts.pory"
waitmovement 0
# 220 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 222 "data/maps/Route123/scripts.pory"
end
# 223 "data/maps/Route123/scripts.pory"

# 224 "data/maps/Route123/scripts.pory"
Route123_EventScript_Miu::
# 225 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
# 226 "data/maps/Route123/scripts.pory"
	end
# 227 "data/maps/Route123/scripts.pory"

# 228 "data/maps/Route123/scripts.pory"
Route123_EventScript_Yuki::
# 229 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route123/scripts.pory"
	end
# 231 "data/maps/Route123/scripts.pory"

# 232 "data/maps/Route123/scripts.pory"
Route123_EventScript_KindraEd::
# 233 "data/maps/Route123/scripts.pory"
lockall
# 234 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_KINDRA
# 235 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 236 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 237 "data/maps/Route123/scripts.pory"
waitmovement 0
# 238 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 239 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 240 "data/maps/Route123/scripts.pory"
waitmovement 0
# 241 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_KindraIntro MSGBOX_AUTOCLOSE
# 242 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_ED
# 243 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 244 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 245 "data/maps/Route123/scripts.pory"
waitmovement 0
# 246 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 247 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 248 "data/maps/Route123/scripts.pory"
waitmovement 0
# 249 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_EdIntro MSGBOX_AUTOCLOSE
# 250 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_KindraEdDoMultiBattle
# 251 "data/maps/Route123/scripts.pory"
releaseall
# 252 "data/maps/Route123/scripts.pory"
end
# 253 "data/maps/Route123/scripts.pory"

# 254 "data/maps/Route123/scripts.pory"
Route123_EventScript_KindraEdDoMultiBattle::
# 255 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 256 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_KINDRA, Route123_Text_KindraDefeat, TRAINER_ED, Route123_Text_EdDefeat, PARTNER_EMMIE
# 257 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 258 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_KindraEdVictory
# 259 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 260 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 261 "data/maps/Route123/scripts.pory"
waitstate
# 262 "data/maps/Route123/scripts.pory"

# 263 "data/maps/Route123/scripts.pory"
Route123_EventScript_KindraEdVictory::
# 264 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 265 "data/maps/Route123/scripts.pory"
waitmovement 0
# 266 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 267 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 268 "data/maps/Route123/scripts.pory"
waitmovement 0
# 269 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 270 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 271 "data/maps/Route123/scripts.pory"
end
# 272 "data/maps/Route123/scripts.pory"

# 273 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kindra::
# 274 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 275 "data/maps/Route123/scripts.pory"
	end
# 276 "data/maps/Route123/scripts.pory"

# 277 "data/maps/Route123/scripts.pory"
Route123_EventScript_JackiFrederick::
# 278 "data/maps/Route123/scripts.pory"
lockall
# 279 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_JACKI
# 280 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 281 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 282 "data/maps/Route123/scripts.pory"
waitmovement 0
# 283 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 284 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 285 "data/maps/Route123/scripts.pory"
waitmovement 0
# 286 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JackiIntro MSGBOX_AUTOCLOSE
# 287 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_FREDERICK
# 288 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 289 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 290 "data/maps/Route123/scripts.pory"
waitmovement 0
# 291 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 292 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 293 "data/maps/Route123/scripts.pory"
waitmovement 0
# 294 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_FrederickIntro MSGBOX_AUTOCLOSE
# 295 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_JackiFrederickDoMultiBattle
# 296 "data/maps/Route123/scripts.pory"
releaseall
# 297 "data/maps/Route123/scripts.pory"
end
# 298 "data/maps/Route123/scripts.pory"

# 299 "data/maps/Route123/scripts.pory"
Route123_EventScript_JackiFrederickDoMultiBattle::
# 300 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 301 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_JACKI_1, Route123_Text_JackiDefeat, TRAINER_FREDRICK, Route123_Text_FrederickDefeat, PARTNER_EMMIE
# 302 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 303 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_JackiFrederickVictory
# 304 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 305 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 306 "data/maps/Route123/scripts.pory"
waitstate
# 307 "data/maps/Route123/scripts.pory"

# 308 "data/maps/Route123/scripts.pory"
Route123_EventScript_JackiFrederickVictory::
# 309 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 310 "data/maps/Route123/scripts.pory"
waitmovement 0
# 311 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JackiPostBattle, MSGBOX_AUTOCLOSE
# 312 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 313 "data/maps/Route123/scripts.pory"
waitmovement 0
# 314 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 315 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 316 "data/maps/Route123/scripts.pory"
end
# 317 "data/maps/Route123/scripts.pory"

# 318 "data/maps/Route123/scripts.pory"
Route123_EventScript_Frederick::
# 319 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/Route123/scripts.pory"
	end
# 321 "data/maps/Route123/scripts.pory"

# 322 "data/maps/Route123/scripts.pory"
Route123_EventScript_FernandoAlberto::
# 323 "data/maps/Route123/scripts.pory"
lockall
# 324 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_FERNANDO
# 325 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 326 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 327 "data/maps/Route123/scripts.pory"
waitmovement 0
# 328 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 329 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 330 "data/maps/Route123/scripts.pory"
waitmovement 0
# 331 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_FernandoIntro MSGBOX_AUTOCLOSE
# 332 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_ALBERTO
# 333 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 334 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 335 "data/maps/Route123/scripts.pory"
waitmovement 0
# 336 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 337 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 338 "data/maps/Route123/scripts.pory"
waitmovement 0
# 339 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_AlbertoIntro MSGBOX_AUTOCLOSE
# 340 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_FernandoAlbertoDoMultiBattle
# 341 "data/maps/Route123/scripts.pory"
releaseall
# 342 "data/maps/Route123/scripts.pory"
end
# 343 "data/maps/Route123/scripts.pory"

# 344 "data/maps/Route123/scripts.pory"
Route123_EventScript_FernandoAlbertoDoMultiBattle::
# 345 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 346 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_FERNANDO_1, Route123_Text_FernandoDefeat, TRAINER_ALBERTO, Route123_Text_AlbertoDefeat, PARTNER_EMMIE
# 347 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 348 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_FernandoAlbertoVictory
# 349 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 350 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 351 "data/maps/Route123/scripts.pory"
waitstate
# 352 "data/maps/Route123/scripts.pory"

# 353 "data/maps/Route123/scripts.pory"
Route123_EventScript_FernandoAlbertoVictory::
# 354 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 355 "data/maps/Route123/scripts.pory"
waitmovement 0
# 356 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_FernandoPostBattle, MSGBOX_AUTOCLOSE
# 357 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 358 "data/maps/Route123/scripts.pory"
waitmovement 0
# 359 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 360 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 361 "data/maps/Route123/scripts.pory"
end
# 362 "data/maps/Route123/scripts.pory"

# 363 "data/maps/Route123/scripts.pory"
Route123_EventScript_Alberto::
# 364 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 365 "data/maps/Route123/scripts.pory"
	end
# 366 "data/maps/Route123/scripts.pory"

# 367 "data/maps/Route123/scripts.pory"
Route123_EventScript_Ed::
# 368 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 369 "data/maps/Route123/scripts.pory"
	end
# 370 "data/maps/Route123/scripts.pory"

# 371 "data/maps/Route123/scripts.pory"
Route123_EventScript_JonasKayley::
# 372 "data/maps/Route123/scripts.pory"
lockall
# 373 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_JONAS
# 374 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 375 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 376 "data/maps/Route123/scripts.pory"
waitmovement 0
# 377 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 378 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 379 "data/maps/Route123/scripts.pory"
waitmovement 0
# 380 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JonasIntro MSGBOX_AUTOCLOSE
# 381 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_KAYLEY
# 382 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 383 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 384 "data/maps/Route123/scripts.pory"
waitmovement 0
# 385 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 386 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 387 "data/maps/Route123/scripts.pory"
waitmovement 0
# 388 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_KayleyIntro MSGBOX_AUTOCLOSE
# 389 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_JonasKayleyDoMultiBattle
# 390 "data/maps/Route123/scripts.pory"
releaseall
# 391 "data/maps/Route123/scripts.pory"
end
# 392 "data/maps/Route123/scripts.pory"

# 393 "data/maps/Route123/scripts.pory"
Route123_EventScript_JonasKayleyDoMultiBattle::
# 394 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 395 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_JONAS, Route123_Text_JonasDefeat, TRAINER_KAYLEY, Route123_Text_KayleyDefeat, PARTNER_EMMIE
# 396 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 397 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_JonasKayleyVictory
# 398 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 399 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 400 "data/maps/Route123/scripts.pory"
waitstate
# 401 "data/maps/Route123/scripts.pory"

# 402 "data/maps/Route123/scripts.pory"
Route123_EventScript_JonasKayleyVictory::
# 403 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 404 "data/maps/Route123/scripts.pory"
waitmovement 0
# 405 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 406 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 407 "data/maps/Route123/scripts.pory"
waitmovement 0
# 408 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 409 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 410 "data/maps/Route123/scripts.pory"
end
# 411 "data/maps/Route123/scripts.pory"

# 412 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kayley::
# 413 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 414 "data/maps/Route123/scripts.pory"
	end
# 415 "data/maps/Route123/scripts.pory"

# 416 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jonas::
# 417 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 418 "data/maps/Route123/scripts.pory"
	end
# 419 "data/maps/Route123/scripts.pory"

# 420 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jazmyn::
# 421 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 422 "data/maps/Route123/scripts.pory"
	end
# 423 "data/maps/Route123/scripts.pory"

# 424 "data/maps/Route123/scripts.pory"
Route123_EventScript_DavisJazmyn::
# 425 "data/maps/Route123/scripts.pory"
lockall
# 426 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_DAVIS
# 427 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 428 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 429 "data/maps/Route123/scripts.pory"
waitmovement 0
# 430 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 431 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 432 "data/maps/Route123/scripts.pory"
waitmovement 0
# 433 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_DavisIntro MSGBOX_AUTOCLOSE
# 434 "data/maps/Route123/scripts.pory"
setvar VAR_0x8008, LOCALID_JAZMYN
# 435 "data/maps/Route123/scripts.pory"
playse SE_PIN
# 436 "data/maps/Route123/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 437 "data/maps/Route123/scripts.pory"
waitmovement 0
# 438 "data/maps/Route123/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 439 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 440 "data/maps/Route123/scripts.pory"
waitmovement 0
# 441 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JazmynIntro MSGBOX_AUTOCLOSE
# 442 "data/maps/Route123/scripts.pory"
goto Route123_EventScript_DavisJazmynDoMultiBattle
# 443 "data/maps/Route123/scripts.pory"
releaseall
# 444 "data/maps/Route123/scripts.pory"
end
# 445 "data/maps/Route123/scripts.pory"

# 446 "data/maps/Route123/scripts.pory"
Route123_EventScript_DavisJazmynDoMultiBattle::
# 447 "data/maps/Route123/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 448 "data/maps/Route123/scripts.pory"
multi_2p_vs_2 TRAINER_DAVIS, Route123_Text_DavisDefeat, TRAINER_JAZMYN, Route123_Text_JazmynDefeat, PARTNER_EMMIE
# 449 "data/maps/Route123/scripts.pory"
switch VAR_RESULT
# 450 "data/maps/Route123/scripts.pory"
case 1, Route123_EventScript_DavisJazmynVictory
# 451 "data/maps/Route123/scripts.pory"
fadescreen FADE_TO_BLACK
# 452 "data/maps/Route123/scripts.pory"
special SetCB2WhiteOut
# 453 "data/maps/Route123/scripts.pory"
waitstate
# 454 "data/maps/Route123/scripts.pory"

# 455 "data/maps/Route123/scripts.pory"
Route123_EventScript_DavisJazmynVictory::
# 456 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 457 "data/maps/Route123/scripts.pory"
waitmovement 0
# 458 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 459 "data/maps/Route123/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 460 "data/maps/Route123/scripts.pory"
waitmovement 0
# 461 "data/maps/Route123/scripts.pory"
msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 462 "data/maps/Route123/scripts.pory"
addvar VAR_ROUTE123_STATE, 1
# 463 "data/maps/Route123/scripts.pory"
end
# 464 "data/maps/Route123/scripts.pory"

# 465 "data/maps/Route123/scripts.pory"
Route123_EventScript_Davis::
# 466 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 467 "data/maps/Route123/scripts.pory"
	end
# 468 "data/maps/Route123/scripts.pory"

# 469 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando::
# 470 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_DEFAULT
# 471 "data/maps/Route123/scripts.pory"
	release
# 472 "data/maps/Route123/scripts.pory"
	end
# 473 "data/maps/Route123/scripts.pory"

# 474 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterFernando::
# 475 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 476 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 478 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
# 479 "data/maps/Route123/scripts.pory"
	release
# 480 "data/maps/Route123/scripts.pory"
	end
# 481 "data/maps/Route123/scripts.pory"

# 482 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchFernando::
# 483 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 484 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
# 485 "data/maps/Route123/scripts.pory"
	end
# 486 "data/maps/Route123/scripts.pory"

# 487 "data/maps/Route123/scripts.pory"
Route123_Text_LoveGrassMonsHaveAny:
# 488 "data/maps/Route123/scripts.pory"
	.string "I love GRASS-type POKéMON!\p"
# 489 "data/maps/Route123/scripts.pory"
	.string "Do you have any GRASS-type POKéMON?$"
# 490 "data/maps/Route123/scripts.pory"

# 491 "data/maps/Route123/scripts.pory"
Route123_Text_YouLikeGrassMonsTooHaveThis:
# 492 "data/maps/Route123/scripts.pory"
	.string "Oh?\p"
# 493 "data/maps/Route123/scripts.pory"
	.string "You like GRASS-type POKéMON, too,\n"
# 494 "data/maps/Route123/scripts.pory"
	.string "don't you?\p"
# 495 "data/maps/Route123/scripts.pory"
	.string "I'm so happy, you can have this!\n"
# 496 "data/maps/Route123/scripts.pory"
	.string "It's a token of our friendship.$"
# 497 "data/maps/Route123/scripts.pory"

# 498 "data/maps/Route123/scripts.pory"
Route123_Text_CheckTreesWithMyGrassMon:
# 499 "data/maps/Route123/scripts.pory"
	.string "I check trees with my GRASS-type\n"
# 500 "data/maps/Route123/scripts.pory"
	.string "POKéMON. I'm like a tree doctor.$"
# 501 "data/maps/Route123/scripts.pory"

# 502 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSign:
# 503 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 123\n"
# 504 "data/maps/Route123/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 118$"
# 505 "data/maps/Route123/scripts.pory"

# 506 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSignMtPyre:
# 507 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} MT. PYRE\n"
# 508 "data/maps/Route123/scripts.pory"
	.string "“Forbidden to the faint of heart.”$"
# 509 "data/maps/Route123/scripts.pory"

# 510 "data/maps/Route123/scripts.pory"
Route123_Text_BerryMastersHouse:
# 511 "data/maps/Route123/scripts.pory"
	.string "BERRY MASTER'S HOUSE$"
