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
	.2byte 0
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
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 166 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 167 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 168 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceLeft
# 169 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellyThanksForComing, MSGBOX_DEFAULT
# 170 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 171 "data/maps/JaggedPass/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 172 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 15, JaggedPass_EventScript_EmmieApproachShelly1
# 173 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EmmieNoWayTrustingYou, MSGBOX_DEFAULT
# 174 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 175 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 176 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 177 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 178 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 179 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 180 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 181 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, JaggedPass_EventScript_EmmieArchieDefeated
# 182 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, JaggedPass_EventScript_EmmieMaxieDefeated
# 183 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 184 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 185 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_EMMIE_BATTLE_2
# 186 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_JAGGED_PASS_SHELLY_INTRO_GIVEN
# 187 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_EMMIE_BATTLE_STATE, 1
# 188 "data/maps/JaggedPass/scripts.pory"
	goto Common_EventScript_EmmieBattle
# 189 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 190 "data/maps/JaggedPass/scripts.pory"
	end
# 191 "data/maps/JaggedPass/scripts.pory"

# 192 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieArchieDefeated:
# 193 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EmmieOnlyWayIWillAgreeArchieDefeated, MSGBOX_DEFAULT
# 194 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 195 "data/maps/JaggedPass/scripts.pory"
	return
# 196 "data/maps/JaggedPass/scripts.pory"

# 197 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieMaxieDefeated:
# 198 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EmmieOnlyWayIWillAgreeArchieDefeated, MSGBOX_DEFAULT
# 199 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 200 "data/maps/JaggedPass/scripts.pory"
	return
# 201 "data/maps/JaggedPass/scripts.pory"

# 202 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EmmieOnlyWayIWillAgreeArchieDefeated:
# 203 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie: I'm sorry, what? You'll be okay by\n"
# 204 "data/maps/JaggedPass/scripts.pory"
	.string "yourself?\p"
# 205 "data/maps/JaggedPass/scripts.pory"
	.string "You have grown a lot since we left home,\n"
# 206 "data/maps/JaggedPass/scripts.pory"
	.string "and in fairness you held your own on\l"
# 207 "data/maps/JaggedPass/scripts.pory"
	.string "Mt Pyre, but that was alongside Maxie.\p"
# 208 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, the only way I will agree to this\n"
# 209 "data/maps/JaggedPass/scripts.pory"
	.string "is if the two of you can beat me.\p"
# 210 "data/maps/JaggedPass/scripts.pory"
	.string "{PLAYER}, in all honesty I went easy on\n"
# 211 "data/maps/JaggedPass/scripts.pory"
	.string "you outside Mr Briney's house.\p"
# 212 "data/maps/JaggedPass/scripts.pory"
	.string "This time, for your own good, I'm not\n"
# 213 "data/maps/JaggedPass/scripts.pory"
	.string "going to hold back.$"
# 214 "data/maps/JaggedPass/scripts.pory"

# 215 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EmmieOnlyWayIWillAgreeMaxieDefeated:
# 216 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie: I'm sorry, what? You'll be okay by\n"
# 217 "data/maps/JaggedPass/scripts.pory"
	.string "yourself?\p"
# 218 "data/maps/JaggedPass/scripts.pory"
	.string "You have grown a lot since we left home,\n"
# 219 "data/maps/JaggedPass/scripts.pory"
	.string "and in fairness you held your own on\l"
# 220 "data/maps/JaggedPass/scripts.pory"
	.string "Mt Pyre, but that was alongside Archie.\p"
# 221 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, the only way I will agree to this\n"
# 222 "data/maps/JaggedPass/scripts.pory"
	.string "is if the two of you can beat me.\p"
# 223 "data/maps/JaggedPass/scripts.pory"
	.string "{PLAYER}, in all honesty I went easy on\n"
# 224 "data/maps/JaggedPass/scripts.pory"
	.string "you outside Mr Briney's house.\p"
# 225 "data/maps/JaggedPass/scripts.pory"
	.string "This time, for your own good, I'm not\n"
# 226 "data/maps/JaggedPass/scripts.pory"
	.string "going to hold back.$"
# 227 "data/maps/JaggedPass/scripts.pory"

