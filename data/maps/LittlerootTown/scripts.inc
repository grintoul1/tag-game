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
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 57 "data/maps/LittlerootTown/scripts.pory"
	end
# 58 "data/maps/LittlerootTown/scripts.pory"

# 59 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 60 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 61 "data/maps/LittlerootTown/scripts.pory"
	return
# 62 "data/maps/LittlerootTown/scripts.pory"

# 63 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 64 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 65 "data/maps/LittlerootTown/scripts.pory"
	return
# 66 "data/maps/LittlerootTown/scripts.pory"

# 67 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 68 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 69 "data/maps/LittlerootTown/scripts.pory"
	return
# 70 "data/maps/LittlerootTown/scripts.pory"

# 71 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 72 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 73 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 74 "data/maps/LittlerootTown/scripts.pory"
	return
# 75 "data/maps/LittlerootTown/scripts.pory"

# 76 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 77 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 78 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 79 "data/maps/LittlerootTown/scripts.pory"
	return
# 80 "data/maps/LittlerootTown/scripts.pory"

# 81 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 82 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 83 "data/maps/LittlerootTown/scripts.pory"
	return
# 84 "data/maps/LittlerootTown/scripts.pory"

# 85 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 86 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 87 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 88 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 89 "data/maps/LittlerootTown/scripts.pory"
	return
# 90 "data/maps/LittlerootTown/scripts.pory"

# 91 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 92 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 93 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 94 "data/maps/LittlerootTown/scripts.pory"
	return
# 95 "data/maps/LittlerootTown/scripts.pory"

# 96 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 97 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 98 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 99 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 100 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 101 "data/maps/LittlerootTown/scripts.pory"
	return
# 102 "data/maps/LittlerootTown/scripts.pory"

# 103 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 104 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 105 "data/maps/LittlerootTown/scripts.pory"
	return
# 106 "data/maps/LittlerootTown/scripts.pory"

# 107 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 108 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 109 "data/maps/LittlerootTown/scripts.pory"
	return
# 110 "data/maps/LittlerootTown/scripts.pory"

# 111 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 112 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 113 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 114 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 115 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 116 "data/maps/LittlerootTown/scripts.pory"

# 117 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 118 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 119 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 120 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 121 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 122 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 123 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 124 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 125 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 126 "data/maps/LittlerootTown/scripts.pory"
	end
# 127 "data/maps/LittlerootTown/scripts.pory"

# 128 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 129 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 130 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 131 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 132 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 133 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 134 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 135 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 136 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 137 "data/maps/LittlerootTown/scripts.pory"
	end
# 138 "data/maps/LittlerootTown/scripts.pory"

# 139 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 140 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 141 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 142 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 143 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 145 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 146 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 147 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 148 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 150 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 151 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 152 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 153 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 154 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 155 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 156 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 157 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 158 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 160 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 161 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 162 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 163 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 165 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 166 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 167 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 168 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 169 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 170 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 171 "data/maps/LittlerootTown/scripts.pory"
	return
# 172 "data/maps/LittlerootTown/scripts.pory"

# 173 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 174 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 175 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 176 "data/maps/LittlerootTown/scripts.pory"

# 177 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 178 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 179 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 180 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 181 "data/maps/LittlerootTown/scripts.pory"

# 182 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 183 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 184 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 185 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 186 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 187 "data/maps/LittlerootTown/scripts.pory"

# 188 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 189 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 190 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 191 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 192 "data/maps/LittlerootTown/scripts.pory"

# 193 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 194 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 195 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 196 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 197 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 198 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 199 "data/maps/LittlerootTown/scripts.pory"

# 200 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 201 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 202 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 203 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 204 "data/maps/LittlerootTown/scripts.pory"

# 205 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 206 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 207 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 208 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 209 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 210 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 211 "data/maps/LittlerootTown/scripts.pory"

# 212 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 213 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 214 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 215 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 216 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 217 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 218 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 219 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 220 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 221 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 222 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 223 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 224 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 225 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 226 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 227 "data/maps/LittlerootTown/scripts.pory"
	end
# 228 "data/maps/LittlerootTown/scripts.pory"

# 229 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 230 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 231 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 232 "data/maps/LittlerootTown/scripts.pory"

