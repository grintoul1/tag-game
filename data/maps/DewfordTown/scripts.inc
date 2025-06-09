# 1 "data/maps/DewfordTown/scripts.pory"

# 2 "data/maps/DewfordTown/scripts.pory"
@ Sailing to and from Dewford uses local IDs from different maps
# 3 "data/maps/DewfordTown/scripts.pory"
@ e.g. Route 104's sail to Dewford script references local IDs from Dewford's map
# 4 "data/maps/DewfordTown/scripts.pory"
@ All of these local IDs are labeled here
# 5 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_DEWFORD, 2
# 6 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_DEWFORD, 4
# 7 "data/maps/DewfordTown/scripts.pory"

# 8 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R109, 1
# 9 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R109, 2
# 10 "data/maps/DewfordTown/scripts.pory"

# 11 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R104, 6
# 12 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R104, 7
# 13 "data/maps/DewfordTown/scripts.pory"

# 14 "data/maps/DewfordTown/scripts.pory"
DewfordTown_MapScripts::
# 15 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
# 16 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DewfordTown_OnFrame
# 17 "data/maps/DewfordTown/scripts.pory"
	.byte 0
# 18 "data/maps/DewfordTown/scripts.pory"

# 19 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnFrame:
# 20 "data/maps/DewfordTown/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 14, DewfordTown_EventScript_ProgressEmmieState
# 21 "data/maps/DewfordTown/scripts.pory"
	.2byte 0
# 22 "data/maps/DewfordTown/scripts.pory"

# 23 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ProgressEmmieState::
# 24 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 13
# 25 "data/maps/DewfordTown/scripts.pory"
	return
# 26 "data/maps/DewfordTown/scripts.pory"

# 27 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnTransition:
# 28 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 29 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 30 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 31 "data/maps/DewfordTown/scripts.pory"
	end
# 32 "data/maps/DewfordTown/scripts.pory"

# 33 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney::
# 34 "data/maps/DewfordTown/scripts.pory"
	lock
# 35 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 36 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, DewfordTown_EventScript_NoReturnToPetalburgPrompt
# 37 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_PleaseDeliverLetter
# 38 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WhereAreWeBound, MSGBOX_YESNO
# 39 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 40 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_CancelSailSelect
# 41 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_ChooseSlateport
# 42 "data/maps/DewfordTown/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
# 43 "data/maps/DewfordTown/scripts.pory"
	end
# 44 "data/maps/DewfordTown/scripts.pory"

# 45 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChoosePetalburg::
# 46 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 47 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 48 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 49 "data/maps/DewfordTown/scripts.pory"
	release
# 50 "data/maps/DewfordTown/scripts.pory"
	end
# 51 "data/maps/DewfordTown/scripts.pory"

# 52 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChooseSlateport::
# 53 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
# 54 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 55 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport
# 56 "data/maps/DewfordTown/scripts.pory"
	release
# 57 "data/maps/DewfordTown/scripts.pory"
	end
# 58 "data/maps/DewfordTown/scripts.pory"

# 59 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelSailSelect::
# 60 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 61 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 62 "data/maps/DewfordTown/scripts.pory"
	release
# 63 "data/maps/DewfordTown/scripts.pory"
	end
# 64 "data/maps/DewfordTown/scripts.pory"

# 65 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt::
# 66 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
# 67 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
# 68 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoFightBrawly, MSGBOX_DEFAULT
# 69 "data/maps/DewfordTown/scripts.pory"
	release
# 70 "data/maps/DewfordTown/scripts.pory"
	end
# 71 "data/maps/DewfordTown/scripts.pory"

# 72 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NoReturnToPetalburgPrompt::
# 73 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoFightBrawly, MSGBOX_DEFAULT
# 74 "data/maps/DewfordTown/scripts.pory"
	release
# 75 "data/maps/DewfordTown/scripts.pory"
	end
# 76 "data/maps/DewfordTown/scripts.pory"

# 77 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PleaseDeliverLetter::
# 78 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PleaseDeliverLetter, MSGBOX_DEFAULT
# 79 "data/maps/DewfordTown/scripts.pory"
	release
# 80 "data/maps/DewfordTown/scripts.pory"
	end
# 81 "data/maps/DewfordTown/scripts.pory"

# 82 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailBackToPetalburg::
# 83 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 84 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 85 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 86 "data/maps/DewfordTown/scripts.pory"
	end
# 87 "data/maps/DewfordTown/scripts.pory"

