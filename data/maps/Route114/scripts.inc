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
Route114_EventScript_WallyRival1::
# 22 "data/maps/Route114/scripts.pory"
	addvar VAR_ROUTE114_STATE, 1
# 23 "data/maps/Route114/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 23
# 24 "data/maps/Route114/scripts.pory"
	end
# 25 "data/maps/Route114/scripts.pory"

# 26 "data/maps/Route114/scripts.pory"
Route114_EventScript_WallyRival2::
# 27 "data/maps/Route114/scripts.pory"
	addvar VAR_ROUTE114_STATE, 1
# 28 "data/maps/Route114/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 23
# 29 "data/maps/Route114/scripts.pory"
	end
# 30 "data/maps/Route114/scripts.pory"

# 31 "data/maps/Route114/scripts.pory"
Route114_EventScript_WallyRival3::
# 32 "data/maps/Route114/scripts.pory"
	addvar VAR_ROUTE114_STATE, 1
# 33 "data/maps/Route114/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 23
# 34 "data/maps/Route114/scripts.pory"
	end
# 35 "data/maps/Route114/scripts.pory"

# 36 "data/maps/Route114/scripts.pory"
Route114_EventScript_WallyRival4::
# 37 "data/maps/Route114/scripts.pory"
	addvar VAR_ROUTE114_STATE, 1
# 38 "data/maps/Route114/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 23
# 39 "data/maps/Route114/scripts.pory"
	end
# 40 "data/maps/Route114/scripts.pory"

# 41 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 42 "data/maps/Route114/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 43 "data/maps/Route114/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 44 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 45 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 46 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 47 "data/maps/Route114/scripts.pory"
	end
# 48 "data/maps/Route114/scripts.pory"

# 49 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 50 "data/maps/Route114/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 51 "data/maps/Route114/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 52 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 53 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 54 "data/maps/Route114/scripts.pory"
	end
# 55 "data/maps/Route114/scripts.pory"

# 56 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 57 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 58 "data/maps/Route114/scripts.pory"
	.2byte 0
# 59 "data/maps/Route114/scripts.pory"

# 60 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 61 "data/maps/Route114/scripts.pory"
	lock
# 62 "data/maps/Route114/scripts.pory"
	faceplayer
# 63 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 64 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 65 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 66 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 67 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 68 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 69 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 70 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 71 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 72 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 73 "data/maps/Route114/scripts.pory"
	release
# 74 "data/maps/Route114/scripts.pory"
	end
# 75 "data/maps/Route114/scripts.pory"

# 76 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 77 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 78 "data/maps/Route114/scripts.pory"
	release
# 79 "data/maps/Route114/scripts.pory"
	end
# 80 "data/maps/Route114/scripts.pory"

# 81 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 82 "data/maps/Route114/scripts.pory"
	lock
# 83 "data/maps/Route114/scripts.pory"
	faceplayer
# 84 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 85 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 86 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 87 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 88 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 89 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 90 "data/maps/Route114/scripts.pory"
	release
# 91 "data/maps/Route114/scripts.pory"
	end
# 92 "data/maps/Route114/scripts.pory"

# 93 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 94 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 95 "data/maps/Route114/scripts.pory"
	release
# 96 "data/maps/Route114/scripts.pory"
	end
# 97 "data/maps/Route114/scripts.pory"

# 98 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 99 "data/maps/Route114/scripts.pory"
	lock
# 100 "data/maps/Route114/scripts.pory"
	faceplayer
# 101 "data/maps/Route114/scripts.pory"
	waitse
# 102 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 103 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 104 "data/maps/Route114/scripts.pory"
	waitmoncry
# 105 "data/maps/Route114/scripts.pory"
	release
# 106 "data/maps/Route114/scripts.pory"
	end
# 107 "data/maps/Route114/scripts.pory"

# 108 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 109 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 110 "data/maps/Route114/scripts.pory"
	end
# 111 "data/maps/Route114/scripts.pory"

# 112 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 113 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 114 "data/maps/Route114/scripts.pory"
	end
# 115 "data/maps/Route114/scripts.pory"

# 116 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 117 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 118 "data/maps/Route114/scripts.pory"
	end
# 119 "data/maps/Route114/scripts.pory"

# 120 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4::
# 121 "data/maps/Route114/scripts.pory"
lockall
# 122 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_3
# 123 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 124 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 125 "data/maps/Route114/scripts.pory"
waitmovement 0
# 126 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 127 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 128 "data/maps/Route114/scripts.pory"
waitmovement 0
# 129 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_3Intro MSGBOX_AUTOCLOSE
# 130 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_4
# 131 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 132 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 133 "data/maps/Route114/scripts.pory"
waitmovement 0
# 134 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 135 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 136 "data/maps/Route114/scripts.pory"
waitmovement 0
# 137 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_4Intro, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4DoMultiBattle
# 139 "data/maps/Route114/scripts.pory"
releaseall
# 140 "data/maps/Route114/scripts.pory"
end
# 141 "data/maps/Route114/scripts.pory"

