# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE, 1
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_ARCHIE, 2
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_MAXIE, 3
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_1, 4
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_2, 5
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE_SLEEPING, 7
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_MATT, 9
# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_SHELLY, 8
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SeafloorCavern_Room9_OnWarp
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafloorCavern_Room9_OnTransition
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchiePos::
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 11, 28
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_RIGHT
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	showobjectat LOCALID_ARCHIE, MAP_SEAFLOOR_CAVERN_ROOM9
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ShellyMattPos::
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 12, 28
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_MATT, 11, 28
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_KYOGRE, 17, 40
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	showobjectat LOCALID_KYOGRE, MAP_SEAFLOOR_CAVERN_ROOM9
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectmovementtype LOCALID_SHELLY, MOVEMENT_TYPE_FACE_UP
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectmovementtype LOCALID_MATT, MOVEMENT_TYPE_FACE_UP
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_OnTransition:
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_SEAFLOOR_CAVERN_STATE, 3, SeafloorCavern_Room9_EventScript_ClearFog
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_OnWarp:
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	map_script_2 VAR_SEAFLOOR_CAVERN_STATE, 2, SeafloorCavern_Room9_EventScript_ArchiePos
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	map_script_2 VAR_SEAFLOOR_CAVERN_STATE, 3, SeafloorCavern_Room9_EventScript_ShellyMattPos
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.2byte 0
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ClearFog::
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ShellyMatt::
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_FaceUp
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceUp
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerApproach1
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproach1
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_ExclamationMark
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieYouAgain, MSGBOX_DEFAULT
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_FaceRight
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterLeft
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceRight
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ShellyWeWillStall, MSGBOX_DEFAULT
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterUp
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, SeafloorCavern_Room9_Movement_ShellyApproach1
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, SeafloorCavern_Room9_Movement_ArchieApproachKyogre1
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_ARCHIE
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ShellyThisHasToHappen, MSGBOX_DEFAULT
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkSlowDown
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkSlowDown
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowDown
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowDown
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 8
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special SpawnCameraObject
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SeafloorCavern_Room9_Movement_PanToAction
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special RemoveCameraObject
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_MATT, 11, 28
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 9, 42
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectmovementtype LOCALID_MATT, MOVEMENT_TYPE_FACE_DOWN
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectmovementtype LOCALID_SHELLY, MOVEMENT_TYPE_FACE_DOWN
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_ARCHIE
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0 
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 17, 42, 0
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 2
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE_SLEEPING
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_KYOGRE, 17, 40
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 17, 42
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_UP
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special SpawnCameraObject
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SeafloorCavern_Room9_Movement_ReturnFromAction
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special RemoveCameraObject
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_FaceUp
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ShellyItIsDone, MSGBOX_DEFAULT
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_KnockedUp
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_KnockedUp
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterUp
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MattNotGettingOffLightly, MSGBOX_DEFAULT
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkSlowUp
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkSlowUp
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_Room9_EventScript_MattShellyDoMultiBattle
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_MattShellyDoMultiBattle::
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	multi_2p_vs_2 TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Room9_Text_ShellyDefeat, TRAINER_MATT_MT_PYRE, SeafloorCavern_Room9_Text_MattDefeat, PARTNER_EMMIE
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_RESULT
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_MattShellyVictory
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	fadescreen FADE_TO_BLACK
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special SetCB2WhiteOut
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_MattShellyVictory::
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, SeafloorCavern_Room9_Movement_KnockedDown
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, SeafloorCavern_Room9_Movement_KnockedDown
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterUp
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MattPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ShellyPostBattle::
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	faceplayer
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_MattPostBattle::
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	faceplayer
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MattPostBattle, MSGBOX_AUTOCLOSE
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KnockedUp:
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KnockedDown:
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_down
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyDefeat:
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "If only you were on our side…$"
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MattDefeat:
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's like the woods all over again…$"
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ShellyMovePostBattle:
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_right
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MattPostBattle:
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: We may have lost the battle,\n"
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "but ultimately we're still the winners.$"
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyPostBattle:
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: With the power of Kyogre, you\n"
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "will not defeat Archie.$"
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MattNotGettingOffLightly:
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: You're not getting off lightly\n"
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "though.\p"
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Us four, we have a score to settle, and\n"
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "we're a long way from Petalburg Woods!$"
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyItIsDone:
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: It is done. Archie now\n"
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "controls the legendary Pokémon Kyogre!$"
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PanToAction:
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_southeast
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_southeast
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_southeast
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_southeast
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_southeast
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ReturnFromAction:
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_northwest
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_northwest
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_northwest
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_northwest
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_northwest
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyThisHasToHappen:
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: You're not getting through us\n"
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "before Archie makes it to Kyogre.\p"
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "After Team Magma released Groudon,\n"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "this became more than a mere vision\l"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "for Team Aqua, it's now a necessity.\p"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Balance will be brought and you can't\n"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "stop us. Observe.$"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachKyogre1:
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproach2:
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ShellyApproach1:
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_up
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyWeWillStall:
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: We are too close to stop now.\p"
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Go. We will stall them.$"
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouAgain:
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: You…\p"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why do you insist on pursuing us\n"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "even here?\p"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You have seen the horror Team Magma\n"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "have brought to the region.\p"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Do you not see that balance must be\n"
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "restored?\p"
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You will not stop me.$"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerApproach1:
# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproach1:
# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_down
# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieKnockedBack:
# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_left
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_left
# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Archie::
# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Room9_EventScript_PlayerApproachArchieEast
# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Room9_EventScript_PlayerApproachArchieWest
# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Room9_EventScript_PlayerApproachArchieNorth
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 353 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 354 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 355 "data/maps/SeafloorCavern_Room9/scripts.pory"
	faceplayer
