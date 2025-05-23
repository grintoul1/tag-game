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
	call Route117_EventScript_TryMoveDayCareMan
# 24 "data/maps/Route117/scripts.pory"
	@ set flags for OW daycare mons
# 25 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 26 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 27 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 28 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 29 "data/maps/Route117/scripts.pory"
	case 2, Route117_EventScript_ShowDaycareMon1
# 30 "data/maps/Route117/scripts.pory"
	case 1, Route117_EventScript_ShowDaycareMon0
# 31 "data/maps/Route117/scripts.pory"
	end
# 32 "data/maps/Route117/scripts.pory"

# 33 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1:
# 34 "data/maps/Route117/scripts.pory"
	@ set pokemon movement type based on compatibility
# 35 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 36 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_INCOMPATIBLE, Route117_EventScript_DaycareMonIncompatible
# 37 "data/maps/Route117/scripts.pory"
	@ Don't do anything if PARENTS_LOW_COMPATIBILITY
# 38 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MED_COMPATIBILITY, Route117_EventScript_DaycareMonMedCompatibility
# 39 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MAX_COMPATIBILITY, Route117_EventScript_DaycareMonMaxCompatibility
# 40 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 41 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon0:
# 42 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
# 43 "data/maps/Route117/scripts.pory"
	end
# 44 "data/maps/Route117/scripts.pory"

# 45 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonIncompatible: @ mons never face each other
# 46 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 47 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
# 48 "data/maps/Route117/scripts.pory"
	return
# 49 "data/maps/Route117/scripts.pory"

# 50 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other
# 51 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 52 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
# 53 "data/maps/Route117/scripts.pory"
	return
# 54 "data/maps/Route117/scripts.pory"

# 55 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place
# 56 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 57 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 58 "data/maps/Route117/scripts.pory"
	return
# 59 "data/maps/Route117/scripts.pory"

# 60 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 61 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 62 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 63 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 64 "data/maps/Route117/scripts.pory"
	return
# 65 "data/maps/Route117/scripts.pory"

# 66 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 67 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 68 "data/maps/Route117/scripts.pory"
	end
# 69 "data/maps/Route117/scripts.pory"

# 70 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 71 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 72 "data/maps/Route117/scripts.pory"
	end
# 73 "data/maps/Route117/scripts.pory"

# 74 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 75 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 76 "data/maps/Route117/scripts.pory"
	end
# 77 "data/maps/Route117/scripts.pory"

# 78 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 79 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 80 "data/maps/Route117/scripts.pory"
	end
# 81 "data/maps/Route117/scripts.pory"

# 82 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 83 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 84 "data/maps/Route117/scripts.pory"
	end
# 85 "data/maps/Route117/scripts.pory"

# 86 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 87 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 88 "data/maps/Route117/scripts.pory"
	end
# 89 "data/maps/Route117/scripts.pory"

# 90 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
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
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 151 "data/maps/Route117/scripts.pory"
	release
# 152 "data/maps/Route117/scripts.pory"
	end
# 153 "data/maps/Route117/scripts.pory"

# 154 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 155 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 156 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 158 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 159 "data/maps/Route117/scripts.pory"
	release
# 160 "data/maps/Route117/scripts.pory"
	end
# 161 "data/maps/Route117/scripts.pory"

# 162 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 163 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 164 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 165 "data/maps/Route117/scripts.pory"
	end
# 166 "data/maps/Route117/scripts.pory"

# 167 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMaria::
# 168 "data/maps/Route117/scripts.pory"
lockall
# 169 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_DYLAN
# 170 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 171 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 172 "data/maps/Route117/scripts.pory"
waitmovement 0
# 173 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 174 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 175 "data/maps/Route117/scripts.pory"
waitmovement 0
# 176 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DylanIntro MSGBOX_AUTOCLOSE
# 177 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MARIA
# 178 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 179 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 180 "data/maps/Route117/scripts.pory"
waitmovement 0
# 181 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 182 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 183 "data/maps/Route117/scripts.pory"
waitmovement 0
# 184 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MariaIntro, MSGBOX_AUTOCLOSE
# 185 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_DylanMariaDoMultiBattle
# 186 "data/maps/Route117/scripts.pory"
releaseall
# 187 "data/maps/Route117/scripts.pory"
end
# 188 "data/maps/Route117/scripts.pory"

# 189 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMariaDoMultiBattle::
# 190 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 191 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_DYLAN_1, Route117_Text_DylanDefeat, TRAINER_MARIA_1, Route117_Text_MariaDefeat, PARTNER_EMMIE
# 192 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 193 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_DylanMariaVictory
# 194 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 195 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 196 "data/maps/Route117/scripts.pory"
waitstate
# 197 "data/maps/Route117/scripts.pory"

