# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 6 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_EMMIE, 9
# 7 "data/maps/LittlerootTown/scripts.pory"

# 8 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 11 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 12 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 13 "data/maps/LittlerootTown/scripts.pory"

# 14 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 19 "data/maps/LittlerootTown/scripts.pory"

# 20 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 28 "data/maps/LittlerootTown/scripts.pory"

# 29 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 30 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 36 "data/maps/LittlerootTown/scripts.pory"

# 37 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 41 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"

# 44 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 45 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 46 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 55 "data/maps/LittlerootTown/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 56 "data/maps/LittlerootTown/scripts.pory"
	end
# 57 "data/maps/LittlerootTown/scripts.pory"

# 58 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 59 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 60 "data/maps/LittlerootTown/scripts.pory"
	return
# 61 "data/maps/LittlerootTown/scripts.pory"

# 62 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 63 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 64 "data/maps/LittlerootTown/scripts.pory"
	return
# 65 "data/maps/LittlerootTown/scripts.pory"

# 66 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 67 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 68 "data/maps/LittlerootTown/scripts.pory"
	return
# 69 "data/maps/LittlerootTown/scripts.pory"

# 70 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 71 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 72 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 73 "data/maps/LittlerootTown/scripts.pory"
	return
# 74 "data/maps/LittlerootTown/scripts.pory"

# 75 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 76 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 77 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 78 "data/maps/LittlerootTown/scripts.pory"
	return
# 79 "data/maps/LittlerootTown/scripts.pory"

# 80 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 81 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 82 "data/maps/LittlerootTown/scripts.pory"
	return
# 83 "data/maps/LittlerootTown/scripts.pory"

# 84 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 85 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 86 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 87 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 88 "data/maps/LittlerootTown/scripts.pory"
	return
# 89 "data/maps/LittlerootTown/scripts.pory"

# 90 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 91 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 92 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 93 "data/maps/LittlerootTown/scripts.pory"
	return
# 94 "data/maps/LittlerootTown/scripts.pory"

# 95 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 96 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 97 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 98 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 99 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 100 "data/maps/LittlerootTown/scripts.pory"
	return
# 101 "data/maps/LittlerootTown/scripts.pory"

# 102 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 103 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 104 "data/maps/LittlerootTown/scripts.pory"
	return
# 105 "data/maps/LittlerootTown/scripts.pory"

# 106 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 107 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 108 "data/maps/LittlerootTown/scripts.pory"
	return
# 109 "data/maps/LittlerootTown/scripts.pory"

# 110 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 111 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 112 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 113 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 114 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 115 "data/maps/LittlerootTown/scripts.pory"

# 116 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 117 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 118 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 119 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 120 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 121 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 122 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 123 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 124 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 125 "data/maps/LittlerootTown/scripts.pory"
	end
# 126 "data/maps/LittlerootTown/scripts.pory"

# 127 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 128 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 129 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 130 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 131 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 132 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 133 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 134 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 135 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 136 "data/maps/LittlerootTown/scripts.pory"
	end
# 137 "data/maps/LittlerootTown/scripts.pory"

# 138 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 139 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 140 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 141 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 142 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 144 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 145 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 146 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 147 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 149 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 150 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 151 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 152 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 153 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 154 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 155 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 156 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 157 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 159 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 160 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 161 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 162 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 164 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 165 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 166 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 167 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 168 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 169 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 170 "data/maps/LittlerootTown/scripts.pory"
	return
# 171 "data/maps/LittlerootTown/scripts.pory"

# 172 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 173 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 174 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 175 "data/maps/LittlerootTown/scripts.pory"

# 176 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 177 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 178 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 179 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 180 "data/maps/LittlerootTown/scripts.pory"

# 181 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 182 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 183 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 184 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 185 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 186 "data/maps/LittlerootTown/scripts.pory"

# 187 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 188 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 189 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 190 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 191 "data/maps/LittlerootTown/scripts.pory"

# 192 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 193 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 194 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 195 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 196 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 197 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 198 "data/maps/LittlerootTown/scripts.pory"

# 199 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 200 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 201 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 202 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 203 "data/maps/LittlerootTown/scripts.pory"

# 204 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 205 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 206 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 207 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 208 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 209 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 210 "data/maps/LittlerootTown/scripts.pory"

