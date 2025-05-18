# 1 "data/maps/Route113/scripts.pory"

# 2 "data/maps/Route113/scripts.pory"
.set LOCALID_LAO, 5
# 3 "data/maps/Route113/scripts.pory"
.set LOCALID_LUNG, 6
# 4 "data/maps/Route113/scripts.pory"
.set LOCALID_TORI, 7
# 5 "data/maps/Route113/scripts.pory"
.set LOCALID_TIA, 8
# 6 "data/maps/Route113/scripts.pory"
.set LOCALID_COBY, 11
# 7 "data/maps/Route113/scripts.pory"
.set LOCALID_SOPHIE, 10
# 8 "data/maps/Route113/scripts.pory"

# 9 "data/maps/Route113/scripts.pory"
Route113_MapScripts::
# 10 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route113_OnResume
# 11 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_OnTransition
# 12 "data/maps/Route113/scripts.pory"
	.byte 0
# 13 "data/maps/Route113/scripts.pory"

# 14 "data/maps/Route113/scripts.pory"
Route113_OnResume:
# 15 "data/maps/Route113/scripts.pory"
	setstepcallback STEP_CB_ASH
# 16 "data/maps/Route113/scripts.pory"
	end
# 17 "data/maps/Route113/scripts.pory"

# 18 "data/maps/Route113/scripts.pory"
Route113_OnTransition:
# 19 "data/maps/Route113/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 20 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_CheckSetAshWeather
# 21 "data/maps/Route113/scripts.pory"
	end
# 22 "data/maps/Route113/scripts.pory"

# 23 "data/maps/Route113/scripts.pory"
Route113_EventScript_CheckSetAshWeather::
# 24 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 25 "data/maps/Route113/scripts.pory"
	goto_if_lt VAR_TEMP_0, 19, Route113_EventScript_DontSetAshWeather
# 26 "data/maps/Route113/scripts.pory"
	goto_if_gt VAR_TEMP_0, 84, Route113_EventScript_DontSetAshWeather
# 27 "data/maps/Route113/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 28 "data/maps/Route113/scripts.pory"
	return
# 29 "data/maps/Route113/scripts.pory"

# 30 "data/maps/Route113/scripts.pory"
Route113_EventScript_DontSetAshWeather::
# 31 "data/maps/Route113/scripts.pory"
	return
# 32 "data/maps/Route113/scripts.pory"

# 33 "data/maps/Route113/scripts.pory"
Route113_EventScript_Gentleman::
# 34 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
# 35 "data/maps/Route113/scripts.pory"
	end
# 36 "data/maps/Route113/scripts.pory"

# 37 "data/maps/Route113/scripts.pory"
Route113_EventScript_NinjaBoy::
# 38 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
# 39 "data/maps/Route113/scripts.pory"
	end
# 40 "data/maps/Route113/scripts.pory"

# 41 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSign111::
# 42 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
# 43 "data/maps/Route113/scripts.pory"
	end
# 44 "data/maps/Route113/scripts.pory"

# 45 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSignFallarbor::
# 46 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
# 47 "data/maps/Route113/scripts.pory"
	end
# 48 "data/maps/Route113/scripts.pory"

# 49 "data/maps/Route113/scripts.pory"
Route113_EventScript_GlassWorkshopSign::
# 50 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
# 51 "data/maps/Route113/scripts.pory"
	end
# 52 "data/maps/Route113/scripts.pory"

# 53 "data/maps/Route113/scripts.pory"
Route113_EventScript_TrainerTipsRegisterKeyItems::
# 54 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
# 55 "data/maps/Route113/scripts.pory"
	end
# 56 "data/maps/Route113/scripts.pory"

# 57 "data/maps/Route113/scripts.pory"
Route113_EventScript_Jaylen::
# 58 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
# 59 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route113/scripts.pory"
	end
# 61 "data/maps/Route113/scripts.pory"

# 62 "data/maps/Route113/scripts.pory"
Route113_EventScript_Dillon::
# 63 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
# 64 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route113/scripts.pory"
	end
# 66 "data/maps/Route113/scripts.pory"

# 67 "data/maps/Route113/scripts.pory"
Route113_EventScript_Madeline::
# 68 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_RegisterMadeline
# 69 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 70 "data/maps/Route113/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchMadeline
# 71 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
# 72 "data/maps/Route113/scripts.pory"
	release
# 73 "data/maps/Route113/scripts.pory"
	end
# 74 "data/maps/Route113/scripts.pory"

