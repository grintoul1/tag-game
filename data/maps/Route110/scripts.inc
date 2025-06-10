# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 36
# 3 "data/maps/Route110/scripts.pory"
.set LOCALID_ISABEL, 28
# 4 "data/maps/Route110/scripts.pory"
.set LOCALID_KALEB, 29
# 5 "data/maps/Route110/scripts.pory"
.set LOCALID_JOSEPH, 31
# 6 "data/maps/Route110/scripts.pory"
.set LOCALID_EDWIN, 14
# 7 "data/maps/Route110/scripts.pory"
.set LOCALID_TIMMY, 27
# 8 "data/maps/Route110/scripts.pory"
.set LOCALID_EDWARD, 12
# 9 "data/maps/Route110/scripts.pory"
.set LOCALID_ANTHONY, 9
# 10 "data/maps/Route110/scripts.pory"
.set LOCALID_ABIGAIL, 10
# 11 "data/maps/Route110/scripts.pory"
.set LOCALID_ALYSSA, 30
# 12 "data/maps/Route110/scripts.pory"
.set LOCALID_BENJAMIN, 11
# 13 "data/maps/Route110/scripts.pory"
.set LOCALID_JASMINE, 8
# 14 "data/maps/Route110/scripts.pory"
.set LOCALID_JACOB, 26
# 15 "data/maps/Route110/scripts.pory"

# 16 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 17 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 18 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 19 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 20 "data/maps/Route110/scripts.pory"
	.byte 0
# 21 "data/maps/Route110/scripts.pory"

# 22 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 23 "data/maps/Route110/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 24 "data/maps/Route110/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 25 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 26 "data/maps/Route110/scripts.pory"
	end
# 27 "data/maps/Route110/scripts.pory"

# 28 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 29 "data/maps/Route110/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 30 "data/maps/Route110/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 31 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 32 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 33 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 34 "data/maps/Route110/scripts.pory"
	end
# 35 "data/maps/Route110/scripts.pory"

# 36 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 37 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 38 "data/maps/Route110/scripts.pory"
	return
# 39 "data/maps/Route110/scripts.pory"

# 40 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 41 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 42 "data/maps/Route110/scripts.pory"
	.2byte 0
# 43 "data/maps/Route110/scripts.pory"

# 44 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 45 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 46 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 47 "data/maps/Route110/scripts.pory"
	return
# 48 "data/maps/Route110/scripts.pory"

# 49 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 50 "data/maps/Route110/scripts.pory"
	lock
# 51 "data/maps/Route110/scripts.pory"
	faceplayer
# 52 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 53 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 54 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route110/scripts.pory"
	release
# 56 "data/maps/Route110/scripts.pory"
	end
# 57 "data/maps/Route110/scripts.pory"

# 58 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 59 "data/maps/Route110/scripts.pory"
	lock
# 60 "data/maps/Route110/scripts.pory"
	faceplayer
# 61 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 62 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 63 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route110/scripts.pory"
	release
# 65 "data/maps/Route110/scripts.pory"
	end
# 66 "data/maps/Route110/scripts.pory"

# 67 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 68 "data/maps/Route110/scripts.pory"
	lock
# 69 "data/maps/Route110/scripts.pory"
	faceplayer
# 70 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 71 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 72 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route110/scripts.pory"
	release
# 74 "data/maps/Route110/scripts.pory"
	end
# 75 "data/maps/Route110/scripts.pory"

# 76 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 77 "data/maps/Route110/scripts.pory"
	lock
# 78 "data/maps/Route110/scripts.pory"
	faceplayer
# 79 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 80 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 81 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route110/scripts.pory"
	release
# 83 "data/maps/Route110/scripts.pory"
	end
# 84 "data/maps/Route110/scripts.pory"

# 85 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 86 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 87 "data/maps/Route110/scripts.pory"
	end
# 88 "data/maps/Route110/scripts.pory"

# 89 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 90 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 91 "data/maps/Route110/scripts.pory"
	end
# 92 "data/maps/Route110/scripts.pory"

# 93 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 94 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 95 "data/maps/Route110/scripts.pory"
	end
# 96 "data/maps/Route110/scripts.pory"

# 97 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 98 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 99 "data/maps/Route110/scripts.pory"
	end
# 100 "data/maps/Route110/scripts.pory"

# 101 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 102 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 103 "data/maps/Route110/scripts.pory"
	end
# 104 "data/maps/Route110/scripts.pory"

# 105 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 106 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 107 "data/maps/Route110/scripts.pory"
	end
# 108 "data/maps/Route110/scripts.pory"

# 109 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 110 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 111 "data/maps/Route110/scripts.pory"
	end
# 112 "data/maps/Route110/scripts.pory"

# 113 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 114 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 115 "data/maps/Route110/scripts.pory"
	end
# 116 "data/maps/Route110/scripts.pory"

# 117 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 118 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 119 "data/maps/Route110/scripts.pory"
	end
# 120 "data/maps/Route110/scripts.pory"

# 121 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 122 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 123 "data/maps/Route110/scripts.pory"
	end
# 124 "data/maps/Route110/scripts.pory"

# 125 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 126 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 127 "data/maps/Route110/scripts.pory"
	end
# 128 "data/maps/Route110/scripts.pory"

# 129 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 130 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 131 "data/maps/Route110/scripts.pory"
	end
# 132 "data/maps/Route110/scripts.pory"

# 133 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 134 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 135 "data/maps/Route110/scripts.pory"
	end
# 136 "data/maps/Route110/scripts.pory"

# 137 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 138 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 139 "data/maps/Route110/scripts.pory"
	end
