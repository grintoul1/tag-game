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
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 17 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 18 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 19 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 20 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 21 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 22 "data/maps/RustboroCity/scripts.pory"
	end
# 23 "data/maps/RustboroCity/scripts.pory"

# 24 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 25 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 26 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 27 "data/maps/RustboroCity/scripts.pory"
	end
# 28 "data/maps/RustboroCity/scripts.pory"

# 29 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 30 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 31 "data/maps/RustboroCity/scripts.pory"
	end
# 32 "data/maps/RustboroCity/scripts.pory"

# 33 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 34 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 35 "data/maps/RustboroCity/scripts.pory"
	return
# 36 "data/maps/RustboroCity/scripts.pory"

# 37 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 38 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 39 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 4, RustboroCity_EventScript_ProgressEmmieState
# 40 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 6, RustboroCity_EventScript_ProgressEmmieState
# 41 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 42 "data/maps/RustboroCity/scripts.pory"

# 43 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ProgressEmmieState::
# 44 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 5
# 45 "data/maps/RustboroCity/scripts.pory"
	return
# 46 "data/maps/RustboroCity/scripts.pory"

# 47 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 48 "data/maps/RustboroCity/scripts.pory"
	lockall
# 49 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 50 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 51 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 53 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 54 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 55 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 56 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 58 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 59 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 61 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 62 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 63 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 64 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 65 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 66 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 67 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 68 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 69 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 70 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 72 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 73 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 74 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 75 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 76 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 77 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 78 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 79 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 80 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 81 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 82 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 83 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 84 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 85 "data/maps/RustboroCity/scripts.pory"

# 86 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 87 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 88 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 89 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 90 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 91 "data/maps/RustboroCity/scripts.pory"

# 92 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 93 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 94 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 95 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 96 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 97 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 98 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 99 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 100 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 101 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 102 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 103 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 104 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 105 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 106 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 107 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 108 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 109 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 110 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 111 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 112 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 113 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 114 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 115 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 116 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 117 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 118 "data/maps/RustboroCity/scripts.pory"
	end
# 119 "data/maps/RustboroCity/scripts.pory"

# 120 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 121 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 122 "data/maps/RustboroCity/scripts.pory"
	step_end
# 123 "data/maps/RustboroCity/scripts.pory"

# 124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 125 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 126 "data/maps/RustboroCity/scripts.pory"
	step_end
# 127 "data/maps/RustboroCity/scripts.pory"

# 128 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 129 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 130 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 131 "data/maps/RustboroCity/scripts.pory"
	step_end
# 132 "data/maps/RustboroCity/scripts.pory"

# 133 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 134 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 135 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 136 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 137 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 138 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 139 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 140 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 141 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 142 "data/maps/RustboroCity/scripts.pory"
	step_end
# 143 "data/maps/RustboroCity/scripts.pory"

# 144 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 145 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 146 "data/maps/RustboroCity/scripts.pory"
	step_end
# 147 "data/maps/RustboroCity/scripts.pory"

# 148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 149 "data/maps/RustboroCity/scripts.pory"
	lock
# 150 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 151 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 152 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 153 "data/maps/RustboroCity/scripts.pory"
	release
# 154 "data/maps/RustboroCity/scripts.pory"
	end
# 155 "data/maps/RustboroCity/scripts.pory"

# 156 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 157 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 158 "data/maps/RustboroCity/scripts.pory"
	release
# 159 "data/maps/RustboroCity/scripts.pory"
	end
# 160 "data/maps/RustboroCity/scripts.pory"

# 161 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 162 "data/maps/RustboroCity/scripts.pory"
	lock
# 163 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 164 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 165 "data/maps/RustboroCity/scripts.pory"
	release
# 166 "data/maps/RustboroCity/scripts.pory"
	end
# 167 "data/maps/RustboroCity/scripts.pory"

# 168 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 169 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 170 "data/maps/RustboroCity/scripts.pory"
	end
# 171 "data/maps/RustboroCity/scripts.pory"

# 172 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 173 "data/maps/RustboroCity/scripts.pory"
	lock
# 174 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 175 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 176 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 177 "data/maps/RustboroCity/scripts.pory"
	release
