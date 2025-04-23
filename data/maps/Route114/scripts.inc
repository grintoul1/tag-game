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
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 24 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 25 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 26 "data/maps/Route114/scripts.pory"
	end
# 27 "data/maps/Route114/scripts.pory"

# 28 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 29 "data/maps/Route114/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 30 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 31 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 32 "data/maps/Route114/scripts.pory"
	end
# 33 "data/maps/Route114/scripts.pory"

# 34 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 35 "data/maps/Route114/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 36 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 37 "data/maps/Route114/scripts.pory"
	.2byte 0
# 38 "data/maps/Route114/scripts.pory"

# 39 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 40 "data/maps/Route114/scripts.pory"
	lock
# 41 "data/maps/Route114/scripts.pory"
	faceplayer
# 42 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 43 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 44 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 45 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 46 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 47 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 48 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 49 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 50 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 51 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 52 "data/maps/Route114/scripts.pory"
	release
# 53 "data/maps/Route114/scripts.pory"
	end
# 54 "data/maps/Route114/scripts.pory"

# 55 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 56 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 57 "data/maps/Route114/scripts.pory"
	release
# 58 "data/maps/Route114/scripts.pory"
	end
# 59 "data/maps/Route114/scripts.pory"

# 60 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 61 "data/maps/Route114/scripts.pory"
	lock
# 62 "data/maps/Route114/scripts.pory"
	faceplayer
# 63 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 64 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 65 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 66 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 67 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 68 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 69 "data/maps/Route114/scripts.pory"
	release
# 70 "data/maps/Route114/scripts.pory"
	end
# 71 "data/maps/Route114/scripts.pory"

# 72 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 73 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 74 "data/maps/Route114/scripts.pory"
	release
# 75 "data/maps/Route114/scripts.pory"
	end
# 76 "data/maps/Route114/scripts.pory"

# 77 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 78 "data/maps/Route114/scripts.pory"
	lock
# 79 "data/maps/Route114/scripts.pory"
	faceplayer
# 80 "data/maps/Route114/scripts.pory"
	waitse
# 81 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 82 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 83 "data/maps/Route114/scripts.pory"
	waitmoncry
# 84 "data/maps/Route114/scripts.pory"
	release
# 85 "data/maps/Route114/scripts.pory"
	end
# 86 "data/maps/Route114/scripts.pory"

# 87 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 88 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 89 "data/maps/Route114/scripts.pory"
	end
# 90 "data/maps/Route114/scripts.pory"

# 91 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 92 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 93 "data/maps/Route114/scripts.pory"
	end
# 94 "data/maps/Route114/scripts.pory"

# 95 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 96 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 97 "data/maps/Route114/scripts.pory"
	end
# 98 "data/maps/Route114/scripts.pory"

# 99 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4::
# 100 "data/maps/Route114/scripts.pory"
lockall
# 101 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_3
# 102 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 103 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 104 "data/maps/Route114/scripts.pory"
waitmovement 0
# 105 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 106 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 107 "data/maps/Route114/scripts.pory"
waitmovement 0
# 108 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_3Intro MSGBOX_AUTOCLOSE
# 109 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_4
# 110 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 111 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 112 "data/maps/Route114/scripts.pory"
waitmovement 0
# 113 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 114 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 115 "data/maps/Route114/scripts.pory"
waitmovement 0
# 116 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_4Intro MSGBOX_AUTOCLOSE
# 117 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4DoMultiBattle
# 118 "data/maps/Route114/scripts.pory"
releaseall
# 119 "data/maps/Route114/scripts.pory"
end
# 120 "data/maps/Route114/scripts.pory"

# 121 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4DoMultiBattle::
# 122 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 123 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_3, Route114_Text_Grunt_Route_114_3Defeat, TRAINER_GRUNT_ROUTE_114_4, Route114_Text_Grunt_Route_114_4Defeat, PARTNER_EMMIE
# 124 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 125 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4Victory
# 126 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 127 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 128 "data/maps/Route114/scripts.pory"
waitstate
# 129 "data/maps/Route114/scripts.pory"