# 140 "data/maps/Route110/scripts.pory"

# 141 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 142 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 143 "data/maps/Route110/scripts.pory"
	end
# 144 "data/maps/Route110/scripts.pory"

# 145 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 146 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 147 "data/maps/Route110/scripts.pory"
	end
# 148 "data/maps/Route110/scripts.pory"

# 149 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 150 "data/maps/Route110/scripts.pory"
	lockall
# 151 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 152 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 153 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 154 "data/maps/Route110/scripts.pory"
	releaseall
# 155 "data/maps/Route110/scripts.pory"
	end
# 156 "data/maps/Route110/scripts.pory"

# 157 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 158 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 159 "data/maps/Route110/scripts.pory"
	releaseall
# 160 "data/maps/Route110/scripts.pory"
	end
# 161 "data/maps/Route110/scripts.pory"

# 162 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 163 "data/maps/Route110/scripts.pory"
	lock
# 164 "data/maps/Route110/scripts.pory"
	faceplayer
# 165 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 166 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 167 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 168 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 169 "data/maps/Route110/scripts.pory"
	release
# 170 "data/maps/Route110/scripts.pory"
	end
# 171 "data/maps/Route110/scripts.pory"

# 172 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 173 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 174 "data/maps/Route110/scripts.pory"
	release
# 175 "data/maps/Route110/scripts.pory"
	end
# 176 "data/maps/Route110/scripts.pory"

# 177 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 178 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 179 "data/maps/Route110/scripts.pory"
	release
# 180 "data/maps/Route110/scripts.pory"
	end
# 181 "data/maps/Route110/scripts.pory"

# 182 "data/maps/Route110/scripts.pory"
Route110_EventScript_TimmyEdward::
# 183 "data/maps/Route110/scripts.pory"
	lockall
# 184 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, LOCALID_TIMMY
# 185 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 186 "data/maps/Route110/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 187 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, TRUE
# 189 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 190 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 191 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyIntro MSGBOX_AUTOCLOSE
# 192 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, LOCALID_EDWARD
# 193 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 194 "data/maps/Route110/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 195 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 197 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 198 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardIntro MSGBOX_AUTOCLOSE
# 200 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_TimmyEdwardDoMultiBattle
# 201 "data/maps/Route110/scripts.pory"
	releaseall
# 202 "data/maps/Route110/scripts.pory"
	end
# 203 "data/maps/Route110/scripts.pory"

# 204 "data/maps/Route110/scripts.pory"
Route110_EventScript_TimmyEdwardDoMultiBattle::
# 205 "data/maps/Route110/scripts.pory"
	playbgm MUS_ROUTE110, TRUE
# 206 "data/maps/Route110/scripts.pory"
	multi_2p_vs_2 TRAINER_TIMMY, Route110_Text_TimmyDefeated, TRAINER_EDWARD, Route110_Text_EdwardDefeated, PARTNER_EMMIE
# 207 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_TimmyEdwardVictory
# 209 "data/maps/Route110/scripts.pory"
	fadescreen FADE_TO_BLACK
# 210 "data/maps/Route110/scripts.pory"
	special SetCB2WhiteOut
# 211 "data/maps/Route110/scripts.pory"
	waitstate
# 212 "data/maps/Route110/scripts.pory"

# 213 "data/maps/Route110/scripts.pory"
Route110_EventScript_TimmyEdwardVictory::
# 214 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 215 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 218 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 219 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route110/scripts.pory"
	addvar VAR_ROUTE110_STATE, 1
# 221 "data/maps/Route110/scripts.pory"
	end
# 222 "data/maps/Route110/scripts.pory"

# 223 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 224 "data/maps/Route110/scripts.pory"
	faceplayer
# 225 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 226 "data/maps/Route110/scripts.pory"
	end
# 227 "data/maps/Route110/scripts.pory"

# 228 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 229 "data/maps/Route110/scripts.pory"
	faceplayer
# 230 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/Route110/scripts.pory"
	end
# 232 "data/maps/Route110/scripts.pory"

# 233 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 234 "data/maps/Route110/scripts.pory"
	faceplayer
# 235 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 236 "data/maps/Route110/scripts.pory"
	release
# 237 "data/maps/Route110/scripts.pory"
	end
# 238 "data/maps/Route110/scripts.pory"

# 239 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 240 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 241 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 243 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 244 "data/maps/Route110/scripts.pory"
	release
# 245 "data/maps/Route110/scripts.pory"
	end
# 246 "data/maps/Route110/scripts.pory"

# 247 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 248 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 249 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 250 "data/maps/Route110/scripts.pory"
	end
# 251 "data/maps/Route110/scripts.pory"

# 252 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 253 "data/maps/Route110/scripts.pory"
	faceplayer
# 254 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/Route110/scripts.pory"
	end
# 256 "data/maps/Route110/scripts.pory"

# 257 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 258 "data/maps/Route110/scripts.pory"
	faceplayer
# 259 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/Route110/scripts.pory"
	end
# 261 "data/maps/Route110/scripts.pory"

# 262 "data/maps/Route110/scripts.pory"
Route110_EventScript_AnthonyAbigail::
# 263 "data/maps/Route110/scripts.pory"
lockall
# 264 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ANTHONY
# 265 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 266 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 267 "data/maps/Route110/scripts.pory"
waitmovement 0
# 268 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 269 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 270 "data/maps/Route110/scripts.pory"
waitmovement 0
# 271 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AnthonyIntro MSGBOX_AUTOCLOSE
# 272 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ABIGAIL
# 273 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 274 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 275 "data/maps/Route110/scripts.pory"
waitmovement 0
# 276 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 277 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 278 "data/maps/Route110/scripts.pory"
waitmovement 0
# 279 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AbigailIntro, MSGBOX_AUTOCLOSE
# 280 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_AnthonyAbigailDoMultiBattle
# 281 "data/maps/Route110/scripts.pory"
releaseall
# 282 "data/maps/Route110/scripts.pory"
end
# 283 "data/maps/Route110/scripts.pory"

