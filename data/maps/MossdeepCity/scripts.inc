# 1 "data/maps/MossdeepCity/scripts.pory"

# 2 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_1, 10
# 3 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_2, 11
# 4 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_3, 12
# 5 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_4, 13
# 6 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_MAXIE, 14
# 7 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_SCOTT, 16
# 8 "data/maps/MossdeepCity/scripts.pory"

# 9 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_MapScripts::
# 10 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
# 11 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_OnFrame
# 12 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 13 "data/maps/MossdeepCity/scripts.pory"

# 14 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnFrame:
# 15 "data/maps/MossdeepCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 50, MossdeepCity_EventScript_ProgressEmmieState
# 16 "data/maps/MossdeepCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 52, MossdeepCity_EventScript_ProgressEmmieState
# 17 "data/maps/MossdeepCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 55, MossdeepCity_EventScript_ProgressEmmieState2
# 18 "data/maps/MossdeepCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 56, MossdeepCity_EventScript_ProgressEmmieState2
# 19 "data/maps/MossdeepCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 58, MossdeepCity_EventScript_ProgressEmmieStateReturnToSFC
# 20 "data/maps/MossdeepCity/scripts.pory"
	.2byte 0
# 21 "data/maps/MossdeepCity/scripts.pory"

# 22 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ProgressEmmieStateReturnToSFC::
# 23 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 59
# 24 "data/maps/MossdeepCity/scripts.pory"
	return
# 25 "data/maps/MossdeepCity/scripts.pory"

# 26 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ProgressEmmieState::
# 27 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 51
# 28 "data/maps/MossdeepCity/scripts.pory"
	return
# 29 "data/maps/MossdeepCity/scripts.pory"

# 30 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ProgressEmmieState2::
# 31 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 54
# 32 "data/maps/MossdeepCity/scripts.pory"
	end
# 33 "data/maps/MossdeepCity/scripts.pory"

# 34 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition:
# 35 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 36 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 37 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 38 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 39 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 40 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 41 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 42 "data/maps/MossdeepCity/scripts.pory"
	end
# 43 "data/maps/MossdeepCity/scripts.pory"

# 44 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 45 "data/maps/MossdeepCity/scripts.pory"
	lock
# 46 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 47 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
# 48 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 49 "data/maps/MossdeepCity/scripts.pory"
	release
# 50 "data/maps/MossdeepCity/scripts.pory"
	end
# 51 "data/maps/MossdeepCity/scripts.pory"

# 52 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 53 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 54 "data/maps/MossdeepCity/scripts.pory"
	release
# 55 "data/maps/MossdeepCity/scripts.pory"
	end
# 56 "data/maps/MossdeepCity/scripts.pory"

# 57 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 58 "data/maps/MossdeepCity/scripts.pory"
	lock
# 59 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 60 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
# 61 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 62 "data/maps/MossdeepCity/scripts.pory"
	release
# 63 "data/maps/MossdeepCity/scripts.pory"
	end
# 64 "data/maps/MossdeepCity/scripts.pory"

# 65 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 66 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 67 "data/maps/MossdeepCity/scripts.pory"
	release
# 68 "data/maps/MossdeepCity/scripts.pory"
	end
# 69 "data/maps/MossdeepCity/scripts.pory"

# 70 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 71 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 72 "data/maps/MossdeepCity/scripts.pory"
	end
# 73 "data/maps/MossdeepCity/scripts.pory"

# 74 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 75 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 76 "data/maps/MossdeepCity/scripts.pory"
	end
# 77 "data/maps/MossdeepCity/scripts.pory"

# 78 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 79 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 80 "data/maps/MossdeepCity/scripts.pory"
	end
# 81 "data/maps/MossdeepCity/scripts.pory"

# 82 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 83 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 84 "data/maps/MossdeepCity/scripts.pory"
	end
# 85 "data/maps/MossdeepCity/scripts.pory"

# 86 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock::
# 87 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 88 "data/maps/MossdeepCity/scripts.pory"
	end
# 89 "data/maps/MossdeepCity/scripts.pory"

# 90 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 91 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 92 "data/maps/MossdeepCity/scripts.pory"
	end
# 93 "data/maps/MossdeepCity/scripts.pory"

# 94 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 95 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 96 "data/maps/MossdeepCity/scripts.pory"
	end
# 97 "data/maps/MossdeepCity/scripts.pory"

# 98 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 99 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 100 "data/maps/MossdeepCity/scripts.pory"
	end
# 101 "data/maps/MossdeepCity/scripts.pory"

# 102 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 103 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 104 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 105 "data/maps/MossdeepCity/scripts.pory"
	end
# 106 "data/maps/MossdeepCity/scripts.pory"

# 107 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 108 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 109 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 110 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 111 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 112 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 113 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 114 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 115 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 116 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 117 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 118 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 119 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 120 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 121 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 122 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MAXIE
# 123 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 124 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 125 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 126 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 127 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 128 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 129 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 54
# 130 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 131 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 132 "data/maps/MossdeepCity/scripts.pory"
	end