# 75 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterMadeline::
# 76 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 77 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
# 79 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_MADELINE_1
# 80 "data/maps/Route113/scripts.pory"
	release
# 81 "data/maps/Route113/scripts.pory"
	end
# 82 "data/maps/Route113/scripts.pory"

# 83 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchMadeline::
# 84 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
# 85 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route113/scripts.pory"
	end
# 87 "data/maps/Route113/scripts.pory"

# 88 "data/maps/Route113/scripts.pory"
Route113_EventScript_LaoLung::
# 89 "data/maps/Route113/scripts.pory"
lockall
# 90 "data/maps/Route113/scripts.pory"
setvar VAR_0x8008, LOCALID_LAO
# 91 "data/maps/Route113/scripts.pory"
playse SE_PIN
# 92 "data/maps/Route113/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 93 "data/maps/Route113/scripts.pory"
waitmovement 0
# 94 "data/maps/Route113/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 95 "data/maps/Route113/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 96 "data/maps/Route113/scripts.pory"
waitmovement 0
# 97 "data/maps/Route113/scripts.pory"
msgbox Route113_Text_LaoIntro MSGBOX_AUTOCLOSE
# 98 "data/maps/Route113/scripts.pory"
setvar VAR_0x8008, LOCALID_LUNG
# 99 "data/maps/Route113/scripts.pory"
playse SE_PIN
# 100 "data/maps/Route113/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 101 "data/maps/Route113/scripts.pory"
waitmovement 0
# 102 "data/maps/Route113/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 103 "data/maps/Route113/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 104 "data/maps/Route113/scripts.pory"
waitmovement 0
# 105 "data/maps/Route113/scripts.pory"
msgbox Route113_Text_LungIntro, MSGBOX_AUTOCLOSE
# 106 "data/maps/Route113/scripts.pory"
goto Route113_EventScript_LaoLungDoMultiBattle
# 107 "data/maps/Route113/scripts.pory"
releaseall
# 108 "data/maps/Route113/scripts.pory"
end
# 109 "data/maps/Route113/scripts.pory"

# 110 "data/maps/Route113/scripts.pory"
Route113_EventScript_LaoLungDoMultiBattle::
# 111 "data/maps/Route113/scripts.pory"
playbgm MUS_ROUTE113, TRUE
# 112 "data/maps/Route113/scripts.pory"
multi_2p_vs_2 TRAINER_LAO_1, Route113_Text_LaoDefeat, TRAINER_LUNG, Route113_Text_LungDefeat, PARTNER_EMMIE
# 113 "data/maps/Route113/scripts.pory"
switch VAR_RESULT
# 114 "data/maps/Route113/scripts.pory"
case 1, Route113_EventScript_LaoLungVictory
# 115 "data/maps/Route113/scripts.pory"
fadescreen FADE_TO_BLACK
# 116 "data/maps/Route113/scripts.pory"
special SetCB2WhiteOut
# 117 "data/maps/Route113/scripts.pory"
waitstate
# 118 "data/maps/Route113/scripts.pory"

# 119 "data/maps/Route113/scripts.pory"
Route113_EventScript_LaoLungVictory::
# 120 "data/maps/Route113/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 121 "data/maps/Route113/scripts.pory"
waitmovement 0
# 122 "data/maps/Route113/scripts.pory"
msgbox Route113_Text_LaoPostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/Route113/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 124 "data/maps/Route113/scripts.pory"
waitmovement 0
# 125 "data/maps/Route113/scripts.pory"
msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route113/scripts.pory"
addvar VAR_ROUTE113_STATE, 1
# 127 "data/maps/Route113/scripts.pory"
end
# 128 "data/maps/Route113/scripts.pory"

# 129 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lao::
# 130 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
# 131 "data/maps/Route113/scripts.pory"
	release
# 132 "data/maps/Route113/scripts.pory"
	end
# 133 "data/maps/Route113/scripts.pory"

# 134 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterLao::
# 135 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 136 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
# 138 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_LAO_1
# 139 "data/maps/Route113/scripts.pory"
	release
# 140 "data/maps/Route113/scripts.pory"
	end
# 141 "data/maps/Route113/scripts.pory"

# 142 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchLao::
# 143 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
# 144 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
# 145 "data/maps/Route113/scripts.pory"
	end
# 146 "data/maps/Route113/scripts.pory"

# 147 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lung::
# 148 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route113/scripts.pory"
	end
# 150 "data/maps/Route113/scripts.pory"

