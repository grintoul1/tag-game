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
	.byte 0
# 17 "data/maps/DewfordTown/scripts.pory"

# 18 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnTransition:
# 19 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 20 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 21 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 22 "data/maps/DewfordTown/scripts.pory"
	end
# 23 "data/maps/DewfordTown/scripts.pory"

# 24 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney::
# 25 "data/maps/DewfordTown/scripts.pory"
	lock
# 26 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 27 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, DewfordTown_EventScript_NoReturnToPetalburgPrompt
# 28 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_PleaseDeliverLetter
# 29 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_WhereAreWeBound, MSGBOX_YESNO
# 30 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 31 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_CancelSailSelect
# 32 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_ChooseSlateport
# 33 "data/maps/DewfordTown/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
# 34 "data/maps/DewfordTown/scripts.pory"
	end
# 35 "data/maps/DewfordTown/scripts.pory"

# 36 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChoosePetalburg::
# 37 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 38 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 39 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 40 "data/maps/DewfordTown/scripts.pory"
	release
# 41 "data/maps/DewfordTown/scripts.pory"
	end
# 42 "data/maps/DewfordTown/scripts.pory"

# 43 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChooseSlateport::
# 44 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
# 45 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 46 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport
# 47 "data/maps/DewfordTown/scripts.pory"
	release
# 48 "data/maps/DewfordTown/scripts.pory"
	end
# 49 "data/maps/DewfordTown/scripts.pory"

# 50 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelSailSelect::
# 51 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 52 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 53 "data/maps/DewfordTown/scripts.pory"
	release
# 54 "data/maps/DewfordTown/scripts.pory"
	end
# 55 "data/maps/DewfordTown/scripts.pory"

# 56 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt::
# 57 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
# 58 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
# 59 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoFightBrawly, MSGBOX_DEFAULT
# 60 "data/maps/DewfordTown/scripts.pory"
	release
# 61 "data/maps/DewfordTown/scripts.pory"
	end
# 62 "data/maps/DewfordTown/scripts.pory"

# 63 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NoReturnToPetalburgPrompt::
# 64 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoFightBrawly, MSGBOX_DEFAULT
# 65 "data/maps/DewfordTown/scripts.pory"
	release
# 66 "data/maps/DewfordTown/scripts.pory"
	end
# 67 "data/maps/DewfordTown/scripts.pory"

# 68 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PleaseDeliverLetter::
# 69 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PleaseDeliverLetter, MSGBOX_DEFAULT
# 70 "data/maps/DewfordTown/scripts.pory"
	release
# 71 "data/maps/DewfordTown/scripts.pory"
	end
# 72 "data/maps/DewfordTown/scripts.pory"

# 73 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailBackToPetalburg::
# 74 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 75 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 76 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 77 "data/maps/DewfordTown/scripts.pory"
	end
# 78 "data/maps/DewfordTown/scripts.pory"

# 79 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Woman::
# 80 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
# 81 "data/maps/DewfordTown/scripts.pory"
	end
# 82 "data/maps/DewfordTown/scripts.pory"

# 83 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TownSign::
# 84 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
# 85 "data/maps/DewfordTown/scripts.pory"
	end
# 86 "data/maps/DewfordTown/scripts.pory"

# 87 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GymSign::
# 88 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
# 89 "data/maps/DewfordTown/scripts.pory"
	end
# 90 "data/maps/DewfordTown/scripts.pory"

# 91 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HallSign::
# 92 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
# 93 "data/maps/DewfordTown/scripts.pory"
	end
# 94 "data/maps/DewfordTown/scripts.pory"

# 95 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman::
# 96 "data/maps/DewfordTown/scripts.pory"
	lock
# 97 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 98 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
# 99 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
# 100 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
# 101 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
# 102 "data/maps/DewfordTown/scripts.pory"
	end
# 103 "data/maps/DewfordTown/scripts.pory"

# 104 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod::
# 105 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 106 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 107 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 108 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 109 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 110 "data/maps/DewfordTown/scripts.pory"
	release
# 111 "data/maps/DewfordTown/scripts.pory"
	end
# 112 "data/maps/DewfordTown/scripts.pory"

# 113 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NotGettingItchToFish::
# 114 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 115 "data/maps/DewfordTown/scripts.pory"
	release
# 116 "data/maps/DewfordTown/scripts.pory"
	end
# 117 "data/maps/DewfordTown/scripts.pory"

# 118 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing::
# 119 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_HowsYourFishing
# 120 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 121 "data/maps/DewfordTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 122 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
# 123 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
# 124 "data/maps/DewfordTown/scripts.pory"
	end
