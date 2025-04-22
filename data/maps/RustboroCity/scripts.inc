# 1 "data/maps/RustboroCity/scripts.pory"

# 2 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 3 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 4 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 5 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 6 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 7 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 8 "data/maps/RustboroCity/scripts.pory"

# 9 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 10 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 11 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 12 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 13 "data/maps/RustboroCity/scripts.pory"

# 14 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 15 "data/maps/RustboroCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 16 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 17 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 19 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 20 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 21 "data/maps/RustboroCity/scripts.pory"
	end
# 22 "data/maps/RustboroCity/scripts.pory"

# 23 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 24 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 25 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 26 "data/maps/RustboroCity/scripts.pory"
	end
# 27 "data/maps/RustboroCity/scripts.pory"

# 28 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 29 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 30 "data/maps/RustboroCity/scripts.pory"
	end
# 31 "data/maps/RustboroCity/scripts.pory"

# 32 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 33 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 34 "data/maps/RustboroCity/scripts.pory"
	return
# 35 "data/maps/RustboroCity/scripts.pory"

# 36 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 37 "data/maps/RustboroCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 38 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 39 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 40 "data/maps/RustboroCity/scripts.pory"

# 41 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 42 "data/maps/RustboroCity/scripts.pory"
	lockall
# 43 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 44 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 45 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 47 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 48 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 49 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 50 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 51 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 52 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 53 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 55 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 57 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 59 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 61 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 62 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 63 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 64 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 66 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 67 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 68 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 69 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 70 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 71 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 72 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 73 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 74 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 76 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 77 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 78 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 79 "data/maps/RustboroCity/scripts.pory"

# 80 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 81 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 82 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 83 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 84 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 85 "data/maps/RustboroCity/scripts.pory"

# 86 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 87 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 88 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 89 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 90 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 92 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 93 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 94 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 95 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 96 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 97 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 98 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 99 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 100 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 101 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 102 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 103 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 104 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 105 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 106 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 107 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 108 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 109 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 110 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 111 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 112 "data/maps/RustboroCity/scripts.pory"
	end
# 113 "data/maps/RustboroCity/scripts.pory"

# 114 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 115 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 116 "data/maps/RustboroCity/scripts.pory"
	step_end
# 117 "data/maps/RustboroCity/scripts.pory"

# 118 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 119 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 120 "data/maps/RustboroCity/scripts.pory"
	step_end
# 121 "data/maps/RustboroCity/scripts.pory"

# 122 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 123 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 124 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 125 "data/maps/RustboroCity/scripts.pory"
	step_end
# 126 "data/maps/RustboroCity/scripts.pory"

# 127 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 128 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 129 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 130 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 131 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 132 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 133 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 134 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 135 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 136 "data/maps/RustboroCity/scripts.pory"
	step_end
# 137 "data/maps/RustboroCity/scripts.pory"

# 138 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 139 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 140 "data/maps/RustboroCity/scripts.pory"
	step_end
# 141 "data/maps/RustboroCity/scripts.pory"

# 142 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 143 "data/maps/RustboroCity/scripts.pory"
	lock
# 144 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 145 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 146 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 147 "data/maps/RustboroCity/scripts.pory"
	release
# 148 "data/maps/RustboroCity/scripts.pory"
	end
# 149 "data/maps/RustboroCity/scripts.pory"

# 150 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 151 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 152 "data/maps/RustboroCity/scripts.pory"
	release
# 153 "data/maps/RustboroCity/scripts.pory"
	end
# 154 "data/maps/RustboroCity/scripts.pory"

# 155 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 156 "data/maps/RustboroCity/scripts.pory"
	lock
# 157 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 158 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 159 "data/maps/RustboroCity/scripts.pory"
	release
# 160 "data/maps/RustboroCity/scripts.pory"
	end
# 161 "data/maps/RustboroCity/scripts.pory"

# 162 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 163 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 164 "data/maps/RustboroCity/scripts.pory"
	end
# 165 "data/maps/RustboroCity/scripts.pory"

# 166 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 167 "data/maps/RustboroCity/scripts.pory"
	lock