# 151 "data/maps/Route113/scripts.pory"
Route113_EventScript_ToriTia::
# 152 "data/maps/Route113/scripts.pory"
lockall
# 153 "data/maps/Route113/scripts.pory"
setvar VAR_0x8008, LOCALID_TIA
# 154 "data/maps/Route113/scripts.pory"
playse SE_PIN
# 155 "data/maps/Route113/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 156 "data/maps/Route113/scripts.pory"
waitmovement 0
# 157 "data/maps/Route113/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 158 "data/maps/Route113/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 159 "data/maps/Route113/scripts.pory"
waitmovement 0
# 160 "data/maps/Route113/scripts.pory"
msgbox Route113_Text_TiaIntro, MSGBOX_AUTOCLOSE
# 161 "data/maps/Route113/scripts.pory"
goto Route113_EventScript_ToriTiaDoMultiBattle
# 162 "data/maps/Route113/scripts.pory"
releaseall
# 163 "data/maps/Route113/scripts.pory"
end
# 164 "data/maps/Route113/scripts.pory"

# 165 "data/maps/Route113/scripts.pory"
Route113_EventScript_ToriTiaDoMultiBattle::
# 166 "data/maps/Route113/scripts.pory"
playbgm MUS_ROUTE113, TRUE
# 167 "data/maps/Route113/scripts.pory"
multi_2p_vs_1 TRAINER_TORI_AND_TIA, Route113_Text_ToriDefeat, PARTNER_EMMIE
# 168 "data/maps/Route113/scripts.pory"
switch VAR_RESULT
# 169 "data/maps/Route113/scripts.pory"
case 1, Route113_EventScript_ToriTiaVictory
# 170 "data/maps/Route113/scripts.pory"
fadescreen FADE_TO_BLACK
# 171 "data/maps/Route113/scripts.pory"
special SetCB2WhiteOut
# 172 "data/maps/Route113/scripts.pory"
waitstate
# 173 "data/maps/Route113/scripts.pory"

# 174 "data/maps/Route113/scripts.pory"
Route113_EventScript_ToriTiaVictory::
# 175 "data/maps/Route113/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 176 "data/maps/Route113/scripts.pory"
waitmovement 0
# 177 "data/maps/Route113/scripts.pory"
msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route113/scripts.pory"
addvar VAR_ROUTE113_STATE, 1
# 179 "data/maps/Route113/scripts.pory"
end
# 180 "data/maps/Route113/scripts.pory"

# 181 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tori::
# 182 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
# 183 "data/maps/Route113/scripts.pory"
	end
# 184 "data/maps/Route113/scripts.pory"

# 185 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tia::
# 186 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route113/scripts.pory"
	end
# 188 "data/maps/Route113/scripts.pory"

# 189 "data/maps/Route113/scripts.pory"
Route113_EventScript_Sophie::
# 190 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
# 191 "data/maps/Route113/scripts.pory"
	end
# 192 "data/maps/Route113/scripts.pory"

# 193 "data/maps/Route113/scripts.pory"
Route113_EventScript_CobySophie::
# 194 "data/maps/Route113/scripts.pory"
lockall
# 195 "data/maps/Route113/scripts.pory"
setvar VAR_0x8008, LOCALID_COBY
# 196 "data/maps/Route113/scripts.pory"
playse SE_PIN
# 197 "data/maps/Route113/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 198 "data/maps/Route113/scripts.pory"
waitmovement 0
# 199 "data/maps/Route113/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 200 "data/maps/Route113/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 201 "data/maps/Route113/scripts.pory"
waitmovement 0
# 202 "data/maps/Route113/scripts.pory"
msgbox Route113_Text_CobyIntro MSGBOX_AUTOCLOSE
# 203 "data/maps/Route113/scripts.pory"
setvar VAR_0x8008, LOCALID_SOPHIE
# 204 "data/maps/Route113/scripts.pory"
playse SE_PIN
# 205 "data/maps/Route113/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 206 "data/maps/Route113/scripts.pory"
waitmovement 0
# 207 "data/maps/Route113/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 208 "data/maps/Route113/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 209 "data/maps/Route113/scripts.pory"
waitmovement 0
# 210 "data/maps/Route113/scripts.pory"
msgbox Route113_Text_SophieIntro, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route113/scripts.pory"
goto Route113_EventScript_CobySophieDoMultiBattle
# 212 "data/maps/Route113/scripts.pory"
releaseall
# 213 "data/maps/Route113/scripts.pory"
end
# 214 "data/maps/Route113/scripts.pory"

