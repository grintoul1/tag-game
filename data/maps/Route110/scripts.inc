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
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
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
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/Route110/scripts.pory"
	end
# 226 "data/maps/Route110/scripts.pory"

# 227 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 228 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 229 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route110/scripts.pory"
	end
# 231 "data/maps/Route110/scripts.pory"

# 232 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 233 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 234 "data/maps/Route110/scripts.pory"
	release
# 235 "data/maps/Route110/scripts.pory"
	end
# 236 "data/maps/Route110/scripts.pory"

# 237 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 238 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 239 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 241 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 242 "data/maps/Route110/scripts.pory"
	release
# 243 "data/maps/Route110/scripts.pory"
	end
# 244 "data/maps/Route110/scripts.pory"

# 245 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 246 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 247 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route110/scripts.pory"
	end
# 249 "data/maps/Route110/scripts.pory"

# 250 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 251 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 252 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 253 "data/maps/Route110/scripts.pory"
	end
# 254 "data/maps/Route110/scripts.pory"

# 255 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 256 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 257 "data/maps/Route110/scripts.pory"
	end
# 258 "data/maps/Route110/scripts.pory"

# 259 "data/maps/Route110/scripts.pory"
Route110_EventScript_AnthonyAbigail::
# 260 "data/maps/Route110/scripts.pory"
lockall
# 261 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ANTHONY
# 262 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 263 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 264 "data/maps/Route110/scripts.pory"
waitmovement 0
# 265 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 266 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 267 "data/maps/Route110/scripts.pory"
waitmovement 0
# 268 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AnthonyIntro MSGBOX_AUTOCLOSE
# 269 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ABIGAIL
# 270 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 271 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 272 "data/maps/Route110/scripts.pory"
waitmovement 0
# 273 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 274 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 275 "data/maps/Route110/scripts.pory"
waitmovement 0
# 276 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AbigailIntro MSGBOX_AUTOCLOSE
# 277 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_AnthonyAbigailDoMultiBattle
# 278 "data/maps/Route110/scripts.pory"
releaseall
# 279 "data/maps/Route110/scripts.pory"
end
# 280 "data/maps/Route110/scripts.pory"

# 281 "data/maps/Route110/scripts.pory"
Route110_EventScript_AnthonyAbigailDoMultiBattle::
# 282 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 283 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_ANTHONY, Route110_Text_AnthonyDefeated, TRAINER_ABIGAIL_1, Route110_Text_AbigailDefeated, PARTNER_EMMIE
# 284 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 285 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_AnthonyAbigailVictory
# 286 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 287 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 288 "data/maps/Route110/scripts.pory"
waitstate
# 289 "data/maps/Route110/scripts.pory"

# 290 "data/maps/Route110/scripts.pory"
Route110_EventScript_AnthonyAbigailVictory::
# 291 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 292 "data/maps/Route110/scripts.pory"
waitmovement 0
# 293 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 295 "data/maps/Route110/scripts.pory"
waitmovement 0
# 296 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AbigailPostBattle, MSGBOX_AUTOCLOSE
# 297 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 298 "data/maps/Route110/scripts.pory"
end
# 299 "data/maps/Route110/scripts.pory"

# 300 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 301 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 302 "data/maps/Route110/scripts.pory"
	end
# 303 "data/maps/Route110/scripts.pory"

# 304 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 305 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 306 "data/maps/Route110/scripts.pory"
	release
# 307 "data/maps/Route110/scripts.pory"
	end
# 308 "data/maps/Route110/scripts.pory"

# 309 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 310 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 311 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 313 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 314 "data/maps/Route110/scripts.pory"
	release
# 315 "data/maps/Route110/scripts.pory"
	end
# 316 "data/maps/Route110/scripts.pory"

# 317 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 318 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 319 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/Route110/scripts.pory"
	end
# 321 "data/maps/Route110/scripts.pory"

