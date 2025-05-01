# 1 "data/maps/JaggedPass/scripts.pory"

# 2 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_HIDEOUT_GUARD, 5
# 3 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_ERIC, 1
# 4 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_DIANA, 4
# 5 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_AUTUMN, 6
# 6 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_JULIO, 7
# 7 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_SHELLY, 8
# 8 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_EMMIE, 9
# 9 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_MAXIE, 10
# 10 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_TABITHA, 11
# 11 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_COURTNEY, 12
# 12 "data/maps/JaggedPass/scripts.pory"

# 13 "data/maps/JaggedPass/scripts.pory"
JaggedPass_MapScripts::
# 14 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
# 15 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
# 16 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
# 17 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, JaggedPass_OnWarp
# 18 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JaggedPass_OnFrame
# 19 "data/maps/JaggedPass/scripts.pory"
	.byte 0
# 20 "data/maps/JaggedPass/scripts.pory"

# 21 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnFrame:
# 22 "data/maps/JaggedPass/scripts.pory"
	map_script_2 VAR_JAGGED_PASS_STATE, 6, JaggedPass_EventScript_GroudonReleased
# 23 "data/maps/JaggedPass/scripts.pory"
	.2byte 0
# 24 "data/maps/JaggedPass/scripts.pory"

# 25 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnWarp:
# 26 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 27 "data/maps/JaggedPass/scripts.pory"
	end
# 28 "data/maps/JaggedPass/scripts.pory"

# 29 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume:
# 30 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 31 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 32 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 2, JaggedPass_EventScript_CheckHasMagmaEmblem
# 33 "data/maps/JaggedPass/scripts.pory"
	end
# 34 "data/maps/JaggedPass/scripts.pory"

# 35 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem::
# 36 "data/maps/JaggedPass/scripts.pory"
	checkitem ITEM_MAGMA_EMBLEM
# 37 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
# 38 "data/maps/JaggedPass/scripts.pory"
	return
# 39 "data/maps/JaggedPass/scripts.pory"

# 40 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetReadyToOpenHideout::
# 41 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 3
# 42 "data/maps/JaggedPass/scripts.pory"
	return
# 43 "data/maps/JaggedPass/scripts.pory"

# 44 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnTransition:
# 45 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_ASH_WEATHER, 1, JaggedPass_EventScript_SetWeatherAsh
# 46 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 47 "data/maps/JaggedPass/scripts.pory"
	end
# 48 "data/maps/JaggedPass/scripts.pory"

# 49 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherAsh::
# 50 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 51 "data/maps/JaggedPass/scripts.pory"
	doweather
# 52 "data/maps/JaggedPass/scripts.pory"
	return
# 53 "data/maps/JaggedPass/scripts.pory"

# 54 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherIntenseSun::
# 55 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_DROUGHT
# 56 "data/maps/JaggedPass/scripts.pory"
	doweather
# 57 "data/maps/JaggedPass/scripts.pory"
	return
# 58 "data/maps/JaggedPass/scripts.pory"

# 59 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad:
# 60 "data/maps/JaggedPass/scripts.pory"
	goto_if_le VAR_JAGGED_PASS_STATE, 2, JaggedPass_EventScript_ConcealHideoutEntrance
# 61 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 2, JaggedPass_EventScript_CheckHasMagmaEmblem
# 62 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 63 "data/maps/JaggedPass/scripts.pory"
	end
# 64 "data/maps/JaggedPass/scripts.pory"

# 65 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GroudonReleased::
# 66 "data/maps/JaggedPass/scripts.pory"
	lockall
# 67 "data/maps/JaggedPass/scripts.pory"
	setobjectxyperm LOCALID_EMMIE, 17, 19
# 68 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_MaxieSpeech
# 69 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 70 "data/maps/JaggedPass/scripts.pory"
	end
# 71 "data/maps/JaggedPass/scripts.pory"

# 72 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MaxieSpeech::
# 73 "data/maps/JaggedPass/scripts.pory"
	lockall
