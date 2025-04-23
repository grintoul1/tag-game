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
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 33 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 34 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 35 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 36 "data/maps/SlateportCity/scripts.pory"
	end
# 37 "data/maps/SlateportCity/scripts.pory"

# 38 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 39 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 40 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 41 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 42 "data/maps/SlateportCity/scripts.pory"
	return
# 43 "data/maps/SlateportCity/scripts.pory"

# 44 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 45 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 58 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 59 "data/maps/SlateportCity/scripts.pory"
	return
# 60 "data/maps/SlateportCity/scripts.pory"

# 61 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 62 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 63 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 64 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 65 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 66 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 67 "data/maps/SlateportCity/scripts.pory"
	return
# 68 "data/maps/SlateportCity/scripts.pory"

# 69 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 70 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 71 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 72 "data/maps/SlateportCity/scripts.pory"
	return
# 73 "data/maps/SlateportCity/scripts.pory"

# 74 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 75 "data/maps/SlateportCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 76 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 77 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 78 "data/maps/SlateportCity/scripts.pory"

# 79 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 80 "data/maps/SlateportCity/scripts.pory"
	lockall
# 81 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 82 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 83 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 84 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 86 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 87 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 88 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 90 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 91 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 92 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 94 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 95 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 96 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 97 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 98 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 99 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 100 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 101 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 102 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 103 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 104 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 105 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 106 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 107 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 108 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 109 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 110 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 111 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 112 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 113 "data/maps/SlateportCity/scripts.pory"
	end
# 114 "data/maps/SlateportCity/scripts.pory"

# 115 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 116 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 117 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 118 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 119 "data/maps/SlateportCity/scripts.pory"
	step_end
# 120 "data/maps/SlateportCity/scripts.pory"

# 121 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 122 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 127 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 128 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 129 "data/maps/SlateportCity/scripts.pory"
	step_end
# 130 "data/maps/SlateportCity/scripts.pory"

# 131 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 139 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 140 "data/maps/SlateportCity/scripts.pory"
	step_end
# 141 "data/maps/SlateportCity/scripts.pory"

# 142 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 143 "data/maps/SlateportCity/scripts.pory"
	lock
# 144 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 145 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 146 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 147 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 148 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 149 "data/maps/SlateportCity/scripts.pory"
	release
# 150 "data/maps/SlateportCity/scripts.pory"
	end
# 151 "data/maps/SlateportCity/scripts.pory"

# 152 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 153 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 155 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 156 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 157 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 158 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 159 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 160 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 161 "data/maps/SlateportCity/scripts.pory"

# 162 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 163 "data/maps/SlateportCity/scripts.pory"
	lock
# 164 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 165 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 166 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 167 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 168 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 169 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 170 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 171 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 172 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 173 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 174 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 175 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 176 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 177 "data/maps/SlateportCity/scripts.pory"
	release
# 178 "data/maps/SlateportCity/scripts.pory"
	end
# 179 "data/maps/SlateportCity/scripts.pory"

# 180 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 181 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 182 "data/maps/SlateportCity/scripts.pory"
	release
# 183 "data/maps/SlateportCity/scripts.pory"
	end
# 184 "data/maps/SlateportCity/scripts.pory"

# 185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 186 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 187 "data/maps/SlateportCity/scripts.pory"
	release
# 188 "data/maps/SlateportCity/scripts.pory"
	end
# 189 "data/maps/SlateportCity/scripts.pory"

# 190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 191 "data/maps/SlateportCity/scripts.pory"
	lock
# 192 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 193 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 194 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 195 "data/maps/SlateportCity/scripts.pory"
	release
# 196 "data/maps/SlateportCity/scripts.pory"
	end
# 197 "data/maps/SlateportCity/scripts.pory"

# 198 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 199 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 200 "data/maps/SlateportCity/scripts.pory"
	release
# 201 "data/maps/SlateportCity/scripts.pory"
	end
