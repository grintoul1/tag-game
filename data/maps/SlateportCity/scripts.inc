# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 21 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 22 "data/maps/SlateportCity/scripts.pory"

# 23 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 24 "data/maps/SlateportCity/scripts.pory"

# 25 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 26 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 27 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 28 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 29 "data/maps/SlateportCity/scripts.pory"

# 30 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 31 "data/maps/SlateportCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 32 "data/maps/SlateportCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 33 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 34 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 35 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 36 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 37 "data/maps/SlateportCity/scripts.pory"
	end
# 38 "data/maps/SlateportCity/scripts.pory"

# 39 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 40 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 41 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 42 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 43 "data/maps/SlateportCity/scripts.pory"
	return
# 44 "data/maps/SlateportCity/scripts.pory"

# 45 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 58 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 59 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 60 "data/maps/SlateportCity/scripts.pory"
	return
# 61 "data/maps/SlateportCity/scripts.pory"

# 62 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 63 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 64 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 65 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 66 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 67 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 68 "data/maps/SlateportCity/scripts.pory"
	return
# 69 "data/maps/SlateportCity/scripts.pory"

# 70 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 71 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 72 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 73 "data/maps/SlateportCity/scripts.pory"
	return
# 74 "data/maps/SlateportCity/scripts.pory"

# 75 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 76 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 77 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 18, SlateportCity_EventScript_ProgressEmmieState
# 78 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 79 "data/maps/SlateportCity/scripts.pory"

# 80 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ProgressEmmieState::
# 81 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 17
# 82 "data/maps/SlateportCity/scripts.pory"
	return
# 83 "data/maps/SlateportCity/scripts.pory"

# 84 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 85 "data/maps/SlateportCity/scripts.pory"
	lockall
# 86 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 87 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 88 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 89 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 91 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 92 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 93 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 95 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 96 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 97 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 99 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 100 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 101 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 102 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 103 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 104 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 105 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 106 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 107 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 108 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 109 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 110 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 111 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 112 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 113 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 114 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 115 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 116 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 117 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 118 "data/maps/SlateportCity/scripts.pory"
	end
# 119 "data/maps/SlateportCity/scripts.pory"

# 120 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 121 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 122 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 124 "data/maps/SlateportCity/scripts.pory"
	step_end
# 125 "data/maps/SlateportCity/scripts.pory"

# 126 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 127 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 128 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 129 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 130 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 131 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 134 "data/maps/SlateportCity/scripts.pory"
	step_end
# 135 "data/maps/SlateportCity/scripts.pory"

# 136 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 137 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 139 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 140 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 141 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 142 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 143 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 144 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 145 "data/maps/SlateportCity/scripts.pory"
	step_end
# 146 "data/maps/SlateportCity/scripts.pory"

# 147 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 148 "data/maps/SlateportCity/scripts.pory"
	lock
# 149 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 150 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 151 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 152 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 153 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 154 "data/maps/SlateportCity/scripts.pory"
	release
# 155 "data/maps/SlateportCity/scripts.pory"
	end
# 156 "data/maps/SlateportCity/scripts.pory"

# 157 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 158 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 159 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 160 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 161 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 162 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 163 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 164 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 165 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 166 "data/maps/SlateportCity/scripts.pory"

# 167 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 168 "data/maps/SlateportCity/scripts.pory"
	lock
# 169 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 170 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 171 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 172 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 173 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 174 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 175 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 176 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 177 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 178 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 179 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 180 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 181 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 182 "data/maps/SlateportCity/scripts.pory"
	release
# 183 "data/maps/SlateportCity/scripts.pory"
	end
# 184 "data/maps/SlateportCity/scripts.pory"

# 185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 186 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 187 "data/maps/SlateportCity/scripts.pory"
	release
# 188 "data/maps/SlateportCity/scripts.pory"
	end
# 189 "data/maps/SlateportCity/scripts.pory"

# 190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 191 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 192 "data/maps/SlateportCity/scripts.pory"
	release
