# 1 "data/maps/Route115/scripts.pory"

# 2 "data/maps/Route115/scripts.pory"
.set LOCALID_ALIX, 20
# 3 "data/maps/Route115/scripts.pory"
.set LOCALID_NOB, 3
# 4 "data/maps/Route115/scripts.pory"
.set LOCALID_HECTOR, 9
# 5 "data/maps/Route115/scripts.pory"
.set LOCALID_MARLENE, 21
# 6 "data/maps/Route115/scripts.pory"
.set LOCALID_CYNDY, 7
# 7 "data/maps/Route115/scripts.pory"
.set LOCALID_HELENE, 19
# 8 "data/maps/Route115/scripts.pory"
.set LOCALID_JAIDEN, 18
# 9 "data/maps/Route115/scripts.pory"
.set LOCALID_KYRA, 17
# 10 "data/maps/Route115/scripts.pory"
.set LOCALID_KOICHI, 8
# 11 "data/maps/Route115/scripts.pory"
.set LOCALID_TIMOTHY, 2
# 12 "data/maps/Route115/scripts.pory"

# 13 "data/maps/Route115/scripts.pory"
Route115_MapScripts::
# 14 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route115_OnLoad
# 15 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route115_OnTransition
# 16 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route115_OnFrame
# 17 "data/maps/Route115/scripts.pory"
	.byte 0
# 18 "data/maps/Route115/scripts.pory"

# 19 "data/maps/Route115/scripts.pory"
Route115_OnLoad:
# 20 "data/maps/Route115/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 21 "data/maps/Route115/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 22 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_EventScript_PlaceTilesRoute115West
# 23 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_EventScript_PlaceTilesRoute115East
# 24 "data/maps/Route115/scripts.pory"
	end
# 25 "data/maps/Route115/scripts.pory"

# 26 "data/maps/Route115/scripts.pory"
Route115_OnTransition:
# 27 "data/maps/Route115/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 28 "data/maps/Route115/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 29 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 30 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_StartGroudonWeather
# 31 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_StartGroudonWeather
# 32 "data/maps/Route115/scripts.pory"
	end
# 33 "data/maps/Route115/scripts.pory"

# 34 "data/maps/Route115/scripts.pory"
Route115_OnFrame:
# 35 "data/maps/Route115/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 36 "data/maps/Route115/scripts.pory"
	.2byte 0
# 37 "data/maps/Route115/scripts.pory"

# 38 "data/maps/Route115/scripts.pory"
Route115_EventScript_Woman::
# 39 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
# 40 "data/maps/Route115/scripts.pory"
	end
# 41 "data/maps/Route115/scripts.pory"

# 42 "data/maps/Route115/scripts.pory"
Route115_EventScript_RouteSignRustboro::
# 43 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
# 44 "data/maps/Route115/scripts.pory"
	end
# 45 "data/maps/Route115/scripts.pory"

# 46 "data/maps/Route115/scripts.pory"
Route115_EventScript_MeteorFallsSign::
# 47 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
# 48 "data/maps/Route115/scripts.pory"
	end
# 49 "data/maps/Route115/scripts.pory"

# 50 "data/maps/Route115/scripts.pory"
Route115_EventScript_Timothy::
# 51 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat, Route115_EventScript_RegisterTimothy
# 52 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 53 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchTimothy
# 54 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
# 55 "data/maps/Route115/scripts.pory"
	release
# 56 "data/maps/Route115/scripts.pory"
	end
# 57 "data/maps/Route115/scripts.pory"

# 58 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterTimothy::
# 59 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 60 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
# 62 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_TIMOTHY_1
# 63 "data/maps/Route115/scripts.pory"
	release
# 64 "data/maps/Route115/scripts.pory"
	end
# 65 "data/maps/Route115/scripts.pory"

# 66 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchTimothy::
# 67 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
# 68 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route115/scripts.pory"
	end
# 70 "data/maps/Route115/scripts.pory"

# 71 "data/maps/Route115/scripts.pory"
Route115_EventScript_Koichi::
# 72 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
# 73 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route115/scripts.pory"
	end
# 75 "data/maps/Route115/scripts.pory"

# 76 "data/maps/Route115/scripts.pory"
Route115_EventScript_Nob::
# 77 "data/maps/Route115/scripts.pory"
	faceplayer
# 78 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
# 79 "data/maps/Route115/scripts.pory"
	release
# 80 "data/maps/Route115/scripts.pory"
	end
# 81 "data/maps/Route115/scripts.pory"

# 82 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterNob::
# 83 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 84 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 86 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
# 87 "data/maps/Route115/scripts.pory"
	release
# 88 "data/maps/Route115/scripts.pory"
	end
# 89 "data/maps/Route115/scripts.pory"