# 202 "data/maps/SlateportCity/scripts.pory"

# 203 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 204 "data/maps/SlateportCity/scripts.pory"
	lock
# 205 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 206 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 207 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 208 "data/maps/SlateportCity/scripts.pory"
	release
# 209 "data/maps/SlateportCity/scripts.pory"
	end
# 210 "data/maps/SlateportCity/scripts.pory"

# 211 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 212 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 213 "data/maps/SlateportCity/scripts.pory"
	release
# 214 "data/maps/SlateportCity/scripts.pory"
	end
# 215 "data/maps/SlateportCity/scripts.pory"

# 216 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 217 "data/maps/SlateportCity/scripts.pory"
	lock
# 218 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 219 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 220 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 221 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 222 "data/maps/SlateportCity/scripts.pory"
	release
# 223 "data/maps/SlateportCity/scripts.pory"
	end
# 224 "data/maps/SlateportCity/scripts.pory"

# 225 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 226 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 227 "data/maps/SlateportCity/scripts.pory"
	release
# 228 "data/maps/SlateportCity/scripts.pory"
	end
# 229 "data/maps/SlateportCity/scripts.pory"

# 230 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 231 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 232 "data/maps/SlateportCity/scripts.pory"
	release
# 233 "data/maps/SlateportCity/scripts.pory"
	end
# 234 "data/maps/SlateportCity/scripts.pory"

# 235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 236 "data/maps/SlateportCity/scripts.pory"
	lock
# 237 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 238 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 239 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 240 "data/maps/SlateportCity/scripts.pory"
	release
# 241 "data/maps/SlateportCity/scripts.pory"
	end
# 242 "data/maps/SlateportCity/scripts.pory"

# 243 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 244 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 245 "data/maps/SlateportCity/scripts.pory"
	release
# 246 "data/maps/SlateportCity/scripts.pory"
	end
# 247 "data/maps/SlateportCity/scripts.pory"

# 248 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 249 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 250 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 251 "data/maps/SlateportCity/scripts.pory"
	end
# 252 "data/maps/SlateportCity/scripts.pory"

# 253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 254 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 255 "data/maps/SlateportCity/scripts.pory"
	end
# 256 "data/maps/SlateportCity/scripts.pory"

# 257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 258 "data/maps/SlateportCity/scripts.pory"
	lock
# 259 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 260 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 261 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 262 "data/maps/SlateportCity/scripts.pory"
	release
# 263 "data/maps/SlateportCity/scripts.pory"
	end
# 264 "data/maps/SlateportCity/scripts.pory"

# 265 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 266 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 267 "data/maps/SlateportCity/scripts.pory"
	release
# 268 "data/maps/SlateportCity/scripts.pory"
	end
# 269 "data/maps/SlateportCity/scripts.pory"

# 270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 271 "data/maps/SlateportCity/scripts.pory"
	lock
# 272 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 273 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 274 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 275 "data/maps/SlateportCity/scripts.pory"
	release
# 276 "data/maps/SlateportCity/scripts.pory"
	end
# 277 "data/maps/SlateportCity/scripts.pory"

# 278 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 279 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 280 "data/maps/SlateportCity/scripts.pory"
	release
# 281 "data/maps/SlateportCity/scripts.pory"
	end
# 282 "data/maps/SlateportCity/scripts.pory"

# 283 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 284 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 285 "data/maps/SlateportCity/scripts.pory"
	end
# 286 "data/maps/SlateportCity/scripts.pory"

# 287 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 288 "data/maps/SlateportCity/scripts.pory"
	lockall
# 289 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 290 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 291 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 292 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 293 "data/maps/SlateportCity/scripts.pory"
	end
# 294 "data/maps/SlateportCity/scripts.pory"

# 295 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 296 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 297 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 298 "data/maps/SlateportCity/scripts.pory"
	end
# 299 "data/maps/SlateportCity/scripts.pory"

# 300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 301 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 302 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 303 "data/maps/SlateportCity/scripts.pory"
	end