# 322 "data/maps/Route110/scripts.pory"
Route110_EventScript_JasmineJacob::
# 323 "data/maps/Route110/scripts.pory"
lockall
# 324 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_JASMINE
# 325 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 326 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 327 "data/maps/Route110/scripts.pory"
waitmovement 0
# 328 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 329 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 330 "data/maps/Route110/scripts.pory"
waitmovement 0
# 331 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JasmineIntro MSGBOX_AUTOCLOSE
# 332 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_JACOB
# 333 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 334 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 335 "data/maps/Route110/scripts.pory"
waitmovement 0
# 336 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 337 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 338 "data/maps/Route110/scripts.pory"
waitmovement 0
# 339 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JacobIntro MSGBOX_AUTOCLOSE
# 340 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_JasmineJacobDoMultiBattle
# 341 "data/maps/Route110/scripts.pory"
releaseall
# 342 "data/maps/Route110/scripts.pory"
end
# 343 "data/maps/Route110/scripts.pory"

# 344 "data/maps/Route110/scripts.pory"
Route110_EventScript_JasmineJacobDoMultiBattle::
# 345 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 346 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_JASMINE, Route110_Text_JasmineDefeated, TRAINER_JACOB, Route110_Text_JacobDefeated, PARTNER_EMMIE
# 347 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 348 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_JasmineJacobVictory
# 349 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 350 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 351 "data/maps/Route110/scripts.pory"
waitstate
# 352 "data/maps/Route110/scripts.pory"

# 353 "data/maps/Route110/scripts.pory"
Route110_EventScript_JasmineJacobVictory::
# 354 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 355 "data/maps/Route110/scripts.pory"
waitmovement 0
# 356 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 357 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 358 "data/maps/Route110/scripts.pory"
waitmovement 0
# 359 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 360 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 361 "data/maps/Route110/scripts.pory"
end
# 362 "data/maps/Route110/scripts.pory"

# 363 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 364 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 365 "data/maps/Route110/scripts.pory"
	end
# 366 "data/maps/Route110/scripts.pory"

# 367 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 368 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 369 "data/maps/Route110/scripts.pory"
	release
# 370 "data/maps/Route110/scripts.pory"
	end
# 371 "data/maps/Route110/scripts.pory"

# 372 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 373 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 374 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 375 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 376 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 377 "data/maps/Route110/scripts.pory"
	release
# 378 "data/maps/Route110/scripts.pory"
	end
# 379 "data/maps/Route110/scripts.pory"

# 380 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 381 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 382 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 383 "data/maps/Route110/scripts.pory"
	end
# 384 "data/maps/Route110/scripts.pory"

# 385 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelKaleb::
# 386 "data/maps/Route110/scripts.pory"
lockall
# 387 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ISABEL
# 388 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 389 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 390 "data/maps/Route110/scripts.pory"
waitmovement 0
# 391 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 392 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 393 "data/maps/Route110/scripts.pory"
waitmovement 0
# 394 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_IsabelIntro MSGBOX_AUTOCLOSE
# 395 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_KALEB
# 396 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 397 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 398 "data/maps/Route110/scripts.pory"
waitmovement 0
# 399 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 400 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 401 "data/maps/Route110/scripts.pory"
waitmovement 0
# 402 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_KalebIntro MSGBOX_AUTOCLOSE
# 403 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_IsabelKalebDoMultiBattle
# 404 "data/maps/Route110/scripts.pory"
releaseall
# 405 "data/maps/Route110/scripts.pory"
end
# 406 "data/maps/Route110/scripts.pory"

# 407 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelKalebDoMultiBattle::
# 408 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 409 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_ISABEL_1, Route110_Text_IsabelDefeated, TRAINER_KALEB, Route110_Text_KalebDefeated, PARTNER_EMMIE
# 410 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 411 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_IsabelKalebVictory
# 412 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 413 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 414 "data/maps/Route110/scripts.pory"
waitstate
# 415 "data/maps/Route110/scripts.pory"

# 416 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelKalebVictory::
# 417 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 418 "data/maps/Route110/scripts.pory"
waitmovement 0
# 419 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_IsabelPostBattle, MSGBOX_AUTOCLOSE
# 420 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 421 "data/maps/Route110/scripts.pory"
waitmovement 0
# 422 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 423 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 424 "data/maps/Route110/scripts.pory"
end
# 425 "data/maps/Route110/scripts.pory"

# 426 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 427 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 428 "data/maps/Route110/scripts.pory"
	release
# 429 "data/maps/Route110/scripts.pory"
	end
# 430 "data/maps/Route110/scripts.pory"

# 431 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 432 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 433 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 434 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 435 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 436 "data/maps/Route110/scripts.pory"
	release
# 437 "data/maps/Route110/scripts.pory"
	end
# 438 "data/maps/Route110/scripts.pory"