# 133 "data/maps/MossdeepCity/scripts.pory"

# 134 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 135 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 136 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 137 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 138 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 139 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 140 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 141 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 142 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 143 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 144 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 145 "data/maps/MossdeepCity/scripts.pory"

# 146 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 147 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 148 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 149 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 150 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 151 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 152 "data/maps/MossdeepCity/scripts.pory"

# 153 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 154 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 155 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 156 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 157 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 158 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 159 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 160 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 161 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 162 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 163 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 164 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 165 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 166 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 167 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 168 "data/maps/MossdeepCity/scripts.pory"

# 169 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 170 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 171 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 173 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 174 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 177 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 178 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 179 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 180 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 181 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 182 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 183 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 184 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 185 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 186 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 187 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 188 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 189 "data/maps/MossdeepCity/scripts.pory"

# 190 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 191 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 192 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 193 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 194 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 195 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 196 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 197 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 198 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 199 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 200 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 201 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 202 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 203 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 204 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 205 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 206 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 207 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 208 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 209 "data/maps/MossdeepCity/scripts.pory"

# 210 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 211 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 212 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 213 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 214 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 215 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 216 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 217 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 218 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 219 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 220 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 221 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 222 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 223 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 224 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 225 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 226 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 227 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 228 "data/maps/MossdeepCity/scripts.pory"

# 229 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 230 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 231 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 232 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 233 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 234 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 235 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 236 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 237 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 238 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 239 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 240 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 241 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 242 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 243 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 244 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 245 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 246 "data/maps/MossdeepCity/scripts.pory"

# 247 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 248 "data/maps/MossdeepCity/scripts.pory"
	lock
# 249 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 250 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 251 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 252 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 253 "data/maps/MossdeepCity/scripts.pory"
	release
# 254 "data/maps/MossdeepCity/scripts.pory"
	end
# 255 "data/maps/MossdeepCity/scripts.pory"

# 256 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 257 "data/maps/MossdeepCity/scripts.pory"
	lock
# 258 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 259 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 260 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 261 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 262 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 263 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 264 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 265 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 266 "data/maps/MossdeepCity/scripts.pory"
	release
# 267 "data/maps/MossdeepCity/scripts.pory"
	end
# 268 "data/maps/MossdeepCity/scripts.pory"

# 269 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 270 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 271 "data/maps/MossdeepCity/scripts.pory"
	release
# 272 "data/maps/MossdeepCity/scripts.pory"
	end
# 273 "data/maps/MossdeepCity/scripts.pory"

# 274 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 275 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 276 "data/maps/MossdeepCity/scripts.pory"
	release
# 277 "data/maps/MossdeepCity/scripts.pory"
	end
# 278 "data/maps/MossdeepCity/scripts.pory"

# 279 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 280 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 281 "data/maps/MossdeepCity/scripts.pory"
	end
# 282 "data/maps/MossdeepCity/scripts.pory"

# 283 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 284 "data/maps/MossdeepCity/scripts.pory"
	lock
# 285 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 286 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 287 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 288 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 289 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 290 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 291 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 292 "data/maps/MossdeepCity/scripts.pory"
	release
# 293 "data/maps/MossdeepCity/scripts.pory"
	end
# 294 "data/maps/MossdeepCity/scripts.pory"

# 295 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 296 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 297 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 298 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 299 "data/maps/MossdeepCity/scripts.pory"
	return
# 300 "data/maps/MossdeepCity/scripts.pory"

# 301 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 302 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 303 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitEast
# 304 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/MossdeepCity/scripts.pory"
	return
# 306 "data/maps/MossdeepCity/scripts.pory"

# 307 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 308 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 309 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 310 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 311 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 312 "data/maps/MossdeepCity/scripts.pory"

# 313 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 314 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 315 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 316 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 317 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 318 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 319 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 320 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 321 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 322 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 323 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 324 "data/maps/MossdeepCity/scripts.pory"

# 325 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 326 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 327 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 328 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 329 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 330 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 331 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 332 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 333 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 334 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 335 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 336 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 337 "data/maps/MossdeepCity/scripts.pory"

# 338 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 339 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from STEVEN, but I don't\n"
# 340 "data/maps/MossdeepCity/scripts.pory"
	.string "know what it's good for.\p"
# 341 "data/maps/MossdeepCity/scripts.pory"
	.string "I think it's called KING'S ROCK.\n"
# 342 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you want it?$"
# 343 "data/maps/MossdeepCity/scripts.pory"

# 344 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 345 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
# 346 "data/maps/MossdeepCity/scripts.pory"
	.string "You're weird.\p"
# 347 "data/maps/MossdeepCity/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "from STEVEN.$"
# 349 "data/maps/MossdeepCity/scripts.pory"