# 193 "data/maps/SlateportCity/scripts.pory"
	end
# 194 "data/maps/SlateportCity/scripts.pory"

# 195 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 196 "data/maps/SlateportCity/scripts.pory"
	lock
# 197 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 198 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 199 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 200 "data/maps/SlateportCity/scripts.pory"
	release
# 201 "data/maps/SlateportCity/scripts.pory"
	end
# 202 "data/maps/SlateportCity/scripts.pory"

# 203 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 204 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 205 "data/maps/SlateportCity/scripts.pory"
	release
# 206 "data/maps/SlateportCity/scripts.pory"
	end
# 207 "data/maps/SlateportCity/scripts.pory"

# 208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 209 "data/maps/SlateportCity/scripts.pory"
	lock
# 210 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 211 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 212 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 213 "data/maps/SlateportCity/scripts.pory"
	release
# 214 "data/maps/SlateportCity/scripts.pory"
	end
# 215 "data/maps/SlateportCity/scripts.pory"

# 216 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 217 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 218 "data/maps/SlateportCity/scripts.pory"
	release
# 219 "data/maps/SlateportCity/scripts.pory"
	end
# 220 "data/maps/SlateportCity/scripts.pory"

# 221 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 222 "data/maps/SlateportCity/scripts.pory"
	lock
# 223 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 224 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 225 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 226 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 227 "data/maps/SlateportCity/scripts.pory"
	release
# 228 "data/maps/SlateportCity/scripts.pory"
	end
# 229 "data/maps/SlateportCity/scripts.pory"

# 230 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 231 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 232 "data/maps/SlateportCity/scripts.pory"
	release
# 233 "data/maps/SlateportCity/scripts.pory"
	end
# 234 "data/maps/SlateportCity/scripts.pory"

# 235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 236 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 237 "data/maps/SlateportCity/scripts.pory"
	release
# 238 "data/maps/SlateportCity/scripts.pory"
	end
# 239 "data/maps/SlateportCity/scripts.pory"

# 240 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 241 "data/maps/SlateportCity/scripts.pory"
	lock
# 242 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 243 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 244 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 245 "data/maps/SlateportCity/scripts.pory"
	release
# 246 "data/maps/SlateportCity/scripts.pory"
	end
# 247 "data/maps/SlateportCity/scripts.pory"

# 248 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 249 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 250 "data/maps/SlateportCity/scripts.pory"
	release
# 251 "data/maps/SlateportCity/scripts.pory"
	end
# 252 "data/maps/SlateportCity/scripts.pory"

# 253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 254 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 255 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 256 "data/maps/SlateportCity/scripts.pory"
	end
# 257 "data/maps/SlateportCity/scripts.pory"

# 258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 259 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 260 "data/maps/SlateportCity/scripts.pory"
	end
# 261 "data/maps/SlateportCity/scripts.pory"

# 262 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 263 "data/maps/SlateportCity/scripts.pory"
	lock
# 264 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 265 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 266 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 267 "data/maps/SlateportCity/scripts.pory"
	release
# 268 "data/maps/SlateportCity/scripts.pory"
	end
# 269 "data/maps/SlateportCity/scripts.pory"

# 270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 271 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 272 "data/maps/SlateportCity/scripts.pory"
	release
# 273 "data/maps/SlateportCity/scripts.pory"
	end
# 274 "data/maps/SlateportCity/scripts.pory"

# 275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 276 "data/maps/SlateportCity/scripts.pory"
	lock
# 277 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 278 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 279 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 280 "data/maps/SlateportCity/scripts.pory"
	release
# 281 "data/maps/SlateportCity/scripts.pory"
	end
# 282 "data/maps/SlateportCity/scripts.pory"

# 283 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 284 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 285 "data/maps/SlateportCity/scripts.pory"
	release
# 286 "data/maps/SlateportCity/scripts.pory"
	end
# 287 "data/maps/SlateportCity/scripts.pory"

# 288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 289 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 290 "data/maps/SlateportCity/scripts.pory"
	end
# 291 "data/maps/SlateportCity/scripts.pory"

