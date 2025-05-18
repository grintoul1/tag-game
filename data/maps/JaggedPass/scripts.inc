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
	end
# 27 "data/maps/JaggedPass/scripts.pory"

# 28 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume:
# 29 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 30 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 31 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 2, JaggedPass_EventScript_CheckHasMagmaEmblem
# 32 "data/maps/JaggedPass/scripts.pory"
	end
# 33 "data/maps/JaggedPass/scripts.pory"

# 34 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem::
# 35 "data/maps/JaggedPass/scripts.pory"
	checkitem ITEM_MAGMA_EMBLEM
# 36 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
# 37 "data/maps/JaggedPass/scripts.pory"
	return
# 38 "data/maps/JaggedPass/scripts.pory"

# 39 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetReadyToOpenHideout::
# 40 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 3
# 41 "data/maps/JaggedPass/scripts.pory"
	return
# 42 "data/maps/JaggedPass/scripts.pory"

# 43 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnTransition:
# 44 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_ASH_WEATHER, 1, JaggedPass_EventScript_SetWeatherAsh
# 45 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 46 "data/maps/JaggedPass/scripts.pory"
	end
# 47 "data/maps/JaggedPass/scripts.pory"

# 48 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherAsh::
# 49 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 50 "data/maps/JaggedPass/scripts.pory"
	doweather
# 51 "data/maps/JaggedPass/scripts.pory"
	return
# 52 "data/maps/JaggedPass/scripts.pory"

# 53 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherIntenseSun::
# 54 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_DROUGHT
# 55 "data/maps/JaggedPass/scripts.pory"
	doweather
# 56 "data/maps/JaggedPass/scripts.pory"
	return
# 57 "data/maps/JaggedPass/scripts.pory"

# 58 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad:
# 59 "data/maps/JaggedPass/scripts.pory"
	goto_if_le VAR_JAGGED_PASS_STATE, 2, JaggedPass_EventScript_ConcealHideoutEntrance
# 60 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 2, JaggedPass_EventScript_CheckHasMagmaEmblem
# 61 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 62 "data/maps/JaggedPass/scripts.pory"
	end
# 63 "data/maps/JaggedPass/scripts.pory"

# 64 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GroudonReleased::
# 65 "data/maps/JaggedPass/scripts.pory"
	lockall
# 66 "data/maps/JaggedPass/scripts.pory"
	setobjectxyperm LOCALID_EMMIE, 17, 19
# 67 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_MaxieSpeech
# 68 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 69 "data/maps/JaggedPass/scripts.pory"
	end
# 70 "data/maps/JaggedPass/scripts.pory"

# 71 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MaxieSpeech::
# 72 "data/maps/JaggedPass/scripts.pory"
	lockall
# 73 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 74 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 75 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_WalkInPlaceFasterRight
# 76 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 77 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 78 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_MaxieTabithaGoToLilycove, MSGBOX_DEFAULT
# 79 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 80 "data/maps/JaggedPass/scripts.pory"
	delay 4
# 81 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 82 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 83 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_TabithaYouGotIt, MSGBOX_DEFAULT
# 84 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 85 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 86 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 87 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 88 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 0, 1
# 89 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 1, 0
# 90 "data/maps/JaggedPass/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 91 "data/maps/JaggedPass/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 92 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_TABITHA
# 93 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 94 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkUp
# 95 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 96 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 97 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 98 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_CourtneyWeShouldGo, MSGBOX_DEFAULT
# 99 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 100 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 101 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 102 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_MaxieYoureRight, MSGBOX_DEFAULT
# 103 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 104 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 105 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 106 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 107 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 0, 1
# 108 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 1, -1
# 109 "data/maps/JaggedPass/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 110 "data/maps/JaggedPass/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 111 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_COURTNEY
# 112 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 113 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkLeft
# 114 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 115 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_MaxieYouLose, MSGBOX_DEFAULT
# 116 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 117 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
# 118 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 119 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 120 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 0, 0
# 121 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 1, -1
# 122 "data/maps/JaggedPass/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 123 "data/maps/JaggedPass/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 124 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_MAXIE
# 125 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAXIE
# 126 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 127 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 128 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 129 "data/maps/JaggedPass/scripts.pory"
	end
# 130 "data/maps/JaggedPass/scripts.pory"
	@state 7
# 131 "data/maps/JaggedPass/scripts.pory"

# 132 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_MaxieTabithaGoToLilycove:
# 133 "data/maps/JaggedPass/scripts.pory"
	.string "Maxie: This is exactly as we envisaged!\p"