# 125 "data/maps/DewfordTown/scripts.pory"

# 126 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingExcellent::
# 127 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 128 "data/maps/DewfordTown/scripts.pory"
	release
# 129 "data/maps/DewfordTown/scripts.pory"
	end
# 130 "data/maps/DewfordTown/scripts.pory"

# 131 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingNotSoGood::
# 132 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
# 133 "data/maps/DewfordTown/scripts.pory"
	release
# 134 "data/maps/DewfordTown/scripts.pory"
	end
# 135 "data/maps/DewfordTown/scripts.pory"

# 136 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg::
# 137 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 138 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 139 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
# 140 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 141 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 143 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 144 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 146 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 147 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
# 148 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 149 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 151 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 152 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
# 153 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 154 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 155 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 156 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 157 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 158 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 159 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 160 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 161 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 162 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 163 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 164 "data/maps/DewfordTown/scripts.pory"
	waitstate
# 165 "data/maps/DewfordTown/scripts.pory"
	release
# 166 "data/maps/DewfordTown/scripts.pory"
	end
# 167 "data/maps/DewfordTown/scripts.pory"

# 168 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport::
# 169 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 170 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 171 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
# 172 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_NPC_FOLLOWER, MAP_DEWFORD_TOWN, 1
# 173 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 174 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 175 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 176 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 177 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 178 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 179 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, DewfordTown_Movement_EmmieBoardBoat
# 180 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 181 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_DEWFORD_TOWN
# 182 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 183 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
# 184 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
# 185 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 186 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 187 "data/maps/DewfordTown/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 21, 26
# 188 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_ROUTE109
# 189 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, DewfordTown_Movement_EmmieExitBoatSlateport
# 190 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 191 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 192 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
# 193 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 194 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
# 195 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BRINEY_R109
# 196 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 197 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
# 198 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 199 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 200 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BOAT_R109
# 201 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 202 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 203 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 204 "data/maps/DewfordTown/scripts.pory"
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
# 205 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
# 206 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 207 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 208 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 209 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_NPC_FOLLOWER, MAP_DEWFORD_TOWN
# 210 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
# 211 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_R109
# 212 "data/maps/DewfordTown/scripts.pory"
	release
# 213 "data/maps/DewfordTown/scripts.pory"
	end
# 214 "data/maps/DewfordTown/scripts.pory"

# 215 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateportDeliverGoods::
# 216 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
# 217 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 218 "data/maps/DewfordTown/scripts.pory"
	return
# 219 "data/maps/DewfordTown/scripts.pory"

# 220 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateport::
# 221 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
# 222 "data/maps/DewfordTown/scripts.pory"
	return
# 223 "data/maps/DewfordTown/scripts.pory"

# 224 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 225 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 226 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 227 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 228 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 229 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 230 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 231 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 232 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 233 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 234 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 235 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 236 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
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
	walk_up
# 243 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 244 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 245 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 246 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 247 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 248 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 249 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 250 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 251 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 252 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 253 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 254 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 255 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 256 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 257 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 258 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 259 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
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
	walk_fast_left
# 291 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 292 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 293 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 294 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 295 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 296 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 297 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 298 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 299 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 300 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 301 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 302 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 303 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 304 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 305 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 306 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 307 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
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
	walk_fast_up
# 382 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 383 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 384 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 385 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 386 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 387 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 388 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 389 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 390 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 391 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 392 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 393 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 394 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 395 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 396 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 397 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 398 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 399 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 400 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 401 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 402 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 403 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 404 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 405 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 406 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 407 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 408 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 409 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 410 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 411 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 412 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 413 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 414 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 415 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 416 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 417 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 418 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 419 "data/maps/DewfordTown/scripts.pory"
	step_end
# 420 "data/maps/DewfordTown/scripts.pory"

# 421 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 422 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 423 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 424 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 425 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 426 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 427 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 428 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 429 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 430 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 431 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 432 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 433 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 434 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
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
	walk_fast_right
# 570 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 571 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 572 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 573 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 574 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 575 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 576 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 577 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 578 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 579 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 580 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 581 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 582 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 583 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 584 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 585 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 586 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 587 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 588 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 589 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 590 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 591 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 592 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 593 "data/maps/DewfordTown/scripts.pory"
	step_end
# 594 "data/maps/DewfordTown/scripts.pory"

# 595 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBoardBoat:
# 596 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 597 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 598 "data/maps/DewfordTown/scripts.pory"
	step_end
# 599 "data/maps/DewfordTown/scripts.pory"