# 88 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Woman::
# 89 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
# 90 "data/maps/DewfordTown/scripts.pory"
	end
# 91 "data/maps/DewfordTown/scripts.pory"

# 92 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TownSign::
# 93 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
# 94 "data/maps/DewfordTown/scripts.pory"
	end
# 95 "data/maps/DewfordTown/scripts.pory"

# 96 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GymSign::
# 97 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
# 98 "data/maps/DewfordTown/scripts.pory"
	end
# 99 "data/maps/DewfordTown/scripts.pory"

# 100 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HallSign::
# 101 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
# 102 "data/maps/DewfordTown/scripts.pory"
	end
# 103 "data/maps/DewfordTown/scripts.pory"

# 104 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman::
# 105 "data/maps/DewfordTown/scripts.pory"
	lock
# 106 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 107 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
# 108 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
# 109 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
# 110 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
# 111 "data/maps/DewfordTown/scripts.pory"
	end
# 112 "data/maps/DewfordTown/scripts.pory"

# 113 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod::
# 114 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 115 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 116 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 117 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 118 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 119 "data/maps/DewfordTown/scripts.pory"
	release
# 120 "data/maps/DewfordTown/scripts.pory"
	end
# 121 "data/maps/DewfordTown/scripts.pory"

# 122 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NotGettingItchToFish::
# 123 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 124 "data/maps/DewfordTown/scripts.pory"
	release
# 125 "data/maps/DewfordTown/scripts.pory"
	end
# 126 "data/maps/DewfordTown/scripts.pory"

# 127 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing::
# 128 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_HowsYourFishing
# 129 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 130 "data/maps/DewfordTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 131 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
# 132 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
# 133 "data/maps/DewfordTown/scripts.pory"
	end
# 134 "data/maps/DewfordTown/scripts.pory"

# 135 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingExcellent::
# 136 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 137 "data/maps/DewfordTown/scripts.pory"
	release
# 138 "data/maps/DewfordTown/scripts.pory"
	end
# 139 "data/maps/DewfordTown/scripts.pory"

# 140 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingNotSoGood::
# 141 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
# 142 "data/maps/DewfordTown/scripts.pory"
	release
# 143 "data/maps/DewfordTown/scripts.pory"
	end
# 144 "data/maps/DewfordTown/scripts.pory"

# 145 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg::
# 146 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 147 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 148 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
# 149 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 150 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 151 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 152 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 153 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 154 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 155 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 156 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
# 157 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 158 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 160 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 161 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
# 162 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 164 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 165 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 166 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 167 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 168 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 169 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 170 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 171 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 172 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 173 "data/maps/DewfordTown/scripts.pory"
	waitstate
# 174 "data/maps/DewfordTown/scripts.pory"
	release
# 175 "data/maps/DewfordTown/scripts.pory"
	end
# 176 "data/maps/DewfordTown/scripts.pory"

# 177 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport::
# 178 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 179 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 16
# 180 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 181 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
# 182 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_NPC_FOLLOWER, MAP_DEWFORD_TOWN, 1
# 183 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 184 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 185 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 186 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 187 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 188 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 189 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, DewfordTown_Movement_EmmieBoardBoat
# 190 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 191 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_DEWFORD_TOWN
# 192 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 193 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
# 194 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
# 195 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 196 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 197 "data/maps/DewfordTown/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 21, 26
# 198 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_ROUTE109
# 199 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, DewfordTown_Movement_EmmieExitBoatSlateport
# 200 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 201 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 202 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
# 203 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 204 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
# 205 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BRINEY_R109
# 206 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 207 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
# 208 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 209 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 210 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BOAT_R109
# 211 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 212 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 213 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 214 "data/maps/DewfordTown/scripts.pory"
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
# 215 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
# 216 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 217 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 218 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 219 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_NPC_FOLLOWER, MAP_DEWFORD_TOWN
# 220 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
# 221 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_R109
# 222 "data/maps/DewfordTown/scripts.pory"
	release
# 223 "data/maps/DewfordTown/scripts.pory"
	end
# 224 "data/maps/DewfordTown/scripts.pory"

# 225 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateportDeliverGoods::
# 226 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
# 227 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 228 "data/maps/DewfordTown/scripts.pory"
	return
# 229 "data/maps/DewfordTown/scripts.pory"

# 230 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateport::
# 231 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
# 232 "data/maps/DewfordTown/scripts.pory"
	return
# 233 "data/maps/DewfordTown/scripts.pory"