# 292 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 293 "data/maps/SlateportCity/scripts.pory"
	lockall
# 294 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 295 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 296 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 297 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 298 "data/maps/SlateportCity/scripts.pory"
	end
# 299 "data/maps/SlateportCity/scripts.pory"

# 300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 301 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 302 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 303 "data/maps/SlateportCity/scripts.pory"
	end
# 304 "data/maps/SlateportCity/scripts.pory"

# 305 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 306 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 307 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 308 "data/maps/SlateportCity/scripts.pory"
	end
# 309 "data/maps/SlateportCity/scripts.pory"

# 310 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 311 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 312 "data/maps/SlateportCity/scripts.pory"
	end
# 313 "data/maps/SlateportCity/scripts.pory"

# 314 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 315 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 316 "data/maps/SlateportCity/scripts.pory"
	end
# 317 "data/maps/SlateportCity/scripts.pory"

# 318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 319 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 320 "data/maps/SlateportCity/scripts.pory"
	end
# 321 "data/maps/SlateportCity/scripts.pory"

# 322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 323 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 324 "data/maps/SlateportCity/scripts.pory"
	end
# 325 "data/maps/SlateportCity/scripts.pory"

# 326 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 327 "data/maps/SlateportCity/scripts.pory"
	lockall
# 328 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 329 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 330 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 331 "data/maps/SlateportCity/scripts.pory"
	end
# 332 "data/maps/SlateportCity/scripts.pory"

# 333 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 334 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 335 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 336 "data/maps/SlateportCity/scripts.pory"
	end
# 337 "data/maps/SlateportCity/scripts.pory"

# 338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 339 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 340 "data/maps/SlateportCity/scripts.pory"
	end
# 341 "data/maps/SlateportCity/scripts.pory"

# 342 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 343 "data/maps/SlateportCity/scripts.pory"
	lock
# 344 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 345 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 346 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 347 "data/maps/SlateportCity/scripts.pory"
	release
# 348 "data/maps/SlateportCity/scripts.pory"
	end
# 349 "data/maps/SlateportCity/scripts.pory"

# 350 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 351 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 352 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 353 "data/maps/SlateportCity/scripts.pory"
	release
# 354 "data/maps/SlateportCity/scripts.pory"
	end
# 355 "data/maps/SlateportCity/scripts.pory"

# 356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 357 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 358 "data/maps/SlateportCity/scripts.pory"
	end
# 359 "data/maps/SlateportCity/scripts.pory"

# 360 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 361 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 362 "data/maps/SlateportCity/scripts.pory"
	end
# 363 "data/maps/SlateportCity/scripts.pory"

# 364 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 365 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 366 "data/maps/SlateportCity/scripts.pory"
	end
# 367 "data/maps/SlateportCity/scripts.pory"

# 368 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 369 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 370 "data/maps/SlateportCity/scripts.pory"
	end
# 371 "data/maps/SlateportCity/scripts.pory"

# 372 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 373 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 374 "data/maps/SlateportCity/scripts.pory"
	end
# 375 "data/maps/SlateportCity/scripts.pory"

# 376 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 377 "data/maps/SlateportCity/scripts.pory"
	lock
# 378 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 379 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 380 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 381 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 382 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 383 "data/maps/SlateportCity/scripts.pory"
	release
# 384 "data/maps/SlateportCity/scripts.pory"
	end
# 385 "data/maps/SlateportCity/scripts.pory"

# 386 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 387 "data/maps/SlateportCity/scripts.pory"
	lock
# 388 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 389 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 390 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 391 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 392 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 393 "data/maps/SlateportCity/scripts.pory"
	release
# 394 "data/maps/SlateportCity/scripts.pory"
	end
# 395 "data/maps/SlateportCity/scripts.pory"

# 396 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 397 "data/maps/SlateportCity/scripts.pory"
	lock
# 398 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 399 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 400 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 401 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 402 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 403 "data/maps/SlateportCity/scripts.pory"
	release
