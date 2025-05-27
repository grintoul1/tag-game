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
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_EventScript_PlaceTilesRoute115West
# 22 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_EventScript_PlaceTilesRoute115East
# 23 "data/maps/Route115/scripts.pory"
	end
# 24 "data/maps/Route115/scripts.pory"

# 25 "data/maps/Route115/scripts.pory"
Route115_OnTransition:
# 26 "data/maps/Route115/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 27 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 28 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_StartGroudonWeather
# 29 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_StartGroudonWeather
# 30 "data/maps/Route115/scripts.pory"
	end
# 31 "data/maps/Route115/scripts.pory"

# 32 "data/maps/Route115/scripts.pory"
Route115_OnFrame:
# 33 "data/maps/Route115/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 34 "data/maps/Route115/scripts.pory"
	.2byte 0
# 35 "data/maps/Route115/scripts.pory"

# 36 "data/maps/Route115/scripts.pory"
Route115_EventScript_Woman::
# 37 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
# 38 "data/maps/Route115/scripts.pory"
	end
# 39 "data/maps/Route115/scripts.pory"

# 40 "data/maps/Route115/scripts.pory"
Route115_EventScript_RouteSignRustboro::
# 41 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
# 42 "data/maps/Route115/scripts.pory"
	end
# 43 "data/maps/Route115/scripts.pory"

# 44 "data/maps/Route115/scripts.pory"
Route115_EventScript_MeteorFallsSign::
# 45 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
# 46 "data/maps/Route115/scripts.pory"
	end
# 47 "data/maps/Route115/scripts.pory"

# 48 "data/maps/Route115/scripts.pory"
Route115_EventScript_Timothy::
# 49 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat, Route115_EventScript_RegisterTimothy
# 50 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 51 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchTimothy
# 52 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
# 53 "data/maps/Route115/scripts.pory"
	release
# 54 "data/maps/Route115/scripts.pory"
	end
# 55 "data/maps/Route115/scripts.pory"

# 56 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterTimothy::
# 57 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 58 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
# 60 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_TIMOTHY_1
# 61 "data/maps/Route115/scripts.pory"
	release
# 62 "data/maps/Route115/scripts.pory"
	end
# 63 "data/maps/Route115/scripts.pory"

# 64 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchTimothy::
# 65 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
# 66 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route115/scripts.pory"
	end
# 68 "data/maps/Route115/scripts.pory"

# 69 "data/maps/Route115/scripts.pory"
Route115_EventScript_Koichi::
# 70 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
# 71 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/Route115/scripts.pory"
	end
# 73 "data/maps/Route115/scripts.pory"

# 74 "data/maps/Route115/scripts.pory"
Route115_EventScript_Nob::
# 75 "data/maps/Route115/scripts.pory"
	faceplayer
# 76 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
# 77 "data/maps/Route115/scripts.pory"
	release
# 78 "data/maps/Route115/scripts.pory"
	end
# 79 "data/maps/Route115/scripts.pory"

# 80 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterNob::
# 81 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 82 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 84 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
# 85 "data/maps/Route115/scripts.pory"
	release
# 86 "data/maps/Route115/scripts.pory"
	end
# 87 "data/maps/Route115/scripts.pory"

# 88 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchNob::
# 89 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 90 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route115/scripts.pory"
	end
# 92 "data/maps/Route115/scripts.pory"

# 93 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy::
# 94 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
# 95 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 96 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchCyndy
# 97 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
# 98 "data/maps/Route115/scripts.pory"
	release
# 99 "data/maps/Route115/scripts.pory"
	end
# 100 "data/maps/Route115/scripts.pory"

# 101 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterCyndy::
# 102 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 103 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 105 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
# 106 "data/maps/Route115/scripts.pory"
	release
# 107 "data/maps/Route115/scripts.pory"
	end
# 108 "data/maps/Route115/scripts.pory"

# 109 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchCyndy::
# 110 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 111 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
# 112 "data/maps/Route115/scripts.pory"
	end
# 113 "data/maps/Route115/scripts.pory"