# 228 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShelly1::
# 229 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShelly1
# 230 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 231 "data/maps/JaggedPass/scripts.pory"
	return
# 232 "data/maps/JaggedPass/scripts.pory"

# 233 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EmmieNoWayTrustingYou:
# 234 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie: There's no way I'm trusting you to\n"
# 235 "data/maps/JaggedPass/scripts.pory"
	.string "take care of {PLAYER} after what I've seen\l"
# 236 "data/maps/JaggedPass/scripts.pory"
	.string "Team Aqua do.$"
# 237 "data/maps/JaggedPass/scripts.pory"

# 238 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShelly1:
# 239 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 240 "data/maps/JaggedPass/scripts.pory"
	walk_right
# 241 "data/maps/JaggedPass/scripts.pory"
	step_end
# 242 "data/maps/JaggedPass/scripts.pory"

# 243 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Shelly::
# 244 "data/maps/JaggedPass/scripts.pory"
	lockall
# 245 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_EMMIE_BATTLE_2_DEFEATED, JaggedPass_EventScript_ShellySeeYouInside
# 246 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_JAGGED_PASS_SHELLY_INTRO_GIVEN, JaggedPass_EventScript_ShellyLetsGetThisOver
# 247 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, JaggedPass_EventScript_PlayerApproachShellyWest
# 248 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, JaggedPass_EventScript_PlayerApproachShellyNorth
# 249 "data/maps/JaggedPass/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 250 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 19, JaggedPass_EventScript_EmmieApproachShellyStart1
# 251 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 18, JaggedPass_EventScript_EmmieApproachShellyStart2
# 252 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 17, JaggedPass_EventScript_EmmieApproachShellyStart3
# 253 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 16, JaggedPass_EventScript_EmmieApproachShellyStart4
# 254 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 255 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_ShellyTrigger
# 256 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 257 "data/maps/JaggedPass/scripts.pory"
	end
# 258 "data/maps/JaggedPass/scripts.pory"

# 259 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ShellyLetsGetThisOver::
# 260 "data/maps/JaggedPass/scripts.pory"
	faceplayer
# 261 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellyLetsGetThisOver, MSGBOX_DEFAULT
# 262 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 263 "data/maps/JaggedPass/scripts.pory"
	end
# 264 "data/maps/JaggedPass/scripts.pory"

# 265 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ShellySeeYouInside::
# 266 "data/maps/JaggedPass/scripts.pory"
	faceplayer
# 267 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellySeeYouInside, MSGBOX_DEFAULT
# 268 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 269 "data/maps/JaggedPass/scripts.pory"
	end
# 270 "data/maps/JaggedPass/scripts.pory"

# 271 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_ShellyLetsGetThisOver:
# 272 "data/maps/JaggedPass/scripts.pory"
	.string "Shelly: We really haven't got time for\n"
# 273 "data/maps/JaggedPass/scripts.pory"
	.string "this. Let's get it over and done with.$"
# 274 "data/maps/JaggedPass/scripts.pory"

# 275 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_ShellySeeYouInside:
# 276 "data/maps/JaggedPass/scripts.pory"
	.string "Shelly: Hurry up and go inside. I will\n"
# 277 "data/maps/JaggedPass/scripts.pory"
	.string "see you in there.$"
# 278 "data/maps/JaggedPass/scripts.pory"

# 279 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShellyStart1::
# 280 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShellyStart1
# 281 "data/maps/JaggedPass/scripts.pory"
	return
# 282 "data/maps/JaggedPass/scripts.pory"

# 283 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShellyStart2::
# 284 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShellyStart2
# 285 "data/maps/JaggedPass/scripts.pory"
	return
# 286 "data/maps/JaggedPass/scripts.pory"

# 287 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShellyStart3::
# 288 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShellyStart3
# 289 "data/maps/JaggedPass/scripts.pory"
	return
# 290 "data/maps/JaggedPass/scripts.pory"

# 291 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShellyStart4::
# 292 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShellyStart4
# 293 "data/maps/JaggedPass/scripts.pory"
	return
# 294 "data/maps/JaggedPass/scripts.pory"

# 295 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShellyStart1:
# 296 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 297 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 298 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 299 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 300 "data/maps/JaggedPass/scripts.pory"
	face_right
