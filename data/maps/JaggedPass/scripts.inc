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
.set LOCALID_MAXIE, 9
# 9 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_TABITHA, 10
# 10 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_COURTNEY, 11
# 11 "data/maps/JaggedPass/scripts.pory"

# 12 "data/maps/JaggedPass/scripts.pory"
JaggedPass_MapScripts::
# 13 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
# 14 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
# 15 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
# 16 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, JaggedPass_OnWarp
# 17 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JaggedPass_OnFrame
# 18 "data/maps/JaggedPass/scripts.pory"
	.byte 0
# 19 "data/maps/JaggedPass/scripts.pory"

# 20 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnFrame:
# 21 "data/maps/JaggedPass/scripts.pory"
	map_script_2 VAR_JAGGED_PASS_STATE, 6, JaggedPass_EventScript_GroudonReleased
# 22 "data/maps/JaggedPass/scripts.pory"
	.2byte 0
# 23 "data/maps/JaggedPass/scripts.pory"

# 24 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnWarp:
# 25 "data/maps/JaggedPass/scripts.pory"
	map_script_2 VAR_JAGGED_PASS_STATE, 6, JaggedPass_EventScript_GroudonReleasedAddEmmie
# 26 "data/maps/JaggedPass/scripts.pory"
	.2byte 0
# 27 "data/maps/JaggedPass/scripts.pory"

# 28 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GroudonReleasedAddEmmie::
# 29 "data/maps/JaggedPass/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 15, 19
# 30 "data/maps/JaggedPass/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_JAGGED_PASS
# 31 "data/maps/JaggedPass/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 32 "data/maps/JaggedPass/scripts.pory"
	turnobject OBJ_EVENT_ID_NPC_FOLLOWER, DIR_EAST
# 33 "data/maps/JaggedPass/scripts.pory"
	end
# 34 "data/maps/JaggedPass/scripts.pory"

# 35 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume:
# 36 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 37 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 38 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 2, JaggedPass_EventScript_CheckHasMagmaEmblem
# 39 "data/maps/JaggedPass/scripts.pory"
	end
# 40 "data/maps/JaggedPass/scripts.pory"

# 41 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem::
# 42 "data/maps/JaggedPass/scripts.pory"
	checkitem ITEM_MAGMA_EMBLEM
# 43 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
# 44 "data/maps/JaggedPass/scripts.pory"
	return
# 45 "data/maps/JaggedPass/scripts.pory"

# 46 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetReadyToOpenHideout::
# 47 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 3
# 48 "data/maps/JaggedPass/scripts.pory"
	return
# 49 "data/maps/JaggedPass/scripts.pory"

# 50 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnTransition:
# 51 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_ASH_WEATHER, 1, JaggedPass_EventScript_SetWeatherAsh
# 52 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 53 "data/maps/JaggedPass/scripts.pory"
	end
# 54 "data/maps/JaggedPass/scripts.pory"

# 55 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherAsh::
# 56 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 57 "data/maps/JaggedPass/scripts.pory"
	doweather
# 58 "data/maps/JaggedPass/scripts.pory"
	return
# 59 "data/maps/JaggedPass/scripts.pory"

# 60 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherIntenseSun::
# 61 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_DROUGHT
# 62 "data/maps/JaggedPass/scripts.pory"
	doweather
# 63 "data/maps/JaggedPass/scripts.pory"
	return
# 64 "data/maps/JaggedPass/scripts.pory"

# 65 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad:
# 66 "data/maps/JaggedPass/scripts.pory"
	goto_if_le VAR_JAGGED_PASS_STATE, 2, JaggedPass_EventScript_ConcealHideoutEntrance
# 67 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 2, JaggedPass_EventScript_CheckHasMagmaEmblem
# 68 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, JaggedPass_EventScript_SetWeatherIntenseSun
# 69 "data/maps/JaggedPass/scripts.pory"
	end
# 70 "data/maps/JaggedPass/scripts.pory"

# 71 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GroudonReleased::
# 72 "data/maps/JaggedPass/scripts.pory"
	lockall
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
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 81 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 82 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_MaxieTabithaGoToLilycove, MSGBOX_DEFAULT
# 83 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 84 "data/maps/JaggedPass/scripts.pory"
	delay 4
# 85 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 86 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 87 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_TabithaYouGotIt, MSGBOX_DEFAULT
# 88 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 89 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 90 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 91 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 92 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 0, 1
# 93 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 1, 0
# 94 "data/maps/JaggedPass/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 95 "data/maps/JaggedPass/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 96 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_TABITHA
# 97 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 98 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkUp
# 99 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 100 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 101 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 102 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_CourtneyWeShouldGo, MSGBOX_DEFAULT
# 103 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 104 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 105 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 106 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_MaxieYoureRight, MSGBOX_DEFAULT
# 107 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 108 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 109 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 110 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 111 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 0, 1
# 112 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 1, -1
# 113 "data/maps/JaggedPass/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 114 "data/maps/JaggedPass/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 115 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_COURTNEY
# 116 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 117 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkLeft
# 118 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 119 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_MaxieYouLose, MSGBOX_DEFAULT
# 120 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 121 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterDown
# 122 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 123 "data/maps/JaggedPass/scripts.pory"
	delay 20
