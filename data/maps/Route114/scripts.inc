# 1 "data/maps/Route114/scripts.pory"

# 2 "data/maps/Route114/scripts.pory"
.set LOCALID_GRUNT_ROUTE_114_1, 17
# 3 "data/maps/Route114/scripts.pory"
.set LOCALID_GRUNT_ROUTE_114_2, 4
# 4 "data/maps/Route114/scripts.pory"
.set LOCALID_GRUNT_ROUTE_114_3, 3
# 5 "data/maps/Route114/scripts.pory"
.set LOCALID_GRUNT_ROUTE_114_4, 25
# 6 "data/maps/Route114/scripts.pory"
.set LOCALID_GRUNT_ROUTE_114_5, 6
# 7 "data/maps/Route114/scripts.pory"
.set LOCALID_GRUNT_ROUTE_114_6, 5
# 8 "data/maps/Route114/scripts.pory"
.set LOCALID_IVY, 22
# 9 "data/maps/Route114/scripts.pory"
.set LOCALID_TYRA, 23
# 10 "data/maps/Route114/scripts.pory"
.set LOCALID_KAI, 27
# 11 "data/maps/Route114/scripts.pory"
.set LOCALID_CLAUDE, 16
# 12 "data/maps/Route114/scripts.pory"
.set LOCALID_STEVE, 7
# 13 "data/maps/Route114/scripts.pory"
.set LOCALID_CHARLOTTE, 24
# 14 "data/maps/Route114/scripts.pory"

# 15 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 16 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 17 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 18 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 19 "data/maps/Route114/scripts.pory"
	.byte 0
# 20 "data/maps/Route114/scripts.pory"

# 21 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 22 "data/maps/Route114/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 23 "data/maps/Route114/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 24 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 25 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 26 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 27 "data/maps/Route114/scripts.pory"
	end
# 28 "data/maps/Route114/scripts.pory"

# 29 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 30 "data/maps/Route114/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 31 "data/maps/Route114/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 32 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 33 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 34 "data/maps/Route114/scripts.pory"
	end
# 35 "data/maps/Route114/scripts.pory"

# 36 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 37 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 38 "data/maps/Route114/scripts.pory"
	.2byte 0
# 39 "data/maps/Route114/scripts.pory"

# 40 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 41 "data/maps/Route114/scripts.pory"
	lock
# 42 "data/maps/Route114/scripts.pory"
	faceplayer
# 43 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 44 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 45 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 46 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 47 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 48 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 49 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 50 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 51 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 52 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 53 "data/maps/Route114/scripts.pory"
	release
# 54 "data/maps/Route114/scripts.pory"
	end
# 55 "data/maps/Route114/scripts.pory"

# 56 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 57 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 58 "data/maps/Route114/scripts.pory"
	release
# 59 "data/maps/Route114/scripts.pory"
	end
# 60 "data/maps/Route114/scripts.pory"

# 61 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 62 "data/maps/Route114/scripts.pory"
	lock
# 63 "data/maps/Route114/scripts.pory"
	faceplayer
# 64 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 65 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 66 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 67 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 68 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 69 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 70 "data/maps/Route114/scripts.pory"
	release
# 71 "data/maps/Route114/scripts.pory"
	end
# 72 "data/maps/Route114/scripts.pory"

# 73 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 74 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 75 "data/maps/Route114/scripts.pory"
	release
# 76 "data/maps/Route114/scripts.pory"
	end
# 77 "data/maps/Route114/scripts.pory"

# 78 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 79 "data/maps/Route114/scripts.pory"
	lock
# 80 "data/maps/Route114/scripts.pory"
	faceplayer
# 81 "data/maps/Route114/scripts.pory"
	waitse
# 82 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 83 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 84 "data/maps/Route114/scripts.pory"
	waitmoncry
# 85 "data/maps/Route114/scripts.pory"
	release
# 86 "data/maps/Route114/scripts.pory"
	end
# 87 "data/maps/Route114/scripts.pory"

# 88 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 89 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 90 "data/maps/Route114/scripts.pory"
	end
# 91 "data/maps/Route114/scripts.pory"

# 92 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 93 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 94 "data/maps/Route114/scripts.pory"
	end
# 95 "data/maps/Route114/scripts.pory"

# 96 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 97 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 98 "data/maps/Route114/scripts.pory"
	end
# 99 "data/maps/Route114/scripts.pory"

