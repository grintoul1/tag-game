# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 21
# 3 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 36
# 4 "data/maps/Route110/scripts.pory"
.set LOCALID_ISABEL, 28
# 5 "data/maps/Route110/scripts.pory"
.set LOCALID_KALEB, 29
# 6 "data/maps/Route110/scripts.pory"
.set LOCALID_JOSEPH, 31
# 7 "data/maps/Route110/scripts.pory"
.set LOCALID_EDWIN, 14
# 8 "data/maps/Route110/scripts.pory"
.set LOCALID_TIMMY, 27
# 9 "data/maps/Route110/scripts.pory"
.set LOCALID_EDWARD, 12
# 10 "data/maps/Route110/scripts.pory"
.set LOCALID_ANTHONY, 9
# 11 "data/maps/Route110/scripts.pory"
.set LOCALID_ABIGAIL, 10
# 12 "data/maps/Route110/scripts.pory"
.set LOCALID_ALYSSA, 30
# 13 "data/maps/Route110/scripts.pory"
.set LOCALID_BENJAMIN, 11
# 14 "data/maps/Route110/scripts.pory"
.set LOCALID_JASMINE, 8
# 15 "data/maps/Route110/scripts.pory"
.set LOCALID_JACOB, 26
# 16 "data/maps/Route110/scripts.pory"

# 17 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 18 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 19 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 20 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 21 "data/maps/Route110/scripts.pory"
	.byte 0
# 22 "data/maps/Route110/scripts.pory"

# 23 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 24 "data/maps/Route110/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 25 "data/maps/Route110/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 26 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 27 "data/maps/Route110/scripts.pory"
	end
# 28 "data/maps/Route110/scripts.pory"

# 29 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 30 "data/maps/Route110/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 31 "data/maps/Route110/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 32 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 33 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 34 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 35 "data/maps/Route110/scripts.pory"
	end
# 36 "data/maps/Route110/scripts.pory"

# 37 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 38 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 39 "data/maps/Route110/scripts.pory"
	return
# 40 "data/maps/Route110/scripts.pory"

# 41 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 42 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 43 "data/maps/Route110/scripts.pory"
	.2byte 0
# 44 "data/maps/Route110/scripts.pory"

# 45 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 46 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 47 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 48 "data/maps/Route110/scripts.pory"
	return
# 49 "data/maps/Route110/scripts.pory"

# 50 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 51 "data/maps/Route110/scripts.pory"
	lock
# 52 "data/maps/Route110/scripts.pory"
	faceplayer
# 53 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 54 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 55 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route110/scripts.pory"
	release
# 57 "data/maps/Route110/scripts.pory"
	end
# 58 "data/maps/Route110/scripts.pory"

# 59 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 60 "data/maps/Route110/scripts.pory"
	lock
# 61 "data/maps/Route110/scripts.pory"
	faceplayer
# 62 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 63 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 64 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route110/scripts.pory"
	release
# 66 "data/maps/Route110/scripts.pory"
	end
# 67 "data/maps/Route110/scripts.pory"

# 68 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 69 "data/maps/Route110/scripts.pory"
	lock
# 70 "data/maps/Route110/scripts.pory"
	faceplayer
# 71 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 72 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 73 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route110/scripts.pory"
	release
# 75 "data/maps/Route110/scripts.pory"
	end
# 76 "data/maps/Route110/scripts.pory"

# 77 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 78 "data/maps/Route110/scripts.pory"
	lock
# 79 "data/maps/Route110/scripts.pory"
	faceplayer
# 80 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 81 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 82 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route110/scripts.pory"
	release
# 84 "data/maps/Route110/scripts.pory"
	end
# 85 "data/maps/Route110/scripts.pory"

# 86 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 87 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 88 "data/maps/Route110/scripts.pory"
	end
# 89 "data/maps/Route110/scripts.pory"

# 90 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 91 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 92 "data/maps/Route110/scripts.pory"
	end
# 93 "data/maps/Route110/scripts.pory"

# 94 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 95 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 96 "data/maps/Route110/scripts.pory"
	end
# 97 "data/maps/Route110/scripts.pory"

# 98 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 99 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 100 "data/maps/Route110/scripts.pory"
	end
# 101 "data/maps/Route110/scripts.pory"

# 102 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 103 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 104 "data/maps/Route110/scripts.pory"
	end
# 105 "data/maps/Route110/scripts.pory"

# 106 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 107 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 108 "data/maps/Route110/scripts.pory"
	end
# 109 "data/maps/Route110/scripts.pory"

# 110 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 111 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 112 "data/maps/Route110/scripts.pory"
	end
# 113 "data/maps/Route110/scripts.pory"

# 114 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 115 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 116 "data/maps/Route110/scripts.pory"
	end
# 117 "data/maps/Route110/scripts.pory"

# 118 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 119 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 120 "data/maps/Route110/scripts.pory"
	end
# 121 "data/maps/Route110/scripts.pory"

# 122 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 123 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 124 "data/maps/Route110/scripts.pory"
	end
# 125 "data/maps/Route110/scripts.pory"

# 126 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 127 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 128 "data/maps/Route110/scripts.pory"
	end
# 129 "data/maps/Route110/scripts.pory"

# 130 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 131 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 132 "data/maps/Route110/scripts.pory"
	end
# 133 "data/maps/Route110/scripts.pory"

# 134 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 135 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 136 "data/maps/Route110/scripts.pory"
	end
# 137 "data/maps/Route110/scripts.pory"

# 138 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 139 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 140 "data/maps/Route110/scripts.pory"
	end
# 141 "data/maps/Route110/scripts.pory"