# 168 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 169 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 170 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 171 "data/maps/RustboroCity/scripts.pory"
	release
# 172 "data/maps/RustboroCity/scripts.pory"
	end
# 173 "data/maps/RustboroCity/scripts.pory"

# 174 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 175 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 176 "data/maps/RustboroCity/scripts.pory"
	release
# 177 "data/maps/RustboroCity/scripts.pory"
	end
# 178 "data/maps/RustboroCity/scripts.pory"

# 179 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 180 "data/maps/RustboroCity/scripts.pory"
	lock
# 181 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 182 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 183 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 184 "data/maps/RustboroCity/scripts.pory"
	release
# 185 "data/maps/RustboroCity/scripts.pory"
	end
# 186 "data/maps/RustboroCity/scripts.pory"

# 187 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 188 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 189 "data/maps/RustboroCity/scripts.pory"
	release
# 190 "data/maps/RustboroCity/scripts.pory"
	end
# 191 "data/maps/RustboroCity/scripts.pory"

# 192 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 193 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 194 "data/maps/RustboroCity/scripts.pory"
	end
# 195 "data/maps/RustboroCity/scripts.pory"

# 196 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 197 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 198 "data/maps/RustboroCity/scripts.pory"
	end
# 199 "data/maps/RustboroCity/scripts.pory"

# 200 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 201 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 202 "data/maps/RustboroCity/scripts.pory"
	end
# 203 "data/maps/RustboroCity/scripts.pory"

# 204 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 205 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 206 "data/maps/RustboroCity/scripts.pory"
	end
# 207 "data/maps/RustboroCity/scripts.pory"

# 208 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 209 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 210 "data/maps/RustboroCity/scripts.pory"
	end
# 211 "data/maps/RustboroCity/scripts.pory"

# 212 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 213 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 214 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 215 "data/maps/RustboroCity/scripts.pory"
	end
# 216 "data/maps/RustboroCity/scripts.pory"

# 217 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 218 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 219 "data/maps/RustboroCity/scripts.pory"
	end
# 220 "data/maps/RustboroCity/scripts.pory"

# 221 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 222 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 223 "data/maps/RustboroCity/scripts.pory"
	end
# 224 "data/maps/RustboroCity/scripts.pory"

# 225 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 226 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 227 "data/maps/RustboroCity/scripts.pory"
	end
# 228 "data/maps/RustboroCity/scripts.pory"

# 229 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 230 "data/maps/RustboroCity/scripts.pory"
	lock
# 231 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 232 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 233 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 234 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 235 "data/maps/RustboroCity/scripts.pory"
	release
# 236 "data/maps/RustboroCity/scripts.pory"
	end
# 237 "data/maps/RustboroCity/scripts.pory"

# 238 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 239 "data/maps/RustboroCity/scripts.pory"
	lock
# 240 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 241 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 242 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 243 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 244 "data/maps/RustboroCity/scripts.pory"
	release
# 245 "data/maps/RustboroCity/scripts.pory"
	end
# 246 "data/maps/RustboroCity/scripts.pory"

# 247 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 248 "data/maps/RustboroCity/scripts.pory"
	lock
# 249 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 250 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 251 "data/maps/RustboroCity/scripts.pory"
	release
# 252 "data/maps/RustboroCity/scripts.pory"
	end
# 253 "data/maps/RustboroCity/scripts.pory"

# 254 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 255 "data/maps/RustboroCity/scripts.pory"
	lockall
# 256 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 257 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 258 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 259 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 260 "data/maps/RustboroCity/scripts.pory"
	end
# 261 "data/maps/RustboroCity/scripts.pory"

# 262 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 263 "data/maps/RustboroCity/scripts.pory"
	lockall
# 264 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 265 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 266 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 267 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 268 "data/maps/RustboroCity/scripts.pory"
	end
# 269 "data/maps/RustboroCity/scripts.pory"

# 270 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 271 "data/maps/RustboroCity/scripts.pory"
	lockall
# 272 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 273 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 274 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 275 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 276 "data/maps/RustboroCity/scripts.pory"
	end
# 277 "data/maps/RustboroCity/scripts.pory"