# 142 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4DoMultiBattle::
# 143 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 144 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_3, Route114_Text_Grunt_Route_114_3Defeat, TRAINER_GRUNT_ROUTE_114_4, Route114_Text_Grunt_Route_114_4Defeat, PARTNER_EMMIE
# 145 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 146 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4Victory
# 147 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 148 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 149 "data/maps/Route114/scripts.pory"
waitstate
# 150 "data/maps/Route114/scripts.pory"

# 151 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4Victory::
# 152 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 153 "data/maps/Route114/scripts.pory"
waitmovement 0
# 154 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_3PostBattle, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 156 "data/maps/Route114/scripts.pory"
waitmovement 0
# 157 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_4PostBattle, MSGBOX_AUTOCLOSE
# 158 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 159 "data/maps/Route114/scripts.pory"
end
# 160 "data/maps/Route114/scripts.pory"

# 161 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3::
# 162 "data/maps/Route114/scripts.pory"
	faceplayer
# 163 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_3PostBattle, MSGBOX_AUTOCLOSE
# 164 "data/maps/Route114/scripts.pory"
	end
# 165 "data/maps/Route114/scripts.pory"

# 166 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_2::
# 167 "data/maps/Route114/scripts.pory"
	faceplayer
# 168 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_2PostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route114/scripts.pory"
	end
# 170 "data/maps/Route114/scripts.pory"

# 171 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_6::
# 172 "data/maps/Route114/scripts.pory"
	faceplayer
# 173 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_6PostBattle, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route114/scripts.pory"
	end
# 175 "data/maps/Route114/scripts.pory"

# 176 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6::
# 177 "data/maps/Route114/scripts.pory"
lockall
# 178 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_5
# 179 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 180 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 181 "data/maps/Route114/scripts.pory"
waitmovement 0
# 182 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 183 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 184 "data/maps/Route114/scripts.pory"
waitmovement 0
# 185 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_5Intro MSGBOX_AUTOCLOSE
# 186 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_6
# 187 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 188 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 189 "data/maps/Route114/scripts.pory"
waitmovement 0
# 190 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 191 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 192 "data/maps/Route114/scripts.pory"
waitmovement 0
# 193 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_6Intro, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6DoMultiBattle
# 195 "data/maps/Route114/scripts.pory"
releaseall
# 196 "data/maps/Route114/scripts.pory"
end
# 197 "data/maps/Route114/scripts.pory"

# 198 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6DoMultiBattle::
# 199 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 200 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_5, Route114_Text_Grunt_Route_114_5Defeat, TRAINER_GRUNT_ROUTE_114_6, Route114_Text_Grunt_Route_114_6Defeat, PARTNER_EMMIE
# 201 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 202 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6Victory
# 203 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 204 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 205 "data/maps/Route114/scripts.pory"
waitstate
# 206 "data/maps/Route114/scripts.pory"

# 207 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6Victory::
# 208 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 209 "data/maps/Route114/scripts.pory"
waitmovement 0
# 210 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_5PostBattle, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 212 "data/maps/Route114/scripts.pory"
waitmovement 0
# 213 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_6PostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 215 "data/maps/Route114/scripts.pory"
end
# 216 "data/maps/Route114/scripts.pory"

# 217 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5::
# 218 "data/maps/Route114/scripts.pory"
	faceplayer
# 219 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_5PostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route114/scripts.pory"
	end
# 221 "data/maps/Route114/scripts.pory"

# 222 "data/maps/Route114/scripts.pory"
Route114_EventScript_SteveCharlotte::
# 223 "data/maps/Route114/scripts.pory"
lockall
# 224 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_STEVE
# 225 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 226 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 227 "data/maps/Route114/scripts.pory"
waitmovement 0
# 228 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 229 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 230 "data/maps/Route114/scripts.pory"
waitmovement 0
# 231 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_SteveIntro MSGBOX_AUTOCLOSE
# 232 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_CHARLOTTE
# 233 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 234 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 235 "data/maps/Route114/scripts.pory"
waitmovement 0
# 236 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 237 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 238 "data/maps/Route114/scripts.pory"
waitmovement 0
# 239 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_CharlotteIntro, MSGBOX_AUTOCLOSE
# 240 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_SteveCharlotteDoMultiBattle
# 241 "data/maps/Route114/scripts.pory"
releaseall
# 242 "data/maps/Route114/scripts.pory"
end
# 243 "data/maps/Route114/scripts.pory"