# 130 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4Victory::
# 131 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 132 "data/maps/Route114/scripts.pory"
waitmovement 0
# 133 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_3PostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 135 "data/maps/Route114/scripts.pory"
waitmovement 0
# 136 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_4PostBattle, MSGBOX_AUTOCLOSE
# 137 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 138 "data/maps/Route114/scripts.pory"
end
# 139 "data/maps/Route114/scripts.pory"

# 140 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3::
# 141 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_3PostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/Route114/scripts.pory"
	end
# 143 "data/maps/Route114/scripts.pory"

# 144 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_2::
# 145 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_2PostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route114/scripts.pory"
	end
# 147 "data/maps/Route114/scripts.pory"

# 148 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_6::
# 149 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_6PostBattle, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route114/scripts.pory"
	end
# 151 "data/maps/Route114/scripts.pory"

# 152 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6::
# 153 "data/maps/Route114/scripts.pory"
lockall
# 154 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_5
# 155 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 156 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 157 "data/maps/Route114/scripts.pory"
waitmovement 0
# 158 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 159 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 160 "data/maps/Route114/scripts.pory"
waitmovement 0
# 161 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_5Intro MSGBOX_AUTOCLOSE
# 162 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_6
# 163 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 164 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 165 "data/maps/Route114/scripts.pory"
waitmovement 0
# 166 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 167 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 168 "data/maps/Route114/scripts.pory"
waitmovement 0
# 169 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_6Intro MSGBOX_AUTOCLOSE
# 170 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6DoMultiBattle
# 171 "data/maps/Route114/scripts.pory"
releaseall
# 172 "data/maps/Route114/scripts.pory"
end
# 173 "data/maps/Route114/scripts.pory"

# 174 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6DoMultiBattle::
# 175 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 176 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_5, Route114_Text_Grunt_Route_114_5Defeat, TRAINER_GRUNT_ROUTE_114_6, Route114_Text_Grunt_Route_114_6Defeat, PARTNER_EMMIE
# 177 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 178 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6Victory
# 179 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 180 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 181 "data/maps/Route114/scripts.pory"
waitstate
# 182 "data/maps/Route114/scripts.pory"

# 183 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6Victory::
# 184 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 185 "data/maps/Route114/scripts.pory"
waitmovement 0
# 186 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_5PostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 188 "data/maps/Route114/scripts.pory"
waitmovement 0
# 189 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_6PostBattle, MSGBOX_AUTOCLOSE
# 190 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 191 "data/maps/Route114/scripts.pory"
end
# 192 "data/maps/Route114/scripts.pory"

# 193 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5::
# 194 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_5PostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route114/scripts.pory"
	end
# 196 "data/maps/Route114/scripts.pory"

# 197 "data/maps/Route114/scripts.pory"
Route114_EventScript_SteveCharlotte::
# 198 "data/maps/Route114/scripts.pory"
lockall
# 199 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_STEVE
# 200 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 201 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 202 "data/maps/Route114/scripts.pory"
waitmovement 0
# 203 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 204 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 205 "data/maps/Route114/scripts.pory"
waitmovement 0
# 206 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_SteveIntro MSGBOX_AUTOCLOSE
# 207 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_CHARLOTTE
# 208 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 209 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 210 "data/maps/Route114/scripts.pory"
waitmovement 0
# 211 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 212 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 213 "data/maps/Route114/scripts.pory"
waitmovement 0
# 214 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_CharlotteIntro MSGBOX_AUTOCLOSE
# 215 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_SteveCharlotteDoMultiBattle
# 216 "data/maps/Route114/scripts.pory"
releaseall
# 217 "data/maps/Route114/scripts.pory"
end
# 218 "data/maps/Route114/scripts.pory"

# 219 "data/maps/Route114/scripts.pory"
Route114_EventScript_SteveCharlotteDoMultiBattle::
# 220 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 221 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_STEVE_1, Route114_Text_SteveDefeat, TRAINER_CHARLOTTE, Route114_Text_CharlotteDefeat, PARTNER_EMMIE
# 222 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 223 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_SteveCharlotteVictory
# 224 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 225 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 226 "data/maps/Route114/scripts.pory"
waitstate
# 227 "data/maps/Route114/scripts.pory"