# 142 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 143 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 144 "data/maps/Route110/scripts.pory"
	end
# 145 "data/maps/Route110/scripts.pory"

# 146 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 147 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 148 "data/maps/Route110/scripts.pory"
	end
# 149 "data/maps/Route110/scripts.pory"

# 150 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 151 "data/maps/Route110/scripts.pory"
	lockall
# 152 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 153 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 154 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 155 "data/maps/Route110/scripts.pory"
	releaseall
# 156 "data/maps/Route110/scripts.pory"
	end
# 157 "data/maps/Route110/scripts.pory"

# 158 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 159 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 160 "data/maps/Route110/scripts.pory"
	releaseall
# 161 "data/maps/Route110/scripts.pory"
	end
# 162 "data/maps/Route110/scripts.pory"

# 163 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 164 "data/maps/Route110/scripts.pory"
	lock
# 165 "data/maps/Route110/scripts.pory"
	faceplayer
# 166 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 167 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 168 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 169 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 170 "data/maps/Route110/scripts.pory"
	release
# 171 "data/maps/Route110/scripts.pory"
	end
# 172 "data/maps/Route110/scripts.pory"

# 173 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 174 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 175 "data/maps/Route110/scripts.pory"
	release
# 176 "data/maps/Route110/scripts.pory"
	end
# 177 "data/maps/Route110/scripts.pory"

# 178 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 179 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 180 "data/maps/Route110/scripts.pory"
	release
# 181 "data/maps/Route110/scripts.pory"
	end
# 182 "data/maps/Route110/scripts.pory"

# 183 "data/maps/Route110/scripts.pory"
Route110_EventScript_TimmyEdward::
# 184 "data/maps/Route110/scripts.pory"
	lockall
# 185 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, LOCALID_TIMMY
# 186 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 187 "data/maps/Route110/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 188 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, TRUE
# 190 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 191 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 192 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyIntro MSGBOX_AUTOCLOSE
# 193 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, LOCALID_EDWARD
# 194 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 195 "data/maps/Route110/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 196 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 198 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 199 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardIntro MSGBOX_AUTOCLOSE
# 201 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_TimmyEdwardDoMultiBattle
# 202 "data/maps/Route110/scripts.pory"
	releaseall
# 203 "data/maps/Route110/scripts.pory"
	end
# 204 "data/maps/Route110/scripts.pory"

# 205 "data/maps/Route110/scripts.pory"
Route110_EventScript_TimmyEdwardDoMultiBattle::
# 206 "data/maps/Route110/scripts.pory"
	playbgm MUS_ROUTE110, TRUE
# 207 "data/maps/Route110/scripts.pory"
	multi_2p_vs_2 TRAINER_TIMMY, Route110_Text_TimmyDefeated, TRAINER_EDWARD, Route110_Text_EdwardDefeated, PARTNER_EMMIE
# 208 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 209 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_TimmyEdwardVictory
# 210 "data/maps/Route110/scripts.pory"
	fadescreen FADE_TO_BLACK
# 211 "data/maps/Route110/scripts.pory"
	special SetCB2WhiteOut
# 212 "data/maps/Route110/scripts.pory"
	waitstate
# 213 "data/maps/Route110/scripts.pory"

# 214 "data/maps/Route110/scripts.pory"
Route110_EventScript_TimmyEdwardVictory::
# 215 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 216 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 219 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 220 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route110/scripts.pory"
	addvar VAR_ROUTE110_STATE, 1
# 222 "data/maps/Route110/scripts.pory"
	end
# 223 "data/maps/Route110/scripts.pory"

# 224 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 225 "data/maps/Route110/scripts.pory"
	faceplayer
# 226 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/Route110/scripts.pory"
	end
# 228 "data/maps/Route110/scripts.pory"

# 229 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 230 "data/maps/Route110/scripts.pory"
	faceplayer
# 231 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/Route110/scripts.pory"
	end
# 233 "data/maps/Route110/scripts.pory"

# 234 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 235 "data/maps/Route110/scripts.pory"
	faceplayer
# 236 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 237 "data/maps/Route110/scripts.pory"
	release
# 238 "data/maps/Route110/scripts.pory"
	end
# 239 "data/maps/Route110/scripts.pory"

# 240 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 241 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 242 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 243 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 244 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 245 "data/maps/Route110/scripts.pory"
	release
# 246 "data/maps/Route110/scripts.pory"
	end
# 247 "data/maps/Route110/scripts.pory"

# 248 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 249 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 250 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/Route110/scripts.pory"
	end
# 252 "data/maps/Route110/scripts.pory"

# 253 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 254 "data/maps/Route110/scripts.pory"
	faceplayer
# 255 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/Route110/scripts.pory"
	end
# 257 "data/maps/Route110/scripts.pory"

# 258 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 259 "data/maps/Route110/scripts.pory"
	faceplayer
# 260 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/Route110/scripts.pory"
	end
# 262 "data/maps/Route110/scripts.pory"

# 263 "data/maps/Route110/scripts.pory"
Route110_EventScript_AnthonyAbigail::
# 264 "data/maps/Route110/scripts.pory"
lockall
# 265 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ANTHONY
# 266 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 267 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 268 "data/maps/Route110/scripts.pory"
waitmovement 0
# 269 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 270 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 271 "data/maps/Route110/scripts.pory"
waitmovement 0
# 272 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AnthonyIntro MSGBOX_AUTOCLOSE
# 273 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ABIGAIL
# 274 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 275 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 276 "data/maps/Route110/scripts.pory"
waitmovement 0
# 277 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 278 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 279 "data/maps/Route110/scripts.pory"
waitmovement 0
# 280 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AbigailIntro, MSGBOX_AUTOCLOSE
# 281 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_AnthonyAbigailDoMultiBattle
# 282 "data/maps/Route110/scripts.pory"
releaseall
# 283 "data/maps/Route110/scripts.pory"
end
# 284 "data/maps/Route110/scripts.pory"