# 124 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 0, 0
# 125 "data/maps/JaggedPass/scripts.pory"
	setfieldeffectargument 1, -1
# 126 "data/maps/JaggedPass/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 127 "data/maps/JaggedPass/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 128 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_MAXIE
# 129 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAXIE
# 130 "data/maps/JaggedPass/scripts.pory"
	delay 16
# 131 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 132 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 133 "data/maps/JaggedPass/scripts.pory"
	end
# 134 "data/maps/JaggedPass/scripts.pory"
	@state 7
# 135 "data/maps/JaggedPass/scripts.pory"

# 136 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_MaxieTabithaGoToLilycove:
# 137 "data/maps/JaggedPass/scripts.pory"
	.string "Maxie: This is exactly as we envisaged!\p"
# 138 "data/maps/JaggedPass/scripts.pory"
	.string "Now we just need to ensure Team Aqua\n"
# 139 "data/maps/JaggedPass/scripts.pory"
	.string "cannot awaken Kyogre, else all our\l"
# 140 "data/maps/JaggedPass/scripts.pory"
	.string "efforts will have been for nothing.\p"
# 141 "data/maps/JaggedPass/scripts.pory"
	.string "Tabitha, go to their hideout in Lilycove\n"
# 142 "data/maps/JaggedPass/scripts.pory"
	.string "and try to uncover Team Aqua's plans.$"
# 143 "data/maps/JaggedPass/scripts.pory"

# 144 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_TabithaYouGotIt:
# 145 "data/maps/JaggedPass/scripts.pory"
	.string "Tabitha: You got it boss!$"
# 146 "data/maps/JaggedPass/scripts.pory"
	
# 147 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_CourtneyWeShouldGo:
# 148 "data/maps/JaggedPass/scripts.pory"
	.string "Courtney: Sir, we should get to Mossdeep.$"
# 149 "data/maps/JaggedPass/scripts.pory"

# 150 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_MaxieYoureRight:
# 151 "data/maps/JaggedPass/scripts.pory"
	.string "Maxie: You're right. Mt. Chimney has but\n"
# 152 "data/maps/JaggedPass/scripts.pory"
	.string "one purpose now.\p"
# 153 "data/maps/JaggedPass/scripts.pory"
	.string "Let us take our leave.$"
# 154 "data/maps/JaggedPass/scripts.pory"

# 155 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_MaxieYouLose:
# 156 "data/maps/JaggedPass/scripts.pory"
	.string "Maxie: As for you, it appears you lose\n"
# 157 "data/maps/JaggedPass/scripts.pory"
	.string "this time.\p"
# 158 "data/maps/JaggedPass/scripts.pory"
	.string "Despite everything, I truly do wish you\n"
# 159 "data/maps/JaggedPass/scripts.pory"
	.string "both the very best.\p"
# 160 "data/maps/JaggedPass/scripts.pory"
	.string "Farewell…$"
# 161 "data/maps/JaggedPass/scripts.pory"

# 162 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ConcealHideoutEntrance::
# 163 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
# 164 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
# 165 "data/maps/JaggedPass/scripts.pory"
	end
# 166 "data/maps/JaggedPass/scripts.pory"

# 167 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ShellyTrigger::
# 168 "data/maps/JaggedPass/scripts.pory"
	lockall
# 169 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 170 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 171 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 172 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceLeft
# 173 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellyThanksForComing, MSGBOX_DEFAULT
# 174 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 175 "data/maps/JaggedPass/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 176 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 15, JaggedPass_EventScript_EmmieApproachShelly1
# 177 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 178 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 179 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EmmieNoWayTrustingYou, MSGBOX_DEFAULT
# 180 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 181 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 182 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 183 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 184 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 185 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 186 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 187 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, JaggedPass_EventScript_EmmieArchieDefeated
# 188 "data/maps/JaggedPass/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, JaggedPass_EventScript_EmmieMaxieDefeated
# 189 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 190 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 191 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
# 192 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_EMMIE_BATTLE_2
# 193 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_JAGGED_PASS_SHELLY_INTRO_GIVEN
# 194 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_EMMIE_BATTLE_STATE, 3
# 195 "data/maps/JaggedPass/scripts.pory"
	goto Common_EventScript_EmmieBattle
# 196 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 197 "data/maps/JaggedPass/scripts.pory"
	end
# 198 "data/maps/JaggedPass/scripts.pory"

# 199 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieArchieDefeated:
# 200 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EmmieOnlyWayIWillAgreeArchieDefeated, MSGBOX_DEFAULT
# 201 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 202 "data/maps/JaggedPass/scripts.pory"
	return