# 404 "data/maps/SlateportCity/scripts.pory"
	end
# 405 "data/maps/SlateportCity/scripts.pory"

# 406 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 407 "data/maps/SlateportCity/scripts.pory"
	lock
# 408 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 409 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 410 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 411 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 412 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 413 "data/maps/SlateportCity/scripts.pory"
	release
# 414 "data/maps/SlateportCity/scripts.pory"
	end
# 415 "data/maps/SlateportCity/scripts.pory"

# 416 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 417 "data/maps/SlateportCity/scripts.pory"
	lock
# 418 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 419 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 420 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 421 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 422 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 423 "data/maps/SlateportCity/scripts.pory"
	release
# 424 "data/maps/SlateportCity/scripts.pory"
	end
# 425 "data/maps/SlateportCity/scripts.pory"

# 426 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 427 "data/maps/SlateportCity/scripts.pory"
	lock
# 428 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 429 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 430 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 431 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 432 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 433 "data/maps/SlateportCity/scripts.pory"
	release
# 434 "data/maps/SlateportCity/scripts.pory"
	end
# 435 "data/maps/SlateportCity/scripts.pory"

# 436 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 437 "data/maps/SlateportCity/scripts.pory"
	lock
# 438 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 439 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 440 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 441 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 442 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 443 "data/maps/SlateportCity/scripts.pory"
	release
# 444 "data/maps/SlateportCity/scripts.pory"
	end
# 445 "data/maps/SlateportCity/scripts.pory"

# 446 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 447 "data/maps/SlateportCity/scripts.pory"
	lock
# 448 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 449 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 450 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 451 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 452 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 453 "data/maps/SlateportCity/scripts.pory"
	release
# 454 "data/maps/SlateportCity/scripts.pory"
	end
# 455 "data/maps/SlateportCity/scripts.pory"

# 456 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 457 "data/maps/SlateportCity/scripts.pory"
	lock
# 458 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 459 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 460 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 461 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 462 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 463 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 464 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 465 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 466 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 467 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 468 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 469 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 470 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 471 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 472 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 473 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 474 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 475 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 476 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 477 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 478 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 479 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 480 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 481 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 482 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 483 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 484 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 485 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 486 "data/maps/SlateportCity/scripts.pory"
	release
# 487 "data/maps/SlateportCity/scripts.pory"
	end
# 488 "data/maps/SlateportCity/scripts.pory"

# 489 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 490 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 491 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 492 "data/maps/SlateportCity/scripts.pory"
	step_end
# 493 "data/maps/SlateportCity/scripts.pory"

# 494 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 495 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 496 "data/maps/SlateportCity/scripts.pory"
	end
# 497 "data/maps/SlateportCity/scripts.pory"

# 498 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 499 "data/maps/SlateportCity/scripts.pory"
	lock
# 500 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 501 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 502 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 503 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 504 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 505 "data/maps/SlateportCity/scripts.pory"
	release
# 506 "data/maps/SlateportCity/scripts.pory"
	end
# 507 "data/maps/SlateportCity/scripts.pory"

# 508 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 509 "data/maps/SlateportCity/scripts.pory"
	lock
# 510 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 511 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 512 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 513 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 514 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 515 "data/maps/SlateportCity/scripts.pory"
	release
# 516 "data/maps/SlateportCity/scripts.pory"
	end
# 517 "data/maps/SlateportCity/scripts.pory"

# 518 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 519 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 520 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 521 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 522 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 523 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 524 "data/maps/SlateportCity/scripts.pory"

# 525 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 526 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 527 "data/maps/SlateportCity/scripts.pory"
	release
# 528 "data/maps/SlateportCity/scripts.pory"
	end
# 529 "data/maps/SlateportCity/scripts.pory"

# 530 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 531 "data/maps/SlateportCity/scripts.pory"
	lock
# 532 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 533 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 534 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 535 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 536 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 537 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 538 "data/maps/SlateportCity/scripts.pory"
	release
# 539 "data/maps/SlateportCity/scripts.pory"
	end