# 439 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 440 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 441 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 442 "data/maps/Route110/scripts.pory"
	end
# 443 "data/maps/Route110/scripts.pory"

# 444 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 445 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 446 "data/maps/Route110/scripts.pory"
	end
# 447 "data/maps/Route110/scripts.pory"

# 448 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 449 "data/maps/Route110/scripts.pory"
	end
# 450 "data/maps/Route110/scripts.pory"

# 451 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 452 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 453 "data/maps/Route110/scripts.pory"
	end
# 454 "data/maps/Route110/scripts.pory"

# 455 "data/maps/Route110/scripts.pory"
Route110_EventScript_JosephEdwin::
# 456 "data/maps/Route110/scripts.pory"
lockall
# 457 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_JOSEPH
# 458 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 459 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 460 "data/maps/Route110/scripts.pory"
waitmovement 0
# 461 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 462 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 463 "data/maps/Route110/scripts.pory"
waitmovement 0
# 464 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JosephIntro MSGBOX_AUTOCLOSE
# 465 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_EDWIN
# 466 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 467 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 468 "data/maps/Route110/scripts.pory"
waitmovement 0
# 469 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 470 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 471 "data/maps/Route110/scripts.pory"
waitmovement 0
# 472 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_EdwinIntro MSGBOX_AUTOCLOSE
# 473 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_JosephEdwinDoMultiBattle
# 474 "data/maps/Route110/scripts.pory"
releaseall
# 475 "data/maps/Route110/scripts.pory"
end
# 476 "data/maps/Route110/scripts.pory"

# 477 "data/maps/Route110/scripts.pory"
Route110_EventScript_JosephEdwinDoMultiBattle::
# 478 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 479 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_JOSEPH, Route110_Text_JosephDefeated, TRAINER_EDWIN_1, Route110_Text_EdwinDefeated, PARTNER_EMMIE
# 480 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 481 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_JosephEdwinVictory
# 482 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 483 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 484 "data/maps/Route110/scripts.pory"
waitstate
# 485 "data/maps/Route110/scripts.pory"

# 486 "data/maps/Route110/scripts.pory"
Route110_EventScript_JosephEdwinVictory::
# 487 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 488 "data/maps/Route110/scripts.pory"
waitmovement 0
# 489 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 490 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 491 "data/maps/Route110/scripts.pory"
waitmovement 0
# 492 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_EdwinPostBattle, MSGBOX_AUTOCLOSE
# 493 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 494 "data/maps/Route110/scripts.pory"
end
# 495 "data/maps/Route110/scripts.pory"

# 496 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 497 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 498 "data/maps/Route110/scripts.pory"
	end
# 499 "data/maps/Route110/scripts.pory"

# 500 "data/maps/Route110/scripts.pory"
Route110_EventScript_AlyssaBenjamin::
# 501 "data/maps/Route110/scripts.pory"
lockall
# 502 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_ALYSSA
# 503 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 504 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 505 "data/maps/Route110/scripts.pory"
waitmovement 0
# 506 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 507 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 508 "data/maps/Route110/scripts.pory"
waitmovement 0
# 509 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AlyssaIntro MSGBOX_AUTOCLOSE
# 510 "data/maps/Route110/scripts.pory"
setvar VAR_0x8008, LOCALID_BENJAMIN
# 511 "data/maps/Route110/scripts.pory"
playse SE_PIN
# 512 "data/maps/Route110/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 513 "data/maps/Route110/scripts.pory"
waitmovement 0
# 514 "data/maps/Route110/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 515 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 516 "data/maps/Route110/scripts.pory"
waitmovement 0
# 517 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_BenjaminIntro MSGBOX_AUTOCLOSE
# 518 "data/maps/Route110/scripts.pory"
goto Route110_EventScript_AlyssaBenjaminDoMultiBattle
# 519 "data/maps/Route110/scripts.pory"
releaseall
# 520 "data/maps/Route110/scripts.pory"
end
# 521 "data/maps/Route110/scripts.pory"

