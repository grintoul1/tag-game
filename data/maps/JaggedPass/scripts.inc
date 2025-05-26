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
	map_script_2 VAR_JAGGED_PASS_STATE, 6, JaggedPass_EventScript_GroudonReleasedAddEmmie
# 27 "data/maps/JaggedPass/scripts.pory"
	.2byte 0
# 28 "data/maps/JaggedPass/scripts.pory"

# 29 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GroudonReleasedAddEmmie::
# 30 "data/maps/JaggedPass/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 15, 19
# 31 "data/maps/JaggedPass/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_JAGGED_PASS
# 32 "data/maps/JaggedPass/scripts.pory"
	end
# 33 "data/maps/JaggedPass/scripts.pory"

# 34 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume:
# 35 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 36 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 37 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 2, JaggedPass_EventScript_CheckHasMagmaEmblem
# 38 "data/maps/JaggedPass/scripts.pory"
	end
# 39 "data/maps/JaggedPass/scripts.pory"

# 40 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem::
# 41 "data/maps/JaggedPass/scripts.pory"
	checkitem ITEM_MAGMA_EMBLEM
# 42 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
# 43 "data/maps/JaggedPass/scripts.pory"
	return
# 44 "data/maps/JaggedPass/scripts.pory"

# 45 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetReadyToOpenHideout::
# 46 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 3
# 47 "data/maps/JaggedPass/scripts.pory"
	return
# 48 "data/maps/JaggedPass/scripts.pory"

# 49 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnTransition:
# 50 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_ASH_WEATHER, 1, JaggedPass_EventScript_SetWeatherAsh
# 51 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 52 "data/maps/JaggedPass/scripts.pory"
	end
# 53 "data/maps/JaggedPass/scripts.pory"

# 54 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherAsh::
# 55 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 56 "data/maps/JaggedPass/scripts.pory"
	doweather
# 57 "data/maps/JaggedPass/scripts.pory"
	return
# 58 "data/maps/JaggedPass/scripts.pory"

# 59 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherIntenseSun::
# 60 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_DROUGHT
# 61 "data/maps/JaggedPass/scripts.pory"
	doweather
# 62 "data/maps/JaggedPass/scripts.pory"
	return
# 63 "data/maps/JaggedPass/scripts.pory"

# 64 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad:
# 65 "data/maps/JaggedPass/scripts.pory"
	goto_if_le VAR_JAGGED_PASS_STATE, 2, JaggedPass_EventScript_ConcealHideoutEntrance
# 66 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 2, JaggedPass_EventScript_CheckHasMagmaEmblem
# 67 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 68 "data/maps/JaggedPass/scripts.pory"
	end
# 69 "data/maps/JaggedPass/scripts.pory"

# 70 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GroudonReleased::
# 71 "data/maps/JaggedPass/scripts.pory"
	lockall
# 72 "data/maps/JaggedPass/scripts.pory"
	setobjectxyperm LOCALID_EMMIE, 17, 19
# 73 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_MaxieSpeech
# 74 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 75 "data/maps/JaggedPass/scripts.pory"
	end
# 76 "data/maps/JaggedPass/scripts.pory"

# 77 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MaxieSpeech::
# 78 "data/maps/JaggedPass/scripts.pory"
	lockall
# 79 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 80 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 81 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_WalkInPlaceFasterRight
# 82 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 83 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 84 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_MaxieTabithaGoToLilycove, MSGBOX_DEFAULT
# 85 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 86 "data/maps/JaggedPass/scripts.pory"
	delay 4
# 87 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 88 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 89 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_TabithaYouGotIt, MSGBOX_DEFAULT
# 90 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 91 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 92 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 93 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 94 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 0, 1
# 95 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 1, 0
# 96 "data/maps/JaggedPass/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 97 "data/maps/JaggedPass/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 98 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_TABITHA
# 99 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 100 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkUp
# 101 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 102 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 103 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 104 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_CourtneyWeShouldGo, MSGBOX_DEFAULT
# 105 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 106 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 107 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 108 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_MaxieYoureRight, MSGBOX_DEFAULT
# 109 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 110 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 111 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 112 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 113 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 0, 1
# 114 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 1, -1
# 115 "data/maps/JaggedPass/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 116 "data/maps/JaggedPass/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 117 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_COURTNEY
# 118 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 119 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkLeft
# 120 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 121 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_MaxieYouLose, MSGBOX_DEFAULT
# 122 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 123 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
# 124 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 125 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 126 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 0, 0
# 127 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 1, -1
# 128 "data/maps/JaggedPass/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 129 "data/maps/JaggedPass/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 130 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_MAXIE
# 131 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAXIE
# 132 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 133 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 134 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 135 "data/maps/JaggedPass/scripts.pory"
	end