# 285 "data/maps/Route110/scripts.pory"
Route110_EventScript_AnthonyAbigailDoMultiBattle::
# 286 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 287 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_ANTHONY, Route110_Text_AnthonyDefeated, TRAINER_ABIGAIL_1, Route110_Text_AbigailDefeated, PARTNER_EMMIE
# 288 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 289 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_AnthonyAbigailVictory
# 290 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 291 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 292 "data/maps/Route110/scripts.pory"
waitstate
# 293 "data/maps/Route110/scripts.pory"

# 294 "data/maps/Route110/scripts.pory"
Route110_EventScript_AnthonyAbigailVictory::
# 295 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 296 "data/maps/Route110/scripts.pory"
waitmovement 0
# 297 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 298 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 299 "data/maps/Route110/scripts.pory"
waitmovement 0
# 300 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AbigailPostBattle, MSGBOX_AUTOCLOSE
# 301 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 302 "data/maps/Route110/scripts.pory"
end
# 303 "data/maps/Route110/scripts.pory"

# 304 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 305 "data/maps/Route110/scripts.pory"
	faceplayer
# 306 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 307 "data/maps/Route110/scripts.pory"
	end
# 308 "data/maps/Route110/scripts.pory"

# 309 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 310 "data/maps/Route110/scripts.pory"
	faceplayer
# 311 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 312 "data/maps/Route110/scripts.pory"
	release
# 313 "data/maps/Route110/scripts.pory"
	end
# 314 "data/maps/Route110/scripts.pory"

# 315 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 316 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 317 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 318 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 319 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 320 "data/maps/Route110/scripts.pory"
	release
# 321 "data/maps/Route110/scripts.pory"
	end
# 322 "data/maps/Route110/scripts.pory"

# 323 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 324 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 325 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 326 "data/maps/Route110/scripts.pory"
	end
# 327 "data/maps/Route110/scripts.pory"

# 328 "data/maps/Route110/scripts.pory"
Route110_EventScript_JasmineJacob::
# 329 "data/maps/Route110/scripts.pory"
lockall
# 330 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_JASMINE
# 331 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 332 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 333 "data/maps/Route110/scripts.pory"
waitmovement 0
# 334 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 335 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 336 "data/maps/Route110/scripts.pory"
waitmovement 0
# 337 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JasmineIntro MSGBOX_AUTOCLOSE
# 338 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_JACOB
# 339 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 340 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 341 "data/maps/Route110/scripts.pory"
waitmovement 0
# 342 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 343 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 344 "data/maps/Route110/scripts.pory"
waitmovement 0
# 345 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JacobIntro, MSGBOX_AUTOCLOSE
# 346 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_JasmineJacobDoMultiBattle
# 347 "data/maps/Route110/scripts.pory"
releaseall
# 348 "data/maps/Route110/scripts.pory"
end
# 349 "data/maps/Route110/scripts.pory"

# 350 "data/maps/Route110/scripts.pory"
Route110_EventScript_JasmineJacobDoMultiBattle::
# 351 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 352 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_JASMINE, Route110_Text_JasmineDefeated, TRAINER_JACOB, Route110_Text_JacobDefeated, PARTNER_EMMIE
# 353 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 354 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_JasmineJacobVictory
# 355 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 356 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 357 "data/maps/Route110/scripts.pory"
waitstate
# 358 "data/maps/Route110/scripts.pory"

# 359 "data/maps/Route110/scripts.pory"
Route110_EventScript_JasmineJacobVictory::
# 360 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 361 "data/maps/Route110/scripts.pory"
waitmovement 0
# 362 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 363 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 364 "data/maps/Route110/scripts.pory"
waitmovement 0
# 365 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 366 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 367 "data/maps/Route110/scripts.pory"
end
# 368 "data/maps/Route110/scripts.pory"

# 369 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 370 "data/maps/Route110/scripts.pory"
	faceplayer
# 371 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 372 "data/maps/Route110/scripts.pory"
	end
# 373 "data/maps/Route110/scripts.pory"

# 374 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 375 "data/maps/Route110/scripts.pory"
	faceplayer
# 376 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 377 "data/maps/Route110/scripts.pory"
	release
# 378 "data/maps/Route110/scripts.pory"
	end
# 379 "data/maps/Route110/scripts.pory"

# 380 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 381 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 382 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 383 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 384 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 385 "data/maps/Route110/scripts.pory"
	release
# 386 "data/maps/Route110/scripts.pory"
	end
# 387 "data/maps/Route110/scripts.pory"

# 388 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 389 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 390 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 391 "data/maps/Route110/scripts.pory"
	end
# 392 "data/maps/Route110/scripts.pory"

# 393 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelKaleb::
# 394 "data/maps/Route110/scripts.pory"
lockall
# 395 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ISABEL
# 396 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 397 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 398 "data/maps/Route110/scripts.pory"
waitmovement 0
# 399 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 400 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 401 "data/maps/Route110/scripts.pory"
waitmovement 0
# 402 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_IsabelIntro MSGBOX_AUTOCLOSE
# 403 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_KALEB
# 404 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 405 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 406 "data/maps/Route110/scripts.pory"
waitmovement 0
# 407 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 408 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 409 "data/maps/Route110/scripts.pory"
waitmovement 0
# 410 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_KalebIntro, MSGBOX_AUTOCLOSE
# 411 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_IsabelKalebDoMultiBattle
# 412 "data/maps/Route110/scripts.pory"
releaseall
# 413 "data/maps/Route110/scripts.pory"
end
# 414 "data/maps/Route110/scripts.pory"