# 278 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 279 "data/maps/RustboroCity/scripts.pory"
	lockall
# 280 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 281 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 282 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 283 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 284 "data/maps/RustboroCity/scripts.pory"
	end
# 285 "data/maps/RustboroCity/scripts.pory"

# 286 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 287 "data/maps/RustboroCity/scripts.pory"
	lockall
# 288 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 289 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 290 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 291 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 292 "data/maps/RustboroCity/scripts.pory"
	end
# 293 "data/maps/RustboroCity/scripts.pory"

# 294 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 295 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 296 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 297 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 298 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 299 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 300 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 301 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 302 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 303 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 304 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 306 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 307 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 308 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 310 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 311 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 312 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 313 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 314 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 315 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 316 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 317 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 318 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 319 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 320 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 321 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 322 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 323 "data/maps/RustboroCity/scripts.pory"
	end
# 324 "data/maps/RustboroCity/scripts.pory"

# 325 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 326 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 327 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 328 "data/maps/RustboroCity/scripts.pory"
	return
# 329 "data/maps/RustboroCity/scripts.pory"

# 330 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 331 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 332 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 333 "data/maps/RustboroCity/scripts.pory"
	return
# 334 "data/maps/RustboroCity/scripts.pory"

# 335 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 336 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 337 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 338 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 339 "data/maps/RustboroCity/scripts.pory"
	return
# 340 "data/maps/RustboroCity/scripts.pory"

# 341 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 342 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 343 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 344 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/RustboroCity/scripts.pory"
	return
# 346 "data/maps/RustboroCity/scripts.pory"

# 347 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 348 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 349 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 350 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/RustboroCity/scripts.pory"
	return
# 352 "data/maps/RustboroCity/scripts.pory"

# 353 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 354 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 355 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 356 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 357 "data/maps/RustboroCity/scripts.pory"
	return
# 358 "data/maps/RustboroCity/scripts.pory"

# 359 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 360 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 361 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 362 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 363 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 364 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/RustboroCity/scripts.pory"
	return
# 366 "data/maps/RustboroCity/scripts.pory"

# 367 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 368 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 369 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 370 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 371 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 381 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 382 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 386 "data/maps/RustboroCity/scripts.pory"
	step_end
# 387 "data/maps/RustboroCity/scripts.pory"

# 388 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 403 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 404 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 405 "data/maps/RustboroCity/scripts.pory"
	step_end
# 406 "data/maps/RustboroCity/scripts.pory"

# 407 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 408 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 409 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 410 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 415 "data/maps/RustboroCity/scripts.pory"
	step_end
# 416 "data/maps/RustboroCity/scripts.pory"

# 417 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 423 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 425 "data/maps/RustboroCity/scripts.pory"
	step_end
# 426 "data/maps/RustboroCity/scripts.pory"

# 427 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 428 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 429 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 430 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 431 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 432 "data/maps/RustboroCity/scripts.pory"
	step_end
# 433 "data/maps/RustboroCity/scripts.pory"

# 434 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 435 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 438 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 439 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 440 "data/maps/RustboroCity/scripts.pory"
	step_end
# 441 "data/maps/RustboroCity/scripts.pory"

# 442 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 443 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 446 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 448 "data/maps/RustboroCity/scripts.pory"
	step_end
# 449 "data/maps/RustboroCity/scripts.pory"

# 450 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 451 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 452 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 453 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 454 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 455 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 456 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 457 "data/maps/RustboroCity/scripts.pory"
	step_end
# 458 "data/maps/RustboroCity/scripts.pory"

# 459 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 460 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 461 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 462 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 463 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 464 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 465 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 466 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 467 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 468 "data/maps/RustboroCity/scripts.pory"
	step_end
# 469 "data/maps/RustboroCity/scripts.pory"

# 470 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 471 "data/maps/RustboroCity/scripts.pory"
	lock
# 472 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 473 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 474 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 475 "data/maps/RustboroCity/scripts.pory"
	release
# 476 "data/maps/RustboroCity/scripts.pory"
	end
# 477 "data/maps/RustboroCity/scripts.pory"