# 90 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchNob::
# 91 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 92 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
# 93 "data/maps/Route115/scripts.pory"
	end
# 94 "data/maps/Route115/scripts.pory"

# 95 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy::
# 96 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
# 97 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 98 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchCyndy
# 99 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
# 100 "data/maps/Route115/scripts.pory"
	release
# 101 "data/maps/Route115/scripts.pory"
	end
# 102 "data/maps/Route115/scripts.pory"

# 103 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterCyndy::
# 104 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 105 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 107 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
# 108 "data/maps/Route115/scripts.pory"
	release
# 109 "data/maps/Route115/scripts.pory"
	end
# 110 "data/maps/Route115/scripts.pory"

# 111 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchCyndy::
# 112 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 113 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route115/scripts.pory"
	end
# 115 "data/maps/Route115/scripts.pory"

# 116 "data/maps/Route115/scripts.pory"
Route115_EventScript_HectorMarlene::
# 117 "data/maps/Route115/scripts.pory"
lockall
# 118 "data/maps/Route115/scripts.pory"
setvar VAR_0x8008, LOCALID_HECTOR
# 119 "data/maps/Route115/scripts.pory"
playse SE_PIN
# 120 "data/maps/Route115/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 121 "data/maps/Route115/scripts.pory"
waitmovement 0
# 122 "data/maps/Route115/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 123 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 124 "data/maps/Route115/scripts.pory"
waitmovement 0
# 125 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_HectorIntro MSGBOX_AUTOCLOSE
# 126 "data/maps/Route115/scripts.pory"
setvar VAR_0x8008, LOCALID_MARLENE
# 127 "data/maps/Route115/scripts.pory"
playse SE_PIN
# 128 "data/maps/Route115/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 129 "data/maps/Route115/scripts.pory"
waitmovement 0
# 130 "data/maps/Route115/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 131 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 132 "data/maps/Route115/scripts.pory"
waitmovement 0
# 133 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_MarleneIntro, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route115/scripts.pory"
goto Route115_EventScript_HectorMarleneDoMultiBattle
# 135 "data/maps/Route115/scripts.pory"
releaseall
# 136 "data/maps/Route115/scripts.pory"
end
# 137 "data/maps/Route115/scripts.pory"

# 138 "data/maps/Route115/scripts.pory"
Route115_EventScript_HectorMarleneDoMultiBattle::
# 139 "data/maps/Route115/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 140 "data/maps/Route115/scripts.pory"
multi_2p_vs_2 TRAINER_HECTOR, Route115_Text_HectorDefeat, TRAINER_MARLENE, Route115_Text_MarleneDefeat, PARTNER_EMMIE
# 141 "data/maps/Route115/scripts.pory"
switch VAR_RESULT
# 142 "data/maps/Route115/scripts.pory"
case 1, Route115_EventScript_HectorMarleneVictory
# 143 "data/maps/Route115/scripts.pory"
fadescreen FADE_TO_BLACK
# 144 "data/maps/Route115/scripts.pory"
special SetCB2WhiteOut
# 145 "data/maps/Route115/scripts.pory"
waitstate
# 146 "data/maps/Route115/scripts.pory"

# 147 "data/maps/Route115/scripts.pory"
Route115_EventScript_HectorMarleneVictory::
# 148 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 149 "data/maps/Route115/scripts.pory"
waitmovement 0
# 150 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 152 "data/maps/Route115/scripts.pory"
waitmovement 0
# 153 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 154 "data/maps/Route115/scripts.pory"
addvar VAR_ROUTE115_STATE, 1
# 155 "data/maps/Route115/scripts.pory"
end
# 156 "data/maps/Route115/scripts.pory"

# 157 "data/maps/Route115/scripts.pory"
Route115_EventScript_Hector::
# 158 "data/maps/Route115/scripts.pory"
	faceplayer
# 159 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 160 "data/maps/Route115/scripts.pory"
	end
# 161 "data/maps/Route115/scripts.pory"

# 162 "data/maps/Route115/scripts.pory"
Route115_EventScript_Kyra::
# 163 "data/maps/Route115/scripts.pory"
	faceplayer
# 164 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
# 165 "data/maps/Route115/scripts.pory"
	end
# 166 "data/maps/Route115/scripts.pory"

# 167 "data/maps/Route115/scripts.pory"
Route115_EventScript_Jaiden::
# 168 "data/maps/Route115/scripts.pory"
	faceplayer
# 169 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/Route115/scripts.pory"
	end
# 171 "data/maps/Route115/scripts.pory"

