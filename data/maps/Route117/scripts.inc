# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_0, 25
# 3 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_1, 26
# 4 "data/maps/Route117/scripts.pory"
.set LOCALID_MEG, 18
# 5 "data/maps/Route117/scripts.pory"
.set LOCALID_ANNA, 19
# 6 "data/maps/Route117/scripts.pory"
.set LOCALID_LYDIA, 9
# 7 "data/maps/Route117/scripts.pory"
.set LOCALID_ISAAC, 10
# 8 "data/maps/Route117/scripts.pory"
.set LOCALID_DYLAN, 8
# 9 "data/maps/Route117/scripts.pory"
.set LOCALID_MARIA, 16
# 10 "data/maps/Route117/scripts.pory"
.set LOCALID_MELINA, 23
# 11 "data/maps/Route117/scripts.pory"
.set LOCALID_DEREK, 17
# 12 "data/maps/Route117/scripts.pory"
.set LOCALID_BRANDI, 21
# 13 "data/maps/Route117/scripts.pory"
.set LOCALID_AISHA, 22
# 14 "data/maps/Route117/scripts.pory"

# 15 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 16 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 17 "data/maps/Route117/scripts.pory"
	.byte 0
# 18 "data/maps/Route117/scripts.pory"

# 19 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 20 "data/maps/Route117/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 21 "data/maps/Route117/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 22 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 23 "data/maps/Route117/scripts.pory"
	@ set flags for OW daycare mons
# 24 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 25 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 26 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 27 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/Route117/scripts.pory"
	case 2, Route117_EventScript_ShowDaycareMon1
# 29 "data/maps/Route117/scripts.pory"
	case 1, Route117_EventScript_ShowDaycareMon0
# 30 "data/maps/Route117/scripts.pory"
	end
# 31 "data/maps/Route117/scripts.pory"

# 32 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1:
# 33 "data/maps/Route117/scripts.pory"
	@ set pokemon movement type based on compatibility
# 34 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 35 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_INCOMPATIBLE, Route117_EventScript_DaycareMonIncompatible
# 36 "data/maps/Route117/scripts.pory"
	@ Don't do anything if PARENTS_LOW_COMPATIBILITY
# 37 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MED_COMPATIBILITY, Route117_EventScript_DaycareMonMedCompatibility
# 38 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MAX_COMPATIBILITY, Route117_EventScript_DaycareMonMaxCompatibility
# 39 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 40 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon0:
# 41 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
# 42 "data/maps/Route117/scripts.pory"
	end
# 43 "data/maps/Route117/scripts.pory"

# 44 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonIncompatible: @ mons never face each other
# 45 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 46 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
# 47 "data/maps/Route117/scripts.pory"
	return
# 48 "data/maps/Route117/scripts.pory"

# 49 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other
# 50 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 51 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
# 52 "data/maps/Route117/scripts.pory"
	return
# 53 "data/maps/Route117/scripts.pory"

# 54 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place
# 55 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 56 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 57 "data/maps/Route117/scripts.pory"
	return
# 58 "data/maps/Route117/scripts.pory"

# 59 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 60 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 61 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 62 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 63 "data/maps/Route117/scripts.pory"
	return
# 64 "data/maps/Route117/scripts.pory"

# 65 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 66 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 67 "data/maps/Route117/scripts.pory"
	end
# 68 "data/maps/Route117/scripts.pory"

# 69 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 70 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 71 "data/maps/Route117/scripts.pory"
	end
# 72 "data/maps/Route117/scripts.pory"

# 73 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 74 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 75 "data/maps/Route117/scripts.pory"
	end
# 76 "data/maps/Route117/scripts.pory"

# 77 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 78 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 79 "data/maps/Route117/scripts.pory"
	end
# 80 "data/maps/Route117/scripts.pory"

# 81 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 82 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 83 "data/maps/Route117/scripts.pory"
	end
# 84 "data/maps/Route117/scripts.pory"

# 85 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 86 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 87 "data/maps/Route117/scripts.pory"
	end
# 88 "data/maps/Route117/scripts.pory"

# 89 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 90 "data/maps/Route117/scripts.pory"
	faceplayer
# 91 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 92 "data/maps/Route117/scripts.pory"
	release
# 93 "data/maps/Route117/scripts.pory"
	end
# 94 "data/maps/Route117/scripts.pory"

# 95 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 96 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 97 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 99 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 100 "data/maps/Route117/scripts.pory"
	release
