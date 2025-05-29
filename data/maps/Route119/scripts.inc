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
# 26 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 27 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 28 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_EventScript_MoveInstituteWorkersDownstairs
# 29 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
# 30 "data/maps/Route119/scripts.pory"
	end
# 31 "data/maps/Route119/scripts.pory"

# 32 "data/maps/Route119/scripts.pory"
Route119_EventScript_MoveInstituteWorkersDownstairs::
# 33 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 34 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 35 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 36 "data/maps/Route119/scripts.pory"
	return
# 37 "data/maps/Route119/scripts.pory"

# 38 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger1::
# 39 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 40 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 41 "data/maps/Route119/scripts.pory"
	end
# 42 "data/maps/Route119/scripts.pory"

# 43 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger2::
# 44 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 45 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 46 "data/maps/Route119/scripts.pory"
	end
# 47 "data/maps/Route119/scripts.pory"

# 48 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter::
# 49 "data/maps/Route119/scripts.pory"
	lockall
# 50 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 51 "data/maps/Route119/scripts.pory"
	checkplayergender
# 52 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route119_EventScript_PlayMayMusic
# 53 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route119_EventScript_PlayBrendanMusic
# 54 "data/maps/Route119/scripts.pory"
	delay 65
# 55 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalEnter1
# 56 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalEnter2
# 57 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 58 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route119/scripts.pory"
	delay 30
# 60 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 61 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 62 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 63 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL
# 64 "data/maps/Route119/scripts.pory"
	delay 30
# 65 "data/maps/Route119/scripts.pory"
	checkplayergender
# 66 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route119_EventScript_BattleMay
# 67 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route119_EventScript_BattleBrendan
# 68 "data/maps/Route119/scripts.pory"
	releaseall
# 69 "data/maps/Route119/scripts.pory"
	end
# 70 "data/maps/Route119/scripts.pory"

# 71 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayMayMusic::
# 72 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 73 "data/maps/Route119/scripts.pory"
	return
# 74 "data/maps/Route119/scripts.pory"

# 75 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayBrendanMusic::
# 76 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 77 "data/maps/Route119/scripts.pory"
	return
# 78 "data/maps/Route119/scripts.pory"

# 79 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay::
# 80 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 81 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 82 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleMayTreecko
# 83 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleMayTorchic
# 84 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleMayMudkip
# 85 "data/maps/Route119/scripts.pory"
	end
# 86 "data/maps/Route119/scripts.pory"

# 87 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTreecko::
# 88 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
# 89 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 90 "data/maps/Route119/scripts.pory"
	end
# 91 "data/maps/Route119/scripts.pory"

# 92 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTorchic::
# 93 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
# 94 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 95 "data/maps/Route119/scripts.pory"
	end
# 96 "data/maps/Route119/scripts.pory"

# 97 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayMudkip::
# 98 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
# 99 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 100 "data/maps/Route119/scripts.pory"
	end
# 101 "data/maps/Route119/scripts.pory"

# 102 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedMay::
# 103 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
# 104 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 105 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
# 106 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 107 "data/maps/Route119/scripts.pory"
	end
# 108 "data/maps/Route119/scripts.pory"

# 109 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan::
# 110 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 111 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 112 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleBrendanTreecko
# 113 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleBrendanTorchic
# 114 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleBrendanMudkip
# 115 "data/maps/Route119/scripts.pory"
	end
# 116 "data/maps/Route119/scripts.pory"

# 117 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTreecko::
# 118 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
# 119 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 120 "data/maps/Route119/scripts.pory"
	end
# 121 "data/maps/Route119/scripts.pory"

# 122 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTorchic::
# 123 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
# 124 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 125 "data/maps/Route119/scripts.pory"
	end
# 126 "data/maps/Route119/scripts.pory"

# 127 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanMudkip::
# 128 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
# 129 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 130 "data/maps/Route119/scripts.pory"
	end
# 131 "data/maps/Route119/scripts.pory"

# 132 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedBrendan::
# 133 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
# 134 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 135 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
# 136 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 137 "data/maps/Route119/scripts.pory"
	end
# 138 "data/maps/Route119/scripts.pory"