# 284 "data/maps/Route110/scripts.pory"
Route110_EventScript_AnthonyAbigailDoMultiBattle::
# 285 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 286 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_ANTHONY, Route110_Text_AnthonyDefeated, TRAINER_ABIGAIL_1, Route110_Text_AbigailDefeated, PARTNER_EMMIE
# 287 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 288 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_AnthonyAbigailVictory
# 289 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 290 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 291 "data/maps/Route110/scripts.pory"
waitstate
# 292 "data/maps/Route110/scripts.pory"

# 293 "data/maps/Route110/scripts.pory"
Route110_EventScript_AnthonyAbigailVictory::
# 294 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 295 "data/maps/Route110/scripts.pory"
waitmovement 0
# 296 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 297 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 298 "data/maps/Route110/scripts.pory"
waitmovement 0
# 299 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AbigailPostBattle, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 301 "data/maps/Route110/scripts.pory"
end
# 302 "data/maps/Route110/scripts.pory"

# 303 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 304 "data/maps/Route110/scripts.pory"
	faceplayer
# 305 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 306 "data/maps/Route110/scripts.pory"
	end
# 307 "data/maps/Route110/scripts.pory"

# 308 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 309 "data/maps/Route110/scripts.pory"
	faceplayer
# 310 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 311 "data/maps/Route110/scripts.pory"
	release
# 312 "data/maps/Route110/scripts.pory"
	end
# 313 "data/maps/Route110/scripts.pory"

# 314 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 315 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 316 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 317 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 318 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 319 "data/maps/Route110/scripts.pory"
	release
# 320 "data/maps/Route110/scripts.pory"
	end
# 321 "data/maps/Route110/scripts.pory"

# 322 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 323 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 324 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 325 "data/maps/Route110/scripts.pory"
	end
# 326 "data/maps/Route110/scripts.pory"

# 327 "data/maps/Route110/scripts.pory"
Route110_EventScript_JasmineJacob::
# 328 "data/maps/Route110/scripts.pory"
lockall
# 329 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_JASMINE
# 330 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 331 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 332 "data/maps/Route110/scripts.pory"
waitmovement 0
# 333 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 334 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 335 "data/maps/Route110/scripts.pory"
waitmovement 0
# 336 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JasmineIntro MSGBOX_AUTOCLOSE
# 337 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_JACOB
# 338 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 339 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 340 "data/maps/Route110/scripts.pory"
waitmovement 0
# 341 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 342 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 343 "data/maps/Route110/scripts.pory"
waitmovement 0
# 344 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JacobIntro, MSGBOX_AUTOCLOSE
# 345 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_JasmineJacobDoMultiBattle
# 346 "data/maps/Route110/scripts.pory"
releaseall
# 347 "data/maps/Route110/scripts.pory"
end
# 348 "data/maps/Route110/scripts.pory"

# 349 "data/maps/Route110/scripts.pory"
Route110_EventScript_JasmineJacobDoMultiBattle::
# 350 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 351 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_JASMINE, Route110_Text_JasmineDefeated, TRAINER_JACOB, Route110_Text_JacobDefeated, PARTNER_EMMIE
# 352 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 353 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_JasmineJacobVictory
# 354 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 355 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 356 "data/maps/Route110/scripts.pory"
waitstate
# 357 "data/maps/Route110/scripts.pory"

# 358 "data/maps/Route110/scripts.pory"
Route110_EventScript_JasmineJacobVictory::
# 359 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 360 "data/maps/Route110/scripts.pory"
waitmovement 0
# 361 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 362 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 363 "data/maps/Route110/scripts.pory"
waitmovement 0
# 364 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 365 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 366 "data/maps/Route110/scripts.pory"
end
# 367 "data/maps/Route110/scripts.pory"

# 368 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 369 "data/maps/Route110/scripts.pory"
	faceplayer
# 370 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 371 "data/maps/Route110/scripts.pory"
	end
# 372 "data/maps/Route110/scripts.pory"

# 373 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 374 "data/maps/Route110/scripts.pory"
	faceplayer
# 375 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 376 "data/maps/Route110/scripts.pory"
	release
# 377 "data/maps/Route110/scripts.pory"
	end
# 378 "data/maps/Route110/scripts.pory"

# 379 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 380 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 381 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 382 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 383 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 384 "data/maps/Route110/scripts.pory"
	release
# 385 "data/maps/Route110/scripts.pory"
	end
# 386 "data/maps/Route110/scripts.pory"

# 387 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 388 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 389 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 390 "data/maps/Route110/scripts.pory"
	end
# 391 "data/maps/Route110/scripts.pory"

# 392 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelKaleb::
# 393 "data/maps/Route110/scripts.pory"
lockall
# 394 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ISABEL
# 395 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 396 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 397 "data/maps/Route110/scripts.pory"
waitmovement 0
# 398 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 399 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 400 "data/maps/Route110/scripts.pory"
waitmovement 0
# 401 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_IsabelIntro MSGBOX_AUTOCLOSE
# 402 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_KALEB
# 403 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 404 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 405 "data/maps/Route110/scripts.pory"
waitmovement 0
# 406 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 407 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 408 "data/maps/Route110/scripts.pory"
waitmovement 0
# 409 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_KalebIntro, MSGBOX_AUTOCLOSE
# 410 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_IsabelKalebDoMultiBattle
# 411 "data/maps/Route110/scripts.pory"
releaseall
# 412 "data/maps/Route110/scripts.pory"
end
# 413 "data/maps/Route110/scripts.pory"