# 101 "data/maps/Route117/scripts.pory"
	end
# 102 "data/maps/Route117/scripts.pory"

# 103 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 104 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 105 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 106 "data/maps/Route117/scripts.pory"
	end
# 107 "data/maps/Route117/scripts.pory"

# 108 "data/maps/Route117/scripts.pory"
Route117_EventScript_LydiaIsaac::
# 109 "data/maps/Route117/scripts.pory"
lockall
# 110 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_LYDIA
# 111 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 112 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 113 "data/maps/Route117/scripts.pory"
waitmovement 0
# 114 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 115 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 116 "data/maps/Route117/scripts.pory"
waitmovement 0
# 117 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_LydiaIntro MSGBOX_AUTOCLOSE
# 118 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_ISAAC
# 119 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 120 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 121 "data/maps/Route117/scripts.pory"
waitmovement 0
# 122 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 123 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 124 "data/maps/Route117/scripts.pory"
waitmovement 0
# 125 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_IsaacIntro, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_LydiaIsaacDoMultiBattle
# 127 "data/maps/Route117/scripts.pory"
releaseall
# 128 "data/maps/Route117/scripts.pory"
end
# 129 "data/maps/Route117/scripts.pory"

# 130 "data/maps/Route117/scripts.pory"
Route117_EventScript_LydiaIsaacDoMultiBattle::
# 131 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 132 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_LYDIA_1, Route117_Text_LydiaDefeat, TRAINER_ISAAC_1, Route117_Text_IsaacDefeat, PARTNER_EMMIE
# 133 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 134 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_LydiaIsaacVictory
# 135 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 136 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 137 "data/maps/Route117/scripts.pory"
waitstate
# 138 "data/maps/Route117/scripts.pory"

# 139 "data/maps/Route117/scripts.pory"
Route117_EventScript_LydiaIsaacVictory::
# 140 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 141 "data/maps/Route117/scripts.pory"
waitmovement 0
# 142 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_LydiaPostBattle, MSGBOX_AUTOCLOSE
# 143 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 144 "data/maps/Route117/scripts.pory"
waitmovement 0
# 145 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_IsaacPostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 147 "data/maps/Route117/scripts.pory"
end
# 148 "data/maps/Route117/scripts.pory"

# 149 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 150 "data/maps/Route117/scripts.pory"
	faceplayer
# 151 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 152 "data/maps/Route117/scripts.pory"
	release
# 153 "data/maps/Route117/scripts.pory"
	end
# 154 "data/maps/Route117/scripts.pory"

# 155 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 156 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 157 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 158 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 159 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 160 "data/maps/Route117/scripts.pory"
	release
# 161 "data/maps/Route117/scripts.pory"
	end
# 162 "data/maps/Route117/scripts.pory"

# 163 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 164 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 165 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route117/scripts.pory"
	end
# 167 "data/maps/Route117/scripts.pory"

# 168 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMaria::
# 169 "data/maps/Route117/scripts.pory"
lockall
# 170 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_DYLAN
# 171 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 172 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 173 "data/maps/Route117/scripts.pory"
waitmovement 0
# 174 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 175 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 176 "data/maps/Route117/scripts.pory"
waitmovement 0
# 177 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DylanIntro MSGBOX_AUTOCLOSE
# 178 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MARIA
# 179 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 180 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 181 "data/maps/Route117/scripts.pory"
waitmovement 0
# 182 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 183 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 184 "data/maps/Route117/scripts.pory"
waitmovement 0
# 185 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MariaIntro, MSGBOX_AUTOCLOSE
# 186 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_DylanMariaDoMultiBattle
# 187 "data/maps/Route117/scripts.pory"
releaseall
# 188 "data/maps/Route117/scripts.pory"
end
# 189 "data/maps/Route117/scripts.pory"

# 190 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMariaDoMultiBattle::
# 191 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 192 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_DYLAN_1, Route117_Text_DylanDefeat, TRAINER_MARIA_1, Route117_Text_MariaDefeat, PARTNER_EMMIE
# 193 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 194 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_DylanMariaVictory
# 195 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 196 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 197 "data/maps/Route117/scripts.pory"
waitstate
# 198 "data/maps/Route117/scripts.pory"

