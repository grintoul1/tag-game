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
	setvar VAR_PARTNER_EMMIE_STATE, 60
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ShellyPostBattle::
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	faceplayer
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_MattPostBattle::
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	faceplayer
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MattPostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KnockedUp:
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KnockedDown:
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_down
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyDefeat:
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "If only you were on our side…$"
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MattDefeat:
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's like the woods all over again…$"
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ShellyMovePostBattle:
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_right
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MattPostBattle:
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: We may have lost the battle,\n"
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "but ultimately we're still the winners.$"
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyPostBattle:
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: With the power of Kyogre, you\n"
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "will not defeat Archie.$"
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MattNotGettingOffLightly:
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Matt: You're not getting off lightly\n"
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "though.\p"
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Us four, we have a score to settle, and\n"
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "we're a long way from Petalburg Woods!$"
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyItIsDone:
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: It is done. Archie now\n"
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "controls the legendary Pokémon Kyogre!$"
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PanToAction:
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_southeast
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_southeast
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_southeast
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_southeast
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_southeast
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
	walk_down
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ReturnFromAction:
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
	walk_up
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_northwest
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_northwest
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_northwest
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_northwest
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_diag_northwest
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyThisHasToHappen:
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: You're not getting through us\n"
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "before Archie makes it to Kyogre.\p"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "After Team Magma released Groudon,\n"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "this became more than a mere vision\l"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "for Team Aqua, it's now a necessity.\p"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Balance will be brought and you can't\n"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "stop us. Observe.$"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachKyogre1:
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproach2:
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ShellyApproach1:
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_up
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ShellyWeWillStall:
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly: We are too close to stop now.\p"
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Go. We will stall them.$"
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouAgain:
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: You…\p"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why do you insist on pursuing us\n"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "even here?\p"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You have seen the horror Team Magma\n"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "have brought to the region.\p"
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Do you not see that balance must be\n"
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "restored?\p"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You will not stop me.$"
# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerApproach1:
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproach1:
# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_down
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieKnockedBack:
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_right
# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_left
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_left
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_Archie::
# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Room9_EventScript_PlayerApproachArchieEast
# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Room9_EventScript_PlayerApproachArchieWest
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Room9_EventScript_PlayerApproachArchieNorth
# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 353 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 354 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 355 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 356 "data/maps/SeafloorCavern_Room9/scripts.pory"
	faceplayer
# 357 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 358 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 359 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 360 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_Room9_EventScript_ArchieDoMultiBattle
# 361 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 362 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 363 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieDoMultiBattle::
# 365 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_NONE, TRUE
# 366 "data/maps/SeafloorCavern_Room9/scripts.pory"
	multi_2p_vs_1 TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat, PARTNER_EMMIE
# 367 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_RESULT
# 368 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_ArchieVictory
# 369 "data/maps/SeafloorCavern_Room9/scripts.pory"
	fadescreen FADE_TO_BLACK
# 370 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special SetCB2WhiteOut
# 371 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 372 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 373 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieVictory::
# 374 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 375 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 376 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 377 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, SeafloorCavern_Room9_Movement_ArchieKnockedBack
# 378 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 379 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 380 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 381 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
# 382 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 383 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 384 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 385 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 386 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_QuestionMark
# 387 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 388 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 389 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 390 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 391 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 392 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 393 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 394 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 395 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 396 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 397 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 398 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 399 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 400 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 401 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 402 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 403 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 404 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 405 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 406 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 407 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 408 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 409 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 410 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 411 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 412 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 413 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 414 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 415 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 416 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 417 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 418 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 419 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
# 420 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 421 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 422 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 423 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 424 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 425 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 426 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 427 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 428 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 429 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 430 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 431 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 432 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 433 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 434 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 435 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 436 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 437 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 438 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 439 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 440 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 441 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 442 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 443 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 444 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 445 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 446 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 447 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 448 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 449 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
# 450 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 451 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 452 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 454 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 456 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 458 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 459 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 460 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 461 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 462 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 463 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 464 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 465 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_ABNORMAL_WEATHER_SUN
# 466 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 467 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_ABNORMAL_WEATHER_RAIN
# 468 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 469 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 470 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_LEVEL_CAP, 88
# 471 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 472 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 61
# 473 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 474 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 475 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 476 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 477 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 478 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 479 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 480 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 481 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 482 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 483 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 484 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 485 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_PlayerApproachArchieEast::
# 486 "data/maps/SeafloorCavern_Room9/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 487 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 16, SeafloorCavern_Room9_EventScript_ApproachArchieEast1
# 488 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 15, SeafloorCavern_Room9_EventScript_ApproachArchieEast2
# 489 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 490 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 491 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieEast1::
# 492 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerArchieStart2
# 493 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart6
# 494 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 495 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 496 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieEast2::
# 497 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerArchieStart3
# 498 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart7
# 499 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 500 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 501 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart7:
# 502 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 503 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 504 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 505 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 506 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 507 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 508 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart6:
# 509 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 510 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 511 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 512 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 513 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 514 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 515 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerArchieStart2:
# 516 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 517 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 518 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 519 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 520 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 521 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerArchieStart3:
# 522 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 523 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 524 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 525 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 526 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 527 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 528 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 529 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_PlayerApproachArchieWest::
# 530 "data/maps/SeafloorCavern_Room9/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 531 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 18, SeafloorCavern_Room9_EventScript_ApproachArchieWest1
# 532 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 19, SeafloorCavern_Room9_EventScript_ApproachArchieWest2
# 533 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 534 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 535 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieWest1::
# 536 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart4
# 537 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 538 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 539 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieWest2::
# 540 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart5
# 541 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 542 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 543 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart5:
# 544 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 545 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 546 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 547 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 548 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 549 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 550 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart4:
# 551 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 552 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 553 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 554 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 555 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_PlayerApproachArchieNorth::
# 556 "data/maps/SeafloorCavern_Room9/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 557 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 18, SeafloorCavern_Room9_EventScript_ApproachArchieNorth1
# 558 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 17, SeafloorCavern_Room9_EventScript_ApproachArchieNorth2
# 559 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call_if_eq VAR_TEMP_3, 16, SeafloorCavern_Room9_EventScript_ApproachArchieNorth3
# 560 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 561 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 562 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieNorth1::
# 563 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart1
# 564 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 565 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 566 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieNorth2::
# 567 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart2
# 568 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerApproachArchieStart1
# 569 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 570 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 571 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ApproachArchieNorth3::
# 572 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart3
# 573 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerApproachArchieStart1
# 574 "data/maps/SeafloorCavern_Room9/scripts.pory"
	return