# 211 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 212 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 213 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 214 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 215 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 216 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 217 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 218 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 219 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 220 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 221 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 222 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 223 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 224 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 225 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 226 "data/maps/LittlerootTown/scripts.pory"
	end
# 227 "data/maps/LittlerootTown/scripts.pory"

# 228 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 229 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 230 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 231 "data/maps/LittlerootTown/scripts.pory"

# 232 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 233 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 234 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 235 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 236 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 237 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 238 "data/maps/LittlerootTown/scripts.pory"
	end
# 239 "data/maps/LittlerootTown/scripts.pory"

# 240 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 241 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 242 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 243 "data/maps/LittlerootTown/scripts.pory"
	end
# 244 "data/maps/LittlerootTown/scripts.pory"

# 245 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 246 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 247 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 248 "data/maps/LittlerootTown/scripts.pory"
	end
# 249 "data/maps/LittlerootTown/scripts.pory"

# 250 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 251 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 252 "data/maps/LittlerootTown/scripts.pory"
	end
# 253 "data/maps/LittlerootTown/scripts.pory"

# 254 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 255 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 256 "data/maps/LittlerootTown/scripts.pory"
	end
# 257 "data/maps/LittlerootTown/scripts.pory"

# 258 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 259 "data/maps/LittlerootTown/scripts.pory"
	lock
# 260 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 261 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 262 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 263 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 264 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 265 "data/maps/LittlerootTown/scripts.pory"
	release
# 266 "data/maps/LittlerootTown/scripts.pory"
	end
# 267 "data/maps/LittlerootTown/scripts.pory"

# 268 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 269 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 270 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 271 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 272 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 273 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 274 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 275 "data/maps/LittlerootTown/scripts.pory"
	release
# 276 "data/maps/LittlerootTown/scripts.pory"
	end
# 277 "data/maps/LittlerootTown/scripts.pory"

# 278 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 279 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 280 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 281 "data/maps/LittlerootTown/scripts.pory"
	release
# 282 "data/maps/LittlerootTown/scripts.pory"
	end
# 283 "data/maps/LittlerootTown/scripts.pory"

# 284 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 285 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 286 "data/maps/LittlerootTown/scripts.pory"
	release
# 287 "data/maps/LittlerootTown/scripts.pory"
	end
# 288 "data/maps/LittlerootTown/scripts.pory"

# 289 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 290 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 291 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 292 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 293 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 294 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 295 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 296 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 297 "data/maps/LittlerootTown/scripts.pory"
	end
# 298 "data/maps/LittlerootTown/scripts.pory"

# 299 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 300 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 301 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 302 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 303 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 304 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 305 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 306 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 307 "data/maps/LittlerootTown/scripts.pory"
	return
# 308 "data/maps/LittlerootTown/scripts.pory"

# 309 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 310 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 311 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 312 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 313 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 314 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 315 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 316 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 317 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 318 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 319 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 320 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 321 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 322 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 323 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 324 "data/maps/LittlerootTown/scripts.pory"

# 325 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 327 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 328 "data/maps/LittlerootTown/scripts.pory"

# 329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 339 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 340 "data/maps/LittlerootTown/scripts.pory"

# 341 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 342 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 344 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 345 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 346 "data/maps/LittlerootTown/scripts.pory"

# 347 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 348 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 349 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 350 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 351 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 352 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 353 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 354 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 355 "data/maps/LittlerootTown/scripts.pory"
	end
# 356 "data/maps/LittlerootTown/scripts.pory"

# 357 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 358 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 359 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 360 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 361 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 362 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 363 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 364 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 369 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 370 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 371 "data/maps/LittlerootTown/scripts.pory"

# 372 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 379 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 380 "data/maps/LittlerootTown/scripts.pory"

# 381 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 382 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 383 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 384 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 385 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 386 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 387 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 388 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 389 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 390 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 391 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 392 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 393 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 394 "data/maps/LittlerootTown/scripts.pory"
	end
# 395 "data/maps/LittlerootTown/scripts.pory"

# 396 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 397 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 398 "data/maps/LittlerootTown/scripts.pory"
	end
# 399 "data/maps/LittlerootTown/scripts.pory"

# 400 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 401 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 402 "data/maps/LittlerootTown/scripts.pory"
	end