# 522 "data/maps/Route110/scripts.pory"
Route110_EventScript_AlyssaBenjaminDoMultiBattle::
# 523 "data/maps/Route110/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 524 "data/maps/Route110/scripts.pory"
multi_2p_vs_2 TRAINER_ALYSSA, Route110_Text_AlyssaDefeated, TRAINER_BENJAMIN_1, Route110_Text_BenjaminDefeated, PARTNER_EMMIE
# 525 "data/maps/Route110/scripts.pory"
switch VAR_RESULT
# 526 "data/maps/Route110/scripts.pory"
case 1, Route110_EventScript_AlyssaBenjaminVictory
# 527 "data/maps/Route110/scripts.pory"
fadescreen FADE_TO_BLACK
# 528 "data/maps/Route110/scripts.pory"
special SetCB2WhiteOut
# 529 "data/maps/Route110/scripts.pory"
waitstate
# 530 "data/maps/Route110/scripts.pory"

# 531 "data/maps/Route110/scripts.pory"
Route110_EventScript_AlyssaBenjaminVictory::
# 532 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 533 "data/maps/Route110/scripts.pory"
waitmovement 0
# 534 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 535 "data/maps/Route110/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 536 "data/maps/Route110/scripts.pory"
waitmovement 0
# 537 "data/maps/Route110/scripts.pory"
msgbox Route110_Text_BenjaminPostBattle, MSGBOX_AUTOCLOSE
# 538 "data/maps/Route110/scripts.pory"
addvar VAR_ROUTE110_STATE, 1
# 539 "data/maps/Route110/scripts.pory"
end
# 540 "data/maps/Route110/scripts.pory"

# 541 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 542 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 543 "data/maps/Route110/scripts.pory"
	end
# 544 "data/maps/Route110/scripts.pory"

# 545 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 546 "data/maps/Route110/scripts.pory"
	lockall
# 547 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 548 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 549 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 550 "data/maps/Route110/scripts.pory"
	releaseall
# 551 "data/maps/Route110/scripts.pory"
	end
# 552 "data/maps/Route110/scripts.pory"

# 553 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 554 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 555 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 556 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 557 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 558 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 559 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 560 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 561 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 562 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 563 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 564 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 565 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 566 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 567 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 568 "data/maps/Route110/scripts.pory"
	end
# 569 "data/maps/Route110/scripts.pory"

# 570 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 571 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 572 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 573 "data/maps/Route110/scripts.pory"
	end
# 574 "data/maps/Route110/scripts.pory"

# 575 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 576 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 577 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 578 "data/maps/Route110/scripts.pory"
	end
# 579 "data/maps/Route110/scripts.pory"

# 580 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 581 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 582 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 583 "data/maps/Route110/scripts.pory"
	end
# 584 "data/maps/Route110/scripts.pory"

# 585 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 586 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 587 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 588 "data/maps/Route110/scripts.pory"
	end
# 589 "data/maps/Route110/scripts.pory"

# 590 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 591 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 592 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 593 "data/maps/Route110/scripts.pory"
	end
# 594 "data/maps/Route110/scripts.pory"

# 595 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 596 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 597 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 598 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 599 "data/maps/Route110/scripts.pory"
	return
# 600 "data/maps/Route110/scripts.pory"

# 601 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 602 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 603 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 604 "data/maps/Route110/scripts.pory"
	end
# 605 "data/maps/Route110/scripts.pory"

# 606 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 607 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 608 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 609 "data/maps/Route110/scripts.pory"
	end
# 610 "data/maps/Route110/scripts.pory"

# 611 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 612 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 613 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 614 "data/maps/Route110/scripts.pory"
	end
# 615 "data/maps/Route110/scripts.pory"

# 616 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 617 "data/maps/Route110/scripts.pory"
	lockall
# 618 "data/maps/Route110/scripts.pory"
	checkplayergender
# 619 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 620 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 621 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 622 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 623 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 624 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 625 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 626 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 627 "data/maps/Route110/scripts.pory"
	delay 30
# 628 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 629 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 630 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 631 "data/maps/Route110/scripts.pory"
	checkplayergender
# 632 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 633 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 634 "data/maps/Route110/scripts.pory"
	releaseall
# 635 "data/maps/Route110/scripts.pory"
	end
# 636 "data/maps/Route110/scripts.pory"

# 637 "data/maps/Route110/scripts.pory"
Route110_EventScript_NorthBlock::
# 638 "data/maps/Route110/scripts.pory"
	lockall
# 639 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 640 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 641 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 642 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 643 "data/maps/Route110/scripts.pory"
	delay 30