# 100 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4::
# 101 "data/maps/Route114/scripts.pory"
lockall
# 102 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_3
# 103 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 104 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 105 "data/maps/Route114/scripts.pory"
waitmovement 0
# 106 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 107 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 108 "data/maps/Route114/scripts.pory"
waitmovement 0
# 109 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_3Intro MSGBOX_AUTOCLOSE
# 110 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_4
# 111 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 112 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 113 "data/maps/Route114/scripts.pory"
waitmovement 0
# 114 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 115 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 116 "data/maps/Route114/scripts.pory"
waitmovement 0
# 117 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_4Intro, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4DoMultiBattle
# 119 "data/maps/Route114/scripts.pory"
releaseall
# 120 "data/maps/Route114/scripts.pory"
end
# 121 "data/maps/Route114/scripts.pory"

# 122 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4DoMultiBattle::
# 123 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 124 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_3, Route114_Text_Grunt_Route_114_3Defeat, TRAINER_GRUNT_ROUTE_114_4, Route114_Text_Grunt_Route_114_4Defeat, PARTNER_EMMIE
# 125 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 126 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4Victory
# 127 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 128 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 129 "data/maps/Route114/scripts.pory"
waitstate
# 130 "data/maps/Route114/scripts.pory"

# 131 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4Victory::
# 132 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 133 "data/maps/Route114/scripts.pory"
waitmovement 0
# 134 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_3PostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 136 "data/maps/Route114/scripts.pory"
waitmovement 0
# 137 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_4PostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 139 "data/maps/Route114/scripts.pory"
end
# 140 "data/maps/Route114/scripts.pory"

# 141 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3::
# 142 "data/maps/Route114/scripts.pory"
	faceplayer
# 143 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_3PostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route114/scripts.pory"
	end
# 145 "data/maps/Route114/scripts.pory"

# 146 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_2::
# 147 "data/maps/Route114/scripts.pory"
	faceplayer
# 148 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_2PostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route114/scripts.pory"
	end
# 150 "data/maps/Route114/scripts.pory"

# 151 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_6::
# 152 "data/maps/Route114/scripts.pory"
	faceplayer
# 153 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_6PostBattle, MSGBOX_AUTOCLOSE
# 154 "data/maps/Route114/scripts.pory"
	end
# 155 "data/maps/Route114/scripts.pory"

# 156 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6::
# 157 "data/maps/Route114/scripts.pory"
lockall
# 158 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_5
# 159 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 160 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 161 "data/maps/Route114/scripts.pory"
waitmovement 0
# 162 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 163 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 164 "data/maps/Route114/scripts.pory"
waitmovement 0
# 165 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_5Intro MSGBOX_AUTOCLOSE
# 166 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_6
# 167 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 168 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 169 "data/maps/Route114/scripts.pory"
waitmovement 0
# 170 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 171 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 172 "data/maps/Route114/scripts.pory"
waitmovement 0
# 173 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_6Intro, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6DoMultiBattle
# 175 "data/maps/Route114/scripts.pory"
releaseall
# 176 "data/maps/Route114/scripts.pory"
end
# 177 "data/maps/Route114/scripts.pory"

# 178 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6DoMultiBattle::
# 179 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 180 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_5, Route114_Text_Grunt_Route_114_5Defeat, TRAINER_GRUNT_ROUTE_114_6, Route114_Text_Grunt_Route_114_6Defeat, PARTNER_EMMIE
# 181 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 182 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6Victory
# 183 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 184 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 185 "data/maps/Route114/scripts.pory"
waitstate
# 186 "data/maps/Route114/scripts.pory"

# 187 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6Victory::
# 188 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 189 "data/maps/Route114/scripts.pory"
waitmovement 0
# 190 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_5PostBattle, MSGBOX_AUTOCLOSE
# 191 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 192 "data/maps/Route114/scripts.pory"
waitmovement 0
# 193 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_6PostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 195 "data/maps/Route114/scripts.pory"
end
# 196 "data/maps/Route114/scripts.pory"

# 197 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5::
# 198 "data/maps/Route114/scripts.pory"
	faceplayer
# 199 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_5PostBattle, MSGBOX_AUTOCLOSE
# 200 "data/maps/Route114/scripts.pory"
	end
# 201 "data/maps/Route114/scripts.pory"

# 202 "data/maps/Route114/scripts.pory"
Route114_EventScript_SteveCharlotte::
# 203 "data/maps/Route114/scripts.pory"
lockall
# 204 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_STEVE
# 205 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 206 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 207 "data/maps/Route114/scripts.pory"
waitmovement 0
# 208 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 209 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 210 "data/maps/Route114/scripts.pory"
waitmovement 0
# 211 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_SteveIntro MSGBOX_AUTOCLOSE
# 212 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_CHARLOTTE
# 213 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 214 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 215 "data/maps/Route114/scripts.pory"
waitmovement 0
# 216 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 217 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 218 "data/maps/Route114/scripts.pory"
waitmovement 0
# 219 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_CharlotteIntro, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_SteveCharlotteDoMultiBattle
# 221 "data/maps/Route114/scripts.pory"
releaseall
# 222 "data/maps/Route114/scripts.pory"
end
# 223 "data/maps/Route114/scripts.pory"