# 178 "data/maps/RustboroCity/scripts.pory"
	end
# 179 "data/maps/RustboroCity/scripts.pory"

# 180 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 181 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 182 "data/maps/RustboroCity/scripts.pory"
	release
# 183 "data/maps/RustboroCity/scripts.pory"
	end
# 184 "data/maps/RustboroCity/scripts.pory"

# 185 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 186 "data/maps/RustboroCity/scripts.pory"
	lock
# 187 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 188 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 189 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 190 "data/maps/RustboroCity/scripts.pory"
	release
# 191 "data/maps/RustboroCity/scripts.pory"
	end
# 192 "data/maps/RustboroCity/scripts.pory"

# 193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 194 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 195 "data/maps/RustboroCity/scripts.pory"
	release
# 196 "data/maps/RustboroCity/scripts.pory"
	end
# 197 "data/maps/RustboroCity/scripts.pory"

# 198 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 199 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 200 "data/maps/RustboroCity/scripts.pory"
	end
# 201 "data/maps/RustboroCity/scripts.pory"

# 202 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 203 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 204 "data/maps/RustboroCity/scripts.pory"
	end
# 205 "data/maps/RustboroCity/scripts.pory"

# 206 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 207 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 208 "data/maps/RustboroCity/scripts.pory"
	end
# 209 "data/maps/RustboroCity/scripts.pory"

# 210 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 211 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 212 "data/maps/RustboroCity/scripts.pory"
	end
# 213 "data/maps/RustboroCity/scripts.pory"

# 214 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 215 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 216 "data/maps/RustboroCity/scripts.pory"
	end
# 217 "data/maps/RustboroCity/scripts.pory"

# 218 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 219 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 220 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 221 "data/maps/RustboroCity/scripts.pory"
	end
# 222 "data/maps/RustboroCity/scripts.pory"

# 223 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 224 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 225 "data/maps/RustboroCity/scripts.pory"
	end
# 226 "data/maps/RustboroCity/scripts.pory"

# 227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 228 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 229 "data/maps/RustboroCity/scripts.pory"
	end
# 230 "data/maps/RustboroCity/scripts.pory"

# 231 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 232 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 233 "data/maps/RustboroCity/scripts.pory"
	end
# 234 "data/maps/RustboroCity/scripts.pory"

# 235 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 236 "data/maps/RustboroCity/scripts.pory"
	lock
# 237 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 238 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 239 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 240 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 241 "data/maps/RustboroCity/scripts.pory"
	release
# 242 "data/maps/RustboroCity/scripts.pory"
	end
# 243 "data/maps/RustboroCity/scripts.pory"

# 244 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 245 "data/maps/RustboroCity/scripts.pory"
	lock
# 246 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 247 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 248 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 249 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 250 "data/maps/RustboroCity/scripts.pory"
	release
# 251 "data/maps/RustboroCity/scripts.pory"
	end
# 252 "data/maps/RustboroCity/scripts.pory"

# 253 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 254 "data/maps/RustboroCity/scripts.pory"
	lock
# 255 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 256 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 257 "data/maps/RustboroCity/scripts.pory"
	release
# 258 "data/maps/RustboroCity/scripts.pory"
	end
# 259 "data/maps/RustboroCity/scripts.pory"

# 260 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 261 "data/maps/RustboroCity/scripts.pory"
	lockall
# 262 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 263 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 264 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 265 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 266 "data/maps/RustboroCity/scripts.pory"
	end
# 267 "data/maps/RustboroCity/scripts.pory"

# 268 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 269 "data/maps/RustboroCity/scripts.pory"
	lockall
# 270 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 271 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 272 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 273 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 274 "data/maps/RustboroCity/scripts.pory"
	end
# 275 "data/maps/RustboroCity/scripts.pory"

# 276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 277 "data/maps/RustboroCity/scripts.pory"
	lockall
# 278 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 279 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 280 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 281 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 282 "data/maps/RustboroCity/scripts.pory"
	end
# 283 "data/maps/RustboroCity/scripts.pory"

# 284 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 285 "data/maps/RustboroCity/scripts.pory"
	lockall