# 172 "data/maps/Route115/scripts.pory"
Route115_EventScript_AlixNob::
# 173 "data/maps/Route115/scripts.pory"
lockall
# 174 "data/maps/Route115/scripts.pory"
setvar VAR_0x8008, LOCALID_ALIX
# 175 "data/maps/Route115/scripts.pory"
playse SE_PIN
# 176 "data/maps/Route115/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 177 "data/maps/Route115/scripts.pory"
waitmovement 0
# 178 "data/maps/Route115/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 179 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 180 "data/maps/Route115/scripts.pory"
waitmovement 0
# 181 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_AlixIntro MSGBOX_AUTOCLOSE
# 182 "data/maps/Route115/scripts.pory"
setvar VAR_0x8008, LOCALID_NOB
# 183 "data/maps/Route115/scripts.pory"
playse SE_PIN
# 184 "data/maps/Route115/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 185 "data/maps/Route115/scripts.pory"
waitmovement 0
# 186 "data/maps/Route115/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 187 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 188 "data/maps/Route115/scripts.pory"
waitmovement 0
# 189 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_NobIntro, MSGBOX_AUTOCLOSE
# 190 "data/maps/Route115/scripts.pory"
goto Route115_EventScript_AlixNobDoMultiBattle
# 191 "data/maps/Route115/scripts.pory"
releaseall
# 192 "data/maps/Route115/scripts.pory"
end
# 193 "data/maps/Route115/scripts.pory"

# 194 "data/maps/Route115/scripts.pory"
Route115_EventScript_AlixNobDoMultiBattle::
# 195 "data/maps/Route115/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 196 "data/maps/Route115/scripts.pory"
multi_2p_vs_2 TRAINER_ALIX, Route115_Text_AlixDefeat, TRAINER_NOB_1, Route115_Text_NobDefeat, PARTNER_EMMIE
# 197 "data/maps/Route115/scripts.pory"
switch VAR_RESULT
# 198 "data/maps/Route115/scripts.pory"
case 1, Route115_EventScript_AlixNobVictory
# 199 "data/maps/Route115/scripts.pory"
fadescreen FADE_TO_BLACK
# 200 "data/maps/Route115/scripts.pory"
special SetCB2WhiteOut
# 201 "data/maps/Route115/scripts.pory"
waitstate
# 202 "data/maps/Route115/scripts.pory"

# 203 "data/maps/Route115/scripts.pory"
Route115_EventScript_AlixNobVictory::
# 204 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 205 "data/maps/Route115/scripts.pory"
waitmovement 0
# 206 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 208 "data/maps/Route115/scripts.pory"
waitmovement 0
# 209 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_NobPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route115/scripts.pory"
addvar VAR_ROUTE115_STATE, 1
# 211 "data/maps/Route115/scripts.pory"
end
# 212 "data/maps/Route115/scripts.pory"

# 213 "data/maps/Route115/scripts.pory"
Route115_EventScript_Alix::
# 214 "data/maps/Route115/scripts.pory"
	faceplayer
# 215 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 216 "data/maps/Route115/scripts.pory"
	end
# 217 "data/maps/Route115/scripts.pory"

# 218 "data/maps/Route115/scripts.pory"
Route115_EventScript_Helene::
# 219 "data/maps/Route115/scripts.pory"
	faceplayer
# 220 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route115/scripts.pory"
	end
# 222 "data/maps/Route115/scripts.pory"

# 223 "data/maps/Route115/scripts.pory"
Route115_EventScript_Marlene::
# 224 "data/maps/Route115/scripts.pory"
	faceplayer
# 225 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 226 "data/maps/Route115/scripts.pory"
	end
# 227 "data/maps/Route115/scripts.pory"

# 228 "data/maps/Route115/scripts.pory"
Route115_Text_NeverKnowWhenCavePokemonWillAppear:
# 229 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
# 230 "data/maps/Route115/scripts.pory"
	.string "on a road.\p"
# 231 "data/maps/Route115/scripts.pory"
	.string "You never know when wild POKéMON will\n"
# 232 "data/maps/Route115/scripts.pory"
	.string "appear. It's full of suspense.$"
# 233 "data/maps/Route115/scripts.pory"

# 234 "data/maps/Route115/scripts.pory"
Route115_Text_RouteSignRustboro:
# 235 "data/maps/Route115/scripts.pory"
	.string "ROUTE 115\n"
# 236 "data/maps/Route115/scripts.pory"
	.string "{DOWN_ARROW} RUSTBORO CITY$"
# 237 "data/maps/Route115/scripts.pory"

# 238 "data/maps/Route115/scripts.pory"
Route115_Text_MeteorFallsSign:
# 239 "data/maps/Route115/scripts.pory"
	.string "METEOR FALLS\n"
# 240 "data/maps/Route115/scripts.pory"
	.string "FALLARBOR TOWN THROUGH HERE$"