# 74 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 75 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 76 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_WalkInPlaceFasterRight
# 77 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 78 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 79 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_MaxieTabithaGoToLilycove, MSGBOX_DEFAULT
# 80 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 81 "data/maps/JaggedPass/scripts.pory"
	delay 4
# 82 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 83 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 84 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_TabithaYouGotIt, MSGBOX_DEFAULT
# 85 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 86 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 88 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 89 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 0, 1
# 90 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 1, 0
# 91 "data/maps/JaggedPass/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 92 "data/maps/JaggedPass/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 93 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_TABITHA
# 94 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 95 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkUp
# 96 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 97 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 98 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 99 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_CourtneyWeShouldGo, MSGBOX_DEFAULT
# 100 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 101 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 102 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 103 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_MaxieYoureRight, MSGBOX_DEFAULT
# 104 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 105 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 106 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 107 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 108 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 0, 1
# 109 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 1, -1
# 110 "data/maps/JaggedPass/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 111 "data/maps/JaggedPass/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 112 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_COURTNEY
# 113 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 114 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkLeft
# 115 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 116 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_MaxieYouLose, MSGBOX_DEFAULT
# 117 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 118 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
# 119 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 120 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 121 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 0, 0
# 122 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 1, -1
# 123 "data/maps/JaggedPass/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 124 "data/maps/JaggedPass/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 125 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_MAXIE
# 126 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAXIE
# 127 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 128 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 129 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 130 "data/maps/JaggedPass/scripts.pory"
	end
# 131 "data/maps/JaggedPass/scripts.pory"
	@state 7
# 132 "data/maps/JaggedPass/scripts.pory"

# 133 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_MaxieTabithaGoToLilycove:
# 134 "data/maps/JaggedPass/scripts.pory"
	.string "Maxie: This is exactly as we envisaged!\p"
# 135 "data/maps/JaggedPass/scripts.pory"
	.string "Now we just need to ensure Team Aqua\n"
# 136 "data/maps/JaggedPass/scripts.pory"
	.string "cannot awaken Kyogre, else all our\l"
# 137 "data/maps/JaggedPass/scripts.pory"
	.string "efforts will have been for nothing.\p"
# 138 "data/maps/JaggedPass/scripts.pory"
	.string "Tabitha, go to their hideout in Lilycove\n"
# 139 "data/maps/JaggedPass/scripts.pory"
	.string "and try to uncover Team Aqua's plans.$"
# 140 "data/maps/JaggedPass/scripts.pory"

# 141 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_TabithaYouGotIt:
# 142 "data/maps/JaggedPass/scripts.pory"
	.string "Tabitha: You got it boss!$"
# 143 "data/maps/JaggedPass/scripts.pory"
	
# 144 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_CourtneyWeShouldGo:
# 145 "data/maps/JaggedPass/scripts.pory"
	.string "Courtney: Sir, we should get to Mossdeep.$"
# 146 "data/maps/JaggedPass/scripts.pory"

# 147 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_MaxieYoureRight:
# 148 "data/maps/JaggedPass/scripts.pory"
	.string "Maxie: You're right. Mt. Chimney has but\n"
# 149 "data/maps/JaggedPass/scripts.pory"
	.string "one purpose now.\p"
# 150 "data/maps/JaggedPass/scripts.pory"
	.string "Let us take our leave.$"
# 151 "data/maps/JaggedPass/scripts.pory"

# 152 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_MaxieYouLose:
# 153 "data/maps/JaggedPass/scripts.pory"
	.string "Maxie: As for you, it appears you lose\n"
# 154 "data/maps/JaggedPass/scripts.pory"
	.string "this time.\p"
# 155 "data/maps/JaggedPass/scripts.pory"
	.string "Despite everything, I truly do wish you\n"
# 156 "data/maps/JaggedPass/scripts.pory"
	.string "both the very best.\p"
# 157 "data/maps/JaggedPass/scripts.pory"
	.string "Farewell…$"
# 158 "data/maps/JaggedPass/scripts.pory"