# 203 "data/maps/JaggedPass/scripts.pory"

# 204 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieMaxieDefeated:
# 205 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EmmieOnlyWayIWillAgreeArchieDefeated, MSGBOX_DEFAULT
# 206 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 207 "data/maps/JaggedPass/scripts.pory"
	return
# 208 "data/maps/JaggedPass/scripts.pory"

# 209 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EmmieOnlyWayIWillAgreeArchieDefeated:
# 210 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie: I'm sorry, what? You'll be okay by\n"
# 211 "data/maps/JaggedPass/scripts.pory"
	.string "yourself?\p"
# 212 "data/maps/JaggedPass/scripts.pory"
	.string "You have grown a lot since we left home,\n"
# 213 "data/maps/JaggedPass/scripts.pory"
	.string "and in fairness you held your own on\l"
# 214 "data/maps/JaggedPass/scripts.pory"
	.string "Mt Pyre, but that was alongside Maxie.\p"
# 215 "data/maps/JaggedPass/scripts.pory"
	.string "… Okay. The only way I will agree to \n"
# 216 "data/maps/JaggedPass/scripts.pory"
	.string "this is if the two of you can beat me.\p"
# 217 "data/maps/JaggedPass/scripts.pory"
	.string "{PLAYER}, in all honesty I went easy on\n"
# 218 "data/maps/JaggedPass/scripts.pory"
	.string "you outside Mr Briney's house.\p"
# 219 "data/maps/JaggedPass/scripts.pory"
	.string "This time, for your own good, I'm not\n"
# 220 "data/maps/JaggedPass/scripts.pory"
	.string "going to hold back.$"
# 221 "data/maps/JaggedPass/scripts.pory"

# 222 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EmmieOnlyWayIWillAgreeMaxieDefeated:
# 223 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie: I'm sorry, what? You'll be okay by\n"
# 224 "data/maps/JaggedPass/scripts.pory"
	.string "yourself?\p"
# 225 "data/maps/JaggedPass/scripts.pory"
	.string "You have grown a lot since we left home,\n"
# 226 "data/maps/JaggedPass/scripts.pory"
	.string "and in fairness you held your own on\l"
# 227 "data/maps/JaggedPass/scripts.pory"
	.string "Mt Pyre, but that was alongside Archie.\p"
# 228 "data/maps/JaggedPass/scripts.pory"
	.string "… Okay. The only way I will agree to \n"
# 229 "data/maps/JaggedPass/scripts.pory"
	.string "this is if the two of you can beat me.\p"
# 230 "data/maps/JaggedPass/scripts.pory"
	.string "{PLAYER}, in all honesty I went easy on\n"
# 231 "data/maps/JaggedPass/scripts.pory"
	.string "you outside Mr Briney's house.\p"
# 232 "data/maps/JaggedPass/scripts.pory"
	.string "This time, for your own good, I'm not\n"
# 233 "data/maps/JaggedPass/scripts.pory"
	.string "going to hold back.$"
# 234 "data/maps/JaggedPass/scripts.pory"

# 235 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShelly1::
# 236 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShelly1
# 237 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 238 "data/maps/JaggedPass/scripts.pory"
	return
# 239 "data/maps/JaggedPass/scripts.pory"

# 240 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EmmieNoWayTrustingYou:
# 241 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie: There's no way I'm trusting you to\n"
# 242 "data/maps/JaggedPass/scripts.pory"
	.string "take care of {PLAYER} after what I've seen\l"
# 243 "data/maps/JaggedPass/scripts.pory"
	.string "Team Aqua do.$"
# 244 "data/maps/JaggedPass/scripts.pory"

# 245 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShelly1:
# 246 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 247 "data/maps/JaggedPass/scripts.pory"
	walk_right
# 248 "data/maps/JaggedPass/scripts.pory"
	step_end
# 249 "data/maps/JaggedPass/scripts.pory"

# 250 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Shelly::
# 251 "data/maps/JaggedPass/scripts.pory"
	lockall
# 252 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_EMMIE_BATTLE_2_DEFEATED, JaggedPass_EventScript_ShellySeeYouInside
# 253 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_JAGGED_PASS_SHELLY_INTRO_GIVEN, JaggedPass_EventScript_ShellyLetsGetThisOver
# 254 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, JaggedPass_EventScript_PlayerApproachShellyWest
# 255 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, JaggedPass_EventScript_PlayerApproachShellyNorth
# 256 "data/maps/JaggedPass/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 257 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 19, JaggedPass_EventScript_EmmieApproachShellyStart1
# 258 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 18, JaggedPass_EventScript_EmmieApproachShellyStart2
# 259 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 17, JaggedPass_EventScript_EmmieApproachShellyStart3
# 260 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_TEMP_3, 16, JaggedPass_EventScript_EmmieApproachShellyStart4
# 261 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 262 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_ShellyTrigger
# 263 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 264 "data/maps/JaggedPass/scripts.pory"
	end