# 304 "data/maps/SlateportCity/scripts.pory"

# 305 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 306 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 307 "data/maps/SlateportCity/scripts.pory"
	end
# 308 "data/maps/SlateportCity/scripts.pory"

# 309 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 310 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 311 "data/maps/SlateportCity/scripts.pory"
	end
# 312 "data/maps/SlateportCity/scripts.pory"

# 313 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 314 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 315 "data/maps/SlateportCity/scripts.pory"
	end
# 316 "data/maps/SlateportCity/scripts.pory"

# 317 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 318 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 319 "data/maps/SlateportCity/scripts.pory"
	end
# 320 "data/maps/SlateportCity/scripts.pory"

# 321 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 322 "data/maps/SlateportCity/scripts.pory"
	lockall
# 323 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 324 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 325 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 326 "data/maps/SlateportCity/scripts.pory"
	end
# 327 "data/maps/SlateportCity/scripts.pory"

# 328 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 329 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 330 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 331 "data/maps/SlateportCity/scripts.pory"
	end
# 332 "data/maps/SlateportCity/scripts.pory"

# 333 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 334 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 335 "data/maps/SlateportCity/scripts.pory"
	end
# 336 "data/maps/SlateportCity/scripts.pory"

# 337 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 338 "data/maps/SlateportCity/scripts.pory"
	lock
# 339 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 340 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 341 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 342 "data/maps/SlateportCity/scripts.pory"
	release
# 343 "data/maps/SlateportCity/scripts.pory"
	end
# 344 "data/maps/SlateportCity/scripts.pory"

# 345 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 346 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 347 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 348 "data/maps/SlateportCity/scripts.pory"
	release
# 349 "data/maps/SlateportCity/scripts.pory"
	end
# 350 "data/maps/SlateportCity/scripts.pory"

# 351 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 352 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 353 "data/maps/SlateportCity/scripts.pory"
	end
# 354 "data/maps/SlateportCity/scripts.pory"

# 355 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 356 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 357 "data/maps/SlateportCity/scripts.pory"
	end
# 358 "data/maps/SlateportCity/scripts.pory"

# 359 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 360 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 361 "data/maps/SlateportCity/scripts.pory"
	end
# 362 "data/maps/SlateportCity/scripts.pory"

# 363 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 364 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 365 "data/maps/SlateportCity/scripts.pory"
	end
# 366 "data/maps/SlateportCity/scripts.pory"

# 367 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 368 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 369 "data/maps/SlateportCity/scripts.pory"
	end
# 370 "data/maps/SlateportCity/scripts.pory"

# 371 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 372 "data/maps/SlateportCity/scripts.pory"
	lock
# 373 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 374 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 375 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 376 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 377 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 378 "data/maps/SlateportCity/scripts.pory"
	release
# 379 "data/maps/SlateportCity/scripts.pory"
	end
# 380 "data/maps/SlateportCity/scripts.pory"

# 381 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 382 "data/maps/SlateportCity/scripts.pory"
	lock
# 383 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 384 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 385 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 386 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 387 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 388 "data/maps/SlateportCity/scripts.pory"
	release
# 389 "data/maps/SlateportCity/scripts.pory"
	end
# 390 "data/maps/SlateportCity/scripts.pory"

# 391 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 392 "data/maps/SlateportCity/scripts.pory"
	lock
# 393 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 394 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 395 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 396 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 397 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 398 "data/maps/SlateportCity/scripts.pory"
	release
# 399 "data/maps/SlateportCity/scripts.pory"
	end
# 400 "data/maps/SlateportCity/scripts.pory"

# 401 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 402 "data/maps/SlateportCity/scripts.pory"
	lock
# 403 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 404 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 405 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 406 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 407 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 408 "data/maps/SlateportCity/scripts.pory"
	release
# 409 "data/maps/SlateportCity/scripts.pory"
	end
# 410 "data/maps/SlateportCity/scripts.pory"