# 403 "data/maps/LittlerootTown/scripts.pory"

# 404 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 405 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 406 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 407 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 408 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 409 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 410 "data/maps/LittlerootTown/scripts.pory"
	end
# 411 "data/maps/LittlerootTown/scripts.pory"

# 412 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 413 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 414 "data/maps/LittlerootTown/scripts.pory"
	return
# 415 "data/maps/LittlerootTown/scripts.pory"

# 416 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 417 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 418 "data/maps/LittlerootTown/scripts.pory"
	return
# 419 "data/maps/LittlerootTown/scripts.pory"

# 420 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 421 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 422 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 423 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 424 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 425 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 426 "data/maps/LittlerootTown/scripts.pory"
	end
# 427 "data/maps/LittlerootTown/scripts.pory"

# 428 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 429 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 430 "data/maps/LittlerootTown/scripts.pory"
	return
# 431 "data/maps/LittlerootTown/scripts.pory"

# 432 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 433 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 434 "data/maps/LittlerootTown/scripts.pory"
	return
# 435 "data/maps/LittlerootTown/scripts.pory"

# 436 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 437 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 438 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 439 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_EMMIE
# 440 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 441 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 442 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_EMMIE
# 443 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 444 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_EMMIE, 9, 9
# 445 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 446 "data/maps/LittlerootTown/scripts.pory"
	end
# 447 "data/maps/LittlerootTown/scripts.pory"

# 448 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 449 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 450 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 451 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_EMMIE
# 452 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 453 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 454 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_EMMIE
# 455 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 456 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_EMMIE, 10, 9
# 457 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 458 "data/maps/LittlerootTown/scripts.pory"
	end
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 461 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 462 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 463 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 464 "data/maps/LittlerootTown/scripts.pory"
	end
# 465 "data/maps/LittlerootTown/scripts.pory"

# 466 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 467 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 468 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 469 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 470 "data/maps/LittlerootTown/scripts.pory"
	end
# 471 "data/maps/LittlerootTown/scripts.pory"

# 472 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 473 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 474 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 475 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 476 "data/maps/LittlerootTown/scripts.pory"
	end
# 477 "data/maps/LittlerootTown/scripts.pory"

# 478 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 479 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 480 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 481 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 482 "data/maps/LittlerootTown/scripts.pory"
	end
# 483 "data/maps/LittlerootTown/scripts.pory"

# 484 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 485 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 486 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 487 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 488 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 489 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 490 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 491 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 492 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 493 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 494 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 495 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 496 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 497 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 498 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 499 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 500 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 501 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 502 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp
# 503 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 504 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 505 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 506 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 507 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_EmmieIntroduction
# 508 "data/maps/LittlerootTown/scripts.pory"
	end
# 509 "data/maps/LittlerootTown/scripts.pory"

# 510 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_EmmieIntroduction::
# 511 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_EmmieLetMeExplain, MSGBOX_DEFAULT
# 512 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_EmmieLetMeExplain2, MSGBOX_DEFAULT
# 513 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 514 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_EMMIE
# 515 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_EMMIE
# 516 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_EMMIE
# 517 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 518 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_STUFFUL, 5, ITEM_NONE, ITEM_POKE_BALL, , 0
# 519 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SendStuffulParty
# 520 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_SKITTY, 5, ITEM_MOON_STONE, ITEM_POKE_BALL
# 521 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SendSkittyParty
# 522 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_EEVEE, 5
# 523 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SendEeveeParty
# 524 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 525 "data/maps/LittlerootTown/scripts.pory"
	end
# 526 "data/maps/LittlerootTown/scripts.pory"

# 527 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SendStuffulParty::
# 528 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_ReceivedStuffulFanfare
# 529 "data/maps/LittlerootTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 530 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_EventScript_NicknameEmmiePokemon
# 531 "data/maps/LittlerootTown/scripts.pory"
	return
# 532 "data/maps/LittlerootTown/scripts.pory"

# 533 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ReceivedStuffulFanfare::
# 534 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_STUFFUL
# 535 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 536 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_ObtainedStufful
# 537 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 539 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_STUFFUL
# 540 "data/maps/LittlerootTown/scripts.pory"
	return
# 541 "data/maps/LittlerootTown/scripts.pory"