# 265 "data/maps/JaggedPass/scripts.pory"

# 266 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ShellyLetsGetThisOver::
# 267 "data/maps/JaggedPass/scripts.pory"
	faceplayer
# 268 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellyLetsGetThisOver, MSGBOX_DEFAULT
# 269 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 270 "data/maps/JaggedPass/scripts.pory"
	end
# 271 "data/maps/JaggedPass/scripts.pory"

# 272 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ShellySeeYouInside::
# 273 "data/maps/JaggedPass/scripts.pory"
	faceplayer
# 274 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_ShellySeeYouInside, MSGBOX_DEFAULT
# 275 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 276 "data/maps/JaggedPass/scripts.pory"
	end
# 277 "data/maps/JaggedPass/scripts.pory"

# 278 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_ShellyLetsGetThisOver:
# 279 "data/maps/JaggedPass/scripts.pory"
	.string "Shelly: We really haven't got time for\n"
# 280 "data/maps/JaggedPass/scripts.pory"
	.string "this. Let's get it over and done with.$"
# 281 "data/maps/JaggedPass/scripts.pory"

# 282 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_ShellySeeYouInside:
# 283 "data/maps/JaggedPass/scripts.pory"
	.string "Shelly: Hurry up and go inside. I will\n"
# 284 "data/maps/JaggedPass/scripts.pory"
	.string "see you in there.$"
# 285 "data/maps/JaggedPass/scripts.pory"

# 286 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShellyStart1::
# 287 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShellyStart1
# 288 "data/maps/JaggedPass/scripts.pory"
	return
# 289 "data/maps/JaggedPass/scripts.pory"

# 290 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShellyStart2::
# 291 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShellyStart2
# 292 "data/maps/JaggedPass/scripts.pory"
	return
# 293 "data/maps/JaggedPass/scripts.pory"

# 294 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShellyStart3::
# 295 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShellyStart3
# 296 "data/maps/JaggedPass/scripts.pory"
	return
# 297 "data/maps/JaggedPass/scripts.pory"

# 298 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EmmieApproachShellyStart4::
# 299 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JaggedPass_Movement_EmmieApproachShellyStart4
# 300 "data/maps/JaggedPass/scripts.pory"
	return
# 301 "data/maps/JaggedPass/scripts.pory"

# 302 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShellyStart1:
# 303 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 304 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 305 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 306 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 307 "data/maps/JaggedPass/scripts.pory"
	face_right
# 308 "data/maps/JaggedPass/scripts.pory"
	step_end
# 309 "data/maps/JaggedPass/scripts.pory"

# 310 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShellyStart2:
# 311 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 312 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 313 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 314 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 315 "data/maps/JaggedPass/scripts.pory"
	face_right
# 316 "data/maps/JaggedPass/scripts.pory"
	step_end
# 317 "data/maps/JaggedPass/scripts.pory"

# 318 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShellyStart3:
# 319 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 320 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 321 "data/maps/JaggedPass/scripts.pory"
	face_right
# 322 "data/maps/JaggedPass/scripts.pory"
	step_end
# 323 "data/maps/JaggedPass/scripts.pory"

# 324 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_EmmieApproachShellyStart4:
# 325 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 326 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 327 "data/maps/JaggedPass/scripts.pory"
	face_right
# 328 "data/maps/JaggedPass/scripts.pory"
	step_end
# 329 "data/maps/JaggedPass/scripts.pory"

# 330 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_PlayerApproachShellyNorth::
# 331 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JaggedPass_Movement_PlayerApproachShellyNorth
# 332 "data/maps/JaggedPass/scripts.pory"
	return
# 333 "data/maps/JaggedPass/scripts.pory"
	
# 334 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_PlayerApproachShellyWest::
# 335 "data/maps/JaggedPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JaggedPass_Movement_PlayerApproachShellyWest
# 336 "data/maps/JaggedPass/scripts.pory"
	return
# 337 "data/maps/JaggedPass/scripts.pory"

# 338 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_PlayerApproachShellyNorth:
# 339 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 340 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 341 "data/maps/JaggedPass/scripts.pory"
	step_end
# 342 "data/maps/JaggedPass/scripts.pory"

# 343 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Movement_PlayerApproachShellyWest:
# 344 "data/maps/JaggedPass/scripts.pory"
	walk_down
# 345 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 346 "data/maps/JaggedPass/scripts.pory"
	walk_left
# 347 "data/maps/JaggedPass/scripts.pory"
	walk_up
# 348 "data/maps/JaggedPass/scripts.pory"
	step_end
# 349 "data/maps/JaggedPass/scripts.pory"

# 350 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_OpenMagmaHideout::
# 351 "data/maps/JaggedPass/scripts.pory"
	lockall
