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
	special UpdateCyclingRoadState
# 26 "data/maps/Route110/scripts.pory"
	end
# 27 "data/maps/Route110/scripts.pory"

# 28 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 29 "data/maps/Route110/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 30 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 31 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 32 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 33 "data/maps/Route110/scripts.pory"
	end
# 34 "data/maps/Route110/scripts.pory"

# 35 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 36 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 37 "data/maps/Route110/scripts.pory"
	return
# 38 "data/maps/Route110/scripts.pory"

# 39 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 40 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 41 "data/maps/Route110/scripts.pory"
	.2byte 0
# 42 "data/maps/Route110/scripts.pory"

# 43 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 44 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 45 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 46 "data/maps/Route110/scripts.pory"
	return
# 47 "data/maps/Route110/scripts.pory"

# 48 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 49 "data/maps/Route110/scripts.pory"
	lock
# 50 "data/maps/Route110/scripts.pory"
	faceplayer
# 51 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 52 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 53 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route110/scripts.pory"
	release
# 55 "data/maps/Route110/scripts.pory"
	end
# 56 "data/maps/Route110/scripts.pory"

# 57 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 58 "data/maps/Route110/scripts.pory"
	lock
# 59 "data/maps/Route110/scripts.pory"
	faceplayer
# 60 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 61 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 62 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route110/scripts.pory"
	release
# 64 "data/maps/Route110/scripts.pory"
	end
# 65 "data/maps/Route110/scripts.pory"

# 66 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 67 "data/maps/Route110/scripts.pory"
	lock
# 68 "data/maps/Route110/scripts.pory"
	faceplayer
# 69 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 70 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 71 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route110/scripts.pory"
	release
# 73 "data/maps/Route110/scripts.pory"
	end
# 74 "data/maps/Route110/scripts.pory"

# 75 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 76 "data/maps/Route110/scripts.pory"
	lock
# 77 "data/maps/Route110/scripts.pory"
	faceplayer
# 78 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 79 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 80 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route110/scripts.pory"
	release
# 82 "data/maps/Route110/scripts.pory"
	end
# 83 "data/maps/Route110/scripts.pory"

# 84 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 85 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 86 "data/maps/Route110/scripts.pory"
	end
# 87 "data/maps/Route110/scripts.pory"

# 88 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 89 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 90 "data/maps/Route110/scripts.pory"
	end
# 91 "data/maps/Route110/scripts.pory"

# 92 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 93 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 94 "data/maps/Route110/scripts.pory"
	end
# 95 "data/maps/Route110/scripts.pory"

# 96 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 97 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 98 "data/maps/Route110/scripts.pory"
	end
# 99 "data/maps/Route110/scripts.pory"

# 100 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 101 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 102 "data/maps/Route110/scripts.pory"
	end
# 103 "data/maps/Route110/scripts.pory"

# 104 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 105 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 106 "data/maps/Route110/scripts.pory"
	end
# 107 "data/maps/Route110/scripts.pory"

# 108 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 109 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 110 "data/maps/Route110/scripts.pory"
	end
# 111 "data/maps/Route110/scripts.pory"

# 112 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 113 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 114 "data/maps/Route110/scripts.pory"
	end
# 115 "data/maps/Route110/scripts.pory"

# 116 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 117 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 118 "data/maps/Route110/scripts.pory"
	end
# 119 "data/maps/Route110/scripts.pory"

# 120 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 121 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 122 "data/maps/Route110/scripts.pory"
	end
# 123 "data/maps/Route110/scripts.pory"

# 124 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 125 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 126 "data/maps/Route110/scripts.pory"
	end
# 127 "data/maps/Route110/scripts.pory"

# 128 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 129 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 130 "data/maps/Route110/scripts.pory"
	end
# 131 "data/maps/Route110/scripts.pory"

# 132 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 133 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 134 "data/maps/Route110/scripts.pory"
	end
# 135 "data/maps/Route110/scripts.pory"

# 136 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 137 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 138 "data/maps/Route110/scripts.pory"
	end
# 139 "data/maps/Route110/scripts.pory"

# 140 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 141 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 142 "data/maps/Route110/scripts.pory"
	end
# 143 "data/maps/Route110/scripts.pory"

# 144 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 145 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 146 "data/maps/Route110/scripts.pory"
	end
# 147 "data/maps/Route110/scripts.pory"

# 148 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 149 "data/maps/Route110/scripts.pory"
	lockall
# 150 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 151 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 152 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 153 "data/maps/Route110/scripts.pory"
	releaseall
# 154 "data/maps/Route110/scripts.pory"
	end
# 155 "data/maps/Route110/scripts.pory"

# 156 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 157 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 158 "data/maps/Route110/scripts.pory"
	releaseall
# 159 "data/maps/Route110/scripts.pory"
	end
# 160 "data/maps/Route110/scripts.pory"

# 161 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 162 "data/maps/Route110/scripts.pory"
	lock
# 163 "data/maps/Route110/scripts.pory"
	faceplayer
# 164 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 165 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 166 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 167 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 168 "data/maps/Route110/scripts.pory"
	release
# 169 "data/maps/Route110/scripts.pory"
	end
# 170 "data/maps/Route110/scripts.pory"

# 171 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 172 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 173 "data/maps/Route110/scripts.pory"
	release
# 174 "data/maps/Route110/scripts.pory"
	end