# 114 "data/maps/Route115/scripts.pory"
Route115_EventScript_HectorMarlene::
# 115 "data/maps/Route115/scripts.pory"
lockall
# 116 "data/maps/Route115/scripts.pory"
setvar VAR_0x8008, LOCALID_HECTOR
# 117 "data/maps/Route115/scripts.pory"
playse SE_PIN
# 118 "data/maps/Route115/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 119 "data/maps/Route115/scripts.pory"
waitmovement 0
# 120 "data/maps/Route115/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 121 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 122 "data/maps/Route115/scripts.pory"
waitmovement 0
# 123 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_HectorIntro MSGBOX_AUTOCLOSE
# 124 "data/maps/Route115/scripts.pory"
setvar VAR_0x8008, LOCALID_MARLENE
# 125 "data/maps/Route115/scripts.pory"
playse SE_PIN
# 126 "data/maps/Route115/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 127 "data/maps/Route115/scripts.pory"
waitmovement 0
# 128 "data/maps/Route115/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 129 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 130 "data/maps/Route115/scripts.pory"
waitmovement 0
# 131 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_MarleneIntro, MSGBOX_AUTOCLOSE
# 132 "data/maps/Route115/scripts.pory"
goto Route115_EventScript_HectorMarleneDoMultiBattle
# 133 "data/maps/Route115/scripts.pory"
releaseall
# 134 "data/maps/Route115/scripts.pory"
end
# 135 "data/maps/Route115/scripts.pory"

# 136 "data/maps/Route115/scripts.pory"
Route115_EventScript_HectorMarleneDoMultiBattle::
# 137 "data/maps/Route115/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 138 "data/maps/Route115/scripts.pory"
multi_2p_vs_2 TRAINER_HECTOR, Route115_Text_HectorDefeat, TRAINER_MARLENE, Route115_Text_MarleneDefeat, PARTNER_EMMIE
# 139 "data/maps/Route115/scripts.pory"
switch VAR_RESULT
# 140 "data/maps/Route115/scripts.pory"
case 1, Route115_EventScript_HectorMarleneVictory
# 141 "data/maps/Route115/scripts.pory"
fadescreen FADE_TO_BLACK
# 142 "data/maps/Route115/scripts.pory"
special SetCB2WhiteOut
# 143 "data/maps/Route115/scripts.pory"
waitstate
# 144 "data/maps/Route115/scripts.pory"

# 145 "data/maps/Route115/scripts.pory"
Route115_EventScript_HectorMarleneVictory::
# 146 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 147 "data/maps/Route115/scripts.pory"
waitmovement 0
# 148 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 150 "data/maps/Route115/scripts.pory"
waitmovement 0
# 151 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 152 "data/maps/Route115/scripts.pory"
addvar VAR_ROUTE115_STATE, 1
# 153 "data/maps/Route115/scripts.pory"
end
# 154 "data/maps/Route115/scripts.pory"

# 155 "data/maps/Route115/scripts.pory"
Route115_EventScript_Hector::
# 156 "data/maps/Route115/scripts.pory"
	faceplayer
# 157 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 158 "data/maps/Route115/scripts.pory"
	end
# 159 "data/maps/Route115/scripts.pory"

# 160 "data/maps/Route115/scripts.pory"
Route115_EventScript_Kyra::
# 161 "data/maps/Route115/scripts.pory"
	faceplayer
# 162 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route115/scripts.pory"
	end
# 164 "data/maps/Route115/scripts.pory"

# 165 "data/maps/Route115/scripts.pory"
Route115_EventScript_Jaiden::
# 166 "data/maps/Route115/scripts.pory"
	faceplayer
# 167 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
# 168 "data/maps/Route115/scripts.pory"
	end
# 169 "data/maps/Route115/scripts.pory"

