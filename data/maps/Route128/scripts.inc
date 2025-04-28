# 1 "data/maps/Route128/scripts.pory"

# 2 "data/maps/Route128/scripts.pory"
.set LOCALID_STEVEN, 3
# 3 "data/maps/Route128/scripts.pory"
.set LOCALID_ARCHIE, 4
# 4 "data/maps/Route128/scripts.pory"
.set LOCALID_MAXIE, 5
# 5 "data/maps/Route128/scripts.pory"

# 6 "data/maps/Route128/scripts.pory"
Route128_MapScripts::
# 7 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_OnTransition
# 8 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_OnFrame
# 9 "data/maps/Route128/scripts.pory"
	.byte 0
# 10 "data/maps/Route128/scripts.pory"

# 11 "data/maps/Route128/scripts.pory"
Route128_OnTransition:
# 12 "data/maps/Route128/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 13 "data/maps/Route128/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 14 "data/maps/Route128/scripts.pory"
	end
# 15 "data/maps/Route128/scripts.pory"

# 16 "data/maps/Route128/scripts.pory"
Route128_OnFrame:
# 17 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
# 18 "data/maps/Route128/scripts.pory"
	.2byte 0
# 19 "data/maps/Route128/scripts.pory"

# 20 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene::
# 21 "data/maps/Route128/scripts.pory"
	lockall
# 22 "data/maps/Route128/scripts.pory"
	delay 20
# 23 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieLookAround
# 24 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieWhatHappened, MSGBOX_DEFAULT
# 26 "data/maps/Route128/scripts.pory"
	closemessage
# 27 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieBackUp
# 28 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieIOnlyWanted, MSGBOX_DEFAULT
# 30 "data/maps/Route128/scripts.pory"
	closemessage
# 31 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachArchie
# 32 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 34 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieDoYouUnderstandNow, MSGBOX_DEFAULT
# 36 "data/maps/Route128/scripts.pory"
	closemessage
# 37 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachPlayer
# 38 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 40 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieResposibilityFallsToArchieAndMe, MSGBOX_DEFAULT
# 42 "data/maps/Route128/scripts.pory"
	closemessage
# 43 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieRunLeft
# 44 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 45 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieWalkLeft
# 46 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieThisDefiesBelief, MSGBOX_DEFAULT
# 48 "data/maps/Route128/scripts.pory"
	closemessage
# 49 "data/maps/Route128/scripts.pory"
	delay 40
# 50 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieExit
# 51 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieExit
# 52 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_MAXIE
# 54 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ARCHIE
# 55 "data/maps/Route128/scripts.pory"
	delay 100
# 56 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 57 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 58 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 59 "data/maps/Route128/scripts.pory"
	addobject LOCALID_STEVEN
# 60 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Route128_Movement_StevenApproachPlayer
# 61 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 63 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWhatIsHappening, MSGBOX_DEFAULT
# 65 "data/maps/Route128/scripts.pory"
	closemessage
# 66 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Route128_Movement_StevenWalkUp
# 67 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 68 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWholeWorldWillDrown, MSGBOX_DEFAULT
# 70 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 71 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenImGoingToSootopolis, MSGBOX_DEFAULT
# 73 "data/maps/Route128/scripts.pory"
	closemessage
# 74 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 75 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route128/scripts.pory"
	delay 50
# 77 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 78 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 79 "data/maps/Route128/scripts.pory"
	delay 15
# 80 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_STEVEN
# 81 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 82 "data/maps/Route128/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 83 "data/maps/Route128/scripts.pory"
	setvar VAR_ROUTE128_STATE, 2
# 84 "data/maps/Route128/scripts.pory"
	releaseall
# 85 "data/maps/Route128/scripts.pory"
	end
# 86 "data/maps/Route128/scripts.pory"

# 87 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused1:
# 88 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 89 "data/maps/Route128/scripts.pory"
	step_end
# 90 "data/maps/Route128/scripts.pory"

# 91 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused2:
# 92 "data/maps/Route128/scripts.pory"
	walk_left
# 93 "data/maps/Route128/scripts.pory"
	walk_left
# 94 "data/maps/Route128/scripts.pory"
	walk_left