# 136 "data/maps/JaggedPass/scripts.pory"
	@state 7
# 137 "data/maps/JaggedPass/scripts.pory"

# 138 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_MaxieTabithaGoToLilycove:
# 139 "data/maps/JaggedPass/scripts.pory"
	.string "Maxie: This is exactly as we envisaged!\p"
# 140 "data/maps/JaggedPass/scripts.pory"
	.string "Now we just need to ensure Team Aqua\n"
# 141 "data/maps/JaggedPass/scripts.pory"
	.string "cannot awaken Kyogre, else all our\l"
# 142 "data/maps/JaggedPass/scripts.pory"
	.string "efforts will have been for nothing.\p"
# 143 "data/maps/JaggedPass/scripts.pory"
	.string "Tabitha, go to their hideout in Lilycove\n"
# 144 "data/maps/JaggedPass/scripts.pory"
	.string "and try to uncover Team Aqua's plans.$"
# 145 "data/maps/JaggedPass/scripts.pory"

# 146 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_TabithaYouGotIt:
# 147 "data/maps/JaggedPass/scripts.pory"
	.string "Tabitha: You got it boss!$"
# 148 "data/maps/JaggedPass/scripts.pory"
	
# 149 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_CourtneyWeShouldGo:
# 150 "data/maps/JaggedPass/scripts.pory"
	.string "Courtney: Sir, we should get to Mossdeep.$"
# 151 "data/maps/JaggedPass/scripts.pory"

# 152 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_MaxieYoureRight:
# 153 "data/maps/JaggedPass/scripts.pory"
	.string "Maxie: You're right. Mt. Chimney has but\n"
# 154 "data/maps/JaggedPass/scripts.pory"
	.string "one purpose now.\p"
# 155 "data/maps/JaggedPass/scripts.pory"
	.string "Let us take our leave.$"
# 156 "data/maps/JaggedPass/scripts.pory"

# 157 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_MaxieYouLose:
# 158 "data/maps/JaggedPass/scripts.pory"
	.string "Maxie: As for you, it appears you lose\n"
# 159 "data/maps/JaggedPass/scripts.pory"
	.string "this time.\p"
# 160 "data/maps/JaggedPass/scripts.pory"
	.string "Despite everything, I truly do wish you\n"
# 161 "data/maps/JaggedPass/scripts.pory"
	.string "both the very best.\p"
# 162 "data/maps/JaggedPass/scripts.pory"
	.string "Farewell…$"
# 163 "data/maps/JaggedPass/scripts.pory"

# 164 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ConcealHideoutEntrance::
# 165 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
# 166 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
# 167 "data/maps/JaggedPass/scripts.pory"
	end
# 168 "data/maps/JaggedPass/scripts.pory"

# 169 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ShellyTrigger::
# 170 "data/maps/JaggedPass/scripts.pory"
	lockall
# 171 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 172 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 173 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 174 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceLeft
# 175 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellyThanksForComing, MSGBOX_DEFAULT
# 176 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 177 "data/maps/JaggedPass/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 178 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 15, JaggedPass_EventScript_EmmieApproachShelly1
# 179 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 180 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 181 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EmmieNoWayTrustingYou, MSGBOX_DEFAULT
# 182 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 183 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 184 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 185 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 186 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 187 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 188 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 189 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, JaggedPass_EventScript_EmmieArchieDefeated
# 190 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, JaggedPass_EventScript_EmmieMaxieDefeated
# 191 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 192 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 193 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
# 194 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_EMMIE_BATTLE_2
# 195 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_JAGGED_PASS_SHELLY_INTRO_GIVEN
# 196 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_EMMIE_BATTLE_STATE, 3
# 197 "data/maps/JaggedPass/scripts.pory"
	goto Common_EventScript_EmmieBattle
# 198 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 199 "data/maps/JaggedPass/scripts.pory"
	end
# 200 "data/maps/JaggedPass/scripts.pory"

# 201 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieArchieDefeated:
# 202 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EmmieOnlyWayIWillAgreeArchieDefeated, MSGBOX_DEFAULT
# 203 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 204 "data/maps/JaggedPass/scripts.pory"
	return
# 205 "data/maps/JaggedPass/scripts.pory"

# 206 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieMaxieDefeated:
# 207 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EmmieOnlyWayIWillAgreeArchieDefeated, MSGBOX_DEFAULT
# 208 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 209 "data/maps/JaggedPass/scripts.pory"
	return
# 210 "data/maps/JaggedPass/scripts.pory"