# 199 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMariaVictory::
# 200 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 201 "data/maps/Route117/scripts.pory"
waitmovement 0
# 202 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DylanPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 204 "data/maps/Route117/scripts.pory"
waitmovement 0
# 205 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MariaPostBattle, MSGBOX_AUTOCLOSE
# 206 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 207 "data/maps/Route117/scripts.pory"
end
# 208 "data/maps/Route117/scripts.pory"

# 209 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 210 "data/maps/Route117/scripts.pory"
	faceplayer
# 211 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 212 "data/maps/Route117/scripts.pory"
	release
# 213 "data/maps/Route117/scripts.pory"
	end
# 214 "data/maps/Route117/scripts.pory"

# 215 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 216 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 217 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 219 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 220 "data/maps/Route117/scripts.pory"
	release
# 221 "data/maps/Route117/scripts.pory"
	end
# 222 "data/maps/Route117/scripts.pory"

# 223 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerek::
# 224 "data/maps/Route117/scripts.pory"
lockall
# 225 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MELINA
# 226 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 227 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 228 "data/maps/Route117/scripts.pory"
waitmovement 0
# 229 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 230 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 231 "data/maps/Route117/scripts.pory"
waitmovement 0
# 232 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MelinaIntro MSGBOX_AUTOCLOSE
# 233 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_DEREK
# 234 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 235 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 236 "data/maps/Route117/scripts.pory"
waitmovement 0
# 237 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 238 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 239 "data/maps/Route117/scripts.pory"
waitmovement 0
# 240 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DerekIntro, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_MelinaDerekDoMultiBattle
# 242 "data/maps/Route117/scripts.pory"
releaseall
# 243 "data/maps/Route117/scripts.pory"
end
# 244 "data/maps/Route117/scripts.pory"

# 245 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerekDoMultiBattle::
# 246 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 247 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_MELINA, Route117_Text_MelinaDefeat, TRAINER_DEREK, Route117_Text_DerekDefeat, PARTNER_EMMIE
# 248 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 249 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_MelinaDerekVictory
# 250 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 251 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 252 "data/maps/Route117/scripts.pory"
waitstate
# 253 "data/maps/Route117/scripts.pory"

# 254 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerekVictory::
# 255 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 256 "data/maps/Route117/scripts.pory"
waitmovement 0
# 257 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 259 "data/maps/Route117/scripts.pory"
waitmovement 0
# 260 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 262 "data/maps/Route117/scripts.pory"
end
# 263 "data/maps/Route117/scripts.pory"

# 264 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 265 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 266 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 267 "data/maps/Route117/scripts.pory"
	end
# 268 "data/maps/Route117/scripts.pory"

# 269 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 270 "data/maps/Route117/scripts.pory"
	faceplayer
# 271 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 272 "data/maps/Route117/scripts.pory"
	release
# 273 "data/maps/Route117/scripts.pory"
	end
# 274 "data/maps/Route117/scripts.pory"

# 275 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 276 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 277 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 278 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 279 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 280 "data/maps/Route117/scripts.pory"
	release
# 281 "data/maps/Route117/scripts.pory"
	end
# 282 "data/maps/Route117/scripts.pory"

# 283 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 284 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 285 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 286 "data/maps/Route117/scripts.pory"
	end
# 287 "data/maps/Route117/scripts.pory"

# 288 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 289 "data/maps/Route117/scripts.pory"
	faceplayer
# 290 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/Route117/scripts.pory"
	end
# 292 "data/maps/Route117/scripts.pory"

# 293 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMeg::
# 294 "data/maps/Route117/scripts.pory"
lockall
# 295 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MEG
# 296 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 297 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 298 "data/maps/Route117/scripts.pory"
applymovement LOCALID_ANNA, Common_Movement_ExclamationMark
# 299 "data/maps/Route117/scripts.pory"
waitmovement 0
# 300 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 301 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 302 "data/maps/Route117/scripts.pory"
waitmovement 0
# 303 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AnnaIntro, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_AnnaMegDoMultiBattle
# 305 "data/maps/Route117/scripts.pory"
releaseall
# 306 "data/maps/Route117/scripts.pory"
end
# 307 "data/maps/Route117/scripts.pory"

# 308 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMegDoMultiBattle::
# 309 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 310 "data/maps/Route117/scripts.pory"
multi_2p_vs_1 TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaDefeat, PARTNER_EMMIE
# 311 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 312 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_AnnaMegVictory
# 313 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 314 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 315 "data/maps/Route117/scripts.pory"
waitstate
# 316 "data/maps/Route117/scripts.pory"