# 350 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere:
# 351 "data/maps/MossdeepCity/scripts.pory"
	.string "STEVEN's house is right over there!$"
# 352 "data/maps/MossdeepCity/scripts.pory"

# 353 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 354 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 355 "data/maps/MossdeepCity/scripts.pory"
	.string "supposed to do with some weird rock?$"
# 356 "data/maps/MossdeepCity/scripts.pory"

# 357 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "Around MOSSDEEP, you can see wild\n"
# 359 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER.\p"
# 360 "data/maps/MossdeepCity/scripts.pory"
	.string "It's called, uh…\n"
# 361 "data/maps/MossdeepCity/scripts.pory"
	.string "What was it now…\p"
# 362 "data/maps/MossdeepCity/scripts.pory"
	.string "WAI, WAI, WAI…\p"
# 363 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER watching!$"
# 364 "data/maps/MossdeepCity/scripts.pory"

# 365 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 366 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 367 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 368 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 369 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 370 "data/maps/MossdeepCity/scripts.pory"

# 371 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 372 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 373 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 374 "data/maps/MossdeepCity/scripts.pory"

# 375 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 376 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a SAILOR buddy that\n"
# 377 "data/maps/MossdeepCity/scripts.pory"
	.string "TEAM AQUA set up shop in LILYCOVE.\p"
# 378 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 379 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 380 "data/maps/MossdeepCity/scripts.pory"
	.string "But MOSSDEEP here's been targeted\n"
# 381 "data/maps/MossdeepCity/scripts.pory"
	.string "by that TEAM MAGMA.\p"
# 382 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the SPACE CENTER.$"
# 384 "data/maps/MossdeepCity/scripts.pory"

# 385 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 386 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a SAILOR, so the sea's obviously\n"
# 387 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 388 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 389 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 390 "data/maps/MossdeepCity/scripts.pory"

# 391 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 392 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 393 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 394 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 395 "data/maps/MossdeepCity/scripts.pory"

# 396 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 397 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 398 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 399 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 400 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 401 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 402 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 403 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 404 "data/maps/MossdeepCity/scripts.pory"

# 405 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 406 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 407 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with POKéMON\n"
# 408 "data/maps/MossdeepCity/scripts.pory"
	.string "using SURF…\p"
# 409 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 410 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 411 "data/maps/MossdeepCity/scripts.pory"

# 412 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 413 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 414 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the SPACE CENTER.\p"
# 415 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 416 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 417 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 418 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 419 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a wish tag to make it happen.\n"
# 420 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 421 "data/maps/MossdeepCity/scripts.pory"

# 422 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock:
# 423 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"
# 424 "data/maps/MossdeepCity/scripts.pory"

# 425 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 426 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\n"
# 427 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADERS: LIZA & TATE\p"
# 428 "data/maps/MossdeepCity/scripts.pory"
	.string "“The mystic combination!”$"
# 429 "data/maps/MossdeepCity/scripts.pory"

# 430 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 431 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY\n"
# 432 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish POKéMON!”$"
# 433 "data/maps/MossdeepCity/scripts.pory"

# 434 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 435 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP SPACE CENTER\n"
# 436 "data/maps/MossdeepCity/scripts.pory"
	.string "“The closest place to space.”$"
# 437 "data/maps/MossdeepCity/scripts.pory"

# 438 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown:
# 439 "data/maps/MossdeepCity/scripts.pory"
	.string "SCOTT: {PLAYER}{KUN}, feeling good?\n"
# 440 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm doing great!\p"
# 441 "data/maps/MossdeepCity/scripts.pory"
	.string "I'd heard MOSSDEEP's GYM LEADER is\n"
# 442 "data/maps/MossdeepCity/scripts.pory"
	.string "pretty strong, so I decided to come\l"
# 443 "data/maps/MossdeepCity/scripts.pory"
	.string "take a look-see for myself.\p"
# 444 "data/maps/MossdeepCity/scripts.pory"
	.string "But there's something wrong about\n"
# 445 "data/maps/MossdeepCity/scripts.pory"
	.string "this town.\p"
# 446 "data/maps/MossdeepCity/scripts.pory"
	.string "People are going on about a warning\n"
# 447 "data/maps/MossdeepCity/scripts.pory"
	.string "letter and the SPACE CENTER…\p"
# 448 "data/maps/MossdeepCity/scripts.pory"
	.string "I don't think it concerns me in any\n"
# 449 "data/maps/MossdeepCity/scripts.pory"
	.string "way, though.$"
# 450 "data/maps/MossdeepCity/scripts.pory"

# 451 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 452 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 453 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 454 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 455 "data/maps/MossdeepCity/scripts.pory"
	.string "island city SOOTOPOLIS?\p"
# 456 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the GYM there had a new\n"
# 457 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADER come in.\p"
# 458 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me the new LEADER once\n"
# 459 "data/maps/MossdeepCity/scripts.pory"
	.string "mentored WALLACE.$"