# 478 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 479 "data/maps/RustboroCity/scripts.pory"
	waitse
# 480 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 481 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 482 "data/maps/RustboroCity/scripts.pory"
	end
# 483 "data/maps/RustboroCity/scripts.pory"

# 484 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 485 "data/maps/RustboroCity/scripts.pory"
	lockall
# 486 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 487 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 488 "data/maps/RustboroCity/scripts.pory"
	end
# 489 "data/maps/RustboroCity/scripts.pory"

# 490 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 491 "data/maps/RustboroCity/scripts.pory"
	lockall
# 492 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 493 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 494 "data/maps/RustboroCity/scripts.pory"
	end
# 495 "data/maps/RustboroCity/scripts.pory"

# 496 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 497 "data/maps/RustboroCity/scripts.pory"
	lockall
# 498 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 499 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 500 "data/maps/RustboroCity/scripts.pory"
	end
# 501 "data/maps/RustboroCity/scripts.pory"

# 502 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 503 "data/maps/RustboroCity/scripts.pory"
	lockall
# 504 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 505 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 506 "data/maps/RustboroCity/scripts.pory"
	end
# 507 "data/maps/RustboroCity/scripts.pory"

# 508 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 509 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 510 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 511 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 512 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 513 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 514 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 515 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 516 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 517 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 518 "data/maps/RustboroCity/scripts.pory"
	end
# 519 "data/maps/RustboroCity/scripts.pory"

# 520 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 521 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 522 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 523 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 525 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 526 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 527 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 528 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 529 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 530 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/RustboroCity/scripts.pory"
	return
# 532 "data/maps/RustboroCity/scripts.pory"

# 533 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 534 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 535 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 537 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 538 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 540 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 542 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/RustboroCity/scripts.pory"
	return
# 544 "data/maps/RustboroCity/scripts.pory"

# 545 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 546 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 547 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 549 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 550 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 552 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 554 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 555 "data/maps/RustboroCity/scripts.pory"
	return
# 556 "data/maps/RustboroCity/scripts.pory"

# 557 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 558 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 559 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 560 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 561 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 562 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 563 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 564 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 566 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 567 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 568 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 569 "data/maps/RustboroCity/scripts.pory"
	return
# 570 "data/maps/RustboroCity/scripts.pory"

# 571 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 572 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 573 "data/maps/RustboroCity/scripts.pory"
	step_end
# 574 "data/maps/RustboroCity/scripts.pory"

# 575 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 576 "data/maps/RustboroCity/scripts.pory"
	lockall
# 577 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 578 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 579 "data/maps/RustboroCity/scripts.pory"
	end
# 580 "data/maps/RustboroCity/scripts.pory"

# 581 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 582 "data/maps/RustboroCity/scripts.pory"
	lockall
# 583 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 584 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 585 "data/maps/RustboroCity/scripts.pory"
	end
# 586 "data/maps/RustboroCity/scripts.pory"

# 587 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 588 "data/maps/RustboroCity/scripts.pory"
	lockall
# 589 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 590 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 591 "data/maps/RustboroCity/scripts.pory"
	end
# 592 "data/maps/RustboroCity/scripts.pory"

# 593 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 594 "data/maps/RustboroCity/scripts.pory"
	lockall
# 595 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 596 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 597 "data/maps/RustboroCity/scripts.pory"
	end
# 598 "data/maps/RustboroCity/scripts.pory"

# 599 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 600 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 601 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 602 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 603 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 604 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 605 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 606 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 607 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 608 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 609 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 610 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 611 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 612 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 613 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 614 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 615 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 616 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 617 "data/maps/RustboroCity/scripts.pory"
	end
# 618 "data/maps/RustboroCity/scripts.pory"

# 619 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 620 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 621 "data/maps/RustboroCity/scripts.pory"
	return
# 622 "data/maps/RustboroCity/scripts.pory"

# 623 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 624 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 625 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 627 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 628 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 630 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 632 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/RustboroCity/scripts.pory"
	return
# 634 "data/maps/RustboroCity/scripts.pory"

# 635 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 636 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 637 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 639 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 640 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 642 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 644 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/RustboroCity/scripts.pory"
	return
