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
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
# 76 "data/maps/Route115/scripts.pory"
	release
# 77 "data/maps/Route115/scripts.pory"
	end
# 78 "data/maps/Route115/scripts.pory"

# 79 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterNob::
# 80 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 81 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 83 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
# 84 "data/maps/Route115/scripts.pory"
	release
# 85 "data/maps/Route115/scripts.pory"
	end
# 86 "data/maps/Route115/scripts.pory"

# 87 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchNob::
# 88 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 89 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route115/scripts.pory"
	end
# 91 "data/maps/Route115/scripts.pory"

# 92 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy::
# 93 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
# 94 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 95 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchCyndy
# 96 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
# 97 "data/maps/Route115/scripts.pory"
	release
# 98 "data/maps/Route115/scripts.pory"
	end
# 99 "data/maps/Route115/scripts.pory"

# 100 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterCyndy::
# 101 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 102 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 104 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
# 105 "data/maps/Route115/scripts.pory"
	release
# 106 "data/maps/Route115/scripts.pory"
	end
# 107 "data/maps/Route115/scripts.pory"

# 108 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchCyndy::
# 109 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 110 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
# 111 "data/maps/Route115/scripts.pory"
	end
# 112 "data/maps/Route115/scripts.pory"

# 113 "data/maps/Route115/scripts.pory"
Route115_EventScript_HectorMarlene::
# 114 "data/maps/Route115/scripts.pory"
lockall
# 115 "data/maps/Route115/scripts.pory"
setvar VAR_0x8008, LOCALID_HECTOR
# 116 "data/maps/Route115/scripts.pory"
playse SE_PIN
# 117 "data/maps/Route115/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 118 "data/maps/Route115/scripts.pory"
waitmovement 0
# 119 "data/maps/Route115/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 120 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 121 "data/maps/Route115/scripts.pory"
waitmovement 0
# 122 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_HectorIntro MSGBOX_AUTOCLOSE
# 123 "data/maps/Route115/scripts.pory"
setvar VAR_0x8008, LOCALID_MARLENE
# 124 "data/maps/Route115/scripts.pory"
playse SE_PIN
# 125 "data/maps/Route115/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 126 "data/maps/Route115/scripts.pory"
waitmovement 0
# 127 "data/maps/Route115/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 128 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 129 "data/maps/Route115/scripts.pory"
waitmovement 0
# 130 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_MarleneIntro, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route115/scripts.pory"
goto Route115_EventScript_HectorMarleneDoMultiBattle
# 132 "data/maps/Route115/scripts.pory"
releaseall
# 133 "data/maps/Route115/scripts.pory"
end
# 134 "data/maps/Route115/scripts.pory"

# 135 "data/maps/Route115/scripts.pory"
Route115_EventScript_HectorMarleneDoMultiBattle::
# 136 "data/maps/Route115/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 137 "data/maps/Route115/scripts.pory"
multi_2p_vs_2 TRAINER_HECTOR, Route115_Text_HectorDefeat, TRAINER_MARLENE, Route115_Text_MarleneDefeat, PARTNER_EMMIE
# 138 "data/maps/Route115/scripts.pory"
switch VAR_RESULT
# 139 "data/maps/Route115/scripts.pory"
case 1, Route115_EventScript_HectorMarleneVictory
# 140 "data/maps/Route115/scripts.pory"
fadescreen FADE_TO_BLACK
# 141 "data/maps/Route115/scripts.pory"
special SetCB2WhiteOut
# 142 "data/maps/Route115/scripts.pory"
waitstate
# 143 "data/maps/Route115/scripts.pory"

# 144 "data/maps/Route115/scripts.pory"
Route115_EventScript_HectorMarleneVictory::
# 145 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 146 "data/maps/Route115/scripts.pory"
waitmovement 0
# 147 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 149 "data/maps/Route115/scripts.pory"
waitmovement 0
# 150 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route115/scripts.pory"
addvar VAR_ROUTE115_STATE, 1
# 152 "data/maps/Route115/scripts.pory"
end
# 153 "data/maps/Route115/scripts.pory"

# 154 "data/maps/Route115/scripts.pory"
Route115_EventScript_Hector::
# 155 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 156 "data/maps/Route115/scripts.pory"
	end
# 157 "data/maps/Route115/scripts.pory"

# 158 "data/maps/Route115/scripts.pory"
Route115_EventScript_Kyra::
# 159 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
# 160 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
# 161 "data/maps/Route115/scripts.pory"
	end
# 162 "data/maps/Route115/scripts.pory"

# 163 "data/maps/Route115/scripts.pory"
Route115_EventScript_Jaiden::
# 164 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
# 165 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route115/scripts.pory"
	end
# 167 "data/maps/Route115/scripts.pory"

