# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MAN, 3
# 3 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_0, 25
# 4 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_1, 26
# 5 "data/maps/Route117/scripts.pory"
.set LOCALID_ANNA, 19
# 6 "data/maps/Route117/scripts.pory"
.set LOCALID_LYDIA, 9
# 7 "data/maps/Route117/scripts.pory"
.set LOCALID_ISAAC, 10
# 8 "data/maps/Route117/scripts.pory"
.set LOCALID_DYLAN, 8
# 9 "data/maps/Route117/scripts.pory"
.set LOCALID_MARIA, 17
# 10 "data/maps/Route117/scripts.pory"
.set LOCALID_MELINA, 24
# 11 "data/maps/Route117/scripts.pory"
.set LOCALID_DEREK, 17
# 12 "data/maps/Route117/scripts.pory"
.set LOCALID_BRANDI, 22
# 13 "data/maps/Route117/scripts.pory"
.set LOCALID_AISHA, 23
# 14 "data/maps/Route117/scripts.pory"

# 15 "data/maps/Route117/scripts.pory"

# 16 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 17 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 18 "data/maps/Route117/scripts.pory"
	.byte 0
# 19 "data/maps/Route117/scripts.pory"

# 20 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 21 "data/maps/Route117/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
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
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 91 "data/maps/Route117/scripts.pory"
	release
# 92 "data/maps/Route117/scripts.pory"
	end
# 93 "data/maps/Route117/scripts.pory"

# 94 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 95 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 96 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 98 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 99 "data/maps/Route117/scripts.pory"
	release
# 100 "data/maps/Route117/scripts.pory"
	end
# 101 "data/maps/Route117/scripts.pory"

# 102 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 103 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 104 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route117/scripts.pory"
	end
# 106 "data/maps/Route117/scripts.pory"

# 107 "data/maps/Route117/scripts.pory"
Route117_EventScript_LydiaIsaac::
# 108 "data/maps/Route117/scripts.pory"
lockall
# 109 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_LYDIA
# 110 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 111 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 112 "data/maps/Route117/scripts.pory"
waitmovement 0
# 113 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 114 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 115 "data/maps/Route117/scripts.pory"
waitmovement 0
# 116 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_LydiaIntro MSGBOX_AUTOCLOSE
# 117 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_ISAAC
# 118 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 119 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 120 "data/maps/Route117/scripts.pory"
waitmovement 0
# 121 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 122 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 123 "data/maps/Route117/scripts.pory"
waitmovement 0
# 124 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_IsaacIntro MSGBOX_AUTOCLOSE
# 125 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_LydiaIsaacDoMultiBattle
# 126 "data/maps/Route117/scripts.pory"
releaseall
# 127 "data/maps/Route117/scripts.pory"
end
# 128 "data/maps/Route117/scripts.pory"

# 129 "data/maps/Route117/scripts.pory"
Route117_EventScript_LydiaIsaacDoMultiBattle::
# 130 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 131 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_LYDIA_1, Route117_Text_LydiaDefeat, TRAINER_ISAAC_1, Route117_Text_IsaacDefeat, PARTNER_EMMIE
# 132 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 133 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_LydiaIsaacVictory
# 134 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 135 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 136 "data/maps/Route117/scripts.pory"
waitstate
# 137 "data/maps/Route117/scripts.pory"

# 138 "data/maps/Route117/scripts.pory"
Route117_EventScript_LydiaIsaacVictory::
# 139 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 140 "data/maps/Route117/scripts.pory"
waitmovement 0
# 141 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_LydiaPostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 143 "data/maps/Route117/scripts.pory"
waitmovement 0
# 144 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_IsaacPostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 146 "data/maps/Route117/scripts.pory"
end
# 147 "data/maps/Route117/scripts.pory"

# 148 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 149 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 150 "data/maps/Route117/scripts.pory"
	release
# 151 "data/maps/Route117/scripts.pory"
	end
# 152 "data/maps/Route117/scripts.pory"

# 153 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 154 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 155 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 157 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 158 "data/maps/Route117/scripts.pory"
	release
# 159 "data/maps/Route117/scripts.pory"
	end
# 160 "data/maps/Route117/scripts.pory"

# 161 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 162 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 163 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 164 "data/maps/Route117/scripts.pory"
	end
# 165 "data/maps/Route117/scripts.pory"