# 211 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EmmieOnlyWayIWillAgreeArchieDefeated:
# 212 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie: I'm sorry, what? You'll be okay by\n"
# 213 "data/maps/JaggedPass/scripts.pory"
	.string "yourself?\p"
# 214 "data/maps/JaggedPass/scripts.pory"
	.string "You have grown a lot since we left home,\n"
# 215 "data/maps/JaggedPass/scripts.pory"
	.string "and in fairness you held your own on\l"
# 216 "data/maps/JaggedPass/scripts.pory"
	.string "Mt Pyre, but that was alongside Maxie.\p"
# 217 "data/maps/JaggedPass/scripts.pory"
	.string "… Okay. The only way I will agree to \n"
# 218 "data/maps/JaggedPass/scripts.pory"
	.string "this is if the two of you can beat me.\p"
# 219 "data/maps/JaggedPass/scripts.pory"
	.string "{PLAYER}, in all honesty I went easy on\n"
# 220 "data/maps/JaggedPass/scripts.pory"
	.string "you outside Mr Briney's house.\p"
# 221 "data/maps/JaggedPass/scripts.pory"
	.string "This time, for your own good, I'm not\n"
# 222 "data/maps/JaggedPass/scripts.pory"
	.string "going to hold back.$"
# 223 "data/maps/JaggedPass/scripts.pory"

# 224 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EmmieOnlyWayIWillAgreeMaxieDefeated:
# 225 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie: I'm sorry, what? You'll be okay by\n"
# 226 "data/maps/JaggedPass/scripts.pory"
	.string "yourself?\p"
# 227 "data/maps/JaggedPass/scripts.pory"
	.string "You have grown a lot since we left home,\n"
# 228 "data/maps/JaggedPass/scripts.pory"
	.string "and in fairness you held your own on\l"
# 229 "data/maps/JaggedPass/scripts.pory"
	.string "Mt Pyre, but that was alongside Archie.\p"
# 230 "data/maps/JaggedPass/scripts.pory"
	.string "… Okay. The only way I will agree to \n"
# 231 "data/maps/JaggedPass/scripts.pory"
	.string "this is if the two of you can beat me.\p"
# 232 "data/maps/JaggedPass/scripts.pory"
	.string "{PLAYER}, in all honesty I went easy on\n"
# 233 "data/maps/JaggedPass/scripts.pory"
	.string "you outside Mr Briney's house.\p"
# 234 "data/maps/JaggedPass/scripts.pory"
	.string "This time, for your own good, I'm not\n"
# 235 "data/maps/JaggedPass/scripts.pory"
	.string "going to hold back.$"
# 236 "data/maps/JaggedPass/scripts.pory"

# 237 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShelly1::
# 238 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShelly1
# 239 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 240 "data/maps/JaggedPass/scripts.pory"
	return
# 241 "data/maps/JaggedPass/scripts.pory"

# 242 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EmmieNoWayTrustingYou:
# 243 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie: There's no way I'm trusting you to\n"
# 244 "data/maps/JaggedPass/scripts.pory"
	.string "take care of {PLAYER} after what I've seen\l"
# 245 "data/maps/JaggedPass/scripts.pory"
	.string "Team Aqua do.$"
# 246 "data/maps/JaggedPass/scripts.pory"

# 247 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShelly1:
# 248 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 249 "data/maps/JaggedPass/scripts.pory"
	walk_right
# 250 "data/maps/JaggedPass/scripts.pory"
	step_end
# 251 "data/maps/JaggedPass/scripts.pory"

# 252 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Shelly::
# 253 "data/maps/JaggedPass/scripts.pory"
	lockall
# 254 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_EMMIE_BATTLE_2_DEFEATED, JaggedPass_EventScript_ShellySeeYouInside
# 255 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_JAGGED_PASS_SHELLY_INTRO_GIVEN, JaggedPass_EventScript_ShellyLetsGetThisOver
# 256 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, JaggedPass_EventScript_PlayerApproachShellyWest
# 257 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, JaggedPass_EventScript_PlayerApproachShellyNorth
# 258 "data/maps/JaggedPass/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 259 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 19, JaggedPass_EventScript_EmmieApproachShellyStart1
# 260 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 18, JaggedPass_EventScript_EmmieApproachShellyStart2
# 261 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 17, JaggedPass_EventScript_EmmieApproachShellyStart3
# 262 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 16, JaggedPass_EventScript_EmmieApproachShellyStart4
# 263 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 264 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_ShellyTrigger
# 265 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 266 "data/maps/JaggedPass/scripts.pory"
	end
# 267 "data/maps/JaggedPass/scripts.pory"

# 268 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ShellyLetsGetThisOver::
# 269 "data/maps/JaggedPass/scripts.pory"
	faceplayer