# 234 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 235 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 236 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 237 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 238 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 239 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 240 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 241 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 242 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 243 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 244 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 245 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 246 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 247 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 248 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 249 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 250 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 251 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 252 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 253 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 254 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 255 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 256 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 257 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 258 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 259 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 260 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 261 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 262 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 263 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 264 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 265 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 266 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 267 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 268 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 269 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 270 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 271 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 272 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 273 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 274 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 275 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 276 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 277 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 278 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 279 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 280 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 281 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 282 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 283 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 284 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 285 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 286 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 287 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 288 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 289 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 290 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 291 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 292 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 293 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 294 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 295 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 296 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 297 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 298 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 299 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 300 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 301 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 302 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 303 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 304 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 306 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 307 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 308 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 309 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 310 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 311 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 312 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 313 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 314 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 315 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 316 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 317 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 318 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 319 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 320 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 321 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 322 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 323 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 324 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 325 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 326 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 327 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 328 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 329 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 330 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 331 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 332 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 333 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 334 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 335 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 336 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 337 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 338 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 339 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 340 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 341 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 342 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 343 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 344 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 345 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 346 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 347 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 348 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 349 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 350 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 351 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 352 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 353 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 354 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 355 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 356 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 357 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 358 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 359 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 360 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 361 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 362 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 363 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 364 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 365 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 366 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 367 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 368 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 369 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 370 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 371 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 372 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 373 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 374 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 375 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 376 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 377 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 378 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 379 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 380 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 381 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 382 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 383 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 384 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 385 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 386 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 387 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 388 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 389 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 390 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 391 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 392 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 393 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 394 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 395 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 396 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 397 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 398 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 399 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 400 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 401 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 402 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 403 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 404 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 405 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 406 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 407 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 408 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 409 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 410 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 411 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 412 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 413 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 414 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 415 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 416 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 417 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 418 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 419 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 420 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 421 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 422 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 423 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 424 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 425 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 426 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 427 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 428 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 429 "data/maps/DewfordTown/scripts.pory"
	step_end
# 430 "data/maps/DewfordTown/scripts.pory"

# 431 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 432 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 433 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 434 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 435 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 436 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 437 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 438 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 439 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 440 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 441 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 442 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 443 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 444 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 445 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 446 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 447 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 448 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 449 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 450 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 451 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 452 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 453 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 454 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 455 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 456 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 457 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 458 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 459 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 460 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 461 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 462 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 463 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 464 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 465 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 466 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 467 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 468 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 469 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 470 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 471 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 472 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 473 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 474 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 475 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 476 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 477 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 478 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 479 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 480 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 481 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 482 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 483 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 484 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 485 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 486 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 487 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 488 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 489 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 490 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 491 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 492 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 493 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 494 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 495 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 496 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 497 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 498 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 499 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 500 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 501 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 502 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 503 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 504 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 505 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 506 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 507 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 508 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 509 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 510 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 511 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 512 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 513 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 514 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 515 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 516 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 517 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 518 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 519 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 520 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 521 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 522 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 523 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 524 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 525 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 526 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 527 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 528 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 529 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 530 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 531 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 532 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 533 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 534 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 535 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 536 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 537 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 538 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 539 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 540 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 541 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 542 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 543 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 544 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 545 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 546 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 547 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 548 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 549 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 550 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 551 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 552 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 553 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 554 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 555 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 556 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 557 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 558 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 559 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 560 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 561 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 562 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 563 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 564 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 565 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 566 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 567 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 568 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 569 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 570 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 571 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 572 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 573 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 574 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 575 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 576 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 577 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 578 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 579 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 580 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 581 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 582 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 583 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 584 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 585 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 586 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 587 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 588 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 589 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 590 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 591 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 592 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 593 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 594 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 595 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 596 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 597 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 598 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 599 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 600 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 601 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 602 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 603 "data/maps/DewfordTown/scripts.pory"
	step_end
# 604 "data/maps/DewfordTown/scripts.pory"

# 605 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBoardBoat:
# 606 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 607 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 608 "data/maps/DewfordTown/scripts.pory"
	step_end
# 609 "data/maps/DewfordTown/scripts.pory"

# 610 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_EmmieBoardBoat:
# 611 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 612 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 613 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 614 "data/maps/DewfordTown/scripts.pory"
	step_end
# 615 "data/maps/DewfordTown/scripts.pory"

# 616 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatPetalburg:
# 617 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 618 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 619 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 620 "data/maps/DewfordTown/scripts.pory"
	step_end