# 600 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_EmmieBoardBoat:
# 601 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 602 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 603 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 604 "data/maps/DewfordTown/scripts.pory"
	step_end
# 605 "data/maps/DewfordTown/scripts.pory"

# 606 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatPetalburg:
# 607 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 608 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 609 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 610 "data/maps/DewfordTown/scripts.pory"
	step_end
# 611 "data/maps/DewfordTown/scripts.pory"

# 612 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatSlateport:
# 613 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 614 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 615 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 616 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 617 "data/maps/DewfordTown/scripts.pory"
	step_end
# 618 "data/maps/DewfordTown/scripts.pory"

# 619 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_EmmieExitBoatSlateport:
# 620 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 621 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 622 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 623 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 624 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 625 "data/maps/DewfordTown/scripts.pory"
	step_end
# 626 "data/maps/DewfordTown/scripts.pory"

# 627 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyBoardBoat:
# 628 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 629 "data/maps/DewfordTown/scripts.pory"
	step_end
# 630 "data/maps/DewfordTown/scripts.pory"

# 631 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyExitBoat:
# 632 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 633 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 634 "data/maps/DewfordTown/scripts.pory"
	step_end
# 635 "data/maps/DewfordTown/scripts.pory"

# 636 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy::
# 637 "data/maps/DewfordTown/scripts.pory"
	lock
# 638 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 639 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 640 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 641 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
# 642 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
# 643 "data/maps/DewfordTown/scripts.pory"
	end
# 644 "data/maps/DewfordTown/scripts.pory"

# 645 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ConfirmTrendyPhrase::
# 646 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 647 "data/maps/DewfordTown/scripts.pory"
	release
# 648 "data/maps/DewfordTown/scripts.pory"
	end
# 649 "data/maps/DewfordTown/scripts.pory"

# 650 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase::
# 651 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 652 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 653 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 654 "data/maps/DewfordTown/scripts.pory"
	lock
# 655 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 656 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
# 657 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
# 658 "data/maps/DewfordTown/scripts.pory"
	end
# 659 "data/maps/DewfordTown/scripts.pory"

# 660 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase::
# 661 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 662 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
# 663 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 664 "data/maps/DewfordTown/scripts.pory"
	release
# 665 "data/maps/DewfordTown/scripts.pory"
	end
# 666 "data/maps/DewfordTown/scripts.pory"

# 667 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelNewTrendyPhrase::
# 668 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 669 "data/maps/DewfordTown/scripts.pory"
	release
# 670 "data/maps/DewfordTown/scripts.pory"
	end
# 671 "data/maps/DewfordTown/scripts.pory"

# 672 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PhraseNotTrendyEnough::
# 673 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 674 "data/maps/DewfordTown/scripts.pory"
	release
# 675 "data/maps/DewfordTown/scripts.pory"
	end
# 676 "data/maps/DewfordTown/scripts.pory"

# 677 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TinyIslandCommunity:
# 678 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD is a tiny island community.\n"
# 679 "data/maps/DewfordTown/scripts.pory"
	.string "If something gets trendy here,\l"
# 680 "data/maps/DewfordTown/scripts.pory"
	.string "everyone picks up on it right away.$"
# 681 "data/maps/DewfordTown/scripts.pory"

# 682 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TownSign:
# 683 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD TOWN\n"
# 684 "data/maps/DewfordTown/scripts.pory"
	.string "“A tiny island in the blue sea.”$"
# 685 "data/maps/DewfordTown/scripts.pory"

# 686 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GymSign:
# 687 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\n"
# 688 "data/maps/DewfordTown/scripts.pory"
	.string "Leader: BRAWLY\l"
# 689 "data/maps/DewfordTown/scripts.pory"
	.string "“A big wave in fighting!”$"
# 690 "data/maps/DewfordTown/scripts.pory"

# 691 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HallSign:
# 692 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD HALL\n"
# 693 "data/maps/DewfordTown/scripts.pory"
	.string "“Everyone's information exchange!”$"
# 694 "data/maps/DewfordTown/scripts.pory"

# 695 "data/maps/DewfordTown/scripts.pory"
Route104_Text_LandedInDewfordDeliverLetter:
# 696 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 697 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD.\p"
# 698 "data/maps/DewfordTown/scripts.pory"
	.string "I suppose you're off to deliver that\n"
# 699 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER to, who was it now, STEVEN!$"
# 700 "data/maps/DewfordTown/scripts.pory"

# 701 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SetSailBackToPetalburg:
# 702 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Have you delivered your\n"
# 703 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER?\p"
# 704 "data/maps/DewfordTown/scripts.pory"
	.string "Or were you meaning to sail back to\n"