# 233 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 234 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 235 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 236 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 237 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 238 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 239 "data/maps/LittlerootTown/scripts.pory"
	end
# 240 "data/maps/LittlerootTown/scripts.pory"

# 241 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 242 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 243 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 244 "data/maps/LittlerootTown/scripts.pory"
	end
# 245 "data/maps/LittlerootTown/scripts.pory"

# 246 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 247 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 248 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 249 "data/maps/LittlerootTown/scripts.pory"
	end
# 250 "data/maps/LittlerootTown/scripts.pory"

# 251 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 252 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 253 "data/maps/LittlerootTown/scripts.pory"
	end
# 254 "data/maps/LittlerootTown/scripts.pory"

# 255 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 256 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 257 "data/maps/LittlerootTown/scripts.pory"
	end
# 258 "data/maps/LittlerootTown/scripts.pory"

# 259 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 260 "data/maps/LittlerootTown/scripts.pory"
	lock
# 261 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 262 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 263 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 264 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 265 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 266 "data/maps/LittlerootTown/scripts.pory"
	release
# 267 "data/maps/LittlerootTown/scripts.pory"
	end
# 268 "data/maps/LittlerootTown/scripts.pory"

# 269 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 270 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 271 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 272 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 273 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 274 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 275 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 276 "data/maps/LittlerootTown/scripts.pory"
	release
# 277 "data/maps/LittlerootTown/scripts.pory"
	end
# 278 "data/maps/LittlerootTown/scripts.pory"

# 279 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 280 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 281 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown/scripts.pory"
	release
# 283 "data/maps/LittlerootTown/scripts.pory"
	end
# 284 "data/maps/LittlerootTown/scripts.pory"

# 285 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 286 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 287 "data/maps/LittlerootTown/scripts.pory"
	release
# 288 "data/maps/LittlerootTown/scripts.pory"
	end
# 289 "data/maps/LittlerootTown/scripts.pory"

# 290 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 291 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 292 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 293 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 295 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 296 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 297 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 298 "data/maps/LittlerootTown/scripts.pory"
	end
# 299 "data/maps/LittlerootTown/scripts.pory"

# 300 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 301 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 302 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 303 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 304 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 305 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 306 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 307 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 308 "data/maps/LittlerootTown/scripts.pory"
	return
# 309 "data/maps/LittlerootTown/scripts.pory"

# 310 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 311 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 312 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 313 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 314 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 315 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 316 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 317 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 318 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 319 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 320 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 321 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 322 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 323 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 324 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 325 "data/maps/LittlerootTown/scripts.pory"

# 326 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 327 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 328 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 329 "data/maps/LittlerootTown/scripts.pory"

# 330 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 340 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 341 "data/maps/LittlerootTown/scripts.pory"

# 342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 343 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 344 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 345 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 346 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 347 "data/maps/LittlerootTown/scripts.pory"

# 348 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 349 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 350 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 351 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 352 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 353 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 354 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 355 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 356 "data/maps/LittlerootTown/scripts.pory"
	end
# 357 "data/maps/LittlerootTown/scripts.pory"

# 358 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 359 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 360 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 361 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 362 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 363 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 364 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 370 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 371 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 372 "data/maps/LittlerootTown/scripts.pory"

# 373 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 380 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 381 "data/maps/LittlerootTown/scripts.pory"

# 382 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 383 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 384 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 385 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 386 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 387 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 388 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 389 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 390 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 391 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 392 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 393 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 394 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 395 "data/maps/LittlerootTown/scripts.pory"
	end
# 396 "data/maps/LittlerootTown/scripts.pory"

# 397 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 398 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 399 "data/maps/LittlerootTown/scripts.pory"
	end
# 400 "data/maps/LittlerootTown/scripts.pory"

# 401 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 402 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 403 "data/maps/LittlerootTown/scripts.pory"
	end
# 404 "data/maps/LittlerootTown/scripts.pory"

# 405 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 406 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 407 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 408 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 409 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 410 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 411 "data/maps/LittlerootTown/scripts.pory"
	end
# 412 "data/maps/LittlerootTown/scripts.pory"

# 413 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 414 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 415 "data/maps/LittlerootTown/scripts.pory"
	return
# 416 "data/maps/LittlerootTown/scripts.pory"