# 159 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ConcealHideoutEntrance::
# 160 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
# 161 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
# 162 "data/maps/JaggedPass/scripts.pory"
	end
# 163 "data/maps/JaggedPass/scripts.pory"

# 164 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ShellyTrigger::
# 165 "data/maps/JaggedPass/scripts.pory"
	lockall
# 166 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 167 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 168 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellyThanksForComing, MSGBOX_DEFAULT
# 169 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 170 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 171 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 172 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 173 "data/maps/JaggedPass/scripts.pory"
	end
# 174 "data/maps/JaggedPass/scripts.pory"

# 175 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Shelly::
# 176 "data/maps/JaggedPass/scripts.pory"
	lockall
# 177 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FacePlayer
# 178 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellyThanksForComing, MSGBOX_DEFAULT
# 179 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 180 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 181 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 182 "data/maps/JaggedPass/scripts.pory"
	end
# 183 "data/maps/JaggedPass/scripts.pory"

# 184 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_OpenMagmaHideout::
# 185 "data/maps/JaggedPass/scripts.pory"
	lockall
# 186 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 187 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 188 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 189 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 190 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 191 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 192 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 193 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 194 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 195 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 196 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16  @ num shakes
# 197 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3   @ shake delay
# 198 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 199 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 200 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 201 "data/maps/JaggedPass/scripts.pory"
	waitse
# 202 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 203 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
# 204 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 205 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 206 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceLeft
# 207 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 208 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 209 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 210 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 211 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 212 "data/maps/JaggedPass/scripts.pory"
	waitse
# 213 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 214 "data/maps/JaggedPass/scripts.pory"
	end
# 215 "data/maps/JaggedPass/scripts.pory"

# 216 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard::
# 217 "data/maps/JaggedPass/scripts.pory"
	lockall
# 218 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
# 219 "data/maps/JaggedPass/scripts.pory"
	waitse
# 220 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 221 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 222 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 223 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_Delay48
# 224 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 225 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 226 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 227 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 228 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 229 "data/maps/JaggedPass/scripts.pory"
	multi_2p_vs_1 TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat, PARTNER_EMMIE
# 230 "data/maps/JaggedPass/scripts.pory"
	switch VAR_RESULT
# 231 "data/maps/JaggedPass/scripts.pory"
	case 1, JaggedPass_EventScript_MagmaGruntVictory
# 232 "data/maps/JaggedPass/scripts.pory"
	fadescreen FADE_TO_BLACK
# 233 "data/maps/JaggedPass/scripts.pory"
	special SetCB2WhiteOut
# 234 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 235 "data/maps/JaggedPass/scripts.pory"

# 236 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaGruntVictory::
# 237 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 238 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 239 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 240 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 241 "data/maps/JaggedPass/scripts.pory"
	end
# 242 "data/maps/JaggedPass/scripts.pory"

# 243 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GuardDefeated::
# 244 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 245 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 246 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 247 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 248 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 249 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 250 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 251 "data/maps/JaggedPass/scripts.pory"
	end
# 252 "data/maps/JaggedPass/scripts.pory"

# 253 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDiana::
# 254 "data/maps/JaggedPass/scripts.pory"
lockall
# 255 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_ERIC
# 256 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 257 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 258 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 259 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 260 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 261 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 262 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_EricIntro MSGBOX_AUTOCLOSE
# 263 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_DIANA
# 264 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 265 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 266 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 267 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 268 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 269 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 270 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_DianaIntro MSGBOX_AUTOCLOSE
# 271 "data/maps/JaggedPass/scripts.pory"
goto JaggedPass_EventScript_EricDianaDoMultiBattle
# 272 "data/maps/JaggedPass/scripts.pory"
releaseall
# 273 "data/maps/JaggedPass/scripts.pory"
end
# 274 "data/maps/JaggedPass/scripts.pory"