# 244 "data/maps/Route114/scripts.pory"
Route114_EventScript_SteveCharlotteDoMultiBattle::
# 245 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 246 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_STEVE_1, Route114_Text_SteveDefeat, TRAINER_CHARLOTTE, Route114_Text_CharlotteDefeat, PARTNER_EMMIE
# 247 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 248 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_SteveCharlotteVictory
# 249 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 250 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 251 "data/maps/Route114/scripts.pory"
waitstate
# 252 "data/maps/Route114/scripts.pory"

# 253 "data/maps/Route114/scripts.pory"
Route114_EventScript_SteveCharlotteVictory::
# 254 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 255 "data/maps/Route114/scripts.pory"
waitmovement 0
# 256 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_StevePostBattle, MSGBOX_AUTOCLOSE
# 257 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 258 "data/maps/Route114/scripts.pory"
waitmovement 0
# 259 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 261 "data/maps/Route114/scripts.pory"
end
# 262 "data/maps/Route114/scripts.pory"

# 263 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 264 "data/maps/Route114/scripts.pory"
	faceplayer
# 265 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 266 "data/maps/Route114/scripts.pory"
	release
# 267 "data/maps/Route114/scripts.pory"
	end
# 268 "data/maps/Route114/scripts.pory"

# 269 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 270 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 271 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 272 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 273 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 274 "data/maps/Route114/scripts.pory"
	release
# 275 "data/maps/Route114/scripts.pory"
	end
# 276 "data/maps/Route114/scripts.pory"

# 277 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 278 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 279 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 280 "data/maps/Route114/scripts.pory"
	end
# 281 "data/maps/Route114/scripts.pory"

# 282 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2::
# 283 "data/maps/Route114/scripts.pory"
lockall
# 284 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_1
# 285 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 286 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 287 "data/maps/Route114/scripts.pory"
waitmovement 0
# 288 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 289 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 290 "data/maps/Route114/scripts.pory"
waitmovement 0
# 291 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_1Intro MSGBOX_AUTOCLOSE
# 292 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_2
# 293 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 294 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 295 "data/maps/Route114/scripts.pory"
waitmovement 0
# 296 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 297 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 298 "data/maps/Route114/scripts.pory"
waitmovement 0
# 299 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_2Intro, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2DoMultiBattle
# 301 "data/maps/Route114/scripts.pory"
releaseall
# 302 "data/maps/Route114/scripts.pory"
end
# 303 "data/maps/Route114/scripts.pory"

# 304 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2DoMultiBattle::
# 305 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 306 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_1, Route114_Text_Grunt_Route_114_1Defeat, TRAINER_GRUNT_ROUTE_114_2, Route114_Text_Grunt_Route_114_2Defeat, PARTNER_EMMIE
# 307 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 308 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2Victory
# 309 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 310 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 311 "data/maps/Route114/scripts.pory"
waitstate
# 312 "data/maps/Route114/scripts.pory"

# 313 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2Victory::
# 314 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 315 "data/maps/Route114/scripts.pory"
waitmovement 0
# 316 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_1PostBattle, MSGBOX_AUTOCLOSE
# 317 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 318 "data/maps/Route114/scripts.pory"
waitmovement 0
# 319 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_2PostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/Route114/scripts.pory"
setvar VAR_PARTNER_EMMIE_STATE, 24
# 321 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 322 "data/maps/Route114/scripts.pory"
end
# 323 "data/maps/Route114/scripts.pory"

# 324 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1::
# 325 "data/maps/Route114/scripts.pory"
	faceplayer
# 326 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_1PostBattle, MSGBOX_DEFAULT
# 327 "data/maps/Route114/scripts.pory"
	release
# 328 "data/maps/Route114/scripts.pory"
	end
# 329 "data/maps/Route114/scripts.pory"

# 330 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 331 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 332 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 333 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 334 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_2
# 335 "data/maps/Route114/scripts.pory"
	release
# 336 "data/maps/Route114/scripts.pory"
	end
# 337 "data/maps/Route114/scripts.pory"

# 338 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 339 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_2, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 340 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 341 "data/maps/Route114/scripts.pory"
	end
# 342 "data/maps/Route114/scripts.pory"

# 343 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 344 "data/maps/Route114/scripts.pory"
	faceplayer
# 345 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 346 "data/maps/Route114/scripts.pory"
	end
# 347 "data/maps/Route114/scripts.pory"

# 348 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 349 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 350 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 351 "data/maps/Route114/scripts.pory"
	end
# 352 "data/maps/Route114/scripts.pory"