# 417 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 418 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 419 "data/maps/LittlerootTown/scripts.pory"
	return
# 420 "data/maps/LittlerootTown/scripts.pory"

# 421 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 422 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 423 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 424 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 425 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 426 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 427 "data/maps/LittlerootTown/scripts.pory"
	end
# 428 "data/maps/LittlerootTown/scripts.pory"

# 429 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 430 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 431 "data/maps/LittlerootTown/scripts.pory"
	return
# 432 "data/maps/LittlerootTown/scripts.pory"

# 433 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 434 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 435 "data/maps/LittlerootTown/scripts.pory"
	return
# 436 "data/maps/LittlerootTown/scripts.pory"

# 437 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 438 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 439 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 440 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_EMMIE
# 441 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 442 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 443 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_EMMIE
# 444 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 445 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_EMMIE, 9, 9
# 446 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 447 "data/maps/LittlerootTown/scripts.pory"
	end
# 448 "data/maps/LittlerootTown/scripts.pory"

# 449 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 450 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 451 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 452 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_EMMIE
# 453 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 454 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 455 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_EMMIE
# 456 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 457 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_EMMIE, 10, 9
# 458 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 459 "data/maps/LittlerootTown/scripts.pory"
	end
# 460 "data/maps/LittlerootTown/scripts.pory"

# 461 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 462 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 463 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 464 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 465 "data/maps/LittlerootTown/scripts.pory"
	end
# 466 "data/maps/LittlerootTown/scripts.pory"

# 467 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 468 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 469 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 470 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 471 "data/maps/LittlerootTown/scripts.pory"
	end
# 472 "data/maps/LittlerootTown/scripts.pory"

# 473 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 474 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 475 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 476 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 477 "data/maps/LittlerootTown/scripts.pory"
	end
# 478 "data/maps/LittlerootTown/scripts.pory"

# 479 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 480 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 481 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 482 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 483 "data/maps/LittlerootTown/scripts.pory"
	end
# 484 "data/maps/LittlerootTown/scripts.pory"

# 485 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 486 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 487 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 488 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 489 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 490 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 491 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 492 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 493 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 494 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 495 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 496 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 497 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 498 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 499 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 500 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 501 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 502 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 503 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp
# 504 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 505 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 506 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 507 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 508 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_EmmieIntroduction
# 509 "data/maps/LittlerootTown/scripts.pory"
	end
# 510 "data/maps/LittlerootTown/scripts.pory"

# 511 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_EmmieIntroduction::
# 512 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_EmmieLetMeExplain, MSGBOX_DEFAULT
# 513 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_EmmieLetMeExplain2, MSGBOX_DEFAULT
# 514 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 515 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_EMMIE
# 516 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_EMMIE
# 517 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_EMMIE
# 518 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 519 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_STUFFUL, 5, ITEM_NONE, ITEM_POKE_BALL, , 0
# 520 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SendStuffulParty
# 521 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_SKITTY, 5, ITEM_MOON_STONE, ITEM_POKE_BALL
# 522 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SendSkittyParty
# 523 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_EEVEE, 5
# 524 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SendEeveeParty
# 525 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 526 "data/maps/LittlerootTown/scripts.pory"
	end
# 527 "data/maps/LittlerootTown/scripts.pory"

# 528 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SendStuffulParty::
# 529 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_ReceivedStuffulFanfare
# 530 "data/maps/LittlerootTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 531 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_EventScript_NicknameEmmiePokemon
# 532 "data/maps/LittlerootTown/scripts.pory"
	return
# 533 "data/maps/LittlerootTown/scripts.pory"

# 534 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ReceivedStuffulFanfare::
# 535 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_STUFFUL
# 536 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 537 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_ObtainedStufful
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 539 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 540 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_STUFFUL
# 541 "data/maps/LittlerootTown/scripts.pory"
	return
# 542 "data/maps/LittlerootTown/scripts.pory"

# 543 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SendSkittyParty::
# 544 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_ReceivedSkittyFanfare
# 545 "data/maps/LittlerootTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 546 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_EventScript_NicknameEmmiePokemon
# 547 "data/maps/LittlerootTown/scripts.pory"
	return
# 548 "data/maps/LittlerootTown/scripts.pory"

