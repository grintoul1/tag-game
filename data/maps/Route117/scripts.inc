# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MAN, 3
# 3 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_0, 25
# 4 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_1, 26
# 5 "data/maps/Route117/scripts.pory"
.set LOCALID_MEG, 18
# 6 "data/maps/Route117/scripts.pory"
.set LOCALID_ANNA, 19
# 7 "data/maps/Route117/scripts.pory"
.set LOCALID_LYDIA, 9
# 8 "data/maps/Route117/scripts.pory"
.set LOCALID_ISAAC, 10
# 9 "data/maps/Route117/scripts.pory"
.set LOCALID_DYLAN, 8
# 10 "data/maps/Route117/scripts.pory"
.set LOCALID_MARIA, 16
# 11 "data/maps/Route117/scripts.pory"
.set LOCALID_MELINA, 23
# 12 "data/maps/Route117/scripts.pory"
.set LOCALID_DEREK, 17
# 13 "data/maps/Route117/scripts.pory"
.set LOCALID_BRANDI, 21
# 14 "data/maps/Route117/scripts.pory"
.set LOCALID_AISHA, 22
# 15 "data/maps/Route117/scripts.pory"

# 16 "data/maps/Route117/scripts.pory"

# 17 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 18 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 19 "data/maps/Route117/scripts.pory"
	.byte 0
# 20 "data/maps/Route117/scripts.pory"

# 21 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 22 "data/maps/Route117/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 23 "data/maps/Route117/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 24 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 25 "data/maps/Route117/scripts.pory"
	@ set flags for OW daycare mons
# 26 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 27 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 28 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 29 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/Route117/scripts.pory"
	case 2, Route117_EventScript_ShowDaycareMon1
# 31 "data/maps/Route117/scripts.pory"
	case 1, Route117_EventScript_ShowDaycareMon0
# 32 "data/maps/Route117/scripts.pory"
	end
# 33 "data/maps/Route117/scripts.pory"

# 34 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1:
# 35 "data/maps/Route117/scripts.pory"
	@ set pokemon movement type based on compatibility
# 36 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 37 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_INCOMPATIBLE, Route117_EventScript_DaycareMonIncompatible
# 38 "data/maps/Route117/scripts.pory"
	@ Don't do anything if PARENTS_LOW_COMPATIBILITY
# 39 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MED_COMPATIBILITY, Route117_EventScript_DaycareMonMedCompatibility
# 40 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MAX_COMPATIBILITY, Route117_EventScript_DaycareMonMaxCompatibility
# 41 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 42 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon0:
# 43 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
# 44 "data/maps/Route117/scripts.pory"
	end
# 45 "data/maps/Route117/scripts.pory"

# 46 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonIncompatible: @ mons never face each other
# 47 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 48 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
# 49 "data/maps/Route117/scripts.pory"
	return
# 50 "data/maps/Route117/scripts.pory"

# 51 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other
# 52 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 53 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
# 54 "data/maps/Route117/scripts.pory"
	return
# 55 "data/maps/Route117/scripts.pory"

# 56 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place
# 57 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 58 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 59 "data/maps/Route117/scripts.pory"
	return
# 60 "data/maps/Route117/scripts.pory"

# 61 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 62 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 63 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 64 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 65 "data/maps/Route117/scripts.pory"
	return
# 66 "data/maps/Route117/scripts.pory"

# 67 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 68 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 69 "data/maps/Route117/scripts.pory"
	end
# 70 "data/maps/Route117/scripts.pory"

# 71 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 72 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 73 "data/maps/Route117/scripts.pory"
	end
# 74 "data/maps/Route117/scripts.pory"

# 75 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 76 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 77 "data/maps/Route117/scripts.pory"
	end
# 78 "data/maps/Route117/scripts.pory"

# 79 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 80 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 81 "data/maps/Route117/scripts.pory"
	end
# 82 "data/maps/Route117/scripts.pory"

# 83 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 84 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 85 "data/maps/Route117/scripts.pory"
	end
# 86 "data/maps/Route117/scripts.pory"

# 87 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 88 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 89 "data/maps/Route117/scripts.pory"
	end
# 90 "data/maps/Route117/scripts.pory"

# 91 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 92 "data/maps/Route117/scripts.pory"
	faceplayer
# 93 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 94 "data/maps/Route117/scripts.pory"
	release
# 95 "data/maps/Route117/scripts.pory"
	end