# 705 "data/maps/DewfordTown/scripts.pory"
	.string "PETALBURG?$"
# 706 "data/maps/DewfordTown/scripts.pory"

# 707 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail2:
# 708 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG it is, then!\p"
# 709 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 710 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 711 "data/maps/DewfordTown/scripts.pory"

# 712 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoDeliverIllBeWaiting:
# 713 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 714 "data/maps/DewfordTown/scripts.pory"
	.string "the LETTER. I'll be waiting.$"
# 715 "data/maps/DewfordTown/scripts.pory"

# 716 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoFightBrawly:
# 717 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: This is your chance to\n"
# 718 "data/maps/DewfordTown/scripts.pory"
	.string "challenge Dewford gym. I'll be waiting.$"
# 719 "data/maps/DewfordTown/scripts.pory"

# 720 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInDewford:
# 721 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 722 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD!\p"
# 723 "data/maps/DewfordTown/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 724 "data/maps/DewfordTown/scripts.pory"
	.string "you want to set sail again!$"
# 725 "data/maps/DewfordTown/scripts.pory"

# 726 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_WhereAreWeBound:
# 727 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 728 "data/maps/DewfordTown/scripts.pory"
	.string "Time to move on, is it?\p"
# 729 "data/maps/DewfordTown/scripts.pory"
	.string "This is a one-way trip remember!$"
# 730 "data/maps/DewfordTown/scripts.pory"

# 731 "data/maps/DewfordTown/scripts.pory"

# 732 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail:
# 733 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG, is it?\p"
# 734 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 735 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 736 "data/maps/DewfordTown/scripts.pory"

# 737 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SlateportWereSettingSail:
# 738 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: SLATEPORT, it is!\p"
# 739 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 740 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 741 "data/maps/DewfordTown/scripts.pory"

# 742 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
# 743 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
# 744 "data/maps/DewfordTown/scripts.pory"
	.string "you need to set sail again!$"
# 745 "data/maps/DewfordTown/scripts.pory"

# 746 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GettingItchToFish:
# 747 "data/maps/DewfordTown/scripts.pory"
	.string "This is a renowned fishing spot.\n"
# 748 "data/maps/DewfordTown/scripts.pory"
	.string "Are you getting the itch to fish?$"
# 749 "data/maps/DewfordTown/scripts.pory"

# 750 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GiveYouOneOfMyRods:
# 751 "data/maps/DewfordTown/scripts.pory"
	.string "I hear you, and I like what\n"
# 752 "data/maps/DewfordTown/scripts.pory"
	.string "you're saying!\p"
# 753 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you one of my fishing RODS.$"
# 754 "data/maps/DewfordTown/scripts.pory"

# 755 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThrowInFishingAdvice:
# 756 "data/maps/DewfordTown/scripts.pory"
	.string "And, as an added bonus, I'll even throw\n"
# 757 "data/maps/DewfordTown/scripts.pory"
	.string "in a little fishing advice!\p"
# 758 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 759 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 760 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 761 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull on the ROD.\p"
# 762 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 763 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 764 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 765 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 766 "data/maps/DewfordTown/scripts.pory"

# 767 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThatsTooBadThen:
# 768 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, is that so?\n"
# 769 "data/maps/DewfordTown/scripts.pory"
	.string "That's too bad, then.$"
# 770 "data/maps/DewfordTown/scripts.pory"

# 771 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HowsYourFishing:
# 772 "data/maps/DewfordTown/scripts.pory"
	.string "Yo!\n"
# 773 "data/maps/DewfordTown/scripts.pory"
	.string "How's your fishing?$"
# 774 "data/maps/DewfordTown/scripts.pory"

# 775 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GreatHaulInSomeBigOnes:
# 776 "data/maps/DewfordTown/scripts.pory"
	.string "Is that right! That's great!\n"
# 777 "data/maps/DewfordTown/scripts.pory"
	.string "Haul in some big ones!$"
# 778 "data/maps/DewfordTown/scripts.pory"

# 779 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_FishingAdvice:
# 780 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
# 781 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you a little fishing advice.\p"
# 782 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 783 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 784 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 785 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull the ROD.\p"
# 786 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 787 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 788 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 789 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 790 "data/maps/DewfordTown/scripts.pory"

# 791 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XIsTheBiggestHappeningThingRight:
# 792 "data/maps/DewfordTown/scripts.pory"
	.string "I like what's hip, happening, and trendy.\n"
# 793 "data/maps/DewfordTown/scripts.pory"
	.string "I'm always checking it out.\p"