# 224 "data/maps/Route114/scripts.pory"
Route114_EventScript_SteveCharlotteDoMultiBattle::
# 225 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 226 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_STEVE_1, Route114_Text_SteveDefeat, TRAINER_CHARLOTTE, Route114_Text_CharlotteDefeat, PARTNER_EMMIE
# 227 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 228 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_SteveCharlotteVictory
# 229 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 230 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 231 "data/maps/Route114/scripts.pory"
waitstate
# 232 "data/maps/Route114/scripts.pory"

# 233 "data/maps/Route114/scripts.pory"
Route114_EventScript_SteveCharlotteVictory::
# 234 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 235 "data/maps/Route114/scripts.pory"
waitmovement 0
# 236 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_StevePostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 238 "data/maps/Route114/scripts.pory"
waitmovement 0
# 239 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 241 "data/maps/Route114/scripts.pory"
end
# 242 "data/maps/Route114/scripts.pory"

# 243 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 244 "data/maps/Route114/scripts.pory"
	faceplayer
# 245 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 246 "data/maps/Route114/scripts.pory"
	release
# 247 "data/maps/Route114/scripts.pory"
	end
# 248 "data/maps/Route114/scripts.pory"

# 249 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 250 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 251 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 253 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 254 "data/maps/Route114/scripts.pory"
	release
# 255 "data/maps/Route114/scripts.pory"
	end
# 256 "data/maps/Route114/scripts.pory"

# 257 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 258 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 259 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 260 "data/maps/Route114/scripts.pory"
	end
# 261 "data/maps/Route114/scripts.pory"

# 262 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2::
# 263 "data/maps/Route114/scripts.pory"
lockall
# 264 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_1
# 265 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 266 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 267 "data/maps/Route114/scripts.pory"
waitmovement 0
# 268 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 269 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 270 "data/maps/Route114/scripts.pory"
waitmovement 0
# 271 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_1Intro MSGBOX_AUTOCLOSE
# 272 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_2
# 273 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 274 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 275 "data/maps/Route114/scripts.pory"
waitmovement 0
# 276 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 277 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 278 "data/maps/Route114/scripts.pory"
waitmovement 0
# 279 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_2Intro, MSGBOX_AUTOCLOSE
# 280 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2DoMultiBattle
# 281 "data/maps/Route114/scripts.pory"
releaseall
# 282 "data/maps/Route114/scripts.pory"
end
# 283 "data/maps/Route114/scripts.pory"

# 284 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2DoMultiBattle::
# 285 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 286 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_1, Route114_Text_Grunt_Route_114_1Defeat, TRAINER_GRUNT_ROUTE_114_2, Route114_Text_Grunt_Route_114_2Defeat, PARTNER_EMMIE
# 287 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 288 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2Victory
# 289 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 290 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 291 "data/maps/Route114/scripts.pory"
waitstate
# 292 "data/maps/Route114/scripts.pory"

# 293 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2Victory::
# 294 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 295 "data/maps/Route114/scripts.pory"
waitmovement 0
# 296 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_1PostBattle, MSGBOX_AUTOCLOSE
# 297 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 298 "data/maps/Route114/scripts.pory"
waitmovement 0
# 299 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_2PostBattle, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 301 "data/maps/Route114/scripts.pory"
end
# 302 "data/maps/Route114/scripts.pory"

# 303 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1::
# 304 "data/maps/Route114/scripts.pory"
	faceplayer
# 305 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_1PostBattle, MSGBOX_DEFAULT
# 306 "data/maps/Route114/scripts.pory"
	release
# 307 "data/maps/Route114/scripts.pory"
	end
# 308 "data/maps/Route114/scripts.pory"

# 309 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 310 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 311 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 313 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_2
# 314 "data/maps/Route114/scripts.pory"
	release
# 315 "data/maps/Route114/scripts.pory"
	end
# 316 "data/maps/Route114/scripts.pory"

# 317 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 318 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_2, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 319 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 320 "data/maps/Route114/scripts.pory"
	end
# 321 "data/maps/Route114/scripts.pory"

# 322 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 323 "data/maps/Route114/scripts.pory"
	faceplayer
# 324 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 325 "data/maps/Route114/scripts.pory"
	end
# 326 "data/maps/Route114/scripts.pory"

# 327 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 328 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 329 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 330 "data/maps/Route114/scripts.pory"
	end
# 331 "data/maps/Route114/scripts.pory"

