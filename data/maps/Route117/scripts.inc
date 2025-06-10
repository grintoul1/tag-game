# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"

# 3 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 4 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 5 "data/maps/Route117/scripts.pory"
	.byte 0
# 6 "data/maps/Route117/scripts.pory"

# 7 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 8 "data/maps/Route117/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 9 "data/maps/Route117/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 10 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 11 "data/maps/Route117/scripts.pory"
	@ set flags for OW daycare mons
# 12 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 13 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 14 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 15 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/Route117/scripts.pory"
	case 2, Route117_EventScript_ShowDaycareMon1 
# 17 "data/maps/Route117/scripts.pory"
	case 1, Route117_EventScript_ShowDaycareMon0
# 18 "data/maps/Route117/scripts.pory"
	end
# 19 "data/maps/Route117/scripts.pory"

# 20 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1:
# 21 "data/maps/Route117/scripts.pory"
	@ set pokemon movement type based on compatibility
# 22 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 23 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_INCOMPATIBLE, Route117_EventScript_DaycareMonIncompatible
# 24 "data/maps/Route117/scripts.pory"
	@ Don't do anything if PARENTS_LOW_COMPATIBILITY
# 25 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MED_COMPATIBILITY, Route117_EventScript_DaycareMonMedCompatibility
# 26 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MAX_COMPATIBILITY, Route117_EventScript_DaycareMonMaxCompatibility
# 27 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 28 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon0:
# 29 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
# 30 "data/maps/Route117/scripts.pory"
	end
# 31 "data/maps/Route117/scripts.pory"

# 32 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonIncompatible: @ mons never face each other
# 33 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 34 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
# 35 "data/maps/Route117/scripts.pory"
	return
# 36 "data/maps/Route117/scripts.pory"

# 37 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other
# 38 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 39 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
# 40 "data/maps/Route117/scripts.pory"
	return
# 41 "data/maps/Route117/scripts.pory"

# 42 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place
# 43 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 44 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 45 "data/maps/Route117/scripts.pory"
	return
# 46 "data/maps/Route117/scripts.pory"

# 47 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 48 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 49 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 50 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 51 "data/maps/Route117/scripts.pory"
	return
# 52 "data/maps/Route117/scripts.pory"

# 53 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 54 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 55 "data/maps/Route117/scripts.pory"
	end
# 56 "data/maps/Route117/scripts.pory"

# 57 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 58 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 59 "data/maps/Route117/scripts.pory"
	end
# 60 "data/maps/Route117/scripts.pory"

# 61 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 62 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 63 "data/maps/Route117/scripts.pory"
	end
# 64 "data/maps/Route117/scripts.pory"

# 65 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 66 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 67 "data/maps/Route117/scripts.pory"
	end
# 68 "data/maps/Route117/scripts.pory"

# 69 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 70 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 71 "data/maps/Route117/scripts.pory"
	end
# 72 "data/maps/Route117/scripts.pory"

# 73 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 74 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 75 "data/maps/Route117/scripts.pory"
	end
# 76 "data/maps/Route117/scripts.pory"

# 77 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 78 "data/maps/Route117/scripts.pory"
	faceplayer
# 79 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 80 "data/maps/Route117/scripts.pory"
	release
# 81 "data/maps/Route117/scripts.pory"
	end
# 82 "data/maps/Route117/scripts.pory"

# 83 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 84 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 85 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 87 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 88 "data/maps/Route117/scripts.pory"
	release
# 89 "data/maps/Route117/scripts.pory"
	end
# 90 "data/maps/Route117/scripts.pory"

# 91 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 92 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 93 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route117/scripts.pory"
	end
# 95 "data/maps/Route117/scripts.pory"