# 270 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellyLetsGetThisOver, MSGBOX_DEFAULT
# 271 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 272 "data/maps/JaggedPass/scripts.pory"
	end
# 273 "data/maps/JaggedPass/scripts.pory"

# 274 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ShellySeeYouInside::
# 275 "data/maps/JaggedPass/scripts.pory"
	faceplayer
# 276 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellySeeYouInside, MSGBOX_DEFAULT
# 277 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 278 "data/maps/JaggedPass/scripts.pory"
	end
# 279 "data/maps/JaggedPass/scripts.pory"

# 280 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_ShellyLetsGetThisOver:
# 281 "data/maps/JaggedPass/scripts.pory"
	.string "Shelly: We really haven't got time for\n"
# 282 "data/maps/JaggedPass/scripts.pory"
	.string "this. Let's get it over and done with.$"
# 283 "data/maps/JaggedPass/scripts.pory"

# 284 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_ShellySeeYouInside:
# 285 "data/maps/JaggedPass/scripts.pory"
	.string "Shelly: Hurry up and go inside. I will\n"
# 286 "data/maps/JaggedPass/scripts.pory"
	.string "see you in there.$"
# 287 "data/maps/JaggedPass/scripts.pory"

# 288 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShellyStart1::
# 289 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShellyStart1
# 290 "data/maps/JaggedPass/scripts.pory"
	return
# 291 "data/maps/JaggedPass/scripts.pory"

# 292 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShellyStart2::
# 293 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShellyStart2
# 294 "data/maps/JaggedPass/scripts.pory"
	return
# 295 "data/maps/JaggedPass/scripts.pory"

# 296 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShellyStart3::
# 297 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShellyStart3
# 298 "data/maps/JaggedPass/scripts.pory"
	return
# 299 "data/maps/JaggedPass/scripts.pory"

# 300 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShellyStart4::
# 301 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShellyStart4
# 302 "data/maps/JaggedPass/scripts.pory"
	return
# 303 "data/maps/JaggedPass/scripts.pory"

# 304 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShellyStart1:
# 305 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 306 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 307 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 308 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 309 "data/maps/JaggedPass/scripts.pory"
	face_right
# 310 "data/maps/JaggedPass/scripts.pory"
	step_end
# 311 "data/maps/JaggedPass/scripts.pory"

# 312 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShellyStart2:
# 313 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 314 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 315 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 316 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 317 "data/maps/JaggedPass/scripts.pory"
	face_right
# 318 "data/maps/JaggedPass/scripts.pory"
	step_end
# 319 "data/maps/JaggedPass/scripts.pory"

# 320 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShellyStart3:
# 321 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 322 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 323 "data/maps/JaggedPass/scripts.pory"
	face_right
# 324 "data/maps/JaggedPass/scripts.pory"
	step_end
# 325 "data/maps/JaggedPass/scripts.pory"

# 326 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShellyStart4:
# 327 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 328 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 329 "data/maps/JaggedPass/scripts.pory"
	face_right
# 330 "data/maps/JaggedPass/scripts.pory"
	step_end
# 331 "data/maps/JaggedPass/scripts.pory"

# 332 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_PlayerApproachShellyNorth::
# 333 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JaggedPass_Movement_PlayerApproachShellyNorth
# 334 "data/maps/JaggedPass/scripts.pory"
	return
# 335 "data/maps/JaggedPass/scripts.pory"
	
# 336 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_PlayerApproachShellyWest::
# 337 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JaggedPass_Movement_PlayerApproachShellyWest
# 338 "data/maps/JaggedPass/scripts.pory"
	return
# 339 "data/maps/JaggedPass/scripts.pory"

# 340 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_PlayerApproachShellyNorth:
# 341 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 342 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 343 "data/maps/JaggedPass/scripts.pory"
	step_end
# 344 "data/maps/JaggedPass/scripts.pory"

# 345 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_PlayerApproachShellyWest:
# 346 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 347 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 348 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 349 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 350 "data/maps/JaggedPass/scripts.pory"
	step_end
# 351 "data/maps/JaggedPass/scripts.pory"

# 352 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_OpenMagmaHideout::
# 353 "data/maps/JaggedPass/scripts.pory"
	lockall
# 354 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 355 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 356 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 357 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 358 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 359 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 360 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 361 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 362 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 363 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 364 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16  @ num shakes
# 365 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3   @ shake delay
# 366 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 367 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 368 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 369 "data/maps/JaggedPass/scripts.pory"
	waitse