# 549 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NicknameEmmiePokemon::
# 550 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 551 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 552 "data/maps/LittlerootTown/scripts.pory"
	return
# 553 "data/maps/LittlerootTown/scripts.pory"

# 554 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ReceivedSkittyFanfare::
# 555 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SKITTY
# 556 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 557 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_ObtainedSkitty
# 558 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 559 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 560 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SKITTY
# 561 "data/maps/LittlerootTown/scripts.pory"
	return
# 562 "data/maps/LittlerootTown/scripts.pory"

# 563 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SendEeveeParty::
# 564 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_ReceivedEeveeFanfare
# 565 "data/maps/LittlerootTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 566 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_EventScript_NicknameEmmiePokemon
# 567 "data/maps/LittlerootTown/scripts.pory"
	return
# 568 "data/maps/LittlerootTown/scripts.pory"

# 569 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ReceivedEeveeFanfare::
# 570 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_EEVEE
# 571 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 572 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_ObtainedEevee
# 573 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 574 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 575 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 576 "data/maps/LittlerootTown/scripts.pory"
	return
# 577 "data/maps/LittlerootTown/scripts.pory"

# 578 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ObtainedStufful:
# 579 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} obtained a Stufful.$"
# 580 "data/maps/LittlerootTown/scripts.pory"

# 581 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ObtainedSkitty:
# 582 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} obtained a Skitty.$"
# 583 "data/maps/LittlerootTown/scripts.pory"

# 584 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ObtainedEevee:
# 585 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} obtained a Eevee.$"
# 586 "data/maps/LittlerootTown/scripts.pory"

# 587 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 588 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 589 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 590 "data/maps/LittlerootTown/scripts.pory"
	return
# 591 "data/maps/LittlerootTown/scripts.pory"

# 592 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 593 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 594 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 595 "data/maps/LittlerootTown/scripts.pory"
	return
# 596 "data/maps/LittlerootTown/scripts.pory"

# 597 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 598 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 599 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 600 "data/maps/LittlerootTown/scripts.pory"
	return
# 601 "data/maps/LittlerootTown/scripts.pory"

# 602 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 603 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 604 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 605 "data/maps/LittlerootTown/scripts.pory"
	return
# 606 "data/maps/LittlerootTown/scripts.pory"

# 607 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 608 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 609 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 610 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 611 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 612 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 613 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 614 "data/maps/LittlerootTown/scripts.pory"
	return
# 615 "data/maps/LittlerootTown/scripts.pory"

# 616 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 618 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 619 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 620 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 622 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 623 "data/maps/LittlerootTown/scripts.pory"
	return
# 624 "data/maps/LittlerootTown/scripts.pory"

# 625 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 626 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 627 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 628 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 629 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 630 "data/maps/LittlerootTown/scripts.pory"
	return
# 631 "data/maps/LittlerootTown/scripts.pory"

# 632 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 633 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 634 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 635 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 636 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 637 "data/maps/LittlerootTown/scripts.pory"
	return
# 638 "data/maps/LittlerootTown/scripts.pory"

# 639 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 640 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 641 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 642 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 643 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 644 "data/maps/LittlerootTown/scripts.pory"
	return
# 645 "data/maps/LittlerootTown/scripts.pory"

# 646 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 647 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 648 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 649 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 650 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 651 "data/maps/LittlerootTown/scripts.pory"
	return
# 652 "data/maps/LittlerootTown/scripts.pory"

# 653 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 654 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 655 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 656 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 657 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 658 "data/maps/LittlerootTown/scripts.pory"
	return
# 659 "data/maps/LittlerootTown/scripts.pory"

# 660 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 661 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 662 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 663 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 664 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 665 "data/maps/LittlerootTown/scripts.pory"
	return
# 666 "data/maps/LittlerootTown/scripts.pory"

# 667 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 668 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 669 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 670 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 671 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 672 "data/maps/LittlerootTown/scripts.pory"
	return
# 673 "data/maps/LittlerootTown/scripts.pory"

# 674 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 675 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 676 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 677 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 678 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 679 "data/maps/LittlerootTown/scripts.pory"
	return
# 680 "data/maps/LittlerootTown/scripts.pory"

# 681 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 682 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 683 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 684 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 686 "data/maps/LittlerootTown/scripts.pory"
	return
