# 1 "data/maps/Route119/scripts.pory"

# 2 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL, 16
# 3 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 25
# 4 "data/maps/Route119/scripts.pory"
.set LOCALID_SCOTT, 43
# 5 "data/maps/Route119/scripts.pory"

# 6 "data/maps/Route119/scripts.pory"
Route119_MapScripts::
# 7 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
# 8 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
# 9 "data/maps/Route119/scripts.pory"
	.byte 0
# 10 "data/maps/Route119/scripts.pory"

# 11 "data/maps/Route119/scripts.pory"
Route119_OnResume:
# 12 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 13 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 14 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_EventScript_TryRemoveKecleon
# 15 "data/maps/Route119/scripts.pory"
	end
# 16 "data/maps/Route119/scripts.pory"

# 17 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon::
# 18 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 19 "data/maps/Route119/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 20 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 21 "data/maps/Route119/scripts.pory"
	return
# 22 "data/maps/Route119/scripts.pory"

# 23 "data/maps/Route119/scripts.pory"
Route119_OnTransition:
# 24 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 25 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
	call Common_EventScript_SetupRivalGfxId
# 26 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 27 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_EventScript_MoveInstituteWorkersDownstairs
# 28 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
# 29 "data/maps/Route119/scripts.pory"
	end
# 30 "data/maps/Route119/scripts.pory"

# 31 "data/maps/Route119/scripts.pory"
Route119_EventScript_MoveInstituteWorkersDownstairs::
# 32 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 33 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 34 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 35 "data/maps/Route119/scripts.pory"
	return
# 36 "data/maps/Route119/scripts.pory"

# 37 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger1::
# 38 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 40 "data/maps/Route119/scripts.pory"
	end
# 41 "data/maps/Route119/scripts.pory"

# 42 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger2::
# 43 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 44 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 45 "data/maps/Route119/scripts.pory"
	end
# 46 "data/maps/Route119/scripts.pory"

# 47 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter::
# 48 "data/maps/Route119/scripts.pory"
	lockall
# 49 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 50 "data/maps/Route119/scripts.pory"
	checkplayergender
# 51 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route119_EventScript_PlayMayMusic
# 52 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route119_EventScript_PlayBrendanMusic
# 53 "data/maps/Route119/scripts.pory"
	delay 65
# 54 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalEnter1
# 55 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalEnter2
# 56 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 57 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route119/scripts.pory"
	delay 30
# 59 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 60 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 61 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 62 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL
# 63 "data/maps/Route119/scripts.pory"
	delay 30
# 64 "data/maps/Route119/scripts.pory"
	checkplayergender
# 65 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route119_EventScript_BattleMay
# 66 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route119_EventScript_BattleBrendan
# 67 "data/maps/Route119/scripts.pory"
	releaseall
# 68 "data/maps/Route119/scripts.pory"
	end
# 69 "data/maps/Route119/scripts.pory"

# 70 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayMayMusic::
# 71 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 72 "data/maps/Route119/scripts.pory"
	return
# 73 "data/maps/Route119/scripts.pory"

# 74 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayBrendanMusic::
# 75 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 76 "data/maps/Route119/scripts.pory"
	return
# 77 "data/maps/Route119/scripts.pory"

# 78 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay::
# 79 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 80 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 81 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleMayTreecko
# 82 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleMayTorchic
# 83 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleMayMudkip
# 84 "data/maps/Route119/scripts.pory"
	end
# 85 "data/maps/Route119/scripts.pory"

# 86 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTreecko::
# 87 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
# 88 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 89 "data/maps/Route119/scripts.pory"
	end
# 90 "data/maps/Route119/scripts.pory"

# 91 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTorchic::
# 92 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
# 93 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 94 "data/maps/Route119/scripts.pory"
	end
# 95 "data/maps/Route119/scripts.pory"

# 96 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayMudkip::
# 97 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
# 98 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 99 "data/maps/Route119/scripts.pory"
	end
# 100 "data/maps/Route119/scripts.pory"

# 101 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedMay::
# 102 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
# 103 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 104 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
# 105 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 106 "data/maps/Route119/scripts.pory"
	end
# 107 "data/maps/Route119/scripts.pory"

# 108 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan::
# 109 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 110 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 111 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleBrendanTreecko
# 112 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleBrendanTorchic
# 113 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleBrendanMudkip
# 114 "data/maps/Route119/scripts.pory"
	end