# 370 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 371 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
# 372 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 373 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 374 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceLeft
# 375 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 376 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 377 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 378 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 379 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 380 "data/maps/JaggedPass/scripts.pory"
	waitse
# 381 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 382 "data/maps/JaggedPass/scripts.pory"
	end
# 383 "data/maps/JaggedPass/scripts.pory"

# 384 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard::
# 385 "data/maps/JaggedPass/scripts.pory"
	lockall
# 386 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
# 387 "data/maps/JaggedPass/scripts.pory"
	waitse
# 388 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 389 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 390 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 391 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_Delay48
# 392 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 393 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 394 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 395 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 396 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 397 "data/maps/JaggedPass/scripts.pory"
	multi_2p_vs_1 TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat, PARTNER_EMMIE
# 398 "data/maps/JaggedPass/scripts.pory"
	switch VAR_RESULT
# 399 "data/maps/JaggedPass/scripts.pory"
	case 1, JaggedPass_EventScript_MagmaGruntVictory
# 400 "data/maps/JaggedPass/scripts.pory"
	fadescreen FADE_TO_BLACK
# 401 "data/maps/JaggedPass/scripts.pory"
	special SetCB2WhiteOut
# 402 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 403 "data/maps/JaggedPass/scripts.pory"

# 404 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaGruntVictory::
# 405 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 406 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 407 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 408 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 409 "data/maps/JaggedPass/scripts.pory"
	end
# 410 "data/maps/JaggedPass/scripts.pory"

# 411 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GuardDefeated::
# 412 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 413 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 414 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 415 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 416 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 417 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 418 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 419 "data/maps/JaggedPass/scripts.pory"
	end
# 420 "data/maps/JaggedPass/scripts.pory"

# 421 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDiana::
# 422 "data/maps/JaggedPass/scripts.pory"
lockall
# 423 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_ERIC
# 424 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 425 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 426 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 427 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 428 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 429 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 430 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_EricIntro MSGBOX_AUTOCLOSE
# 431 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_DIANA
# 432 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 433 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 434 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 435 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 436 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 437 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 438 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_DianaIntro, MSGBOX_AUTOCLOSE
# 439 "data/maps/JaggedPass/scripts.pory"
goto JaggedPass_EventScript_EricDianaDoMultiBattle
# 440 "data/maps/JaggedPass/scripts.pory"
releaseall
# 441 "data/maps/JaggedPass/scripts.pory"
end
# 442 "data/maps/JaggedPass/scripts.pory"

# 443 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDianaDoMultiBattle::
# 444 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 445 "data/maps/JaggedPass/scripts.pory"
multi_2p_vs_2 TRAINER_ERIC, JaggedPass_Text_EricDefeat, TRAINER_DIANA_1, JaggedPass_Text_DianaDefeat, PARTNER_EMMIE
# 446 "data/maps/JaggedPass/scripts.pory"
switch VAR_RESULT
# 447 "data/maps/JaggedPass/scripts.pory"
case 1, JaggedPass_EventScript_EricDianaVictory
# 448 "data/maps/JaggedPass/scripts.pory"
fadescreen FADE_TO_BLACK
# 449 "data/maps/JaggedPass/scripts.pory"
special SetCB2WhiteOut
# 450 "data/maps/JaggedPass/scripts.pory"
waitstate
# 451 "data/maps/JaggedPass/scripts.pory"

# 452 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDianaVictory::
# 453 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 454 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 455 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 456 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 457 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 458 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
# 459 "data/maps/JaggedPass/scripts.pory"
addvar VAR_JAGGED_PASS_STATE, 1
# 460 "data/maps/JaggedPass/scripts.pory"
end
# 461 "data/maps/JaggedPass/scripts.pory"

# 462 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Eric::
# 463 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 464 "data/maps/JaggedPass/scripts.pory"
	end
# 465 "data/maps/JaggedPass/scripts.pory"

# 466 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana::
# 467 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 468 "data/maps/JaggedPass/scripts.pory"
	release
# 469 "data/maps/JaggedPass/scripts.pory"
	end
# 470 "data/maps/JaggedPass/scripts.pory"

# 471 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterDiana::
# 472 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 473 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 474 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 475 "data/maps/JaggedPass/scripts.pory"
	release
# 476 "data/maps/JaggedPass/scripts.pory"
	end
# 477 "data/maps/JaggedPass/scripts.pory"

# 478 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_DianaRematch::
# 479 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 480 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
# 481 "data/maps/JaggedPass/scripts.pory"
	end
# 482 "data/maps/JaggedPass/scripts.pory"

# 483 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan::
# 484 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
# 485 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 486 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
# 487 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 488 "data/maps/JaggedPass/scripts.pory"
	release