# 134 "data/maps/JaggedPass/scripts.pory"
	.string "Now we just need to ensure Team Aqua\n"
# 135 "data/maps/JaggedPass/scripts.pory"
	.string "cannot awaken Kyogre, else all our\l"
# 136 "data/maps/JaggedPass/scripts.pory"
	.string "efforts will have been for nothing.\p"
# 137 "data/maps/JaggedPass/scripts.pory"
	.string "Tabitha, go to their hideout in Lilycove\n"
# 138 "data/maps/JaggedPass/scripts.pory"
	.string "and try to uncover Team Aqua's plans.$"
# 139 "data/maps/JaggedPass/scripts.pory"

# 140 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_TabithaYouGotIt:
# 141 "data/maps/JaggedPass/scripts.pory"
	.string "Tabitha: You got it boss!$"
# 142 "data/maps/JaggedPass/scripts.pory"
	
# 143 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_CourtneyWeShouldGo:
# 144 "data/maps/JaggedPass/scripts.pory"
	.string "Courtney: Sir, we should get to Mossdeep.$"
# 145 "data/maps/JaggedPass/scripts.pory"

# 146 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_MaxieYoureRight:
# 147 "data/maps/JaggedPass/scripts.pory"
	.string "Maxie: You're right. Mt. Chimney has but\n"
# 148 "data/maps/JaggedPass/scripts.pory"
	.string "one purpose now.\p"
# 149 "data/maps/JaggedPass/scripts.pory"
	.string "Let us take our leave.$"
# 150 "data/maps/JaggedPass/scripts.pory"

# 151 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_MaxieYouLose:
# 152 "data/maps/JaggedPass/scripts.pory"
	.string "Maxie: As for you, it appears you lose\n"
# 153 "data/maps/JaggedPass/scripts.pory"
	.string "this time.\p"
# 154 "data/maps/JaggedPass/scripts.pory"
	.string "Despite everything, I truly do wish you\n"
# 155 "data/maps/JaggedPass/scripts.pory"
	.string "both the very best.\p"
# 156 "data/maps/JaggedPass/scripts.pory"
	.string "Farewell…$"
# 157 "data/maps/JaggedPass/scripts.pory"

# 158 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ConcealHideoutEntrance::
# 159 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
# 160 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
# 161 "data/maps/JaggedPass/scripts.pory"
	end
# 162 "data/maps/JaggedPass/scripts.pory"

# 163 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ShellyTrigger::
# 164 "data/maps/JaggedPass/scripts.pory"
	lockall
# 165 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 166 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 167 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellyThanksForComing, MSGBOX_DEFAULT
# 168 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 169 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 170 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 171 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 172 "data/maps/JaggedPass/scripts.pory"
	end
# 173 "data/maps/JaggedPass/scripts.pory"

# 174 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Shelly::
# 175 "data/maps/JaggedPass/scripts.pory"
	lockall
# 176 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FacePlayer
# 177 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellyThanksForComing, MSGBOX_DEFAULT
# 178 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 179 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 180 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 181 "data/maps/JaggedPass/scripts.pory"
	end
# 182 "data/maps/JaggedPass/scripts.pory"

# 183 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_OpenMagmaHideout::
# 184 "data/maps/JaggedPass/scripts.pory"
	lockall
# 185 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 186 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 187 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 188 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 189 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 190 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 191 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 192 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 193 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 194 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 195 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16  @ num shakes
# 196 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3   @ shake delay
# 197 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 198 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 199 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 200 "data/maps/JaggedPass/scripts.pory"
	waitse
# 201 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 202 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
# 203 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 204 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 205 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceLeft
# 206 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 207 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 208 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 209 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 210 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 211 "data/maps/JaggedPass/scripts.pory"
	waitse
# 212 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 213 "data/maps/JaggedPass/scripts.pory"
	end
# 214 "data/maps/JaggedPass/scripts.pory"

# 215 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard::
# 216 "data/maps/JaggedPass/scripts.pory"
	lockall
# 217 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
# 218 "data/maps/JaggedPass/scripts.pory"
	waitse
# 219 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 220 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 221 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 222 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_Delay48
# 223 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 224 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 225 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 226 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 227 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 228 "data/maps/JaggedPass/scripts.pory"
	multi_2p_vs_1 TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat, PARTNER_EMMIE
# 229 "data/maps/JaggedPass/scripts.pory"
	switch VAR_RESULT