# 275 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDianaDoMultiBattle::
# 276 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 277 "data/maps/JaggedPass/scripts.pory"
multi_2p_vs_2 TRAINER_ERIC, JaggedPass_Text_EricDefeat, TRAINER_DIANA_1, JaggedPass_Text_DianaDefeat, PARTNER_EMMIE
# 278 "data/maps/JaggedPass/scripts.pory"
switch VAR_RESULT
# 279 "data/maps/JaggedPass/scripts.pory"
case 1, JaggedPass_EventScript_EricDianaVictory
# 280 "data/maps/JaggedPass/scripts.pory"
fadescreen FADE_TO_BLACK
# 281 "data/maps/JaggedPass/scripts.pory"
special SetCB2WhiteOut
# 282 "data/maps/JaggedPass/scripts.pory"
waitstate
# 283 "data/maps/JaggedPass/scripts.pory"

# 284 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDianaVictory::
# 285 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 286 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 287 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 289 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 290 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/JaggedPass/scripts.pory"
addvar VAR_JAGGED_PASS_STATE, 1
# 292 "data/maps/JaggedPass/scripts.pory"
end
# 293 "data/maps/JaggedPass/scripts.pory"

# 294 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Eric::
# 295 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 296 "data/maps/JaggedPass/scripts.pory"
	end
# 297 "data/maps/JaggedPass/scripts.pory"

# 298 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana::
# 299 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 300 "data/maps/JaggedPass/scripts.pory"
	release
# 301 "data/maps/JaggedPass/scripts.pory"
	end
# 302 "data/maps/JaggedPass/scripts.pory"

# 303 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterDiana::
# 304 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 305 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 306 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 307 "data/maps/JaggedPass/scripts.pory"
	release
# 308 "data/maps/JaggedPass/scripts.pory"
	end
# 309 "data/maps/JaggedPass/scripts.pory"

# 310 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_DianaRematch::
# 311 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 312 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
# 313 "data/maps/JaggedPass/scripts.pory"
	end
# 314 "data/maps/JaggedPass/scripts.pory"

# 315 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan::
# 316 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
# 317 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 318 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
# 319 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 320 "data/maps/JaggedPass/scripts.pory"
	release
# 321 "data/maps/JaggedPass/scripts.pory"
	end
# 322 "data/maps/JaggedPass/scripts.pory"

# 323 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterEthan::
# 324 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 325 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 326 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 327 "data/maps/JaggedPass/scripts.pory"
	release
# 328 "data/maps/JaggedPass/scripts.pory"
	end
# 329 "data/maps/JaggedPass/scripts.pory"

# 330 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EthanRematch::
# 331 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 332 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
# 333 "data/maps/JaggedPass/scripts.pory"
	end
# 334 "data/maps/JaggedPass/scripts.pory"

# 335 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Julio::
# 336 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 337 "data/maps/JaggedPass/scripts.pory"
	end
# 338 "data/maps/JaggedPass/scripts.pory"

# 339 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulio::
# 340 "data/maps/JaggedPass/scripts.pory"
lockall
# 341 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_AUTUMN
# 342 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 343 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 344 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 345 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 346 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 347 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 348 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_AutumnIntro MSGBOX_AUTOCLOSE
# 349 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_JULIO
# 350 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 351 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 352 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 353 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 354 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 355 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 356 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_JulioIntro MSGBOX_AUTOCLOSE
# 357 "data/maps/JaggedPass/scripts.pory"
goto JaggedPass_EventScript_AutumnJulioDoMultiBattle
# 358 "data/maps/JaggedPass/scripts.pory"
releaseall
# 359 "data/maps/JaggedPass/scripts.pory"
end
# 360 "data/maps/JaggedPass/scripts.pory"

# 361 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulioDoMultiBattle::
# 362 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 363 "data/maps/JaggedPass/scripts.pory"
multi_2p_vs_2 TRAINER_AUTUMN, JaggedPass_Text_AutumnDefeat, TRAINER_JULIO, JaggedPass_Text_JulioDefeat, PARTNER_EMMIE
# 364 "data/maps/JaggedPass/scripts.pory"
switch VAR_RESULT
# 365 "data/maps/JaggedPass/scripts.pory"
case 1, JaggedPass_EventScript_AutumnJulioVictory
# 366 "data/maps/JaggedPass/scripts.pory"
fadescreen FADE_TO_BLACK
# 367 "data/maps/JaggedPass/scripts.pory"
special SetCB2WhiteOut
# 368 "data/maps/JaggedPass/scripts.pory"
waitstate
# 369 "data/maps/JaggedPass/scripts.pory"