# 489 "data/maps/JaggedPass/scripts.pory"
	end
# 490 "data/maps/JaggedPass/scripts.pory"

# 491 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterEthan::
# 492 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 493 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 494 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 495 "data/maps/JaggedPass/scripts.pory"
	release
# 496 "data/maps/JaggedPass/scripts.pory"
	end
# 497 "data/maps/JaggedPass/scripts.pory"

# 498 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EthanRematch::
# 499 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 500 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
# 501 "data/maps/JaggedPass/scripts.pory"
	end
# 502 "data/maps/JaggedPass/scripts.pory"

# 503 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Julio::
# 504 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 505 "data/maps/JaggedPass/scripts.pory"
	end
# 506 "data/maps/JaggedPass/scripts.pory"

# 507 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulio::
# 508 "data/maps/JaggedPass/scripts.pory"
lockall
# 509 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_AUTUMN
# 510 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 511 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 512 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 513 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 514 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 515 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 516 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_AutumnIntro MSGBOX_AUTOCLOSE
# 517 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_JULIO
# 518 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 519 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 520 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 521 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 522 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 523 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 524 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_JulioIntro, MSGBOX_AUTOCLOSE
# 525 "data/maps/JaggedPass/scripts.pory"
goto JaggedPass_EventScript_AutumnJulioDoMultiBattle
# 526 "data/maps/JaggedPass/scripts.pory"
releaseall
# 527 "data/maps/JaggedPass/scripts.pory"
end
# 528 "data/maps/JaggedPass/scripts.pory"

# 529 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulioDoMultiBattle::
# 530 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 531 "data/maps/JaggedPass/scripts.pory"
multi_2p_vs_2 TRAINER_AUTUMN, JaggedPass_Text_AutumnDefeat, TRAINER_JULIO, JaggedPass_Text_JulioDefeat, PARTNER_EMMIE
# 532 "data/maps/JaggedPass/scripts.pory"
switch VAR_RESULT
# 533 "data/maps/JaggedPass/scripts.pory"
case 1, JaggedPass_EventScript_AutumnJulioVictory
# 534 "data/maps/JaggedPass/scripts.pory"
fadescreen FADE_TO_BLACK
# 535 "data/maps/JaggedPass/scripts.pory"
special SetCB2WhiteOut
# 536 "data/maps/JaggedPass/scripts.pory"
waitstate
# 537 "data/maps/JaggedPass/scripts.pory"

# 538 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulioVictory::
# 539 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 540 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 541 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 542 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 543 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 544 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 545 "data/maps/JaggedPass/scripts.pory"
addvar VAR_JAGGED_PASS_STATE, 1
# 546 "data/maps/JaggedPass/scripts.pory"
end
# 547 "data/maps/JaggedPass/scripts.pory"

# 548 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Autumn::
# 549 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 550 "data/maps/JaggedPass/scripts.pory"
	end
# 551 "data/maps/JaggedPass/scripts.pory"

# 552 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_ShellyThanksForComing:
# 553 "data/maps/JaggedPass/scripts.pory"
	.string "Shelly: Thanks for coming.\p"
# 554 "data/maps/JaggedPass/scripts.pory"
	.string "What's that? An emblem dropped by\n"
# 555 "data/maps/JaggedPass/scripts.pory"
	.string "Team Magma at Mt. Pyre?\p"
# 556 "data/maps/JaggedPass/scripts.pory"
	.string "I suppose that explains why I couldn't\n"
# 557 "data/maps/JaggedPass/scripts.pory"
	.string "find my own way in!\p"
# 558 "data/maps/JaggedPass/scripts.pory"
	.string "Anyway, this the Magma Hideout.\p"
# 559 "data/maps/JaggedPass/scripts.pory"
	.string "Team Aqua believes that the legendary\n"
# 560 "data/maps/JaggedPass/scripts.pory"
	.string "Pokémon Groudon has been found here.\p"
# 561 "data/maps/JaggedPass/scripts.pory"
	.string "After holding your own in the company\n"
# 562 "data/maps/JaggedPass/scripts.pory"
	.string "of Archie and Maxie on Mt. Pyre,\p"
# 563 "data/maps/JaggedPass/scripts.pory"
	.string "I'm confident we will find out what's\n"
# 564 "data/maps/JaggedPass/scripts.pory"
	.string "going on in there if we work together.\p"
# 565 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie, I understand that the two of\n"
# 566 "data/maps/JaggedPass/scripts.pory"
	.string "you are used to working as a team.\p"
# 567 "data/maps/JaggedPass/scripts.pory"
	.string "However, I'd appreciate it if you would\n"
# 568 "data/maps/JaggedPass/scripts.pory"
	.string "let me accompany {PLAYER} through the\l"