# 96 "data/maps/Route117/scripts.pory"
Route117_EventScript_LydiaIsaac::
# 97 "data/maps/Route117/scripts.pory"
lockall
# 98 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_LYDIA
# 99 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 100 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 101 "data/maps/Route117/scripts.pory"
waitmovement 0
# 102 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 103 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 104 "data/maps/Route117/scripts.pory"
waitmovement 0
# 105 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_LydiaIntro MSGBOX_AUTOCLOSE
# 106 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_ISAAC
# 107 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 108 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 109 "data/maps/Route117/scripts.pory"
waitmovement 0
# 110 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 111 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 112 "data/maps/Route117/scripts.pory"
waitmovement 0
# 113 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_IsaacIntro, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_LydiaIsaacDoMultiBattle
# 115 "data/maps/Route117/scripts.pory"
releaseall
# 116 "data/maps/Route117/scripts.pory"
end
# 117 "data/maps/Route117/scripts.pory"

# 118 "data/maps/Route117/scripts.pory"
Route117_EventScript_LydiaIsaacDoMultiBattle::
# 119 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 120 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_LYDIA_1, Route117_Text_LydiaDefeat, TRAINER_ISAAC_1, Route117_Text_IsaacDefeat, PARTNER_EMMIE
# 121 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 122 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_LydiaIsaacVictory
# 123 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 124 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 125 "data/maps/Route117/scripts.pory"
waitstate
# 126 "data/maps/Route117/scripts.pory"

# 127 "data/maps/Route117/scripts.pory"
Route117_EventScript_LydiaIsaacVictory::
# 128 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 129 "data/maps/Route117/scripts.pory"
waitmovement 0
# 130 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_LydiaPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 132 "data/maps/Route117/scripts.pory"
waitmovement 0
# 133 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_IsaacPostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 135 "data/maps/Route117/scripts.pory"
end
# 136 "data/maps/Route117/scripts.pory"

# 137 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 138 "data/maps/Route117/scripts.pory"
	faceplayer
# 139 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 140 "data/maps/Route117/scripts.pory"
	release
# 141 "data/maps/Route117/scripts.pory"
	end
# 142 "data/maps/Route117/scripts.pory"

# 143 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 144 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 145 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 147 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 148 "data/maps/Route117/scripts.pory"
	release
# 149 "data/maps/Route117/scripts.pory"
	end
# 150 "data/maps/Route117/scripts.pory"

# 151 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 152 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 153 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 154 "data/maps/Route117/scripts.pory"
	end
# 155 "data/maps/Route117/scripts.pory"

# 156 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMaria::
# 157 "data/maps/Route117/scripts.pory"
lockall
# 158 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_DYLAN
# 159 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 160 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 161 "data/maps/Route117/scripts.pory"
waitmovement 0
# 162 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 163 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 164 "data/maps/Route117/scripts.pory"
waitmovement 0
# 165 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DylanIntro MSGBOX_AUTOCLOSE
# 166 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MARIA
# 167 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 168 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 169 "data/maps/Route117/scripts.pory"
waitmovement 0
# 170 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 171 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 172 "data/maps/Route117/scripts.pory"
waitmovement 0
# 173 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MariaIntro, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_DylanMariaDoMultiBattle
# 175 "data/maps/Route117/scripts.pory"
releaseall
# 176 "data/maps/Route117/scripts.pory"
end
# 177 "data/maps/Route117/scripts.pory"

# 178 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMariaDoMultiBattle::
# 179 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 180 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_DYLAN_1, Route117_Text_DylanDefeat, TRAINER_MARIA_1, Route117_Text_MariaDefeat, PARTNER_EMMIE
# 181 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 182 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_DylanMariaVictory
# 183 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 184 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 185 "data/maps/Route117/scripts.pory"
waitstate
# 186 "data/maps/Route117/scripts.pory"

# 187 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMariaVictory::
# 188 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 189 "data/maps/Route117/scripts.pory"
waitmovement 0
# 190 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DylanPostBattle, MSGBOX_AUTOCLOSE
# 191 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 192 "data/maps/Route117/scripts.pory"
waitmovement 0
# 193 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MariaPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 195 "data/maps/Route117/scripts.pory"
end
# 196 "data/maps/Route117/scripts.pory"

# 197 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 198 "data/maps/Route117/scripts.pory"
	faceplayer
# 199 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 200 "data/maps/Route117/scripts.pory"
	release
# 201 "data/maps/Route117/scripts.pory"
	end
# 202 "data/maps/Route117/scripts.pory"

# 203 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 204 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 205 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 206 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 207 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 208 "data/maps/Route117/scripts.pory"
	release