# 411 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 412 "data/maps/SlateportCity/scripts.pory"
	lock
# 413 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 414 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 415 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 416 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 417 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 418 "data/maps/SlateportCity/scripts.pory"
	release
# 419 "data/maps/SlateportCity/scripts.pory"
	end
# 420 "data/maps/SlateportCity/scripts.pory"

# 421 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 422 "data/maps/SlateportCity/scripts.pory"
	lock
# 423 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 424 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 425 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 426 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 427 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 428 "data/maps/SlateportCity/scripts.pory"
	release
# 429 "data/maps/SlateportCity/scripts.pory"
	end
# 430 "data/maps/SlateportCity/scripts.pory"

# 431 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 432 "data/maps/SlateportCity/scripts.pory"
	lock
# 433 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 434 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 435 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 436 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 437 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 438 "data/maps/SlateportCity/scripts.pory"
	release
# 439 "data/maps/SlateportCity/scripts.pory"
	end
# 440 "data/maps/SlateportCity/scripts.pory"

# 441 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 442 "data/maps/SlateportCity/scripts.pory"
	lock
# 443 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 444 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 445 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 446 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 447 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 448 "data/maps/SlateportCity/scripts.pory"
	release
# 449 "data/maps/SlateportCity/scripts.pory"
	end
# 450 "data/maps/SlateportCity/scripts.pory"

# 451 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 452 "data/maps/SlateportCity/scripts.pory"
	lock
# 453 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 454 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 455 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 456 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 457 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 458 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 459 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 460 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 461 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 462 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 463 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 464 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 465 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 466 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 467 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 468 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 469 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 470 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 471 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 472 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 473 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 474 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 475 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 476 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 477 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 478 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 479 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 480 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 481 "data/maps/SlateportCity/scripts.pory"
	release
# 482 "data/maps/SlateportCity/scripts.pory"
	end
# 483 "data/maps/SlateportCity/scripts.pory"

# 484 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 485 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 486 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 487 "data/maps/SlateportCity/scripts.pory"
	step_end
# 488 "data/maps/SlateportCity/scripts.pory"

# 489 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 490 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 491 "data/maps/SlateportCity/scripts.pory"
	end
# 492 "data/maps/SlateportCity/scripts.pory"

# 493 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 494 "data/maps/SlateportCity/scripts.pory"
	lock
# 495 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 496 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 497 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 498 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 499 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 500 "data/maps/SlateportCity/scripts.pory"
	release
# 501 "data/maps/SlateportCity/scripts.pory"
	end
# 502 "data/maps/SlateportCity/scripts.pory"

# 503 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 504 "data/maps/SlateportCity/scripts.pory"
	lock
# 505 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 506 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 507 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 508 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 509 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 510 "data/maps/SlateportCity/scripts.pory"
	release
# 511 "data/maps/SlateportCity/scripts.pory"
	end
# 512 "data/maps/SlateportCity/scripts.pory"

# 513 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 514 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 515 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 516 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 517 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 518 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 519 "data/maps/SlateportCity/scripts.pory"

# 520 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 521 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 522 "data/maps/SlateportCity/scripts.pory"
	release
# 523 "data/maps/SlateportCity/scripts.pory"
	end
# 524 "data/maps/SlateportCity/scripts.pory"

# 525 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 526 "data/maps/SlateportCity/scripts.pory"
	lock
# 527 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 528 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 529 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 530 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 531 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 532 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 533 "data/maps/SlateportCity/scripts.pory"
	release
# 534 "data/maps/SlateportCity/scripts.pory"
	end
# 535 "data/maps/SlateportCity/scripts.pory"

# 536 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 537 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 538 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 539 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 540 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 541 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 542 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 543 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 544 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 545 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 546 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 547 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 548 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 549 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 550 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 551 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 552 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 553 "data/maps/SlateportCity/scripts.pory"

# 554 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 555 "data/maps/SlateportCity/scripts.pory"
	lock