# 540 "data/maps/SlateportCity/scripts.pory"

# 541 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 542 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 543 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 544 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 545 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 546 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 547 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 548 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 549 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 550 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 551 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 552 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 553 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 554 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 555 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 556 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 557 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 558 "data/maps/SlateportCity/scripts.pory"

# 559 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 560 "data/maps/SlateportCity/scripts.pory"
	lock
# 561 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 562 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 563 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 564 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 565 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 566 "data/maps/SlateportCity/scripts.pory"
	release
# 567 "data/maps/SlateportCity/scripts.pory"
	end
# 568 "data/maps/SlateportCity/scripts.pory"

# 569 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 570 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 571 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 572 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 573 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 574 "data/maps/SlateportCity/scripts.pory"

# 575 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 576 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 577 "data/maps/SlateportCity/scripts.pory"
	lockall
# 578 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 579 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 580 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 581 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 582 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 583 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 584 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 585 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 586 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 587 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 588 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 589 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 590 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 591 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 592 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 593 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 594 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 595 "data/maps/SlateportCity/scripts.pory"
	end
# 596 "data/maps/SlateportCity/scripts.pory"

# 597 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 598 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 599 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 600 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 601 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 602 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 603 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 604 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 605 "data/maps/SlateportCity/scripts.pory"
	step_end
# 606 "data/maps/SlateportCity/scripts.pory"

# 607 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 608 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 609 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 610 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 611 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 612 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 613 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 614 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 615 "data/maps/SlateportCity/scripts.pory"
	step_end
# 616 "data/maps/SlateportCity/scripts.pory"

# 617 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 618 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 619 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 620 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 621 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 622 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 623 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 624 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 625 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 626 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 627 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 628 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 629 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 630 "data/maps/SlateportCity/scripts.pory"
	step_end
# 631 "data/maps/SlateportCity/scripts.pory"

# 632 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 633 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 634 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 635 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 636 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 637 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 638 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 639 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 640 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 641 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 642 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 643 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 644 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 645 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 646 "data/maps/SlateportCity/scripts.pory"
	step_end
# 647 "data/maps/SlateportCity/scripts.pory"

# 648 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 649 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 650 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 651 "data/maps/SlateportCity/scripts.pory"
	step_end
# 652 "data/maps/SlateportCity/scripts.pory"

# 653 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 654 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 655 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 656 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 657 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 658 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 659 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 661 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 662 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 663 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 664 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 665 "data/maps/SlateportCity/scripts.pory"
	step_end
# 666 "data/maps/SlateportCity/scripts.pory"

# 667 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 668 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 669 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 670 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 671 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 672 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 673 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 674 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 675 "data/maps/SlateportCity/scripts.pory"
	step_end
# 676 "data/maps/SlateportCity/scripts.pory"

# 677 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 678 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 679 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 680 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 681 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 682 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 683 "data/maps/SlateportCity/scripts.pory"
	step_end
# 684 "data/maps/SlateportCity/scripts.pory"

# 685 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 686 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 687 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 688 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 689 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 690 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 691 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 692 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 693 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 694 "data/maps/SlateportCity/scripts.pory"
	step_end
# 695 "data/maps/SlateportCity/scripts.pory"

# 696 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 697 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 698 "data/maps/SlateportCity/scripts.pory"
	end
# 699 "data/maps/SlateportCity/scripts.pory"

# 700 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 701 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 702 "data/maps/SlateportCity/scripts.pory"
	end
# 703 "data/maps/SlateportCity/scripts.pory"

# 704 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 705 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 706 "data/maps/SlateportCity/scripts.pory"
	end
# 707 "data/maps/SlateportCity/scripts.pory"

# 708 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 709 "data/maps/SlateportCity/scripts.pory"
	lock
# 710 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 711 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 712 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 713 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 714 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 715 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 716 "data/maps/SlateportCity/scripts.pory"
	release
# 717 "data/maps/SlateportCity/scripts.pory"
	end
# 718 "data/maps/SlateportCity/scripts.pory"