# 414 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelKalebDoMultiBattle::
# 415 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 416 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_ISABEL_1, Route110_Text_IsabelDefeated, TRAINER_KALEB, Route110_Text_KalebDefeated, PARTNER_EMMIE
# 417 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 418 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_IsabelKalebVictory
# 419 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 420 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 421 "data/maps/Route110/scripts.pory"
waitstate
# 422 "data/maps/Route110/scripts.pory"

# 423 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelKalebVictory::
# 424 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 425 "data/maps/Route110/scripts.pory"
waitmovement 0
# 426 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_IsabelPostBattle, MSGBOX_AUTOCLOSE
# 427 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 428 "data/maps/Route110/scripts.pory"
waitmovement 0
# 429 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 430 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 431 "data/maps/Route110/scripts.pory"
end
# 432 "data/maps/Route110/scripts.pory"

# 433 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 434 "data/maps/Route110/scripts.pory"
	faceplayer
# 435 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 436 "data/maps/Route110/scripts.pory"
	release
# 437 "data/maps/Route110/scripts.pory"
	end
# 438 "data/maps/Route110/scripts.pory"

# 439 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 440 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 441 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 442 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 443 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 444 "data/maps/Route110/scripts.pory"
	release
# 445 "data/maps/Route110/scripts.pory"
	end
# 446 "data/maps/Route110/scripts.pory"

# 447 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 448 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 449 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 450 "data/maps/Route110/scripts.pory"
	end
# 451 "data/maps/Route110/scripts.pory"

# 452 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 453 "data/maps/Route110/scripts.pory"
	faceplayer
# 454 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 455 "data/maps/Route110/scripts.pory"
	end
# 456 "data/maps/Route110/scripts.pory"

# 457 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 458 "data/maps/Route110/scripts.pory"
	end
# 459 "data/maps/Route110/scripts.pory"

# 460 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 461 "data/maps/Route110/scripts.pory"
	faceplayer
# 462 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 463 "data/maps/Route110/scripts.pory"
	end
# 464 "data/maps/Route110/scripts.pory"

# 465 "data/maps/Route110/scripts.pory"
Route110_EventScript_JosephEdwin::
# 466 "data/maps/Route110/scripts.pory"
lockall
# 467 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_JOSEPH
# 468 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 469 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 470 "data/maps/Route110/scripts.pory"
waitmovement 0
# 471 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 472 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 473 "data/maps/Route110/scripts.pory"
waitmovement 0
# 474 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JosephIntro MSGBOX_AUTOCLOSE
# 475 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_EDWIN
# 476 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 477 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 478 "data/maps/Route110/scripts.pory"
waitmovement 0
# 479 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 480 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 481 "data/maps/Route110/scripts.pory"
waitmovement 0
# 482 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_EdwinIntro, MSGBOX_AUTOCLOSE
# 483 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_JosephEdwinDoMultiBattle
# 484 "data/maps/Route110/scripts.pory"
releaseall
# 485 "data/maps/Route110/scripts.pory"
end
# 486 "data/maps/Route110/scripts.pory"

# 487 "data/maps/Route110/scripts.pory"
Route110_EventScript_JosephEdwinDoMultiBattle::
# 488 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 489 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_JOSEPH, Route110_Text_JosephDefeated, TRAINER_EDWIN_1, Route110_Text_EdwinDefeated, PARTNER_EMMIE
# 490 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 491 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_JosephEdwinVictory
# 492 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 493 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 494 "data/maps/Route110/scripts.pory"
waitstate
# 495 "data/maps/Route110/scripts.pory"

# 496 "data/maps/Route110/scripts.pory"
Route110_EventScript_JosephEdwinVictory::
# 497 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 498 "data/maps/Route110/scripts.pory"
waitmovement 0
# 499 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 500 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 501 "data/maps/Route110/scripts.pory"
waitmovement 0
# 502 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_EdwinPostBattle, MSGBOX_AUTOCLOSE
# 503 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 504 "data/maps/Route110/scripts.pory"
end
# 505 "data/maps/Route110/scripts.pory"

# 506 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 507 "data/maps/Route110/scripts.pory"
	faceplayer
# 508 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 509 "data/maps/Route110/scripts.pory"
	end
# 510 "data/maps/Route110/scripts.pory"

# 511 "data/maps/Route110/scripts.pory"
Route110_EventScript_AlyssaBenjamin::
# 512 "data/maps/Route110/scripts.pory"
lockall
# 513 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ALYSSA
# 514 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 515 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 516 "data/maps/Route110/scripts.pory"
waitmovement 0
# 517 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 518 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 519 "data/maps/Route110/scripts.pory"
waitmovement 0
# 520 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AlyssaIntro MSGBOX_AUTOCLOSE
# 521 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_BENJAMIN
# 522 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 523 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 524 "data/maps/Route110/scripts.pory"
waitmovement 0
# 525 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 526 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 527 "data/maps/Route110/scripts.pory"
waitmovement 0
# 528 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_BenjaminIntro, MSGBOX_AUTOCLOSE
# 529 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_AlyssaBenjaminDoMultiBattle
# 530 "data/maps/Route110/scripts.pory"
releaseall
# 531 "data/maps/Route110/scripts.pory"
end
# 532 "data/maps/Route110/scripts.pory"