# 556 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 557 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 558 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 559 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 560 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 561 "data/maps/SlateportCity/scripts.pory"
	release
# 562 "data/maps/SlateportCity/scripts.pory"
	end
# 563 "data/maps/SlateportCity/scripts.pory"

# 564 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 565 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 566 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 567 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 568 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 569 "data/maps/SlateportCity/scripts.pory"

# 570 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 571 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 572 "data/maps/SlateportCity/scripts.pory"
	lockall
# 573 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 574 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 575 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 576 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 577 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 578 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 579 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 580 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 581 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 582 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 583 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 584 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 585 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 586 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 587 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 588 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 589 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 590 "data/maps/SlateportCity/scripts.pory"
	end
# 591 "data/maps/SlateportCity/scripts.pory"

# 592 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 593 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 594 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 595 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 596 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 597 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 598 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 599 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 600 "data/maps/SlateportCity/scripts.pory"
	step_end
# 601 "data/maps/SlateportCity/scripts.pory"

# 602 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 603 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 604 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 605 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 606 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 607 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 608 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 609 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 610 "data/maps/SlateportCity/scripts.pory"
	step_end
# 611 "data/maps/SlateportCity/scripts.pory"

# 612 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 613 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 614 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 615 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 616 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 617 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 618 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 619 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 620 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 621 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 622 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 623 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 624 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 625 "data/maps/SlateportCity/scripts.pory"
	step_end
# 626 "data/maps/SlateportCity/scripts.pory"

# 627 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 628 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 629 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 630 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 631 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 632 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 633 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 634 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 635 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 636 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 637 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 638 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 639 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 640 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 641 "data/maps/SlateportCity/scripts.pory"
	step_end
# 642 "data/maps/SlateportCity/scripts.pory"

# 643 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 644 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 645 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 646 "data/maps/SlateportCity/scripts.pory"
	step_end
# 647 "data/maps/SlateportCity/scripts.pory"

# 648 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 649 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 650 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 651 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 652 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 653 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 654 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 655 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 656 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 657 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 658 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 659 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 660 "data/maps/SlateportCity/scripts.pory"
	step_end
# 661 "data/maps/SlateportCity/scripts.pory"

# 662 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 663 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 664 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 665 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 666 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 667 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 668 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 669 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 670 "data/maps/SlateportCity/scripts.pory"
	step_end
# 671 "data/maps/SlateportCity/scripts.pory"

# 672 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 673 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 674 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 675 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 676 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 677 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 678 "data/maps/SlateportCity/scripts.pory"
	step_end
# 679 "data/maps/SlateportCity/scripts.pory"

# 680 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 681 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 682 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 683 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 684 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 685 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 686 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 687 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 688 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 689 "data/maps/SlateportCity/scripts.pory"
	step_end
# 690 "data/maps/SlateportCity/scripts.pory"

# 691 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 692 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 693 "data/maps/SlateportCity/scripts.pory"
	end
# 694 "data/maps/SlateportCity/scripts.pory"

# 695 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 696 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 697 "data/maps/SlateportCity/scripts.pory"
	end
# 698 "data/maps/SlateportCity/scripts.pory"

# 699 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 700 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 701 "data/maps/SlateportCity/scripts.pory"
	end
# 702 "data/maps/SlateportCity/scripts.pory"

# 703 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 704 "data/maps/SlateportCity/scripts.pory"
	lock
# 705 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 706 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 707 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 708 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 709 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 710 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 711 "data/maps/SlateportCity/scripts.pory"
	release
# 712 "data/maps/SlateportCity/scripts.pory"
	end
# 713 "data/maps/SlateportCity/scripts.pory"

# 714 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 715 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 716 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 717 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 718 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 719 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 720 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 721 "data/maps/SlateportCity/scripts.pory"
	end
# 722 "data/maps/SlateportCity/scripts.pory"

# 723 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 724 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 725 "data/maps/SlateportCity/scripts.pory"
	release