# 166 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMaria::
# 167 "data/maps/Route117/scripts.pory"
lockall
# 168 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_DYLAN
# 169 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 170 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 171 "data/maps/Route117/scripts.pory"
waitmovement 0
# 172 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 173 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 174 "data/maps/Route117/scripts.pory"
waitmovement 0
# 175 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DylanIntro MSGBOX_AUTOCLOSE
# 176 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MARIA
# 177 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 178 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 179 "data/maps/Route117/scripts.pory"
waitmovement 0
# 180 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 181 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 182 "data/maps/Route117/scripts.pory"
waitmovement 0
# 183 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MariaIntro MSGBOX_AUTOCLOSE
# 184 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_DylanMariaDoMultiBattle
# 185 "data/maps/Route117/scripts.pory"
releaseall
# 186 "data/maps/Route117/scripts.pory"
end
# 187 "data/maps/Route117/scripts.pory"

# 188 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMariaDoMultiBattle::
# 189 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 190 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_DYLAN_1, Route117_Text_DylanDefeat, TRAINER_MARIA_1, Route117_Text_MariaDefeat, PARTNER_EMMIE
# 191 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 192 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_DylanMariaVictory
# 193 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 194 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 195 "data/maps/Route117/scripts.pory"
waitstate
# 196 "data/maps/Route117/scripts.pory"

# 197 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMariaVictory::
# 198 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 199 "data/maps/Route117/scripts.pory"
waitmovement 0
# 200 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DylanPostBattle, MSGBOX_AUTOCLOSE
# 201 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 202 "data/maps/Route117/scripts.pory"
waitmovement 0
# 203 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MariaPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 205 "data/maps/Route117/scripts.pory"
end
# 206 "data/maps/Route117/scripts.pory"

# 207 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 208 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 209 "data/maps/Route117/scripts.pory"
	release
# 210 "data/maps/Route117/scripts.pory"
	end
# 211 "data/maps/Route117/scripts.pory"

# 212 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 213 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 214 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 216 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 217 "data/maps/Route117/scripts.pory"
	release
# 218 "data/maps/Route117/scripts.pory"
	end
# 219 "data/maps/Route117/scripts.pory"

# 220 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerek::
# 221 "data/maps/Route117/scripts.pory"
lockall
# 222 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MELINA
# 223 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 224 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 225 "data/maps/Route117/scripts.pory"
waitmovement 0
# 226 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 227 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 228 "data/maps/Route117/scripts.pory"
waitmovement 0
# 229 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MelinaIntro MSGBOX_AUTOCLOSE
# 230 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_DEREK
# 231 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 232 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 233 "data/maps/Route117/scripts.pory"
waitmovement 0
# 234 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 235 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 236 "data/maps/Route117/scripts.pory"
waitmovement 0
# 237 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DerekIntro MSGBOX_AUTOCLOSE
# 238 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_MelinaDerekDoMultiBattle
# 239 "data/maps/Route117/scripts.pory"
releaseall
# 240 "data/maps/Route117/scripts.pory"
end
# 241 "data/maps/Route117/scripts.pory"

# 242 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerekDoMultiBattle::
# 243 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 244 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_MELINA, Route117_Text_MelinaDefeat, TRAINER_DEREK, Route117_Text_DerekDefeat, PARTNER_EMMIE
# 245 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 246 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_MelinaDerekVictory
# 247 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 248 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 249 "data/maps/Route117/scripts.pory"
waitstate
# 250 "data/maps/Route117/scripts.pory"

# 251 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerekVictory::
# 252 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 253 "data/maps/Route117/scripts.pory"
waitmovement 0
# 254 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 256 "data/maps/Route117/scripts.pory"
waitmovement 0
# 257 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 259 "data/maps/Route117/scripts.pory"
end
# 260 "data/maps/Route117/scripts.pory"

# 261 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 262 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 263 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 264 "data/maps/Route117/scripts.pory"
	end
# 265 "data/maps/Route117/scripts.pory"

# 266 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 267 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 268 "data/maps/Route117/scripts.pory"
	release
# 269 "data/maps/Route117/scripts.pory"
	end
# 270 "data/maps/Route117/scripts.pory"

# 271 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 272 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 273 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 274 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 275 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 276 "data/maps/Route117/scripts.pory"
	release
# 277 "data/maps/Route117/scripts.pory"
	end
# 278 "data/maps/Route117/scripts.pory"

# 279 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 280 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 281 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 282 "data/maps/Route117/scripts.pory"
	end
# 283 "data/maps/Route117/scripts.pory"

# 284 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 285 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/Route117/scripts.pory"
	end
# 287 "data/maps/Route117/scripts.pory"

# 288 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMeg::
# 289 "data/maps/Route117/scripts.pory"
lockall
# 290 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_ANNA
# 291 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 292 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 293 "data/maps/Route117/scripts.pory"
waitmovement 0
# 294 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 295 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 296 "data/maps/Route117/scripts.pory"
waitmovement 0
# 297 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AnnaIntro MSGBOX_AUTOCLOSE
# 298 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_AnnaMegDoMultiBattle
# 299 "data/maps/Route117/scripts.pory"
releaseall
# 300 "data/maps/Route117/scripts.pory"
end
# 301 "data/maps/Route117/scripts.pory"