# 621 "data/maps/DewfordTown/scripts.pory"

# 622 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatSlateport:
# 623 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 624 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 625 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 626 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 627 "data/maps/DewfordTown/scripts.pory"
	step_end
# 628 "data/maps/DewfordTown/scripts.pory"

# 629 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_EmmieExitBoatSlateport:
# 630 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 631 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 632 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 633 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 634 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 635 "data/maps/DewfordTown/scripts.pory"
	step_end
# 636 "data/maps/DewfordTown/scripts.pory"

# 637 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyBoardBoat:
# 638 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 639 "data/maps/DewfordTown/scripts.pory"
	step_end
# 640 "data/maps/DewfordTown/scripts.pory"

# 641 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyExitBoat:
# 642 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 643 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 644 "data/maps/DewfordTown/scripts.pory"
	step_end
# 645 "data/maps/DewfordTown/scripts.pory"

# 646 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy::
# 647 "data/maps/DewfordTown/scripts.pory"
	lock
# 648 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 649 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 650 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 651 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
# 652 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
# 653 "data/maps/DewfordTown/scripts.pory"
	end
# 654 "data/maps/DewfordTown/scripts.pory"

# 655 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ConfirmTrendyPhrase::
# 656 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 657 "data/maps/DewfordTown/scripts.pory"
	release
# 658 "data/maps/DewfordTown/scripts.pory"
	end
# 659 "data/maps/DewfordTown/scripts.pory"

# 660 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase::
# 661 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 662 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 663 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 664 "data/maps/DewfordTown/scripts.pory"
	lock
# 665 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 666 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
# 667 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
# 668 "data/maps/DewfordTown/scripts.pory"
	end
# 669 "data/maps/DewfordTown/scripts.pory"

# 670 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase::
# 671 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 672 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
# 673 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 674 "data/maps/DewfordTown/scripts.pory"
	release
# 675 "data/maps/DewfordTown/scripts.pory"
	end
# 676 "data/maps/DewfordTown/scripts.pory"

# 677 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelNewTrendyPhrase::
# 678 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 679 "data/maps/DewfordTown/scripts.pory"
	release
# 680 "data/maps/DewfordTown/scripts.pory"
	end
# 681 "data/maps/DewfordTown/scripts.pory"

# 682 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PhraseNotTrendyEnough::
# 683 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 684 "data/maps/DewfordTown/scripts.pory"
	release
# 685 "data/maps/DewfordTown/scripts.pory"
	end
# 686 "data/maps/DewfordTown/scripts.pory"

# 687 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TinyIslandCommunity:
# 688 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD is a tiny island community.\n"
# 689 "data/maps/DewfordTown/scripts.pory"
	.string "If something gets trendy here,\l"
# 690 "data/maps/DewfordTown/scripts.pory"
	.string "everyone picks up on it right away.$"
# 691 "data/maps/DewfordTown/scripts.pory"

# 692 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TownSign:
# 693 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD TOWN\n"
# 694 "data/maps/DewfordTown/scripts.pory"
	.string "“A tiny island in the blue sea.”$"
# 695 "data/maps/DewfordTown/scripts.pory"

# 696 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GymSign:
# 697 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\n"
# 698 "data/maps/DewfordTown/scripts.pory"
	.string "Leader: BRAWLY\l"
# 699 "data/maps/DewfordTown/scripts.pory"
	.string "“A big wave in fighting!”$"
# 700 "data/maps/DewfordTown/scripts.pory"

# 701 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HallSign:
# 702 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD HALL\n"
# 703 "data/maps/DewfordTown/scripts.pory"
	.string "“Everyone's information exchange!”$"
# 704 "data/maps/DewfordTown/scripts.pory"

# 705 "data/maps/DewfordTown/scripts.pory"
Route104_Text_LandedInDewfordDeliverLetter:
# 706 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 707 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD.\p"
# 708 "data/maps/DewfordTown/scripts.pory"
	.string "I suppose you're off to deliver that\n"
# 709 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER to, who was it now, STEVEN!$"
# 710 "data/maps/DewfordTown/scripts.pory"

# 711 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SetSailBackToPetalburg:
# 712 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Have you delivered your\n"
# 713 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER?\p"
# 714 "data/maps/DewfordTown/scripts.pory"
	.string "Or were you meaning to sail back to\n"
# 715 "data/maps/DewfordTown/scripts.pory"
	.string "PETALBURG?$"
# 716 "data/maps/DewfordTown/scripts.pory"