# 286 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 287 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 288 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 289 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 290 "data/maps/RustboroCity/scripts.pory"
	end
# 291 "data/maps/RustboroCity/scripts.pory"

# 292 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 293 "data/maps/RustboroCity/scripts.pory"
	lockall
# 294 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 295 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 296 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 297 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 298 "data/maps/RustboroCity/scripts.pory"
	end
# 299 "data/maps/RustboroCity/scripts.pory"

# 300 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 301 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 302 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 303 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 304 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 305 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 306 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 307 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 309 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 310 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 311 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 312 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 313 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 314 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 315 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 316 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 317 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 318 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 319 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 320 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 321 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 322 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 323 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 324 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 325 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 326 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 327 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 328 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 329 "data/maps/RustboroCity/scripts.pory"
	end
# 330 "data/maps/RustboroCity/scripts.pory"

# 331 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 332 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 333 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 334 "data/maps/RustboroCity/scripts.pory"
	return
# 335 "data/maps/RustboroCity/scripts.pory"

# 336 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 337 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 338 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 339 "data/maps/RustboroCity/scripts.pory"
	return
# 340 "data/maps/RustboroCity/scripts.pory"

# 341 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 342 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 343 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 344 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/RustboroCity/scripts.pory"
	return
# 346 "data/maps/RustboroCity/scripts.pory"

# 347 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 348 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 349 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 350 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/RustboroCity/scripts.pory"
	return
# 352 "data/maps/RustboroCity/scripts.pory"

# 353 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 354 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 355 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 356 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 357 "data/maps/RustboroCity/scripts.pory"
	return
# 358 "data/maps/RustboroCity/scripts.pory"

# 359 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 360 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 361 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 362 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 363 "data/maps/RustboroCity/scripts.pory"
	return
# 364 "data/maps/RustboroCity/scripts.pory"

# 365 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 366 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 367 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 368 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 369 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 370 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 371 "data/maps/RustboroCity/scripts.pory"
	return
# 372 "data/maps/RustboroCity/scripts.pory"

# 373 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 374 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
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
	walk_fast_up
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 392 "data/maps/RustboroCity/scripts.pory"
	step_end
# 393 "data/maps/RustboroCity/scripts.pory"

# 394 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 403 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 404 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 405 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 408 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 409 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 410 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 411 "data/maps/RustboroCity/scripts.pory"
	step_end
# 412 "data/maps/RustboroCity/scripts.pory"

# 413 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 421 "data/maps/RustboroCity/scripts.pory"
	step_end
# 422 "data/maps/RustboroCity/scripts.pory"

# 423 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 428 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 429 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 430 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 431 "data/maps/RustboroCity/scripts.pory"
	step_end
# 432 "data/maps/RustboroCity/scripts.pory"

# 433 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 434 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 438 "data/maps/RustboroCity/scripts.pory"
	step_end
# 439 "data/maps/RustboroCity/scripts.pory"

# 440 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 441 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 446 "data/maps/RustboroCity/scripts.pory"
	step_end
# 447 "data/maps/RustboroCity/scripts.pory"

# 448 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 449 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 450 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 451 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 452 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 453 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 454 "data/maps/RustboroCity/scripts.pory"
	step_end
# 455 "data/maps/RustboroCity/scripts.pory"

# 456 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 457 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 458 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 459 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 460 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 461 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 462 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 463 "data/maps/RustboroCity/scripts.pory"
	step_end
# 464 "data/maps/RustboroCity/scripts.pory"

# 465 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 466 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 467 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 468 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 469 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 470 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 471 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 472 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 473 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 474 "data/maps/RustboroCity/scripts.pory"
	step_end
# 475 "data/maps/RustboroCity/scripts.pory"

# 476 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 477 "data/maps/RustboroCity/scripts.pory"
	lock
# 478 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 479 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 480 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 481 "data/maps/RustboroCity/scripts.pory"
	release
# 482 "data/maps/RustboroCity/scripts.pory"
	end
# 483 "data/maps/RustboroCity/scripts.pory"

# 484 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 485 "data/maps/RustboroCity/scripts.pory"
	waitse