# 95 "data/maps/Route128/scripts.pory"
	walk_left
# 96 "data/maps/Route128/scripts.pory"
	walk_left
# 97 "data/maps/Route128/scripts.pory"
	walk_left
# 98 "data/maps/Route128/scripts.pory"
	walk_up
# 99 "data/maps/Route128/scripts.pory"
	walk_up
# 100 "data/maps/Route128/scripts.pory"
	walk_up
# 101 "data/maps/Route128/scripts.pory"
	walk_up
# 102 "data/maps/Route128/scripts.pory"
	walk_up
# 103 "data/maps/Route128/scripts.pory"
	walk_up
# 104 "data/maps/Route128/scripts.pory"
	step_end
# 105 "data/maps/Route128/scripts.pory"

# 106 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenWalkUp:
# 107 "data/maps/Route128/scripts.pory"
	walk_up
# 108 "data/maps/Route128/scripts.pory"
	step_end
# 109 "data/maps/Route128/scripts.pory"

# 110 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenApproachPlayer:
# 111 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 112 "data/maps/Route128/scripts.pory"
	step_end
# 113 "data/maps/Route128/scripts.pory"

# 114 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieLookAround:
# 115 "data/maps/Route128/scripts.pory"
	walk_fast_down
# 116 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_left
# 117 "data/maps/Route128/scripts.pory"
	delay_16
# 118 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 119 "data/maps/Route128/scripts.pory"
	delay_16
# 120 "data/maps/Route128/scripts.pory"
	delay_16
# 121 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 122 "data/maps/Route128/scripts.pory"
	step_end
# 123 "data/maps/Route128/scripts.pory"

# 124 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieBackUp:
# 125 "data/maps/Route128/scripts.pory"
	lock_facing_direction
# 126 "data/maps/Route128/scripts.pory"
	walk_slow_up
# 127 "data/maps/Route128/scripts.pory"
	delay_16
# 128 "data/maps/Route128/scripts.pory"
	unlock_facing_direction
# 129 "data/maps/Route128/scripts.pory"
	step_end
# 130 "data/maps/Route128/scripts.pory"

# 131 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieRunLeft:
# 132 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 133 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 134 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 135 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 136 "data/maps/Route128/scripts.pory"
	step_end
# 137 "data/maps/Route128/scripts.pory"

# 138 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieExit:
# 139 "data/maps/Route128/scripts.pory"
	delay_16
# 140 "data/maps/Route128/scripts.pory"
	delay_16
# 141 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 142 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 144 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 146 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 147 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 148 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 149 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 150 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 151 "data/maps/Route128/scripts.pory"
	step_end
# 152 "data/maps/Route128/scripts.pory"

# 153 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieWalkLeft:
# 154 "data/maps/Route128/scripts.pory"
	walk_left
# 155 "data/maps/Route128/scripts.pory"
	walk_left
# 156 "data/maps/Route128/scripts.pory"
	delay_8
# 157 "data/maps/Route128/scripts.pory"
	delay_4
# 158 "data/maps/Route128/scripts.pory"
	step_end
# 159 "data/maps/Route128/scripts.pory"

# 160 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachArchie:
# 161 "data/maps/Route128/scripts.pory"
	walk_left
# 162 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 163 "data/maps/Route128/scripts.pory"
	step_end
# 164 "data/maps/Route128/scripts.pory"

# 165 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieExit:
# 166 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 167 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 168 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 169 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 170 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 171 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 172 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 173 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 174 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 175 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 176 "data/maps/Route128/scripts.pory"
	step_end
# 177 "data/maps/Route128/scripts.pory"

# 178 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachPlayer:
# 179 "data/maps/Route128/scripts.pory"
	walk_right
# 180 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 181 "data/maps/Route128/scripts.pory"
	step_end
# 182 "data/maps/Route128/scripts.pory"

# 183 "data/maps/Route128/scripts.pory"
Route128_EventScript_Isaiah::
# 184 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ISAIAH_1, Route128_Text_IsaiahIntro, Route128_Text_IsaiahDefeat, Route128_EventScript_RegisterIsaiah
# 185 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 186 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchIsaiah
# 187 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_DEFAULT
# 188 "data/maps/Route128/scripts.pory"
	release