# 332 "data/maps/Route114/scripts.pory"
Route114_EventScript_IvyTyra::
# 333 "data/maps/Route114/scripts.pory"
lockall
# 334 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_IVY
# 335 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 336 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 337 "data/maps/Route114/scripts.pory"
waitmovement 0
# 338 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 339 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 340 "data/maps/Route114/scripts.pory"
waitmovement 0
# 341 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_IvyIntro, MSGBOX_AUTOCLOSE
# 342 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_IvyTyraDoMultiBattle
# 343 "data/maps/Route114/scripts.pory"
releaseall
# 344 "data/maps/Route114/scripts.pory"
end
# 345 "data/maps/Route114/scripts.pory"

# 346 "data/maps/Route114/scripts.pory"
Route114_EventScript_IvyTyraDoMultiBattle::
# 347 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 348 "data/maps/Route114/scripts.pory"
multi_2p_vs_1 TRAINER_TYRA_AND_IVY, Route114_Text_IvyDefeat, PARTNER_EMMIE
# 349 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 350 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_IvyTyraVictory
# 351 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 352 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 353 "data/maps/Route114/scripts.pory"
waitstate
# 354 "data/maps/Route114/scripts.pory"

# 355 "data/maps/Route114/scripts.pory"
Route114_EventScript_IvyTyraVictory::
# 356 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 357 "data/maps/Route114/scripts.pory"
waitmovement 0
# 358 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 359 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 360 "data/maps/Route114/scripts.pory"
end
# 361 "data/maps/Route114/scripts.pory"

# 362 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 363 "data/maps/Route114/scripts.pory"
	faceplayer
# 364 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 365 "data/maps/Route114/scripts.pory"
	end
# 366 "data/maps/Route114/scripts.pory"

# 367 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 368 "data/maps/Route114/scripts.pory"
	faceplayer
# 369 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 370 "data/maps/Route114/scripts.pory"
	end
# 371 "data/maps/Route114/scripts.pory"

# 372 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_4::
# 373 "data/maps/Route114/scripts.pory"
	faceplayer
# 374 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_4PostBattle, MSGBOX_AUTOCLOSE
# 375 "data/maps/Route114/scripts.pory"
	end
# 376 "data/maps/Route114/scripts.pory"

# 377 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 378 "data/maps/Route114/scripts.pory"
	faceplayer
# 379 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 380 "data/maps/Route114/scripts.pory"
	end
# 381 "data/maps/Route114/scripts.pory"

# 382 "data/maps/Route114/scripts.pory"
Route114_EventScript_KaiClaude::
# 383 "data/maps/Route114/scripts.pory"
lockall
# 384 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_KAI
# 385 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 386 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 387 "data/maps/Route114/scripts.pory"
waitmovement 0
# 388 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 389 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 390 "data/maps/Route114/scripts.pory"
waitmovement 0
# 391 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_KaiIntro MSGBOX_AUTOCLOSE
# 392 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_CLAUDE
# 393 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 394 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 395 "data/maps/Route114/scripts.pory"
waitmovement 0
# 396 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 397 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 398 "data/maps/Route114/scripts.pory"
waitmovement 0
# 399 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_ClaudeIntro, MSGBOX_AUTOCLOSE
# 400 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_KaiClaudeDoMultiBattle
# 401 "data/maps/Route114/scripts.pory"
releaseall
# 402 "data/maps/Route114/scripts.pory"
end
# 403 "data/maps/Route114/scripts.pory"

# 404 "data/maps/Route114/scripts.pory"
Route114_EventScript_KaiClaudeDoMultiBattle::
# 405 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 406 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_KAI, Route114_Text_KaiDefeat, TRAINER_CLAUDE, Route114_Text_ClaudeDefeat, PARTNER_EMMIE
# 407 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 408 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_KaiClaudeVictory
# 409 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 410 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 411 "data/maps/Route114/scripts.pory"
waitstate
# 412 "data/maps/Route114/scripts.pory"

# 413 "data/maps/Route114/scripts.pory"
Route114_EventScript_KaiClaudeVictory::
# 414 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 415 "data/maps/Route114/scripts.pory"
waitmovement 0
# 416 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 417 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 418 "data/maps/Route114/scripts.pory"
waitmovement 0
# 419 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 420 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 421 "data/maps/Route114/scripts.pory"
end
# 422 "data/maps/Route114/scripts.pory"

# 423 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 424 "data/maps/Route114/scripts.pory"
	faceplayer
# 425 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 426 "data/maps/Route114/scripts.pory"
	end
# 427 "data/maps/Route114/scripts.pory"

# 428 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 429 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 430 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 431 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 432 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 433 "data/maps/Route114/scripts.pory"

# 434 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 435 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 436 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 437 "data/maps/Route114/scripts.pory"

# 438 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 439 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 440 "data/maps/Route114/scripts.pory"

# 441 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 442 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 443 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 444 "data/maps/Route114/scripts.pory"

# 445 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 446 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 447 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 448 "data/maps/Route114/scripts.pory"

# 449 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 450 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"