# 719 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 720 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 721 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 722 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 723 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 724 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 725 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 726 "data/maps/SlateportCity/scripts.pory"
	end
# 727 "data/maps/SlateportCity/scripts.pory"

# 728 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 729 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 730 "data/maps/SlateportCity/scripts.pory"
	release
# 731 "data/maps/SlateportCity/scripts.pory"
	end
# 732 "data/maps/SlateportCity/scripts.pory"

# 733 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 734 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 735 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 736 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 737 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 738 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 739 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 740 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 741 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 742 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 743 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 744 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 745 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 746 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 747 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 748 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 749 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 750 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 751 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 752 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 753 "data/maps/SlateportCity/scripts.pory"
	end
# 754 "data/maps/SlateportCity/scripts.pory"

# 755 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 756 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 757 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 758 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 759 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 760 "data/maps/SlateportCity/scripts.pory"
	end
# 761 "data/maps/SlateportCity/scripts.pory"

# 762 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 763 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 764 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 765 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 766 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 767 "data/maps/SlateportCity/scripts.pory"
	end
# 768 "data/maps/SlateportCity/scripts.pory"

# 769 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 770 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 771 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 772 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 773 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 774 "data/maps/SlateportCity/scripts.pory"
	end
# 775 "data/maps/SlateportCity/scripts.pory"

# 776 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 777 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 778 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 779 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 780 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 781 "data/maps/SlateportCity/scripts.pory"
	end
# 782 "data/maps/SlateportCity/scripts.pory"

# 783 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 784 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 785 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 786 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 787 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 788 "data/maps/SlateportCity/scripts.pory"
	end
# 789 "data/maps/SlateportCity/scripts.pory"

# 790 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 791 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 792 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 793 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 794 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 795 "data/maps/SlateportCity/scripts.pory"
	end
# 796 "data/maps/SlateportCity/scripts.pory"

# 797 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 798 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 799 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 800 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 801 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 802 "data/maps/SlateportCity/scripts.pory"
	end
# 803 "data/maps/SlateportCity/scripts.pory"

# 804 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 805 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 806 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 807 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 808 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 809 "data/maps/SlateportCity/scripts.pory"
	end
# 810 "data/maps/SlateportCity/scripts.pory"

# 811 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 812 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 813 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 814 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 815 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 816 "data/maps/SlateportCity/scripts.pory"
	end
# 817 "data/maps/SlateportCity/scripts.pory"

# 818 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 819 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 820 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 821 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 822 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 823 "data/maps/SlateportCity/scripts.pory"
	end
# 824 "data/maps/SlateportCity/scripts.pory"

# 825 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 826 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 827 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 828 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 829 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 830 "data/maps/SlateportCity/scripts.pory"
	end
# 831 "data/maps/SlateportCity/scripts.pory"

# 832 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 833 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 834 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 835 "data/maps/SlateportCity/scripts.pory"
	release
# 836 "data/maps/SlateportCity/scripts.pory"
	end
# 837 "data/maps/SlateportCity/scripts.pory"

# 838 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 839 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 840 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 841 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 842 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 843 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 844 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 845 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 846 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 847 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 848 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 849 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 850 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 851 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 852 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 853 "data/maps/SlateportCity/scripts.pory"
	release
# 854 "data/maps/SlateportCity/scripts.pory"
	end
# 855 "data/maps/SlateportCity/scripts.pory"

# 856 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 857 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 858 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 859 "data/maps/SlateportCity/scripts.pory"
	release
# 860 "data/maps/SlateportCity/scripts.pory"
	end
# 861 "data/maps/SlateportCity/scripts.pory"

# 862 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 863 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 864 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 865 "data/maps/SlateportCity/scripts.pory"
	end
# 866 "data/maps/SlateportCity/scripts.pory"

# 867 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 868 "data/maps/SlateportCity/scripts.pory"
	lockall
# 869 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 870 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 871 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 872 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 873 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 874 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 875 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 876 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 877 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 878 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 879 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 880 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 881 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 882 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 883 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 884 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 885 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 886 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 887 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 888 "data/maps/SlateportCity/scripts.pory"
	end