# 644 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_LetsCycleHome, MSGBOX_DEFAULT
# 645 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Route110_Movement_NorthBlock
# 646 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 647 "data/maps/Route110/scripts.pory"
	releaseall
# 648 "data/maps/Route110/scripts.pory"
	end
# 649 "data/maps/Route110/scripts.pory"

# 650 "data/maps/Route110/scripts.pory"
Route110_Movement_NorthBlock:
# 651 "data/maps/Route110/scripts.pory"
	walk_up
# 652 "data/maps/Route110/scripts.pory"
	step_end
# 653 "data/maps/Route110/scripts.pory"

# 654 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 655 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 656 "data/maps/Route110/scripts.pory"
	return
# 657 "data/maps/Route110/scripts.pory"

# 658 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 659 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 660 "data/maps/Route110/scripts.pory"
	return
# 661 "data/maps/Route110/scripts.pory"

# 662 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 663 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 664 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 665 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 666 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 667 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 668 "data/maps/Route110/scripts.pory"
	end
# 669 "data/maps/Route110/scripts.pory"

# 670 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 671 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 672 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 673 "data/maps/Route110/scripts.pory"
	end
# 674 "data/maps/Route110/scripts.pory"

# 675 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 676 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 677 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 678 "data/maps/Route110/scripts.pory"
	end
# 679 "data/maps/Route110/scripts.pory"

# 680 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 681 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 682 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 683 "data/maps/Route110/scripts.pory"
	end
# 684 "data/maps/Route110/scripts.pory"

# 685 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 686 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 687 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 688 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 689 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 690 "data/maps/Route110/scripts.pory"
	end
# 691 "data/maps/Route110/scripts.pory"

# 692 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 693 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 694 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 695 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 696 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 697 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 698 "data/maps/Route110/scripts.pory"
	end
# 699 "data/maps/Route110/scripts.pory"

# 700 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 701 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 702 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 703 "data/maps/Route110/scripts.pory"
	end
# 704 "data/maps/Route110/scripts.pory"

# 705 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 706 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 707 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 708 "data/maps/Route110/scripts.pory"
	end
# 709 "data/maps/Route110/scripts.pory"

# 710 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 711 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 712 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 713 "data/maps/Route110/scripts.pory"
	end
# 714 "data/maps/Route110/scripts.pory"

# 715 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 716 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 717 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 718 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 719 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 720 "data/maps/Route110/scripts.pory"
	end
# 721 "data/maps/Route110/scripts.pory"

# 722 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 723 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 724 "data/maps/Route110/scripts.pory"
	return
# 725 "data/maps/Route110/scripts.pory"

# 726 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 727 "data/maps/Route110/scripts.pory"
	closemessage
# 728 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 729 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 730 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 731 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 732 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 733 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 734 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 735 "data/maps/Route110/scripts.pory"
	delay 45
# 736 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 737 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 738 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 739 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 740 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 741 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 742 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 743 "data/maps/Route110/scripts.pory"
	releaseall
# 744 "data/maps/Route110/scripts.pory"
	end
# 745 "data/maps/Route110/scripts.pory"

# 746 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 747 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 748 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 749 "data/maps/Route110/scripts.pory"
	return
# 750 "data/maps/Route110/scripts.pory"

# 751 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 752 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 753 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 754 "data/maps/Route110/scripts.pory"
	return
# 755 "data/maps/Route110/scripts.pory"

# 756 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 757 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 758 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 759 "data/maps/Route110/scripts.pory"
	return
# 760 "data/maps/Route110/scripts.pory"

# 761 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 762 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 763 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 764 "data/maps/Route110/scripts.pory"
	return
# 765 "data/maps/Route110/scripts.pory"

# 766 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 767 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 768 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 769 "data/maps/Route110/scripts.pory"
	return
# 770 "data/maps/Route110/scripts.pory"

# 771 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 772 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 773 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 774 "data/maps/Route110/scripts.pory"
	return
# 775 "data/maps/Route110/scripts.pory"

# 776 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 777 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 778 "data/maps/Route110/scripts.pory"
	return
# 779 "data/maps/Route110/scripts.pory"

# 780 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 781 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 782 "data/maps/Route110/scripts.pory"
	return
# 783 "data/maps/Route110/scripts.pory"

# 784 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 785 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 786 "data/maps/Route110/scripts.pory"
	return
# 787 "data/maps/Route110/scripts.pory"