# 175 "data/maps/Route110/scripts.pory"

# 176 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 177 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 178 "data/maps/Route110/scripts.pory"
	release
# 179 "data/maps/Route110/scripts.pory"
	end
# 180 "data/maps/Route110/scripts.pory"

# 181 "data/maps/Route110/scripts.pory"
Route110_EventScript_TimmyEdward::
# 182 "data/maps/Route110/scripts.pory"
	lockall
# 183 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, LOCALID_TIMMY
# 184 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 185 "data/maps/Route110/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 186 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, TRUE
# 188 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 189 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyIntro MSGBOX_AUTOCLOSE
# 191 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, LOCALID_EDWARD
# 192 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 193 "data/maps/Route110/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 194 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 196 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 197 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardIntro MSGBOX_AUTOCLOSE
# 199 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_TimmyEdwardDoMultiBattle
# 200 "data/maps/Route110/scripts.pory"
	releaseall
# 201 "data/maps/Route110/scripts.pory"
	end
# 202 "data/maps/Route110/scripts.pory"

# 203 "data/maps/Route110/scripts.pory"
Route110_EventScript_TimmyEdwardDoMultiBattle::
# 204 "data/maps/Route110/scripts.pory"
	playbgm MUS_ROUTE110, TRUE
# 205 "data/maps/Route110/scripts.pory"
	multi_2p_vs_2 TRAINER_TIMMY, Route110_Text_TimmyDefeated, TRAINER_EDWARD, Route110_Text_EdwardDefeated, PARTNER_EMMIE
# 206 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 207 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_TimmyEdwardVictory
# 208 "data/maps/Route110/scripts.pory"
	fadescreen FADE_TO_BLACK
# 209 "data/maps/Route110/scripts.pory"
	special SetCB2WhiteOut
# 210 "data/maps/Route110/scripts.pory"
	waitstate
# 211 "data/maps/Route110/scripts.pory"

# 212 "data/maps/Route110/scripts.pory"
Route110_EventScript_TimmyEdwardVictory::
# 213 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 214 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 216 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 217 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/Route110/scripts.pory"
	addvar VAR_ROUTE110_STATE, 1
# 220 "data/maps/Route110/scripts.pory"
	end
# 221 "data/maps/Route110/scripts.pory"

# 222 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 223 "data/maps/Route110/scripts.pory"
	faceplayer
# 224 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/Route110/scripts.pory"
	end
# 226 "data/maps/Route110/scripts.pory"

# 227 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 228 "data/maps/Route110/scripts.pory"
	faceplayer
# 229 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route110/scripts.pory"
	end
# 231 "data/maps/Route110/scripts.pory"

# 232 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 233 "data/maps/Route110/scripts.pory"
	faceplayer
# 234 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 235 "data/maps/Route110/scripts.pory"
	release
# 236 "data/maps/Route110/scripts.pory"
	end
# 237 "data/maps/Route110/scripts.pory"

# 238 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 239 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 240 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 242 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 243 "data/maps/Route110/scripts.pory"
	release
# 244 "data/maps/Route110/scripts.pory"
	end
# 245 "data/maps/Route110/scripts.pory"

# 246 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 247 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 248 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/Route110/scripts.pory"
	end
# 250 "data/maps/Route110/scripts.pory"

# 251 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 252 "data/maps/Route110/scripts.pory"
	faceplayer
# 253 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/Route110/scripts.pory"
	end
# 255 "data/maps/Route110/scripts.pory"

# 256 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 257 "data/maps/Route110/scripts.pory"
	faceplayer
# 258 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/Route110/scripts.pory"
	end
# 260 "data/maps/Route110/scripts.pory"

# 261 "data/maps/Route110/scripts.pory"
Route110_EventScript_AnthonyAbigail::
# 262 "data/maps/Route110/scripts.pory"
lockall
# 263 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ANTHONY
# 264 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 265 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 266 "data/maps/Route110/scripts.pory"
waitmovement 0
# 267 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 268 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 269 "data/maps/Route110/scripts.pory"
waitmovement 0
# 270 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AnthonyIntro MSGBOX_AUTOCLOSE
# 271 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ABIGAIL
# 272 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 273 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 274 "data/maps/Route110/scripts.pory"
waitmovement 0
# 275 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 276 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 277 "data/maps/Route110/scripts.pory"
waitmovement 0
# 278 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AbigailIntro, MSGBOX_AUTOCLOSE
# 279 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_AnthonyAbigailDoMultiBattle
# 280 "data/maps/Route110/scripts.pory"
releaseall
# 281 "data/maps/Route110/scripts.pory"
end
# 282 "data/maps/Route110/scripts.pory"

# 283 "data/maps/Route110/scripts.pory"
Route110_EventScript_AnthonyAbigailDoMultiBattle::
# 284 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 285 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_ANTHONY, Route110_Text_AnthonyDefeated, TRAINER_ABIGAIL_1, Route110_Text_AbigailDefeated, PARTNER_EMMIE
# 286 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 287 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_AnthonyAbigailVictory
# 288 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 289 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 290 "data/maps/Route110/scripts.pory"
waitstate
# 291 "data/maps/Route110/scripts.pory"