# 415 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelKalebDoMultiBattle::
# 416 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 417 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_ISABEL_1, Route110_Text_IsabelDefeated, TRAINER_KALEB, Route110_Text_KalebDefeated, PARTNER_EMMIE
# 418 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 419 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_IsabelKalebVictory
# 420 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 421 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 422 "data/maps/Route110/scripts.pory"
waitstate
# 423 "data/maps/Route110/scripts.pory"

# 424 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelKalebVictory::
# 425 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 426 "data/maps/Route110/scripts.pory"
waitmovement 0
# 427 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_IsabelPostBattle, MSGBOX_AUTOCLOSE
# 428 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 429 "data/maps/Route110/scripts.pory"
waitmovement 0
# 430 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 431 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 432 "data/maps/Route110/scripts.pory"
end
# 433 "data/maps/Route110/scripts.pory"

# 434 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 435 "data/maps/Route110/scripts.pory"
	faceplayer
# 436 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 437 "data/maps/Route110/scripts.pory"
	release
# 438 "data/maps/Route110/scripts.pory"
	end
# 439 "data/maps/Route110/scripts.pory"

# 440 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 441 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 442 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 443 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 444 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 445 "data/maps/Route110/scripts.pory"
	release
# 446 "data/maps/Route110/scripts.pory"
	end
# 447 "data/maps/Route110/scripts.pory"

# 448 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 449 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 450 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 451 "data/maps/Route110/scripts.pory"
	end
# 452 "data/maps/Route110/scripts.pory"

# 453 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 454 "data/maps/Route110/scripts.pory"
	faceplayer
# 455 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 456 "data/maps/Route110/scripts.pory"
	end
# 457 "data/maps/Route110/scripts.pory"

# 458 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 459 "data/maps/Route110/scripts.pory"
	end
# 460 "data/maps/Route110/scripts.pory"

# 461 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 462 "data/maps/Route110/scripts.pory"
	faceplayer
# 463 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 464 "data/maps/Route110/scripts.pory"
	end
# 465 "data/maps/Route110/scripts.pory"

# 466 "data/maps/Route110/scripts.pory"
Route110_EventScript_JosephEdwin::
# 467 "data/maps/Route110/scripts.pory"
lockall
# 468 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_JOSEPH
# 469 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 470 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 471 "data/maps/Route110/scripts.pory"
waitmovement 0
# 472 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 473 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 474 "data/maps/Route110/scripts.pory"
waitmovement 0
# 475 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JosephIntro MSGBOX_AUTOCLOSE
# 476 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_EDWIN
# 477 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 478 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 479 "data/maps/Route110/scripts.pory"
waitmovement 0
# 480 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 481 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 482 "data/maps/Route110/scripts.pory"
waitmovement 0
# 483 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_EdwinIntro, MSGBOX_AUTOCLOSE
# 484 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_JosephEdwinDoMultiBattle
# 485 "data/maps/Route110/scripts.pory"
releaseall
# 486 "data/maps/Route110/scripts.pory"
end
# 487 "data/maps/Route110/scripts.pory"

# 488 "data/maps/Route110/scripts.pory"
Route110_EventScript_JosephEdwinDoMultiBattle::
# 489 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 490 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_JOSEPH, Route110_Text_JosephDefeated, TRAINER_EDWIN_1, Route110_Text_EdwinDefeated, PARTNER_EMMIE
# 491 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 492 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_JosephEdwinVictory
# 493 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 494 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 495 "data/maps/Route110/scripts.pory"
waitstate
# 496 "data/maps/Route110/scripts.pory"

# 497 "data/maps/Route110/scripts.pory"
Route110_EventScript_JosephEdwinVictory::
# 498 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 499 "data/maps/Route110/scripts.pory"
waitmovement 0
# 500 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 501 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 502 "data/maps/Route110/scripts.pory"
waitmovement 0
# 503 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_EdwinPostBattle, MSGBOX_AUTOCLOSE
# 504 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 505 "data/maps/Route110/scripts.pory"
end
# 506 "data/maps/Route110/scripts.pory"

# 507 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 508 "data/maps/Route110/scripts.pory"
	faceplayer
# 509 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 510 "data/maps/Route110/scripts.pory"
	end
# 511 "data/maps/Route110/scripts.pory"

# 512 "data/maps/Route110/scripts.pory"
Route110_EventScript_AlyssaBenjamin::
# 513 "data/maps/Route110/scripts.pory"
lockall
# 514 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ALYSSA
# 515 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 516 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 517 "data/maps/Route110/scripts.pory"
waitmovement 0
# 518 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 519 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 520 "data/maps/Route110/scripts.pory"
waitmovement 0
# 521 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AlyssaIntro MSGBOX_AUTOCLOSE
# 522 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_BENJAMIN
# 523 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 524 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 525 "data/maps/Route110/scripts.pory"
waitmovement 0
# 526 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 527 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 528 "data/maps/Route110/scripts.pory"
waitmovement 0
# 529 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_BenjaminIntro, MSGBOX_AUTOCLOSE
# 530 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_AlyssaBenjaminDoMultiBattle
# 531 "data/maps/Route110/scripts.pory"
releaseall
# 532 "data/maps/Route110/scripts.pory"
end
# 533 "data/maps/Route110/scripts.pory"