# 352 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 353 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 354 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 355 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 356 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 357 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 358 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 359 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 360 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 361 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 362 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16  @ num shakes
# 363 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3   @ shake delay
# 364 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 365 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 366 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 367 "data/maps/JaggedPass/scripts.pory"
	waitse
# 368 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 369 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
# 370 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 371 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 372 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceLeft
# 373 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 374 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 375 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 376 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 377 "data/maps/JaggedPass/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 378 "data/maps/JaggedPass/scripts.pory"
	waitse
# 379 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 380 "data/maps/JaggedPass/scripts.pory"
	end
# 381 "data/maps/JaggedPass/scripts.pory"

# 382 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard::
# 383 "data/maps/JaggedPass/scripts.pory"
	lockall
# 384 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
# 385 "data/maps/JaggedPass/scripts.pory"
	waitse
# 386 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 387 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 388 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 389 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_Delay48
# 390 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 391 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 392 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 393 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 394 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 395 "data/maps/JaggedPass/scripts.pory"
	multi_2p_vs_1 TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat, PARTNER_EMMIE
# 396 "data/maps/JaggedPass/scripts.pory"
	switch VAR_RESULT
# 397 "data/maps/JaggedPass/scripts.pory"
	case 1, JaggedPass_EventScript_MagmaGruntVictory
# 398 "data/maps/JaggedPass/scripts.pory"
	fadescreen FADE_TO_BLACK
# 399 "data/maps/JaggedPass/scripts.pory"
	special SetCB2WhiteOut
# 400 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 401 "data/maps/JaggedPass/scripts.pory"

# 402 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaGruntVictory::
# 403 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 404 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 405 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 406 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 407 "data/maps/JaggedPass/scripts.pory"
	end
# 408 "data/maps/JaggedPass/scripts.pory"

# 409 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GuardDefeated::
# 410 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 411 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 412 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 413 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 414 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 415 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 416 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 417 "data/maps/JaggedPass/scripts.pory"
	end
# 418 "data/maps/JaggedPass/scripts.pory"

# 419 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDiana::
# 420 "data/maps/JaggedPass/scripts.pory"
lockall
# 421 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_ERIC
# 422 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 423 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 424 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 425 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 426 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 427 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 428 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_EricIntro MSGBOX_AUTOCLOSE
# 429 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_DIANA
# 430 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 431 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 432 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 433 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 434 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 435 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 436 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_DianaIntro, MSGBOX_AUTOCLOSE
# 437 "data/maps/JaggedPass/scripts.pory"
goto JaggedPass_EventScript_EricDianaDoMultiBattle
# 438 "data/maps/JaggedPass/scripts.pory"
releaseall
# 439 "data/maps/JaggedPass/scripts.pory"
end
# 440 "data/maps/JaggedPass/scripts.pory"

# 441 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDianaDoMultiBattle::
# 442 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 443 "data/maps/JaggedPass/scripts.pory"
multi_2p_vs_2 TRAINER_ERIC, JaggedPass_Text_EricDefeat, TRAINER_DIANA_1, JaggedPass_Text_DianaDefeat, PARTNER_EMMIE
# 444 "data/maps/JaggedPass/scripts.pory"
switch VAR_RESULT
# 445 "data/maps/JaggedPass/scripts.pory"
case 1, JaggedPass_EventScript_EricDianaVictory
# 446 "data/maps/JaggedPass/scripts.pory"
fadescreen FADE_TO_BLACK
# 447 "data/maps/JaggedPass/scripts.pory"
special SetCB2WhiteOut
# 448 "data/maps/JaggedPass/scripts.pory"
waitstate
# 449 "data/maps/JaggedPass/scripts.pory"

# 450 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EricDianaVictory::
# 451 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 452 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 453 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 454 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 455 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 456 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
# 457 "data/maps/JaggedPass/scripts.pory"
addvar VAR_JAGGED_PASS_STATE, 1
# 458 "data/maps/JaggedPass/scripts.pory"
end
# 459 "data/maps/JaggedPass/scripts.pory"

# 460 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Eric::
# 461 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 462 "data/maps/JaggedPass/scripts.pory"
	end
# 463 "data/maps/JaggedPass/scripts.pory"

# 464 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana::
# 465 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 466 "data/maps/JaggedPass/scripts.pory"
	release
# 467 "data/maps/JaggedPass/scripts.pory"
	end
# 468 "data/maps/JaggedPass/scripts.pory"

# 469 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterDiana::
# 470 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 471 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 472 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 473 "data/maps/JaggedPass/scripts.pory"
	release
# 474 "data/maps/JaggedPass/scripts.pory"
	end
# 475 "data/maps/JaggedPass/scripts.pory"

# 476 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_DianaRematch::
# 477 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 478 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
# 479 "data/maps/JaggedPass/scripts.pory"
	end