# 96 "data/maps/Route117/scripts.pory"

# 97 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 98 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 99 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 100 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 101 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 102 "data/maps/Route117/scripts.pory"
	release
# 103 "data/maps/Route117/scripts.pory"
	end
# 104 "data/maps/Route117/scripts.pory"

# 105 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 106 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 107 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route117/scripts.pory"
	end
# 109 "data/maps/Route117/scripts.pory"

# 110 "data/maps/Route117/scripts.pory"
Route117_EventScript_LydiaIsaac::
# 111 "data/maps/Route117/scripts.pory"
lockall
# 112 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_LYDIA
# 113 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 114 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 115 "data/maps/Route117/scripts.pory"
waitmovement 0
# 116 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 117 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 118 "data/maps/Route117/scripts.pory"
waitmovement 0
# 119 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_LydiaIntro MSGBOX_AUTOCLOSE
# 120 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_ISAAC
# 121 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 122 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 123 "data/maps/Route117/scripts.pory"
waitmovement 0
# 124 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 125 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 126 "data/maps/Route117/scripts.pory"
waitmovement 0
# 127 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_IsaacIntro, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_LydiaIsaacDoMultiBattle
# 129 "data/maps/Route117/scripts.pory"
releaseall
# 130 "data/maps/Route117/scripts.pory"
end
# 131 "data/maps/Route117/scripts.pory"

# 132 "data/maps/Route117/scripts.pory"
Route117_EventScript_LydiaIsaacDoMultiBattle::
# 133 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 134 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_LYDIA_1, Route117_Text_LydiaDefeat, TRAINER_ISAAC_1, Route117_Text_IsaacDefeat, PARTNER_EMMIE
# 135 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 136 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_LydiaIsaacVictory
# 137 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 138 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 139 "data/maps/Route117/scripts.pory"
waitstate
# 140 "data/maps/Route117/scripts.pory"

# 141 "data/maps/Route117/scripts.pory"
Route117_EventScript_LydiaIsaacVictory::
# 142 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 143 "data/maps/Route117/scripts.pory"
waitmovement 0
# 144 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_LydiaPostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 146 "data/maps/Route117/scripts.pory"
waitmovement 0
# 147 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_IsaacPostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 149 "data/maps/Route117/scripts.pory"
end
# 150 "data/maps/Route117/scripts.pory"

# 151 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 152 "data/maps/Route117/scripts.pory"
	faceplayer
# 153 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 154 "data/maps/Route117/scripts.pory"
	release
# 155 "data/maps/Route117/scripts.pory"
	end
# 156 "data/maps/Route117/scripts.pory"

# 157 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 158 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 159 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 161 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 162 "data/maps/Route117/scripts.pory"
	release
# 163 "data/maps/Route117/scripts.pory"
	end
# 164 "data/maps/Route117/scripts.pory"

# 165 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 166 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 167 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 168 "data/maps/Route117/scripts.pory"
	end
# 169 "data/maps/Route117/scripts.pory"

# 170 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMaria::
# 171 "data/maps/Route117/scripts.pory"
lockall
# 172 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_DYLAN
# 173 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 174 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 175 "data/maps/Route117/scripts.pory"
waitmovement 0
# 176 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 177 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 178 "data/maps/Route117/scripts.pory"
waitmovement 0
# 179 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DylanIntro MSGBOX_AUTOCLOSE
# 180 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MARIA
# 181 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 182 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 183 "data/maps/Route117/scripts.pory"
waitmovement 0
# 184 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 185 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 186 "data/maps/Route117/scripts.pory"
waitmovement 0
# 187 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MariaIntro, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_DylanMariaDoMultiBattle
# 189 "data/maps/Route117/scripts.pory"
releaseall
# 190 "data/maps/Route117/scripts.pory"
end
# 191 "data/maps/Route117/scripts.pory"

# 192 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMariaDoMultiBattle::
# 193 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 194 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_DYLAN_1, Route117_Text_DylanDefeat, TRAINER_MARIA_1, Route117_Text_MariaDefeat, PARTNER_EMMIE
# 195 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 196 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_DylanMariaVictory
# 197 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 198 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 199 "data/maps/Route117/scripts.pory"
waitstate
# 200 "data/maps/Route117/scripts.pory"

# 201 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMariaVictory::
# 202 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 203 "data/maps/Route117/scripts.pory"
waitmovement 0
# 204 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DylanPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 206 "data/maps/Route117/scripts.pory"
waitmovement 0
# 207 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MariaPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 209 "data/maps/Route117/scripts.pory"
end
# 210 "data/maps/Route117/scripts.pory"