# 292 "data/maps/Route110/scripts.pory"
Route110_EventScript_AnthonyAbigailVictory::
# 293 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 294 "data/maps/Route110/scripts.pory"
waitmovement 0
# 295 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 296 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 297 "data/maps/Route110/scripts.pory"
waitmovement 0
# 298 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AbigailPostBattle, MSGBOX_AUTOCLOSE
# 299 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 300 "data/maps/Route110/scripts.pory"
end
# 301 "data/maps/Route110/scripts.pory"

# 302 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 303 "data/maps/Route110/scripts.pory"
	faceplayer
# 304 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 305 "data/maps/Route110/scripts.pory"
	end
# 306 "data/maps/Route110/scripts.pory"

# 307 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 308 "data/maps/Route110/scripts.pory"
	faceplayer
# 309 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 310 "data/maps/Route110/scripts.pory"
	release
# 311 "data/maps/Route110/scripts.pory"
	end
# 312 "data/maps/Route110/scripts.pory"

# 313 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 314 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 315 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 316 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 317 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 318 "data/maps/Route110/scripts.pory"
	release
# 319 "data/maps/Route110/scripts.pory"
	end
# 320 "data/maps/Route110/scripts.pory"

# 321 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 322 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 323 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 324 "data/maps/Route110/scripts.pory"
	end
# 325 "data/maps/Route110/scripts.pory"

# 326 "data/maps/Route110/scripts.pory"
Route110_EventScript_JasmineJacob::
# 327 "data/maps/Route110/scripts.pory"
lockall
# 328 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_JASMINE
# 329 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 330 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 331 "data/maps/Route110/scripts.pory"
waitmovement 0
# 332 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 333 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 334 "data/maps/Route110/scripts.pory"
waitmovement 0
# 335 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JasmineIntro MSGBOX_AUTOCLOSE
# 336 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_JACOB
# 337 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 338 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 339 "data/maps/Route110/scripts.pory"
waitmovement 0
# 340 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 341 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 342 "data/maps/Route110/scripts.pory"
waitmovement 0
# 343 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JacobIntro, MSGBOX_AUTOCLOSE
# 344 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_JasmineJacobDoMultiBattle
# 345 "data/maps/Route110/scripts.pory"
releaseall
# 346 "data/maps/Route110/scripts.pory"
end
# 347 "data/maps/Route110/scripts.pory"

# 348 "data/maps/Route110/scripts.pory"
Route110_EventScript_JasmineJacobDoMultiBattle::
# 349 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 350 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_JASMINE, Route110_Text_JasmineDefeated, TRAINER_JACOB, Route110_Text_JacobDefeated, PARTNER_EMMIE
# 351 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 352 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_JasmineJacobVictory
# 353 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 354 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 355 "data/maps/Route110/scripts.pory"
waitstate
# 356 "data/maps/Route110/scripts.pory"

# 357 "data/maps/Route110/scripts.pory"
Route110_EventScript_JasmineJacobVictory::
# 358 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 359 "data/maps/Route110/scripts.pory"
waitmovement 0
# 360 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 362 "data/maps/Route110/scripts.pory"
waitmovement 0
# 363 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 364 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 365 "data/maps/Route110/scripts.pory"
end
# 366 "data/maps/Route110/scripts.pory"

# 367 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 368 "data/maps/Route110/scripts.pory"
	faceplayer
# 369 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 370 "data/maps/Route110/scripts.pory"
	end
# 371 "data/maps/Route110/scripts.pory"

# 372 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 373 "data/maps/Route110/scripts.pory"
	faceplayer
# 374 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 375 "data/maps/Route110/scripts.pory"
	release
# 376 "data/maps/Route110/scripts.pory"
	end
# 377 "data/maps/Route110/scripts.pory"

# 378 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 379 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 380 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 382 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 383 "data/maps/Route110/scripts.pory"
	release
# 384 "data/maps/Route110/scripts.pory"
	end
# 385 "data/maps/Route110/scripts.pory"

# 386 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 387 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 388 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 389 "data/maps/Route110/scripts.pory"
	end
# 390 "data/maps/Route110/scripts.pory"

# 391 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelKaleb::
# 392 "data/maps/Route110/scripts.pory"
lockall
# 393 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ISABEL
# 394 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 395 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 396 "data/maps/Route110/scripts.pory"
waitmovement 0
# 397 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 398 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 399 "data/maps/Route110/scripts.pory"
waitmovement 0
# 400 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_IsabelIntro MSGBOX_AUTOCLOSE
# 401 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_KALEB
# 402 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 403 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 404 "data/maps/Route110/scripts.pory"
waitmovement 0
# 405 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 406 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 407 "data/maps/Route110/scripts.pory"
waitmovement 0
# 408 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_KalebIntro, MSGBOX_AUTOCLOSE
# 409 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_IsabelKalebDoMultiBattle
# 410 "data/maps/Route110/scripts.pory"
releaseall
# 411 "data/maps/Route110/scripts.pory"
end
# 412 "data/maps/Route110/scripts.pory"

# 413 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelKalebDoMultiBattle::
# 414 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 415 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_ISABEL_1, Route110_Text_IsabelDefeated, TRAINER_KALEB, Route110_Text_KalebDefeated, PARTNER_EMMIE
# 416 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 417 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_IsabelKalebVictory
# 418 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 419 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 420 "data/maps/Route110/scripts.pory"
waitstate
# 421 "data/maps/Route110/scripts.pory"