# 569 "data/maps/JaggedPass/scripts.pory"
	.string "hideout, and you wait at the entrance.$"
# 570 "data/maps/JaggedPass/scripts.pory"

# 571 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricIntro:
# 572 "data/maps/JaggedPass/scripts.pory"
	.string "MT. CHIMNEY's JAGGED PASS…\p"
# 573 "data/maps/JaggedPass/scripts.pory"
	.string "Now this is what I've always wanted\n"
# 574 "data/maps/JaggedPass/scripts.pory"
	.string "in a mountain.\p"
# 575 "data/maps/JaggedPass/scripts.pory"
	.string "This jagged bumpiness…\n"
# 576 "data/maps/JaggedPass/scripts.pory"
	.string "It rocks my soul!$"
# 577 "data/maps/JaggedPass/scripts.pory"

# 578 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricDefeat:
# 579 "data/maps/JaggedPass/scripts.pory"
	.string "Losing left me bitter!$"
# 580 "data/maps/JaggedPass/scripts.pory"

# 581 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricPostBattle:
# 582 "data/maps/JaggedPass/scripts.pory"
	.string "Yes, I did lose at POKéMON…\p"
# 583 "data/maps/JaggedPass/scripts.pory"
	.string "But, when it comes to the love of\n"
# 584 "data/maps/JaggedPass/scripts.pory"
	.string "the mountains, I have you beat!$"
# 585 "data/maps/JaggedPass/scripts.pory"

# 586 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaIntro:
# 587 "data/maps/JaggedPass/scripts.pory"
	.string "This place isn't your casual hike.\n"
# 588 "data/maps/JaggedPass/scripts.pory"
	.string "It's not suited for a picnic.$"
# 589 "data/maps/JaggedPass/scripts.pory"

# 590 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaDefeat:
# 591 "data/maps/JaggedPass/scripts.pory"
	.string "Ohhh, no!\n"
# 592 "data/maps/JaggedPass/scripts.pory"
	.string "The ground is too bumpy…$"
# 593 "data/maps/JaggedPass/scripts.pory"

# 594 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostBattle:
# 595 "data/maps/JaggedPass/scripts.pory"
	.string "Did you know?\p"
# 596 "data/maps/JaggedPass/scripts.pory"
	.string "Some people cleverly ride their\n"
# 597 "data/maps/JaggedPass/scripts.pory"
	.string "bicycles up this horribly bumpy pass.$"
# 598 "data/maps/JaggedPass/scripts.pory"

# 599 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRegister:
# 600 "data/maps/JaggedPass/scripts.pory"
	.string "Will you ever be back in this area?\n"
# 601 "data/maps/JaggedPass/scripts.pory"
	.string "If you do return, I'd like a rematch.$"
# 602 "data/maps/JaggedPass/scripts.pory"

# 603 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchIntro:
# 604 "data/maps/JaggedPass/scripts.pory"
	.string "Picnics are fun wherever you go.\n"
# 605 "data/maps/JaggedPass/scripts.pory"
	.string "Just like POKéMON!$"
# 606 "data/maps/JaggedPass/scripts.pory"

# 607 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchDefeat:
# 608 "data/maps/JaggedPass/scripts.pory"
	.string "I only lost because the ground is\n"
# 609 "data/maps/JaggedPass/scripts.pory"
	.string "too bumpy!$"
# 610 "data/maps/JaggedPass/scripts.pory"

# 611 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostRematch:
# 612 "data/maps/JaggedPass/scripts.pory"
	.string "I'll forget about losing and just\n"
# 613 "data/maps/JaggedPass/scripts.pory"
	.string "enjoy this bumpy hike.$"
# 614 "data/maps/JaggedPass/scripts.pory"

# 615 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanIntro:
# 616 "data/maps/JaggedPass/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\n"
# 617 "data/maps/JaggedPass/scripts.pory"
	.string "It's a good place for training.$"
# 618 "data/maps/JaggedPass/scripts.pory"

# 619 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanDefeat:
# 620 "data/maps/JaggedPass/scripts.pory"
	.string "It was all over while we were still\n"
# 621 "data/maps/JaggedPass/scripts.pory"
	.string "trying to find a good footing…$"
# 622 "data/maps/JaggedPass/scripts.pory"

# 623 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostBattle:
# 624 "data/maps/JaggedPass/scripts.pory"
	.string "If I had an ACRO BIKE, I'd be able to\n"
# 625 "data/maps/JaggedPass/scripts.pory"
	.string "jump ledges.$"
# 626 "data/maps/JaggedPass/scripts.pory"

