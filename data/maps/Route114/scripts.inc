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
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 36 "data/maps/Route114/scripts.pory"
	.2byte 0
# 37 "data/maps/Route114/scripts.pory"

# 38 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 39 "data/maps/Route114/scripts.pory"
	lock
# 40 "data/maps/Route114/scripts.pory"
	faceplayer
# 41 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 42 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 43 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 44 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 45 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 46 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 47 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 48 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 49 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 50 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 51 "data/maps/Route114/scripts.pory"
	release
# 52 "data/maps/Route114/scripts.pory"
	end
# 53 "data/maps/Route114/scripts.pory"

# 54 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 55 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 56 "data/maps/Route114/scripts.pory"
	release
# 57 "data/maps/Route114/scripts.pory"
	end
# 58 "data/maps/Route114/scripts.pory"

# 59 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 60 "data/maps/Route114/scripts.pory"
	lock
# 61 "data/maps/Route114/scripts.pory"
	faceplayer
# 62 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 63 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 64 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 65 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 66 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 67 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 68 "data/maps/Route114/scripts.pory"
	release
# 69 "data/maps/Route114/scripts.pory"
	end
# 70 "data/maps/Route114/scripts.pory"

# 71 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 72 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 73 "data/maps/Route114/scripts.pory"
	release
# 74 "data/maps/Route114/scripts.pory"
	end
# 75 "data/maps/Route114/scripts.pory"

# 76 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 77 "data/maps/Route114/scripts.pory"
	lock
# 78 "data/maps/Route114/scripts.pory"
	faceplayer
# 79 "data/maps/Route114/scripts.pory"
	waitse
# 80 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 81 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 82 "data/maps/Route114/scripts.pory"
	waitmoncry
# 83 "data/maps/Route114/scripts.pory"
	release
# 84 "data/maps/Route114/scripts.pory"
	end
# 85 "data/maps/Route114/scripts.pory"

# 86 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 87 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 88 "data/maps/Route114/scripts.pory"
	end
# 89 "data/maps/Route114/scripts.pory"

# 90 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 91 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 92 "data/maps/Route114/scripts.pory"
	end
# 93 "data/maps/Route114/scripts.pory"

# 94 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 95 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 96 "data/maps/Route114/scripts.pory"
	end
# 97 "data/maps/Route114/scripts.pory"

# 98 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4::
# 99 "data/maps/Route114/scripts.pory"
lockall
# 100 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_3
# 101 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 102 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 103 "data/maps/Route114/scripts.pory"
waitmovement 0
# 104 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 105 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 106 "data/maps/Route114/scripts.pory"
waitmovement 0
# 107 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_3Intro MSGBOX_AUTOCLOSE
# 108 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_4
# 109 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 110 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 111 "data/maps/Route114/scripts.pory"
waitmovement 0
# 112 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 113 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 114 "data/maps/Route114/scripts.pory"
waitmovement 0
# 115 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_4Intro, MSGBOX_AUTOCLOSE
# 116 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4DoMultiBattle
# 117 "data/maps/Route114/scripts.pory"
releaseall
# 118 "data/maps/Route114/scripts.pory"
end
# 119 "data/maps/Route114/scripts.pory"

# 120 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4DoMultiBattle::
# 121 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 122 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_3, Route114_Text_Grunt_Route_114_3Defeat, TRAINER_GRUNT_ROUTE_114_4, Route114_Text_Grunt_Route_114_4Defeat, PARTNER_EMMIE
# 123 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 124 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4Victory
# 125 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 126 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 127 "data/maps/Route114/scripts.pory"
waitstate
# 128 "data/maps/Route114/scripts.pory"

# 129 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3Grunt_Route_114_4Victory::
# 130 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 131 "data/maps/Route114/scripts.pory"
waitmovement 0
# 132 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_3PostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 134 "data/maps/Route114/scripts.pory"
waitmovement 0
# 135 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_4PostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 137 "data/maps/Route114/scripts.pory"
end
# 138 "data/maps/Route114/scripts.pory"

# 139 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_3::
# 140 "data/maps/Route114/scripts.pory"
	faceplayer
# 141 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_3PostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/Route114/scripts.pory"
	end
# 143 "data/maps/Route114/scripts.pory"

# 144 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_2::
# 145 "data/maps/Route114/scripts.pory"
	faceplayer
# 146 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_2PostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/Route114/scripts.pory"
	end
# 148 "data/maps/Route114/scripts.pory"

# 149 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_6::
# 150 "data/maps/Route114/scripts.pory"
	faceplayer