# 209 "data/maps/Route117/scripts.pory"
	end
# 210 "data/maps/Route117/scripts.pory"

# 211 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerek::
# 212 "data/maps/Route117/scripts.pory"
lockall
# 213 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MELINA
# 214 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 215 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 216 "data/maps/Route117/scripts.pory"
waitmovement 0
# 217 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 218 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 219 "data/maps/Route117/scripts.pory"
waitmovement 0
# 220 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MelinaIntro MSGBOX_AUTOCLOSE
# 221 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_DEREK
# 222 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 223 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 224 "data/maps/Route117/scripts.pory"
waitmovement 0
# 225 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 226 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 227 "data/maps/Route117/scripts.pory"
waitmovement 0
# 228 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DerekIntro, MSGBOX_AUTOCLOSE
# 229 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_MelinaDerekDoMultiBattle
# 230 "data/maps/Route117/scripts.pory"
releaseall
# 231 "data/maps/Route117/scripts.pory"
end
# 232 "data/maps/Route117/scripts.pory"

# 233 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerekDoMultiBattle::
# 234 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 235 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_MELINA, Route117_Text_MelinaDefeat, TRAINER_DEREK, Route117_Text_DerekDefeat, PARTNER_EMMIE
# 236 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 237 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_MelinaDerekVictory
# 238 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 239 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 240 "data/maps/Route117/scripts.pory"
waitstate
# 241 "data/maps/Route117/scripts.pory"

# 242 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerekVictory::
# 243 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 244 "data/maps/Route117/scripts.pory"
waitmovement 0
# 245 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 247 "data/maps/Route117/scripts.pory"
waitmovement 0
# 248 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 250 "data/maps/Route117/scripts.pory"
end
# 251 "data/maps/Route117/scripts.pory"

# 252 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 253 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 254 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 255 "data/maps/Route117/scripts.pory"
	end
# 256 "data/maps/Route117/scripts.pory"

# 257 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 258 "data/maps/Route117/scripts.pory"
	faceplayer
# 259 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 260 "data/maps/Route117/scripts.pory"
	release
# 261 "data/maps/Route117/scripts.pory"
	end
# 262 "data/maps/Route117/scripts.pory"

# 263 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 264 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 265 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 266 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 267 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 268 "data/maps/Route117/scripts.pory"
	release
# 269 "data/maps/Route117/scripts.pory"
	end
# 270 "data/maps/Route117/scripts.pory"

# 271 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 272 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 273 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 274 "data/maps/Route117/scripts.pory"
	end
# 275 "data/maps/Route117/scripts.pory"

# 276 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 277 "data/maps/Route117/scripts.pory"
	faceplayer
# 278 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 279 "data/maps/Route117/scripts.pory"
	end
# 280 "data/maps/Route117/scripts.pory"

# 281 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMeg::
# 282 "data/maps/Route117/scripts.pory"
lockall
# 283 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MEG
# 284 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 285 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 286 "data/maps/Route117/scripts.pory"
applymovement LOCALID_ANNA, Common_Movement_ExclamationMark
# 287 "data/maps/Route117/scripts.pory"
waitmovement 0
# 288 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 289 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 290 "data/maps/Route117/scripts.pory"
waitmovement 0
# 291 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AnnaIntro, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_AnnaMegDoMultiBattle
# 293 "data/maps/Route117/scripts.pory"
releaseall
# 294 "data/maps/Route117/scripts.pory"
end
# 295 "data/maps/Route117/scripts.pory"

# 296 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMegDoMultiBattle::
# 297 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 298 "data/maps/Route117/scripts.pory"
multi_2p_vs_1 TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaDefeat, PARTNER_EMMIE
# 299 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 300 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_AnnaMegVictory
# 301 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 302 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 303 "data/maps/Route117/scripts.pory"
waitstate
# 304 "data/maps/Route117/scripts.pory"

# 305 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMegVictory::
# 306 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 307 "data/maps/Route117/scripts.pory"
waitmovement 0
# 308 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AnnaPostBattle, MSGBOX_AUTOCLOSE
# 309 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 310 "data/maps/Route117/scripts.pory"
end
# 311 "data/maps/Route117/scripts.pory"