# 168 "data/maps/Route115/scripts.pory"
Route115_EventScript_AlixNob::
# 169 "data/maps/Route115/scripts.pory"
lockall
# 170 "data/maps/Route115/scripts.pory"
setvar VAR_0x8008, LOCALID_ALIX
# 171 "data/maps/Route115/scripts.pory"
playse SE_PIN
# 172 "data/maps/Route115/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 173 "data/maps/Route115/scripts.pory"
waitmovement 0
# 174 "data/maps/Route115/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 175 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 176 "data/maps/Route115/scripts.pory"
waitmovement 0
# 177 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_AlixIntro MSGBOX_AUTOCLOSE
# 178 "data/maps/Route115/scripts.pory"
setvar VAR_0x8008, LOCALID_NOB
# 179 "data/maps/Route115/scripts.pory"
playse SE_PIN
# 180 "data/maps/Route115/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 181 "data/maps/Route115/scripts.pory"
waitmovement 0
# 182 "data/maps/Route115/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 183 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 184 "data/maps/Route115/scripts.pory"
waitmovement 0
# 185 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_NobIntro, MSGBOX_AUTOCLOSE
# 186 "data/maps/Route115/scripts.pory"
goto Route115_EventScript_AlixNobDoMultiBattle
# 187 "data/maps/Route115/scripts.pory"
releaseall
# 188 "data/maps/Route115/scripts.pory"
end
# 189 "data/maps/Route115/scripts.pory"

# 190 "data/maps/Route115/scripts.pory"
Route115_EventScript_AlixNobDoMultiBattle::
# 191 "data/maps/Route115/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 192 "data/maps/Route115/scripts.pory"
multi_2p_vs_2 TRAINER_ALIX, Route115_Text_AlixDefeat, TRAINER_NOB_1, Route115_Text_NobDefeat, PARTNER_EMMIE
# 193 "data/maps/Route115/scripts.pory"
switch VAR_RESULT
# 194 "data/maps/Route115/scripts.pory"
case 1, Route115_EventScript_AlixNobVictory
# 195 "data/maps/Route115/scripts.pory"
fadescreen FADE_TO_BLACK
# 196 "data/maps/Route115/scripts.pory"
special SetCB2WhiteOut
# 197 "data/maps/Route115/scripts.pory"
waitstate
# 198 "data/maps/Route115/scripts.pory"

# 199 "data/maps/Route115/scripts.pory"
Route115_EventScript_AlixNobVictory::
# 200 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 201 "data/maps/Route115/scripts.pory"
waitmovement 0
# 202 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route115/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 204 "data/maps/Route115/scripts.pory"
waitmovement 0
# 205 "data/maps/Route115/scripts.pory"
msgbox Route115_Text_NobPostBattle, MSGBOX_AUTOCLOSE
# 206 "data/maps/Route115/scripts.pory"
addvar VAR_ROUTE115_STATE, 1
# 207 "data/maps/Route115/scripts.pory"
end
# 208 "data/maps/Route115/scripts.pory"

# 209 "data/maps/Route115/scripts.pory"
Route115_EventScript_Alix::
# 210 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route115/scripts.pory"
	end
# 212 "data/maps/Route115/scripts.pory"

# 213 "data/maps/Route115/scripts.pory"
Route115_EventScript_Helene::
# 214 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
# 215 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
# 216 "data/maps/Route115/scripts.pory"
	end
# 217 "data/maps/Route115/scripts.pory"

# 218 "data/maps/Route115/scripts.pory"
Route115_EventScript_Marlene::
# 219 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route115/scripts.pory"
	end
# 221 "data/maps/Route115/scripts.pory"

# 222 "data/maps/Route115/scripts.pory"
Route115_Text_NeverKnowWhenCavePokemonWillAppear:
# 223 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
# 224 "data/maps/Route115/scripts.pory"
	.string "on a road.\p"
# 225 "data/maps/Route115/scripts.pory"
	.string "You never know when wild POKéMON will\n"
# 226 "data/maps/Route115/scripts.pory"
	.string "appear. It's full of suspense.$"
# 227 "data/maps/Route115/scripts.pory"

# 228 "data/maps/Route115/scripts.pory"
Route115_Text_RouteSignRustboro:
# 229 "data/maps/Route115/scripts.pory"
	.string "ROUTE 115\n"
# 230 "data/maps/Route115/scripts.pory"
	.string "{DOWN_ARROW} RUSTBORO CITY$"
# 231 "data/maps/Route115/scripts.pory"

# 232 "data/maps/Route115/scripts.pory"
Route115_Text_MeteorFallsSign:
# 233 "data/maps/Route115/scripts.pory"
	.string "METEOR FALLS\n"
# 234 "data/maps/Route115/scripts.pory"
	.string "FALLARBOR TOWN THROUGH HERE$"