# 151 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_6PostBattle, MSGBOX_AUTOCLOSE
# 152 "data/maps/Route114/scripts.pory"
	end
# 153 "data/maps/Route114/scripts.pory"

# 154 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6::
# 155 "data/maps/Route114/scripts.pory"
lockall
# 156 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_5
# 157 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 158 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 159 "data/maps/Route114/scripts.pory"
waitmovement 0
# 160 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 161 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 162 "data/maps/Route114/scripts.pory"
waitmovement 0
# 163 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_5Intro MSGBOX_AUTOCLOSE
# 164 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_6
# 165 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 166 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 167 "data/maps/Route114/scripts.pory"
waitmovement 0
# 168 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 169 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 170 "data/maps/Route114/scripts.pory"
waitmovement 0
# 171 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_6Intro, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6DoMultiBattle
# 173 "data/maps/Route114/scripts.pory"
releaseall
# 174 "data/maps/Route114/scripts.pory"
end
# 175 "data/maps/Route114/scripts.pory"

# 176 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6DoMultiBattle::
# 177 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 178 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_5, Route114_Text_Grunt_Route_114_5Defeat, TRAINER_GRUNT_ROUTE_114_6, Route114_Text_Grunt_Route_114_6Defeat, PARTNER_EMMIE
# 179 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 180 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6Victory
# 181 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 182 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 183 "data/maps/Route114/scripts.pory"
waitstate
# 184 "data/maps/Route114/scripts.pory"

# 185 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5Grunt_Route_114_6Victory::
# 186 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 187 "data/maps/Route114/scripts.pory"
waitmovement 0
# 188 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_5PostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 190 "data/maps/Route114/scripts.pory"
waitmovement 0
# 191 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_6PostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 193 "data/maps/Route114/scripts.pory"
end
# 194 "data/maps/Route114/scripts.pory"

# 195 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_5::
# 196 "data/maps/Route114/scripts.pory"
	faceplayer
# 197 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_5PostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route114/scripts.pory"
	end
# 199 "data/maps/Route114/scripts.pory"

# 200 "data/maps/Route114/scripts.pory"
Route114_EventScript_SteveCharlotte::
# 201 "data/maps/Route114/scripts.pory"
lockall
# 202 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_STEVE
# 203 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 204 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 205 "data/maps/Route114/scripts.pory"
waitmovement 0
# 206 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 207 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 208 "data/maps/Route114/scripts.pory"
waitmovement 0
# 209 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_SteveIntro MSGBOX_AUTOCLOSE
# 210 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_CHARLOTTE
# 211 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 212 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 213 "data/maps/Route114/scripts.pory"
waitmovement 0
# 214 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 215 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 216 "data/maps/Route114/scripts.pory"
waitmovement 0
# 217 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_CharlotteIntro, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_SteveCharlotteDoMultiBattle
# 219 "data/maps/Route114/scripts.pory"
releaseall
# 220 "data/maps/Route114/scripts.pory"
end
# 221 "data/maps/Route114/scripts.pory"

# 222 "data/maps/Route114/scripts.pory"
Route114_EventScript_SteveCharlotteDoMultiBattle::
# 223 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 224 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_STEVE_1, Route114_Text_SteveDefeat, TRAINER_CHARLOTTE, Route114_Text_CharlotteDefeat, PARTNER_EMMIE
# 225 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 226 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_SteveCharlotteVictory
# 227 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 228 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 229 "data/maps/Route114/scripts.pory"
waitstate
# 230 "data/maps/Route114/scripts.pory"

# 231 "data/maps/Route114/scripts.pory"
Route114_EventScript_SteveCharlotteVictory::
# 232 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 233 "data/maps/Route114/scripts.pory"
waitmovement 0
# 234 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_StevePostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 236 "data/maps/Route114/scripts.pory"
waitmovement 0
# 237 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 239 "data/maps/Route114/scripts.pory"
end
# 240 "data/maps/Route114/scripts.pory"

# 241 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 242 "data/maps/Route114/scripts.pory"
	faceplayer
# 243 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 244 "data/maps/Route114/scripts.pory"
	release
# 245 "data/maps/Route114/scripts.pory"
	end
# 246 "data/maps/Route114/scripts.pory"

# 247 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 248 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 249 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 250 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 251 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 252 "data/maps/Route114/scripts.pory"
	release
# 253 "data/maps/Route114/scripts.pory"
	end
# 254 "data/maps/Route114/scripts.pory"