# 627 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRegister:
# 628 "data/maps/JaggedPass/scripts.pory"
	.string "When I get more used to this bumpiness,\n"
# 629 "data/maps/JaggedPass/scripts.pory"
	.string "I'll be sure to win!\p"
# 630 "data/maps/JaggedPass/scripts.pory"
	.string "Can you register me in your POKéNAV?$"
# 631 "data/maps/JaggedPass/scripts.pory"

# 632 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchIntro:
# 633 "data/maps/JaggedPass/scripts.pory"
	.string "I got used to this bumpiness.\n"
# 634 "data/maps/JaggedPass/scripts.pory"
	.string "I sing while I climb now.$"
# 635 "data/maps/JaggedPass/scripts.pory"

# 636 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchDefeat:
# 637 "data/maps/JaggedPass/scripts.pory"
	.string "It's still not easy to battle on this\n"
# 638 "data/maps/JaggedPass/scripts.pory"
	.string "bumpy ground…$"
# 639 "data/maps/JaggedPass/scripts.pory"

# 640 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostRematch:
# 641 "data/maps/JaggedPass/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\n"
# 642 "data/maps/JaggedPass/scripts.pory"
	.string "in MAUVILLE CITY…$"
# 643 "data/maps/JaggedPass/scripts.pory"

# 644 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntIntro:
# 645 "data/maps/JaggedPass/scripts.pory"
	.string "Wah!\n"
# 646 "data/maps/JaggedPass/scripts.pory"
	.string "What are you doing here?\p"
# 647 "data/maps/JaggedPass/scripts.pory"
	.string "What am I doing in a place like this?\p"
# 648 "data/maps/JaggedPass/scripts.pory"
	.string "What business is it of yours?$"
# 649 "data/maps/JaggedPass/scripts.pory"

# 650 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntDefeat:
# 651 "data/maps/JaggedPass/scripts.pory"
	.string "Urrrgh…\p"
# 652 "data/maps/JaggedPass/scripts.pory"
	.string "I should've ducked into our HIDEOUT\n"
# 653 "data/maps/JaggedPass/scripts.pory"
	.string "right away…$"
# 654 "data/maps/JaggedPass/scripts.pory"

# 655 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GoWhereverYouWant:
# 656 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, oh-kay!\n"
# 657 "data/maps/JaggedPass/scripts.pory"
	.string "I admit it--you're strong!\p"
# 658 "data/maps/JaggedPass/scripts.pory"
	.string "Don't worry about me.\n"
# 659 "data/maps/JaggedPass/scripts.pory"
	.string "Go wherever you want!$"
# 660 "data/maps/JaggedPass/scripts.pory"

# 661 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_BoulderShakingInResponseToEmblem:
# 662 "data/maps/JaggedPass/scripts.pory"
	.string "Oh! This boulder is shaking in response\n"
# 663 "data/maps/JaggedPass/scripts.pory"
	.string "to the MAGMA EMBLEM!$"
# 664 "data/maps/JaggedPass/scripts.pory"

# 665 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioIntro:
# 666 "data/maps/JaggedPass/scripts.pory"
	.string "Aiyeeh! It's awfully scary to shoot\n"
# 667 "data/maps/JaggedPass/scripts.pory"
	.string "down the mountain in one go!$"
# 668 "data/maps/JaggedPass/scripts.pory"

# 669 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioDefeat:
# 670 "data/maps/JaggedPass/scripts.pory"
	.string "I feel like I'm falling apart…$"
# 671 "data/maps/JaggedPass/scripts.pory"

# 672 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioPostBattle:
# 673 "data/maps/JaggedPass/scripts.pory"
	.string "My bicycle bounced around so much,\n"
# 674 "data/maps/JaggedPass/scripts.pory"
	.string "my rear end's sore…$"
# 675 "data/maps/JaggedPass/scripts.pory"

# 676 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnIntro:
# 677 "data/maps/JaggedPass/scripts.pory"
	.string "I climb this hill every day.\n"
# 678 "data/maps/JaggedPass/scripts.pory"
	.string "I have confidence in my strength!$"
# 679 "data/maps/JaggedPass/scripts.pory"

# 680 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnDefeat:
# 681 "data/maps/JaggedPass/scripts.pory"
	.string "Hmm…\n"
# 682 "data/maps/JaggedPass/scripts.pory"
	.string "What went wrong?$"
# 683 "data/maps/JaggedPass/scripts.pory"

# 684 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnPostBattle:
# 685 "data/maps/JaggedPass/scripts.pory"
	.string "What is that odd rock protrusion\n"
# 686 "data/maps/JaggedPass/scripts.pory"
	.string "a little up the hill from here?$"