# 198 "data/maps/Route117/scripts.pory"
Route117_EventScript_DylanMariaVictory::
# 199 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 200 "data/maps/Route117/scripts.pory"
waitmovement 0
# 201 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DylanPostBattle, MSGBOX_AUTOCLOSE
# 202 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 203 "data/maps/Route117/scripts.pory"
waitmovement 0
# 204 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MariaPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 206 "data/maps/Route117/scripts.pory"
end
# 207 "data/maps/Route117/scripts.pory"

# 208 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 209 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 210 "data/maps/Route117/scripts.pory"
	release
# 211 "data/maps/Route117/scripts.pory"
	end
# 212 "data/maps/Route117/scripts.pory"

# 213 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 214 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 215 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 217 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 218 "data/maps/Route117/scripts.pory"
	release
# 219 "data/maps/Route117/scripts.pory"
	end
# 220 "data/maps/Route117/scripts.pory"

# 221 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerek::
# 222 "data/maps/Route117/scripts.pory"
lockall
# 223 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MELINA
# 224 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 225 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 226 "data/maps/Route117/scripts.pory"
waitmovement 0
# 227 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 228 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 229 "data/maps/Route117/scripts.pory"
waitmovement 0
# 230 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MelinaIntro MSGBOX_AUTOCLOSE
# 231 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_DEREK
# 232 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 233 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 234 "data/maps/Route117/scripts.pory"
waitmovement 0
# 235 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 236 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 237 "data/maps/Route117/scripts.pory"
waitmovement 0
# 238 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DerekIntro, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_MelinaDerekDoMultiBattle
# 240 "data/maps/Route117/scripts.pory"
releaseall
# 241 "data/maps/Route117/scripts.pory"
end
# 242 "data/maps/Route117/scripts.pory"

# 243 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerekDoMultiBattle::
# 244 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 245 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_MELINA, Route117_Text_MelinaDefeat, TRAINER_DEREK, Route117_Text_DerekDefeat, PARTNER_EMMIE
# 246 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 247 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_MelinaDerekVictory
# 248 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 249 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 250 "data/maps/Route117/scripts.pory"
waitstate
# 251 "data/maps/Route117/scripts.pory"

# 252 "data/maps/Route117/scripts.pory"
Route117_EventScript_MelinaDerekVictory::
# 253 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 254 "data/maps/Route117/scripts.pory"
waitmovement 0
# 255 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 257 "data/maps/Route117/scripts.pory"
waitmovement 0
# 258 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 260 "data/maps/Route117/scripts.pory"
end
# 261 "data/maps/Route117/scripts.pory"

# 262 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 263 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 264 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 265 "data/maps/Route117/scripts.pory"
	end
# 266 "data/maps/Route117/scripts.pory"

# 267 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 268 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 269 "data/maps/Route117/scripts.pory"
	release
# 270 "data/maps/Route117/scripts.pory"
	end
# 271 "data/maps/Route117/scripts.pory"

# 272 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 273 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 274 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 275 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 276 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 277 "data/maps/Route117/scripts.pory"
	release
# 278 "data/maps/Route117/scripts.pory"
	end
# 279 "data/maps/Route117/scripts.pory"

# 280 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 281 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 282 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 283 "data/maps/Route117/scripts.pory"
	end
# 284 "data/maps/Route117/scripts.pory"

# 285 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 286 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 287 "data/maps/Route117/scripts.pory"
	end
# 288 "data/maps/Route117/scripts.pory"

# 289 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMeg::
# 290 "data/maps/Route117/scripts.pory"
lockall
# 291 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_MEG
# 292 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 293 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 294 "data/maps/Route117/scripts.pory"
applymovement LOCALID_ANNA, Common_Movement_ExclamationMark
# 295 "data/maps/Route117/scripts.pory"
waitmovement 0
# 296 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 297 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 298 "data/maps/Route117/scripts.pory"
waitmovement 0
# 299 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AnnaIntro, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_AnnaMegDoMultiBattle
# 301 "data/maps/Route117/scripts.pory"
releaseall
# 302 "data/maps/Route117/scripts.pory"
end
# 303 "data/maps/Route117/scripts.pory"

# 304 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMegDoMultiBattle::
# 305 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 306 "data/maps/Route117/scripts.pory"
multi_2p_vs_1 TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaDefeat, PARTNER_EMMIE
# 307 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 308 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_AnnaMegVictory
# 309 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 310 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 311 "data/maps/Route117/scripts.pory"
waitstate
# 312 "data/maps/Route117/scripts.pory"

# 313 "data/maps/Route117/scripts.pory"
Route117_EventScript_AnnaMegVictory::
# 314 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 315 "data/maps/Route117/scripts.pory"
waitmovement 0
# 316 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AnnaPostBattle, MSGBOX_AUTOCLOSE
# 317 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 318 "data/maps/Route117/scripts.pory"
end
# 319 "data/maps/Route117/scripts.pory"