# 115 "data/maps/Route119/scripts.pory"

# 116 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTreecko::
# 117 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
# 118 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 119 "data/maps/Route119/scripts.pory"
	end
# 120 "data/maps/Route119/scripts.pory"

# 121 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTorchic::
# 122 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
# 123 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 124 "data/maps/Route119/scripts.pory"
	end
# 125 "data/maps/Route119/scripts.pory"

# 126 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanMudkip::
# 127 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
# 128 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 129 "data/maps/Route119/scripts.pory"
	end
# 130 "data/maps/Route119/scripts.pory"

# 131 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedBrendan::
# 132 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
# 133 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 134 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
# 135 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 136 "data/maps/Route119/scripts.pory"
	end
# 137 "data/maps/Route119/scripts.pory"

# 138 "data/maps/Route119/scripts.pory"
Route119_EventScript_GiveFlyHM::
# 139 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 140 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 141 "data/maps/Route119/scripts.pory"
	return
# 142 "data/maps/Route119/scripts.pory"

# 143 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive::
# 144 "data/maps/Route119/scripts.pory"
	closemessage
# 145 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 146 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 147 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL
# 148 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 149 "data/maps/Route119/scripts.pory"
	delay 30
# 150 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalExit1
# 151 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalExit2
# 152 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 153 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 154 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 155 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 156 "data/maps/Route119/scripts.pory"
	delay 60
# 157 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetScottPos1
# 158 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetScottPos2
# 159 "data/maps/Route119/scripts.pory"
	addobject LOCALID_SCOTT
# 160 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottEnter
# 161 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 162 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 163 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 164 "data/maps/Route119/scripts.pory"
	closemessage
# 165 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_ScottExit1
# 166 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_ScottExit2
# 167 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_SCOTT
# 168 "data/maps/Route119/scripts.pory"
	releaseall
# 169 "data/maps/Route119/scripts.pory"
	end
# 170 "data/maps/Route119/scripts.pory"

# 171 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos1::
# 172 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 27, 25
# 173 "data/maps/Route119/scripts.pory"
	return
# 174 "data/maps/Route119/scripts.pory"

# 175 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos2::
# 176 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 28, 25
# 177 "data/maps/Route119/scripts.pory"
	return
# 178 "data/maps/Route119/scripts.pory"

# 179 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit1::
# 180 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit1
# 181 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 182 "data/maps/Route119/scripts.pory"
	return
# 183 "data/maps/Route119/scripts.pory"

# 184 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit2::
# 185 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit2
# 186 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route119/scripts.pory"
	return
# 188 "data/maps/Route119/scripts.pory"

# 189 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter1::
# 190 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
# 191 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 192 "data/maps/Route119/scripts.pory"
	return
# 193 "data/maps/Route119/scripts.pory"

# 194 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter2::
# 195 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
# 196 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route119/scripts.pory"
	return
# 198 "data/maps/Route119/scripts.pory"

# 199 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit1::
# 200 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 201 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
# 202 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 203 "data/maps/Route119/scripts.pory"
	return
# 204 "data/maps/Route119/scripts.pory"

# 205 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit2::
# 206 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 207 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
# 208 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route119/scripts.pory"
	return
# 210 "data/maps/Route119/scripts.pory"

# 211 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos1::
# 212 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 25, 32
# 213 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 25, 32
# 214 "data/maps/Route119/scripts.pory"
	return
# 215 "data/maps/Route119/scripts.pory"

# 216 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos2::
# 217 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 26, 32
# 218 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 26, 32
# 219 "data/maps/Route119/scripts.pory"
	return
# 220 "data/maps/Route119/scripts.pory"

# 221 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 222 "data/maps/Route119/scripts.pory"
	delay_16
# 223 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_right
# 224 "data/maps/Route119/scripts.pory"
	delay_8
# 225 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 226 "data/maps/Route119/scripts.pory"
	step_end
# 227 "data/maps/Route119/scripts.pory"

# 228 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 229 "data/maps/Route119/scripts.pory"
	delay_16
# 230 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_left
# 231 "data/maps/Route119/scripts.pory"
	delay_8
# 232 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 233 "data/maps/Route119/scripts.pory"
	step_end
# 234 "data/maps/Route119/scripts.pory"

# 235 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
# 236 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 237 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 238 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 239 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 240 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 241 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 242 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 243 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 245 "data/maps/Route119/scripts.pory"
	step_end
# 246 "data/maps/Route119/scripts.pory"