# 317 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMegVictory::
# 318 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 319 "data/maps/Route117/scripts.pory"
waitmovement 0
# 320 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AnnaPostBattle, MSGBOX_AUTOCLOSE
# 321 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 322 "data/maps/Route117/scripts.pory"
end
# 323 "data/maps/Route117/scripts.pory"

# 324 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 325 "data/maps/Route117/scripts.pory"
	faceplayer
# 326 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 327 "data/maps/Route117/scripts.pory"
	release
# 328 "data/maps/Route117/scripts.pory"
	end
# 329 "data/maps/Route117/scripts.pory"

# 330 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 331 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 332 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 333 "data/maps/Route117/scripts.pory"
	release
# 334 "data/maps/Route117/scripts.pory"
	end
# 335 "data/maps/Route117/scripts.pory"

# 336 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 337 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 338 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 339 "data/maps/Route117/scripts.pory"
	end
# 340 "data/maps/Route117/scripts.pory"

# 341 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 342 "data/maps/Route117/scripts.pory"
	faceplayer
# 343 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 344 "data/maps/Route117/scripts.pory"
	release
# 345 "data/maps/Route117/scripts.pory"
	end
# 346 "data/maps/Route117/scripts.pory"

# 347 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 348 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 349 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 350 "data/maps/Route117/scripts.pory"
	release
# 351 "data/maps/Route117/scripts.pory"
	end
# 352 "data/maps/Route117/scripts.pory"

# 353 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 354 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 355 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 356 "data/maps/Route117/scripts.pory"
	end
# 357 "data/maps/Route117/scripts.pory"

# 358 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 359 "data/maps/Route117/scripts.pory"
	faceplayer
# 360 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/Route117/scripts.pory"
	end
# 362 "data/maps/Route117/scripts.pory"

# 363 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAisha::
# 364 "data/maps/Route117/scripts.pory"
lockall
# 365 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_BRANDI
# 366 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 367 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 368 "data/maps/Route117/scripts.pory"
waitmovement 0
# 369 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 370 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 371 "data/maps/Route117/scripts.pory"
waitmovement 0
# 372 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_BrandiIntro MSGBOX_AUTOCLOSE
# 373 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_AISHA
# 374 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 375 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 376 "data/maps/Route117/scripts.pory"
waitmovement 0
# 377 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 378 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 379 "data/maps/Route117/scripts.pory"
waitmovement 0
# 380 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AishaIntro, MSGBOX_AUTOCLOSE
# 381 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_BrandiAishaDoMultiBattle
# 382 "data/maps/Route117/scripts.pory"
releaseall
# 383 "data/maps/Route117/scripts.pory"
end
# 384 "data/maps/Route117/scripts.pory"

# 385 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAishaDoMultiBattle::
# 386 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 387 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_BRANDI, Route117_Text_BrandiDefeat, TRAINER_AISHA, Route117_Text_AishaDefeat, PARTNER_EMMIE
# 388 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 389 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_BrandiAishaVictory
# 390 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 391 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 392 "data/maps/Route117/scripts.pory"
waitstate
# 393 "data/maps/Route117/scripts.pory"

# 394 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAishaVictory::
# 395 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 396 "data/maps/Route117/scripts.pory"
waitmovement 0
# 397 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 398 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 399 "data/maps/Route117/scripts.pory"
waitmovement 0
# 400 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 401 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 402 "data/maps/Route117/scripts.pory"
end
# 403 "data/maps/Route117/scripts.pory"

# 404 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 405 "data/maps/Route117/scripts.pory"
	faceplayer
# 406 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 407 "data/maps/Route117/scripts.pory"
	end
# 408 "data/maps/Route117/scripts.pory"

# 409 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 410 "data/maps/Route117/scripts.pory"
	faceplayer
# 411 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 412 "data/maps/Route117/scripts.pory"
	end
# 413 "data/maps/Route117/scripts.pory"

# 414 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 415 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 416 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 417 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 418 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 419 "data/maps/Route117/scripts.pory"

# 420 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 421 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 422 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 423 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 424 "data/maps/Route117/scripts.pory"

# 425 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 426 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 427 "data/maps/Route117/scripts.pory"

# 428 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 429 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 430 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 431 "data/maps/Route117/scripts.pory"

# 432 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 433 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 434 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 435 "data/maps/Route117/scripts.pory"

# 436 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 437 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 438 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"