# 189 "data/maps/Route128/scripts.pory"
	end
# 190 "data/maps/Route128/scripts.pory"

# 191 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterIsaiah::
# 192 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 193 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahRegister, MSGBOX_DEFAULT
# 195 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_ISAIAH_1
# 196 "data/maps/Route128/scripts.pory"
	release
# 197 "data/maps/Route128/scripts.pory"
	end
# 198 "data/maps/Route128/scripts.pory"

# 199 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchIsaiah::
# 200 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_ISAIAH_1, Route128_Text_IsaiahRematchIntro, Route128_Text_IsaiahRematchDefeat
# 201 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostRematch, MSGBOX_AUTOCLOSE
# 202 "data/maps/Route128/scripts.pory"
	end
# 203 "data/maps/Route128/scripts.pory"

# 204 "data/maps/Route128/scripts.pory"
Route128_EventScript_Katelyn::
# 205 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_KATELYN_1, Route128_Text_KatelynIntro, Route128_Text_KatelynDefeat, Route128_EventScript_RegisterKatelyn
# 206 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 207 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchKatelyn
# 208 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_DEFAULT
# 209 "data/maps/Route128/scripts.pory"
	release
# 210 "data/maps/Route128/scripts.pory"
	end
# 211 "data/maps/Route128/scripts.pory"

# 212 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterKatelyn::
# 213 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 214 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynRegister, MSGBOX_DEFAULT
# 216 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_KATELYN_1
# 217 "data/maps/Route128/scripts.pory"
	release
# 218 "data/maps/Route128/scripts.pory"
	end
# 219 "data/maps/Route128/scripts.pory"

# 220 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchKatelyn::
# 221 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_KATELYN_1, Route128_Text_KatelynRematchIntro, Route128_Text_KatelynRematchDefeat
# 222 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostRematch, MSGBOX_AUTOCLOSE
# 223 "data/maps/Route128/scripts.pory"
	end
# 224 "data/maps/Route128/scripts.pory"

# 225 "data/maps/Route128/scripts.pory"
Route128_EventScript_Alexa::
# 226 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
# 227 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/Route128/scripts.pory"
	end
# 229 "data/maps/Route128/scripts.pory"

# 230 "data/maps/Route128/scripts.pory"
Route128_EventScript_Ruben::
# 231 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_RUBEN, Route128_Text_RubenIntro, Route128_Text_RubenDefeat
# 232 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route128/scripts.pory"
	end
# 234 "data/maps/Route128/scripts.pory"

# 235 "data/maps/Route128/scripts.pory"
Route128_EventScript_Wayne::
# 236 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
# 237 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route128/scripts.pory"
	end
# 239 "data/maps/Route128/scripts.pory"

# 240 "data/maps/Route128/scripts.pory"
Route128_EventScript_Harrison::
# 241 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, Route128_Text_HarrisonIntro, Route128_Text_HarrisonDefeat
# 242 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
# 243 "data/maps/Route128/scripts.pory"
	end
# 244 "data/maps/Route128/scripts.pory"

# 245 "data/maps/Route128/scripts.pory"
Route128_EventScript_Carlee::
# 246 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_CARLEE, Route128_Text_CarleeIntro, Route128_Text_CarleeDefeat
# 247 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route128/scripts.pory"
	end
# 249 "data/maps/Route128/scripts.pory"

# 250 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieWhatHappened:
# 251 "data/maps/Route128/scripts.pory"
	.string "ARCHIE: What happened…\n"
# 252 "data/maps/Route128/scripts.pory"
	.string "What is this wretched scene…\p"
# 253 "data/maps/Route128/scripts.pory"
	.string "Did I…make a horrible mistake?$"
# 254 "data/maps/Route128/scripts.pory"

# 255 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieIOnlyWanted:
# 256 "data/maps/Route128/scripts.pory"
	.string "I…\n"
# 257 "data/maps/Route128/scripts.pory"
	.string "I only wanted…$"
# 258 "data/maps/Route128/scripts.pory"

# 259 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieDoYouUnderstandNow:
# 260 "data/maps/Route128/scripts.pory"
	.string "MAXIE: Do you understand now,\n"