# 215 "data/maps/Route113/scripts.pory"
Route113_EventScript_CobySophieDoMultiBattle::
# 216 "data/maps/Route113/scripts.pory"
playbgm MUS_ROUTE113, TRUE
# 217 "data/maps/Route113/scripts.pory"
multi_2p_vs_2 TRAINER_COBY, Route113_Text_CobyDefeat, TRAINER_SOPHIE, Route113_Text_SophieDefeat, PARTNER_EMMIE
# 218 "data/maps/Route113/scripts.pory"
switch VAR_RESULT
# 219 "data/maps/Route113/scripts.pory"
case 1, Route113_EventScript_CobySophieVictory
# 220 "data/maps/Route113/scripts.pory"
fadescreen FADE_TO_BLACK
# 221 "data/maps/Route113/scripts.pory"
special SetCB2WhiteOut
# 222 "data/maps/Route113/scripts.pory"
waitstate
# 223 "data/maps/Route113/scripts.pory"

# 224 "data/maps/Route113/scripts.pory"
Route113_EventScript_CobySophieVictory::
# 225 "data/maps/Route113/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 226 "data/maps/Route113/scripts.pory"
waitmovement 0
# 227 "data/maps/Route113/scripts.pory"
msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/Route113/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 229 "data/maps/Route113/scripts.pory"
waitmovement 0
# 230 "data/maps/Route113/scripts.pory"
msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/Route113/scripts.pory"
addvar VAR_ROUTE113_STATE, 1
# 232 "data/maps/Route113/scripts.pory"
end
# 233 "data/maps/Route113/scripts.pory"

# 234 "data/maps/Route113/scripts.pory"
Route113_EventScript_Coby::
# 235 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/Route113/scripts.pory"
	end
# 237 "data/maps/Route113/scripts.pory"

# 238 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lawrence::
# 239 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
# 240 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route113/scripts.pory"
	end
# 242 "data/maps/Route113/scripts.pory"

# 243 "data/maps/Route113/scripts.pory"
Route113_EventScript_Wyatt::
# 244 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
# 245 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route113/scripts.pory"
	end
# 247 "data/maps/Route113/scripts.pory"

# 248 "data/maps/Route113/scripts.pory"
Route113_Text_AshCanBeFashionedIntoGlass:
# 249 "data/maps/Route113/scripts.pory"
	.string "Wahahaha! Today's technology is a\n"
# 250 "data/maps/Route113/scripts.pory"
	.string "wondrous thing!\p"
# 251 "data/maps/Route113/scripts.pory"
	.string "Take this volcanic ash here.\n"
# 252 "data/maps/Route113/scripts.pory"
	.string "It can be fashioned into glass.$"
# 253 "data/maps/Route113/scripts.pory"

# 254 "data/maps/Route113/scripts.pory"
Route113_Text_FunWalkingThroughAsh:
# 255 "data/maps/Route113/scripts.pory"
	.string "It's fun walking through the volcano's\n"
# 256 "data/maps/Route113/scripts.pory"
	.string "ashes on the ground and grass.\p"
# 257 "data/maps/Route113/scripts.pory"
	.string "You can see where you walked--it's\n"
# 258 "data/maps/Route113/scripts.pory"
	.string "really neat!$"
# 259 "data/maps/Route113/scripts.pory"

# 260 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSign111:
# 261 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
# 262 "data/maps/Route113/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 111$"
# 263 "data/maps/Route113/scripts.pory"

# 264 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSignFallarbor:
# 265 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
# 266 "data/maps/Route113/scripts.pory"
	.string "{LEFT_ARROW} FALLARBOR TOWN$"
# 267 "data/maps/Route113/scripts.pory"

# 268 "data/maps/Route113/scripts.pory"
Route113_Text_TrainerTipsRegisterKeyItems:
# 269 "data/maps/Route113/scripts.pory"
	.string "TRAINER TIPS\p"
# 270 "data/maps/Route113/scripts.pory"
	.string "You may register one of the KEY ITEMS\n"
# 271 "data/maps/Route113/scripts.pory"
	.string "in your BAG as SELECT.\p"
# 272 "data/maps/Route113/scripts.pory"
	.string "Simply press SELECT to use\n"
# 273 "data/maps/Route113/scripts.pory"
	.string "the registered item conveniently.$"
# 274 "data/maps/Route113/scripts.pory"

# 275 "data/maps/Route113/scripts.pory"
Route113_Text_GlassWorkshopSign:
# 276 "data/maps/Route113/scripts.pory"
	.string "GLASS WORKSHOP\n"
# 277 "data/maps/Route113/scripts.pory"
	.string "“Turning Volcanic Ash into Glass Items”$"