# 370 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulioVictory::
# 371 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 372 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 373 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 374 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 375 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 376 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 377 "data/maps/JaggedPass/scripts.pory"
addvar VAR_JAGGED_PASS_STATE, 1
# 378 "data/maps/JaggedPass/scripts.pory"
end
# 379 "data/maps/JaggedPass/scripts.pory"

# 380 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Autumn::
# 381 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 382 "data/maps/JaggedPass/scripts.pory"
	end
# 383 "data/maps/JaggedPass/scripts.pory"

# 384 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_ShellyThanksForComing:
# 385 "data/maps/JaggedPass/scripts.pory"
	.string "Shelly: Thanks for coming.\p"
# 386 "data/maps/JaggedPass/scripts.pory"
	.string "What's that? An emblem dropped by\n"
# 387 "data/maps/JaggedPass/scripts.pory"
	.string "Team Magma at Mt. Pyre?\p"
# 388 "data/maps/JaggedPass/scripts.pory"
	.string "I suppose that explains why I couldn't\n"
# 389 "data/maps/JaggedPass/scripts.pory"
	.string "find my own way in!\p"
# 390 "data/maps/JaggedPass/scripts.pory"
	.string "Anyway, this the Magma Hideout.\p"
# 391 "data/maps/JaggedPass/scripts.pory"
	.string "Team Aqua believes that the legendary\n"
# 392 "data/maps/JaggedPass/scripts.pory"
	.string "Pokémon Groudon has been found here.\p"
# 393 "data/maps/JaggedPass/scripts.pory"
	.string "After holding your own in the company\n"
# 394 "data/maps/JaggedPass/scripts.pory"
	.string "of Archie and Maxie on Mt. Pyre,\p"
# 395 "data/maps/JaggedPass/scripts.pory"
	.string "I'm confident we find out what's going\n"
# 396 "data/maps/JaggedPass/scripts.pory"
	.string "on in there if we work together.\p"
# 397 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie, I understand that the two of\n"
# 398 "data/maps/JaggedPass/scripts.pory"
	.string "you are used to working as a team.\p"
# 399 "data/maps/JaggedPass/scripts.pory"
	.string "However, I'd appreciate it if you would\n"
# 400 "data/maps/JaggedPass/scripts.pory"
	.string "let me accompany {PLAYER} through the\l"
# 401 "data/maps/JaggedPass/scripts.pory"
	.string "hideout, and you wait at the entrance.\p"
# 402 "data/maps/JaggedPass/scripts.pory"
	.string "Anyway, I'll see you inside.$"
# 403 "data/maps/JaggedPass/scripts.pory"

# 404 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricIntro:
# 405 "data/maps/JaggedPass/scripts.pory"
	.string "MT. CHIMNEY's JAGGED PASS…\p"
# 406 "data/maps/JaggedPass/scripts.pory"
	.string "Now this is what I've always wanted\n"
# 407 "data/maps/JaggedPass/scripts.pory"
	.string "in a mountain.\p"
# 408 "data/maps/JaggedPass/scripts.pory"
	.string "This jagged bumpiness…\n"
# 409 "data/maps/JaggedPass/scripts.pory"
	.string "It rocks my soul!$"
# 410 "data/maps/JaggedPass/scripts.pory"

# 411 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricDefeat:
# 412 "data/maps/JaggedPass/scripts.pory"
	.string "Losing left me bitter!$"
# 413 "data/maps/JaggedPass/scripts.pory"

# 414 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricPostBattle:
# 415 "data/maps/JaggedPass/scripts.pory"
	.string "Yes, I did lose at POKéMON…\p"