# 486 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 487 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 488 "data/maps/RustboroCity/scripts.pory"
	end
# 489 "data/maps/RustboroCity/scripts.pory"

# 490 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 491 "data/maps/RustboroCity/scripts.pory"
	lockall
# 492 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 493 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 494 "data/maps/RustboroCity/scripts.pory"
	end
# 495 "data/maps/RustboroCity/scripts.pory"

# 496 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 497 "data/maps/RustboroCity/scripts.pory"
	lockall
# 498 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 499 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 500 "data/maps/RustboroCity/scripts.pory"
	end
# 501 "data/maps/RustboroCity/scripts.pory"

# 502 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 503 "data/maps/RustboroCity/scripts.pory"
	lockall
# 504 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 505 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 506 "data/maps/RustboroCity/scripts.pory"
	end
# 507 "data/maps/RustboroCity/scripts.pory"

# 508 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 509 "data/maps/RustboroCity/scripts.pory"
	lockall
# 510 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 511 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 512 "data/maps/RustboroCity/scripts.pory"
	end
# 513 "data/maps/RustboroCity/scripts.pory"

# 514 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 515 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 516 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 517 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 518 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 519 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 520 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 521 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 522 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 523 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 524 "data/maps/RustboroCity/scripts.pory"
	end
# 525 "data/maps/RustboroCity/scripts.pory"

# 526 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 527 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 528 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 529 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 531 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 532 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 534 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 536 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/RustboroCity/scripts.pory"
	return
# 538 "data/maps/RustboroCity/scripts.pory"

# 539 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 540 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 541 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 543 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 544 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 546 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 548 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/RustboroCity/scripts.pory"
	return
# 550 "data/maps/RustboroCity/scripts.pory"

# 551 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 552 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 553 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 555 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 556 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 557 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 558 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 560 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/RustboroCity/scripts.pory"
	return
# 562 "data/maps/RustboroCity/scripts.pory"

# 563 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 564 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 565 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 567 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 568 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 569 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 570 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 572 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 573 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 574 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 575 "data/maps/RustboroCity/scripts.pory"
	return
# 576 "data/maps/RustboroCity/scripts.pory"

# 577 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 578 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 579 "data/maps/RustboroCity/scripts.pory"
	step_end
# 580 "data/maps/RustboroCity/scripts.pory"

# 581 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 582 "data/maps/RustboroCity/scripts.pory"
	lockall
# 583 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 584 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 585 "data/maps/RustboroCity/scripts.pory"
	end
# 586 "data/maps/RustboroCity/scripts.pory"

# 587 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 588 "data/maps/RustboroCity/scripts.pory"
	lockall
# 589 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 590 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 591 "data/maps/RustboroCity/scripts.pory"
	end
# 592 "data/maps/RustboroCity/scripts.pory"

# 593 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 594 "data/maps/RustboroCity/scripts.pory"
	lockall
# 595 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 596 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 597 "data/maps/RustboroCity/scripts.pory"
	end
# 598 "data/maps/RustboroCity/scripts.pory"

# 599 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 600 "data/maps/RustboroCity/scripts.pory"
	lockall
# 601 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 602 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 603 "data/maps/RustboroCity/scripts.pory"
	end
# 604 "data/maps/RustboroCity/scripts.pory"

# 605 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 606 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 607 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 608 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 609 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 610 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 611 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 612 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 613 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 614 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 615 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 616 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 617 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 618 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 619 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 620 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 621 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 622 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 623 "data/maps/RustboroCity/scripts.pory"
	end
# 624 "data/maps/RustboroCity/scripts.pory"

# 625 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 626 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 627 "data/maps/RustboroCity/scripts.pory"
	return
# 628 "data/maps/RustboroCity/scripts.pory"

# 629 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 630 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 631 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 633 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 634 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 635 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 636 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 637 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 638 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/RustboroCity/scripts.pory"
	return
# 640 "data/maps/RustboroCity/scripts.pory"

# 641 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 642 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 643 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 645 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 646 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 648 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 650 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/RustboroCity/scripts.pory"
	return