# 301 "data/maps/JaggedPass/scripts.pory"
	step_end
# 302 "data/maps/JaggedPass/scripts.pory"

# 303 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShellyStart2:
# 304 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 305 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 306 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 307 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 308 "data/maps/JaggedPass/scripts.pory"
	face_right
# 309 "data/maps/JaggedPass/scripts.pory"
	step_end
# 310 "data/maps/JaggedPass/scripts.pory"

# 311 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShellyStart3:
# 312 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 313 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 314 "data/maps/JaggedPass/scripts.pory"
	face_right
# 315 "data/maps/JaggedPass/scripts.pory"
	step_end
# 316 "data/maps/JaggedPass/scripts.pory"

# 317 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShellyStart4:
# 318 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 319 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 320 "data/maps/JaggedPass/scripts.pory"
	face_right
# 321 "data/maps/JaggedPass/scripts.pory"
	step_end
# 322 "data/maps/JaggedPass/scripts.pory"

# 323 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_PlayerApproachShellyNorth::
# 324 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JaggedPass_Movement_PlayerApproachShellyNorth
# 325 "data/maps/JaggedPass/scripts.pory"
	return
# 326 "data/maps/JaggedPass/scripts.pory"
	
# 327 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_PlayerApproachShellyWest::
# 328 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JaggedPass_Movement_PlayerApproachShellyWest
# 329 "data/maps/JaggedPass/scripts.pory"
	return
# 330 "data/maps/JaggedPass/scripts.pory"

# 331 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_PlayerApproachShellyNorth:
# 332 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 333 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 334 "data/maps/JaggedPass/scripts.pory"
	step_end
# 335 "data/maps/JaggedPass/scripts.pory"

# 336 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_PlayerApproachShellyWest:
# 337 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 338 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 339 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 340 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 341 "data/maps/JaggedPass/scripts.pory"
	step_end
# 342 "data/maps/JaggedPass/scripts.pory"

# 343 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_OpenMagmaHideout::
# 344 "data/maps/JaggedPass/scripts.pory"
	lockall
# 345 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 346 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 347 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 348 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 349 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 350 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 351 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 352 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 353 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 354 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 355 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16  @ num shakes
# 356 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3   @ shake delay
# 357 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 358 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 359 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 360 "data/maps/JaggedPass/scripts.pory"
	waitse
# 361 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 362 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
# 363 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 364 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 365 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceLeft
# 366 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 367 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 368 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 369 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 370 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 371 "data/maps/JaggedPass/scripts.pory"
	waitse
# 372 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 373 "data/maps/JaggedPass/scripts.pory"
	end
# 374 "data/maps/JaggedPass/scripts.pory"

# 375 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard::
# 376 "data/maps/JaggedPass/scripts.pory"
	lockall
# 377 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
# 378 "data/maps/JaggedPass/scripts.pory"
	waitse
# 379 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 380 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 381 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 382 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_Delay48
# 383 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 384 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 385 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 386 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 387 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 388 "data/maps/JaggedPass/scripts.pory"
	multi_2p_vs_1 TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat, PARTNER_EMMIE
# 389 "data/maps/JaggedPass/scripts.pory"
	switch VAR_RESULT
# 390 "data/maps/JaggedPass/scripts.pory"
	case 1, JaggedPass_EventScript_MagmaGruntVictory
# 391 "data/maps/JaggedPass/scripts.pory"
	fadescreen FADE_TO_BLACK
# 392 "data/maps/JaggedPass/scripts.pory"
	special SetCB2WhiteOut
# 393 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 394 "data/maps/JaggedPass/scripts.pory"

# 395 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaGruntVictory::
# 396 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 397 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 398 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 399 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 400 "data/maps/JaggedPass/scripts.pory"
	end
# 401 "data/maps/JaggedPass/scripts.pory"

# 402 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GuardDefeated::
# 403 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 404 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 405 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 406 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 407 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 408 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 409 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 410 "data/maps/JaggedPass/scripts.pory"
	end
# 411 "data/maps/JaggedPass/scripts.pory"