# 687 "data/maps/LittlerootTown/scripts.pory"

# 688 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 689 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 690 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 691 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 692 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 693 "data/maps/LittlerootTown/scripts.pory"
	return
# 694 "data/maps/LittlerootTown/scripts.pory"

# 695 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 696 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 697 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 698 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 699 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 700 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 701 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 702 "data/maps/LittlerootTown/scripts.pory"
	return
# 703 "data/maps/LittlerootTown/scripts.pory"

# 704 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 705 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 706 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 707 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 708 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 709 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 710 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 711 "data/maps/LittlerootTown/scripts.pory"
	return
# 712 "data/maps/LittlerootTown/scripts.pory"

# 713 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 714 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 715 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 716 "data/maps/LittlerootTown/scripts.pory"
	return
# 717 "data/maps/LittlerootTown/scripts.pory"

# 718 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 719 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 721 "data/maps/LittlerootTown/scripts.pory"
	return
# 722 "data/maps/LittlerootTown/scripts.pory"

# 723 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 724 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 726 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 727 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 728 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 729 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 730 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 731 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 732 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 733 "data/maps/LittlerootTown/scripts.pory"
	return
# 734 "data/maps/LittlerootTown/scripts.pory"

# 735 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 736 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 737 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 738 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 739 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 740 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 741 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 742 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 743 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 744 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 745 "data/maps/LittlerootTown/scripts.pory"
	return
# 746 "data/maps/LittlerootTown/scripts.pory"

# 747 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 748 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 749 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 750 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 751 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 752 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 753 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 754 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 755 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 756 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 757 "data/maps/LittlerootTown/scripts.pory"
	return
# 758 "data/maps/LittlerootTown/scripts.pory"

# 759 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 760 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 761 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 762 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 763 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 764 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 765 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 766 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 767 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 768 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 769 "data/maps/LittlerootTown/scripts.pory"
	return
# 770 "data/maps/LittlerootTown/scripts.pory"

# 771 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 772 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 773 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 774 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 775 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 776 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 777 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 778 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 779 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 780 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 781 "data/maps/LittlerootTown/scripts.pory"
	return
# 782 "data/maps/LittlerootTown/scripts.pory"

# 783 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 784 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 785 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 786 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 787 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 788 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 789 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 790 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 791 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 792 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 793 "data/maps/LittlerootTown/scripts.pory"
	return
# 794 "data/maps/LittlerootTown/scripts.pory"

# 795 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 796 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 797 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 798 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 799 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 800 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 801 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 802 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 803 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 804 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 805 "data/maps/LittlerootTown/scripts.pory"
	return
# 806 "data/maps/LittlerootTown/scripts.pory"

# 807 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 808 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 809 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 810 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 811 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 812 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 813 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 814 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 815 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 816 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 817 "data/maps/LittlerootTown/scripts.pory"
	return
# 818 "data/maps/LittlerootTown/scripts.pory"

# 819 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_EmmieApproachPlayer:
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
	walk_up
# 826 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 827 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 828 "data/maps/LittlerootTown/scripts.pory"

# 829 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
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
	walk_up
# 836 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 837 "data/maps/LittlerootTown/scripts.pory"

# 838 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
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
	walk_up
# 845 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 846 "data/maps/LittlerootTown/scripts.pory"

# 847 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 851 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 852 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 853 "data/maps/LittlerootTown/scripts.pory"

# 854 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 858 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 859 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 860 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 861 "data/maps/LittlerootTown/scripts.pory"

# 862 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 865 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 866 "data/maps/LittlerootTown/scripts.pory"

# 867 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 871 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 872 "data/maps/LittlerootTown/scripts.pory"

# 873 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 877 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 878 "data/maps/LittlerootTown/scripts.pory"

# 879 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 880 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 881 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 882 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 883 "data/maps/LittlerootTown/scripts.pory"

# 884 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 889 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 890 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 891 "data/maps/LittlerootTown/scripts.pory"

# 892 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 893 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 894 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 895 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 896 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 897 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 898 "data/maps/LittlerootTown/scripts.pory"

# 899 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 900 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 901 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 902 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 903 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 904 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 905 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 906 "data/maps/LittlerootTown/scripts.pory"