# 646 "data/maps/RustboroCity/scripts.pory"

# 647 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 648 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 649 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 651 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 652 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 654 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 656 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/RustboroCity/scripts.pory"
	return
# 658 "data/maps/RustboroCity/scripts.pory"

# 659 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 660 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 661 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 663 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 664 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 665 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 666 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 668 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 670 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 671 "data/maps/RustboroCity/scripts.pory"
	return
# 672 "data/maps/RustboroCity/scripts.pory"

# 673 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 674 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 675 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 676 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 677 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 678 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 679 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 680 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 681 "data/maps/RustboroCity/scripts.pory"
	return
# 682 "data/maps/RustboroCity/scripts.pory"

# 683 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 684 "data/maps/RustboroCity/scripts.pory"
	lockall
# 685 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 686 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 687 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 688 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 689 "data/maps/RustboroCity/scripts.pory"

# 690 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 691 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 692 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 693 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 694 "data/maps/RustboroCity/scripts.pory"
	return
# 695 "data/maps/RustboroCity/scripts.pory"

# 696 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 697 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 698 "data/maps/RustboroCity/scripts.pory"
	return
# 699 "data/maps/RustboroCity/scripts.pory"

# 700 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 701 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 702 "data/maps/RustboroCity/scripts.pory"
	return
# 703 "data/maps/RustboroCity/scripts.pory"

# 704 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 705 "data/maps/RustboroCity/scripts.pory"
	lockall
# 706 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 707 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 708 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 709 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 710 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 711 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 712 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 713 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 714 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 715 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 717 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 718 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 719 "data/maps/RustboroCity/scripts.pory"

# 720 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 721 "data/maps/RustboroCity/scripts.pory"
	lockall
# 722 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 723 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 724 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 725 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 726 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 727 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 728 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 729 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 730 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 731 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 733 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 734 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 735 "data/maps/RustboroCity/scripts.pory"

# 736 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 737 "data/maps/RustboroCity/scripts.pory"
	lockall
# 738 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 739 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 740 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 741 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 742 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 743 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 745 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 746 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 747 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 748 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 749 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 750 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 751 "data/maps/RustboroCity/scripts.pory"

# 752 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 753 "data/maps/RustboroCity/scripts.pory"
	lockall
# 754 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 755 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 756 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 757 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 758 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 759 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 760 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 761 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 762 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 763 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 765 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 766 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 767 "data/maps/RustboroCity/scripts.pory"

# 768 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 769 "data/maps/RustboroCity/scripts.pory"
	lockall
# 770 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 771 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 772 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 773 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 774 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 775 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 776 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 777 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 778 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 779 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 780 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 781 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 782 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 783 "data/maps/RustboroCity/scripts.pory"

# 784 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 785 "data/maps/RustboroCity/scripts.pory"
	lockall
# 786 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 787 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 788 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 789 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 790 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 791 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 792 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 793 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 794 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 795 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 796 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 797 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 798 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 799 "data/maps/RustboroCity/scripts.pory"

# 800 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 801 "data/maps/RustboroCity/scripts.pory"
	lockall
# 802 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 803 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 804 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 805 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 806 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 807 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 808 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 809 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 810 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 811 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 813 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 815 "data/maps/RustboroCity/scripts.pory"

# 816 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 817 "data/maps/RustboroCity/scripts.pory"
	lockall
# 818 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 819 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 820 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 821 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 822 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 823 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 824 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 825 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 826 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 827 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 829 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 830 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 831 "data/maps/RustboroCity/scripts.pory"

# 832 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 833 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 834 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 835 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 836 "data/maps/RustboroCity/scripts.pory"
	end
# 837 "data/maps/RustboroCity/scripts.pory"

# 838 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 839 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 840 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 841 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 842 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 843 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 844 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 845 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 846 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 847 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 848 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 849 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 850 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 851 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 852 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 853 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 854 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 855 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 856 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 857 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 858 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 859 "data/maps/RustboroCity/scripts.pory"
	end
# 860 "data/maps/RustboroCity/scripts.pory"