# 534 "data/maps/Route110/scripts.pory"
Route110_EventScript_AlyssaBenjaminDoMultiBattle::
# 535 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 536 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_ALYSSA, Route110_Text_AlyssaDefeated, TRAINER_BENJAMIN_1, Route110_Text_BenjaminDefeated, PARTNER_EMMIE
# 537 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 538 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_AlyssaBenjaminVictory
# 539 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 540 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 541 "data/maps/Route110/scripts.pory"
waitstate
# 542 "data/maps/Route110/scripts.pory"

# 543 "data/maps/Route110/scripts.pory"
Route110_EventScript_AlyssaBenjaminVictory::
# 544 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 545 "data/maps/Route110/scripts.pory"
waitmovement 0
# 546 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 547 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 548 "data/maps/Route110/scripts.pory"
waitmovement 0
# 549 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_BenjaminPostBattle, MSGBOX_AUTOCLOSE
# 550 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 551 "data/maps/Route110/scripts.pory"
end
# 552 "data/maps/Route110/scripts.pory"

# 553 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 554 "data/maps/Route110/scripts.pory"
	faceplayer
# 555 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 556 "data/maps/Route110/scripts.pory"
	end
# 557 "data/maps/Route110/scripts.pory"

# 558 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 559 "data/maps/Route110/scripts.pory"
	lockall
# 560 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 561 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 562 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 563 "data/maps/Route110/scripts.pory"
	releaseall
# 564 "data/maps/Route110/scripts.pory"
	end
# 565 "data/maps/Route110/scripts.pory"

# 566 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 567 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 568 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 569 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 570 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 571 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 572 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 573 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 574 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 575 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 576 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 577 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 578 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 579 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 580 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 581 "data/maps/Route110/scripts.pory"
	end
# 582 "data/maps/Route110/scripts.pory"

# 583 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 584 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 585 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 586 "data/maps/Route110/scripts.pory"
	end
# 587 "data/maps/Route110/scripts.pory"

# 588 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 589 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 590 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 591 "data/maps/Route110/scripts.pory"
	end
# 592 "data/maps/Route110/scripts.pory"

# 593 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 594 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 595 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 596 "data/maps/Route110/scripts.pory"
	end
# 597 "data/maps/Route110/scripts.pory"

# 598 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 599 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 600 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 601 "data/maps/Route110/scripts.pory"
	end
# 602 "data/maps/Route110/scripts.pory"

# 603 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 604 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 605 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 606 "data/maps/Route110/scripts.pory"
	end
# 607 "data/maps/Route110/scripts.pory"

# 608 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 609 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 610 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 611 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 612 "data/maps/Route110/scripts.pory"
	return
# 613 "data/maps/Route110/scripts.pory"

# 614 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 615 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 616 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 617 "data/maps/Route110/scripts.pory"
	end
# 618 "data/maps/Route110/scripts.pory"

# 619 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 620 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 621 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 622 "data/maps/Route110/scripts.pory"
	end
# 623 "data/maps/Route110/scripts.pory"

# 624 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 625 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 626 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 627 "data/maps/Route110/scripts.pory"
	end
# 628 "data/maps/Route110/scripts.pory"

# 629 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 630 "data/maps/Route110/scripts.pory"
	lockall
# 631 "data/maps/Route110/scripts.pory"
	checkplayergender
# 632 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 633 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 634 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 635 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 636 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 637 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 638 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 639 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 640 "data/maps/Route110/scripts.pory"
	delay 30
# 641 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 642 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 643 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 644 "data/maps/Route110/scripts.pory"
	checkplayergender
# 645 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 646 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 647 "data/maps/Route110/scripts.pory"
	releaseall
# 648 "data/maps/Route110/scripts.pory"
	end
# 649 "data/maps/Route110/scripts.pory"

# 650 "data/maps/Route110/scripts.pory"
Route110_EventScript_NorthBlock::
# 651 "data/maps/Route110/scripts.pory"
	lockall
# 652 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FacePlayer
# 653 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 654 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 655 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 656 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 657 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 658 "data/maps/Route110/scripts.pory"
	delay 30
# 659 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_LetsCycleHome, MSGBOX_DEFAULT
# 660 "data/maps/Route110/scripts.pory"
	closemessage
# 661 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Route110_Movement_NorthBlock
# 662 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER Route110_Movement_NorthBlock
# 663 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 664 "data/maps/Route110/scripts.pory"
	releaseall
# 665 "data/maps/Route110/scripts.pory"
	end
# 666 "data/maps/Route110/scripts.pory"

# 667 "data/maps/Route110/scripts.pory"
Route110_Movement_NorthBlock:
# 668 "data/maps/Route110/scripts.pory"

# 669 "data/maps/Route110/scripts.pory"
	walk_up
# 670 "data/maps/Route110/scripts.pory"
	step_end
# 671 "data/maps/Route110/scripts.pory"

# 672 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 673 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 674 "data/maps/Route110/scripts.pory"
	return
# 675 "data/maps/Route110/scripts.pory"

# 676 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 677 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 678 "data/maps/Route110/scripts.pory"
	return
# 679 "data/maps/Route110/scripts.pory"

# 680 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 681 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 682 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 683 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 684 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 685 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 686 "data/maps/Route110/scripts.pory"
	end
# 687 "data/maps/Route110/scripts.pory"

# 688 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 689 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 690 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 691 "data/maps/Route110/scripts.pory"
	end
# 692 "data/maps/Route110/scripts.pory"

# 693 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 694 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 695 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 696 "data/maps/Route110/scripts.pory"
	end