# 533 "data/maps/Route110/scripts.pory"
Route110_EventScript_AlyssaBenjaminDoMultiBattle::
# 534 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 535 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_ALYSSA, Route110_Text_AlyssaDefeated, TRAINER_BENJAMIN_1, Route110_Text_BenjaminDefeated, PARTNER_EMMIE
# 536 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 537 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_AlyssaBenjaminVictory
# 538 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 539 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 540 "data/maps/Route110/scripts.pory"
waitstate
# 541 "data/maps/Route110/scripts.pory"

# 542 "data/maps/Route110/scripts.pory"
Route110_EventScript_AlyssaBenjaminVictory::
# 543 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 544 "data/maps/Route110/scripts.pory"
waitmovement 0
# 545 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 546 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 547 "data/maps/Route110/scripts.pory"
waitmovement 0
# 548 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_BenjaminPostBattle, MSGBOX_AUTOCLOSE
# 549 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 550 "data/maps/Route110/scripts.pory"
end
# 551 "data/maps/Route110/scripts.pory"

# 552 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 553 "data/maps/Route110/scripts.pory"
	faceplayer
# 554 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 555 "data/maps/Route110/scripts.pory"
	end
# 556 "data/maps/Route110/scripts.pory"

# 557 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 558 "data/maps/Route110/scripts.pory"
	lockall
# 559 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 560 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 561 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 562 "data/maps/Route110/scripts.pory"
	releaseall
# 563 "data/maps/Route110/scripts.pory"
	end
# 564 "data/maps/Route110/scripts.pory"

# 565 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 566 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 567 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 568 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 569 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 570 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 571 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 572 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 573 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 574 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 575 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 576 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 577 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 578 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 579 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 580 "data/maps/Route110/scripts.pory"
	end
# 581 "data/maps/Route110/scripts.pory"

# 582 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 583 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 584 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 585 "data/maps/Route110/scripts.pory"
	end
# 586 "data/maps/Route110/scripts.pory"

# 587 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 588 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 589 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 590 "data/maps/Route110/scripts.pory"
	end
# 591 "data/maps/Route110/scripts.pory"

# 592 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 593 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 594 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 595 "data/maps/Route110/scripts.pory"
	end
# 596 "data/maps/Route110/scripts.pory"

# 597 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 598 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 599 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 600 "data/maps/Route110/scripts.pory"
	end
# 601 "data/maps/Route110/scripts.pory"

# 602 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 603 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 604 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 605 "data/maps/Route110/scripts.pory"
	end
# 606 "data/maps/Route110/scripts.pory"

# 607 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 608 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 609 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 610 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 611 "data/maps/Route110/scripts.pory"
	return
# 612 "data/maps/Route110/scripts.pory"

# 613 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 614 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 615 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 616 "data/maps/Route110/scripts.pory"
	end
# 617 "data/maps/Route110/scripts.pory"

# 618 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 619 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 620 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 621 "data/maps/Route110/scripts.pory"
	end
# 622 "data/maps/Route110/scripts.pory"

# 623 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 624 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 625 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 626 "data/maps/Route110/scripts.pory"
	end
# 627 "data/maps/Route110/scripts.pory"

# 628 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 629 "data/maps/Route110/scripts.pory"
	lockall
# 630 "data/maps/Route110/scripts.pory"
	checkplayergender
# 631 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 632 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 633 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 634 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 635 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 636 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 637 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 638 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 639 "data/maps/Route110/scripts.pory"
	delay 30
# 640 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 641 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 642 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 643 "data/maps/Route110/scripts.pory"
	checkplayergender
# 644 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 645 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 646 "data/maps/Route110/scripts.pory"
	releaseall
# 647 "data/maps/Route110/scripts.pory"
	end
# 648 "data/maps/Route110/scripts.pory"

# 649 "data/maps/Route110/scripts.pory"
Route110_EventScript_NorthBlock::
# 650 "data/maps/Route110/scripts.pory"
	lockall
# 651 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FacePlayer
# 652 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 653 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 654 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 655 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 656 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 657 "data/maps/Route110/scripts.pory"
	delay 30
# 658 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_LetsCycleHome, MSGBOX_DEFAULT
# 659 "data/maps/Route110/scripts.pory"
	closemessage
# 660 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Route110_Movement_NorthBlock
# 661 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER Route110_Movement_NorthBlock
# 662 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 663 "data/maps/Route110/scripts.pory"
	releaseall
# 664 "data/maps/Route110/scripts.pory"
	end
# 665 "data/maps/Route110/scripts.pory"

# 666 "data/maps/Route110/scripts.pory"
Route110_Movement_NorthBlock:
# 667 "data/maps/Route110/scripts.pory"

# 668 "data/maps/Route110/scripts.pory"
	walk_up
# 669 "data/maps/Route110/scripts.pory"
	step_end
# 670 "data/maps/Route110/scripts.pory"

# 671 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 672 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 673 "data/maps/Route110/scripts.pory"
	return
# 674 "data/maps/Route110/scripts.pory"

# 675 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 676 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 677 "data/maps/Route110/scripts.pory"
	return
# 678 "data/maps/Route110/scripts.pory"

# 679 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 680 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 681 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 682 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 683 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 684 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 685 "data/maps/Route110/scripts.pory"
	end
# 686 "data/maps/Route110/scripts.pory"

# 687 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 688 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 689 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 690 "data/maps/Route110/scripts.pory"
	end
# 691 "data/maps/Route110/scripts.pory"

# 692 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 693 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 694 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 695 "data/maps/Route110/scripts.pory"
	end
# 696 "data/maps/Route110/scripts.pory"