# 907 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 909 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 910 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 911 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 912 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 913 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 914 "data/maps/LittlerootTown/scripts.pory"

# 915 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 917 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 918 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 919 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 920 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 921 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 922 "data/maps/LittlerootTown/scripts.pory"

# 923 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 924 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 925 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 926 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 927 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 928 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 929 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 930 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 931 "data/maps/LittlerootTown/scripts.pory"

# 932 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 933 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 934 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 935 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 936 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 937 "data/maps/LittlerootTown/scripts.pory"

# 938 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 939 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 940 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 941 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 942 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 943 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 944 "data/maps/LittlerootTown/scripts.pory"

# 945 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 946 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 947 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 948 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 949 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 950 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 951 "data/maps/LittlerootTown/scripts.pory"

# 952 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 953 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 954 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 955 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 956 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 957 "data/maps/LittlerootTown/scripts.pory"

# 958 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 959 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 960 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 961 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 962 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 963 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 964 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 965 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 966 "data/maps/LittlerootTown/scripts.pory"

# 967 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 968 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 969 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 970 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 971 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 972 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 973 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 974 "data/maps/LittlerootTown/scripts.pory"

# 975 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 976 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 977 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 978 "data/maps/LittlerootTown/scripts.pory"

# 979 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 980 "data/maps/LittlerootTown/scripts.pory"
	lock
# 981 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 982 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 983 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 984 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 985 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 986 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 987 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 988 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 989 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 990 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 991 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 992 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 993 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 994 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 995 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 996 "data/maps/LittlerootTown/scripts.pory"
	end
# 997 "data/maps/LittlerootTown/scripts.pory"

# 998 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 999 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 1000 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1001 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 1002 "data/maps/LittlerootTown/scripts.pory"
	release
# 1003 "data/maps/LittlerootTown/scripts.pory"
	end
# 1004 "data/maps/LittlerootTown/scripts.pory"

# 1005 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 1006 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 1007 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1008 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 1009 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 1010 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 1011 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 1012 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TakeFishingRod, MSGBOX_DEFAULT
# 1013 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1014 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 1015 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_SoWillYourSister, MSGBOX_DEFAULT
# 1016 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1017 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 1018 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1019 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_EmmieComeHere, MSGBOX_DEFAULT
# 1020 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1021 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 1022 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_EMMIE, LittlerootTown_Movement_EmmieApproachPlayer
# 1023 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1024 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_QuestionMark
# 1025 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 1026 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1027 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_EmmieWhatsGoingOn, MSGBOX_DEFAULT
# 1028 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1029 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayerHasAPokemon, MSGBOX_DEFAULT
# 1030 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1031 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 1032 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_ExclamationMark
# 1033 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1034 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_EmmieHowExciting, MSGBOX_DEFAULT
# 1035 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1036 "data/maps/LittlerootTown/scripts.pory"
	setfollowernpc 9, FNPC_ALL, Common_EventScript_Emmie, PARTNER_EMMIE
# 1037 "data/maps/LittlerootTown/scripts.pory"
	return
# 1038 "data/maps/LittlerootTown/scripts.pory"

# 1039 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 1040 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 1041 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 1042 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 1043 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 1044 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 1045 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 1046 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 1047 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 1048 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 1049 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 1050 "data/maps/LittlerootTown/scripts.pory"

# 1051 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 1052 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 1053 "data/maps/LittlerootTown/scripts.pory"

# 1054 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 1055 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 1056 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 1057 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 1058 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 1059 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 1060 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 1061 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 1062 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 1063 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 1064 "data/maps/LittlerootTown/scripts.pory"

# 1065 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 1066 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 1067 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 1068 "data/maps/LittlerootTown/scripts.pory"

# 1069 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 1070 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 1071 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 1072 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 1073 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 1074 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 1075 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 1076 "data/maps/LittlerootTown/scripts.pory"

# 1077 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TakeFishingRod:
# 1078 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father left this at home too.\n"
# 1079 "data/maps/LittlerootTown/scripts.pory"
	.string "You may as well have it!$"
# 1080 "data/maps/LittlerootTown/scripts.pory"

# 1081 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SoWillYourSister:
# 1082 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1083 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1084 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1085 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\p"
# 1086 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed., and so\n"
# 1087 "data/maps/LittlerootTown/scripts.pory"
	.string "will your sister!\p"