# 542 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SendSkittyParty::
# 543 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_ReceivedSkittyFanfare
# 544 "data/maps/LittlerootTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 545 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_EventScript_NicknameEmmiePokemon
# 546 "data/maps/LittlerootTown/scripts.pory"
	return
# 547 "data/maps/LittlerootTown/scripts.pory"

# 548 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NicknameEmmiePokemon::
# 549 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 550 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 551 "data/maps/LittlerootTown/scripts.pory"
	return
# 552 "data/maps/LittlerootTown/scripts.pory"

# 553 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ReceivedSkittyFanfare::
# 554 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SKITTY
# 555 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 556 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_ObtainedSkitty
# 557 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 558 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 559 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SKITTY
# 560 "data/maps/LittlerootTown/scripts.pory"
	return
# 561 "data/maps/LittlerootTown/scripts.pory"

# 562 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SendEeveeParty::
# 563 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_ReceivedEeveeFanfare
# 564 "data/maps/LittlerootTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 565 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_EventScript_NicknameEmmiePokemon
# 566 "data/maps/LittlerootTown/scripts.pory"
	return
# 567 "data/maps/LittlerootTown/scripts.pory"

# 568 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ReceivedEeveeFanfare::
# 569 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_EEVEE
# 570 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 571 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_ObtainedEevee
# 572 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 573 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 574 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 575 "data/maps/LittlerootTown/scripts.pory"
	return
# 576 "data/maps/LittlerootTown/scripts.pory"

# 577 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ObtainedStufful:
# 578 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} obtained a Stufful.$"
# 579 "data/maps/LittlerootTown/scripts.pory"

# 580 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ObtainedSkitty:
# 581 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} obtained a Skitty.$"
# 582 "data/maps/LittlerootTown/scripts.pory"

# 583 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ObtainedEevee:
# 584 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} obtained a Eevee.$"
# 585 "data/maps/LittlerootTown/scripts.pory"

# 586 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 587 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 588 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 589 "data/maps/LittlerootTown/scripts.pory"
	return
# 590 "data/maps/LittlerootTown/scripts.pory"

# 591 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 592 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 593 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 594 "data/maps/LittlerootTown/scripts.pory"
	return
# 595 "data/maps/LittlerootTown/scripts.pory"

# 596 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 597 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 598 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/LittlerootTown/scripts.pory"
	return
# 600 "data/maps/LittlerootTown/scripts.pory"

# 601 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 602 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 603 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 604 "data/maps/LittlerootTown/scripts.pory"
	return
# 605 "data/maps/LittlerootTown/scripts.pory"

# 606 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 607 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 608 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 609 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 610 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 611 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 612 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 613 "data/maps/LittlerootTown/scripts.pory"
	return
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 618 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 619 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 620 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 622 "data/maps/LittlerootTown/scripts.pory"
	return
# 623 "data/maps/LittlerootTown/scripts.pory"

# 624 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 625 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 626 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 627 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 628 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 629 "data/maps/LittlerootTown/scripts.pory"
	return
# 630 "data/maps/LittlerootTown/scripts.pory"

# 631 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 632 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 633 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 634 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 635 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 636 "data/maps/LittlerootTown/scripts.pory"
	return
# 637 "data/maps/LittlerootTown/scripts.pory"

# 638 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 639 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 640 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 641 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 642 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 643 "data/maps/LittlerootTown/scripts.pory"
	return
# 644 "data/maps/LittlerootTown/scripts.pory"

# 645 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 646 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 647 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 648 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 650 "data/maps/LittlerootTown/scripts.pory"
	return
# 651 "data/maps/LittlerootTown/scripts.pory"

# 652 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 653 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 654 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 655 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 656 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 657 "data/maps/LittlerootTown/scripts.pory"
	return
# 658 "data/maps/LittlerootTown/scripts.pory"

# 659 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 660 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 662 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 663 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 664 "data/maps/LittlerootTown/scripts.pory"
	return
# 665 "data/maps/LittlerootTown/scripts.pory"

# 666 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 667 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 668 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 669 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 670 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 671 "data/maps/LittlerootTown/scripts.pory"
	return
# 672 "data/maps/LittlerootTown/scripts.pory"

# 673 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 674 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 675 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 676 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 677 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 678 "data/maps/LittlerootTown/scripts.pory"
	return