# 412 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDiana::
# 413 "data/maps/JaggedPass/scripts.pory"
lockall
# 414 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_ERIC
# 415 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 416 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 417 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 418 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 419 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 420 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 421 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_EricIntro MSGBOX_AUTOCLOSE
# 422 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_DIANA
# 423 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 424 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 425 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 426 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 427 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 428 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 429 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_DianaIntro, MSGBOX_AUTOCLOSE
# 430 "data/maps/JaggedPass/scripts.pory"
goto JaggedPass_EventScript_EricDianaDoMultiBattle
# 431 "data/maps/JaggedPass/scripts.pory"
releaseall
# 432 "data/maps/JaggedPass/scripts.pory"
end
# 433 "data/maps/JaggedPass/scripts.pory"

# 434 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDianaDoMultiBattle::
# 435 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 436 "data/maps/JaggedPass/scripts.pory"
multi_2p_vs_2 TRAINER_ERIC, JaggedPass_Text_EricDefeat, TRAINER_DIANA_1, JaggedPass_Text_DianaDefeat, PARTNER_EMMIE
# 437 "data/maps/JaggedPass/scripts.pory"
switch VAR_RESULT
# 438 "data/maps/JaggedPass/scripts.pory"
case 1, JaggedPass_EventScript_EricDianaVictory
# 439 "data/maps/JaggedPass/scripts.pory"
fadescreen FADE_TO_BLACK
# 440 "data/maps/JaggedPass/scripts.pory"
special SetCB2WhiteOut
# 441 "data/maps/JaggedPass/scripts.pory"
waitstate
# 442 "data/maps/JaggedPass/scripts.pory"

# 443 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDianaVictory::
# 444 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 445 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 446 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 447 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 448 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 449 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
# 450 "data/maps/JaggedPass/scripts.pory"
addvar VAR_JAGGED_PASS_STATE, 1
# 451 "data/maps/JaggedPass/scripts.pory"
end
# 452 "data/maps/JaggedPass/scripts.pory"

# 453 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Eric::
# 454 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 455 "data/maps/JaggedPass/scripts.pory"
	end
# 456 "data/maps/JaggedPass/scripts.pory"

# 457 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana::
# 458 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 459 "data/maps/JaggedPass/scripts.pory"
	release
# 460 "data/maps/JaggedPass/scripts.pory"
	end
# 461 "data/maps/JaggedPass/scripts.pory"

# 462 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterDiana::
# 463 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 464 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 465 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 466 "data/maps/JaggedPass/scripts.pory"
	release
# 467 "data/maps/JaggedPass/scripts.pory"
	end
# 468 "data/maps/JaggedPass/scripts.pory"

# 469 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_DianaRematch::
# 470 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 471 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
# 472 "data/maps/JaggedPass/scripts.pory"
	end
# 473 "data/maps/JaggedPass/scripts.pory"

# 474 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan::
# 475 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
# 476 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 477 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
# 478 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 479 "data/maps/JaggedPass/scripts.pory"
	release
# 480 "data/maps/JaggedPass/scripts.pory"
	end
# 481 "data/maps/JaggedPass/scripts.pory"

# 482 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterEthan::
# 483 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 484 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 485 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 486 "data/maps/JaggedPass/scripts.pory"
	release
# 487 "data/maps/JaggedPass/scripts.pory"
	end
# 488 "data/maps/JaggedPass/scripts.pory"

# 489 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EthanRematch::
# 490 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 491 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
# 492 "data/maps/JaggedPass/scripts.pory"
	end
# 493 "data/maps/JaggedPass/scripts.pory"

# 494 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Julio::
# 495 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 496 "data/maps/JaggedPass/scripts.pory"
	end
# 497 "data/maps/JaggedPass/scripts.pory"

# 498 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulio::
# 499 "data/maps/JaggedPass/scripts.pory"
lockall
# 500 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_AUTUMN
# 501 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 502 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 503 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 504 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 505 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 506 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 507 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_AutumnIntro MSGBOX_AUTOCLOSE
# 508 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_JULIO
# 509 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 510 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 511 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 512 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 513 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 514 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 515 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_JulioIntro, MSGBOX_AUTOCLOSE
# 516 "data/maps/JaggedPass/scripts.pory"
goto JaggedPass_EventScript_AutumnJulioDoMultiBattle
# 517 "data/maps/JaggedPass/scripts.pory"
releaseall
# 518 "data/maps/JaggedPass/scripts.pory"
end
# 519 "data/maps/JaggedPass/scripts.pory"