# 247 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
# 248 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 250 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 251 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 252 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 253 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 255 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 256 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 257 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 258 "data/maps/Route119/scripts.pory"
	step_end
# 259 "data/maps/Route119/scripts.pory"

# 260 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 261 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 262 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 263 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 264 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 265 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 266 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 267 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 268 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 269 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 270 "data/maps/Route119/scripts.pory"
	step_end
# 271 "data/maps/Route119/scripts.pory"

# 272 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 273 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 274 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 275 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 276 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 277 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 278 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 279 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 280 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 281 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 282 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 283 "data/maps/Route119/scripts.pory"
	step_end
# 284 "data/maps/Route119/scripts.pory"

# 285 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 286 "data/maps/Route119/scripts.pory"
	walk_down
# 287 "data/maps/Route119/scripts.pory"
	walk_down
# 288 "data/maps/Route119/scripts.pory"
	walk_down
# 289 "data/maps/Route119/scripts.pory"
	walk_down
# 290 "data/maps/Route119/scripts.pory"
	walk_left
# 291 "data/maps/Route119/scripts.pory"
	walk_left
# 292 "data/maps/Route119/scripts.pory"
	walk_down
# 293 "data/maps/Route119/scripts.pory"
	step_end
# 294 "data/maps/Route119/scripts.pory"

# 295 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 296 "data/maps/Route119/scripts.pory"
	walk_up
# 297 "data/maps/Route119/scripts.pory"
	walk_right
# 298 "data/maps/Route119/scripts.pory"
	walk_right
# 299 "data/maps/Route119/scripts.pory"
	walk_up
# 300 "data/maps/Route119/scripts.pory"
	walk_up
# 301 "data/maps/Route119/scripts.pory"
	walk_up
# 302 "data/maps/Route119/scripts.pory"
	walk_up
# 303 "data/maps/Route119/scripts.pory"
	walk_up
# 304 "data/maps/Route119/scripts.pory"
	step_end
# 305 "data/maps/Route119/scripts.pory"

# 306 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 307 "data/maps/Route119/scripts.pory"
	walk_up
# 308 "data/maps/Route119/scripts.pory"
	walk_right
# 309 "data/maps/Route119/scripts.pory"
	walk_up
# 310 "data/maps/Route119/scripts.pory"
	walk_up
# 311 "data/maps/Route119/scripts.pory"
	walk_up
# 312 "data/maps/Route119/scripts.pory"
	walk_up
# 313 "data/maps/Route119/scripts.pory"
	walk_up
# 314 "data/maps/Route119/scripts.pory"
	step_end
# 315 "data/maps/Route119/scripts.pory"

# 316 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM::
# 317 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 318 "data/maps/Route119/scripts.pory"
	end
# 319 "data/maps/Route119/scripts.pory"

# 320 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree::
# 321 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 322 "data/maps/Route119/scripts.pory"
	end
# 323 "data/maps/Route119/scripts.pory"

# 324 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign::
# 325 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 326 "data/maps/Route119/scripts.pory"
	end
# 327 "data/maps/Route119/scripts.pory"

# 328 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent::
# 329 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 330 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 331 "data/maps/Route119/scripts.pory"
	end
# 332 "data/maps/Route119/scripts.pory"

# 333 "data/maps/Route119/scripts.pory"
Route119_EventScript_Donald::
# 334 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 335 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 336 "data/maps/Route119/scripts.pory"
	end
# 337 "data/maps/Route119/scripts.pory"

# 338 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor::
# 339 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 340 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 341 "data/maps/Route119/scripts.pory"
	end
# 342 "data/maps/Route119/scripts.pory"

# 343 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug::
# 344 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 345 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 346 "data/maps/Route119/scripts.pory"
	end
# 347 "data/maps/Route119/scripts.pory"

# 348 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg::
# 349 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 350 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 351 "data/maps/Route119/scripts.pory"
	end
# 352 "data/maps/Route119/scripts.pory"

# 353 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent::
# 354 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 355 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 356 "data/maps/Route119/scripts.pory"
	end
# 357 "data/maps/Route119/scripts.pory"

# 358 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson::
# 359 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 360 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 361 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchJackson
# 362 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 363 "data/maps/Route119/scripts.pory"
	release
# 364 "data/maps/Route119/scripts.pory"
	end
# 365 "data/maps/Route119/scripts.pory"