# 480 "data/maps/JaggedPass/scripts.pory"

# 481 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan::
# 482 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
# 483 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 484 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
# 485 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 486 "data/maps/JaggedPass/scripts.pory"
	release
# 487 "data/maps/JaggedPass/scripts.pory"
	end
# 488 "data/maps/JaggedPass/scripts.pory"

# 489 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterEthan::
# 490 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 491 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 492 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 493 "data/maps/JaggedPass/scripts.pory"
	release
# 494 "data/maps/JaggedPass/scripts.pory"
	end
# 495 "data/maps/JaggedPass/scripts.pory"

# 496 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EthanRematch::
# 497 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 498 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
# 499 "data/maps/JaggedPass/scripts.pory"
	end
# 500 "data/maps/JaggedPass/scripts.pory"

# 501 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Julio::
# 502 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 503 "data/maps/JaggedPass/scripts.pory"
	end
# 504 "data/maps/JaggedPass/scripts.pory"

# 505 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulio::
# 506 "data/maps/JaggedPass/scripts.pory"
lockall
# 507 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_AUTUMN
# 508 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 509 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 510 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 511 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 512 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 513 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 514 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_AutumnIntro MSGBOX_AUTOCLOSE
# 515 "data/maps/JaggedPass/scripts.pory"
setvar VAR_0x8008, LOCALID_JULIO
# 516 "data/maps/JaggedPass/scripts.pory"
playse SE_PIN
# 517 "data/maps/JaggedPass/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 518 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 519 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 520 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 521 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 522 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_JulioIntro, MSGBOX_AUTOCLOSE
# 523 "data/maps/JaggedPass/scripts.pory"
goto JaggedPass_EventScript_AutumnJulioDoMultiBattle
# 524 "data/maps/JaggedPass/scripts.pory"
releaseall
# 525 "data/maps/JaggedPass/scripts.pory"
end
# 526 "data/maps/JaggedPass/scripts.pory"

# 527 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulioDoMultiBattle::
# 528 "data/maps/JaggedPass/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 529 "data/maps/JaggedPass/scripts.pory"
multi_2p_vs_2 TRAINER_AUTUMN, JaggedPass_Text_AutumnDefeat, TRAINER_JULIO, JaggedPass_Text_JulioDefeat, PARTNER_EMMIE
# 530 "data/maps/JaggedPass/scripts.pory"
switch VAR_RESULT
# 531 "data/maps/JaggedPass/scripts.pory"
case 1, JaggedPass_EventScript_AutumnJulioVictory
# 532 "data/maps/JaggedPass/scripts.pory"
fadescreen FADE_TO_BLACK
# 533 "data/maps/JaggedPass/scripts.pory"
special SetCB2WhiteOut
# 534 "data/maps/JaggedPass/scripts.pory"
waitstate
# 535 "data/maps/JaggedPass/scripts.pory"

# 536 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_AutumnJulioVictory::
# 537 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 538 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 539 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 540 "data/maps/JaggedPass/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 541 "data/maps/JaggedPass/scripts.pory"
waitmovement 0
# 542 "data/maps/JaggedPass/scripts.pory"
msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 543 "data/maps/JaggedPass/scripts.pory"
addvar VAR_JAGGED_PASS_STATE, 1
# 544 "data/maps/JaggedPass/scripts.pory"
end
# 545 "data/maps/JaggedPass/scripts.pory"

# 546 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Autumn::
# 547 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 548 "data/maps/JaggedPass/scripts.pory"
	end
# 549 "data/maps/JaggedPass/scripts.pory"

# 550 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_ShellyThanksForComing:
# 551 "data/maps/JaggedPass/scripts.pory"
	.string "Shelly: Thanks for coming.\p"
# 552 "data/maps/JaggedPass/scripts.pory"
	.string "What's that? An emblem dropped by\n"
# 553 "data/maps/JaggedPass/scripts.pory"
	.string "Team Magma at Mt. Pyre?\p"
# 554 "data/maps/JaggedPass/scripts.pory"
	.string "I suppose that explains why I couldn't\n"
# 555 "data/maps/JaggedPass/scripts.pory"
	.string "find my own way in!\p"
# 556 "data/maps/JaggedPass/scripts.pory"
	.string "Anyway, this the Magma Hideout.\p"
# 557 "data/maps/JaggedPass/scripts.pory"
	.string "Team Aqua believes that the legendary\n"
# 558 "data/maps/JaggedPass/scripts.pory"
	.string "Pokémon Groudon has been found here.\p"
# 559 "data/maps/JaggedPass/scripts.pory"
	.string "After holding your own in the company\n"
# 560 "data/maps/JaggedPass/scripts.pory"
	.string "of Archie and Maxie on Mt. Pyre,\p"
# 561 "data/maps/JaggedPass/scripts.pory"
	.string "I'm confident we will find out what's\n"