# 575 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 576 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart3:
# 577 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 578 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 579 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 580 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 581 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart2:
# 582 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 583 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 584 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 585 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_EmmieApproachArchieStart1:
# 586 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 587 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 588 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 589 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 590 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerApproachArchieStart1:
# 591 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 592 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 593 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_left
# 594 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 595 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 596 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerApproachArchieNorth:
# 597 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 598 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 599 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 600 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 601 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerApproachArchieWest:
# 602 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 603 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 604 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 605 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_up
# 606 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 607 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 608 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 609 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
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
	walk_right
# 616 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 617 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 618 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 619 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 620 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 621 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 622 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 623 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 624 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 625 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 626 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 627 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_right
# 628 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 629 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 630 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 631 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 632 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 633 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 634 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 635 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 636 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 637 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 638 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 639 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 640 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 641 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 642 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 643 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 644 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 645 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 646 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 647 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 648 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 649 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 650 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 651 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 652 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 653 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 654 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 655 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 656 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 657 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 658 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 659 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 660 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 661 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 662 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 663 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 664 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 665 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 666 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 667 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 668 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 669 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 670 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 671 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 672 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 673 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 674 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 675 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 676 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 677 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 678 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 679 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 680 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 681 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 682 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 683 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 684 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 685 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 686 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 687 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: You just don't know when to\n"
# 688 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "give up do you?\p"
# 689 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With Kyogre by my side, Team Aqua's\n"
# 690 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "vision will finally come to pass.\p"
# 691 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Together we will end Groudon's\n"
# 692 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "drought, bringing rainfall, high seas,\l"
# 693 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and peace to people and Pokémon alike.\p"
# 694 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The final obstacles in my way are\n"
# 695 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "yourselves.\p"
# 696 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But not for much longer.$"
# 697 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 698 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 699 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
# 700 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 701 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 702 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 703 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Behold!\p"
# 704 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 705 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient Pokémon Kyogre…!\p"
# 706 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 707 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…\p"
# 708 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 709 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this Red Orb, I will awaken Kyogre…$"
# 710 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 711 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 712 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
# 713 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 714 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 715 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 716 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 717 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 718 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 719 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 720 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 721 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 722 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 723 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Remarkable…\p"
# 724 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 725 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted to be able to\l"
# 726 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "stand up to Kyogre.\p"
# 727 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But this matters not, for I have this\n"
# 728 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "in my possession!\p"
# 729 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this Red Orb, I can still control\n"
# 730 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Kyogre and…$"
# 731 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 732 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 733 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB suddenly began shining\n"
# 734 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 735 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 736 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 737 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: What?!\p"
# 738 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't command this.\p"
# 739 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the Red Orb…\n"
# 740 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did Kyogre go?$"
# 741 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 742 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 743 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hm? It's a message from our\n"
# 744 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "members outside…$"
# 745 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 746 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 747 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Yes, what is it?\p"
# 748 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 749 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 750 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Good… That should have happened.\n"
# 751 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That is why we awakened Kyogre,\l"
# 752 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to realize Team Aqua's vision of\l"
# 753 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "expanding the sea.\p"
# 754 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 755 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 756 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 757 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That can't be…\n"
# 758 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's just not possible…\p"
# 759 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 760 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 761 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 762 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 763 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: There's something wrong…\p"
# 764 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The Red Orb is supposed to awaken\n"
# 765 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and control Kyogre\p"
# 766 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But… Why?\n"
# 767 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did Kyogre disappear?\p"
# 768 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why?!$"
# 769 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 770 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 771 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: What have you wrought?\p"
# 772 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie… You've finally awoken Kyogre,\n"
# 773 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 774 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 775 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 776 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 777 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 778 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 779 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 780 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: W-what?!\n"
# 781 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 782 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It was you, Team Magma, that first\n"
# 783 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "released Groudon!\p"
# 784 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So long as I have this Red Orb,\n"
# 785 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control Kyogre\p"
# 786 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control it…$"
# 787 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 788 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 789 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: We don't have the time to\n"
# 790 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 791 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\p"
# 792 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\n"
# 793 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 794 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 795 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 796 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: {PLAYER}, Emmie, come on, you\n"
# 797 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "have to get out of here, too!$"