# 679 "data/maps/LittlerootTown/scripts.pory"

# 680 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 681 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 682 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 683 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 684 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 685 "data/maps/LittlerootTown/scripts.pory"
	return
# 686 "data/maps/LittlerootTown/scripts.pory"

# 687 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 688 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 689 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 690 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 691 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 692 "data/maps/LittlerootTown/scripts.pory"
	return
# 693 "data/maps/LittlerootTown/scripts.pory"

# 694 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 695 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 696 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 697 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 698 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 699 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 700 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 701 "data/maps/LittlerootTown/scripts.pory"
	return
# 702 "data/maps/LittlerootTown/scripts.pory"

# 703 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 704 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 705 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 706 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 707 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 708 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 709 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 710 "data/maps/LittlerootTown/scripts.pory"
	return
# 711 "data/maps/LittlerootTown/scripts.pory"

# 712 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 713 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 714 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 715 "data/maps/LittlerootTown/scripts.pory"
	return
# 716 "data/maps/LittlerootTown/scripts.pory"

# 717 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 718 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 719 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 720 "data/maps/LittlerootTown/scripts.pory"
	return
# 721 "data/maps/LittlerootTown/scripts.pory"

# 722 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 723 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 724 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 725 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 726 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 727 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 728 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 729 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 730 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 731 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 732 "data/maps/LittlerootTown/scripts.pory"
	return
# 733 "data/maps/LittlerootTown/scripts.pory"

# 734 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 735 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 736 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 737 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 738 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 739 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 740 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 741 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 742 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 743 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 744 "data/maps/LittlerootTown/scripts.pory"
	return
# 745 "data/maps/LittlerootTown/scripts.pory"

# 746 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 747 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 748 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 749 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 750 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 751 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 752 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 753 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 754 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 755 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 756 "data/maps/LittlerootTown/scripts.pory"
	return
# 757 "data/maps/LittlerootTown/scripts.pory"

# 758 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 759 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 760 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 761 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 762 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 763 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 764 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 765 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 766 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 767 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 768 "data/maps/LittlerootTown/scripts.pory"
	return
# 769 "data/maps/LittlerootTown/scripts.pory"

# 770 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 771 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 772 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 773 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 774 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 775 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 776 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 777 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 778 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 779 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 780 "data/maps/LittlerootTown/scripts.pory"
	return
# 781 "data/maps/LittlerootTown/scripts.pory"

# 782 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 783 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 784 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 785 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 786 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 787 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 788 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 789 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 790 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 791 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 792 "data/maps/LittlerootTown/scripts.pory"
	return
# 793 "data/maps/LittlerootTown/scripts.pory"

# 794 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 795 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 796 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 797 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 798 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 799 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 800 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 801 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 802 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 803 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 804 "data/maps/LittlerootTown/scripts.pory"
	return
# 805 "data/maps/LittlerootTown/scripts.pory"

# 806 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 807 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 808 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 809 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 810 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 811 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 812 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 813 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 814 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 815 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 816 "data/maps/LittlerootTown/scripts.pory"
	return
# 817 "data/maps/LittlerootTown/scripts.pory"

# 818 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_EmmieApproachPlayer:
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 821 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 823 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 825 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 826 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 827 "data/maps/LittlerootTown/scripts.pory"

# 828 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 832 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 835 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 836 "data/maps/LittlerootTown/scripts.pory"

# 837 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 838 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 839 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 840 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 844 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 845 "data/maps/LittlerootTown/scripts.pory"

# 846 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 851 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 852 "data/maps/LittlerootTown/scripts.pory"

# 853 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 858 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 859 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 860 "data/maps/LittlerootTown/scripts.pory"

# 861 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 864 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 865 "data/maps/LittlerootTown/scripts.pory"

# 866 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 867 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 870 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 871 "data/maps/LittlerootTown/scripts.pory"

# 872 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 876 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 877 "data/maps/LittlerootTown/scripts.pory"

# 878 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 879 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 880 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 881 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 882 "data/maps/LittlerootTown/scripts.pory"

# 883 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 884 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 889 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 890 "data/maps/LittlerootTown/scripts.pory"

# 891 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 892 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 893 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 894 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 895 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 896 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 897 "data/maps/LittlerootTown/scripts.pory"