# 889 "data/maps/SlateportCity/scripts.pory"

# 890 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 891 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 892 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 893 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 894 "data/maps/SlateportCity/scripts.pory"
	step_end
# 895 "data/maps/SlateportCity/scripts.pory"

# 896 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 897 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 898 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 899 "data/maps/SlateportCity/scripts.pory"
	step_end
# 900 "data/maps/SlateportCity/scripts.pory"

# 901 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 902 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 903 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 904 "data/maps/SlateportCity/scripts.pory"
	step_end
# 905 "data/maps/SlateportCity/scripts.pory"

# 906 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 907 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 908 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 909 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 910 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 911 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 912 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 913 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 914 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 915 "data/maps/SlateportCity/scripts.pory"
	step_end
# 916 "data/maps/SlateportCity/scripts.pory"

# 917 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 918 "data/maps/SlateportCity/scripts.pory"
	lockall
# 919 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 920 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 921 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 922 "data/maps/SlateportCity/scripts.pory"
	end
# 923 "data/maps/SlateportCity/scripts.pory"

# 924 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 925 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 926 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 927 "data/maps/SlateportCity/scripts.pory"

# 928 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 929 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 930 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 931 "data/maps/SlateportCity/scripts.pory"

# 932 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 933 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 934 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 935 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 936 "data/maps/SlateportCity/scripts.pory"

# 937 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 938 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 939 "data/maps/SlateportCity/scripts.pory"

# 940 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 941 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 942 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 943 "data/maps/SlateportCity/scripts.pory"

# 944 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 945 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 946 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 947 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 948 "data/maps/SlateportCity/scripts.pory"

# 949 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 950 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 951 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 952 "data/maps/SlateportCity/scripts.pory"

# 953 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 954 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 955 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 956 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 957 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 958 "data/maps/SlateportCity/scripts.pory"

# 959 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 960 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 961 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 962 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 963 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 964 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 965 "data/maps/SlateportCity/scripts.pory"

# 966 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 967 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 968 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 969 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 970 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 971 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 972 "data/maps/SlateportCity/scripts.pory"

# 973 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 974 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 975 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 976 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 977 "data/maps/SlateportCity/scripts.pory"

# 978 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 979 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 980 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 981 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 983 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 984 "data/maps/SlateportCity/scripts.pory"

# 985 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 986 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 987 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 988 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 989 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 990 "data/maps/SlateportCity/scripts.pory"

# 991 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 992 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 993 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 994 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 995 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 996 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 997 "data/maps/SlateportCity/scripts.pory"

# 998 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 999 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1000 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1001 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1002 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1003 "data/maps/SlateportCity/scripts.pory"

# 1004 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1006 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1007 "data/maps/SlateportCity/scripts.pory"

# 1008 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1009 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1010 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1012 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1013 "data/maps/SlateportCity/scripts.pory"

# 1014 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1015 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1016 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1017 "data/maps/SlateportCity/scripts.pory"

# 1018 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1019 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1020 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1021 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1022 "data/maps/SlateportCity/scripts.pory"

# 1023 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1024 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1025 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1027 "data/maps/SlateportCity/scripts.pory"

# 1028 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1029 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1031 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1032 "data/maps/SlateportCity/scripts.pory"

# 1033 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1035 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1036 "data/maps/SlateportCity/scripts.pory"

# 1037 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1038 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1039 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1040 "data/maps/SlateportCity/scripts.pory"

# 1041 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1042 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1043 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1044 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1045 "data/maps/SlateportCity/scripts.pory"

# 1046 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1048 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1049 "data/maps/SlateportCity/scripts.pory"

# 1050 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1051 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1052 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1053 "data/maps/SlateportCity/scripts.pory"

# 1054 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1055 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1056 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1057 "data/maps/SlateportCity/scripts.pory"

# 1058 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1059 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1061 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1062 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1064 "data/maps/SlateportCity/scripts.pory"