# 562 "data/maps/JaggedPass/scripts.pory"
	.string "going on in there if we work together.\p"
# 563 "data/maps/JaggedPass/scripts.pory"
	.string "Emmie, I understand that the two of\n"
# 564 "data/maps/JaggedPass/scripts.pory"
	.string "you are used to working as a team.\p"
# 565 "data/maps/JaggedPass/scripts.pory"
	.string "However, I'd appreciate it if you would\n"
# 566 "data/maps/JaggedPass/scripts.pory"
	.string "let me accompany {PLAYER} through the\l"
# 567 "data/maps/JaggedPass/scripts.pory"
	.string "hideout, and you wait at the entrance.$"
# 568 "data/maps/JaggedPass/scripts.pory"

# 569 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricIntro:
# 570 "data/maps/JaggedPass/scripts.pory"
	.string "MT. CHIMNEY's JAGGED PASS…\p"
# 571 "data/maps/JaggedPass/scripts.pory"
	.string "Now this is what I've always wanted\n"
# 572 "data/maps/JaggedPass/scripts.pory"
	.string "in a mountain.\p"
# 573 "data/maps/JaggedPass/scripts.pory"
	.string "This jagged bumpiness…\n"
# 574 "data/maps/JaggedPass/scripts.pory"
	.string "It rocks my soul!$"
# 575 "data/maps/JaggedPass/scripts.pory"

# 576 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricDefeat:
# 577 "data/maps/JaggedPass/scripts.pory"
	.string "Losing left me bitter!$"
# 578 "data/maps/JaggedPass/scripts.pory"

# 579 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricPostBattle:
# 580 "data/maps/JaggedPass/scripts.pory"
	.string "Yes, I did lose at POKéMON…\p"
# 581 "data/maps/JaggedPass/scripts.pory"
	.string "But, when it comes to the love of\n"
# 582 "data/maps/JaggedPass/scripts.pory"
	.string "the mountains, I have you beat!$"
# 583 "data/maps/JaggedPass/scripts.pory"

# 584 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaIntro:
# 585 "data/maps/JaggedPass/scripts.pory"
	.string "This place isn't your casual hike.\n"
# 586 "data/maps/JaggedPass/scripts.pory"
	.string "It's not suited for a picnic.$"
# 587 "data/maps/JaggedPass/scripts.pory"

# 588 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaDefeat:
# 589 "data/maps/JaggedPass/scripts.pory"
	.string "Ohhh, no!\n"
# 590 "data/maps/JaggedPass/scripts.pory"
	.string "The ground is too bumpy…$"
# 591 "data/maps/JaggedPass/scripts.pory"

# 592 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostBattle:
# 593 "data/maps/JaggedPass/scripts.pory"
	.string "Did you know?\p"
# 594 "data/maps/JaggedPass/scripts.pory"
	.string "Some people cleverly ride their\n"
# 595 "data/maps/JaggedPass/scripts.pory"
	.string "bicycles up this horribly bumpy pass.$"
# 596 "data/maps/JaggedPass/scripts.pory"

# 597 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRegister:
# 598 "data/maps/JaggedPass/scripts.pory"
	.string "Will you ever be back in this area?\n"
# 599 "data/maps/JaggedPass/scripts.pory"
	.string "If you do return, I'd like a rematch.$"
# 600 "data/maps/JaggedPass/scripts.pory"

# 601 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchIntro:
# 602 "data/maps/JaggedPass/scripts.pory"
	.string "Picnics are fun wherever you go.\n"
# 603 "data/maps/JaggedPass/scripts.pory"
	.string "Just like POKéMON!$"
# 604 "data/maps/JaggedPass/scripts.pory"

# 605 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchDefeat:
# 606 "data/maps/JaggedPass/scripts.pory"
	.string "I only lost because the ground is\n"
# 607 "data/maps/JaggedPass/scripts.pory"
	.string "too bumpy!$"
# 608 "data/maps/JaggedPass/scripts.pory"

# 609 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostRematch:
# 610 "data/maps/JaggedPass/scripts.pory"
	.string "I'll forget about losing and just\n"
# 611 "data/maps/JaggedPass/scripts.pory"
	.string "enjoy this bumpy hike.$"
# 612 "data/maps/JaggedPass/scripts.pory"

# 613 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanIntro:
# 614 "data/maps/JaggedPass/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\n"
# 615 "data/maps/JaggedPass/scripts.pory"
	.string "It's a good place for training.$"
# 616 "data/maps/JaggedPass/scripts.pory"

# 617 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanDefeat:
# 618 "data/maps/JaggedPass/scripts.pory"
	.string "It was all over while we were still\n"
# 619 "data/maps/JaggedPass/scripts.pory"
	.string "trying to find a good footing…$"
# 620 "data/maps/JaggedPass/scripts.pory"

# 621 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostBattle:
# 622 "data/maps/JaggedPass/scripts.pory"
	.string "If I had an ACRO BIKE, I'd be able to\n"