# 170 "data/maps/Route115/scripts.pory"
Route115_EventScript_AlixNob::
# 171 "data/maps/Route115/scripts.pory"
lockall
# 172 "data/maps/Route115/scripts.pory"
setvar VAR_0x8008, LOCALID_ALIX
# 173 "data/maps/Route115/scripts.pory"
playse SE_PIN
# 174 "data/maps/Route115/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 175 "data/maps/Route115/scripts.pory"
waitmovement 0
# 176 "data/maps/Route115/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 177 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 178 "data/maps/Route115/scripts.pory"
waitmovement 0
# 179 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_AlixIntro MSGBOX_AUTOCLOSE
# 180 "data/maps/Route115/scripts.pory"
setvar VAR_0x8008, LOCALID_NOB
# 181 "data/maps/Route115/scripts.pory"
playse SE_PIN
# 182 "data/maps/Route115/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 183 "data/maps/Route115/scripts.pory"
waitmovement 0
# 184 "data/maps/Route115/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 185 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 186 "data/maps/Route115/scripts.pory"
waitmovement 0
# 187 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_NobIntro, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route115/scripts.pory"
goto Route115_EventScript_AlixNobDoMultiBattle
# 189 "data/maps/Route115/scripts.pory"
releaseall
# 190 "data/maps/Route115/scripts.pory"
end
# 191 "data/maps/Route115/scripts.pory"

# 192 "data/maps/Route115/scripts.pory"
Route115_EventScript_AlixNobDoMultiBattle::
# 193 "data/maps/Route115/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 194 "data/maps/Route115/scripts.pory"
multi_2p_vs_2 TRAINER_ALIX, Route115_Text_AlixDefeat, TRAINER_NOB_1, Route115_Text_NobDefeat, PARTNER_EMMIE
# 195 "data/maps/Route115/scripts.pory"
switch VAR_RESULT
# 196 "data/maps/Route115/scripts.pory"
case 1, Route115_EventScript_AlixNobVictory
# 197 "data/maps/Route115/scripts.pory"
fadescreen FADE_TO_BLACK
# 198 "data/maps/Route115/scripts.pory"
special SetCB2WhiteOut
# 199 "data/maps/Route115/scripts.pory"
waitstate
# 200 "data/maps/Route115/scripts.pory"

# 201 "data/maps/Route115/scripts.pory"
Route115_EventScript_AlixNobVictory::
# 202 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 203 "data/maps/Route115/scripts.pory"
waitmovement 0
# 204 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 206 "data/maps/Route115/scripts.pory"
waitmovement 0
# 207 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_NobPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route115/scripts.pory"
addvar VAR_ROUTE115_STATE, 1
# 209 "data/maps/Route115/scripts.pory"
end
# 210 "data/maps/Route115/scripts.pory"

# 211 "data/maps/Route115/scripts.pory"
Route115_EventScript_Alix::
# 212 "data/maps/Route115/scripts.pory"
	faceplayer
# 213 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route115/scripts.pory"
	end
# 215 "data/maps/Route115/scripts.pory"

# 216 "data/maps/Route115/scripts.pory"
Route115_EventScript_Helene::
# 217 "data/maps/Route115/scripts.pory"
	faceplayer
# 218 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/Route115/scripts.pory"
	end
# 220 "data/maps/Route115/scripts.pory"

# 221 "data/maps/Route115/scripts.pory"
Route115_EventScript_Marlene::
# 222 "data/maps/Route115/scripts.pory"
	faceplayer
# 223 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/Route115/scripts.pory"
	end
# 225 "data/maps/Route115/scripts.pory"

# 226 "data/maps/Route115/scripts.pory"
Route115_Text_NeverKnowWhenCavePokemonWillAppear:
# 227 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
# 228 "data/maps/Route115/scripts.pory"
	.string "on a road.\p"
# 229 "data/maps/Route115/scripts.pory"
	.string "You never know when wild POKéMON will\n"
# 230 "data/maps/Route115/scripts.pory"
	.string "appear. It's full of suspense.$"
# 231 "data/maps/Route115/scripts.pory"

# 232 "data/maps/Route115/scripts.pory"
Route115_Text_RouteSignRustboro:
# 233 "data/maps/Route115/scripts.pory"
	.string "ROUTE 115\n"
# 234 "data/maps/Route115/scripts.pory"
	.string "{DOWN_ARROW} RUSTBORO CITY$"
# 235 "data/maps/Route115/scripts.pory"

# 236 "data/maps/Route115/scripts.pory"
Route115_Text_MeteorFallsSign:
# 237 "data/maps/Route115/scripts.pory"
	.string "METEOR FALLS\n"
# 238 "data/maps/Route115/scripts.pory"
	.string "FALLARBOR TOWN THROUGH HERE$"