# 228 "data/maps/Route114/scripts.pory"
Route114_EventScript_SteveCharlotteVictory::
# 229 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 230 "data/maps/Route114/scripts.pory"
waitmovement 0
# 231 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_StevePostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 233 "data/maps/Route114/scripts.pory"
waitmovement 0
# 234 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 236 "data/maps/Route114/scripts.pory"
end
# 237 "data/maps/Route114/scripts.pory"

# 238 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 239 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 240 "data/maps/Route114/scripts.pory"
	release
# 241 "data/maps/Route114/scripts.pory"
	end
# 242 "data/maps/Route114/scripts.pory"

# 243 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 244 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 245 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 246 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 247 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 248 "data/maps/Route114/scripts.pory"
	release
# 249 "data/maps/Route114/scripts.pory"
	end
# 250 "data/maps/Route114/scripts.pory"

# 251 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 252 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 253 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 254 "data/maps/Route114/scripts.pory"
	end
# 255 "data/maps/Route114/scripts.pory"

# 256 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2::
# 257 "data/maps/Route114/scripts.pory"
lockall
# 258 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_1
# 259 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 260 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 261 "data/maps/Route114/scripts.pory"
waitmovement 0
# 262 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 263 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 264 "data/maps/Route114/scripts.pory"
waitmovement 0
# 265 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_1Intro MSGBOX_AUTOCLOSE
# 266 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_2
# 267 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 268 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 269 "data/maps/Route114/scripts.pory"
waitmovement 0
# 270 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 271 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 272 "data/maps/Route114/scripts.pory"
waitmovement 0
# 273 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_2Intro MSGBOX_AUTOCLOSE
# 274 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2DoMultiBattle
# 275 "data/maps/Route114/scripts.pory"
releaseall
# 276 "data/maps/Route114/scripts.pory"
end
# 277 "data/maps/Route114/scripts.pory"

# 278 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2DoMultiBattle::
# 279 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 280 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_1, Route114_Text_Grunt_Route_114_1Defeat, TRAINER_GRUNT_ROUTE_114_2, Route114_Text_Grunt_Route_114_2Defeat, PARTNER_EMMIE
# 281 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 282 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2Victory
# 283 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 284 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 285 "data/maps/Route114/scripts.pory"
waitstate
# 286 "data/maps/Route114/scripts.pory"

# 287 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2Victory::
# 288 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 289 "data/maps/Route114/scripts.pory"
waitmovement 0
# 290 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_1PostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 292 "data/maps/Route114/scripts.pory"
waitmovement 0
# 293 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_2PostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 295 "data/maps/Route114/scripts.pory"
end
# 296 "data/maps/Route114/scripts.pory"

# 297 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1::
# 298 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_1PostBattle, MSGBOX_DEFAULT
# 299 "data/maps/Route114/scripts.pory"
	release
# 300 "data/maps/Route114/scripts.pory"
	end
# 301 "data/maps/Route114/scripts.pory"

# 302 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 303 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 304 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 305 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 306 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_2
# 307 "data/maps/Route114/scripts.pory"
	release
# 308 "data/maps/Route114/scripts.pory"
	end
# 309 "data/maps/Route114/scripts.pory"

# 310 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 311 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_2, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 312 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 313 "data/maps/Route114/scripts.pory"
	end
# 314 "data/maps/Route114/scripts.pory"

# 315 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 316 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 317 "data/maps/Route114/scripts.pory"
	end
# 318 "data/maps/Route114/scripts.pory"

# 319 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 320 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 321 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 322 "data/maps/Route114/scripts.pory"
	end
# 323 "data/maps/Route114/scripts.pory"

# 324 "data/maps/Route114/scripts.pory"
Route114_EventScript_IvyTyra::
# 325 "data/maps/Route114/scripts.pory"
lockall
# 326 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_IVY
# 327 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 328 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 329 "data/maps/Route114/scripts.pory"
waitmovement 0
# 330 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 331 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 332 "data/maps/Route114/scripts.pory"
waitmovement 0
# 333 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_IvyIntro MSGBOX_AUTOCLOSE
# 334 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_IvyTyraDoMultiBattle
# 335 "data/maps/Route114/scripts.pory"
releaseall
# 336 "data/maps/Route114/scripts.pory"
end
# 337 "data/maps/Route114/scripts.pory"