# 353 "data/maps/Route114/scripts.pory"
Route114_EventScript_IvyTyra::
# 354 "data/maps/Route114/scripts.pory"
lockall
# 355 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_IVY
# 356 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 357 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 358 "data/maps/Route114/scripts.pory"
waitmovement 0
# 359 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 360 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 361 "data/maps/Route114/scripts.pory"
waitmovement 0
# 362 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_IvyIntro, MSGBOX_AUTOCLOSE
# 363 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_IvyTyraDoMultiBattle
# 364 "data/maps/Route114/scripts.pory"
releaseall
# 365 "data/maps/Route114/scripts.pory"
end
# 366 "data/maps/Route114/scripts.pory"

# 367 "data/maps/Route114/scripts.pory"
Route114_EventScript_IvyTyraDoMultiBattle::
# 368 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 369 "data/maps/Route114/scripts.pory"
multi_2p_vs_1 TRAINER_TYRA_AND_IVY, Route114_Text_IvyDefeat, PARTNER_EMMIE
# 370 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 371 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_IvyTyraVictory
# 372 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 373 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 374 "data/maps/Route114/scripts.pory"
waitstate
# 375 "data/maps/Route114/scripts.pory"

# 376 "data/maps/Route114/scripts.pory"
Route114_EventScript_IvyTyraVictory::
# 377 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 378 "data/maps/Route114/scripts.pory"
waitmovement 0
# 379 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 380 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 381 "data/maps/Route114/scripts.pory"
end
# 382 "data/maps/Route114/scripts.pory"

# 383 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 384 "data/maps/Route114/scripts.pory"
	faceplayer
# 385 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 386 "data/maps/Route114/scripts.pory"
	end
# 387 "data/maps/Route114/scripts.pory"

# 388 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 389 "data/maps/Route114/scripts.pory"
	faceplayer
# 390 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 391 "data/maps/Route114/scripts.pory"
	end
# 392 "data/maps/Route114/scripts.pory"

# 393 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_4::
# 394 "data/maps/Route114/scripts.pory"
	faceplayer
# 395 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_4PostBattle, MSGBOX_AUTOCLOSE
# 396 "data/maps/Route114/scripts.pory"
	end
# 397 "data/maps/Route114/scripts.pory"

# 398 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 399 "data/maps/Route114/scripts.pory"
	faceplayer
# 400 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 401 "data/maps/Route114/scripts.pory"
	end
# 402 "data/maps/Route114/scripts.pory"

# 403 "data/maps/Route114/scripts.pory"
Route114_EventScript_KaiClaude::
# 404 "data/maps/Route114/scripts.pory"
lockall
# 405 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_KAI
# 406 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 407 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 408 "data/maps/Route114/scripts.pory"
waitmovement 0
# 409 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 410 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 411 "data/maps/Route114/scripts.pory"
waitmovement 0
# 412 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_KaiIntro MSGBOX_AUTOCLOSE
# 413 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_CLAUDE
# 414 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 415 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 416 "data/maps/Route114/scripts.pory"
waitmovement 0
# 417 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 418 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 419 "data/maps/Route114/scripts.pory"
waitmovement 0
# 420 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_ClaudeIntro, MSGBOX_AUTOCLOSE
# 421 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_KaiClaudeDoMultiBattle
# 422 "data/maps/Route114/scripts.pory"
releaseall
# 423 "data/maps/Route114/scripts.pory"
end
# 424 "data/maps/Route114/scripts.pory"

# 425 "data/maps/Route114/scripts.pory"
Route114_EventScript_KaiClaudeDoMultiBattle::
# 426 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 427 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_KAI, Route114_Text_KaiDefeat, TRAINER_CLAUDE, Route114_Text_ClaudeDefeat, PARTNER_EMMIE
# 428 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 429 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_KaiClaudeVictory
# 430 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 431 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 432 "data/maps/Route114/scripts.pory"
waitstate
# 433 "data/maps/Route114/scripts.pory"

# 434 "data/maps/Route114/scripts.pory"
Route114_EventScript_KaiClaudeVictory::
# 435 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 436 "data/maps/Route114/scripts.pory"
waitmovement 0
# 437 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 438 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 439 "data/maps/Route114/scripts.pory"
waitmovement 0
# 440 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 441 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 442 "data/maps/Route114/scripts.pory"
end
# 443 "data/maps/Route114/scripts.pory"

# 444 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 445 "data/maps/Route114/scripts.pory"
	faceplayer
# 446 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 447 "data/maps/Route114/scripts.pory"
	end
# 448 "data/maps/Route114/scripts.pory"

# 449 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 450 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 451 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 452 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 453 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 454 "data/maps/Route114/scripts.pory"

# 455 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 456 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 457 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 458 "data/maps/Route114/scripts.pory"

# 459 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 460 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 461 "data/maps/Route114/scripts.pory"

# 462 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 463 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 464 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 465 "data/maps/Route114/scripts.pory"

# 466 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 467 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 468 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 469 "data/maps/Route114/scripts.pory"

# 470 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 471 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"