# 726 "data/maps/SlateportCity/scripts.pory"
	end
# 727 "data/maps/SlateportCity/scripts.pory"

# 728 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 729 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 730 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 731 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 732 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 733 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 734 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 735 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 736 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 737 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 738 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 739 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 740 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 741 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 742 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 743 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 744 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 745 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 746 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 747 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 748 "data/maps/SlateportCity/scripts.pory"
	end
# 749 "data/maps/SlateportCity/scripts.pory"

# 750 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 751 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 752 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 753 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 754 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 755 "data/maps/SlateportCity/scripts.pory"
	end
# 756 "data/maps/SlateportCity/scripts.pory"

# 757 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 758 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 759 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 760 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 761 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 762 "data/maps/SlateportCity/scripts.pory"
	end
# 763 "data/maps/SlateportCity/scripts.pory"

# 764 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 765 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 766 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 767 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 768 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 769 "data/maps/SlateportCity/scripts.pory"
	end
# 770 "data/maps/SlateportCity/scripts.pory"

# 771 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 772 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 773 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 774 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 775 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 776 "data/maps/SlateportCity/scripts.pory"
	end
# 777 "data/maps/SlateportCity/scripts.pory"

# 778 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 779 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 780 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 781 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 782 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 783 "data/maps/SlateportCity/scripts.pory"
	end
# 784 "data/maps/SlateportCity/scripts.pory"

# 785 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 786 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 787 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 788 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 789 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 790 "data/maps/SlateportCity/scripts.pory"
	end
# 791 "data/maps/SlateportCity/scripts.pory"

# 792 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 793 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 794 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 795 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 796 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 797 "data/maps/SlateportCity/scripts.pory"
	end
# 798 "data/maps/SlateportCity/scripts.pory"

# 799 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 800 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 801 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 802 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 803 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 804 "data/maps/SlateportCity/scripts.pory"
	end
# 805 "data/maps/SlateportCity/scripts.pory"

# 806 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 807 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 808 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 809 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 810 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 811 "data/maps/SlateportCity/scripts.pory"
	end
# 812 "data/maps/SlateportCity/scripts.pory"

# 813 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 814 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 815 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 816 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 817 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 818 "data/maps/SlateportCity/scripts.pory"
	end
# 819 "data/maps/SlateportCity/scripts.pory"

# 820 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 821 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 822 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 823 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 824 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 825 "data/maps/SlateportCity/scripts.pory"
	end
# 826 "data/maps/SlateportCity/scripts.pory"

# 827 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 828 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 829 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 830 "data/maps/SlateportCity/scripts.pory"
	release
# 831 "data/maps/SlateportCity/scripts.pory"
	end
# 832 "data/maps/SlateportCity/scripts.pory"

# 833 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 834 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 835 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 836 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 837 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 838 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 839 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 840 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 841 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 842 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 843 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 844 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 845 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 846 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 847 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 848 "data/maps/SlateportCity/scripts.pory"
	release
# 849 "data/maps/SlateportCity/scripts.pory"
	end
# 850 "data/maps/SlateportCity/scripts.pory"

# 851 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 852 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 853 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 854 "data/maps/SlateportCity/scripts.pory"
	release
# 855 "data/maps/SlateportCity/scripts.pory"
	end
# 856 "data/maps/SlateportCity/scripts.pory"

# 857 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 858 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 859 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 860 "data/maps/SlateportCity/scripts.pory"
	end
# 861 "data/maps/SlateportCity/scripts.pory"

# 862 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 863 "data/maps/SlateportCity/scripts.pory"
	lockall
# 864 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 865 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 866 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 867 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 868 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 869 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 870 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 871 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 872 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 873 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 874 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 875 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 876 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 877 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 878 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 879 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 880 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 881 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 882 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 883 "data/maps/SlateportCity/scripts.pory"
	end
# 884 "data/maps/SlateportCity/scripts.pory"