# 338 "data/maps/Route114/scripts.pory"
Route114_EventScript_IvyTyraDoMultiBattle::
# 339 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 340 "data/maps/Route114/scripts.pory"
multi_2p_vs_1 TRAINER_TYRA_AND_IVY, Route114_Text_IvyDefeat, PARTNER_EMMIE
# 341 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 342 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_IvyTyraVictory
# 343 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 344 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 345 "data/maps/Route114/scripts.pory"
waitstate
# 346 "data/maps/Route114/scripts.pory"

# 347 "data/maps/Route114/scripts.pory"
Route114_EventScript_IvyTyraVictory::
# 348 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 349 "data/maps/Route114/scripts.pory"
waitmovement 0
# 350 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 351 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 352 "data/maps/Route114/scripts.pory"
end
# 353 "data/maps/Route114/scripts.pory"

# 354 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 355 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 356 "data/maps/Route114/scripts.pory"
	end
# 357 "data/maps/Route114/scripts.pory"

# 358 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 359 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 360 "data/maps/Route114/scripts.pory"
	end
# 361 "data/maps/Route114/scripts.pory"

# 362 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_4::
# 363 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_4PostBattle, MSGBOX_AUTOCLOSE
# 364 "data/maps/Route114/scripts.pory"
	end
# 365 "data/maps/Route114/scripts.pory"

# 366 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 367 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 368 "data/maps/Route114/scripts.pory"
	end
# 369 "data/maps/Route114/scripts.pory"

# 370 "data/maps/Route114/scripts.pory"
Route114_EventScript_KaiClaude::
# 371 "data/maps/Route114/scripts.pory"
lockall
# 372 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_KAI
# 373 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 374 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 375 "data/maps/Route114/scripts.pory"
waitmovement 0
# 376 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 377 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 378 "data/maps/Route114/scripts.pory"
waitmovement 0
# 379 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_KaiIntro MSGBOX_AUTOCLOSE
# 380 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_CLAUDE
# 381 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 382 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 383 "data/maps/Route114/scripts.pory"
waitmovement 0
# 384 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 385 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 386 "data/maps/Route114/scripts.pory"
waitmovement 0
# 387 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_ClaudeIntro MSGBOX_AUTOCLOSE
# 388 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_KaiClaudeDoMultiBattle
# 389 "data/maps/Route114/scripts.pory"
releaseall
# 390 "data/maps/Route114/scripts.pory"
end
# 391 "data/maps/Route114/scripts.pory"

# 392 "data/maps/Route114/scripts.pory"
Route114_EventScript_KaiClaudeDoMultiBattle::
# 393 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 394 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_KAI, Route114_Text_KaiDefeat, TRAINER_CLAUDE, Route114_Text_ClaudeDefeat, PARTNER_EMMIE
# 395 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 396 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_KaiClaudeVictory
# 397 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 398 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 399 "data/maps/Route114/scripts.pory"
waitstate
# 400 "data/maps/Route114/scripts.pory"

# 401 "data/maps/Route114/scripts.pory"
Route114_EventScript_KaiClaudeVictory::
# 402 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 403 "data/maps/Route114/scripts.pory"
waitmovement 0
# 404 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 405 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 406 "data/maps/Route114/scripts.pory"
waitmovement 0
# 407 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 408 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 409 "data/maps/Route114/scripts.pory"
end
# 410 "data/maps/Route114/scripts.pory"

# 411 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 412 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 413 "data/maps/Route114/scripts.pory"
	end
# 414 "data/maps/Route114/scripts.pory"

# 415 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 416 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 417 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 418 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 419 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 420 "data/maps/Route114/scripts.pory"

# 421 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 422 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 423 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 424 "data/maps/Route114/scripts.pory"

# 425 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 426 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 427 "data/maps/Route114/scripts.pory"

# 428 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 429 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 430 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 431 "data/maps/Route114/scripts.pory"

# 432 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 433 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 434 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 435 "data/maps/Route114/scripts.pory"

# 436 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 437 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"