# 652 "data/maps/RustboroCity/scripts.pory"

# 653 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 654 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 655 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 656 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 657 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 658 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 660 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 661 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 662 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/RustboroCity/scripts.pory"
	return
# 664 "data/maps/RustboroCity/scripts.pory"

# 665 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 666 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 667 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 669 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 670 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 671 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 672 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 673 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 674 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 675 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 676 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 677 "data/maps/RustboroCity/scripts.pory"
	return
# 678 "data/maps/RustboroCity/scripts.pory"

# 679 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 680 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 681 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 682 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 683 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 684 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 685 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 686 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 687 "data/maps/RustboroCity/scripts.pory"
	return
# 688 "data/maps/RustboroCity/scripts.pory"

# 689 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 690 "data/maps/RustboroCity/scripts.pory"
	lockall
# 691 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 692 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 693 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 694 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 695 "data/maps/RustboroCity/scripts.pory"

# 696 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 697 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 698 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 699 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 700 "data/maps/RustboroCity/scripts.pory"
	return
# 701 "data/maps/RustboroCity/scripts.pory"

# 702 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 703 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 704 "data/maps/RustboroCity/scripts.pory"
	return
# 705 "data/maps/RustboroCity/scripts.pory"

# 706 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 707 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 708 "data/maps/RustboroCity/scripts.pory"
	return
# 709 "data/maps/RustboroCity/scripts.pory"

# 710 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 711 "data/maps/RustboroCity/scripts.pory"
	lockall
# 712 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 713 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 714 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 716 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 717 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 718 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 719 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 720 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 721 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 722 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 723 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 724 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 725 "data/maps/RustboroCity/scripts.pory"

# 726 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 727 "data/maps/RustboroCity/scripts.pory"
	lockall
# 728 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 729 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 730 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 732 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 733 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 734 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 735 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 736 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 737 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 738 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 739 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 740 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 741 "data/maps/RustboroCity/scripts.pory"

# 742 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 743 "data/maps/RustboroCity/scripts.pory"
	lockall
# 744 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 745 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 746 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 748 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 749 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 750 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 751 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 752 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 753 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 754 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 755 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 756 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 757 "data/maps/RustboroCity/scripts.pory"

# 758 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 759 "data/maps/RustboroCity/scripts.pory"
	lockall
# 760 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 761 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 762 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 764 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 765 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 766 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 767 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 768 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 769 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 770 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 771 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 772 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 773 "data/maps/RustboroCity/scripts.pory"

# 774 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 775 "data/maps/RustboroCity/scripts.pory"
	lockall
# 776 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 777 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 778 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 780 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 781 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 782 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 783 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 784 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 785 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 786 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 787 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 788 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 789 "data/maps/RustboroCity/scripts.pory"

# 790 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 791 "data/maps/RustboroCity/scripts.pory"
	lockall
# 792 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 793 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 794 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 796 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 797 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 798 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 799 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 800 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 801 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 803 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 804 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 805 "data/maps/RustboroCity/scripts.pory"

# 806 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 807 "data/maps/RustboroCity/scripts.pory"
	lockall
# 808 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 809 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 810 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 812 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 813 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 815 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 816 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 817 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 818 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 819 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 820 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 821 "data/maps/RustboroCity/scripts.pory"

# 822 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 823 "data/maps/RustboroCity/scripts.pory"
	lockall
# 824 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 825 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 826 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 827 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 828 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 829 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 830 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 831 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 832 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 833 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 834 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 835 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 836 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 837 "data/maps/RustboroCity/scripts.pory"

# 838 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 839 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 840 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 841 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 842 "data/maps/RustboroCity/scripts.pory"
	end
# 843 "data/maps/RustboroCity/scripts.pory"

# 844 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 845 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 846 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 847 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 848 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 849 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 850 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 851 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 852 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 853 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 854 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 855 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 856 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 857 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 858 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 859 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 860 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 861 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 862 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 863 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 864 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 865 "data/maps/RustboroCity/scripts.pory"
	end
# 866 "data/maps/RustboroCity/scripts.pory"

# 867 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 868 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 869 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 870 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 871 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 872 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 873 "data/maps/RustboroCity/scripts.pory"
	end