# 366 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson::
# 367 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 368 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 369 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 370 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 371 "data/maps/Route119/scripts.pory"
	release
# 372 "data/maps/Route119/scripts.pory"
	end
# 373 "data/maps/Route119/scripts.pory"

# 374 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson::
# 375 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 376 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 377 "data/maps/Route119/scripts.pory"
	end
# 378 "data/maps/Route119/scripts.pory"

# 379 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine::
# 380 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 381 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 382 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchCatherine
# 383 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 384 "data/maps/Route119/scripts.pory"
	release
# 385 "data/maps/Route119/scripts.pory"
	end
# 386 "data/maps/Route119/scripts.pory"

# 387 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine::
# 388 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 389 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 390 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 391 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 392 "data/maps/Route119/scripts.pory"
	release
# 393 "data/maps/Route119/scripts.pory"
	end
# 394 "data/maps/Route119/scripts.pory"

# 395 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine::
# 396 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 397 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 398 "data/maps/Route119/scripts.pory"
	end
# 399 "data/maps/Route119/scripts.pory"

# 400 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh::
# 401 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 402 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 403 "data/maps/Route119/scripts.pory"
	end
# 404 "data/maps/Route119/scripts.pory"

# 405 "data/maps/Route119/scripts.pory"
Route119_EventScript_Phil::
# 406 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 407 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 408 "data/maps/Route119/scripts.pory"
	end
# 409 "data/maps/Route119/scripts.pory"

# 410 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu::
# 411 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 412 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 413 "data/maps/Route119/scripts.pory"
	end
# 414 "data/maps/Route119/scripts.pory"

# 415 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi::
# 416 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 417 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 418 "data/maps/Route119/scripts.pory"
	end
# 419 "data/maps/Route119/scripts.pory"

# 420 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo::
# 421 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 422 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 423 "data/maps/Route119/scripts.pory"
	end
# 424 "data/maps/Route119/scripts.pory"

# 425 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris::
# 426 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 427 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 428 "data/maps/Route119/scripts.pory"
	end
# 429 "data/maps/Route119/scripts.pory"

# 430 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian::
# 431 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 432 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 433 "data/maps/Route119/scripts.pory"
	end
# 434 "data/maps/Route119/scripts.pory"

# 435 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton::
# 436 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 437 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 438 "data/maps/Route119/scripts.pory"
	end
# 439 "data/maps/Route119/scripts.pory"

# 440 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel::
# 441 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 442 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 443 "data/maps/Route119/scripts.pory"
	end
# 444 "data/maps/Route119/scripts.pory"

# 445 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1::
# 446 "data/maps/Route119/scripts.pory"
	lock
# 447 "data/maps/Route119/scripts.pory"
	faceplayer
# 448 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 449 "data/maps/Route119/scripts.pory"
	closemessage
# 450 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 451 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 452 "data/maps/Route119/scripts.pory"
	release
# 453 "data/maps/Route119/scripts.pory"
	end
# 454 "data/maps/Route119/scripts.pory"

# 455 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2::
# 456 "data/maps/Route119/scripts.pory"
	lock
# 457 "data/maps/Route119/scripts.pory"
	faceplayer
# 458 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 459 "data/maps/Route119/scripts.pory"
	closemessage
# 460 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 461 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 462 "data/maps/Route119/scripts.pory"
	release
# 463 "data/maps/Route119/scripts.pory"
	end
# 464 "data/maps/Route119/scripts.pory"

# 465 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1::
# 466 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 467 "data/maps/Route119/scripts.pory"
	end
# 468 "data/maps/Route119/scripts.pory"

# 469 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2::
# 470 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 471 "data/maps/Route119/scripts.pory"
	end
# 472 "data/maps/Route119/scripts.pory"

# 473 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration::
# 474 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 475 "data/maps/Route119/scripts.pory"
	end
# 476 "data/maps/Route119/scripts.pory"

# 477 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall::
# 478 "data/maps/Route119/scripts.pory"
	lockall
# 479 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 480 "data/maps/Route119/scripts.pory"
	waitmessage
# 481 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 482 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 483 "data/maps/Route119/scripts.pory"
	releaseall
# 484 "data/maps/Route119/scripts.pory"
	end
# 485 "data/maps/Route119/scripts.pory"

# 486 "data/maps/Route119/scripts.pory"
Route119_Text_MayIntro:
# 487 "data/maps/Route119/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 488 "data/maps/Route119/scripts.pory"
	.string "Where were you? I was looking for you!\p"