# 1088 "data/maps/LittlerootTown/scripts.pory"
	.string "She's been so excited to take you out\n"
# 1089 "data/maps/LittlerootTown/scripts.pory"
	.string "to see the world.$"
# 1090 "data/maps/LittlerootTown/scripts.pory"

# 1091 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_EmmieComeHere:
# 1092 "data/maps/LittlerootTown/scripts.pory"
	.string "Emmie! Come here dear!$"
# 1093 "data/maps/LittlerootTown/scripts.pory"

# 1094 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_EmmieWhatsGoingOn:
# 1095 "data/maps/LittlerootTown/scripts.pory"
	.string "Emmie: Mom? {PLAYER}? What's going on?$"
# 1096 "data/maps/LittlerootTown/scripts.pory"

# 1097 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayerHasAPokemon:
# 1098 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: Professor Birch has been kind\n"
# 1099 "data/maps/LittlerootTown/scripts.pory"
	.string "enough to give {PLAYER} a Pokémon!\p"
# 1100 "data/maps/LittlerootTown/scripts.pory"
	.string "I know you've been looking forward\n"
# 1101 "data/maps/LittlerootTown/scripts.pory"
	.string "to seeing the world together.\p"
# 1102 "data/maps/LittlerootTown/scripts.pory"
	.string "Just promise me you will look after\n"
# 1103 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} and please be careful.\p"
# 1104 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1105 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, kids!$"
# 1106 "data/maps/LittlerootTown/scripts.pory"

# 1107 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_EmmieHowExciting:
# 1108 "data/maps/LittlerootTown/scripts.pory"
	.string "Emmie: Oh, how exciting! I'll keep a\n"
# 1109 "data/maps/LittlerootTown/scripts.pory"
	.string "close eye on {PLAYER}, don't worry!$"
# 1110 "data/maps/LittlerootTown/scripts.pory"

# 1111 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_EmmieLetMeExplain:
# 1112 "data/maps/LittlerootTown/scripts.pory"
	.string "Emmie: {PLAYER}, I'm so happy to that\n"
# 1113 "data/maps/LittlerootTown/scripts.pory"
	.string "we can finally go on an adventure!\p"
# 1114 "data/maps/LittlerootTown/scripts.pory"
	.string "Let me explain how things will work.\p"
# 1115 "data/maps/LittlerootTown/scripts.pory"
	.string "In the world of Pokémon we can carry\n"
# 1116 "data/maps/LittlerootTown/scripts.pory"
	.string "up to 6 Pokémon in our party.\p"
# 1117 "data/maps/LittlerootTown/scripts.pory"
	.string "When we are battling together, the first\n"
# 1118 "data/maps/LittlerootTown/scripts.pory"
	.string "3 Pokémon in our party will be used\l"
# 1119 "data/maps/LittlerootTown/scripts.pory"
	.string "by you, and the last 3 I will control.\p"
# 1120 "data/maps/LittlerootTown/scripts.pory"
	.string "I am happy to let you decide the moves\n"
# 1121 "data/maps/LittlerootTown/scripts.pory"
	.string "and items for my Pokémon.\p"
# 1122 "data/maps/LittlerootTown/scripts.pory"
	.string "When we go into battle, I will restore\n"
# 1123 "data/maps/LittlerootTown/scripts.pory"
	.string "the HP and PP of my Pokémon only.\p"
# 1124 "data/maps/LittlerootTown/scripts.pory"
	.string "The levels of my Pokémon will also scale\n"
# 1125 "data/maps/LittlerootTown/scripts.pory"
	.string "to match the current level cap.\p"
# 1126 "data/maps/LittlerootTown/scripts.pory"
	.string "I will leave any status conditions\n"
# 1127 "data/maps/LittlerootTown/scripts.pory"
	.string "afflicting my Pokémon as they are.\p"
# 1128 "data/maps/LittlerootTown/scripts.pory"
	.string "At the end of battle, I won't heal my\n"
# 1129 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon until the next battle begins.\p"
# 1130 "data/maps/LittlerootTown/scripts.pory"
	.string "My Pokémon's levels will return to\n"
# 1131 "data/maps/LittlerootTown/scripts.pory"
	.string "their original levels at the end of\l"