# 697 "data/maps/Route110/scripts.pory"

# 698 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 699 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 700 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 701 "data/maps/Route110/scripts.pory"
	end
# 702 "data/maps/Route110/scripts.pory"

# 703 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 704 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 705 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 706 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 707 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 708 "data/maps/Route110/scripts.pory"
	end
# 709 "data/maps/Route110/scripts.pory"

# 710 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 711 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 712 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 713 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 714 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 715 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 716 "data/maps/Route110/scripts.pory"
	end
# 717 "data/maps/Route110/scripts.pory"

# 718 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 719 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 720 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 721 "data/maps/Route110/scripts.pory"
	end
# 722 "data/maps/Route110/scripts.pory"

# 723 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 724 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 725 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 726 "data/maps/Route110/scripts.pory"
	end
# 727 "data/maps/Route110/scripts.pory"

# 728 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 729 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 730 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 731 "data/maps/Route110/scripts.pory"
	end
# 732 "data/maps/Route110/scripts.pory"

# 733 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 734 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 735 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 736 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 737 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 738 "data/maps/Route110/scripts.pory"
	end
# 739 "data/maps/Route110/scripts.pory"

# 740 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 741 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 742 "data/maps/Route110/scripts.pory"
	return
# 743 "data/maps/Route110/scripts.pory"

# 744 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 745 "data/maps/Route110/scripts.pory"
	closemessage
# 746 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 747 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 748 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 749 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 750 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 751 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 752 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 753 "data/maps/Route110/scripts.pory"
	delay 45
# 754 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 755 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 756 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 757 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 758 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 759 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 760 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 761 "data/maps/Route110/scripts.pory"
	releaseall
# 762 "data/maps/Route110/scripts.pory"
	end
# 763 "data/maps/Route110/scripts.pory"

# 764 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 765 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 766 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 767 "data/maps/Route110/scripts.pory"
	return
# 768 "data/maps/Route110/scripts.pory"

# 769 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 770 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 771 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 772 "data/maps/Route110/scripts.pory"
	return
# 773 "data/maps/Route110/scripts.pory"

# 774 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 775 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 776 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 777 "data/maps/Route110/scripts.pory"
	return
# 778 "data/maps/Route110/scripts.pory"

# 779 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 780 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 781 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 782 "data/maps/Route110/scripts.pory"
	return
# 783 "data/maps/Route110/scripts.pory"

# 784 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 785 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 786 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 787 "data/maps/Route110/scripts.pory"
	return
# 788 "data/maps/Route110/scripts.pory"

# 789 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 790 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 791 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 792 "data/maps/Route110/scripts.pory"
	return
# 793 "data/maps/Route110/scripts.pory"

# 794 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 795 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 796 "data/maps/Route110/scripts.pory"
	return
# 797 "data/maps/Route110/scripts.pory"

# 798 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 799 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 800 "data/maps/Route110/scripts.pory"
	return
# 801 "data/maps/Route110/scripts.pory"

# 802 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 803 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 804 "data/maps/Route110/scripts.pory"
	return
# 805 "data/maps/Route110/scripts.pory"

# 806 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 807 "data/maps/Route110/scripts.pory"
	walk_down
# 808 "data/maps/Route110/scripts.pory"
	walk_left
# 809 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 810 "data/maps/Route110/scripts.pory"
	step_end
# 811 "data/maps/Route110/scripts.pory"

# 812 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 813 "data/maps/Route110/scripts.pory"
	walk_down
# 814 "data/maps/Route110/scripts.pory"
	step_end
# 815 "data/maps/Route110/scripts.pory"

# 816 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 817 "data/maps/Route110/scripts.pory"
	walk_down
# 818 "data/maps/Route110/scripts.pory"
	walk_right
# 819 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 820 "data/maps/Route110/scripts.pory"
	step_end
# 821 "data/maps/Route110/scripts.pory"

# 822 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
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
	walk_fast_up
# 830 "data/maps/Route110/scripts.pory"
	step_end
# 831 "data/maps/Route110/scripts.pory"

# 832 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
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
	walk_fast_up
# 840 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 841 "data/maps/Route110/scripts.pory"
	step_end
# 842 "data/maps/Route110/scripts.pory"

# 843 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
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
	walk_fast_up
# 851 "data/maps/Route110/scripts.pory"
	step_end
# 852 "data/maps/Route110/scripts.pory"

# 853 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 854 "data/maps/Route110/scripts.pory"
	lockall
# 855 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 856 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 857 "data/maps/Route110/scripts.pory"

# 858 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 859 "data/maps/Route110/scripts.pory"
	lockall
# 860 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 861 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 862 "data/maps/Route110/scripts.pory"

# 863 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 864 "data/maps/Route110/scripts.pory"
	lockall
# 865 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 866 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 867 "data/maps/Route110/scripts.pory"

# 868 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 869 "data/maps/Route110/scripts.pory"
	lockall
# 870 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 871 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 872 "data/maps/Route110/scripts.pory"

# 873 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 874 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 875 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 876 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 877 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 878 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 879 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 880 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 881 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 882 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 883 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 884 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 885 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 886 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 887 "data/maps/Route110/scripts.pory"
	closemessage
# 888 "data/maps/Route110/scripts.pory"
	delay 20
# 889 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 890 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 891 "data/maps/Route110/scripts.pory"
	delay 10
# 892 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 893 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 894 "data/maps/Route110/scripts.pory"
	delay 20
# 895 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 896 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 897 "data/maps/Route110/scripts.pory"
	delay 30
# 898 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 899 "data/maps/Route110/scripts.pory"
	closemessage