# 520 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulioDoMultiBattle::
# 521 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 522 "data/maps/JaggedPass/scripts.pory"
multi_2p_vs_2 TRAINER_AUTUMN, JaggedPass_Text_AutumnDefeat, TRAINER_JULIO, JaggedPass_Text_JulioDefeat, PARTNER_EMMIE
# 523 "data/maps/JaggedPass/scripts.pory"
switch VAR_RESULT
# 524 "data/maps/JaggedPass/scripts.pory"
case 1, JaggedPass_EventScript_AutumnJulioVictory
# 525 "data/maps/JaggedPass/scripts.pory"
fadescreen FADE_TO_BLACK
# 526 "data/maps/JaggedPass/scripts.pory"
special SetCB2WhiteOut
# 527 "data/maps/JaggedPass/scripts.pory"
waitstate
# 528 "data/maps/JaggedPass/scripts.pory"

# 529 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulioVictory::
# 530 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 531 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 532 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 533 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 534 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 535 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 536 "data/maps/JaggedPass/scripts.pory"
addvar VAR_JAGGED_PASS_STATE, 1
# 537 "data/maps/JaggedPass/scripts.pory"
end
# 538 "data/maps/JaggedPass/scripts.pory"

# 539 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Autumn::
# 540 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 541 "data/maps/JaggedPass/scripts.pory"
	end
# 542 "data/maps/JaggedPass/scripts.pory"

# 543 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_ShellyThanksForComing:
# 544 "data/maps/JaggedPass/scripts.pory"
	.string "Shelly: Thanks for coming.\p"
# 545 "data/maps/JaggedPass/scripts.pory"
	.string "What's that? An emblem dropped by\n"
# 546 "data/maps/JaggedPass/scripts.pory"
	.string "Team Magma at Mt. Pyre?\p"
# 547 "data/maps/JaggedPass/scripts.pory"
	.string "I suppose that explains why I couldn't\n"
# 548 "data/maps/JaggedPass/scripts.pory"
	.string "find my own way in!\p"
# 549 "data/maps/JaggedPass/scripts.pory"
	.string "Anyway, this the Magma Hideout.\p"
# 550 "data/maps/JaggedPass/scripts.pory"
	.string "Team Aqua believes that the legendary\n"
# 551 "data/maps/JaggedPass/scripts.pory"
	.string "Pokémon Groudon has been found here.\p"
# 552 "data/maps/JaggedPass/scripts.pory"
	.string "After holding your own in the company\n"
# 553 "data/maps/JaggedPass/scripts.pory"
	.string "of Archie and Maxie on Mt. Pyre,\p"
# 554 "data/maps/JaggedPass/scripts.pory"
	.string "I'm confident we find out what's going\n"
# 555 "data/maps/JaggedPass/scripts.pory"
	.string "on in there if we work together.\p"
# 556 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie, I understand that the two of\n"
# 557 "data/maps/JaggedPass/scripts.pory"
	.string "you are used to working as a team.\p"
# 558 "data/maps/JaggedPass/scripts.pory"
	.string "However, I'd appreciate it if you would\n"
# 559 "data/maps/JaggedPass/scripts.pory"
	.string "let me accompany {PLAYER} through the\l"
# 560 "data/maps/JaggedPass/scripts.pory"
	.string "hideout, and you wait at the entrance.$"
# 561 "data/maps/JaggedPass/scripts.pory"

# 562 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricIntro:
# 563 "data/maps/JaggedPass/scripts.pory"
	.string "MT. CHIMNEY's JAGGED PASS…\p"
# 564 "data/maps/JaggedPass/scripts.pory"
	.string "Now this is what I've always wanted\n"
# 565 "data/maps/JaggedPass/scripts.pory"
	.string "in a mountain.\p"
# 566 "data/maps/JaggedPass/scripts.pory"
	.string "This jagged bumpiness…\n"
# 567 "data/maps/JaggedPass/scripts.pory"
	.string "It rocks my soul!$"
# 568 "data/maps/JaggedPass/scripts.pory"