# 320 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 321 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 322 "data/maps/Route117/scripts.pory"
	release
# 323 "data/maps/Route117/scripts.pory"
	end
# 324 "data/maps/Route117/scripts.pory"

# 325 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 326 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 327 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 328 "data/maps/Route117/scripts.pory"
	release
# 329 "data/maps/Route117/scripts.pory"
	end
# 330 "data/maps/Route117/scripts.pory"

# 331 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 332 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 333 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 334 "data/maps/Route117/scripts.pory"
	end
# 335 "data/maps/Route117/scripts.pory"

# 336 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 337 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 338 "data/maps/Route117/scripts.pory"
	release
# 339 "data/maps/Route117/scripts.pory"
	end
# 340 "data/maps/Route117/scripts.pory"

# 341 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 342 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 343 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 344 "data/maps/Route117/scripts.pory"
	release
# 345 "data/maps/Route117/scripts.pory"
	end
# 346 "data/maps/Route117/scripts.pory"

# 347 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 348 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 349 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 350 "data/maps/Route117/scripts.pory"
	end
# 351 "data/maps/Route117/scripts.pory"

# 352 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 353 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 354 "data/maps/Route117/scripts.pory"
	end
# 355 "data/maps/Route117/scripts.pory"

# 356 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAisha::
# 357 "data/maps/Route117/scripts.pory"
lockall
# 358 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_BRANDI
# 359 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 360 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 361 "data/maps/Route117/scripts.pory"
waitmovement 0
# 362 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 363 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 364 "data/maps/Route117/scripts.pory"
waitmovement 0
# 365 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_BrandiIntro MSGBOX_AUTOCLOSE
# 366 "data/maps/Route117/scripts.pory"
setvar VAR_0x8008, LOCALID_AISHA
# 367 "data/maps/Route117/scripts.pory"
playse SE_PIN
# 368 "data/maps/Route117/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 369 "data/maps/Route117/scripts.pory"
waitmovement 0
# 370 "data/maps/Route117/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 371 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 372 "data/maps/Route117/scripts.pory"
waitmovement 0
# 373 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AishaIntro, MSGBOX_AUTOCLOSE
# 374 "data/maps/Route117/scripts.pory"
goto Route117_EventScript_BrandiAishaDoMultiBattle
# 375 "data/maps/Route117/scripts.pory"
releaseall
# 376 "data/maps/Route117/scripts.pory"
end
# 377 "data/maps/Route117/scripts.pory"

# 378 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAishaDoMultiBattle::
# 379 "data/maps/Route117/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 380 "data/maps/Route117/scripts.pory"
multi_2p_vs_2 TRAINER_BRANDI, Route117_Text_BrandiDefeat, TRAINER_AISHA, Route117_Text_AishaDefeat, PARTNER_EMMIE
# 381 "data/maps/Route117/scripts.pory"
switch VAR_RESULT
# 382 "data/maps/Route117/scripts.pory"
case 1, Route117_EventScript_BrandiAishaVictory
# 383 "data/maps/Route117/scripts.pory"
fadescreen FADE_TO_BLACK
# 384 "data/maps/Route117/scripts.pory"
special SetCB2WhiteOut
# 385 "data/maps/Route117/scripts.pory"
waitstate
# 386 "data/maps/Route117/scripts.pory"

# 387 "data/maps/Route117/scripts.pory"
Route117_EventScript_BrandiAishaVictory::
# 388 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 389 "data/maps/Route117/scripts.pory"
waitmovement 0
# 390 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 391 "data/maps/Route117/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 392 "data/maps/Route117/scripts.pory"
waitmovement 0
# 393 "data/maps/Route117/scripts.pory"
msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 394 "data/maps/Route117/scripts.pory"
addvar VAR_ROUTE117_STATE, 1
# 395 "data/maps/Route117/scripts.pory"
end
# 396 "data/maps/Route117/scripts.pory"

# 397 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 398 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 399 "data/maps/Route117/scripts.pory"
	end
# 400 "data/maps/Route117/scripts.pory"

# 401 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 402 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 403 "data/maps/Route117/scripts.pory"
	end
# 404 "data/maps/Route117/scripts.pory"

# 405 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 406 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 407 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 408 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 409 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 410 "data/maps/Route117/scripts.pory"

# 411 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 412 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 413 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 414 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 415 "data/maps/Route117/scripts.pory"

# 416 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 417 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 418 "data/maps/Route117/scripts.pory"

# 419 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 420 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 421 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 422 "data/maps/Route117/scripts.pory"

# 423 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 424 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 425 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 426 "data/maps/Route117/scripts.pory"

# 427 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 428 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 429 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"