# 898 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 899 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 900 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 901 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 902 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 903 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 904 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 905 "data/maps/LittlerootTown/scripts.pory"

# 906 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 907 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 909 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 910 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 911 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 912 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 913 "data/maps/LittlerootTown/scripts.pory"

# 914 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 915 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 917 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 918 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 919 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 920 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 921 "data/maps/LittlerootTown/scripts.pory"

# 922 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 923 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 924 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 925 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 926 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 927 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 928 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 929 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 930 "data/maps/LittlerootTown/scripts.pory"

# 931 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 932 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 933 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 934 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 935 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 936 "data/maps/LittlerootTown/scripts.pory"

# 937 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 938 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 939 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 940 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 941 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 942 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 943 "data/maps/LittlerootTown/scripts.pory"

# 944 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 945 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 946 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 947 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 948 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 949 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 950 "data/maps/LittlerootTown/scripts.pory"

# 951 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 952 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 953 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 954 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 955 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 956 "data/maps/LittlerootTown/scripts.pory"

# 957 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 958 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 959 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 960 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 961 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 962 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 963 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 964 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 965 "data/maps/LittlerootTown/scripts.pory"

# 966 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 967 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 968 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 969 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 970 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 971 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 972 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 973 "data/maps/LittlerootTown/scripts.pory"

# 974 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 975 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 976 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 977 "data/maps/LittlerootTown/scripts.pory"

# 978 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 979 "data/maps/LittlerootTown/scripts.pory"
	lock
# 980 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 981 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 982 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 983 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 984 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 985 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 986 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 987 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 988 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 989 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 990 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 991 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 992 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 993 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 994 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 995 "data/maps/LittlerootTown/scripts.pory"
	end
# 996 "data/maps/LittlerootTown/scripts.pory"

# 997 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 998 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 999 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1000 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 1001 "data/maps/LittlerootTown/scripts.pory"
	release
# 1002 "data/maps/LittlerootTown/scripts.pory"
	end
# 1003 "data/maps/LittlerootTown/scripts.pory"

# 1004 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1005 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1006 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1007 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1008 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1009 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1010 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1011 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TakeFishingRod, MSGBOX_DEFAULT
# 1012 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1013 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 1014 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_SoWillYourSister, MSGBOX_DEFAULT
# 1015 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1016 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 1017 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1018 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_EmmieComeHere, MSGBOX_DEFAULT
# 1019 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1020 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1021 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_EMMIE, LittlerootTown_Movement_EmmieApproachPlayer
# 1022 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1023 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_QuestionMark
# 1024 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 1025 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1026 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_EmmieWhatsGoingOn, MSGBOX_DEFAULT
# 1027 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1028 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayerHasAPokemon, MSGBOX_DEFAULT
# 1029 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1030 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 1031 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_ExclamationMark
# 1032 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1033 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_EmmieHowExciting, MSGBOX_DEFAULT
# 1034 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1035 "data/maps/LittlerootTown/scripts.pory"
	setfollowernpc 9, FNPC_ALL, Common_EventScript_Emmie, PARTNER_EMMIE
# 1036 "data/maps/LittlerootTown/scripts.pory"
	return
# 1037 "data/maps/LittlerootTown/scripts.pory"

# 1038 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 1039 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 1040 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 1041 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 1042 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 1043 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 1044 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 1045 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 1046 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 1047 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 1048 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 1049 "data/maps/LittlerootTown/scripts.pory"

# 1050 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 1051 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 1052 "data/maps/LittlerootTown/scripts.pory"

# 1053 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 1054 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 1055 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 1056 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 1057 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 1058 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 1059 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 1060 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 1061 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 1062 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 1063 "data/maps/LittlerootTown/scripts.pory"

# 1064 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 1065 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 1066 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 1067 "data/maps/LittlerootTown/scripts.pory"

# 1068 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 1069 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 1070 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 1071 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 1072 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 1073 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 1074 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 1075 "data/maps/LittlerootTown/scripts.pory"

# 1076 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TakeFishingRod:
# 1077 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father left this at home too.\n"
# 1078 "data/maps/LittlerootTown/scripts.pory"
	.string "You may as well have it!$"
# 1079 "data/maps/LittlerootTown/scripts.pory"