# 623 "data/maps/JaggedPass/scripts.pory"
	.string "jump ledges.$"
# 624 "data/maps/JaggedPass/scripts.pory"

# 625 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRegister:
# 626 "data/maps/JaggedPass/scripts.pory"
	.string "When I get more used to this bumpiness,\n"
# 627 "data/maps/JaggedPass/scripts.pory"
	.string "I'll be sure to win!\p"
# 628 "data/maps/JaggedPass/scripts.pory"
	.string "Can you register me in your POKéNAV?$"
# 629 "data/maps/JaggedPass/scripts.pory"

# 630 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchIntro:
# 631 "data/maps/JaggedPass/scripts.pory"
	.string "I got used to this bumpiness.\n"
# 632 "data/maps/JaggedPass/scripts.pory"
	.string "I sing while I climb now.$"
# 633 "data/maps/JaggedPass/scripts.pory"

# 634 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchDefeat:
# 635 "data/maps/JaggedPass/scripts.pory"
	.string "It's still not easy to battle on this\n"
# 636 "data/maps/JaggedPass/scripts.pory"
	.string "bumpy ground…$"
# 637 "data/maps/JaggedPass/scripts.pory"

# 638 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostRematch:
# 639 "data/maps/JaggedPass/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\n"
# 640 "data/maps/JaggedPass/scripts.pory"
	.string "in MAUVILLE CITY…$"
# 641 "data/maps/JaggedPass/scripts.pory"

# 642 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntIntro:
# 643 "data/maps/JaggedPass/scripts.pory"
	.string "Wah!\n"
# 644 "data/maps/JaggedPass/scripts.pory"
	.string "What are you doing here?\p"
# 645 "data/maps/JaggedPass/scripts.pory"
	.string "What am I doing in a place like this?\p"
# 646 "data/maps/JaggedPass/scripts.pory"
	.string "What business is it of yours?$"
# 647 "data/maps/JaggedPass/scripts.pory"

# 648 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntDefeat:
# 649 "data/maps/JaggedPass/scripts.pory"
	.string "Urrrgh…\p"
# 650 "data/maps/JaggedPass/scripts.pory"
	.string "I should've ducked into our HIDEOUT\n"
# 651 "data/maps/JaggedPass/scripts.pory"
	.string "right away…$"
# 652 "data/maps/JaggedPass/scripts.pory"

# 653 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GoWhereverYouWant:
# 654 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, oh-kay!\n"
# 655 "data/maps/JaggedPass/scripts.pory"
	.string "I admit it--you're strong!\p"
# 656 "data/maps/JaggedPass/scripts.pory"
	.string "Don't worry about me.\n"
# 657 "data/maps/JaggedPass/scripts.pory"
	.string "Go wherever you want!$"
# 658 "data/maps/JaggedPass/scripts.pory"

# 659 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_BoulderShakingInResponseToEmblem:
# 660 "data/maps/JaggedPass/scripts.pory"
	.string "Oh! This boulder is shaking in response\n"
# 661 "data/maps/JaggedPass/scripts.pory"
	.string "to the MAGMA EMBLEM!$"
# 662 "data/maps/JaggedPass/scripts.pory"

# 663 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioIntro:
# 664 "data/maps/JaggedPass/scripts.pory"
	.string "Aiyeeh! It's awfully scary to shoot\n"
# 665 "data/maps/JaggedPass/scripts.pory"
	.string "down the mountain in one go!$"
# 666 "data/maps/JaggedPass/scripts.pory"

# 667 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioDefeat:
# 668 "data/maps/JaggedPass/scripts.pory"
	.string "I feel like I'm falling apart…$"
# 669 "data/maps/JaggedPass/scripts.pory"

# 670 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioPostBattle:
# 671 "data/maps/JaggedPass/scripts.pory"
	.string "My bicycle bounced around so much,\n"
# 672 "data/maps/JaggedPass/scripts.pory"
	.string "my rear end's sore…$"
# 673 "data/maps/JaggedPass/scripts.pory"

# 674 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnIntro:
# 675 "data/maps/JaggedPass/scripts.pory"
	.string "I climb this hill every day.\n"
# 676 "data/maps/JaggedPass/scripts.pory"
	.string "I have confidence in my strength!$"
# 677 "data/maps/JaggedPass/scripts.pory"

# 678 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnDefeat:
# 679 "data/maps/JaggedPass/scripts.pory"
	.string "Hmm…\n"
# 680 "data/maps/JaggedPass/scripts.pory"
	.string "What went wrong?$"
# 681 "data/maps/JaggedPass/scripts.pory"

# 682 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnPostBattle:
# 683 "data/maps/JaggedPass/scripts.pory"
	.string "What is that odd rock protrusion\n"
# 684 "data/maps/JaggedPass/scripts.pory"
	.string "a little up the hill from here?$"