# 569 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricDefeat:
# 570 "data/maps/JaggedPass/scripts.pory"
	.string "Losing left me bitter!$"
# 571 "data/maps/JaggedPass/scripts.pory"

# 572 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricPostBattle:
# 573 "data/maps/JaggedPass/scripts.pory"
	.string "Yes, I did lose at POKéMON…\p"
# 574 "data/maps/JaggedPass/scripts.pory"
	.string "But, when it comes to the love of\n"
# 575 "data/maps/JaggedPass/scripts.pory"
	.string "the mountains, I have you beat!$"
# 576 "data/maps/JaggedPass/scripts.pory"

# 577 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaIntro:
# 578 "data/maps/JaggedPass/scripts.pory"
	.string "This place isn't your casual hike.\n"
# 579 "data/maps/JaggedPass/scripts.pory"
	.string "It's not suited for a picnic.$"
# 580 "data/maps/JaggedPass/scripts.pory"

# 581 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaDefeat:
# 582 "data/maps/JaggedPass/scripts.pory"
	.string "Ohhh, no!\n"
# 583 "data/maps/JaggedPass/scripts.pory"
	.string "The ground is too bumpy…$"
# 584 "data/maps/JaggedPass/scripts.pory"

# 585 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostBattle:
# 586 "data/maps/JaggedPass/scripts.pory"
	.string "Did you know?\p"
# 587 "data/maps/JaggedPass/scripts.pory"
	.string "Some people cleverly ride their\n"
# 588 "data/maps/JaggedPass/scripts.pory"
	.string "bicycles up this horribly bumpy pass.$"
# 589 "data/maps/JaggedPass/scripts.pory"

# 590 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRegister:
# 591 "data/maps/JaggedPass/scripts.pory"
	.string "Will you ever be back in this area?\n"
# 592 "data/maps/JaggedPass/scripts.pory"
	.string "If you do return, I'd like a rematch.$"
# 593 "data/maps/JaggedPass/scripts.pory"

# 594 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchIntro:
# 595 "data/maps/JaggedPass/scripts.pory"
	.string "Picnics are fun wherever you go.\n"
# 596 "data/maps/JaggedPass/scripts.pory"
	.string "Just like POKéMON!$"
# 597 "data/maps/JaggedPass/scripts.pory"

# 598 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchDefeat:
# 599 "data/maps/JaggedPass/scripts.pory"
	.string "I only lost because the ground is\n"
# 600 "data/maps/JaggedPass/scripts.pory"
	.string "too bumpy!$"
# 601 "data/maps/JaggedPass/scripts.pory"

# 602 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostRematch:
# 603 "data/maps/JaggedPass/scripts.pory"
	.string "I'll forget about losing and just\n"
# 604 "data/maps/JaggedPass/scripts.pory"
	.string "enjoy this bumpy hike.$"
# 605 "data/maps/JaggedPass/scripts.pory"

# 606 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanIntro:
# 607 "data/maps/JaggedPass/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\n"
# 608 "data/maps/JaggedPass/scripts.pory"
	.string "It's a good place for training.$"
# 609 "data/maps/JaggedPass/scripts.pory"

# 610 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanDefeat:
# 611 "data/maps/JaggedPass/scripts.pory"
	.string "It was all over while we were still\n"
# 612 "data/maps/JaggedPass/scripts.pory"
	.string "trying to find a good footing…$"
# 613 "data/maps/JaggedPass/scripts.pory"

# 614 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostBattle:
# 615 "data/maps/JaggedPass/scripts.pory"
	.string "If I had an ACRO BIKE, I'd be able to\n"
# 616 "data/maps/JaggedPass/scripts.pory"
	.string "jump ledges.$"
# 617 "data/maps/JaggedPass/scripts.pory"

# 618 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRegister:
# 619 "data/maps/JaggedPass/scripts.pory"
	.string "When I get more used to this bumpiness,\n"
# 620 "data/maps/JaggedPass/scripts.pory"
	.string "I'll be sure to win!\p"
# 621 "data/maps/JaggedPass/scripts.pory"
	.string "Can you register me in your POKéNAV?$"
# 622 "data/maps/JaggedPass/scripts.pory"