# 788 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 789 "data/maps/Route110/scripts.pory"
	walk_down
# 790 "data/maps/Route110/scripts.pory"
	walk_left
# 791 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 792 "data/maps/Route110/scripts.pory"
	step_end
# 793 "data/maps/Route110/scripts.pory"

# 794 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 795 "data/maps/Route110/scripts.pory"
	walk_down
# 796 "data/maps/Route110/scripts.pory"
	step_end
# 797 "data/maps/Route110/scripts.pory"

# 798 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 799 "data/maps/Route110/scripts.pory"
	walk_down
# 800 "data/maps/Route110/scripts.pory"
	walk_right
# 801 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 802 "data/maps/Route110/scripts.pory"
	step_end
# 803 "data/maps/Route110/scripts.pory"

# 804 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 805 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 806 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 807 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 808 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 809 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 810 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 811 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 812 "data/maps/Route110/scripts.pory"
	step_end
# 813 "data/maps/Route110/scripts.pory"

# 814 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 815 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 816 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 817 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 818 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 819 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 820 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 821 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 822 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 823 "data/maps/Route110/scripts.pory"
	step_end
# 824 "data/maps/Route110/scripts.pory"

# 825 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 826 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 827 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 828 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 829 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 830 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 831 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 832 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 833 "data/maps/Route110/scripts.pory"
	step_end
# 834 "data/maps/Route110/scripts.pory"

# 835 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 836 "data/maps/Route110/scripts.pory"
	lockall
# 837 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 838 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 839 "data/maps/Route110/scripts.pory"

# 840 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 841 "data/maps/Route110/scripts.pory"
	lockall
# 842 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 843 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 844 "data/maps/Route110/scripts.pory"

# 845 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 846 "data/maps/Route110/scripts.pory"
	lockall
# 847 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 848 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 849 "data/maps/Route110/scripts.pory"

# 850 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 851 "data/maps/Route110/scripts.pory"
	lockall
# 852 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 853 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 854 "data/maps/Route110/scripts.pory"

# 855 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 856 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 857 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 858 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 859 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 860 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 861 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 862 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 863 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 864 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 865 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 866 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 867 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 868 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 869 "data/maps/Route110/scripts.pory"
	closemessage
# 870 "data/maps/Route110/scripts.pory"
	delay 20
# 871 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 872 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 873 "data/maps/Route110/scripts.pory"
	delay 10
# 874 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 875 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 876 "data/maps/Route110/scripts.pory"
	delay 20
# 877 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 878 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 879 "data/maps/Route110/scripts.pory"
	delay 30
# 880 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 881 "data/maps/Route110/scripts.pory"
	closemessage
# 882 "data/maps/Route110/scripts.pory"
	delay 30
# 883 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 884 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 885 "data/maps/Route110/scripts.pory"
	waitfanfare
# 886 "data/maps/Route110/scripts.pory"
	closemessage
# 887 "data/maps/Route110/scripts.pory"
	delay 30
# 888 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 889 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 890 "data/maps/Route110/scripts.pory"
	closemessage
# 891 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 892 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 893 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 894 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 895 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 896 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 897 "data/maps/Route110/scripts.pory"
	releaseall
# 898 "data/maps/Route110/scripts.pory"
	end
# 899 "data/maps/Route110/scripts.pory"

# 900 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 901 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 902 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 903 "data/maps/Route110/scripts.pory"
	return
# 904 "data/maps/Route110/scripts.pory"

# 905 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 906 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 907 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 908 "data/maps/Route110/scripts.pory"
	return
# 909 "data/maps/Route110/scripts.pory"

# 910 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 911 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 912 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 913 "data/maps/Route110/scripts.pory"
	return
# 914 "data/maps/Route110/scripts.pory"

# 915 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 916 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 917 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 918 "data/maps/Route110/scripts.pory"
	return
# 919 "data/maps/Route110/scripts.pory"

# 920 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 921 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 922 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 923 "data/maps/Route110/scripts.pory"
	return
# 924 "data/maps/Route110/scripts.pory"

# 925 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 926 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 927 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 928 "data/maps/Route110/scripts.pory"
	return
# 929 "data/maps/Route110/scripts.pory"

# 930 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 931 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 932 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 933 "data/maps/Route110/scripts.pory"
	return
# 934 "data/maps/Route110/scripts.pory"