# 489 "data/maps/Route119/scripts.pory"
	.string "How much stronger have you gotten?\n"
# 490 "data/maps/Route119/scripts.pory"
	.string "Let me check for you!\p"
# 491 "data/maps/Route119/scripts.pory"
	.string "Ready with your POKéMON?\n"
# 492 "data/maps/Route119/scripts.pory"
	.string "Of course you are! Go!$"
# 493 "data/maps/Route119/scripts.pory"

# 494 "data/maps/Route119/scripts.pory"
Route119_Text_MayDefeat:
# 495 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
# 496 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}, you're strong!\p"
# 497 "data/maps/Route119/scripts.pory"
	.string "I was worried that you might be\n"
# 498 "data/maps/Route119/scripts.pory"
	.string "struggling with your training.$"
# 499 "data/maps/Route119/scripts.pory"

# 500 "data/maps/Route119/scripts.pory"
Route119_Text_MayPresentForYou:
# 501 "data/maps/Route119/scripts.pory"
	.string "MAY: But I had absolutely nothing to\n"
# 502 "data/maps/Route119/scripts.pory"
	.string "worry about! Keep it up!\p"
# 503 "data/maps/Route119/scripts.pory"
	.string "And, here! I have a present for you.$"
# 504 "data/maps/Route119/scripts.pory"

# 505 "data/maps/Route119/scripts.pory"
Route119_Text_MayExplainFly:
# 506 "data/maps/Route119/scripts.pory"
	.string "MAY: Use FLY, and your POKéMON will\n"
# 507 "data/maps/Route119/scripts.pory"
	.string "instantly carry you to any town you've\l"
# 508 "data/maps/Route119/scripts.pory"
	.string "already visited.\p"
# 509 "data/maps/Route119/scripts.pory"
	.string "But, to use FLY, you have to get\n"
# 510 "data/maps/Route119/scripts.pory"
	.string "the GYM BADGE from FORTREE CITY.\l"
# 511 "data/maps/Route119/scripts.pory"
	.string "That's important, so don't forget.\p"
# 512 "data/maps/Route119/scripts.pory"
	.string "You should FLY home and visit\n"
# 513 "data/maps/Route119/scripts.pory"
	.string "LITTLEROOT for a change.\p"
# 514 "data/maps/Route119/scripts.pory"
	.string "I bet your mom's worried about you,\n"
# 515 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 516 "data/maps/Route119/scripts.pory"
	.string "Well, let's meet again somewhere!$"
# 517 "data/maps/Route119/scripts.pory"

# 518 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIntro:
# 519 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: {PLAYER}! So this is where\n"
# 520 "data/maps/Route119/scripts.pory"
	.string "you've been looking for POKéMON?\p"
# 521 "data/maps/Route119/scripts.pory"
	.string "Let me see how good you got.\n"
# 522 "data/maps/Route119/scripts.pory"
	.string "I'll test you!\p"
# 523 "data/maps/Route119/scripts.pory"
	.string "Now!\n"
# 524 "data/maps/Route119/scripts.pory"
	.string "It's a battle, so battle!$"
# 525 "data/maps/Route119/scripts.pory"

# 526 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanDefeat:
# 527 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
# 528 "data/maps/Route119/scripts.pory"
	.string "You've gotten pretty darn decent.$"
# 529 "data/maps/Route119/scripts.pory"

# 530 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIllGiveYouThis:
# 531 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: I'd say you're good enough\n"
# 532 "data/maps/Route119/scripts.pory"
	.string "to search for POKéMON anywhere.\p"
# 533 "data/maps/Route119/scripts.pory"
	.string "Here, I'll give you this.\n"
# 534 "data/maps/Route119/scripts.pory"
	.string "Try it out.$"
# 535 "data/maps/Route119/scripts.pory"

# 536 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanExplainFly:
# 537 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: Use FLY, and your POKéMON\n"
# 538 "data/maps/Route119/scripts.pory"
	.string "instantly carries you to any town\l"
# 539 "data/maps/Route119/scripts.pory"
	.string "you've already visited.\p"
# 540 "data/maps/Route119/scripts.pory"
	.string "But you need the FORTREE GYM BADGE \n"
# 541 "data/maps/Route119/scripts.pory"
	.string "to do that.\p"
# 542 "data/maps/Route119/scripts.pory"
	.string "Anyway, I have to move along.$"
# 543 "data/maps/Route119/scripts.pory"