# 211 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 212 "data/maps/Route117/scripts.pory"
	faceplayer
# 213 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 214 "data/maps/Route117/scripts.pory"
	release
# 215 "data/maps/Route117/scripts.pory"
	end
# 216 "data/maps/Route117/scripts.pory"

# 217 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 218 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 219 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 220 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 221 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 222 "data/maps/Route117/scripts.pory"
	release
# 223 "data/maps/Route117/scripts.pory"
	end
# 224 "data/maps/Route117/scripts.pory"

# 225 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerek::
# 226 "data/maps/Route117/scripts.pory"
lockall
# 227 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MELINA
# 228 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 229 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 230 "data/maps/Route117/scripts.pory"
waitmovement 0
# 231 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 232 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 233 "data/maps/Route117/scripts.pory"
waitmovement 0
# 234 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MelinaIntro MSGBOX_AUTOCLOSE
# 235 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_DEREK
# 236 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 237 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 238 "data/maps/Route117/scripts.pory"
waitmovement 0
# 239 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 240 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 241 "data/maps/Route117/scripts.pory"
waitmovement 0
# 242 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DerekIntro, MSGBOX_AUTOCLOSE
# 243 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_MelinaDerekDoMultiBattle
# 244 "data/maps/Route117/scripts.pory"
releaseall
# 245 "data/maps/Route117/scripts.pory"
end
# 246 "data/maps/Route117/scripts.pory"

# 247 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerekDoMultiBattle::
# 248 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 249 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_MELINA, Route117_Text_MelinaDefeat, TRAINER_DEREK, Route117_Text_DerekDefeat, PARTNER_EMMIE
# 250 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 251 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_MelinaDerekVictory
# 252 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 253 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 254 "data/maps/Route117/scripts.pory"
waitstate
# 255 "data/maps/Route117/scripts.pory"

# 256 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerekVictory::
# 257 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 258 "data/maps/Route117/scripts.pory"
waitmovement 0
# 259 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 261 "data/maps/Route117/scripts.pory"
waitmovement 0
# 262 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 264 "data/maps/Route117/scripts.pory"
end
# 265 "data/maps/Route117/scripts.pory"

# 266 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 267 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 268 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 269 "data/maps/Route117/scripts.pory"
	end
# 270 "data/maps/Route117/scripts.pory"

# 271 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 272 "data/maps/Route117/scripts.pory"
	faceplayer
# 273 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 274 "data/maps/Route117/scripts.pory"
	release
# 275 "data/maps/Route117/scripts.pory"
	end
# 276 "data/maps/Route117/scripts.pory"

# 277 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 278 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 279 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 280 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 281 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 282 "data/maps/Route117/scripts.pory"
	release
# 283 "data/maps/Route117/scripts.pory"
	end
# 284 "data/maps/Route117/scripts.pory"

# 285 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 286 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 287 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route117/scripts.pory"
	end
# 289 "data/maps/Route117/scripts.pory"

# 290 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 291 "data/maps/Route117/scripts.pory"
	faceplayer
# 292 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 293 "data/maps/Route117/scripts.pory"
	end
# 294 "data/maps/Route117/scripts.pory"

# 295 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMeg::
# 296 "data/maps/Route117/scripts.pory"
lockall
# 297 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MEG
# 298 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 299 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 300 "data/maps/Route117/scripts.pory"
applymovement LOCALID_ANNA, Common_Movement_ExclamationMark
# 301 "data/maps/Route117/scripts.pory"
waitmovement 0
# 302 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 303 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 304 "data/maps/Route117/scripts.pory"
waitmovement 0
# 305 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AnnaIntro, MSGBOX_AUTOCLOSE
# 306 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_AnnaMegDoMultiBattle
# 307 "data/maps/Route117/scripts.pory"
releaseall
# 308 "data/maps/Route117/scripts.pory"
end
# 309 "data/maps/Route117/scripts.pory"

# 310 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMegDoMultiBattle::
# 311 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 312 "data/maps/Route117/scripts.pory"
multi_2p_vs_1 TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaDefeat, PARTNER_EMMIE
# 313 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 314 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_AnnaMegVictory
# 315 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 316 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 317 "data/maps/Route117/scripts.pory"
waitstate
# 318 "data/maps/Route117/scripts.pory"