# 139 "data/maps/Route119/scripts.pory"
Route119_EventScript_GiveFlyHM::
# 140 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 141 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 142 "data/maps/Route119/scripts.pory"
	return
# 143 "data/maps/Route119/scripts.pory"

# 144 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive::
# 145 "data/maps/Route119/scripts.pory"
	closemessage
# 146 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 147 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 148 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL
# 149 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 150 "data/maps/Route119/scripts.pory"
	delay 30
# 151 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalExit1
# 152 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalExit2
# 153 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 154 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 155 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 156 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 157 "data/maps/Route119/scripts.pory"
	delay 60
# 158 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetScottPos1
# 159 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetScottPos2
# 160 "data/maps/Route119/scripts.pory"
	addobject LOCALID_SCOTT
# 161 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottEnter
# 162 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 164 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 165 "data/maps/Route119/scripts.pory"
	closemessage
# 166 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_ScottExit1
# 167 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_ScottExit2
# 168 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_SCOTT
# 169 "data/maps/Route119/scripts.pory"
	releaseall
# 170 "data/maps/Route119/scripts.pory"
	end
# 171 "data/maps/Route119/scripts.pory"

# 172 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos1::
# 173 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 27, 25
# 174 "data/maps/Route119/scripts.pory"
	return
# 175 "data/maps/Route119/scripts.pory"

# 176 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos2::
# 177 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 28, 25
# 178 "data/maps/Route119/scripts.pory"
	return
# 179 "data/maps/Route119/scripts.pory"

# 180 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit1::
# 181 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit1
# 182 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 183 "data/maps/Route119/scripts.pory"
	return
# 184 "data/maps/Route119/scripts.pory"

# 185 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit2::
# 186 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit2
# 187 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route119/scripts.pory"
	return
# 189 "data/maps/Route119/scripts.pory"

# 190 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter1::
# 191 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
# 192 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route119/scripts.pory"
	return
# 194 "data/maps/Route119/scripts.pory"

# 195 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter2::
# 196 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
# 197 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route119/scripts.pory"
	return
# 199 "data/maps/Route119/scripts.pory"

# 200 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit1::
# 201 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 202 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
# 203 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 204 "data/maps/Route119/scripts.pory"
	return
# 205 "data/maps/Route119/scripts.pory"

# 206 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit2::
# 207 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 208 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
# 209 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route119/scripts.pory"
	return
# 211 "data/maps/Route119/scripts.pory"

# 212 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos1::
# 213 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 25, 32
# 214 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 25, 32
# 215 "data/maps/Route119/scripts.pory"
	return
# 216 "data/maps/Route119/scripts.pory"

# 217 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos2::
# 218 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 26, 32
# 219 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 26, 32
# 220 "data/maps/Route119/scripts.pory"
	return
# 221 "data/maps/Route119/scripts.pory"

# 222 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 223 "data/maps/Route119/scripts.pory"
	delay_16
# 224 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_right
# 225 "data/maps/Route119/scripts.pory"
	delay_8
# 226 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 227 "data/maps/Route119/scripts.pory"
	step_end
# 228 "data/maps/Route119/scripts.pory"

# 229 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 230 "data/maps/Route119/scripts.pory"
	delay_16
# 231 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_left
# 232 "data/maps/Route119/scripts.pory"
	delay_8
# 233 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 234 "data/maps/Route119/scripts.pory"
	step_end
# 235 "data/maps/Route119/scripts.pory"

# 236 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
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
	walk_fast_right
# 245 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 246 "data/maps/Route119/scripts.pory"
	step_end
# 247 "data/maps/Route119/scripts.pory"

# 248 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
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
	walk_fast_right
# 258 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 259 "data/maps/Route119/scripts.pory"
	step_end
# 260 "data/maps/Route119/scripts.pory"

# 261 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 262 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 263 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 264 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 265 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 266 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 267 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 268 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 269 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 270 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 271 "data/maps/Route119/scripts.pory"
	step_end
# 272 "data/maps/Route119/scripts.pory"

# 273 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 274 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 275 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 276 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 277 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 278 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 279 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 280 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 281 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 282 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 283 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 284 "data/maps/Route119/scripts.pory"
	step_end
# 285 "data/maps/Route119/scripts.pory"

# 286 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 287 "data/maps/Route119/scripts.pory"
	walk_down