# 623 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchIntro:
# 624 "data/maps/JaggedPass/scripts.pory"
	.string "I got used to this bumpiness.\n"
# 625 "data/maps/JaggedPass/scripts.pory"
	.string "I sing while I climb now.$"
# 626 "data/maps/JaggedPass/scripts.pory"

# 627 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchDefeat:
# 628 "data/maps/JaggedPass/scripts.pory"
	.string "It's still not easy to battle on this\n"
# 629 "data/maps/JaggedPass/scripts.pory"
	.string "bumpy ground…$"
# 630 "data/maps/JaggedPass/scripts.pory"

# 631 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostRematch:
# 632 "data/maps/JaggedPass/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\n"
# 633 "data/maps/JaggedPass/scripts.pory"
	.string "in MAUVILLE CITY…$"
# 634 "data/maps/JaggedPass/scripts.pory"

# 635 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntIntro:
# 636 "data/maps/JaggedPass/scripts.pory"
	.string "Wah!\n"
# 637 "data/maps/JaggedPass/scripts.pory"
	.string "What are you doing here?\p"
# 638 "data/maps/JaggedPass/scripts.pory"
	.string "What am I doing in a place like this?\p"
# 639 "data/maps/JaggedPass/scripts.pory"
	.string "What business is it of yours?$"
# 640 "data/maps/JaggedPass/scripts.pory"

# 641 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntDefeat:
# 642 "data/maps/JaggedPass/scripts.pory"
	.string "Urrrgh…\p"
# 643 "data/maps/JaggedPass/scripts.pory"
	.string "I should've ducked into our HIDEOUT\n"
# 644 "data/maps/JaggedPass/scripts.pory"
	.string "right away…$"
# 645 "data/maps/JaggedPass/scripts.pory"

# 646 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GoWhereverYouWant:
# 647 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, oh-kay!\n"
# 648 "data/maps/JaggedPass/scripts.pory"
	.string "I admit it--you're strong!\p"
# 649 "data/maps/JaggedPass/scripts.pory"
	.string "Don't worry about me.\n"
# 650 "data/maps/JaggedPass/scripts.pory"
	.string "Go wherever you want!$"
# 651 "data/maps/JaggedPass/scripts.pory"

# 652 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_BoulderShakingInResponseToEmblem:
# 653 "data/maps/JaggedPass/scripts.pory"
	.string "Oh! This boulder is shaking in response\n"
# 654 "data/maps/JaggedPass/scripts.pory"
	.string "to the MAGMA EMBLEM!$"
# 655 "data/maps/JaggedPass/scripts.pory"

# 656 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioIntro:
# 657 "data/maps/JaggedPass/scripts.pory"
	.string "Aiyeeh! It's awfully scary to shoot\n"
# 658 "data/maps/JaggedPass/scripts.pory"
	.string "down the mountain in one go!$"
# 659 "data/maps/JaggedPass/scripts.pory"

# 660 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioDefeat:
# 661 "data/maps/JaggedPass/scripts.pory"
	.string "I feel like I'm falling apart…$"
# 662 "data/maps/JaggedPass/scripts.pory"

# 663 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioPostBattle:
# 664 "data/maps/JaggedPass/scripts.pory"
	.string "My bicycle bounced around so much,\n"
# 665 "data/maps/JaggedPass/scripts.pory"
	.string "my rear end's sore…$"
# 666 "data/maps/JaggedPass/scripts.pory"

# 667 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnIntro:
# 668 "data/maps/JaggedPass/scripts.pory"
	.string "I climb this hill every day.\n"
# 669 "data/maps/JaggedPass/scripts.pory"
	.string "I have confidence in my strength!$"
# 670 "data/maps/JaggedPass/scripts.pory"

# 671 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnDefeat:
# 672 "data/maps/JaggedPass/scripts.pory"
	.string "Hmm…\n"
# 673 "data/maps/JaggedPass/scripts.pory"
	.string "What went wrong?$"
# 674 "data/maps/JaggedPass/scripts.pory"

# 675 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnPostBattle:
# 676 "data/maps/JaggedPass/scripts.pory"
	.string "What is that odd rock protrusion\n"
# 677 "data/maps/JaggedPass/scripts.pory"
	.string "a little up the hill from here?$"