# 319 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMegVictory::
# 320 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 321 "data/maps/Route117/scripts.pory"
waitmovement 0
# 322 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AnnaPostBattle, MSGBOX_AUTOCLOSE
# 323 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 324 "data/maps/Route117/scripts.pory"
end
# 325 "data/maps/Route117/scripts.pory"

# 326 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 327 "data/maps/Route117/scripts.pory"
	faceplayer
# 328 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 329 "data/maps/Route117/scripts.pory"
	release
# 330 "data/maps/Route117/scripts.pory"
	end
# 331 "data/maps/Route117/scripts.pory"

# 332 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 333 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 334 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 335 "data/maps/Route117/scripts.pory"
	release
# 336 "data/maps/Route117/scripts.pory"
	end
# 337 "data/maps/Route117/scripts.pory"

# 338 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 339 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 340 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 341 "data/maps/Route117/scripts.pory"
	end
# 342 "data/maps/Route117/scripts.pory"

# 343 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 344 "data/maps/Route117/scripts.pory"
	faceplayer
# 345 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 346 "data/maps/Route117/scripts.pory"
	release
# 347 "data/maps/Route117/scripts.pory"
	end
# 348 "data/maps/Route117/scripts.pory"

# 349 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 350 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 351 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 352 "data/maps/Route117/scripts.pory"
	release
# 353 "data/maps/Route117/scripts.pory"
	end
# 354 "data/maps/Route117/scripts.pory"

# 355 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 356 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 357 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 358 "data/maps/Route117/scripts.pory"
	end
# 359 "data/maps/Route117/scripts.pory"

# 360 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 361 "data/maps/Route117/scripts.pory"
	faceplayer
# 362 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 363 "data/maps/Route117/scripts.pory"
	end
# 364 "data/maps/Route117/scripts.pory"

# 365 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAisha::
# 366 "data/maps/Route117/scripts.pory"
lockall
# 367 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_BRANDI
# 368 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 369 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 370 "data/maps/Route117/scripts.pory"
waitmovement 0
# 371 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 372 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 373 "data/maps/Route117/scripts.pory"
waitmovement 0
# 374 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_BrandiIntro MSGBOX_AUTOCLOSE
# 375 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_AISHA
# 376 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 377 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 378 "data/maps/Route117/scripts.pory"
waitmovement 0
# 379 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 380 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 381 "data/maps/Route117/scripts.pory"
waitmovement 0
# 382 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AishaIntro, MSGBOX_AUTOCLOSE
# 383 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_BrandiAishaDoMultiBattle
# 384 "data/maps/Route117/scripts.pory"
releaseall
# 385 "data/maps/Route117/scripts.pory"
end
# 386 "data/maps/Route117/scripts.pory"

# 387 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAishaDoMultiBattle::
# 388 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 389 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_BRANDI, Route117_Text_BrandiDefeat, TRAINER_AISHA, Route117_Text_AishaDefeat, PARTNER_EMMIE
# 390 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 391 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_BrandiAishaVictory
# 392 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 393 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 394 "data/maps/Route117/scripts.pory"
waitstate
# 395 "data/maps/Route117/scripts.pory"

# 396 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAishaVictory::
# 397 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 398 "data/maps/Route117/scripts.pory"
waitmovement 0
# 399 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 400 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 401 "data/maps/Route117/scripts.pory"
waitmovement 0
# 402 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 403 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 404 "data/maps/Route117/scripts.pory"
end
# 405 "data/maps/Route117/scripts.pory"

# 406 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 407 "data/maps/Route117/scripts.pory"
	faceplayer
# 408 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 409 "data/maps/Route117/scripts.pory"
	end
# 410 "data/maps/Route117/scripts.pory"

# 411 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 412 "data/maps/Route117/scripts.pory"
	faceplayer
# 413 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 414 "data/maps/Route117/scripts.pory"
	end
# 415 "data/maps/Route117/scripts.pory"

# 416 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 417 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 418 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 419 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 420 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 421 "data/maps/Route117/scripts.pory"

# 422 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 423 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 424 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 425 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 426 "data/maps/Route117/scripts.pory"

# 427 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 428 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 429 "data/maps/Route117/scripts.pory"

# 430 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 431 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 432 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 433 "data/maps/Route117/scripts.pory"

# 434 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 435 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 436 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 437 "data/maps/Route117/scripts.pory"

# 438 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 439 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 440 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"