# 288 "data/maps/Route119/scripts.pory"
	walk_down
# 289 "data/maps/Route119/scripts.pory"
	walk_down
# 290 "data/maps/Route119/scripts.pory"
	walk_down
# 291 "data/maps/Route119/scripts.pory"
	walk_left
# 292 "data/maps/Route119/scripts.pory"
	walk_left
# 293 "data/maps/Route119/scripts.pory"
	walk_down
# 294 "data/maps/Route119/scripts.pory"
	step_end
# 295 "data/maps/Route119/scripts.pory"

# 296 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 297 "data/maps/Route119/scripts.pory"
	walk_up
# 298 "data/maps/Route119/scripts.pory"
	walk_right
# 299 "data/maps/Route119/scripts.pory"
	walk_right
# 300 "data/maps/Route119/scripts.pory"
	walk_up
# 301 "data/maps/Route119/scripts.pory"
	walk_up
# 302 "data/maps/Route119/scripts.pory"
	walk_up
# 303 "data/maps/Route119/scripts.pory"
	walk_up
# 304 "data/maps/Route119/scripts.pory"
	walk_up
# 305 "data/maps/Route119/scripts.pory"
	step_end
# 306 "data/maps/Route119/scripts.pory"

# 307 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 308 "data/maps/Route119/scripts.pory"
	walk_up
# 309 "data/maps/Route119/scripts.pory"
	walk_right
# 310 "data/maps/Route119/scripts.pory"
	walk_up
# 311 "data/maps/Route119/scripts.pory"
	walk_up
# 312 "data/maps/Route119/scripts.pory"
	walk_up
# 313 "data/maps/Route119/scripts.pory"
	walk_up
# 314 "data/maps/Route119/scripts.pory"
	walk_up
# 315 "data/maps/Route119/scripts.pory"
	step_end
# 316 "data/maps/Route119/scripts.pory"

# 317 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM::
# 318 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 319 "data/maps/Route119/scripts.pory"
	end
# 320 "data/maps/Route119/scripts.pory"

# 321 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree::
# 322 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 323 "data/maps/Route119/scripts.pory"
	end
# 324 "data/maps/Route119/scripts.pory"

# 325 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign::
# 326 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 327 "data/maps/Route119/scripts.pory"
	end
# 328 "data/maps/Route119/scripts.pory"

# 329 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent::
# 330 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 331 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 332 "data/maps/Route119/scripts.pory"
	end
# 333 "data/maps/Route119/scripts.pory"

# 334 "data/maps/Route119/scripts.pory"
Route119_EventScript_Donald::
# 335 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 336 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 337 "data/maps/Route119/scripts.pory"
	end
# 338 "data/maps/Route119/scripts.pory"

# 339 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor::
# 340 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 341 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 342 "data/maps/Route119/scripts.pory"
	end
# 343 "data/maps/Route119/scripts.pory"

# 344 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug::
# 345 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 346 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 347 "data/maps/Route119/scripts.pory"
	end
# 348 "data/maps/Route119/scripts.pory"

# 349 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg::
# 350 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 351 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 352 "data/maps/Route119/scripts.pory"
	end
# 353 "data/maps/Route119/scripts.pory"

# 354 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent::
# 355 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 356 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 357 "data/maps/Route119/scripts.pory"
	end
# 358 "data/maps/Route119/scripts.pory"

# 359 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson::
# 360 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 361 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 362 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchJackson
# 363 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 364 "data/maps/Route119/scripts.pory"
	release
# 365 "data/maps/Route119/scripts.pory"
	end
# 366 "data/maps/Route119/scripts.pory"

# 367 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson::
# 368 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 369 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 371 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 372 "data/maps/Route119/scripts.pory"
	release
# 373 "data/maps/Route119/scripts.pory"
	end
# 374 "data/maps/Route119/scripts.pory"

# 375 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson::
# 376 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 377 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 378 "data/maps/Route119/scripts.pory"
	end
# 379 "data/maps/Route119/scripts.pory"

# 380 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine::
# 381 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 382 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 383 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchCatherine
# 384 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 385 "data/maps/Route119/scripts.pory"
	release
# 386 "data/maps/Route119/scripts.pory"
	end