# 861 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 862 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 863 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 864 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 865 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 866 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 867 "data/maps/RustboroCity/scripts.pory"
	end
# 868 "data/maps/RustboroCity/scripts.pory"

# 869 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 870 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 871 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 872 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 873 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 874 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 875 "data/maps/RustboroCity/scripts.pory"
	end
# 876 "data/maps/RustboroCity/scripts.pory"

# 877 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 878 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 879 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 880 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 881 "data/maps/RustboroCity/scripts.pory"
	end
# 882 "data/maps/RustboroCity/scripts.pory"

# 883 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 884 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 885 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 886 "data/maps/RustboroCity/scripts.pory"
	return
# 887 "data/maps/RustboroCity/scripts.pory"

# 888 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 889 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 890 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 891 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 892 "data/maps/RustboroCity/scripts.pory"
	end
# 893 "data/maps/RustboroCity/scripts.pory"

# 894 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 895 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 896 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 897 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 898 "data/maps/RustboroCity/scripts.pory"
	end
# 899 "data/maps/RustboroCity/scripts.pory"

# 900 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 901 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 902 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 903 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 904 "data/maps/RustboroCity/scripts.pory"
	end
# 905 "data/maps/RustboroCity/scripts.pory"

# 906 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 907 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 908 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 909 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 910 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 911 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 912 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 913 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 914 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 915 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 916 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 917 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 918 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 919 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 920 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 921 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 922 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 923 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 924 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 925 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 926 "data/maps/RustboroCity/scripts.pory"
	end
# 927 "data/maps/RustboroCity/scripts.pory"

# 928 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 929 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 930 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 931 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 932 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 933 "data/maps/RustboroCity/scripts.pory"
	end
# 934 "data/maps/RustboroCity/scripts.pory"

# 935 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 936 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 937 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 938 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 939 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 940 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 941 "data/maps/RustboroCity/scripts.pory"
	end
# 942 "data/maps/RustboroCity/scripts.pory"

# 943 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 944 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 945 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 946 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 947 "data/maps/RustboroCity/scripts.pory"
	end
# 948 "data/maps/RustboroCity/scripts.pory"

# 949 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 950 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 951 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 952 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 953 "data/maps/RustboroCity/scripts.pory"
	end
# 954 "data/maps/RustboroCity/scripts.pory"

# 955 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 956 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 957 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 958 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 959 "data/maps/RustboroCity/scripts.pory"
	end
# 960 "data/maps/RustboroCity/scripts.pory"

# 961 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 962 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 963 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 964 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 965 "data/maps/RustboroCity/scripts.pory"
	end
# 966 "data/maps/RustboroCity/scripts.pory"

# 967 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 968 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 969 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 970 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 971 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 972 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 973 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 974 "data/maps/RustboroCity/scripts.pory"
	step_end
# 975 "data/maps/RustboroCity/scripts.pory"

# 976 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 977 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 978 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 979 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 980 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 981 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 982 "data/maps/RustboroCity/scripts.pory"
	step_end
# 983 "data/maps/RustboroCity/scripts.pory"

# 984 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 985 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 986 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 987 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 988 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 989 "data/maps/RustboroCity/scripts.pory"
	step_end
# 990 "data/maps/RustboroCity/scripts.pory"

# 991 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 992 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 993 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 994 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 995 "data/maps/RustboroCity/scripts.pory"
	step_end
# 996 "data/maps/RustboroCity/scripts.pory"

# 997 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 998 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 999 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1000 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1001 "data/maps/RustboroCity/scripts.pory"

# 1002 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1003 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1004 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1005 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1006 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1007 "data/maps/RustboroCity/scripts.pory"

# 1008 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1009 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1010 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1011 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1012 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1013 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1014 "data/maps/RustboroCity/scripts.pory"

# 1015 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1016 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1017 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1018 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1019 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1020 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1021 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1022 "data/maps/RustboroCity/scripts.pory"

# 1023 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1024 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1025 "data/maps/RustboroCity/scripts.pory"
	end
# 1026 "data/maps/RustboroCity/scripts.pory"

# 1027 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1028 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1029 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1030 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1031 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1032 "data/maps/RustboroCity/scripts.pory"