# 255 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 256 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 257 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route114/scripts.pory"
	end
# 259 "data/maps/Route114/scripts.pory"

# 260 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2::
# 261 "data/maps/Route114/scripts.pory"
lockall
# 262 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_1
# 263 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 264 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 265 "data/maps/Route114/scripts.pory"
waitmovement 0
# 266 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 267 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 268 "data/maps/Route114/scripts.pory"
waitmovement 0
# 269 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_1Intro MSGBOX_AUTOCLOSE
# 270 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT_ROUTE_114_2
# 271 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 272 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 273 "data/maps/Route114/scripts.pory"
waitmovement 0
# 274 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 275 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 276 "data/maps/Route114/scripts.pory"
waitmovement 0
# 277 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_2Intro, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2DoMultiBattle
# 279 "data/maps/Route114/scripts.pory"
releaseall
# 280 "data/maps/Route114/scripts.pory"
end
# 281 "data/maps/Route114/scripts.pory"

# 282 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2DoMultiBattle::
# 283 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 284 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_ROUTE_114_1, Route114_Text_Grunt_Route_114_1Defeat, TRAINER_GRUNT_ROUTE_114_2, Route114_Text_Grunt_Route_114_2Defeat, PARTNER_EMMIE
# 285 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 286 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2Victory
# 287 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 288 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 289 "data/maps/Route114/scripts.pory"
waitstate
# 290 "data/maps/Route114/scripts.pory"

# 291 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1Grunt_Route_114_2Victory::
# 292 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 293 "data/maps/Route114/scripts.pory"
waitmovement 0
# 294 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_1PostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 296 "data/maps/Route114/scripts.pory"
waitmovement 0
# 297 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_Grunt_Route_114_2PostBattle, MSGBOX_AUTOCLOSE
# 298 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 299 "data/maps/Route114/scripts.pory"
end
# 300 "data/maps/Route114/scripts.pory"

# 301 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_1::
# 302 "data/maps/Route114/scripts.pory"
	faceplayer
# 303 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_1PostBattle, MSGBOX_DEFAULT
# 304 "data/maps/Route114/scripts.pory"
	release
# 305 "data/maps/Route114/scripts.pory"
	end
# 306 "data/maps/Route114/scripts.pory"

# 307 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 308 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 309 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 310 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 311 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_2
# 312 "data/maps/Route114/scripts.pory"
	release
# 313 "data/maps/Route114/scripts.pory"
	end
# 314 "data/maps/Route114/scripts.pory"

# 315 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 316 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_2, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 317 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route114/scripts.pory"
	end
# 319 "data/maps/Route114/scripts.pory"

# 320 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 321 "data/maps/Route114/scripts.pory"
	faceplayer
# 322 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 323 "data/maps/Route114/scripts.pory"
	end
# 324 "data/maps/Route114/scripts.pory"

# 325 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 326 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 327 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 328 "data/maps/Route114/scripts.pory"
	end
# 329 "data/maps/Route114/scripts.pory"

# 330 "data/maps/Route114/scripts.pory"
Route114_EventScript_IvyTyra::
# 331 "data/maps/Route114/scripts.pory"
lockall
# 332 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_IVY
# 333 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 334 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 335 "data/maps/Route114/scripts.pory"
waitmovement 0
# 336 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 337 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 338 "data/maps/Route114/scripts.pory"
waitmovement 0
# 339 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_IvyIntro, MSGBOX_AUTOCLOSE
# 340 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_IvyTyraDoMultiBattle
# 341 "data/maps/Route114/scripts.pory"
releaseall
# 342 "data/maps/Route114/scripts.pory"
end
# 343 "data/maps/Route114/scripts.pory"

# 344 "data/maps/Route114/scripts.pory"
Route114_EventScript_IvyTyraDoMultiBattle::
# 345 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 346 "data/maps/Route114/scripts.pory"
multi_2p_vs_1 TRAINER_TYRA_AND_IVY, Route114_Text_IvyDefeat, PARTNER_EMMIE
# 347 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 348 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_IvyTyraVictory
# 349 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 350 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 351 "data/maps/Route114/scripts.pory"
waitstate
# 352 "data/maps/Route114/scripts.pory"

# 353 "data/maps/Route114/scripts.pory"
Route114_EventScript_IvyTyraVictory::
# 354 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 355 "data/maps/Route114/scripts.pory"
waitmovement 0
# 356 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 357 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 358 "data/maps/Route114/scripts.pory"
end
# 359 "data/maps/Route114/scripts.pory"