# 312 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 313 "data/maps/Route117/scripts.pory"
	faceplayer
# 314 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 315 "data/maps/Route117/scripts.pory"
	release
# 316 "data/maps/Route117/scripts.pory"
	end
# 317 "data/maps/Route117/scripts.pory"

# 318 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 319 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 320 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 321 "data/maps/Route117/scripts.pory"
	release
# 322 "data/maps/Route117/scripts.pory"
	end
# 323 "data/maps/Route117/scripts.pory"

# 324 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 325 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 326 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 327 "data/maps/Route117/scripts.pory"
	end
# 328 "data/maps/Route117/scripts.pory"

# 329 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 330 "data/maps/Route117/scripts.pory"
	faceplayer
# 331 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 332 "data/maps/Route117/scripts.pory"
	release
# 333 "data/maps/Route117/scripts.pory"
	end
# 334 "data/maps/Route117/scripts.pory"

# 335 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 336 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 337 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 338 "data/maps/Route117/scripts.pory"
	release
# 339 "data/maps/Route117/scripts.pory"
	end
# 340 "data/maps/Route117/scripts.pory"

# 341 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 342 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 343 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 344 "data/maps/Route117/scripts.pory"
	end
# 345 "data/maps/Route117/scripts.pory"

# 346 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 347 "data/maps/Route117/scripts.pory"
	faceplayer
# 348 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 349 "data/maps/Route117/scripts.pory"
	end
# 350 "data/maps/Route117/scripts.pory"

# 351 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAisha::
# 352 "data/maps/Route117/scripts.pory"
lockall
# 353 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_BRANDI
# 354 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 355 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 356 "data/maps/Route117/scripts.pory"
waitmovement 0
# 357 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 358 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 359 "data/maps/Route117/scripts.pory"
waitmovement 0
# 360 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_BrandiIntro MSGBOX_AUTOCLOSE
# 361 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_AISHA
# 362 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 363 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 364 "data/maps/Route117/scripts.pory"
waitmovement 0
# 365 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 366 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 367 "data/maps/Route117/scripts.pory"
waitmovement 0
# 368 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AishaIntro, MSGBOX_AUTOCLOSE
# 369 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_BrandiAishaDoMultiBattle
# 370 "data/maps/Route117/scripts.pory"
releaseall
# 371 "data/maps/Route117/scripts.pory"
end
# 372 "data/maps/Route117/scripts.pory"

# 373 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAishaDoMultiBattle::
# 374 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 375 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_BRANDI, Route117_Text_BrandiDefeat, TRAINER_AISHA, Route117_Text_AishaDefeat, PARTNER_EMMIE
# 376 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 377 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_BrandiAishaVictory
# 378 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 379 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 380 "data/maps/Route117/scripts.pory"
waitstate
# 381 "data/maps/Route117/scripts.pory"

# 382 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAishaVictory::
# 383 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 384 "data/maps/Route117/scripts.pory"
waitmovement 0
# 385 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 386 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 387 "data/maps/Route117/scripts.pory"
waitmovement 0
# 388 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 389 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 390 "data/maps/Route117/scripts.pory"
end
# 391 "data/maps/Route117/scripts.pory"

# 392 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 393 "data/maps/Route117/scripts.pory"
	faceplayer
# 394 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 395 "data/maps/Route117/scripts.pory"
	end
# 396 "data/maps/Route117/scripts.pory"

# 397 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 398 "data/maps/Route117/scripts.pory"
	faceplayer
# 399 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 400 "data/maps/Route117/scripts.pory"
	end
# 401 "data/maps/Route117/scripts.pory"

# 402 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 403 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 404 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 405 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 406 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 407 "data/maps/Route117/scripts.pory"

# 408 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 409 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 410 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 411 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 412 "data/maps/Route117/scripts.pory"

# 413 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 414 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 415 "data/maps/Route117/scripts.pory"

# 416 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 417 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 418 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 419 "data/maps/Route117/scripts.pory"

# 420 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 421 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 422 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 423 "data/maps/Route117/scripts.pory"

# 424 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 425 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 426 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"