# 261 "data/maps/Route128/scripts.pory"
	.string "ARCHIE?\p"
# 262 "data/maps/Route128/scripts.pory"
	.string "Do you finally see how disastrous\n"
# 263 "data/maps/Route128/scripts.pory"
	.string "your dream turned out to be?\p"
# 264 "data/maps/Route128/scripts.pory"
	.string "We have to hurry! We have to do\n"
# 265 "data/maps/Route128/scripts.pory"
	.string "something before the situation goes\l"
# 266 "data/maps/Route128/scripts.pory"
	.string "completely out of control!$"
# 267 "data/maps/Route128/scripts.pory"

# 268 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieResposibilityFallsToArchieAndMe:
# 269 "data/maps/Route128/scripts.pory"
	.string "MAXIE: {PLAYER}, don't say anything.\p"
# 270 "data/maps/Route128/scripts.pory"
	.string "I know that I have no right to be\n"
# 271 "data/maps/Route128/scripts.pory"
	.string "critical of ARCHIE…\p"
# 272 "data/maps/Route128/scripts.pory"
	.string "But the way things are now, I doubt\n"
# 273 "data/maps/Route128/scripts.pory"
	.string "that we humans will be capable of\l"
# 274 "data/maps/Route128/scripts.pory"
	.string "doing anything about it.\p"
# 275 "data/maps/Route128/scripts.pory"
	.string "But neither can we stand by and\n"
# 276 "data/maps/Route128/scripts.pory"
	.string "just watch helplessly.\p"
# 277 "data/maps/Route128/scripts.pory"
	.string "The responsibility for putting an end\n"
# 278 "data/maps/Route128/scripts.pory"
	.string "to this falls to ARCHIE and me…$"
# 279 "data/maps/Route128/scripts.pory"

# 280 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieThisDefiesBelief:
# 281 "data/maps/Route128/scripts.pory"
	.string "MAXIE: This defies belief…\p"
# 282 "data/maps/Route128/scripts.pory"
	.string "Those super-ancient POKéMON…\p"
# 283 "data/maps/Route128/scripts.pory"
	.string "Their power is unbelievable.\n"
# 284 "data/maps/Route128/scripts.pory"
	.string "They've upset the balance of nature…$"
# 285 "data/maps/Route128/scripts.pory"

# 286 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWhatIsHappening:
# 287 "data/maps/Route128/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
# 288 "data/maps/Route128/scripts.pory"
	.string "What is happening?$"
# 289 "data/maps/Route128/scripts.pory"

# 290 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWholeWorldWillDrown:
# 291 "data/maps/Route128/scripts.pory"
	.string "This is terrible…\p"
# 292 "data/maps/Route128/scripts.pory"
	.string "After the scorching heat wave ended,\n"
# 293 "data/maps/Route128/scripts.pory"
	.string "this deluge began.\p"
# 294 "data/maps/Route128/scripts.pory"
	.string "If this doesn't stop, all of HOENN…\n"
# 295 "data/maps/Route128/scripts.pory"
	.string "No, the whole world will drown.\p"
# 296 "data/maps/Route128/scripts.pory"
	.string "This huge rain cloud is spreading\n"
# 297 "data/maps/Route128/scripts.pory"
	.string "from above SOOTOPOLIS…\p"
# 298 "data/maps/Route128/scripts.pory"
	.string "What in the world is taking place there?\p"
# 299 "data/maps/Route128/scripts.pory"
	.string "There's no point arguing here…\n"
# 300 "data/maps/Route128/scripts.pory"
	.string "SOOTOPOLIS might provide answers…$"
# 301 "data/maps/Route128/scripts.pory"

# 302 "data/maps/Route128/scripts.pory"
Route128_Text_StevenImGoingToSootopolis:
# 303 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 304 "data/maps/Route128/scripts.pory"
	.string "I don't know what you intend to do,\l"
# 305 "data/maps/Route128/scripts.pory"
	.string "but don't do anything reckless.\p"
# 306 "data/maps/Route128/scripts.pory"
	.string "Okay.\n"
# 307 "data/maps/Route128/scripts.pory"
	.string "I'm going to SOOTOPOLIS.$"