# 416 "data/maps/JaggedPass/scripts.pory"
	.string "But, when it comes to the love of\n"
# 417 "data/maps/JaggedPass/scripts.pory"
	.string "the mountains, I have you beat!$"
# 418 "data/maps/JaggedPass/scripts.pory"

# 419 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaIntro:
# 420 "data/maps/JaggedPass/scripts.pory"
	.string "This place isn't your casual hike.\n"
# 421 "data/maps/JaggedPass/scripts.pory"
	.string "It's not suited for a picnic.$"
# 422 "data/maps/JaggedPass/scripts.pory"

# 423 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaDefeat:
# 424 "data/maps/JaggedPass/scripts.pory"
	.string "Ohhh, no!\n"
# 425 "data/maps/JaggedPass/scripts.pory"
	.string "The ground is too bumpy…$"
# 426 "data/maps/JaggedPass/scripts.pory"

# 427 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostBattle:
# 428 "data/maps/JaggedPass/scripts.pory"
	.string "Did you know?\p"
# 429 "data/maps/JaggedPass/scripts.pory"
	.string "Some people cleverly ride their\n"
# 430 "data/maps/JaggedPass/scripts.pory"
	.string "bicycles up this horribly bumpy pass.$"
# 431 "data/maps/JaggedPass/scripts.pory"

# 432 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRegister:
# 433 "data/maps/JaggedPass/scripts.pory"
	.string "Will you ever be back in this area?\n"
# 434 "data/maps/JaggedPass/scripts.pory"
	.string "If you do return, I'd like a rematch.$"
# 435 "data/maps/JaggedPass/scripts.pory"

# 436 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchIntro:
# 437 "data/maps/JaggedPass/scripts.pory"
	.string "Picnics are fun wherever you go.\n"
# 438 "data/maps/JaggedPass/scripts.pory"
	.string "Just like POKéMON!$"
# 439 "data/maps/JaggedPass/scripts.pory"

# 440 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchDefeat:
# 441 "data/maps/JaggedPass/scripts.pory"
	.string "I only lost because the ground is\n"
# 442 "data/maps/JaggedPass/scripts.pory"
	.string "too bumpy!$"
# 443 "data/maps/JaggedPass/scripts.pory"

# 444 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostRematch:
# 445 "data/maps/JaggedPass/scripts.pory"
	.string "I'll forget about losing and just\n"
# 446 "data/maps/JaggedPass/scripts.pory"
	.string "enjoy this bumpy hike.$"
# 447 "data/maps/JaggedPass/scripts.pory"

# 448 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanIntro:
# 449 "data/maps/JaggedPass/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\n"
# 450 "data/maps/JaggedPass/scripts.pory"
	.string "It's a good place for training.$"
# 451 "data/maps/JaggedPass/scripts.pory"

# 452 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanDefeat:
# 453 "data/maps/JaggedPass/scripts.pory"
	.string "It was all over while we were still\n"
# 454 "data/maps/JaggedPass/scripts.pory"
	.string "trying to find a good footing…$"
# 455 "data/maps/JaggedPass/scripts.pory"

# 456 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostBattle:
# 457 "data/maps/JaggedPass/scripts.pory"
	.string "If I had an ACRO BIKE, I'd be able to\n"
# 458 "data/maps/JaggedPass/scripts.pory"
	.string "jump ledges.$"
# 459 "data/maps/JaggedPass/scripts.pory"

# 460 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRegister:
# 461 "data/maps/JaggedPass/scripts.pory"
	.string "When I get more used to this bumpiness,\n"
# 462 "data/maps/JaggedPass/scripts.pory"
	.string "I'll be sure to win!\p"
# 463 "data/maps/JaggedPass/scripts.pory"
	.string "Can you register me in your POKéNAV?$"
# 464 "data/maps/JaggedPass/scripts.pory"

# 465 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchIntro:
# 466 "data/maps/JaggedPass/scripts.pory"
	.string "I got used to this bumpiness.\n"
# 467 "data/maps/JaggedPass/scripts.pory"
	.string "I sing while I climb now.$"