# 900 "data/maps/Route110/scripts.pory"
	delay 30
# 901 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 902 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 903 "data/maps/Route110/scripts.pory"
	waitfanfare
# 904 "data/maps/Route110/scripts.pory"
	closemessage
# 905 "data/maps/Route110/scripts.pory"
	delay 30
# 906 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 907 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 908 "data/maps/Route110/scripts.pory"
	closemessage
# 909 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 910 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 911 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 912 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 913 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 914 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 915 "data/maps/Route110/scripts.pory"
	releaseall
# 916 "data/maps/Route110/scripts.pory"
	end
# 917 "data/maps/Route110/scripts.pory"

# 918 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 919 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 920 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 921 "data/maps/Route110/scripts.pory"
	return
# 922 "data/maps/Route110/scripts.pory"

# 923 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 924 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 925 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 926 "data/maps/Route110/scripts.pory"
	return
# 927 "data/maps/Route110/scripts.pory"

# 928 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 929 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 930 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 931 "data/maps/Route110/scripts.pory"
	return
# 932 "data/maps/Route110/scripts.pory"

# 933 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 934 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 935 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 936 "data/maps/Route110/scripts.pory"
	return
# 937 "data/maps/Route110/scripts.pory"

# 938 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 939 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 940 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 941 "data/maps/Route110/scripts.pory"
	return
# 942 "data/maps/Route110/scripts.pory"

# 943 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 944 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 945 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 946 "data/maps/Route110/scripts.pory"
	return
# 947 "data/maps/Route110/scripts.pory"

# 948 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 949 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 950 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 951 "data/maps/Route110/scripts.pory"
	return
# 952 "data/maps/Route110/scripts.pory"

# 953 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 954 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 955 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 956 "data/maps/Route110/scripts.pory"
	return
# 957 "data/maps/Route110/scripts.pory"

# 958 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 959 "data/maps/Route110/scripts.pory"
	walk_down
# 960 "data/maps/Route110/scripts.pory"
	walk_down
# 961 "data/maps/Route110/scripts.pory"
	walk_down
# 962 "data/maps/Route110/scripts.pory"
	step_end
# 963 "data/maps/Route110/scripts.pory"

# 964 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 965 "data/maps/Route110/scripts.pory"
	walk_down
# 966 "data/maps/Route110/scripts.pory"
	walk_left
# 967 "data/maps/Route110/scripts.pory"
	walk_left
# 968 "data/maps/Route110/scripts.pory"
	walk_down
# 969 "data/maps/Route110/scripts.pory"
	step_end
# 970 "data/maps/Route110/scripts.pory"

# 971 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 972 "data/maps/Route110/scripts.pory"
	walk_down
# 973 "data/maps/Route110/scripts.pory"
	walk_left
# 974 "data/maps/Route110/scripts.pory"
	walk_down
# 975 "data/maps/Route110/scripts.pory"
	step_end
# 976 "data/maps/Route110/scripts.pory"

# 977 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 978 "data/maps/Route110/scripts.pory"
	walk_down
# 979 "data/maps/Route110/scripts.pory"
	walk_down
# 980 "data/maps/Route110/scripts.pory"
	step_end
# 981 "data/maps/Route110/scripts.pory"

# 982 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 983 "data/maps/Route110/scripts.pory"
	walk_down
# 984 "data/maps/Route110/scripts.pory"
	walk_right
# 985 "data/maps/Route110/scripts.pory"
	walk_down
# 986 "data/maps/Route110/scripts.pory"
	step_end
# 987 "data/maps/Route110/scripts.pory"

# 988 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 989 "data/maps/Route110/scripts.pory"
	walk_up
# 990 "data/maps/Route110/scripts.pory"
	walk_up
# 991 "data/maps/Route110/scripts.pory"
	walk_right
# 992 "data/maps/Route110/scripts.pory"
	walk_up
# 993 "data/maps/Route110/scripts.pory"
	walk_up
# 994 "data/maps/Route110/scripts.pory"
	walk_up
# 995 "data/maps/Route110/scripts.pory"
	step_end
# 996 "data/maps/Route110/scripts.pory"

# 997 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 998 "data/maps/Route110/scripts.pory"
	walk_up
# 999 "data/maps/Route110/scripts.pory"
	walk_up
# 1000 "data/maps/Route110/scripts.pory"
	walk_up
# 1001 "data/maps/Route110/scripts.pory"
	walk_up
# 1002 "data/maps/Route110/scripts.pory"
	walk_up
# 1003 "data/maps/Route110/scripts.pory"
	step_end
# 1004 "data/maps/Route110/scripts.pory"

# 1005 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 1006 "data/maps/Route110/scripts.pory"
	walk_up
# 1007 "data/maps/Route110/scripts.pory"
	walk_up
# 1008 "data/maps/Route110/scripts.pory"
	walk_up
# 1009 "data/maps/Route110/scripts.pory"
	walk_up
# 1010 "data/maps/Route110/scripts.pory"
	walk_up
# 1011 "data/maps/Route110/scripts.pory"
	step_end
# 1012 "data/maps/Route110/scripts.pory"

# 1013 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 1014 "data/maps/Route110/scripts.pory"
	walk_up
# 1015 "data/maps/Route110/scripts.pory"
	walk_up
# 1016 "data/maps/Route110/scripts.pory"
	walk_up
# 1017 "data/maps/Route110/scripts.pory"
	walk_up
# 1018 "data/maps/Route110/scripts.pory"
	walk_up
# 1019 "data/maps/Route110/scripts.pory"
	step_end