# 422 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelKalebVictory::
# 423 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 424 "data/maps/Route110/scripts.pory"
waitmovement 0
# 425 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_IsabelPostBattle, MSGBOX_AUTOCLOSE
# 426 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 427 "data/maps/Route110/scripts.pory"
waitmovement 0
# 428 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 429 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 430 "data/maps/Route110/scripts.pory"
end
# 431 "data/maps/Route110/scripts.pory"

# 432 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 433 "data/maps/Route110/scripts.pory"
	faceplayer
# 434 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 435 "data/maps/Route110/scripts.pory"
	release
# 436 "data/maps/Route110/scripts.pory"
	end
# 437 "data/maps/Route110/scripts.pory"

# 438 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 439 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 440 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 441 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 442 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 443 "data/maps/Route110/scripts.pory"
	release
# 444 "data/maps/Route110/scripts.pory"
	end
# 445 "data/maps/Route110/scripts.pory"

# 446 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 447 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 448 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 449 "data/maps/Route110/scripts.pory"
	end
# 450 "data/maps/Route110/scripts.pory"

# 451 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 452 "data/maps/Route110/scripts.pory"
	faceplayer
# 453 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 454 "data/maps/Route110/scripts.pory"
	end
# 455 "data/maps/Route110/scripts.pory"

# 456 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 457 "data/maps/Route110/scripts.pory"
	end
# 458 "data/maps/Route110/scripts.pory"

# 459 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 460 "data/maps/Route110/scripts.pory"
	faceplayer
# 461 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 462 "data/maps/Route110/scripts.pory"
	end
# 463 "data/maps/Route110/scripts.pory"

# 464 "data/maps/Route110/scripts.pory"
Route110_EventScript_JosephEdwin::
# 465 "data/maps/Route110/scripts.pory"
lockall
# 466 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_JOSEPH
# 467 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 468 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 469 "data/maps/Route110/scripts.pory"
waitmovement 0
# 470 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 471 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 472 "data/maps/Route110/scripts.pory"
waitmovement 0
# 473 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JosephIntro MSGBOX_AUTOCLOSE
# 474 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_EDWIN
# 475 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 476 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 477 "data/maps/Route110/scripts.pory"
waitmovement 0
# 478 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 479 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 480 "data/maps/Route110/scripts.pory"
waitmovement 0
# 481 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_EdwinIntro, MSGBOX_AUTOCLOSE
# 482 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_JosephEdwinDoMultiBattle
# 483 "data/maps/Route110/scripts.pory"
releaseall
# 484 "data/maps/Route110/scripts.pory"
end
# 485 "data/maps/Route110/scripts.pory"

# 486 "data/maps/Route110/scripts.pory"
Route110_EventScript_JosephEdwinDoMultiBattle::
# 487 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 488 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_JOSEPH, Route110_Text_JosephDefeated, TRAINER_EDWIN_1, Route110_Text_EdwinDefeated, PARTNER_EMMIE
# 489 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 490 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_JosephEdwinVictory
# 491 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 492 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 493 "data/maps/Route110/scripts.pory"
waitstate
# 494 "data/maps/Route110/scripts.pory"

# 495 "data/maps/Route110/scripts.pory"
Route110_EventScript_JosephEdwinVictory::
# 496 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 497 "data/maps/Route110/scripts.pory"
waitmovement 0
# 498 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 499 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 500 "data/maps/Route110/scripts.pory"
waitmovement 0
# 501 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_EdwinPostBattle, MSGBOX_AUTOCLOSE
# 502 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 503 "data/maps/Route110/scripts.pory"
end
# 504 "data/maps/Route110/scripts.pory"

# 505 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 506 "data/maps/Route110/scripts.pory"
	faceplayer
# 507 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/Route110/scripts.pory"
	end
# 509 "data/maps/Route110/scripts.pory"

# 510 "data/maps/Route110/scripts.pory"
Route110_EventScript_AlyssaBenjamin::
# 511 "data/maps/Route110/scripts.pory"
lockall
# 512 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ALYSSA
# 513 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 514 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 515 "data/maps/Route110/scripts.pory"
waitmovement 0
# 516 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 517 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 518 "data/maps/Route110/scripts.pory"
waitmovement 0
# 519 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AlyssaIntro MSGBOX_AUTOCLOSE
# 520 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_BENJAMIN
# 521 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 522 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 523 "data/maps/Route110/scripts.pory"
waitmovement 0
# 524 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 525 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 526 "data/maps/Route110/scripts.pory"
waitmovement 0
# 527 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_BenjaminIntro, MSGBOX_AUTOCLOSE
# 528 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_AlyssaBenjaminDoMultiBattle
# 529 "data/maps/Route110/scripts.pory"
releaseall
# 530 "data/maps/Route110/scripts.pory"
end
# 531 "data/maps/Route110/scripts.pory"

# 532 "data/maps/Route110/scripts.pory"
Route110_EventScript_AlyssaBenjaminDoMultiBattle::
# 533 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 534 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_ALYSSA, Route110_Text_AlyssaDefeated, TRAINER_BENJAMIN_1, Route110_Text_BenjaminDefeated, PARTNER_EMMIE
# 535 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 536 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_AlyssaBenjaminVictory
# 537 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 538 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 539 "data/maps/Route110/scripts.pory"
waitstate
# 540 "data/maps/Route110/scripts.pory"