# 1033 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1034 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1036 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1037 "data/maps/RustboroCity/scripts.pory"

# 1038 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1039 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1040 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1041 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1042 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1043 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1044 "data/maps/RustboroCity/scripts.pory"

# 1045 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1046 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1049 "data/maps/RustboroCity/scripts.pory"

# 1050 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1055 "data/maps/RustboroCity/scripts.pory"

# 1056 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 1062 "data/maps/RustboroCity/scripts.pory"

# 1063 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1067 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1068 "data/maps/RustboroCity/scripts.pory"

# 1069 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1070 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1072 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1076 "data/maps/RustboroCity/scripts.pory"

# 1077 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1078 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1081 "data/maps/RustboroCity/scripts.pory"

# 1082 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1085 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1086 "data/maps/RustboroCity/scripts.pory"

# 1087 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1089 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1090 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1091 "data/maps/RustboroCity/scripts.pory"

# 1092 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1094 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1095 "data/maps/RustboroCity/scripts.pory"

# 1096 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1098 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1099 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1100 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1101 "data/maps/RustboroCity/scripts.pory"

# 1102 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1105 "data/maps/RustboroCity/scripts.pory"

# 1106 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1108 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1109 "data/maps/RustboroCity/scripts.pory"

# 1110 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1112 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1118 "data/maps/RustboroCity/scripts.pory"

# 1119 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1122 "data/maps/RustboroCity/scripts.pory"

# 1123 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1124 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1128 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1131 "data/maps/RustboroCity/scripts.pory"

# 1132 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1135 "data/maps/RustboroCity/scripts.pory"

# 1136 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1139 "data/maps/RustboroCity/scripts.pory"

# 1140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1141 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1147 "data/maps/RustboroCity/scripts.pory"

# 1148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1149 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1151 "data/maps/RustboroCity/scripts.pory"

# 1152 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1153 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1156 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1161 "data/maps/RustboroCity/scripts.pory"

# 1162 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1165 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1167 "data/maps/RustboroCity/scripts.pory"

# 1168 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1169 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1171 "data/maps/RustboroCity/scripts.pory"

# 1172 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1175 "data/maps/RustboroCity/scripts.pory"

# 1176 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1179 "data/maps/RustboroCity/scripts.pory"

# 1180 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1185 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1186 "data/maps/RustboroCity/scripts.pory"

# 1187 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1189 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1193 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1194 "data/maps/RustboroCity/scripts.pory"

# 1195 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1197 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1198 "data/maps/RustboroCity/scripts.pory"

# 1199 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1208 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1209 "data/maps/RustboroCity/scripts.pory"

# 1210 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1213 "data/maps/RustboroCity/scripts.pory"

# 1214 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1215 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1216 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1217 "data/maps/RustboroCity/scripts.pory"

# 1218 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1221 "data/maps/RustboroCity/scripts.pory"

# 1222 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1225 "data/maps/RustboroCity/scripts.pory"

# 1226 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1227 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1231 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1232 "data/maps/RustboroCity/scripts.pory"

# 1233 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1235 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1238 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1239 "data/maps/RustboroCity/scripts.pory"

# 1240 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1241 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1244 "data/maps/RustboroCity/scripts.pory"

# 1245 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1246 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1249 "data/maps/RustboroCity/scripts.pory"

# 1250 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1254 "data/maps/RustboroCity/scripts.pory"

# 1255 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1259 "data/maps/RustboroCity/scripts.pory"

# 1260 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1261 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1262 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1264 "data/maps/RustboroCity/scripts.pory"

# 1265 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1266 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1267 "data/maps/RustboroCity/scripts.pory"

# 1268 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1274 "data/maps/RustboroCity/scripts.pory"

# 1275 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1276 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1277 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1280 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1281 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1286 "data/maps/RustboroCity/scripts.pory"

# 1287 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1288 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1289 "data/maps/RustboroCity/scripts.pory"

# 1290 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1291 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1292 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1293 "data/maps/RustboroCity/scripts.pory"

# 1294 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1295 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1296 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1299 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1300 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1301 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"