# 885 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 886 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 887 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 888 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 889 "data/maps/SlateportCity/scripts.pory"
	step_end
# 890 "data/maps/SlateportCity/scripts.pory"

# 891 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 892 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 893 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 894 "data/maps/SlateportCity/scripts.pory"
	step_end
# 895 "data/maps/SlateportCity/scripts.pory"

# 896 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 897 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 898 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 899 "data/maps/SlateportCity/scripts.pory"
	step_end
# 900 "data/maps/SlateportCity/scripts.pory"

# 901 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 902 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 903 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 904 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 905 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 906 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 907 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 908 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 909 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 910 "data/maps/SlateportCity/scripts.pory"
	step_end
# 911 "data/maps/SlateportCity/scripts.pory"

# 912 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 913 "data/maps/SlateportCity/scripts.pory"
	lockall
# 914 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 915 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 916 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 917 "data/maps/SlateportCity/scripts.pory"
	end
# 918 "data/maps/SlateportCity/scripts.pory"

# 919 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 920 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 921 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 922 "data/maps/SlateportCity/scripts.pory"

# 923 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 924 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 925 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 926 "data/maps/SlateportCity/scripts.pory"

# 927 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 928 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 929 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 930 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 931 "data/maps/SlateportCity/scripts.pory"

# 932 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 933 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 934 "data/maps/SlateportCity/scripts.pory"

# 935 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 936 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 937 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 938 "data/maps/SlateportCity/scripts.pory"

# 939 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 940 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 941 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 942 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 943 "data/maps/SlateportCity/scripts.pory"

# 944 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 945 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 946 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 947 "data/maps/SlateportCity/scripts.pory"

# 948 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 949 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 950 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 951 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 952 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 953 "data/maps/SlateportCity/scripts.pory"

# 954 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 955 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 956 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 957 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 958 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 959 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 960 "data/maps/SlateportCity/scripts.pory"

# 961 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 962 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 963 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 964 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 965 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 966 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 967 "data/maps/SlateportCity/scripts.pory"

# 968 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 969 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 970 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 971 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 972 "data/maps/SlateportCity/scripts.pory"

# 973 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 974 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 975 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 976 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 978 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 979 "data/maps/SlateportCity/scripts.pory"

# 980 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 981 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 983 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 984 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 985 "data/maps/SlateportCity/scripts.pory"

# 986 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 987 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 988 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 989 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 990 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 991 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 992 "data/maps/SlateportCity/scripts.pory"

# 993 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 994 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 995 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 996 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 997 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 998 "data/maps/SlateportCity/scripts.pory"

# 999 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1000 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1001 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1002 "data/maps/SlateportCity/scripts.pory"

# 1003 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1004 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1006 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1007 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1008 "data/maps/SlateportCity/scripts.pory"

# 1009 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1010 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1012 "data/maps/SlateportCity/scripts.pory"

# 1013 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1014 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1015 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1016 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1017 "data/maps/SlateportCity/scripts.pory"

# 1018 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1019 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1020 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1021 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1022 "data/maps/SlateportCity/scripts.pory"

# 1023 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1024 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1025 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1027 "data/maps/SlateportCity/scripts.pory"

# 1028 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1029 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1031 "data/maps/SlateportCity/scripts.pory"

# 1032 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1033 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1035 "data/maps/SlateportCity/scripts.pory"

# 1036 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1037 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1038 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1039 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1040 "data/maps/SlateportCity/scripts.pory"

# 1041 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1042 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1043 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1044 "data/maps/SlateportCity/scripts.pory"

# 1045 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1046 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1048 "data/maps/SlateportCity/scripts.pory"

# 1049 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1051 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1052 "data/maps/SlateportCity/scripts.pory"

# 1053 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1054 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1055 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1056 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1057 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1058 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1059 "data/maps/SlateportCity/scripts.pory"

# 1060 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1061 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1062 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1064 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1065 "data/maps/SlateportCity/scripts.pory"