# 697 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 698 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 699 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 700 "data/maps/Route110/scripts.pory"
	end
# 701 "data/maps/Route110/scripts.pory"

# 702 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 703 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 704 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 705 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 706 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 707 "data/maps/Route110/scripts.pory"
	end
# 708 "data/maps/Route110/scripts.pory"

# 709 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 710 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 711 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 712 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 713 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 714 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 715 "data/maps/Route110/scripts.pory"
	end
# 716 "data/maps/Route110/scripts.pory"

# 717 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 718 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 719 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 720 "data/maps/Route110/scripts.pory"
	end
# 721 "data/maps/Route110/scripts.pory"

# 722 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 723 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 724 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 725 "data/maps/Route110/scripts.pory"
	end
# 726 "data/maps/Route110/scripts.pory"

# 727 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 728 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 729 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 730 "data/maps/Route110/scripts.pory"
	end
# 731 "data/maps/Route110/scripts.pory"

# 732 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 733 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 734 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 735 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 736 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 737 "data/maps/Route110/scripts.pory"
	end
# 738 "data/maps/Route110/scripts.pory"

# 739 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 740 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 741 "data/maps/Route110/scripts.pory"
	return
# 742 "data/maps/Route110/scripts.pory"

# 743 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 744 "data/maps/Route110/scripts.pory"
	closemessage
# 745 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 746 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 747 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 748 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 749 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 750 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 751 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 752 "data/maps/Route110/scripts.pory"
	delay 45
# 753 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 754 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 755 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 756 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 757 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 758 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 759 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 760 "data/maps/Route110/scripts.pory"
	releaseall
# 761 "data/maps/Route110/scripts.pory"
	end
# 762 "data/maps/Route110/scripts.pory"

# 763 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 764 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 765 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 766 "data/maps/Route110/scripts.pory"
	return
# 767 "data/maps/Route110/scripts.pory"

# 768 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 769 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 770 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 771 "data/maps/Route110/scripts.pory"
	return
# 772 "data/maps/Route110/scripts.pory"

# 773 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 774 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 775 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 776 "data/maps/Route110/scripts.pory"
	return
# 777 "data/maps/Route110/scripts.pory"

# 778 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 779 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 780 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 781 "data/maps/Route110/scripts.pory"
	return
# 782 "data/maps/Route110/scripts.pory"

# 783 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 784 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 785 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 786 "data/maps/Route110/scripts.pory"
	return
# 787 "data/maps/Route110/scripts.pory"

# 788 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 789 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 790 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 791 "data/maps/Route110/scripts.pory"
	return
# 792 "data/maps/Route110/scripts.pory"

# 793 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 794 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 795 "data/maps/Route110/scripts.pory"
	return
# 796 "data/maps/Route110/scripts.pory"

# 797 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 798 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 799 "data/maps/Route110/scripts.pory"
	return
# 800 "data/maps/Route110/scripts.pory"

# 801 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 802 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 803 "data/maps/Route110/scripts.pory"
	return
# 804 "data/maps/Route110/scripts.pory"

# 805 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 806 "data/maps/Route110/scripts.pory"
	walk_down
# 807 "data/maps/Route110/scripts.pory"
	walk_left
# 808 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 809 "data/maps/Route110/scripts.pory"
	step_end
# 810 "data/maps/Route110/scripts.pory"

# 811 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 812 "data/maps/Route110/scripts.pory"
	walk_down
# 813 "data/maps/Route110/scripts.pory"
	step_end
# 814 "data/maps/Route110/scripts.pory"

# 815 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 816 "data/maps/Route110/scripts.pory"
	walk_down
# 817 "data/maps/Route110/scripts.pory"
	walk_right
# 818 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 819 "data/maps/Route110/scripts.pory"
	step_end
# 820 "data/maps/Route110/scripts.pory"

# 821 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 822 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 823 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 824 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 825 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 826 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 827 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 828 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 829 "data/maps/Route110/scripts.pory"
	step_end
# 830 "data/maps/Route110/scripts.pory"

# 831 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 832 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 833 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 834 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 835 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 836 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 837 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 838 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 839 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 840 "data/maps/Route110/scripts.pory"
	step_end
# 841 "data/maps/Route110/scripts.pory"

# 842 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 843 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 844 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 845 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 846 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 847 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 848 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 849 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 850 "data/maps/Route110/scripts.pory"
	step_end
# 851 "data/maps/Route110/scripts.pory"

# 852 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 853 "data/maps/Route110/scripts.pory"
	lockall
# 854 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 855 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 856 "data/maps/Route110/scripts.pory"

# 857 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 858 "data/maps/Route110/scripts.pory"
	lockall
# 859 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 860 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 861 "data/maps/Route110/scripts.pory"

# 862 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 863 "data/maps/Route110/scripts.pory"
	lockall
# 864 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 865 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 866 "data/maps/Route110/scripts.pory"

# 867 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 868 "data/maps/Route110/scripts.pory"
	lockall
# 869 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 870 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 871 "data/maps/Route110/scripts.pory"

# 872 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 873 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 874 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 875 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 876 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 877 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 878 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 879 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 880 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 881 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 882 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 883 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 884 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 885 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 886 "data/maps/Route110/scripts.pory"
	closemessage
# 887 "data/maps/Route110/scripts.pory"
	delay 20
# 888 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 889 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 890 "data/maps/Route110/scripts.pory"
	delay 10
# 891 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 892 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 893 "data/maps/Route110/scripts.pory"
	delay 20
# 894 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 895 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 896 "data/maps/Route110/scripts.pory"
	delay 30
