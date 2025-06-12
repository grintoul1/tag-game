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
	setvar VAR_PARTNER_EMMIE_STATE, 19
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_LEVEL_CAP, 52
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_LEVEL_CAP, 52
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 200 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 203 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 214 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 215 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 220 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 225 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 226 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	face_right
# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_EmmieApproachStern:
# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 252 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 267 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 283 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 284 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 287 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 292 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 294 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 299 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Yes? If you're looking for STERN,\n"
# 304 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "that would be me.\p"
# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah! Those must be the parts I ordered\n"
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "from MR. STONE of DEVON.\p"
# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you! That's great!\n"
# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We can set sail on our expedition now.$"
# 309 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Matt: Hehehe, hold it!\n"
# 312 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We'll take those parts!$"
# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 314 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Wh-what?\n"
# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Who are you people?$"
# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
# 319 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Shelly: We're TEAM AQUA!\p"
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our BOSS wants those...\n"
# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh! It's you again.\p"
# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I told you to stay out of our way.\p"
# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Matt: Well, well, well...\n"
# 324 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Now you kids are really in trouble!$"
# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Awaaaah!\n"
# 328 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A kid beat me!$"
# 329 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 330 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, man, what a disaster…\n"
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The BOSS is going to be furious…$"
# 333 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Humph, sniveling wimp!\n"
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Let me take care of this!$"
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What?!\n"
# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I lost, too!$"
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Now what? If we don't get the parts,\n"
# 344 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "we're in for it!\p"
# 345 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Arrgh, I didn't count on being meddled\n"
# 346 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "with by some meddling kid!$"
# 347 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 348 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
# 349 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "????: What could possibly be taking\n"
# 350 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "you two so long?$"
# 351 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 352 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
# 353 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What makes you interfere with us?\p"
# 354 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "…No! You can't be!\n"
# 355 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not one of Team Magma?\p"
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wait, that can't be right.\n"
# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not dressed for the part.\p"
# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\n"
# 359 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\p"
# 360 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "POKéMON, people… All life depends on\n"
# 361 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the sea.\p"
# 362 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "So, Team Aqua is dedicated to\n"
# 363 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the expansion of the sea.\p"
# 364 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our rivals Team Magma plan to reduce\n"
# 365 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "sea levels and expand the land.\p"
# 366 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our actions are solely a contingency\n"
# 367 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "against their misguided plans.\p"
# 368 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, fine…\n"
# 369 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're still too young to understand\l"
# 370 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "our noble objective.\p"
# 371 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "This matters not. While we have been\n"
# 372 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "wasting time here, Shelly and Matt\l"
# 373 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "have secured the submarine.\n"
# 374 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "at the Slateport harbor.\p"
# 375 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Those Devon parts aren't necessary.\n"
# 376 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The submarine is all Team Aqua needs!$"
# 377 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 378 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
# 379 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: You're…\n"
# 380 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, okay, you're {PLAYER}{KUN}…\p"
# 381 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to set out on our ocean-floor\n"
# 382 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "expedition really soon.\p"
# 383 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, yes, the Devon parts.\n"
# 384 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I almost forgot about those!$"
# 385 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 386 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
# 387 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: We have to hurry!\p"
# 388 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We must get to the harbor and\n"
# 389 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "stop them taking the submarine!$"
# 390 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 391 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 392 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I saw a model of a ship here.\p"
# 393 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It reminded me of the ABANDONED SHIP\n"
# 394 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "near DEWFORD TOWN…$"
# 395 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you dare run around inside\n"
# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the MUSEUM!$"
# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, the submarine's awesome!\n"
# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I want to go for a ride!$"
# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 1,” the\n"
# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The sea is all connected, but the\n"
# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "water seems to differ by region.$"
# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 2,” the\n"
# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Does the saltiness of seawater differ\n"
# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "by region, too?$"
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A rubber ball is expanding and\n"
# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "shrinking.\p"
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In the sea, the weight of water itself\n"
# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exerts pressure.\p"
# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In shallow water, the pressure is not\n"
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "very heavy.\p"
# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“However, in extremely deep water,\n"
# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the pressure can reach even tens of\l"
# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "thousands of tons on a small area.”$"
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MODEL OF HOENN REGION”\p"
# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a miniature diorama of the\n"
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "HOENN region.\p"
# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Where is LITTLEROOT TOWN on this?$"
# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Near the bottom of the sea, water\n"
# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "flows due to differences in such\l"
# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "factors as temperature and salinity.”$"
# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Toward the surface, seawater flows\n"
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "as currents driven by the winds.”$"
# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“THE FERRY S.S. TIDAL\p"
# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A scale replica of the ship under\n"
# 447 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "construction at STERN'S SHIPYARD.”$"
# 448 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 449 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 450 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMARINE EXPLORER 1\p"
# 451 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the high-performance\n"
# 452 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ocean floor exploration submarine.”$"
# 453 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 454 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 455 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMERSIBLE POD\p"
# 456 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of a compact, unmanned\n"
# 457 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "pod for seafloor exploration.”$"
# 458 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 459 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 460 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“S.S. ANNE\p"
# 461 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the luxury liner that\n"
# 462 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "circles the globe.”$"
# 463 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 464 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_TheseAreTheChildren:
# 465 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "These are the children you encountered\n"
# 466 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "in Petalburg Woods?\p"
# 467 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "In which case, you two go to the\n"
# 468 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "harbor and secure the submarine.\l"
# 469 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "These kids are no match for me.$"
# 470 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 471 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieDefeat:
# 472 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Just who are you? Why are you\n"
# 473 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "meddling in Team Aqua's affairs?$"
# 474 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 475 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_YouWereWarned:
# 476 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I understand that you have\n"
# 477 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "been given a fair warning.$"