# 1080 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SoWillYourSister:
# 1081 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1082 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1083 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1084 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\p"
# 1085 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed., and so\n"
# 1086 "data/maps/LittlerootTown/scripts.pory"
	.string "will your sister!\p"
# 1087 "data/maps/LittlerootTown/scripts.pory"
	.string "She's been so excited to take you out\n"
# 1088 "data/maps/LittlerootTown/scripts.pory"
	.string "to see the world.$"
# 1089 "data/maps/LittlerootTown/scripts.pory"

# 1090 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_EmmieComeHere:
# 1091 "data/maps/LittlerootTown/scripts.pory"
	.string "Emmie! Come here dear!$"
# 1092 "data/maps/LittlerootTown/scripts.pory"

# 1093 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_EmmieWhatsGoingOn:
# 1094 "data/maps/LittlerootTown/scripts.pory"
	.string "Emmie: Mom? {PLAYER}? What's going on?$"
# 1095 "data/maps/LittlerootTown/scripts.pory"

# 1096 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayerHasAPokemon:
# 1097 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: Professor Birch has been kind\n"
# 1098 "data/maps/LittlerootTown/scripts.pory"
	.string "enough to give {PLAYER} a Pokémon!\p"
# 1099 "data/maps/LittlerootTown/scripts.pory"
	.string "I know you've been looking forward\n"
# 1100 "data/maps/LittlerootTown/scripts.pory"
	.string "to seeing the world together.\p"
# 1101 "data/maps/LittlerootTown/scripts.pory"
	.string "Just promise me you will look after\n"
# 1102 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} and please be careful.\p"
# 1103 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1104 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, kids!$"
# 1105 "data/maps/LittlerootTown/scripts.pory"

# 1106 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_EmmieHowExciting:
# 1107 "data/maps/LittlerootTown/scripts.pory"
	.string "Emmie: Oh, how exciting! I'll keep a\n"
# 1108 "data/maps/LittlerootTown/scripts.pory"
	.string "close eye on {PLAYER}, don't worry!$"
# 1109 "data/maps/LittlerootTown/scripts.pory"

# 1110 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_EmmieLetMeExplain:
# 1111 "data/maps/LittlerootTown/scripts.pory"
	.string "Emmie: {PLAYER}, I'm so happy to that\n"
# 1112 "data/maps/LittlerootTown/scripts.pory"
	.string "we can finally go on an adventure!\p"
# 1113 "data/maps/LittlerootTown/scripts.pory"
	.string "Let me explain how things will work.\p"
# 1114 "data/maps/LittlerootTown/scripts.pory"
	.string "In the world of Pokémon we can carry\n"
# 1115 "data/maps/LittlerootTown/scripts.pory"
	.string "up to 6 Pokémon in our party.\p"
# 1116 "data/maps/LittlerootTown/scripts.pory"
	.string "When we are battling together, the first\n"
# 1117 "data/maps/LittlerootTown/scripts.pory"
	.string "3 Pokémon in our party will be used\l"
# 1118 "data/maps/LittlerootTown/scripts.pory"
	.string "by you, and the last 3 I will control.\p"
# 1119 "data/maps/LittlerootTown/scripts.pory"
	.string "I am happy to let you decide the moves\n"
# 1120 "data/maps/LittlerootTown/scripts.pory"
	.string "and items for my Pokémon.\p"
# 1121 "data/maps/LittlerootTown/scripts.pory"
	.string "When we go into battle, I will restore\n"
# 1122 "data/maps/LittlerootTown/scripts.pory"
	.string "the HP and PP of my Pokémon only.\p"
# 1123 "data/maps/LittlerootTown/scripts.pory"
	.string "The levels of my Pokémon will also scale\n"
# 1124 "data/maps/LittlerootTown/scripts.pory"
	.string "to match the current level cap.\p"
# 1125 "data/maps/LittlerootTown/scripts.pory"
	.string "I will leave any status conditions\n"
# 1126 "data/maps/LittlerootTown/scripts.pory"
	.string "afflicting my Pokémon as they are.\p"
# 1127 "data/maps/LittlerootTown/scripts.pory"
	.string "At the end of battle, I won't heal my\n"
# 1128 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon until the next battle begins.\p"
# 1129 "data/maps/LittlerootTown/scripts.pory"
	.string "My Pokémon's levels will return to\n"