# 541 "data/maps/Route110/scripts.pory"
Route110_EventScript_AlyssaBenjaminVictory::
# 542 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 543 "data/maps/Route110/scripts.pory"
waitmovement 0
# 544 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 545 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 546 "data/maps/Route110/scripts.pory"
waitmovement 0
# 547 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_BenjaminPostBattle, MSGBOX_AUTOCLOSE
# 548 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 549 "data/maps/Route110/scripts.pory"
end
# 550 "data/maps/Route110/scripts.pory"

# 551 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 552 "data/maps/Route110/scripts.pory"
	faceplayer
# 553 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 554 "data/maps/Route110/scripts.pory"
	end
# 555 "data/maps/Route110/scripts.pory"

# 556 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 557 "data/maps/Route110/scripts.pory"
	lockall
# 558 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 559 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 560 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 561 "data/maps/Route110/scripts.pory"
	releaseall
# 562 "data/maps/Route110/scripts.pory"
	end
# 563 "data/maps/Route110/scripts.pory"

# 564 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 565 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 566 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 567 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 568 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 569 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 570 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 571 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 572 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 573 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 574 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 575 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 576 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 577 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 578 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 579 "data/maps/Route110/scripts.pory"
	end
# 580 "data/maps/Route110/scripts.pory"

# 581 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 582 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 583 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 584 "data/maps/Route110/scripts.pory"
	end
# 585 "data/maps/Route110/scripts.pory"

# 586 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 587 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 588 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 589 "data/maps/Route110/scripts.pory"
	end
# 590 "data/maps/Route110/scripts.pory"

# 591 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 592 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 593 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 594 "data/maps/Route110/scripts.pory"
	end
# 595 "data/maps/Route110/scripts.pory"

# 596 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 597 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 598 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 599 "data/maps/Route110/scripts.pory"
	end
# 600 "data/maps/Route110/scripts.pory"

# 601 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 602 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 603 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 604 "data/maps/Route110/scripts.pory"
	end
# 605 "data/maps/Route110/scripts.pory"

# 606 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 607 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 608 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 609 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 610 "data/maps/Route110/scripts.pory"
	return
# 611 "data/maps/Route110/scripts.pory"

# 612 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 613 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 614 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 615 "data/maps/Route110/scripts.pory"
	end
# 616 "data/maps/Route110/scripts.pory"

# 617 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 618 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 619 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 620 "data/maps/Route110/scripts.pory"
	end
# 621 "data/maps/Route110/scripts.pory"

# 622 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 623 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 624 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 625 "data/maps/Route110/scripts.pory"
	end
# 626 "data/maps/Route110/scripts.pory"

# 627 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 628 "data/maps/Route110/scripts.pory"
	lockall
# 629 "data/maps/Route110/scripts.pory"
	checkplayergender
# 630 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 631 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 632 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 633 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 634 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 635 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 636 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 637 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 638 "data/maps/Route110/scripts.pory"
	delay 30
# 639 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 640 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 641 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 642 "data/maps/Route110/scripts.pory"
	checkplayergender
# 643 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 644 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 645 "data/maps/Route110/scripts.pory"
	releaseall
# 646 "data/maps/Route110/scripts.pory"
	end
# 647 "data/maps/Route110/scripts.pory"

# 648 "data/maps/Route110/scripts.pory"
Route110_EventScript_NorthBlock::
# 649 "data/maps/Route110/scripts.pory"
	lockall
# 650 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FacePlayer
# 651 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 652 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 653 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 654 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 655 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 656 "data/maps/Route110/scripts.pory"
	delay 30
# 657 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_LetsCycleHome, MSGBOX_DEFAULT
# 658 "data/maps/Route110/scripts.pory"
	closemessage
# 659 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Route110_Movement_NorthBlock
# 660 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER Route110_Movement_NorthBlock
# 661 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 662 "data/maps/Route110/scripts.pory"
	releaseall
# 663 "data/maps/Route110/scripts.pory"
	end
# 664 "data/maps/Route110/scripts.pory"

# 665 "data/maps/Route110/scripts.pory"
Route110_Movement_NorthBlock:
# 666 "data/maps/Route110/scripts.pory"

# 667 "data/maps/Route110/scripts.pory"
	walk_up
# 668 "data/maps/Route110/scripts.pory"
	step_end
# 669 "data/maps/Route110/scripts.pory"

# 670 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 671 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 672 "data/maps/Route110/scripts.pory"
	return
# 673 "data/maps/Route110/scripts.pory"

# 674 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 675 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 676 "data/maps/Route110/scripts.pory"
	return
# 677 "data/maps/Route110/scripts.pory"

# 678 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 679 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 680 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 681 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 682 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 683 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 684 "data/maps/Route110/scripts.pory"
	end
# 685 "data/maps/Route110/scripts.pory"

# 686 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 687 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 688 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 689 "data/maps/Route110/scripts.pory"
	end
# 690 "data/maps/Route110/scripts.pory"

# 691 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 692 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 693 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 694 "data/maps/Route110/scripts.pory"
	end
# 695 "data/maps/Route110/scripts.pory"

# 696 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 697 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 698 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 699 "data/maps/Route110/scripts.pory"
	end
# 700 "data/maps/Route110/scripts.pory"

# 701 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 702 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 703 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 704 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 705 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 706 "data/maps/Route110/scripts.pory"
	end
# 707 "data/maps/Route110/scripts.pory"

# 708 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 709 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 710 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 711 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 712 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 713 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 714 "data/maps/Route110/scripts.pory"
	end