# 874 "data/maps/RustboroCity/scripts.pory"

# 875 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 876 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 877 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 878 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 879 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 880 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 881 "data/maps/RustboroCity/scripts.pory"
	end
# 882 "data/maps/RustboroCity/scripts.pory"

# 883 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 884 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 885 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 886 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 887 "data/maps/RustboroCity/scripts.pory"
	end
# 888 "data/maps/RustboroCity/scripts.pory"

# 889 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 890 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 891 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 892 "data/maps/RustboroCity/scripts.pory"
	return
# 893 "data/maps/RustboroCity/scripts.pory"

# 894 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 895 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 896 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 897 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 898 "data/maps/RustboroCity/scripts.pory"
	end
# 899 "data/maps/RustboroCity/scripts.pory"

# 900 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 901 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 902 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 903 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 904 "data/maps/RustboroCity/scripts.pory"
	end
# 905 "data/maps/RustboroCity/scripts.pory"

# 906 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 907 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 908 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 909 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 910 "data/maps/RustboroCity/scripts.pory"
	end
# 911 "data/maps/RustboroCity/scripts.pory"

# 912 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 913 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 914 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 915 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 916 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 917 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 918 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 919 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 920 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 921 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 922 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 923 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 924 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 925 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 926 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 927 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 928 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 929 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 930 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 931 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 932 "data/maps/RustboroCity/scripts.pory"
	end
# 933 "data/maps/RustboroCity/scripts.pory"

# 934 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 935 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 936 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 937 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 938 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 939 "data/maps/RustboroCity/scripts.pory"
	end
# 940 "data/maps/RustboroCity/scripts.pory"

# 941 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 942 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 943 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 944 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 945 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 946 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 947 "data/maps/RustboroCity/scripts.pory"
	end
# 948 "data/maps/RustboroCity/scripts.pory"

# 949 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 950 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 951 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 952 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 953 "data/maps/RustboroCity/scripts.pory"
	end
# 954 "data/maps/RustboroCity/scripts.pory"

# 955 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 956 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 957 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 958 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 959 "data/maps/RustboroCity/scripts.pory"
	end
# 960 "data/maps/RustboroCity/scripts.pory"

# 961 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 962 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 963 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 964 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 965 "data/maps/RustboroCity/scripts.pory"
	end
# 966 "data/maps/RustboroCity/scripts.pory"

# 967 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 968 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 969 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 970 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 971 "data/maps/RustboroCity/scripts.pory"
	end
# 972 "data/maps/RustboroCity/scripts.pory"

# 973 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 974 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 975 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 976 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 977 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 978 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 979 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 980 "data/maps/RustboroCity/scripts.pory"
	step_end
# 981 "data/maps/RustboroCity/scripts.pory"

# 982 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 983 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 984 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 985 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 986 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 987 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 988 "data/maps/RustboroCity/scripts.pory"
	step_end
# 989 "data/maps/RustboroCity/scripts.pory"

# 990 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 991 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 992 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 993 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 994 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 995 "data/maps/RustboroCity/scripts.pory"
	step_end
# 996 "data/maps/RustboroCity/scripts.pory"

# 997 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 998 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 999 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1000 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1001 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1002 "data/maps/RustboroCity/scripts.pory"

# 1003 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1004 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1005 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1006 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1007 "data/maps/RustboroCity/scripts.pory"

# 1008 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1009 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1010 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1011 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1012 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1013 "data/maps/RustboroCity/scripts.pory"

# 1014 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1015 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1016 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1017 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1018 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1019 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1020 "data/maps/RustboroCity/scripts.pory"

# 1021 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1022 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1023 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1024 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1025 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1026 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1027 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1028 "data/maps/RustboroCity/scripts.pory"

# 1029 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1030 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1031 "data/maps/RustboroCity/scripts.pory"
	end
# 1032 "data/maps/RustboroCity/scripts.pory"

# 1033 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1034 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1036 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1037 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1038 "data/maps/RustboroCity/scripts.pory"

# 1039 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1040 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1041 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1042 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1043 "data/maps/RustboroCity/scripts.pory"