# 230 "data/maps/JaggedPass/scripts.pory"
	case 1, JaggedPass_EventScript_MagmaGruntVictory
# 231 "data/maps/JaggedPass/scripts.pory"
	fadescreen FADE_TO_BLACK
# 232 "data/maps/JaggedPass/scripts.pory"
	special SetCB2WhiteOut
# 233 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 234 "data/maps/JaggedPass/scripts.pory"

# 235 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaGruntVictory::
# 236 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 237 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 238 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 239 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 240 "data/maps/JaggedPass/scripts.pory"
	end
# 241 "data/maps/JaggedPass/scripts.pory"

# 242 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GuardDefeated::
# 243 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 244 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 245 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 246 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 247 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 248 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 249 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 250 "data/maps/JaggedPass/scripts.pory"
	end
# 251 "data/maps/JaggedPass/scripts.pory"

# 252 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDiana::
# 253 "data/maps/JaggedPass/scripts.pory"
lockall
# 254 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_ERIC
# 255 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 256 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 257 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 258 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 259 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 260 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 261 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_EricIntro MSGBOX_AUTOCLOSE
# 262 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_DIANA
# 263 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 264 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 265 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 266 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 267 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 268 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 269 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_DianaIntro MSGBOX_AUTOCLOSE
# 270 "data/maps/JaggedPass/scripts.pory"
goto JaggedPass_EventScript_EricDianaDoMultiBattle
# 271 "data/maps/JaggedPass/scripts.pory"
releaseall
# 272 "data/maps/JaggedPass/scripts.pory"
end
# 273 "data/maps/JaggedPass/scripts.pory"

# 274 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDianaDoMultiBattle::
# 275 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 276 "data/maps/JaggedPass/scripts.pory"
multi_2p_vs_2 TRAINER_ERIC, JaggedPass_Text_EricDefeat, TRAINER_DIANA_1, JaggedPass_Text_DianaDefeat, PARTNER_EMMIE
# 277 "data/maps/JaggedPass/scripts.pory"
switch VAR_RESULT
# 278 "data/maps/JaggedPass/scripts.pory"
case 1, JaggedPass_EventScript_EricDianaVictory
# 279 "data/maps/JaggedPass/scripts.pory"
fadescreen FADE_TO_BLACK
# 280 "data/maps/JaggedPass/scripts.pory"
special SetCB2WhiteOut
# 281 "data/maps/JaggedPass/scripts.pory"
waitstate
# 282 "data/maps/JaggedPass/scripts.pory"

# 283 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDianaVictory::
# 284 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 285 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 286 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 287 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 288 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 289 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
# 290 "data/maps/JaggedPass/scripts.pory"
addvar VAR_JAGGED_PASS_STATE, 1
# 291 "data/maps/JaggedPass/scripts.pory"
end
# 292 "data/maps/JaggedPass/scripts.pory"

# 293 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Eric::
# 294 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/JaggedPass/scripts.pory"
	end
# 296 "data/maps/JaggedPass/scripts.pory"

# 297 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana::
# 298 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 299 "data/maps/JaggedPass/scripts.pory"
	release
# 300 "data/maps/JaggedPass/scripts.pory"
	end
# 301 "data/maps/JaggedPass/scripts.pory"

# 302 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterDiana::
# 303 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 304 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 305 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 306 "data/maps/JaggedPass/scripts.pory"
	release
# 307 "data/maps/JaggedPass/scripts.pory"
	end
# 308 "data/maps/JaggedPass/scripts.pory"

# 309 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_DianaRematch::
# 310 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 311 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
# 312 "data/maps/JaggedPass/scripts.pory"
	end
# 313 "data/maps/JaggedPass/scripts.pory"

# 314 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan::
# 315 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
# 316 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 317 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
# 318 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 319 "data/maps/JaggedPass/scripts.pory"
	release
# 320 "data/maps/JaggedPass/scripts.pory"
	end
# 321 "data/maps/JaggedPass/scripts.pory"

# 322 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterEthan::
# 323 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 324 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 325 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 326 "data/maps/JaggedPass/scripts.pory"
	release
# 327 "data/maps/JaggedPass/scripts.pory"
	end
# 328 "data/maps/JaggedPass/scripts.pory"

# 329 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EthanRematch::
# 330 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 331 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
# 332 "data/maps/JaggedPass/scripts.pory"
	end
# 333 "data/maps/JaggedPass/scripts.pory"

# 334 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Julio::
# 335 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 336 "data/maps/JaggedPass/scripts.pory"
	end