# 360 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 361 "data/maps/Route114/scripts.pory"
	faceplayer
# 362 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 363 "data/maps/Route114/scripts.pory"
	end
# 364 "data/maps/Route114/scripts.pory"

# 365 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 366 "data/maps/Route114/scripts.pory"
	faceplayer
# 367 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 368 "data/maps/Route114/scripts.pory"
	end
# 369 "data/maps/Route114/scripts.pory"

# 370 "data/maps/Route114/scripts.pory"
Route114_EventScript_Grunt_Route_114_4::
# 371 "data/maps/Route114/scripts.pory"
	faceplayer
# 372 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Grunt_Route_114_4PostBattle, MSGBOX_AUTOCLOSE
# 373 "data/maps/Route114/scripts.pory"
	end
# 374 "data/maps/Route114/scripts.pory"

# 375 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 376 "data/maps/Route114/scripts.pory"
	faceplayer
# 377 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 378 "data/maps/Route114/scripts.pory"
	end
# 379 "data/maps/Route114/scripts.pory"

# 380 "data/maps/Route114/scripts.pory"
Route114_EventScript_KaiClaude::
# 381 "data/maps/Route114/scripts.pory"
lockall
# 382 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_KAI
# 383 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 384 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 385 "data/maps/Route114/scripts.pory"
waitmovement 0
# 386 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 387 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 388 "data/maps/Route114/scripts.pory"
waitmovement 0
# 389 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_KaiIntro MSGBOX_AUTOCLOSE
# 390 "data/maps/Route114/scripts.pory"
setvar VAR_0x8008, LOCALID_CLAUDE
# 391 "data/maps/Route114/scripts.pory"
playse SE_PIN
# 392 "data/maps/Route114/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 393 "data/maps/Route114/scripts.pory"
waitmovement 0
# 394 "data/maps/Route114/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 395 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 396 "data/maps/Route114/scripts.pory"
waitmovement 0
# 397 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_ClaudeIntro, MSGBOX_AUTOCLOSE
# 398 "data/maps/Route114/scripts.pory"
goto Route114_EventScript_KaiClaudeDoMultiBattle
# 399 "data/maps/Route114/scripts.pory"
releaseall
# 400 "data/maps/Route114/scripts.pory"
end
# 401 "data/maps/Route114/scripts.pory"

# 402 "data/maps/Route114/scripts.pory"
Route114_EventScript_KaiClaudeDoMultiBattle::
# 403 "data/maps/Route114/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 404 "data/maps/Route114/scripts.pory"
multi_2p_vs_2 TRAINER_KAI, Route114_Text_KaiDefeat, TRAINER_CLAUDE, Route114_Text_ClaudeDefeat, PARTNER_EMMIE
# 405 "data/maps/Route114/scripts.pory"
switch VAR_RESULT
# 406 "data/maps/Route114/scripts.pory"
case 1, Route114_EventScript_KaiClaudeVictory
# 407 "data/maps/Route114/scripts.pory"
fadescreen FADE_TO_BLACK
# 408 "data/maps/Route114/scripts.pory"
special SetCB2WhiteOut
# 409 "data/maps/Route114/scripts.pory"
waitstate
# 410 "data/maps/Route114/scripts.pory"

# 411 "data/maps/Route114/scripts.pory"
Route114_EventScript_KaiClaudeVictory::
# 412 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 413 "data/maps/Route114/scripts.pory"
waitmovement 0
# 414 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 415 "data/maps/Route114/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 416 "data/maps/Route114/scripts.pory"
waitmovement 0
# 417 "data/maps/Route114/scripts.pory"
msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 418 "data/maps/Route114/scripts.pory"
addvar VAR_ROUTE114_STATE, 1
# 419 "data/maps/Route114/scripts.pory"
end
# 420 "data/maps/Route114/scripts.pory"

# 421 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 422 "data/maps/Route114/scripts.pory"
	faceplayer
# 423 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 424 "data/maps/Route114/scripts.pory"
	end
# 425 "data/maps/Route114/scripts.pory"

# 426 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 427 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 428 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 429 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 430 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 431 "data/maps/Route114/scripts.pory"

# 432 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 433 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 434 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 435 "data/maps/Route114/scripts.pory"

# 436 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 437 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 438 "data/maps/Route114/scripts.pory"

# 439 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 440 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 441 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 442 "data/maps/Route114/scripts.pory"

# 443 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 444 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 445 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 446 "data/maps/Route114/scripts.pory"

# 447 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 448 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"