# 1020 "data/maps/Route110/scripts.pory"

# 1021 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 1022 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 1023 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 1024 "data/maps/Route110/scripts.pory"

# 1025 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 1026 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 1027 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 1028 "data/maps/Route110/scripts.pory"

# 1029 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 1030 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 1031 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 1032 "data/maps/Route110/scripts.pory"

# 1033 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 1034 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 1035 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 1036 "data/maps/Route110/scripts.pory"

# 1037 "data/maps/Route110/scripts.pory"
Route110_Text_LetsCycleHome:
# 1038 "data/maps/Route110/scripts.pory"
	.string "You know, {PLAYER}, I've never been\n"
# 1039 "data/maps/Route110/scripts.pory"
	.string "on the Cycling Road.\p"
# 1040 "data/maps/Route110/scripts.pory"
	.string "Why don't we check out the Mauville\n"
# 1041 "data/maps/Route110/scripts.pory"
	.string "bike shop and take that route home?$"
# 1042 "data/maps/Route110/scripts.pory"

# 1043 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 1044 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 1045 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 1046 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 1047 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 1048 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 1049 "data/maps/Route110/scripts.pory"

# 1050 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 1051 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 1052 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 1053 "data/maps/Route110/scripts.pory"

# 1054 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 1055 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 1056 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 1057 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 1058 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 1059 "data/maps/Route110/scripts.pory"

# 1060 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 1061 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 1062 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 1063 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 1064 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 1065 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 1066 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 1067 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 1068 "data/maps/Route110/scripts.pory"

# 1069 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 1070 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 1071 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 1072 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 1073 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 1074 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 1075 "data/maps/Route110/scripts.pory"

# 1076 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 1077 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 1078 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 1079 "data/maps/Route110/scripts.pory"

# 1080 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 1081 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 1082 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 1083 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 1084 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 1085 "data/maps/Route110/scripts.pory"

# 1086 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 1087 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 1088 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 1089 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 1090 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 1091 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 1092 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 1093 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 1094 "data/maps/Route110/scripts.pory"

# 1095 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 1096 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 1097 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 1098 "data/maps/Route110/scripts.pory"

# 1099 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 1100 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 1101 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 1102 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 1103 "data/maps/Route110/scripts.pory"

# 1104 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 1105 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 1106 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 1107 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 1108 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1109 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1110 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1111 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1112 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1113 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1114 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1115 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1116 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 1117 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 1118 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 1119 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 1120 "data/maps/Route110/scripts.pory"

# 1121 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 1122 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 1123 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 1124 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 1125 "data/maps/Route110/scripts.pory"

# 1126 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 1127 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 1128 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 1129 "data/maps/Route110/scripts.pory"

# 1130 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 1131 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 1132 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 1133 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 1134 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 1135 "data/maps/Route110/scripts.pory"

# 1136 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 1137 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 1138 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 1139 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 1140 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 1141 "data/maps/Route110/scripts.pory"

# 1142 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 1143 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 1144 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 1145 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 1146 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 1147 "data/maps/Route110/scripts.pory"

# 1148 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 1149 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 1150 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 1151 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 1152 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 1153 "data/maps/Route110/scripts.pory"

# 1154 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 1155 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 1156 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 1157 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 1158 "data/maps/Route110/scripts.pory"

# 1159 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 1160 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 1161 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 1162 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 1163 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 1164 "data/maps/Route110/scripts.pory"

# 1165 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 1166 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 1167 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 1168 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 1169 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 1170 "data/maps/Route110/scripts.pory"

# 1171 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 1172 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 1173 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 1174 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 1175 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 1176 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 1177 "data/maps/Route110/scripts.pory"

# 1178 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 1179 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 1180 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 1181 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 1182 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 1183 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 1184 "data/maps/Route110/scripts.pory"

# 1185 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 1186 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 1187 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 1188 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 1189 "data/maps/Route110/scripts.pory"

# 1190 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 1191 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 1192 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 1193 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 1194 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 1195 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 1196 "data/maps/Route110/scripts.pory"

# 1197 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 1198 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1199 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 1200 "data/maps/Route110/scripts.pory"

# 1201 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 1202 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 1203 "data/maps/Route110/scripts.pory"

# 1204 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 1205 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 1206 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 1207 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 1208 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 1209 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 1210 "data/maps/Route110/scripts.pory"

# 1211 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 1212 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1213 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 1214 "data/maps/Route110/scripts.pory"

# 1215 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 1216 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 1217 "data/maps/Route110/scripts.pory"

# 1218 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 1219 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1220 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 1221 "data/maps/Route110/scripts.pory"

# 1222 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 1223 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1224 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 1225 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 1226 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 1227 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 1228 "data/maps/Route110/scripts.pory"

# 1229 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 1230 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1231 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 1232 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 1233 "data/maps/Route110/scripts.pory"

# 1234 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 1235 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 1236 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 1237 "data/maps/Route110/scripts.pory"

# 1238 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 1239 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1240 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 1241 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 1242 "data/maps/Route110/scripts.pory"

# 1243 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 1244 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1245 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 1246 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 1247 "data/maps/Route110/scripts.pory"

# 1248 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 1249 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 1250 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 1251 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 1252 "data/maps/Route110/scripts.pory"

# 1253 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 1254 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 1255 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 1256 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 1257 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 1258 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 1259 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 1260 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 1261 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 1262 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 1263 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 1264 "data/maps/Route110/scripts.pory"

# 1265 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 1266 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 1267 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 1268 "data/maps/Route110/scripts.pory"

# 1269 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1270 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1271 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1272 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1273 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1274 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"