# 387 "data/maps/Route119/scripts.pory"

# 388 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine::
# 389 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 390 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 392 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 393 "data/maps/Route119/scripts.pory"
	release
# 394 "data/maps/Route119/scripts.pory"
	end
# 395 "data/maps/Route119/scripts.pory"

# 396 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine::
# 397 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 398 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 399 "data/maps/Route119/scripts.pory"
	end
# 400 "data/maps/Route119/scripts.pory"

# 401 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh::
# 402 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 403 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 404 "data/maps/Route119/scripts.pory"
	end
# 405 "data/maps/Route119/scripts.pory"

# 406 "data/maps/Route119/scripts.pory"
Route119_EventScript_Phil::
# 407 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 408 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 409 "data/maps/Route119/scripts.pory"
	end
# 410 "data/maps/Route119/scripts.pory"

# 411 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu::
# 412 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 413 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 414 "data/maps/Route119/scripts.pory"
	end
# 415 "data/maps/Route119/scripts.pory"

# 416 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi::
# 417 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 418 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 419 "data/maps/Route119/scripts.pory"
	end
# 420 "data/maps/Route119/scripts.pory"

# 421 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo::
# 422 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 423 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 424 "data/maps/Route119/scripts.pory"
	end
# 425 "data/maps/Route119/scripts.pory"

# 426 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris::
# 427 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 428 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 429 "data/maps/Route119/scripts.pory"
	end
# 430 "data/maps/Route119/scripts.pory"

# 431 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian::
# 432 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 433 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 434 "data/maps/Route119/scripts.pory"
	end
# 435 "data/maps/Route119/scripts.pory"

# 436 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton::
# 437 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 438 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 439 "data/maps/Route119/scripts.pory"
	end
# 440 "data/maps/Route119/scripts.pory"

# 441 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel::
# 442 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 443 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 444 "data/maps/Route119/scripts.pory"
	end
# 445 "data/maps/Route119/scripts.pory"

# 446 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1::
# 447 "data/maps/Route119/scripts.pory"
	lock
# 448 "data/maps/Route119/scripts.pory"
	faceplayer
# 449 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 450 "data/maps/Route119/scripts.pory"
	closemessage
# 451 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 452 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 453 "data/maps/Route119/scripts.pory"
	release
# 454 "data/maps/Route119/scripts.pory"
	end
# 455 "data/maps/Route119/scripts.pory"

# 456 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2::
# 457 "data/maps/Route119/scripts.pory"
	lock
# 458 "data/maps/Route119/scripts.pory"
	faceplayer
# 459 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 460 "data/maps/Route119/scripts.pory"
	closemessage
# 461 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 462 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 463 "data/maps/Route119/scripts.pory"
	release
# 464 "data/maps/Route119/scripts.pory"
	end
# 465 "data/maps/Route119/scripts.pory"

# 466 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1::
# 467 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 468 "data/maps/Route119/scripts.pory"
	end
# 469 "data/maps/Route119/scripts.pory"

# 470 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2::
# 471 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 472 "data/maps/Route119/scripts.pory"
	end
# 473 "data/maps/Route119/scripts.pory"

# 474 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration::
# 475 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 476 "data/maps/Route119/scripts.pory"
	end
# 477 "data/maps/Route119/scripts.pory"

# 478 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall::
# 479 "data/maps/Route119/scripts.pory"
	lockall
# 480 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 481 "data/maps/Route119/scripts.pory"
	waitmessage
# 482 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 483 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 484 "data/maps/Route119/scripts.pory"
	releaseall
# 485 "data/maps/Route119/scripts.pory"
	end
# 486 "data/maps/Route119/scripts.pory"

# 487 "data/maps/Route119/scripts.pory"
Route119_Text_MayIntro:
# 488 "data/maps/Route119/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 489 "data/maps/Route119/scripts.pory"
	.string "Where were you? I was looking for you!\p"
# 490 "data/maps/Route119/scripts.pory"
	.string "How much stronger have you gotten?\n"
# 491 "data/maps/Route119/scripts.pory"
	.string "Let me check for you!\p"
# 492 "data/maps/Route119/scripts.pory"
	.string "Ready with your POKéMON?\n"
# 493 "data/maps/Route119/scripts.pory"
	.string "Of course you are! Go!$"