# 897 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 898 "data/maps/Route110/scripts.pory"
	closemessage
# 899 "data/maps/Route110/scripts.pory"
	delay 30
# 900 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 901 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 902 "data/maps/Route110/scripts.pory"
	waitfanfare
# 903 "data/maps/Route110/scripts.pory"
	closemessage
# 904 "data/maps/Route110/scripts.pory"
	delay 30
# 905 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 906 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 907 "data/maps/Route110/scripts.pory"
	closemessage
# 908 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 909 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 910 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 911 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 912 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 913 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 914 "data/maps/Route110/scripts.pory"
	releaseall
# 915 "data/maps/Route110/scripts.pory"
	end
# 916 "data/maps/Route110/scripts.pory"

# 917 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 918 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 919 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 920 "data/maps/Route110/scripts.pory"
	return
# 921 "data/maps/Route110/scripts.pory"

# 922 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 923 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 924 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 925 "data/maps/Route110/scripts.pory"
	return
# 926 "data/maps/Route110/scripts.pory"

# 927 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 928 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 929 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 930 "data/maps/Route110/scripts.pory"
	return
# 931 "data/maps/Route110/scripts.pory"

# 932 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 933 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 934 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 935 "data/maps/Route110/scripts.pory"
	return
# 936 "data/maps/Route110/scripts.pory"

# 937 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 938 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 939 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 940 "data/maps/Route110/scripts.pory"
	return
# 941 "data/maps/Route110/scripts.pory"

# 942 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 943 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 944 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 945 "data/maps/Route110/scripts.pory"
	return
# 946 "data/maps/Route110/scripts.pory"

# 947 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 948 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 949 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 950 "data/maps/Route110/scripts.pory"
	return
# 951 "data/maps/Route110/scripts.pory"

# 952 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 953 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 954 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 955 "data/maps/Route110/scripts.pory"
	return
# 956 "data/maps/Route110/scripts.pory"

# 957 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 958 "data/maps/Route110/scripts.pory"
	walk_down
# 959 "data/maps/Route110/scripts.pory"
	walk_down
# 960 "data/maps/Route110/scripts.pory"
	walk_down
# 961 "data/maps/Route110/scripts.pory"
	step_end
# 962 "data/maps/Route110/scripts.pory"

# 963 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 964 "data/maps/Route110/scripts.pory"
	walk_down
# 965 "data/maps/Route110/scripts.pory"
	walk_left
# 966 "data/maps/Route110/scripts.pory"
	walk_left
# 967 "data/maps/Route110/scripts.pory"
	walk_down
# 968 "data/maps/Route110/scripts.pory"
	step_end
# 969 "data/maps/Route110/scripts.pory"

# 970 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 971 "data/maps/Route110/scripts.pory"
	walk_down
# 972 "data/maps/Route110/scripts.pory"
	walk_left
# 973 "data/maps/Route110/scripts.pory"
	walk_down
# 974 "data/maps/Route110/scripts.pory"
	step_end
# 975 "data/maps/Route110/scripts.pory"

# 976 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 977 "data/maps/Route110/scripts.pory"
	walk_down
# 978 "data/maps/Route110/scripts.pory"
	walk_down
# 979 "data/maps/Route110/scripts.pory"
	step_end
# 980 "data/maps/Route110/scripts.pory"

# 981 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 982 "data/maps/Route110/scripts.pory"
	walk_down
# 983 "data/maps/Route110/scripts.pory"
	walk_right
# 984 "data/maps/Route110/scripts.pory"
	walk_down
# 985 "data/maps/Route110/scripts.pory"
	step_end
# 986 "data/maps/Route110/scripts.pory"

# 987 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 988 "data/maps/Route110/scripts.pory"
	walk_up
# 989 "data/maps/Route110/scripts.pory"
	walk_up
# 990 "data/maps/Route110/scripts.pory"
	walk_right
# 991 "data/maps/Route110/scripts.pory"
	walk_up
# 992 "data/maps/Route110/scripts.pory"
	walk_up
# 993 "data/maps/Route110/scripts.pory"
	walk_up
# 994 "data/maps/Route110/scripts.pory"
	step_end
# 995 "data/maps/Route110/scripts.pory"

# 996 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 997 "data/maps/Route110/scripts.pory"
	walk_up
# 998 "data/maps/Route110/scripts.pory"
	walk_up
# 999 "data/maps/Route110/scripts.pory"
	walk_up
# 1000 "data/maps/Route110/scripts.pory"
	walk_up
# 1001 "data/maps/Route110/scripts.pory"
	walk_up
# 1002 "data/maps/Route110/scripts.pory"
	step_end
# 1003 "data/maps/Route110/scripts.pory"

# 1004 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 1005 "data/maps/Route110/scripts.pory"
	walk_up
# 1006 "data/maps/Route110/scripts.pory"
	walk_up
# 1007 "data/maps/Route110/scripts.pory"
	walk_up
# 1008 "data/maps/Route110/scripts.pory"
	walk_up
# 1009 "data/maps/Route110/scripts.pory"
	walk_up
# 1010 "data/maps/Route110/scripts.pory"
	step_end
# 1011 "data/maps/Route110/scripts.pory"

# 1012 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 1013 "data/maps/Route110/scripts.pory"
	walk_up
# 1014 "data/maps/Route110/scripts.pory"
	walk_up
# 1015 "data/maps/Route110/scripts.pory"
	walk_up
# 1016 "data/maps/Route110/scripts.pory"
	walk_up
# 1017 "data/maps/Route110/scripts.pory"
	walk_up
# 1018 "data/maps/Route110/scripts.pory"
	step_end