# 1044 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1045 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1046 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1049 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1050 "data/maps/RustboroCity/scripts.pory"

# 1051 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1055 "data/maps/RustboroCity/scripts.pory"

# 1056 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1061 "data/maps/RustboroCity/scripts.pory"

# 1062 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1063 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1067 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 1068 "data/maps/RustboroCity/scripts.pory"

# 1069 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1070 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1072 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1074 "data/maps/RustboroCity/scripts.pory"

# 1075 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1078 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1082 "data/maps/RustboroCity/scripts.pory"

# 1083 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1085 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1086 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1087 "data/maps/RustboroCity/scripts.pory"

# 1088 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1089 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1090 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1092 "data/maps/RustboroCity/scripts.pory"

# 1093 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1094 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1095 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1096 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1097 "data/maps/RustboroCity/scripts.pory"

# 1098 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1099 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1100 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1101 "data/maps/RustboroCity/scripts.pory"

# 1102 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1105 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1107 "data/maps/RustboroCity/scripts.pory"

# 1108 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1109 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1111 "data/maps/RustboroCity/scripts.pory"

# 1112 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1115 "data/maps/RustboroCity/scripts.pory"

# 1116 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1119 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1123 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1124 "data/maps/RustboroCity/scripts.pory"

# 1125 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1128 "data/maps/RustboroCity/scripts.pory"

# 1129 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1132 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1135 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1136 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1137 "data/maps/RustboroCity/scripts.pory"

# 1138 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1140 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1141 "data/maps/RustboroCity/scripts.pory"

# 1142 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1145 "data/maps/RustboroCity/scripts.pory"

# 1146 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1147 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1148 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1149 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1152 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1153 "data/maps/RustboroCity/scripts.pory"

# 1154 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1156 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1157 "data/maps/RustboroCity/scripts.pory"

# 1158 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1165 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1167 "data/maps/RustboroCity/scripts.pory"

# 1168 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1169 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1173 "data/maps/RustboroCity/scripts.pory"

# 1174 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1175 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1177 "data/maps/RustboroCity/scripts.pory"

# 1178 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1181 "data/maps/RustboroCity/scripts.pory"

# 1182 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1185 "data/maps/RustboroCity/scripts.pory"

# 1186 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1189 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1192 "data/maps/RustboroCity/scripts.pory"

# 1193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1194 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1197 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1198 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1199 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1200 "data/maps/RustboroCity/scripts.pory"

# 1201 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1204 "data/maps/RustboroCity/scripts.pory"

# 1205 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1208 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1209 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1210 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1214 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1215 "data/maps/RustboroCity/scripts.pory"

# 1216 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1219 "data/maps/RustboroCity/scripts.pory"

# 1220 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1221 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1222 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1223 "data/maps/RustboroCity/scripts.pory"

# 1224 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1226 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1227 "data/maps/RustboroCity/scripts.pory"

# 1228 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1231 "data/maps/RustboroCity/scripts.pory"

# 1232 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1235 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1238 "data/maps/RustboroCity/scripts.pory"

# 1239 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1240 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1241 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1245 "data/maps/RustboroCity/scripts.pory"

# 1246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1250 "data/maps/RustboroCity/scripts.pory"

# 1251 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "Leader: ROXANNE\p"
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1255 "data/maps/RustboroCity/scripts.pory"

# 1256 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1260 "data/maps/RustboroCity/scripts.pory"

# 1261 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1262 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1265 "data/maps/RustboroCity/scripts.pory"

# 1266 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1267 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1270 "data/maps/RustboroCity/scripts.pory"

# 1271 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1273 "data/maps/RustboroCity/scripts.pory"

# 1274 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1275 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1276 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1277 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1280 "data/maps/RustboroCity/scripts.pory"

# 1281 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1288 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1289 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1290 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1291 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1292 "data/maps/RustboroCity/scripts.pory"

# 1293 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1294 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1295 "data/maps/RustboroCity/scripts.pory"

# 1296 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1299 "data/maps/RustboroCity/scripts.pory"

# 1300 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1301 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1303 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1304 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1305 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1306 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1307 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1308 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"