# 494 "data/maps/Route119/scripts.pory"

# 495 "data/maps/Route119/scripts.pory"
Route119_Text_MayDefeat:
# 496 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
# 497 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}, you're strong!\p"
# 498 "data/maps/Route119/scripts.pory"
	.string "I was worried that you might be\n"
# 499 "data/maps/Route119/scripts.pory"
	.string "struggling with your training.$"
# 500 "data/maps/Route119/scripts.pory"

# 501 "data/maps/Route119/scripts.pory"
Route119_Text_MayPresentForYou:
# 502 "data/maps/Route119/scripts.pory"
	.string "MAY: But I had absolutely nothing to\n"
# 503 "data/maps/Route119/scripts.pory"
	.string "worry about! Keep it up!\p"
# 504 "data/maps/Route119/scripts.pory"
	.string "And, here! I have a present for you.$"
# 505 "data/maps/Route119/scripts.pory"

# 506 "data/maps/Route119/scripts.pory"
Route119_Text_MayExplainFly:
# 507 "data/maps/Route119/scripts.pory"
	.string "MAY: Use FLY, and your POKéMON will\n"
# 508 "data/maps/Route119/scripts.pory"
	.string "instantly carry you to any town you've\l"
# 509 "data/maps/Route119/scripts.pory"
	.string "already visited.\p"
# 510 "data/maps/Route119/scripts.pory"
	.string "But, to use FLY, you have to get\n"
# 511 "data/maps/Route119/scripts.pory"
	.string "the GYM BADGE from FORTREE CITY.\l"
# 512 "data/maps/Route119/scripts.pory"
	.string "That's important, so don't forget.\p"
# 513 "data/maps/Route119/scripts.pory"
	.string "You should FLY home and visit\n"
# 514 "data/maps/Route119/scripts.pory"
	.string "LITTLEROOT for a change.\p"
# 515 "data/maps/Route119/scripts.pory"
	.string "I bet your mom's worried about you,\n"
# 516 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 517 "data/maps/Route119/scripts.pory"
	.string "Well, let's meet again somewhere!$"
# 518 "data/maps/Route119/scripts.pory"

# 519 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIntro:
# 520 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: {PLAYER}! So this is where\n"
# 521 "data/maps/Route119/scripts.pory"
	.string "you've been looking for POKéMON?\p"
# 522 "data/maps/Route119/scripts.pory"
	.string "Let me see how good you got.\n"
# 523 "data/maps/Route119/scripts.pory"
	.string "I'll test you!\p"
# 524 "data/maps/Route119/scripts.pory"
	.string "Now!\n"
# 525 "data/maps/Route119/scripts.pory"
	.string "It's a battle, so battle!$"
# 526 "data/maps/Route119/scripts.pory"

# 527 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanDefeat:
# 528 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
# 529 "data/maps/Route119/scripts.pory"
	.string "You've gotten pretty darn decent.$"
# 530 "data/maps/Route119/scripts.pory"

# 531 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIllGiveYouThis:
# 532 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: I'd say you're good enough\n"
# 533 "data/maps/Route119/scripts.pory"
	.string "to search for POKéMON anywhere.\p"
# 534 "data/maps/Route119/scripts.pory"
	.string "Here, I'll give you this.\n"
# 535 "data/maps/Route119/scripts.pory"
	.string "Try it out.$"
# 536 "data/maps/Route119/scripts.pory"

# 537 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanExplainFly:
# 538 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: Use FLY, and your POKéMON\n"
# 539 "data/maps/Route119/scripts.pory"
	.string "instantly carries you to any town\l"
# 540 "data/maps/Route119/scripts.pory"
	.string "you've already visited.\p"
# 541 "data/maps/Route119/scripts.pory"
	.string "But you need the FORTREE GYM BADGE \n"
# 542 "data/maps/Route119/scripts.pory"
	.string "to do that.\p"
# 543 "data/maps/Route119/scripts.pory"
	.string "Anyway, I have to move along.$"
# 544 "data/maps/Route119/scripts.pory"

# 545 "data/maps/Route119/scripts.pory"
Route119_Text_ScottWayToGoBeSeeingYou:
# 546 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hahahah!\n"
# 547 "data/maps/Route119/scripts.pory"
	.string "Way to go, {PLAYER}{KUN}!\p"