# 1065 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1066 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1067 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1070 "data/maps/SlateportCity/scripts.pory"

# 1071 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1074 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1075 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1076 "data/maps/SlateportCity/scripts.pory"

# 1077 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1078 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1079 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1080 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1081 "data/maps/SlateportCity/scripts.pory"

# 1082 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1083 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1084 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1085 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1087 "data/maps/SlateportCity/scripts.pory"

# 1088 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1089 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1090 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1091 "data/maps/SlateportCity/scripts.pory"

# 1092 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1093 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1094 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1096 "data/maps/SlateportCity/scripts.pory"

# 1097 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1100 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1101 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1102 "data/maps/SlateportCity/scripts.pory"

# 1103 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1105 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1110 "data/maps/SlateportCity/scripts.pory"

# 1111 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1112 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1113 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1116 "data/maps/SlateportCity/scripts.pory"

# 1117 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1122 "data/maps/SlateportCity/scripts.pory"

# 1123 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1124 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1128 "data/maps/SlateportCity/scripts.pory"

# 1129 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1133 "data/maps/SlateportCity/scripts.pory"

# 1134 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1137 "data/maps/SlateportCity/scripts.pory"

# 1138 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1139 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1140 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1141 "data/maps/SlateportCity/scripts.pory"

# 1142 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1145 "data/maps/SlateportCity/scripts.pory"

# 1146 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1149 "data/maps/SlateportCity/scripts.pory"

# 1150 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: This way {PLAYER}{KUN}!$"
# 1152 "data/maps/SlateportCity/scripts.pory"

# 1153 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1158 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1159 "data/maps/SlateportCity/scripts.pory"

# 1160 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1163 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1164 "data/maps/SlateportCity/scripts.pory"

# 1165 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1169 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1174 "data/maps/SlateportCity/scripts.pory"

# 1175 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1185 "data/maps/SlateportCity/scripts.pory"

# 1186 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1191 "data/maps/SlateportCity/scripts.pory"

# 1192 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1196 "data/maps/SlateportCity/scripts.pory"

# 1197 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1200 "data/maps/SlateportCity/scripts.pory"

# 1201 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1204 "data/maps/SlateportCity/scripts.pory"

# 1205 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1209 "data/maps/SlateportCity/scripts.pory"

# 1210 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1215 "data/maps/SlateportCity/scripts.pory"

# 1216 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1221 "data/maps/SlateportCity/scripts.pory"

# 1222 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1225 "data/maps/SlateportCity/scripts.pory"

# 1226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1230 "data/maps/SlateportCity/scripts.pory"

# 1231 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1235 "data/maps/SlateportCity/scripts.pory"

# 1236 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1239 "data/maps/SlateportCity/scripts.pory"

# 1240 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1246 "data/maps/SlateportCity/scripts.pory"

# 1247 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1251 "data/maps/SlateportCity/scripts.pory"

# 1252 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1255 "data/maps/SlateportCity/scripts.pory"

# 1256 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1270 "data/maps/SlateportCity/scripts.pory"

# 1271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1281 "data/maps/SlateportCity/scripts.pory"

# 1282 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1285 "data/maps/SlateportCity/scripts.pory"

# 1286 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1289 "data/maps/SlateportCity/scripts.pory"

# 1290 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1293 "data/maps/SlateportCity/scripts.pory"

# 1294 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1297 "data/maps/SlateportCity/scripts.pory"

# 1298 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1303 "data/maps/SlateportCity/scripts.pory"

# 1304 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1307 "data/maps/SlateportCity/scripts.pory"

# 1308 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1313 "data/maps/SlateportCity/scripts.pory"

# 1314 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1322 "data/maps/SlateportCity/scripts.pory"

# 1323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1326 "data/maps/SlateportCity/scripts.pory"

# 1327 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1329 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1333 "data/maps/SlateportCity/scripts.pory"

# 1334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1337 "data/maps/SlateportCity/scripts.pory"

# 1338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1345 "data/maps/SlateportCity/scripts.pory"

# 1346 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