# 715 "data/maps/Route110/scripts.pory"

# 716 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 717 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 718 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 719 "data/maps/Route110/scripts.pory"
	end
# 720 "data/maps/Route110/scripts.pory"

# 721 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 722 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 723 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 724 "data/maps/Route110/scripts.pory"
	end
# 725 "data/maps/Route110/scripts.pory"

# 726 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 727 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 728 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 729 "data/maps/Route110/scripts.pory"
	end
# 730 "data/maps/Route110/scripts.pory"

# 731 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 732 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 733 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 734 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 735 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 736 "data/maps/Route110/scripts.pory"
	end
# 737 "data/maps/Route110/scripts.pory"

# 738 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 739 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 740 "data/maps/Route110/scripts.pory"
	return
# 741 "data/maps/Route110/scripts.pory"

# 742 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 743 "data/maps/Route110/scripts.pory"
	closemessage
# 744 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 745 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 746 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 747 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 748 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 749 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 750 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 751 "data/maps/Route110/scripts.pory"
	delay 45
# 752 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 753 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 754 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 755 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 756 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 757 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 758 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 759 "data/maps/Route110/scripts.pory"
	releaseall
# 760 "data/maps/Route110/scripts.pory"
	end
# 761 "data/maps/Route110/scripts.pory"

# 762 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 763 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 764 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 765 "data/maps/Route110/scripts.pory"
	return
# 766 "data/maps/Route110/scripts.pory"

# 767 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 768 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 769 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 770 "data/maps/Route110/scripts.pory"
	return
# 771 "data/maps/Route110/scripts.pory"

# 772 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 773 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 774 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 775 "data/maps/Route110/scripts.pory"
	return
# 776 "data/maps/Route110/scripts.pory"

# 777 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 778 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 779 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 780 "data/maps/Route110/scripts.pory"
	return
# 781 "data/maps/Route110/scripts.pory"

# 782 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 783 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 784 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 785 "data/maps/Route110/scripts.pory"
	return
# 786 "data/maps/Route110/scripts.pory"

# 787 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 788 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 789 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 790 "data/maps/Route110/scripts.pory"
	return
# 791 "data/maps/Route110/scripts.pory"

# 792 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 793 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 794 "data/maps/Route110/scripts.pory"
	return
# 795 "data/maps/Route110/scripts.pory"

# 796 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 797 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 798 "data/maps/Route110/scripts.pory"
	return
# 799 "data/maps/Route110/scripts.pory"

# 800 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 801 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 802 "data/maps/Route110/scripts.pory"
	return
# 803 "data/maps/Route110/scripts.pory"

# 804 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 805 "data/maps/Route110/scripts.pory"
	walk_down
# 806 "data/maps/Route110/scripts.pory"
	walk_left
# 807 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 808 "data/maps/Route110/scripts.pory"
	step_end
# 809 "data/maps/Route110/scripts.pory"

# 810 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 811 "data/maps/Route110/scripts.pory"
	walk_down
# 812 "data/maps/Route110/scripts.pory"
	step_end
# 813 "data/maps/Route110/scripts.pory"

# 814 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 815 "data/maps/Route110/scripts.pory"
	walk_down
# 816 "data/maps/Route110/scripts.pory"
	walk_right
# 817 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 818 "data/maps/Route110/scripts.pory"
	step_end
# 819 "data/maps/Route110/scripts.pory"

# 820 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 821 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	step_end
# 829 "data/maps/Route110/scripts.pory"

# 830 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 831 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	walk_fast_down
# 839 "data/maps/Route110/scripts.pory"
	step_end
# 840 "data/maps/Route110/scripts.pory"

# 841 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 842 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	step_end
# 850 "data/maps/Route110/scripts.pory"

# 851 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 852 "data/maps/Route110/scripts.pory"
	lockall
# 853 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 854 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 855 "data/maps/Route110/scripts.pory"

# 856 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 857 "data/maps/Route110/scripts.pory"
	lockall
# 858 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 859 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 860 "data/maps/Route110/scripts.pory"

# 861 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 862 "data/maps/Route110/scripts.pory"
	lockall
# 863 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 864 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 865 "data/maps/Route110/scripts.pory"

# 866 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 867 "data/maps/Route110/scripts.pory"
	lockall
# 868 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 869 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 870 "data/maps/Route110/scripts.pory"

# 871 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 872 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 873 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 874 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 875 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 876 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 877 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 878 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 879 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 880 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 881 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 882 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 883 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 884 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 885 "data/maps/Route110/scripts.pory"
	closemessage
# 886 "data/maps/Route110/scripts.pory"
	delay 20
# 887 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 888 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 889 "data/maps/Route110/scripts.pory"
	delay 10
# 890 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 891 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 892 "data/maps/Route110/scripts.pory"
	delay 20
# 893 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 894 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 895 "data/maps/Route110/scripts.pory"
	delay 30
# 896 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 897 "data/maps/Route110/scripts.pory"
	closemessage
# 898 "data/maps/Route110/scripts.pory"
	delay 30
# 899 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 900 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 901 "data/maps/Route110/scripts.pory"
	waitfanfare
# 902 "data/maps/Route110/scripts.pory"
	closemessage
# 903 "data/maps/Route110/scripts.pory"
	delay 30
# 904 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 905 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 906 "data/maps/Route110/scripts.pory"
	closemessage