# 356 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 357 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 358 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 359 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_Room9_EventScript_ArchieDoMultiBattle
# 360 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 361 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 362 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 363 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieDoMultiBattle::
# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_NONE, TRUE
# 365 "data/maps/SeafloorCavern_Room9/scripts.pory"
	multi_2p_vs_1 TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat, PARTNER_EMMIE
# 366 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_RESULT
# 367 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_ArchieVictory
# 368 "data/maps/SeafloorCavern_Room9/scripts.pory"
	fadescreen FADE_TO_BLACK
# 369 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special SetCB2WhiteOut
# 370 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 371 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 372 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieVictory::
# 373 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 374 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 375 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 376 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, SeafloorCavern_Room9_Movement_ArchieKnockedBack
# 377 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 378 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 379 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 380 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 381 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 382 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 383 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 384 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 385 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_QuestionMark
# 386 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 387 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 388 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 389 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 390 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 391 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 392 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 393 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 394 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 395 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 396 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 397 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 398 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 399 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 400 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 401 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 402 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 403 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 404 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 405 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 406 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 407 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 408 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 409 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 410 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 411 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 412 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 413 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 414 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 415 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 416 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 417 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 418 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
# 419 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 420 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 421 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 422 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 423 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 424 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 425 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 426 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 427 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 428 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 429 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 430 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 431 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 432 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 433 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 434 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 435 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 436 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 437 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 438 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 439 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 440 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 441 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 442 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 443 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 444 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 445 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 446 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 447 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 448 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
# 449 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 450 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 451 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 452 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 454 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 456 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 458 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 459 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 460 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 461 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 462 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 463 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 464 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_ABNORMAL_WEATHER_SUN
# 465 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 466 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_ABNORMAL_WEATHER_RAIN
# 467 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 468 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 469 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 470 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 471 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 472 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 473 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 474 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 475 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 476 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 477 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 478 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 479 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 480 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 481 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 482 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_PlayerApproachArchieEast::
# 483 "data/maps/SeafloorCavern_Room9/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 484 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 16, SeafloorCavern_Room9_EventScript_ApproachArchieEast1
# 485 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 15, SeafloorCavern_Room9_EventScript_ApproachArchieEast2
# 486 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 487 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 488 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieEast1::
# 489 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerArchieStart2
# 490 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart6
# 491 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 492 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 493 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieEast2::
# 494 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerArchieStart3
# 495 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart7
# 496 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 497 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 498 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart7:
# 499 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 500 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 501 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 502 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 503 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 504 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 505 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart6:
# 506 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 507 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 508 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 509 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 510 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 511 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 512 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerArchieStart2:
# 513 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 514 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 515 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 516 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 517 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 518 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerArchieStart3:
# 519 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 520 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 521 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 522 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 523 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 524 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 525 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 526 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_PlayerApproachArchieWest::
# 527 "data/maps/SeafloorCavern_Room9/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 528 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 18, SeafloorCavern_Room9_EventScript_ApproachArchieWest1
# 529 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 19, SeafloorCavern_Room9_EventScript_ApproachArchieWest2
# 530 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 531 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 532 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieWest1::
# 533 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart4
# 534 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 535 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 536 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieWest2::
# 537 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart5
# 538 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 539 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 540 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart5:
# 541 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 542 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 543 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 544 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 545 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 546 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 547 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart4:
# 548 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 549 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 550 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 551 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 552 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_PlayerApproachArchieNorth::
# 553 "data/maps/SeafloorCavern_Room9/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 554 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 18, SeafloorCavern_Room9_EventScript_ApproachArchieNorth1
# 555 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 17, SeafloorCavern_Room9_EventScript_ApproachArchieNorth2
# 556 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 16, SeafloorCavern_Room9_EventScript_ApproachArchieNorth3
# 557 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 558 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 559 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieNorth1::
# 560 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart1
# 561 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 562 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 563 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieNorth2::
# 564 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart2
# 565 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerApproachArchieStart1
# 566 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 567 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 568 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieNorth3::
# 569 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart3
# 570 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerApproachArchieStart1
# 571 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 572 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 573 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart3:
# 574 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 575 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 576 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 577 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 578 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart2:
# 579 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 580 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 581 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 582 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart1:
# 583 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 584 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 585 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 586 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 587 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerApproachArchieStart1:
# 588 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 589 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 590 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 591 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 592 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 593 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerApproachArchieNorth:
# 594 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 595 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 596 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 597 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 598 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerApproachArchieWest:
# 599 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 600 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 601 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 602 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 603 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 604 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 605 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 606 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 607 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 608 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 609 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 610 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 611 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 612 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 613 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 614 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 615 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 616 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 617 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 618 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 619 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 620 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 621 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 622 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 623 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 624 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_right
# 625 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 626 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 627 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 628 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 629 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 630 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 631 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 632 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 633 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 634 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 635 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 636 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 637 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 638 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 639 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 640 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 641 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 642 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 643 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 644 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 645 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 646 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 647 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 648 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 649 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 650 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 651 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 652 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 653 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 654 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 655 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 656 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 657 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 658 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 659 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 660 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 661 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 662 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 663 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 664 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 665 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 666 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 667 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 668 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 669 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 670 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 671 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 672 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 673 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 674 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 675 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 676 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 677 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 678 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 679 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 680 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 681 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 682 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 683 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 684 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: You just don't know when to\n"
# 685 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "give up do you?\p"
# 686 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With Kyogre by my side, Team Aqua's\n"
# 687 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "vision will finally come to pass.\p"
# 688 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Together we will end Groudon's\n"
# 689 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "drought, bringing rainfall, high seas,\l"
# 690 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and peace to people and Pokémon alike.\p"
# 691 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The final obstacles in my way are\n"
# 692 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "yourselves.\p"
# 693 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But not for much longer.$"
# 694 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 695 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 696 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
# 697 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 698 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 699 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 700 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Behold!\p"
# 701 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 702 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient Pokémon Kyogre…!\p"
# 703 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 704 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…\p"
# 705 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 706 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this Red Orb, I will awaken Kyogre…$"
# 707 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 708 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 709 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
# 710 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 711 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 712 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 713 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 714 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 715 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 716 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 717 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 718 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 719 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 720 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Remarkable…\p"
# 721 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 722 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted to be able to\l"
# 723 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "stand up to Kyogre.\p"
# 724 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But this matters not, for I have this\n"
# 725 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "in my possession!\p"
# 726 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this Red Orb, I can still control\n"
# 727 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Kyogre and…$"
# 728 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 729 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 730 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB suddenly began shining\n"
# 731 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 732 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 733 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 734 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: What?!\p"
# 735 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't command this.\p"
# 736 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the Red Orb…\n"
# 737 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did Kyogre go?$"
# 738 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 739 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 740 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hm? It's a message from our\n"
# 741 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "members outside…$"
# 742 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 743 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 744 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Yes, what is it?\p"
# 745 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 746 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 747 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Good… That should have happened.\n"
# 748 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That is why we awakened Kyogre,\l"
# 749 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to realize Team Aqua's vision of\l"
# 750 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "expanding the sea.\p"
# 751 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 752 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 753 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 754 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That can't be…\n"
# 755 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's just not possible…\p"
# 756 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 757 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 758 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 759 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 760 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: There's something wrong…\p"
# 761 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The Red Orb is supposed to awaken\n"
# 762 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and control Kyogre\p"
# 763 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But… Why?\n"
# 764 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did Kyogre disappear?\p"
# 765 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why?!$"
# 766 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 767 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 768 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: What have you wrought?\p"
# 769 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie… You've finally awoken Kyogre,\n"
# 770 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 771 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 772 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 773 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 774 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 775 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 776 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 777 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: W-what?!\n"
# 778 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 779 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It was you, Team Magma, that first\n"
# 780 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "released Groudon!\p"
# 781 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So long as I have this Red Orb,\n"
# 782 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control Kyogre\p"
# 783 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control it…$"
# 784 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 785 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 786 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: We don't have the time to\n"
# 787 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 788 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\p"
# 789 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\n"
# 790 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 791 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 792 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 793 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: {PLAYER}, Emmie, come on, you\n"
# 794 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "have to get out of here, too!$"