# 548 "data/maps/Route119/scripts.pory"
	.string "I just passed by a TRAINER riding\n"
# 549 "data/maps/Route119/scripts.pory"
	.string "a BIKE.\p"
# 550 "data/maps/Route119/scripts.pory"
	.string "You just beat that TRAINER, didn't you?\n"
# 551 "data/maps/Route119/scripts.pory"
	.string "It was pretty obvious that you did.\p"
# 552 "data/maps/Route119/scripts.pory"
	.string "The kid looked really upset with\n"
# 553 "data/maps/Route119/scripts.pory"
	.string "a face all red from anger.\p"
# 554 "data/maps/Route119/scripts.pory"
	.string "I sure seem to run into you often.\n"
# 555 "data/maps/Route119/scripts.pory"
	.string "Are you off to FORTREE GYM next?\p"
# 556 "data/maps/Route119/scripts.pory"
	.string "I expect that you'll do well at the GYM.\n"
# 557 "data/maps/Route119/scripts.pory"
	.string "Well, I'll be seeing you!$"
# 558 "data/maps/Route119/scripts.pory"

# 559 "data/maps/Route119/scripts.pory"

# 560 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym:
# 561 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 562 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 563 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hiya, {PLAYER}{KUN}, it's me!\p"
# 564 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 565 "data/maps/Route119/scripts.pory"
	.string "the FORTREE GYM.\p"
# 566 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 567 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the TRAINER\l"
# 568 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 569 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 570 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 571 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 572 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 573 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 574 "data/maps/Route119/scripts.pory"

# 575 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute:
# 576 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
# 577 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Stay away from the WEATHER\n"
# 578 "data/maps/Route119/scripts.pory"
	.string "INSTITUTE. It's not safe.$"
# 579 "data/maps/Route119/scripts.pory"

# 580 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute:
# 581 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
# 582 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Please don't go near the\n"
# 583 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE.$"
# 584 "data/maps/Route119/scripts.pory"

# 585 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons:
# 586 "data/maps/Route119/scripts.pory"
	.string "I thought you FLY by catching a whole\n"
# 587 "data/maps/Route119/scripts.pory"
	.string "flock of BIRD POKéMON, and then\l"
# 588 "data/maps/Route119/scripts.pory"
	.string "hanging on to them somehow.\p"
# 589 "data/maps/Route119/scripts.pory"
	.string "But it turns out there's an HM move\n"
# 590 "data/maps/Route119/scripts.pory"
	.string "called FLY!\p"
# 591 "data/maps/Route119/scripts.pory"
	.string "I wish I'd known about that a long\n"
# 592 "data/maps/Route119/scripts.pory"
	.string "time ago…$"
# 593 "data/maps/Route119/scripts.pory"

# 594 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires:
# 595 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 596 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 597 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares BIKE tires.\n"
# 598 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 599 "data/maps/Route119/scripts.pory"

# 600 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase:
# 601 "data/maps/Route119/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\n"
# 602 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 603 "data/maps/Route119/scripts.pory"
	.string "SECRET BASE?$"
# 604 "data/maps/Route119/scripts.pory"

# 605 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree:
# 606 "data/maps/Route119/scripts.pory"
	.string "ROUTE 119\n"
# 607 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} FORTREE CITY$"
# 608 "data/maps/Route119/scripts.pory"

# 609 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute:
# 610 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE$"
# 611 "data/maps/Route119/scripts.pory"

# 612 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration:
# 613 "data/maps/Route119/scripts.pory"
	.string "TRAINER TIPS\p"
# 614 "data/maps/Route119/scripts.pory"
	.string "Up to sixteen decorations and\n"
# 615 "data/maps/Route119/scripts.pory"
	.string "furniture items can be placed in\l"
# 616 "data/maps/Route119/scripts.pory"
	.string "a SECRET BASE.\p"
# 617 "data/maps/Route119/scripts.pory"
	.string "Pick your favorite items and create\n"
# 618 "data/maps/Route119/scripts.pory"
	.string "your very own SECRET BASE exactly the\l"
# 619 "data/maps/Route119/scripts.pory"
	.string "way you want.$"