# 794 "data/maps/DewfordTown/scripts.pory"
	.string "Listen, have you heard about this new\n"
# 795 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”?\p"
# 796 "data/maps/DewfordTown/scripts.pory"
	.string "That's right!\n"
# 797 "data/maps/DewfordTown/scripts.pory"
	.string "Of course you know!\p"
# 798 "data/maps/DewfordTown/scripts.pory"
	.string "I mean, sheesh,\n"
# 799 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 800 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hottest thing in cool!\p"
# 801 "data/maps/DewfordTown/scripts.pory"
	.string "Wherever you're from,\n"
# 802 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 803 "data/maps/DewfordTown/scripts.pory"
	.string "is the biggest happening thing, right?$"
# 804 "data/maps/DewfordTown/scripts.pory"

# 805 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TellMeWhatsNewAndIn:
# 806 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 807 "data/maps/DewfordTown/scripts.pory"
	.string "It's not the hip and happening thing?\p"
# 808 "data/maps/DewfordTown/scripts.pory"
	.string "Well, hey, you have to tell me,\n"
# 809 "data/maps/DewfordTown/scripts.pory"
	.string "what's new and what's “in”?$"
# 810 "data/maps/DewfordTown/scripts.pory"

# 811 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_OfCourseIKnowAboutThat:
# 812 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 813 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”?\p"
# 814 "data/maps/DewfordTown/scripts.pory"
	.string "… …\p"
# 815 "data/maps/DewfordTown/scripts.pory"
	.string "…Uh… Yeah! That's right!\n"
# 816 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, I knew that! Knew it all along!\p"
# 817 "data/maps/DewfordTown/scripts.pory"
	.string "Of course I know about that!\n"
# 818 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” right?\p"
# 819 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, that's it, it's there!\n"
# 820 "data/maps/DewfordTown/scripts.pory"
	.string "Isn't “{STR_VAR_2}”\l"
# 821 "data/maps/DewfordTown/scripts.pory"
	.string "the coolest, or what?\p"
# 822 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hippest thing in hip.\n"
# 823 "data/maps/DewfordTown/scripts.pory"
	.string "You think I'd not know about it?\p"
# 824 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\n"
# 825 "data/maps/DewfordTown/scripts.pory"
	.string "It's, like, so five minutes ago.\p"
# 826 "data/maps/DewfordTown/scripts.pory"
	.string "Now, “{STR_VAR_2}” is\n"
# 827 "data/maps/DewfordTown/scripts.pory"
	.string "what's vital and in tune with the times!$"
# 828 "data/maps/DewfordTown/scripts.pory"

# 829 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XHuhIThinkYIsCool:
# 830 "data/maps/DewfordTown/scripts.pory"
	.string "Hmm…\n"
# 831 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” huh?\p"
# 832 "data/maps/DewfordTown/scripts.pory"
	.string "But personally, I think\n"
# 833 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 834 "data/maps/DewfordTown/scripts.pory"
	.string "is what's real in cool.$"
# 835 "data/maps/DewfordTown/scripts.pory"

# 836 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
# 837 "data/maps/DewfordTown/scripts.pory"
	.string "Well, if you hear of any happening new\n"
# 838 "data/maps/DewfordTown/scripts.pory"
	.string "trends, come share them with me, okay?$"
# 839 "data/maps/DewfordTown/scripts.pory"

# 840 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_YeahDefinitionOfInRightNow:
# 841 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, absolutely right!\p"
# 842 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}” is the\n"
# 843 "data/maps/DewfordTown/scripts.pory"
	.string "definition of “in” right now.$"
# 844 "data/maps/DewfordTown/scripts.pory"

# 845 "data/maps/DewfordTown/scripts.pory"

# 846 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 847 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 848 "data/maps/DewfordTown/scripts.pory"
	.string "We've made land in SLATEPORT!\p"
# 849 "data/maps/DewfordTown/scripts.pory"
	.string "Please do me a favour and visit CAPT.\n"
# 850 "data/maps/DewfordTown/scripts.pory"
	.string "STERN and deliver these DEVON GOODS?$"
# 851 "data/maps/DewfordTown/scripts.pory"

# 852 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PleaseDeliverLetter:
# 853 "data/maps/DewfordTown/scripts.pory"
	.string "I can't set sail until that letter has\n"
# 854 "data/maps/DewfordTown/scripts.pory"
	.string "been delivered.\p"
# 855 "data/maps/DewfordTown/scripts.pory"
	.string "If you can't find young Steven in town,\n"
# 856 "data/maps/DewfordTown/scripts.pory"
	.string "maybe check Granite Cave to the north.$"