# 907 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 908 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 909 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 910 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 911 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 912 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 913 "data/maps/Route110/scripts.pory"
	releaseall
# 914 "data/maps/Route110/scripts.pory"
	end
# 915 "data/maps/Route110/scripts.pory"

# 916 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 917 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 918 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 919 "data/maps/Route110/scripts.pory"
	return
# 920 "data/maps/Route110/scripts.pory"

# 921 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 922 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 923 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 924 "data/maps/Route110/scripts.pory"
	return
# 925 "data/maps/Route110/scripts.pory"

# 926 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 927 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 928 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 929 "data/maps/Route110/scripts.pory"
	return
# 930 "data/maps/Route110/scripts.pory"

# 931 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 932 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 933 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 934 "data/maps/Route110/scripts.pory"
	return
# 935 "data/maps/Route110/scripts.pory"

# 936 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 937 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 938 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 939 "data/maps/Route110/scripts.pory"
	return
# 940 "data/maps/Route110/scripts.pory"

# 941 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 942 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 943 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 944 "data/maps/Route110/scripts.pory"
	return
# 945 "data/maps/Route110/scripts.pory"

# 946 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 947 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 948 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 949 "data/maps/Route110/scripts.pory"
	return
# 950 "data/maps/Route110/scripts.pory"

# 951 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 952 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 953 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 954 "data/maps/Route110/scripts.pory"
	return
# 955 "data/maps/Route110/scripts.pory"

# 956 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 957 "data/maps/Route110/scripts.pory"
	walk_down
# 958 "data/maps/Route110/scripts.pory"
	walk_down
# 959 "data/maps/Route110/scripts.pory"
	walk_down
# 960 "data/maps/Route110/scripts.pory"
	step_end
# 961 "data/maps/Route110/scripts.pory"

# 962 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 963 "data/maps/Route110/scripts.pory"
	walk_down
# 964 "data/maps/Route110/scripts.pory"
	walk_left
# 965 "data/maps/Route110/scripts.pory"
	walk_left
# 966 "data/maps/Route110/scripts.pory"
	walk_down
# 967 "data/maps/Route110/scripts.pory"
	step_end
# 968 "data/maps/Route110/scripts.pory"

# 969 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 970 "data/maps/Route110/scripts.pory"
	walk_down
# 971 "data/maps/Route110/scripts.pory"
	walk_left
# 972 "data/maps/Route110/scripts.pory"
	walk_down
# 973 "data/maps/Route110/scripts.pory"
	step_end
# 974 "data/maps/Route110/scripts.pory"

# 975 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 976 "data/maps/Route110/scripts.pory"
	walk_down
# 977 "data/maps/Route110/scripts.pory"
	walk_down
# 978 "data/maps/Route110/scripts.pory"
	step_end
# 979 "data/maps/Route110/scripts.pory"

# 980 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 981 "data/maps/Route110/scripts.pory"
	walk_down
# 982 "data/maps/Route110/scripts.pory"
	walk_right
# 983 "data/maps/Route110/scripts.pory"
	walk_down
# 984 "data/maps/Route110/scripts.pory"
	step_end
# 985 "data/maps/Route110/scripts.pory"

# 986 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 987 "data/maps/Route110/scripts.pory"
	walk_up
# 988 "data/maps/Route110/scripts.pory"
	walk_up
# 989 "data/maps/Route110/scripts.pory"
	walk_right
# 990 "data/maps/Route110/scripts.pory"
	walk_up
# 991 "data/maps/Route110/scripts.pory"
	walk_up
# 992 "data/maps/Route110/scripts.pory"
	walk_up
# 993 "data/maps/Route110/scripts.pory"
	step_end
# 994 "data/maps/Route110/scripts.pory"

# 995 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 996 "data/maps/Route110/scripts.pory"
	walk_up
# 997 "data/maps/Route110/scripts.pory"
	walk_up
# 998 "data/maps/Route110/scripts.pory"
	walk_up
# 999 "data/maps/Route110/scripts.pory"
	walk_up
# 1000 "data/maps/Route110/scripts.pory"
	walk_up
# 1001 "data/maps/Route110/scripts.pory"
	step_end
# 1002 "data/maps/Route110/scripts.pory"

# 1003 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 1004 "data/maps/Route110/scripts.pory"
	walk_up
# 1005 "data/maps/Route110/scripts.pory"
	walk_up
# 1006 "data/maps/Route110/scripts.pory"
	walk_up
# 1007 "data/maps/Route110/scripts.pory"
	walk_up
# 1008 "data/maps/Route110/scripts.pory"
	walk_up
# 1009 "data/maps/Route110/scripts.pory"
	step_end
# 1010 "data/maps/Route110/scripts.pory"

# 1011 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 1012 "data/maps/Route110/scripts.pory"
	walk_up
# 1013 "data/maps/Route110/scripts.pory"
	walk_up
# 1014 "data/maps/Route110/scripts.pory"
	walk_up
# 1015 "data/maps/Route110/scripts.pory"
	walk_up
# 1016 "data/maps/Route110/scripts.pory"
	walk_up
# 1017 "data/maps/Route110/scripts.pory"
	step_end
# 1018 "data/maps/Route110/scripts.pory"

# 1019 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 1020 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 1021 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 1022 "data/maps/Route110/scripts.pory"