# 337 "data/maps/JaggedPass/scripts.pory"

# 338 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulio::
# 339 "data/maps/JaggedPass/scripts.pory"
lockall
# 340 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_AUTUMN
# 341 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 342 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 343 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 344 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 345 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 346 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 347 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_AutumnIntro MSGBOX_AUTOCLOSE
# 348 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_JULIO
# 349 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 350 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 351 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 352 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 353 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 354 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 355 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_JulioIntro MSGBOX_AUTOCLOSE
# 356 "data/maps/JaggedPass/scripts.pory"
goto JaggedPass_EventScript_AutumnJulioDoMultiBattle
# 357 "data/maps/JaggedPass/scripts.pory"
releaseall
# 358 "data/maps/JaggedPass/scripts.pory"
end
# 359 "data/maps/JaggedPass/scripts.pory"

# 360 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulioDoMultiBattle::
# 361 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 362 "data/maps/JaggedPass/scripts.pory"
multi_2p_vs_2 TRAINER_AUTUMN, JaggedPass_Text_AutumnDefeat, TRAINER_JULIO, JaggedPass_Text_JulioDefeat, PARTNER_EMMIE
# 363 "data/maps/JaggedPass/scripts.pory"
switch VAR_RESULT
# 364 "data/maps/JaggedPass/scripts.pory"
case 1, JaggedPass_EventScript_AutumnJulioVictory
# 365 "data/maps/JaggedPass/scripts.pory"
fadescreen FADE_TO_BLACK
# 366 "data/maps/JaggedPass/scripts.pory"
special SetCB2WhiteOut
# 367 "data/maps/JaggedPass/scripts.pory"
waitstate
# 368 "data/maps/JaggedPass/scripts.pory"

# 369 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulioVictory::
# 370 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 371 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 372 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 373 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 374 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 375 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 376 "data/maps/JaggedPass/scripts.pory"
addvar VAR_JAGGED_PASS_STATE, 1
# 377 "data/maps/JaggedPass/scripts.pory"
end
# 378 "data/maps/JaggedPass/scripts.pory"

# 379 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Autumn::
# 380 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 381 "data/maps/JaggedPass/scripts.pory"
	end
# 382 "data/maps/JaggedPass/scripts.pory"

# 383 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_ShellyThanksForComing:
# 384 "data/maps/JaggedPass/scripts.pory"
	.string "Shelly: Thanks for coming.\p"
# 385 "data/maps/JaggedPass/scripts.pory"
	.string "What's that? An emblem dropped by\n"
# 386 "data/maps/JaggedPass/scripts.pory"
	.string "Team Magma at Mt. Pyre?\p"
# 387 "data/maps/JaggedPass/scripts.pory"
	.string "I suppose that explains why I couldn't\n"
# 388 "data/maps/JaggedPass/scripts.pory"
	.string "find my own way in!\p"
# 389 "data/maps/JaggedPass/scripts.pory"
	.string "Anyway, this the Magma Hideout.\p"
# 390 "data/maps/JaggedPass/scripts.pory"
	.string "Team Aqua believes that the legendary\n"
# 391 "data/maps/JaggedPass/scripts.pory"
	.string "Pokémon Groudon has been found here.\p"
# 392 "data/maps/JaggedPass/scripts.pory"
	.string "After holding your own in the company\n"
# 393 "data/maps/JaggedPass/scripts.pory"
	.string "of Archie and Maxie on Mt. Pyre,\p"
# 394 "data/maps/JaggedPass/scripts.pory"
	.string "I'm confident we find out what's going\n"
# 395 "data/maps/JaggedPass/scripts.pory"
	.string "on in there if we work together.\p"
# 396 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie, I understand that the two of\n"
# 397 "data/maps/JaggedPass/scripts.pory"
	.string "you are used to working as a team.\p"
# 398 "data/maps/JaggedPass/scripts.pory"
	.string "However, I'd appreciate it if you would\n"
# 399 "data/maps/JaggedPass/scripts.pory"
	.string "let me accompany {PLAYER} through the\l"
# 400 "data/maps/JaggedPass/scripts.pory"
	.string "hideout, and you wait at the entrance.\p"
# 401 "data/maps/JaggedPass/scripts.pory"
	.string "Anyway, I'll see you inside.$"
# 402 "data/maps/JaggedPass/scripts.pory"

# 403 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricIntro:
# 404 "data/maps/JaggedPass/scripts.pory"
	.string "MT. CHIMNEY's JAGGED PASS…\p"