# 935 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 936 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 937 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 938 "data/maps/Route110/scripts.pory"
	return
# 939 "data/maps/Route110/scripts.pory"

# 940 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 941 "data/maps/Route110/scripts.pory"
	walk_down
# 942 "data/maps/Route110/scripts.pory"
	walk_down
# 943 "data/maps/Route110/scripts.pory"
	walk_down
# 944 "data/maps/Route110/scripts.pory"
	step_end
# 945 "data/maps/Route110/scripts.pory"

# 946 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 947 "data/maps/Route110/scripts.pory"
	walk_down
# 948 "data/maps/Route110/scripts.pory"
	walk_left
# 949 "data/maps/Route110/scripts.pory"
	walk_left
# 950 "data/maps/Route110/scripts.pory"
	walk_down
# 951 "data/maps/Route110/scripts.pory"
	step_end
# 952 "data/maps/Route110/scripts.pory"

# 953 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 954 "data/maps/Route110/scripts.pory"
	walk_down
# 955 "data/maps/Route110/scripts.pory"
	walk_left
# 956 "data/maps/Route110/scripts.pory"
	walk_down
# 957 "data/maps/Route110/scripts.pory"
	step_end
# 958 "data/maps/Route110/scripts.pory"

# 959 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 960 "data/maps/Route110/scripts.pory"
	walk_down
# 961 "data/maps/Route110/scripts.pory"
	walk_down
# 962 "data/maps/Route110/scripts.pory"
	step_end
# 963 "data/maps/Route110/scripts.pory"

# 964 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 965 "data/maps/Route110/scripts.pory"
	walk_down
# 966 "data/maps/Route110/scripts.pory"
	walk_right
# 967 "data/maps/Route110/scripts.pory"
	walk_down
# 968 "data/maps/Route110/scripts.pory"
	step_end
# 969 "data/maps/Route110/scripts.pory"

# 970 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 971 "data/maps/Route110/scripts.pory"
	walk_up
# 972 "data/maps/Route110/scripts.pory"
	walk_up
# 973 "data/maps/Route110/scripts.pory"
	walk_right
# 974 "data/maps/Route110/scripts.pory"
	walk_up
# 975 "data/maps/Route110/scripts.pory"
	walk_up
# 976 "data/maps/Route110/scripts.pory"
	walk_up
# 977 "data/maps/Route110/scripts.pory"
	step_end
# 978 "data/maps/Route110/scripts.pory"

# 979 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 980 "data/maps/Route110/scripts.pory"
	walk_up
# 981 "data/maps/Route110/scripts.pory"
	walk_up
# 982 "data/maps/Route110/scripts.pory"
	walk_up
# 983 "data/maps/Route110/scripts.pory"
	walk_up
# 984 "data/maps/Route110/scripts.pory"
	walk_up
# 985 "data/maps/Route110/scripts.pory"
	step_end
# 986 "data/maps/Route110/scripts.pory"

# 987 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 988 "data/maps/Route110/scripts.pory"
	walk_up
# 989 "data/maps/Route110/scripts.pory"
	walk_up
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
Route110_Movement_BirchExit4:
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
Route110_Text_WeCantTalkAboutAquaActivities:
# 1004 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 1005 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 1006 "data/maps/Route110/scripts.pory"

# 1007 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 1008 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 1009 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 1010 "data/maps/Route110/scripts.pory"

# 1011 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 1012 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 1013 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 1014 "data/maps/Route110/scripts.pory"

# 1015 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 1016 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 1017 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 1018 "data/maps/Route110/scripts.pory"

# 1019 "data/maps/Route110/scripts.pory"
Route110_Text_LetsCycleHome:
# 1020 "data/maps/Route110/scripts.pory"
	.string "You know, {PLAYER}, I've never been\n"
# 1021 "data/maps/Route110/scripts.pory"
	.string "on the Cycling Road.\p"
# 1022 "data/maps/Route110/scripts.pory"
	.string "Why don't we check out the Mauville\n"
# 1023 "data/maps/Route110/scripts.pory"
	.string "bike shop and take that route home?$"
# 1024 "data/maps/Route110/scripts.pory"

# 1025 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 1026 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 1027 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 1028 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 1029 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 1030 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 1031 "data/maps/Route110/scripts.pory"

# 1032 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 1033 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 1034 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 1035 "data/maps/Route110/scripts.pory"