# 717 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail2:
# 718 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG it is, then!\p"
# 719 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 720 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 721 "data/maps/DewfordTown/scripts.pory"

# 722 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoDeliverIllBeWaiting:
# 723 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 724 "data/maps/DewfordTown/scripts.pory"
	.string "the LETTER. I'll be waiting.$"
# 725 "data/maps/DewfordTown/scripts.pory"

# 726 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoFightBrawly:
# 727 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: This is your chance to\n"
# 728 "data/maps/DewfordTown/scripts.pory"
	.string "challenge Dewford gym. I'll be waiting.$"
# 729 "data/maps/DewfordTown/scripts.pory"

# 730 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInDewford:
# 731 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 732 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD!\p"
# 733 "data/maps/DewfordTown/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 734 "data/maps/DewfordTown/scripts.pory"
	.string "you want to set sail again!$"
# 735 "data/maps/DewfordTown/scripts.pory"

# 736 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_WhereAreWeBound:
# 737 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 738 "data/maps/DewfordTown/scripts.pory"
	.string "Time to move on, is it?\p"
# 739 "data/maps/DewfordTown/scripts.pory"
	.string "This is a one-way trip remember!$"
# 740 "data/maps/DewfordTown/scripts.pory"

# 741 "data/maps/DewfordTown/scripts.pory"

# 742 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail:
# 743 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG, is it?\p"
# 744 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 745 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 746 "data/maps/DewfordTown/scripts.pory"

# 747 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SlateportWereSettingSail:
# 748 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: SLATEPORT, it is!\p"
# 749 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 750 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 751 "data/maps/DewfordTown/scripts.pory"

# 752 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
# 753 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
# 754 "data/maps/DewfordTown/scripts.pory"
	.string "you need to set sail again!$"
# 755 "data/maps/DewfordTown/scripts.pory"

# 756 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GettingItchToFish:
# 757 "data/maps/DewfordTown/scripts.pory"
	.string "This is a renowned fishing spot.\n"
# 758 "data/maps/DewfordTown/scripts.pory"
	.string "Are you getting the itch to fish?$"
# 759 "data/maps/DewfordTown/scripts.pory"

# 760 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GiveYouOneOfMyRods:
# 761 "data/maps/DewfordTown/scripts.pory"
	.string "I hear you, and I like what\n"
# 762 "data/maps/DewfordTown/scripts.pory"
	.string "you're saying!\p"
# 763 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you one of my fishing RODS.$"
# 764 "data/maps/DewfordTown/scripts.pory"

# 765 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThrowInFishingAdvice:
# 766 "data/maps/DewfordTown/scripts.pory"
	.string "And, as an added bonus, I'll even throw\n"
# 767 "data/maps/DewfordTown/scripts.pory"
	.string "in a little fishing advice!\p"
# 768 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 769 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 770 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 771 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull on the ROD.\p"
# 772 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 773 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 774 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 775 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 776 "data/maps/DewfordTown/scripts.pory"

# 777 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThatsTooBadThen:
# 778 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, is that so?\n"
# 779 "data/maps/DewfordTown/scripts.pory"
	.string "That's too bad, then.$"
# 780 "data/maps/DewfordTown/scripts.pory"

# 781 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HowsYourFishing:
# 782 "data/maps/DewfordTown/scripts.pory"
	.string "Yo!\n"
# 783 "data/maps/DewfordTown/scripts.pory"
	.string "How's your fishing?$"
# 784 "data/maps/DewfordTown/scripts.pory"

# 785 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GreatHaulInSomeBigOnes:
# 786 "data/maps/DewfordTown/scripts.pory"
	.string "Is that right! That's great!\n"
# 787 "data/maps/DewfordTown/scripts.pory"
	.string "Haul in some big ones!$"
# 788 "data/maps/DewfordTown/scripts.pory"

# 789 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_FishingAdvice:
# 790 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
# 791 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you a little fishing advice.\p"
# 792 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 793 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 794 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 795 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull the ROD.\p"
# 796 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 797 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 798 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 799 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 800 "data/maps/DewfordTown/scripts.pory"

# 801 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XIsTheBiggestHappeningThingRight:
# 802 "data/maps/DewfordTown/scripts.pory"
	.string "I like what's hip, happening, and trendy.\n"
# 803 "data/maps/DewfordTown/scripts.pory"
	.string "I'm always checking it out.\p"
# 804 "data/maps/DewfordTown/scripts.pory"
	.string "Listen, have you heard about this new\n"
