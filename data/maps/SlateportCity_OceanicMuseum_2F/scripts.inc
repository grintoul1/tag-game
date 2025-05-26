# 1 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 2 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_CAPT_STERN, 1
# 3 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_ARCHIE, 2
# 4 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_GRUNT_1, 3
# 5 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_GRUNT_2, 4
# 6 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 7 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_MapScripts::
# 8 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.byte 0
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 10 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_FacePlayer
# 13 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_TEMP_3, 11, SlateportCity_OceanicMuseum_2F_EventScript_EmmieApproachStern
# 16 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 18 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 19 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 20 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 21 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_GRUNT_1
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 23 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_GRUNT_2
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 31 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_PIN
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 34 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 35 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 37 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 38 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 40 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 41 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 42 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 44 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 46 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 47 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 48 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_ARCHIE
# 49 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_TheseAreTheChildren, MSGBOX_DEFAULT
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK 
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_YouWereWarned, MSGBOX_DEFAULT
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_ArchieDoMultiBattle
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	releaseall
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_EmmieApproachStern::
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SlateportCity_OceanicMuseum_2F_Movement_EmmieApproachStern
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ArchieDoMultiBattle::
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2p_vs_1 TRAINER_ARCHIE, SlateportCity_OceanicMuseum_2F_Text_ArchieDefeat, PARTNER_EMMIE
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	switch VAR_RESULT
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case 1, SlateportCity_OceanicMuseum_2F_EventScript_ArchieVictory
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special SetCB2WhiteOut
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitstate
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ArchieVictory::
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_ARCHIE
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	callnative UpdateFollowingPokemon
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_LEVEL_CAP, 52
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 200 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 203 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 214 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 215 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 220 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 225 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 226 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	face_right
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_EmmieApproachStern:
# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 252 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 267 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 283 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 284 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 287 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 292 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 294 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 299 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Yes? If you're looking for STERN,\n"
# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "that would be me.\p"
# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah! Those must be the parts I ordered\n"
# 304 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "from MR. STONE of DEVON.\p"
# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you! That's great!\n"
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We can set sail on our expedition now.$"
# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
# 309 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Matt: Hehehe, hold it!\n"
# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We'll take those parts!$"
# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 312 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Wh-what?\n"
# 314 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Who are you people?$"
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Shelly: We're TEAM AQUA!\p"
# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our BOSS wants those...\n"
# 319 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh! It's you again.\p"
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I told you to stay out of our way.\p"
# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Matt: Well, well, well...\n"
# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Now you kids are really in trouble!$"
# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 324 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Awaaaah!\n"
# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A kid beat me!$"
# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 328 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
# 329 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, man, what a disaster…\n"
# 330 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The BOSS is going to be furious…$"
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
# 333 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Humph, sniveling wimp!\n"
# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Let me take care of this!$"
# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What?!\n"
# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I lost, too!$"
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Now what? If we don't get the parts,\n"
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "we're in for it!\p"
# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Arrgh, I didn't count on being meddled\n"
# 344 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "with by some meddling kid!$"
# 345 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 346 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
# 347 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "????: What could possibly be taking\n"
# 348 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "you two so long?$"
# 349 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 350 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
# 351 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What makes you interfere with us?\p"
# 352 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "…No! You can't be!\n"
# 353 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not one of Team Magma?\p"
# 354 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wait, that can't be right.\n"
# 355 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not dressed for the part.\p"
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\n"
# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\p"
# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "POKéMON, people… All life depends on\n"
# 359 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the sea.\p"
# 360 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "So, Team Aqua is dedicated to\n"
# 361 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the expansion of the sea.\p"
# 362 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our rivals Team Magma plan to reduce\n"
# 363 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "sea levels and expand the land.\p"
# 364 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our actions are solely a contingency\n"
# 365 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "against their misguided plans.\p"
# 366 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, fine…\n"
# 367 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're still too young to understand\l"
# 368 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "our noble objective.\p"
# 369 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "This matters not. While we have been\n"
# 370 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "wasting time here, Shelly and Matt\l"
# 371 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "have secured the submarine.\n"
# 372 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "at the Slateport harbor.\p"
# 373 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Those Devon parts aren't necessary.\n"
# 374 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The submarine is all Team Aqua needs!$"
# 375 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 376 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
# 377 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: You're…\n"
# 378 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, okay, you're {PLAYER}{KUN}…\p"
# 379 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to set out on our ocean-floor\n"
# 380 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "expedition really soon.\p"
# 381 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, yes, the Devon parts.\n"
# 382 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I almost forgot about those!$"
# 383 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 384 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
# 385 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: We have to hurry!\p"
# 386 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We must get to the harbor and\n"
# 387 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "stop them taking the submarine!$"
# 388 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 389 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 390 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I saw a model of a ship here.\p"
# 391 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It reminded me of the ABANDONED SHIP\n"
# 392 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "near DEWFORD TOWN…$"
# 393 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 394 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 395 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you dare run around inside\n"
# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the MUSEUM!$"
# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, the submarine's awesome!\n"
# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I want to go for a ride!$"
# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 1,” the\n"
# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The sea is all connected, but the\n"
# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "water seems to differ by region.$"
# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 2,” the\n"
# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Does the saltiness of seawater differ\n"
# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "by region, too?$"
# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A rubber ball is expanding and\n"
# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "shrinking.\p"
# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In the sea, the weight of water itself\n"
# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exerts pressure.\p"
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In shallow water, the pressure is not\n"
# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "very heavy.\p"
# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“However, in extremely deep water,\n"
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the pressure can reach even tens of\l"
# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "thousands of tons on a small area.”$"
# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MODEL OF HOENN REGION”\p"
# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a miniature diorama of the\n"
# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "HOENN region.\p"
# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Where is LITTLEROOT TOWN on this?$"
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Near the bottom of the sea, water\n"
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "flows due to differences in such\l"
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "factors as temperature and salinity.”$"
# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Toward the surface, seawater flows\n"
# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "as currents driven by the winds.”$"
# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“THE FERRY S.S. TIDAL\p"
# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A scale replica of the ship under\n"
# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "construction at STERN'S SHIPYARD.”$"
# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 447 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 448 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMARINE EXPLORER 1\p"
# 449 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the high-performance\n"
# 450 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ocean floor exploration submarine.”$"
# 451 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 452 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 453 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMERSIBLE POD\p"
# 454 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of a compact, unmanned\n"
# 455 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "pod for seafloor exploration.”$"
# 456 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 457 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 458 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“S.S. ANNE\p"
# 459 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the luxury liner that\n"
# 460 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "circles the globe.”$"
# 461 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 462 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_TheseAreTheChildren:
# 463 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "These are the children you encountered\n"
# 464 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "in Petalburg Woods?\p"
# 465 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "In which case, you two go to the\n"
# 466 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "harbor and secure the submarine.\l"
# 467 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "These kids are no match for me.$"
# 468 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 469 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieDefeat:
# 470 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Just who are you? Why are you\n"
# 471 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "meddling in Team Aqua's affairs?$"
# 472 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 473 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_YouWereWarned:
# 474 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I understand that you have\n"
# 475 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "been given a fair warning.$"