# 1023 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 1024 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 1025 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 1026 "data/maps/Route110/scripts.pory"

# 1027 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 1028 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 1029 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 1030 "data/maps/Route110/scripts.pory"

# 1031 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 1032 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 1033 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 1034 "data/maps/Route110/scripts.pory"

# 1035 "data/maps/Route110/scripts.pory"
Route110_Text_LetsCycleHome:
# 1036 "data/maps/Route110/scripts.pory"
	.string "You know, {PLAYER}, I've never been\n"
# 1037 "data/maps/Route110/scripts.pory"
	.string "on the Cycling Road.\p"
# 1038 "data/maps/Route110/scripts.pory"
	.string "Why don't we check out the Mauville\n"
# 1039 "data/maps/Route110/scripts.pory"
	.string "bike shop and take that route home?$"
# 1040 "data/maps/Route110/scripts.pory"

# 1041 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 1042 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 1043 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 1044 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 1045 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 1046 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 1047 "data/maps/Route110/scripts.pory"

# 1048 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 1049 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 1050 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 1051 "data/maps/Route110/scripts.pory"

# 1052 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 1053 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 1054 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 1055 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 1056 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 1057 "data/maps/Route110/scripts.pory"

# 1058 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 1059 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 1060 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 1061 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 1062 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 1063 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 1064 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 1065 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 1066 "data/maps/Route110/scripts.pory"

# 1067 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 1068 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 1069 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 1070 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 1071 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 1072 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 1073 "data/maps/Route110/scripts.pory"

# 1074 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 1075 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 1076 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 1077 "data/maps/Route110/scripts.pory"

# 1078 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 1079 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 1080 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 1081 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 1082 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 1083 "data/maps/Route110/scripts.pory"

# 1084 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 1085 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 1086 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 1087 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 1088 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 1089 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 1090 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 1091 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 1092 "data/maps/Route110/scripts.pory"

# 1093 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 1094 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 1095 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 1096 "data/maps/Route110/scripts.pory"

# 1097 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 1098 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 1099 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 1100 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 1101 "data/maps/Route110/scripts.pory"

# 1102 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 1103 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 1104 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 1105 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 1106 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1107 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
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
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 1115 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 1116 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 1117 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 1118 "data/maps/Route110/scripts.pory"

# 1119 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 1120 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 1121 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 1122 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 1123 "data/maps/Route110/scripts.pory"

# 1124 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 1125 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 1126 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 1127 "data/maps/Route110/scripts.pory"

# 1128 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 1129 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 1130 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 1131 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 1132 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 1133 "data/maps/Route110/scripts.pory"

# 1134 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 1135 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 1136 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 1137 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 1138 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 1139 "data/maps/Route110/scripts.pory"

# 1140 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 1141 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 1142 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 1143 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 1144 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 1145 "data/maps/Route110/scripts.pory"

# 1146 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 1147 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 1148 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 1149 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 1150 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 1151 "data/maps/Route110/scripts.pory"

# 1152 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 1153 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 1154 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 1155 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 1156 "data/maps/Route110/scripts.pory"

# 1157 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 1158 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 1159 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 1160 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 1161 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 1162 "data/maps/Route110/scripts.pory"

# 1163 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 1164 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 1165 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 1166 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 1167 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 1168 "data/maps/Route110/scripts.pory"

# 1169 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 1170 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 1171 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 1172 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 1173 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 1174 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 1175 "data/maps/Route110/scripts.pory"

# 1176 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 1177 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 1178 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 1179 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 1180 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 1181 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 1182 "data/maps/Route110/scripts.pory"

# 1183 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 1184 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 1185 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 1186 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 1187 "data/maps/Route110/scripts.pory"

# 1188 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 1189 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 1190 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 1191 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 1192 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 1193 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 1194 "data/maps/Route110/scripts.pory"

# 1195 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 1196 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1197 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 1198 "data/maps/Route110/scripts.pory"

# 1199 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 1200 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 1201 "data/maps/Route110/scripts.pory"

# 1202 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 1203 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 1204 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 1205 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 1206 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 1207 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 1208 "data/maps/Route110/scripts.pory"

# 1209 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 1210 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1211 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 1212 "data/maps/Route110/scripts.pory"

# 1213 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 1214 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 1215 "data/maps/Route110/scripts.pory"

# 1216 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 1217 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1218 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 1219 "data/maps/Route110/scripts.pory"

# 1220 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 1221 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1222 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 1223 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 1224 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 1225 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 1226 "data/maps/Route110/scripts.pory"

# 1227 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 1228 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1229 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 1230 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 1231 "data/maps/Route110/scripts.pory"

# 1232 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 1233 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 1234 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 1235 "data/maps/Route110/scripts.pory"

# 1236 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 1237 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1238 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 1239 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 1240 "data/maps/Route110/scripts.pory"

# 1241 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 1242 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1243 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 1244 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 1245 "data/maps/Route110/scripts.pory"

# 1246 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 1247 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 1248 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 1249 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 1250 "data/maps/Route110/scripts.pory"

# 1251 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 1252 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 1253 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 1254 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 1255 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 1256 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 1257 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 1258 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 1259 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 1260 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 1261 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 1262 "data/maps/Route110/scripts.pory"

# 1263 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 1264 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 1265 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 1266 "data/maps/Route110/scripts.pory"

# 1267 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1268 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1269 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1270 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1271 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1272 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"