# 1132 "data/maps/LittlerootTown/scripts.pory"
	.string "each battle.$"
# 1133 "data/maps/LittlerootTown/scripts.pory"

# 1134 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_EmmieLetMeExplain2:
# 1135 "data/maps/LittlerootTown/scripts.pory"
	.string "As we are going on this journey together\n"
# 1136 "data/maps/LittlerootTown/scripts.pory"
	.string "we need to be carrying at least 4\l"
# 1137 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon at all times.\p"
# 1138 "data/maps/LittlerootTown/scripts.pory"
	.string "Therefore, if any of our Pokémon faint\n"
# 1139 "data/maps/LittlerootTown/scripts.pory"
	.string "in battle, I will restore their HP to\l"
# 1140 "data/maps/LittlerootTown/scripts.pory"
	.string "1 when we are finished.\p"
# 1141 "data/maps/LittlerootTown/scripts.pory"
	.string "If any of my Pokémon faint in battle,\n"
# 1142 "data/maps/LittlerootTown/scripts.pory"
	.string "please don't blame yourself!\p"
# 1143 "data/maps/LittlerootTown/scripts.pory"
	.string "We work together as a team, but I am\n"
# 1144 "data/maps/LittlerootTown/scripts.pory"
	.string "making my own decisions.\p"
# 1145 "data/maps/LittlerootTown/scripts.pory"
	.string "Also, if all of your Pokémon faint but\n"
# 1146 "data/maps/LittlerootTown/scripts.pory"
	.string "I still carry us to victory, I would\l"
# 1147 "data/maps/LittlerootTown/scripts.pory"
	.string "still view this as a win for us.\p"
# 1148 "data/maps/LittlerootTown/scripts.pory"
	.string "We are a team, and in my eyes a win is a\n"
# 1149 "data/maps/LittlerootTown/scripts.pory"
	.string "win!\p"
# 1150 "data/maps/LittlerootTown/scripts.pory"
	.string "Lastly, there may be times where we meet\n"
# 1151 "data/maps/LittlerootTown/scripts.pory"
	.string "other trainers who want to battle\l"
# 1152 "data/maps/LittlerootTown/scripts.pory"
	.string "alongside you.\p"
# 1153 "data/maps/LittlerootTown/scripts.pory"
	.string "When this happens, I will stand aside\n"
# 1154 "data/maps/LittlerootTown/scripts.pory"
	.string "and you can choose which 3 of our\l"
# 1155 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon you want to take into battle.\p"
# 1156 "data/maps/LittlerootTown/scripts.pory"
	.string "Now, as you know I already have some\n"
# 1157 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon of my own.\p"
# 1158 "data/maps/LittlerootTown/scripts.pory"
	.string "I'll add these to our party now, then\n"
# 1159 "data/maps/LittlerootTown/scripts.pory"
	.string "we can finally get started!$"
# 1160 "data/maps/LittlerootTown/scripts.pory"

# 1161 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 1162 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 1163 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 1164 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 1165 "data/maps/LittlerootTown/scripts.pory"

# 1166 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1167 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 1168 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1169 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 1170 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 1171 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1172 "data/maps/LittlerootTown/scripts.pory"

# 1173 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1174 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1175 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1176 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 1177 "data/maps/LittlerootTown/scripts.pory"

# 1178 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1179 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1180 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1181 "data/maps/LittlerootTown/scripts.pory"

# 1182 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1183 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 1184 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1185 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1186 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 1187 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1188 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 1189 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1190 "data/maps/LittlerootTown/scripts.pory"

# 1191 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1192 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1193 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1194 "data/maps/LittlerootTown/scripts.pory"

# 1195 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1196 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1197 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1198 "data/maps/LittlerootTown/scripts.pory"

# 1199 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1200 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1201 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1202 "data/maps/LittlerootTown/scripts.pory"

# 1203 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1204 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1205 "data/maps/LittlerootTown/scripts.pory"

# 1206 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1207 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1208 "data/maps/LittlerootTown/scripts.pory"

# 1209 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1210 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1211 "data/maps/LittlerootTown/scripts.pory"

# 1212 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1213 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1214 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1215 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1216 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1217 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1218 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1219 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1220 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1221 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"