# 1130 "data/maps/LittlerootTown/scripts.pory"
	.string "their original levels at the end of\l"
# 1131 "data/maps/LittlerootTown/scripts.pory"
	.string "each battle.$"
# 1132 "data/maps/LittlerootTown/scripts.pory"

# 1133 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_EmmieLetMeExplain2:
# 1134 "data/maps/LittlerootTown/scripts.pory"
	.string "As we are going on this journey together\n"
# 1135 "data/maps/LittlerootTown/scripts.pory"
	.string "we need to be carrying at least 4\l"
# 1136 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon at all times.\p"
# 1137 "data/maps/LittlerootTown/scripts.pory"
	.string "Therefore, if any of our Pokémon faint\n"
# 1138 "data/maps/LittlerootTown/scripts.pory"
	.string "in battle, I will restore their HP to\l"
# 1139 "data/maps/LittlerootTown/scripts.pory"
	.string "1 when we are finished.\p"
# 1140 "data/maps/LittlerootTown/scripts.pory"
	.string "If any of my Pokémon faint in battle,\n"
# 1141 "data/maps/LittlerootTown/scripts.pory"
	.string "please don't blame yourself!\p"
# 1142 "data/maps/LittlerootTown/scripts.pory"
	.string "We work together as a team, but I am\n"
# 1143 "data/maps/LittlerootTown/scripts.pory"
	.string "making my own decisions.\p"
# 1144 "data/maps/LittlerootTown/scripts.pory"
	.string "Also, if all of your Pokémon faint but\n"
# 1145 "data/maps/LittlerootTown/scripts.pory"
	.string "I still carry us to victory, I would\l"
# 1146 "data/maps/LittlerootTown/scripts.pory"
	.string "still view this as a win for us.\p"
# 1147 "data/maps/LittlerootTown/scripts.pory"
	.string "We are a team, and in my eyes a win is a\n"
# 1148 "data/maps/LittlerootTown/scripts.pory"
	.string "win!\p"
# 1149 "data/maps/LittlerootTown/scripts.pory"
	.string "Lastly, there may be times where we meet\n"
# 1150 "data/maps/LittlerootTown/scripts.pory"
	.string "other trainers who want to battle\l"
# 1151 "data/maps/LittlerootTown/scripts.pory"
	.string "alongside you.\p"
# 1152 "data/maps/LittlerootTown/scripts.pory"
	.string "When this happens, I will stand aside\n"
# 1153 "data/maps/LittlerootTown/scripts.pory"
	.string "and you can choose which 3 of our\l"
# 1154 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon you want to take into battle.\p"
# 1155 "data/maps/LittlerootTown/scripts.pory"
	.string "Now, as you know I already have some\n"
# 1156 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon of my own.\p"
# 1157 "data/maps/LittlerootTown/scripts.pory"
	.string "I'll add these to our party now, then\n"
# 1158 "data/maps/LittlerootTown/scripts.pory"
	.string "we can finally get started!$"
# 1159 "data/maps/LittlerootTown/scripts.pory"

# 1160 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1161 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 1162 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 1163 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 1164 "data/maps/LittlerootTown/scripts.pory"

# 1165 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1166 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 1167 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1168 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 1169 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 1170 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1171 "data/maps/LittlerootTown/scripts.pory"

# 1172 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1173 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1174 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1175 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 1176 "data/maps/LittlerootTown/scripts.pory"

# 1177 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1178 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1179 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1180 "data/maps/LittlerootTown/scripts.pory"

# 1181 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1182 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 1183 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1184 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1185 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 1186 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1187 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 1188 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1189 "data/maps/LittlerootTown/scripts.pory"

# 1190 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1191 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1192 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1193 "data/maps/LittlerootTown/scripts.pory"

# 1194 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1195 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1196 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1197 "data/maps/LittlerootTown/scripts.pory"

# 1198 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1199 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1200 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1201 "data/maps/LittlerootTown/scripts.pory"

# 1202 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1203 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1204 "data/maps/LittlerootTown/scripts.pory"

# 1205 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1206 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1207 "data/maps/LittlerootTown/scripts.pory"

# 1208 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1209 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1210 "data/maps/LittlerootTown/scripts.pory"

# 1211 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1212 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1213 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1214 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1215 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1216 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1217 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1218 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1219 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1220 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"