# 468 "data/maps/JaggedPass/scripts.pory"

# 469 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchDefeat:
# 470 "data/maps/JaggedPass/scripts.pory"
	.string "It's still not easy to battle on this\n"
# 471 "data/maps/JaggedPass/scripts.pory"
	.string "bumpy ground…$"
# 472 "data/maps/JaggedPass/scripts.pory"

# 473 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostRematch:
# 474 "data/maps/JaggedPass/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\n"
# 475 "data/maps/JaggedPass/scripts.pory"
	.string "in MAUVILLE CITY…$"
# 476 "data/maps/JaggedPass/scripts.pory"

# 477 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntIntro:
# 478 "data/maps/JaggedPass/scripts.pory"
	.string "Wah!\n"
# 479 "data/maps/JaggedPass/scripts.pory"
	.string "What are you doing here?\p"
# 480 "data/maps/JaggedPass/scripts.pory"
	.string "What am I doing in a place like this?\p"
# 481 "data/maps/JaggedPass/scripts.pory"
	.string "What business is it of yours?$"
# 482 "data/maps/JaggedPass/scripts.pory"

# 483 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntDefeat:
# 484 "data/maps/JaggedPass/scripts.pory"
	.string "Urrrgh…\p"
# 485 "data/maps/JaggedPass/scripts.pory"
	.string "I should've ducked into our HIDEOUT\n"
# 486 "data/maps/JaggedPass/scripts.pory"
	.string "right away…$"
# 487 "data/maps/JaggedPass/scripts.pory"

# 488 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GoWhereverYouWant:
# 489 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, oh-kay!\n"
# 490 "data/maps/JaggedPass/scripts.pory"
	.string "I admit it--you're strong!\p"
# 491 "data/maps/JaggedPass/scripts.pory"
	.string "Don't worry about me.\n"
# 492 "data/maps/JaggedPass/scripts.pory"
	.string "Go wherever you want!$"
# 493 "data/maps/JaggedPass/scripts.pory"

# 494 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_BoulderShakingInResponseToEmblem:
# 495 "data/maps/JaggedPass/scripts.pory"
	.string "Oh! This boulder is shaking in response\n"
# 496 "data/maps/JaggedPass/scripts.pory"
	.string "to the MAGMA EMBLEM!$"
# 497 "data/maps/JaggedPass/scripts.pory"

# 498 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioIntro:
# 499 "data/maps/JaggedPass/scripts.pory"
	.string "Aiyeeh! It's awfully scary to shoot\n"
# 500 "data/maps/JaggedPass/scripts.pory"
	.string "down the mountain in one go!$"
# 501 "data/maps/JaggedPass/scripts.pory"

# 502 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioDefeat:
# 503 "data/maps/JaggedPass/scripts.pory"
	.string "I feel like I'm falling apart…$"
# 504 "data/maps/JaggedPass/scripts.pory"

# 505 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioPostBattle:
# 506 "data/maps/JaggedPass/scripts.pory"
	.string "My bicycle bounced around so much,\n"
# 507 "data/maps/JaggedPass/scripts.pory"
	.string "my rear end's sore…$"
# 508 "data/maps/JaggedPass/scripts.pory"

# 509 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnIntro:
# 510 "data/maps/JaggedPass/scripts.pory"
	.string "I climb this hill every day.\n"
# 511 "data/maps/JaggedPass/scripts.pory"
	.string "I have confidence in my strength!$"
# 512 "data/maps/JaggedPass/scripts.pory"

# 513 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnDefeat:
# 514 "data/maps/JaggedPass/scripts.pory"
	.string "Hmm…\n"
# 515 "data/maps/JaggedPass/scripts.pory"
	.string "What went wrong?$"
# 516 "data/maps/JaggedPass/scripts.pory"

# 517 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnPostBattle:
# 518 "data/maps/JaggedPass/scripts.pory"
	.string "What is that odd rock protrusion\n"
# 519 "data/maps/JaggedPass/scripts.pory"
	.string "a little up the hill from here?$"