# 302 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMegDoMultiBattle::
# 303 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 304 "data/maps/Route117/scripts.pory"
multi_2p_vs_1 TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaDefeat, PARTNER_EMMIE
# 305 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 306 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_AnnaMegVictory
# 307 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 308 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 309 "data/maps/Route117/scripts.pory"
waitstate
# 310 "data/maps/Route117/scripts.pory"

# 311 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMegVictory::
# 312 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 313 "data/maps/Route117/scripts.pory"
waitmovement 0
# 314 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AnnaPostBattle, MSGBOX_AUTOCLOSE
# 315 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 316 "data/maps/Route117/scripts.pory"
end
# 317 "data/maps/Route117/scripts.pory"

# 318 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 319 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 320 "data/maps/Route117/scripts.pory"
	release
# 321 "data/maps/Route117/scripts.pory"
	end
# 322 "data/maps/Route117/scripts.pory"

# 323 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 324 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 325 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 326 "data/maps/Route117/scripts.pory"
	release
# 327 "data/maps/Route117/scripts.pory"
	end
# 328 "data/maps/Route117/scripts.pory"

# 329 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 330 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 331 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 332 "data/maps/Route117/scripts.pory"
	end
# 333 "data/maps/Route117/scripts.pory"

# 334 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 335 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 336 "data/maps/Route117/scripts.pory"
	release
# 337 "data/maps/Route117/scripts.pory"
	end
# 338 "data/maps/Route117/scripts.pory"

# 339 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 340 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 341 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 342 "data/maps/Route117/scripts.pory"
	release
# 343 "data/maps/Route117/scripts.pory"
	end
# 344 "data/maps/Route117/scripts.pory"

# 345 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 346 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 347 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 348 "data/maps/Route117/scripts.pory"
	end
# 349 "data/maps/Route117/scripts.pory"

# 350 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 351 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 352 "data/maps/Route117/scripts.pory"
	end
# 353 "data/maps/Route117/scripts.pory"

# 354 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAisha::
# 355 "data/maps/Route117/scripts.pory"
lockall
# 356 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_BRANDI
# 357 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 358 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 359 "data/maps/Route117/scripts.pory"
waitmovement 0
# 360 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 361 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 362 "data/maps/Route117/scripts.pory"
waitmovement 0
# 363 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_BrandiIntro MSGBOX_AUTOCLOSE
# 364 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_AISHA
# 365 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 366 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 367 "data/maps/Route117/scripts.pory"
waitmovement 0
# 368 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 369 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 370 "data/maps/Route117/scripts.pory"
waitmovement 0
# 371 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AishaIntro MSGBOX_AUTOCLOSE
# 372 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_BrandiAishaDoMultiBattle
# 373 "data/maps/Route117/scripts.pory"
releaseall
# 374 "data/maps/Route117/scripts.pory"
end
# 375 "data/maps/Route117/scripts.pory"

# 376 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAishaDoMultiBattle::
# 377 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 378 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_BRANDI, Route117_Text_BrandiDefeat, TRAINER_AISHA, Route117_Text_AishaDefeat, PARTNER_EMMIE
# 379 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 380 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_BrandiAishaVictory
# 381 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 382 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 383 "data/maps/Route117/scripts.pory"
waitstate
# 384 "data/maps/Route117/scripts.pory"

# 385 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAishaVictory::
# 386 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 387 "data/maps/Route117/scripts.pory"
waitmovement 0
# 388 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 389 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 390 "data/maps/Route117/scripts.pory"
waitmovement 0
# 391 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 392 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 393 "data/maps/Route117/scripts.pory"
end
# 394 "data/maps/Route117/scripts.pory"

# 395 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 396 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 397 "data/maps/Route117/scripts.pory"
	end
# 398 "data/maps/Route117/scripts.pory"

# 399 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 400 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 401 "data/maps/Route117/scripts.pory"
	end
# 402 "data/maps/Route117/scripts.pory"

# 403 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 404 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 405 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 406 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 407 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 408 "data/maps/Route117/scripts.pory"

# 409 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 410 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 411 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 412 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 413 "data/maps/Route117/scripts.pory"

# 414 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 415 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 416 "data/maps/Route117/scripts.pory"

# 417 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 418 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 419 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 420 "data/maps/Route117/scripts.pory"

# 421 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 422 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 423 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 424 "data/maps/Route117/scripts.pory"

# 425 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 426 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 427 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"