# 405 "data/maps/JaggedPass/scripts.pory"
	.string "Now this is what I've always wanted\n"
# 406 "data/maps/JaggedPass/scripts.pory"
	.string "in a mountain.\p"
# 407 "data/maps/JaggedPass/scripts.pory"
	.string "This jagged bumpiness…\n"
# 408 "data/maps/JaggedPass/scripts.pory"
	.string "It rocks my soul!$"
# 409 "data/maps/JaggedPass/scripts.pory"

# 410 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricDefeat:
# 411 "data/maps/JaggedPass/scripts.pory"
	.string "Losing left me bitter!$"
# 412 "data/maps/JaggedPass/scripts.pory"

# 413 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricPostBattle:
# 414 "data/maps/JaggedPass/scripts.pory"
	.string "Yes, I did lose at POKéMON…\p"
# 415 "data/maps/JaggedPass/scripts.pory"
	.string "But, when it comes to the love of\n"
# 416 "data/maps/JaggedPass/scripts.pory"
	.string "the mountains, I have you beat!$"
# 417 "data/maps/JaggedPass/scripts.pory"

# 418 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaIntro:
# 419 "data/maps/JaggedPass/scripts.pory"
	.string "This place isn't your casual hike.\n"
# 420 "data/maps/JaggedPass/scripts.pory"
	.string "It's not suited for a picnic.$"
# 421 "data/maps/JaggedPass/scripts.pory"

# 422 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaDefeat:
# 423 "data/maps/JaggedPass/scripts.pory"
	.string "Ohhh, no!\n"
# 424 "data/maps/JaggedPass/scripts.pory"
	.string "The ground is too bumpy…$"
# 425 "data/maps/JaggedPass/scripts.pory"

# 426 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostBattle:
# 427 "data/maps/JaggedPass/scripts.pory"
	.string "Did you know?\p"
# 428 "data/maps/JaggedPass/scripts.pory"
	.string "Some people cleverly ride their\n"
# 429 "data/maps/JaggedPass/scripts.pory"
	.string "bicycles up this horribly bumpy pass.$"
# 430 "data/maps/JaggedPass/scripts.pory"

# 431 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRegister:
# 432 "data/maps/JaggedPass/scripts.pory"
	.string "Will you ever be back in this area?\n"
# 433 "data/maps/JaggedPass/scripts.pory"
	.string "If you do return, I'd like a rematch.$"
# 434 "data/maps/JaggedPass/scripts.pory"

# 435 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchIntro:
# 436 "data/maps/JaggedPass/scripts.pory"
	.string "Picnics are fun wherever you go.\n"
# 437 "data/maps/JaggedPass/scripts.pory"
	.string "Just like POKéMON!$"
# 438 "data/maps/JaggedPass/scripts.pory"

# 439 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchDefeat:
# 440 "data/maps/JaggedPass/scripts.pory"
	.string "I only lost because the ground is\n"
# 441 "data/maps/JaggedPass/scripts.pory"
	.string "too bumpy!$"
# 442 "data/maps/JaggedPass/scripts.pory"

# 443 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostRematch:
# 444 "data/maps/JaggedPass/scripts.pory"
	.string "I'll forget about losing and just\n"
# 445 "data/maps/JaggedPass/scripts.pory"
	.string "enjoy this bumpy hike.$"
# 446 "data/maps/JaggedPass/scripts.pory"

# 447 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanIntro:
# 448 "data/maps/JaggedPass/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\n"
# 449 "data/maps/JaggedPass/scripts.pory"
	.string "It's a good place for training.$"
# 450 "data/maps/JaggedPass/scripts.pory"

# 451 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanDefeat:
# 452 "data/maps/JaggedPass/scripts.pory"
	.string "It was all over while we were still\n"
# 453 "data/maps/JaggedPass/scripts.pory"
	.string "trying to find a good footing…$"
# 454 "data/maps/JaggedPass/scripts.pory"

# 455 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostBattle:
# 456 "data/maps/JaggedPass/scripts.pory"
	.string "If I had an ACRO BIKE, I'd be able to\n"
# 457 "data/maps/JaggedPass/scripts.pory"
	.string "jump ledges.$"
# 458 "data/maps/JaggedPass/scripts.pory"

# 459 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRegister:
# 460 "data/maps/JaggedPass/scripts.pory"
	.string "When I get more used to this bumpiness,\n"
# 461 "data/maps/JaggedPass/scripts.pory"
	.string "I'll be sure to win!\p"