# 1066 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1067 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1070 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1071 "data/maps/SlateportCity/scripts.pory"

# 1072 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1074 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1075 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1076 "data/maps/SlateportCity/scripts.pory"

# 1077 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1078 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1079 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1080 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1082 "data/maps/SlateportCity/scripts.pory"

# 1083 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1084 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1085 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1086 "data/maps/SlateportCity/scripts.pory"

# 1087 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1088 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1089 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1090 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1091 "data/maps/SlateportCity/scripts.pory"

# 1092 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1093 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1094 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1096 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1097 "data/maps/SlateportCity/scripts.pory"

# 1098 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1100 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1101 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1105 "data/maps/SlateportCity/scripts.pory"

# 1106 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1111 "data/maps/SlateportCity/scripts.pory"

# 1112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1113 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1116 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1117 "data/maps/SlateportCity/scripts.pory"

# 1118 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1123 "data/maps/SlateportCity/scripts.pory"

# 1124 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1128 "data/maps/SlateportCity/scripts.pory"

# 1129 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1132 "data/maps/SlateportCity/scripts.pory"

# 1133 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1134 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1136 "data/maps/SlateportCity/scripts.pory"

# 1137 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1139 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1140 "data/maps/SlateportCity/scripts.pory"

# 1141 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1144 "data/maps/SlateportCity/scripts.pory"

# 1145 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: This way {PLAYER}{KUN}!$"
# 1147 "data/maps/SlateportCity/scripts.pory"

# 1148 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1153 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1154 "data/maps/SlateportCity/scripts.pory"

# 1155 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1158 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1159 "data/maps/SlateportCity/scripts.pory"

# 1160 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1163 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1169 "data/maps/SlateportCity/scripts.pory"

# 1170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1180 "data/maps/SlateportCity/scripts.pory"

# 1181 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1186 "data/maps/SlateportCity/scripts.pory"

# 1187 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1191 "data/maps/SlateportCity/scripts.pory"

# 1192 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1195 "data/maps/SlateportCity/scripts.pory"

# 1196 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1199 "data/maps/SlateportCity/scripts.pory"

# 1200 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1204 "data/maps/SlateportCity/scripts.pory"

# 1205 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1210 "data/maps/SlateportCity/scripts.pory"

# 1211 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1216 "data/maps/SlateportCity/scripts.pory"

# 1217 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1220 "data/maps/SlateportCity/scripts.pory"

# 1221 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1225 "data/maps/SlateportCity/scripts.pory"

# 1226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1230 "data/maps/SlateportCity/scripts.pory"

# 1231 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1234 "data/maps/SlateportCity/scripts.pory"

# 1235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1241 "data/maps/SlateportCity/scripts.pory"

# 1242 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1246 "data/maps/SlateportCity/scripts.pory"

# 1247 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1250 "data/maps/SlateportCity/scripts.pory"

# 1251 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1265 "data/maps/SlateportCity/scripts.pory"

# 1266 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1276 "data/maps/SlateportCity/scripts.pory"

# 1277 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1280 "data/maps/SlateportCity/scripts.pory"

# 1281 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1284 "data/maps/SlateportCity/scripts.pory"

# 1285 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1288 "data/maps/SlateportCity/scripts.pory"

# 1289 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1292 "data/maps/SlateportCity/scripts.pory"

# 1293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1298 "data/maps/SlateportCity/scripts.pory"

# 1299 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1302 "data/maps/SlateportCity/scripts.pory"

# 1303 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1308 "data/maps/SlateportCity/scripts.pory"

# 1309 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1317 "data/maps/SlateportCity/scripts.pory"

# 1318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1321 "data/maps/SlateportCity/scripts.pory"

# 1322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1328 "data/maps/SlateportCity/scripts.pory"

# 1329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1332 "data/maps/SlateportCity/scripts.pory"

# 1333 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1340 "data/maps/SlateportCity/scripts.pory"

# 1341 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