# 544 "data/maps/Route119/scripts.pory"
Route119_Text_ScottWayToGoBeSeeingYou:
# 545 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hahahah!\n"
# 546 "data/maps/Route119/scripts.pory"
	.string "Way to go, {PLAYER}{KUN}!\p"
# 547 "data/maps/Route119/scripts.pory"
	.string "I just passed by a TRAINER riding\n"
# 548 "data/maps/Route119/scripts.pory"
	.string "a BIKE.\p"
# 549 "data/maps/Route119/scripts.pory"
	.string "You just beat that TRAINER, didn't you?\n"
# 550 "data/maps/Route119/scripts.pory"
	.string "It was pretty obvious that you did.\p"
# 551 "data/maps/Route119/scripts.pory"
	.string "The kid looked really upset with\n"
# 552 "data/maps/Route119/scripts.pory"
	.string "a face all red from anger.\p"
# 553 "data/maps/Route119/scripts.pory"
	.string "I sure seem to run into you often.\n"
# 554 "data/maps/Route119/scripts.pory"
	.string "Are you off to FORTREE GYM next?\p"
# 555 "data/maps/Route119/scripts.pory"
	.string "I expect that you'll do well at the GYM.\n"
# 556 "data/maps/Route119/scripts.pory"
	.string "Well, I'll be seeing you!$"
# 557 "data/maps/Route119/scripts.pory"

# 558 "data/maps/Route119/scripts.pory"

# 559 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym:
# 560 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 561 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 562 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hiya, {PLAYER}{KUN}, it's me!\p"
# 563 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 564 "data/maps/Route119/scripts.pory"
	.string "the FORTREE GYM.\p"
# 565 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 566 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the TRAINER\l"
# 567 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 568 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 569 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 570 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 571 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 572 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 573 "data/maps/Route119/scripts.pory"

# 574 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute:
# 575 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
# 576 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Stay away from the WEATHER\n"
# 577 "data/maps/Route119/scripts.pory"
	.string "INSTITUTE. It's not safe.$"
# 578 "data/maps/Route119/scripts.pory"

# 579 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute:
# 580 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
# 581 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Please don't go near the\n"
# 582 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE.$"
# 583 "data/maps/Route119/scripts.pory"

# 584 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons:
# 585 "data/maps/Route119/scripts.pory"
	.string "I thought you FLY by catching a whole\n"
# 586 "data/maps/Route119/scripts.pory"
	.string "flock of BIRD POKéMON, and then\l"
# 587 "data/maps/Route119/scripts.pory"
	.string "hanging on to them somehow.\p"
# 588 "data/maps/Route119/scripts.pory"
	.string "But it turns out there's an HM move\n"
# 589 "data/maps/Route119/scripts.pory"
	.string "called FLY!\p"
# 590 "data/maps/Route119/scripts.pory"
	.string "I wish I'd known about that a long\n"
# 591 "data/maps/Route119/scripts.pory"
	.string "time ago…$"
# 592 "data/maps/Route119/scripts.pory"

# 593 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires:
# 594 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 595 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 596 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares BIKE tires.\n"
# 597 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 598 "data/maps/Route119/scripts.pory"

# 599 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase:
# 600 "data/maps/Route119/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\n"
# 601 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 602 "data/maps/Route119/scripts.pory"
	.string "SECRET BASE?$"
# 603 "data/maps/Route119/scripts.pory"

# 604 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree:
# 605 "data/maps/Route119/scripts.pory"
	.string "ROUTE 119\n"
# 606 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} FORTREE CITY$"
# 607 "data/maps/Route119/scripts.pory"

# 608 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute:
# 609 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE$"
# 610 "data/maps/Route119/scripts.pory"

# 611 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration:
# 612 "data/maps/Route119/scripts.pory"
	.string "TRAINER TIPS\p"
# 613 "data/maps/Route119/scripts.pory"
	.string "Up to sixteen decorations and\n"
# 614 "data/maps/Route119/scripts.pory"
	.string "furniture items can be placed in\l"
# 615 "data/maps/Route119/scripts.pory"
	.string "a SECRET BASE.\p"
# 616 "data/maps/Route119/scripts.pory"
	.string "Pick your favorite items and create\n"
# 617 "data/maps/Route119/scripts.pory"
	.string "your very own SECRET BASE exactly the\l"
# 618 "data/maps/Route119/scripts.pory"
	.string "way you want.$"