# 805 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”?\p"
# 806 "data/maps/DewfordTown/scripts.pory"
	.string "That's right!\n"
# 807 "data/maps/DewfordTown/scripts.pory"
	.string "Of course you know!\p"
# 808 "data/maps/DewfordTown/scripts.pory"
	.string "I mean, sheesh,\n"
# 809 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 810 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hottest thing in cool!\p"
# 811 "data/maps/DewfordTown/scripts.pory"
	.string "Wherever you're from,\n"
# 812 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 813 "data/maps/DewfordTown/scripts.pory"
	.string "is the biggest happening thing, right?$"
# 814 "data/maps/DewfordTown/scripts.pory"

# 815 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TellMeWhatsNewAndIn:
# 816 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 817 "data/maps/DewfordTown/scripts.pory"
	.string "It's not the hip and happening thing?\p"
# 818 "data/maps/DewfordTown/scripts.pory"
	.string "Well, hey, you have to tell me,\n"
# 819 "data/maps/DewfordTown/scripts.pory"
	.string "what's new and what's “in”?$"
# 820 "data/maps/DewfordTown/scripts.pory"

# 821 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_OfCourseIKnowAboutThat:
# 822 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 823 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”?\p"
# 824 "data/maps/DewfordTown/scripts.pory"
	.string "… …\p"
# 825 "data/maps/DewfordTown/scripts.pory"
	.string "…Uh… Yeah! That's right!\n"
# 826 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, I knew that! Knew it all along!\p"
# 827 "data/maps/DewfordTown/scripts.pory"
	.string "Of course I know about that!\n"
# 828 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” right?\p"
# 829 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, that's it, it's there!\n"
# 830 "data/maps/DewfordTown/scripts.pory"
	.string "Isn't “{STR_VAR_2}”\l"
# 831 "data/maps/DewfordTown/scripts.pory"
	.string "the coolest, or what?\p"
# 832 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hippest thing in hip.\n"
# 833 "data/maps/DewfordTown/scripts.pory"
	.string "You think I'd not know about it?\p"
# 834 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\n"
# 835 "data/maps/DewfordTown/scripts.pory"
	.string "It's, like, so five minutes ago.\p"
# 836 "data/maps/DewfordTown/scripts.pory"
	.string "Now, “{STR_VAR_2}” is\n"
# 837 "data/maps/DewfordTown/scripts.pory"
	.string "what's vital and in tune with the times!$"
# 838 "data/maps/DewfordTown/scripts.pory"

# 839 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XHuhIThinkYIsCool:
# 840 "data/maps/DewfordTown/scripts.pory"
	.string "Hmm…\n"
# 841 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” huh?\p"
# 842 "data/maps/DewfordTown/scripts.pory"
	.string "But personally, I think\n"
# 843 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 844 "data/maps/DewfordTown/scripts.pory"
	.string "is what's real in cool.$"
# 845 "data/maps/DewfordTown/scripts.pory"

# 846 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
# 847 "data/maps/DewfordTown/scripts.pory"
	.string "Well, if you hear of any happening new\n"
# 848 "data/maps/DewfordTown/scripts.pory"
	.string "trends, come share them with me, okay?$"
# 849 "data/maps/DewfordTown/scripts.pory"

# 850 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_YeahDefinitionOfInRightNow:
# 851 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, absolutely right!\p"
# 852 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}” is the\n"
# 853 "data/maps/DewfordTown/scripts.pory"
	.string "definition of “in” right now.$"
# 854 "data/maps/DewfordTown/scripts.pory"

# 855 "data/maps/DewfordTown/scripts.pory"

# 856 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 857 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 858 "data/maps/DewfordTown/scripts.pory"
	.string "We've made land in SLATEPORT!\p"
# 859 "data/maps/DewfordTown/scripts.pory"
	.string "Please do me a favour and visit CAPT.\n"
# 860 "data/maps/DewfordTown/scripts.pory"
	.string "STERN and deliver these DEVON GOODS?$"
# 861 "data/maps/DewfordTown/scripts.pory"

# 862 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PleaseDeliverLetter:
# 863 "data/maps/DewfordTown/scripts.pory"
	.string "I can't set sail until that letter has\n"
# 864 "data/maps/DewfordTown/scripts.pory"
	.string "been delivered.\p"
# 865 "data/maps/DewfordTown/scripts.pory"
	.string "If you can't find young Steven in town,\n"
# 866 "data/maps/DewfordTown/scripts.pory"
	.string "maybe check Granite Cave to the north.$"