# 1036 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 1037 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 1038 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 1039 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 1040 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 1041 "data/maps/Route110/scripts.pory"

# 1042 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 1043 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 1044 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 1045 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 1046 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 1047 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 1048 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 1049 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 1050 "data/maps/Route110/scripts.pory"

# 1051 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 1052 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 1053 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 1054 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 1055 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 1056 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 1057 "data/maps/Route110/scripts.pory"

# 1058 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 1059 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 1060 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 1061 "data/maps/Route110/scripts.pory"

# 1062 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 1063 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 1064 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 1065 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 1066 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 1067 "data/maps/Route110/scripts.pory"

# 1068 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 1069 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 1070 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 1071 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 1072 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 1073 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 1074 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 1075 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 1076 "data/maps/Route110/scripts.pory"

# 1077 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 1078 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 1079 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 1080 "data/maps/Route110/scripts.pory"

# 1081 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 1082 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 1083 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 1084 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 1085 "data/maps/Route110/scripts.pory"

# 1086 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 1087 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 1088 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 1089 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 1090 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1091 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1092 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1093 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1094 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1095 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1096 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1097 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1098 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 1099 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 1100 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 1101 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 1102 "data/maps/Route110/scripts.pory"

# 1103 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 1104 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 1105 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 1106 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 1107 "data/maps/Route110/scripts.pory"

# 1108 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 1109 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 1110 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 1111 "data/maps/Route110/scripts.pory"

# 1112 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 1113 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 1114 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 1115 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 1116 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 1117 "data/maps/Route110/scripts.pory"

# 1118 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 1119 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 1120 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 1121 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 1122 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 1123 "data/maps/Route110/scripts.pory"

# 1124 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 1125 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 1126 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 1127 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 1128 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 1129 "data/maps/Route110/scripts.pory"

# 1130 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 1131 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 1132 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 1133 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 1134 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 1135 "data/maps/Route110/scripts.pory"

# 1136 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 1137 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 1138 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 1139 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 1140 "data/maps/Route110/scripts.pory"

# 1141 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 1142 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 1143 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 1144 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 1145 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 1146 "data/maps/Route110/scripts.pory"

# 1147 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 1148 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 1149 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 1150 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 1151 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 1152 "data/maps/Route110/scripts.pory"

# 1153 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 1154 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 1155 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 1156 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 1157 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 1158 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 1159 "data/maps/Route110/scripts.pory"

# 1160 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 1161 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 1162 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 1163 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 1164 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 1165 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 1166 "data/maps/Route110/scripts.pory"

# 1167 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 1168 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 1169 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 1170 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 1171 "data/maps/Route110/scripts.pory"

# 1172 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 1173 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 1174 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 1175 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 1176 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 1177 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 1178 "data/maps/Route110/scripts.pory"

# 1179 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 1180 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1181 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 1182 "data/maps/Route110/scripts.pory"

# 1183 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 1184 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 1185 "data/maps/Route110/scripts.pory"

# 1186 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 1187 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 1188 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 1189 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 1190 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 1191 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 1192 "data/maps/Route110/scripts.pory"

# 1193 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 1194 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1195 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 1196 "data/maps/Route110/scripts.pory"

# 1197 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 1198 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 1199 "data/maps/Route110/scripts.pory"

# 1200 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 1201 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1202 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 1203 "data/maps/Route110/scripts.pory"

# 1204 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 1205 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1206 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 1207 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 1208 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 1209 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 1210 "data/maps/Route110/scripts.pory"

# 1211 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 1212 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1213 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 1214 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 1215 "data/maps/Route110/scripts.pory"

# 1216 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 1217 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 1218 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 1219 "data/maps/Route110/scripts.pory"

# 1220 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 1221 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1222 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 1223 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 1224 "data/maps/Route110/scripts.pory"

# 1225 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 1226 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1227 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 1228 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 1229 "data/maps/Route110/scripts.pory"

# 1230 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 1231 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 1232 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 1233 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 1234 "data/maps/Route110/scripts.pory"

# 1235 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 1236 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 1237 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 1238 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 1239 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 1240 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 1241 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 1242 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 1243 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 1244 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 1245 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 1246 "data/maps/Route110/scripts.pory"

# 1247 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 1248 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 1249 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 1250 "data/maps/Route110/scripts.pory"

# 1251 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1252 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1253 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1254 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1255 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1256 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"