# 1019 "data/maps/Route110/scripts.pory"

# 1020 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 1021 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 1022 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 1023 "data/maps/Route110/scripts.pory"

# 1024 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 1025 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 1026 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 1027 "data/maps/Route110/scripts.pory"

# 1028 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 1029 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 1030 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 1031 "data/maps/Route110/scripts.pory"

# 1032 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 1033 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 1034 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 1035 "data/maps/Route110/scripts.pory"

# 1036 "data/maps/Route110/scripts.pory"
Route110_Text_LetsCycleHome:
# 1037 "data/maps/Route110/scripts.pory"
	.string "You know, {PLAYER}, I've never been\n"
# 1038 "data/maps/Route110/scripts.pory"
	.string "on the Cycling Road.\p"
# 1039 "data/maps/Route110/scripts.pory"
	.string "Why don't we check out the Mauville\n"
# 1040 "data/maps/Route110/scripts.pory"
	.string "bike shop and take that route home?$"
# 1041 "data/maps/Route110/scripts.pory"

# 1042 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 1043 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 1044 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 1045 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 1046 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 1047 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 1048 "data/maps/Route110/scripts.pory"

# 1049 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 1050 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 1051 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 1052 "data/maps/Route110/scripts.pory"

# 1053 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 1054 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 1055 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 1056 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 1057 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 1058 "data/maps/Route110/scripts.pory"

# 1059 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 1060 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 1061 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 1062 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 1063 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 1064 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 1065 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 1066 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 1067 "data/maps/Route110/scripts.pory"

# 1068 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 1069 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 1070 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 1071 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 1072 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 1073 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 1074 "data/maps/Route110/scripts.pory"

# 1075 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 1076 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 1077 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 1078 "data/maps/Route110/scripts.pory"

# 1079 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 1080 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 1081 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 1082 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 1083 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 1084 "data/maps/Route110/scripts.pory"

# 1085 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 1086 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 1087 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 1088 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 1089 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 1090 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 1091 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 1092 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 1093 "data/maps/Route110/scripts.pory"

# 1094 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 1095 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 1096 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 1097 "data/maps/Route110/scripts.pory"

# 1098 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 1099 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 1100 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 1101 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 1102 "data/maps/Route110/scripts.pory"

# 1103 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 1104 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 1105 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 1106 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 1107 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1108 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1109 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1110 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1111 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1112 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1113 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1114 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1115 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 1116 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 1117 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 1118 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 1119 "data/maps/Route110/scripts.pory"

# 1120 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 1121 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 1122 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 1123 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 1124 "data/maps/Route110/scripts.pory"

# 1125 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 1126 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 1127 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 1128 "data/maps/Route110/scripts.pory"

# 1129 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 1130 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 1131 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 1132 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 1133 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 1134 "data/maps/Route110/scripts.pory"

# 1135 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 1136 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 1137 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 1138 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 1139 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 1140 "data/maps/Route110/scripts.pory"

# 1141 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 1142 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 1143 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 1144 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 1145 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 1146 "data/maps/Route110/scripts.pory"

# 1147 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 1148 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 1149 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 1150 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 1151 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 1152 "data/maps/Route110/scripts.pory"

# 1153 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 1154 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 1155 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 1156 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 1157 "data/maps/Route110/scripts.pory"

# 1158 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 1159 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 1160 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 1161 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 1162 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 1163 "data/maps/Route110/scripts.pory"

# 1164 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 1165 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 1166 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 1167 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 1168 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 1169 "data/maps/Route110/scripts.pory"

# 1170 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 1171 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 1172 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 1173 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 1174 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 1175 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 1176 "data/maps/Route110/scripts.pory"

# 1177 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 1178 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 1179 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 1180 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 1181 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 1182 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 1183 "data/maps/Route110/scripts.pory"

# 1184 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 1185 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 1186 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 1187 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 1188 "data/maps/Route110/scripts.pory"

# 1189 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 1190 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 1191 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 1192 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 1193 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 1194 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 1195 "data/maps/Route110/scripts.pory"

# 1196 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 1197 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1198 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 1199 "data/maps/Route110/scripts.pory"

# 1200 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 1201 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 1202 "data/maps/Route110/scripts.pory"

# 1203 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 1204 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 1205 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 1206 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 1207 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 1208 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 1209 "data/maps/Route110/scripts.pory"

# 1210 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 1211 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1212 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 1213 "data/maps/Route110/scripts.pory"

# 1214 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 1215 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 1216 "data/maps/Route110/scripts.pory"

# 1217 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 1218 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1219 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 1220 "data/maps/Route110/scripts.pory"

# 1221 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 1222 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1223 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 1224 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 1225 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 1226 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 1227 "data/maps/Route110/scripts.pory"

# 1228 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 1229 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1230 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 1231 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 1232 "data/maps/Route110/scripts.pory"

# 1233 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 1234 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 1235 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 1236 "data/maps/Route110/scripts.pory"

# 1237 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 1238 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1239 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 1240 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 1241 "data/maps/Route110/scripts.pory"

# 1242 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 1243 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1244 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 1245 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 1246 "data/maps/Route110/scripts.pory"

# 1247 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 1248 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 1249 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 1250 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 1251 "data/maps/Route110/scripts.pory"

# 1252 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 1253 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 1254 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 1255 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 1256 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 1257 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 1258 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 1259 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 1260 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 1261 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 1262 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 1263 "data/maps/Route110/scripts.pory"

# 1264 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 1265 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 1266 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 1267 "data/maps/Route110/scripts.pory"

# 1268 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1269 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1270 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1271 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1272 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1273 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"