# 462 "data/maps/JaggedPass/scripts.pory"
	.string "Can you register me in your POKéNAV?$"
# 463 "data/maps/JaggedPass/scripts.pory"

# 464 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchIntro:
# 465 "data/maps/JaggedPass/scripts.pory"
	.string "I got used to this bumpiness.\n"
# 466 "data/maps/JaggedPass/scripts.pory"
	.string "I sing while I climb now.$"
# 467 "data/maps/JaggedPass/scripts.pory"

# 468 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchDefeat:
# 469 "data/maps/JaggedPass/scripts.pory"
	.string "It's still not easy to battle on this\n"
# 470 "data/maps/JaggedPass/scripts.pory"
	.string "bumpy ground…$"
# 471 "data/maps/JaggedPass/scripts.pory"

# 472 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostRematch:
# 473 "data/maps/JaggedPass/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\n"
# 474 "data/maps/JaggedPass/scripts.pory"
	.string "in MAUVILLE CITY…$"
# 475 "data/maps/JaggedPass/scripts.pory"

# 476 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntIntro:
# 477 "data/maps/JaggedPass/scripts.pory"
	.string "Wah!\n"
# 478 "data/maps/JaggedPass/scripts.pory"
	.string "What are you doing here?\p"
# 479 "data/maps/JaggedPass/scripts.pory"
	.string "What am I doing in a place like this?\p"
# 480 "data/maps/JaggedPass/scripts.pory"
	.string "What business is it of yours?$"
# 481 "data/maps/JaggedPass/scripts.pory"

# 482 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntDefeat:
# 483 "data/maps/JaggedPass/scripts.pory"
	.string "Urrrgh…\p"
# 484 "data/maps/JaggedPass/scripts.pory"
	.string "I should've ducked into our HIDEOUT\n"
# 485 "data/maps/JaggedPass/scripts.pory"
	.string "right away…$"
# 486 "data/maps/JaggedPass/scripts.pory"

# 487 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GoWhereverYouWant:
# 488 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, oh-kay!\n"
# 489 "data/maps/JaggedPass/scripts.pory"
	.string "I admit it--you're strong!\p"
# 490 "data/maps/JaggedPass/scripts.pory"
	.string "Don't worry about me.\n"
# 491 "data/maps/JaggedPass/scripts.pory"
	.string "Go wherever you want!$"
# 492 "data/maps/JaggedPass/scripts.pory"

# 493 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_BoulderShakingInResponseToEmblem:
# 494 "data/maps/JaggedPass/scripts.pory"
	.string "Oh! This boulder is shaking in response\n"
# 495 "data/maps/JaggedPass/scripts.pory"
	.string "to the MAGMA EMBLEM!$"
# 496 "data/maps/JaggedPass/scripts.pory"

# 497 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioIntro:
# 498 "data/maps/JaggedPass/scripts.pory"
	.string "Aiyeeh! It's awfully scary to shoot\n"
# 499 "data/maps/JaggedPass/scripts.pory"
	.string "down the mountain in one go!$"
# 500 "data/maps/JaggedPass/scripts.pory"

# 501 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioDefeat:
# 502 "data/maps/JaggedPass/scripts.pory"
	.string "I feel like I'm falling apart…$"
# 503 "data/maps/JaggedPass/scripts.pory"

# 504 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioPostBattle:
# 505 "data/maps/JaggedPass/scripts.pory"
	.string "My bicycle bounced around so much,\n"
# 506 "data/maps/JaggedPass/scripts.pory"
	.string "my rear end's sore…$"
# 507 "data/maps/JaggedPass/scripts.pory"

# 508 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnIntro:
# 509 "data/maps/JaggedPass/scripts.pory"
	.string "I climb this hill every day.\n"
# 510 "data/maps/JaggedPass/scripts.pory"
	.string "I have confidence in my strength!$"
# 511 "data/maps/JaggedPass/scripts.pory"

# 512 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnDefeat:
# 513 "data/maps/JaggedPass/scripts.pory"
	.string "Hmm…\n"
# 514 "data/maps/JaggedPass/scripts.pory"
	.string "What went wrong?$"
# 515 "data/maps/JaggedPass/scripts.pory"

# 516 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnPostBattle:
# 517 "data/maps/JaggedPass/scripts.pory"
	.string "What is that odd rock protrusion\n"
# 518 "data/maps/JaggedPass/scripts.pory"
	.string "a little up the hill from here?$"
