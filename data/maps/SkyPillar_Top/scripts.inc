# 1 "data/maps/SkyPillar_Top/scripts.pory"

# 2 "data/maps/SkyPillar_Top/scripts.pory"

# 3 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_MapScripts::
# 4 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
# 5 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
# 6 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_OnWarp
# 7 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_Top_OnFrame
# 8 "data/maps/SkyPillar_Top/scripts.pory"
	.byte 0
# 9 "data/maps/SkyPillar_Top/scripts.pory"

# 10 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnFrame:
# 11 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 65, SkyPillar_Top_EventScript_ProgressEmmieState
# 12 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 13 "data/maps/SkyPillar_Top/scripts.pory"

# 14 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ProgressEmmieState::
# 15 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 66
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 17 "data/maps/SkyPillar_Top/scripts.pory"

# 18 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume:
# 19 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
# 20 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 21 "data/maps/SkyPillar_Top/scripts.pory"

# 22 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 23 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 24 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 25 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 26 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 27 "data/maps/SkyPillar_Top/scripts.pory"

# 28 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition:
# 29 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 8, SkyPillar_Top_EventScript_SetCleanLayout
# 30 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 7, SkyPillar_Top_EventScript_SetWeather
# 31 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 7, SkyPillar_Top_EventScript_HideRayquaza
# 32 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 9, SkyPillar_Top_EventScript_TryShowRayquaza
# 33 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_MattTabithaPos
# 34 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_LeaderVars
# 35 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_LeaderPos
# 36 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 37 "data/maps/SkyPillar_Top/scripts.pory"

# 38 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_HideRayquaza::
# 39 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_RAYQUAZA_STILL
# 40 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 41 "data/maps/SkyPillar_Top/scripts.pory"

# 42 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetWeather:
# 43 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_ABNORMAL
# 44 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 46 "data/maps/SkyPillar_Top/scripts.pory"

# 47 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaPos::
# 48 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectxyperm LOCALID_SKYPILLAR_MATT, 12, 21
# 49 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectxyperm LOCALID_SKYPILLAR_TABITHA, 12, 19
# 50 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 51 "data/maps/SkyPillar_Top/scripts.pory"

# 52 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_LeaderPos::
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectxyperm VAR_0x8003, 12, 9
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype VAR_0x8003, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 56 "data/maps/SkyPillar_Top/scripts.pory"

# 57 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_LeaderVars::
# 58 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieVars
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieVars
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 61 "data/maps/SkyPillar_Top/scripts.pory"

# 62 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 66 "data/maps/SkyPillar_Top/scripts.pory"

# 67 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 70 "data/maps/SkyPillar_Top/scripts.pory"

# 71 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 72 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 74 "data/maps/SkyPillar_Top/scripts.pory"

# 75 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 76 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 77 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 78 "data/maps/SkyPillar_Top/scripts.pory"

# 79 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieVars::
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8002, LOCALID_SKYPILLAR_MAXIE
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8003, LOCALID_SKYPILLAR_ARCHIE
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 83 "data/maps/SkyPillar_Top/scripts.pory"

# 84 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieVars::
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8002, LOCALID_SKYPILLAR_ARCHIE
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8003, LOCALID_SKYPILLAR_MAXIE
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 88 "data/maps/SkyPillar_Top/scripts.pory"

# 89 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Finale::
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_WalkUp
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER SkyPillar_Top_Movement_FinaleEmmieApproach
# 92 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 93 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanToAction
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_FinaleMaxieMusic
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_FinaleArchieMusic
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkUp
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchiePleadWithMaxie
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxiePleadWithArchie
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, SkyPillar_Top_Movement_FinaleGoodLeaderPushedBack
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkSlowDown
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieFailToSee
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieFailToSee
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanToAction
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 116 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkUp
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_THROW
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaEnterPokeball
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 131 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanFromAction
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkDown
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	delay 360
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_DROUGHT
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieSeeHowControl
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieSeeHowControl
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterRight
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0 
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_BOUNCE_2
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_OPEN
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE_INVISIBLE, SkyPillar_Top_Movement_RayquazaExitPokeball
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	addobject LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_NONE
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanFromAction
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieWeWillSubdue
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieWeWillSubdue
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	delay 12
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterDown
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchiePleaseHelp
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxiePleaseHelp
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachPlayer
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 180 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_EmmieDefeatedMaxie
# 182 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_EmmieDefeatedArchie
# 183 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 184 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 185 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterDown
# 186 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 187 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieSoYoullHelp
# 188 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieSoYoullHelp
# 189 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowUp
# 190 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, SkyPillar_Top_Movement_GoodLeaderMoveForPlayer
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 192 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 193 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 194 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieYouStillDefy
# 195 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieYouStillDefy
# 196 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 197 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 198 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkSlowDown
# 199 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, SkyPillar_Top_Movement_GoodLeaderApproachEvilLeader
# 200 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 201 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_Maxie_ChoosePartyForMultiBattle
# 202 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_Archie_ChoosePartyForMultiBattle
# 203 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 204 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 205 "data/maps/SkyPillar_Top/scripts.pory"

# 206 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Archie_ChoosePartyForMultiBattle::
# 207 "data/maps/SkyPillar_Top/scripts.pory"
	special SavePlayerParty
# 208 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 209 "data/maps/SkyPillar_Top/scripts.pory"
	special ChooseHalfPartyForBattle
# 210 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 211 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SkyPillar_Top_EventScript_ArchieDoMultiBattle
# 212 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieYouWillNotStopMe, MSGBOX_AUTOCLOSE
# 213 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_Archie_ChoosePartyForMultiBattle
# 214 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 215 "data/maps/SkyPillar_Top/scripts.pory"

# 216 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieDoMultiBattle::
# 217 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_NONE, TRUE
# 218 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2_vs_1 TRAINER_ARCHIE_SKY_PILLAR, SkyPillar_Top_Text_EvilLeaderDefeat, PARTNER_MAXIE_SKY_PILLAR
# 219 "data/maps/SkyPillar_Top/scripts.pory"
	special LoadPlayerParty
# 220 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 221 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_FinaleVictory
# 222 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 223 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 224 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 225 "data/maps/SkyPillar_Top/scripts.pory"

# 226 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Maxie_ChoosePartyForMultiBattle::
# 227 "data/maps/SkyPillar_Top/scripts.pory"
	special SavePlayerParty
# 228 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 229 "data/maps/SkyPillar_Top/scripts.pory"
	special ChooseHalfPartyForBattle
# 230 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 231 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SkyPillar_Top_EventScript_MaxieDoMultiBattle
# 232 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieYouWillNotStopMe, MSGBOX_AUTOCLOSE
# 233 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_Maxie_ChoosePartyForMultiBattle
# 234 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 235 "data/maps/SkyPillar_Top/scripts.pory"

# 236 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieDoMultiBattle::
# 237 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_NONE, TRUE
# 238 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2_vs_1 TRAINER_MAXIE_SKY_PILLAR, SkyPillar_Top_Text_EvilLeaderDefeat, PARTNER_ARCHIE_SKY_PILLAR
# 239 "data/maps/SkyPillar_Top/scripts.pory"
	special LoadPlayerParty
# 240 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 241 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_FinaleVictory
# 242 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 243 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 244 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 245 "data/maps/SkyPillar_Top/scripts.pory"

# 246 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleVictory::
# 247 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 248 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, SkyPillar_Top_Movement_EvilLeaderKnockedBack
# 249 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_FaceUp
# 250 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 251 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieHowCanThisBe
# 252 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieHowCanThisBe
# 253 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 254 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 255 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 256 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 257 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 258 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 259 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 260 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 261 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 262 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 263 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_QuestionMark
# 264 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_QuestionMark
# 265 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 266 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_FaceRight
# 267 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_FaceRight
# 268 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 269 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 270 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 271 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 272 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 273 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 274 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 275 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 276 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 277 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 278 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 279 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 280 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE, SkyPillar_Top_Movement_RayquazaFlyOff
# 281 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 282 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE
# 283 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE_INVISIBLE
# 284 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 285 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_ABNORMAL
# 286 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 287 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 289 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 290 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_FaceUp
# 291 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 292 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 293 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 294 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieLostControl
# 295 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieLostControl
# 296 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterUp
# 297 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 298 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieDoYouSee
# 299 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieDoYouSee
# 300 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 301 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 302 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieBeenMisguided
# 303 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieBeenMisguided
# 304 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterDown
# 305 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 306 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieThankYou
# 307 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieThankYou
# 308 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterUp
# 309 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 310 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieComeMaxie
# 311 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieComeArchie
# 312 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_EXIT
# 313 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 314 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 315 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_ARCHIE
# 316 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_MAXIE
# 317 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_TABITHA
# 318 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_SHELLY
# 319 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_MATT
# 320 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_COURTNEY
# 321 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 322 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 68
# 323 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_LEVEL_CAP, 90
# 324 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_SKY_PILLAR_EVIL_TEAMS
# 325 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_ABNORMAL_WEATHER_RAIN
# 326 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 327 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_CUTSCENE_INVISIBLE
# 329 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 330 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 331 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 332 "data/maps/SkyPillar_Top/scripts.pory"

# 333 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EvilLeaderDefeat:
# 334 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This should not be possible!$"
# 335 "data/maps/SkyPillar_Top/scripts.pory"

# 336 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieComeMaxie:
# 337 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Come, Maxie.\p"
# 338 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This situation is of our creation.\p"
# 339 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It is our responsibility to ensure\n"
# 340 "data/maps/SkyPillar_Top/scripts.pory"
	.string "it comes to a close.$"
# 341 "data/maps/SkyPillar_Top/scripts.pory"

# 342 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieComeArchie:
# 343 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Come, Archie.\p"
# 344 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This situation is of our creation.\p"
# 345 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It is our responsibility to ensure\n"
# 346 "data/maps/SkyPillar_Top/scripts.pory"
	.string "it comes to a close.$"
# 347 "data/maps/SkyPillar_Top/scripts.pory"

# 348 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieComeArchie::
# 349 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieComeArchie, MSGBOX_DEFAULT
# 350 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 351 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 352 "data/maps/SkyPillar_Top/scripts.pory"

# 353 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieComeMaxie::
# 354 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieComeMaxie, MSGBOX_DEFAULT
# 355 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 356 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 357 "data/maps/SkyPillar_Top/scripts.pory"

# 358 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieThankYou:
# 359 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: {PLAYER}, thank you, I don't\n"
# 360 "data/maps/SkyPillar_Top/scripts.pory"
	.string "believe that I could have defeated\l"
# 361 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie and that Pokémon alone.\p"
# 362 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's time for me to return to\n"
# 363 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Sootopolis.\p"
# 364 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I expect that you will be close\n"
# 365 "data/maps/SkyPillar_Top/scripts.pory"
	.string "behind, as you always are.$"
# 366 "data/maps/SkyPillar_Top/scripts.pory"

# 367 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieThankYou:
# 368 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: {PLAYER}, thank you, I don't\n"
# 369 "data/maps/SkyPillar_Top/scripts.pory"
	.string "believe that I could have defeated\l"
# 370 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie and that Pokémon alone.\p"
# 371 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's time for me to return to\n"
# 372 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Sootopolis.\p"
# 373 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I expect that you will be close\n"
# 374 "data/maps/SkyPillar_Top/scripts.pory"
	.string "behind, as you always are.$"
# 375 "data/maps/SkyPillar_Top/scripts.pory"

# 376 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieThankYou::
# 377 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieThankYou, MSGBOX_DEFAULT
# 378 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 379 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 380 "data/maps/SkyPillar_Top/scripts.pory"

# 381 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieThankYou::
# 382 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieThankYou, MSGBOX_DEFAULT
# 383 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 384 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 385 "data/maps/SkyPillar_Top/scripts.pory"

# 386 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieBeenMisguided:
# 387 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Could it really be that I\n"
# 388 "data/maps/SkyPillar_Top/scripts.pory"
	.string "have been misguided all this time…?$"
# 389 "data/maps/SkyPillar_Top/scripts.pory"

# 390 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieBeenMisguided:
# 391 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Could it really be that I\n"
# 392 "data/maps/SkyPillar_Top/scripts.pory"
	.string "have been misguided all this time…?$"
# 393 "data/maps/SkyPillar_Top/scripts.pory"

# 394 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieBeenMisguided::
# 395 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieBeenMisguided, MSGBOX_DEFAULT
# 396 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 397 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 398 "data/maps/SkyPillar_Top/scripts.pory"

# 399 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieBeenMisguided::
# 400 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieBeenMisguided, MSGBOX_DEFAULT
# 401 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 402 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 403 "data/maps/SkyPillar_Top/scripts.pory"

# 404 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieDoYouSee:
# 405 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Do you see now, Maxie?\p"
# 406 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We have tampered with forces beyond\n"
# 407 "data/maps/SkyPillar_Top/scripts.pory"
	.string "our control and our understanding.\p"
# 408 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Our only hope is for that Pokémon\n"
# 409 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to be heading to Sootopolis and\l"
# 410 "data/maps/SkyPillar_Top/scripts.pory"
	.string "putting an end to this chaos.$"
# 411 "data/maps/SkyPillar_Top/scripts.pory"

# 412 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieDoYouSee:
# 413 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Do you see now, Archie?\p"
# 414 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We have tampered with forces beyond\n"
# 415 "data/maps/SkyPillar_Top/scripts.pory"
	.string "our control and our understanding.\p"
# 416 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Our only hope is for that Pokémon\n"
# 417 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to be heading to Sootopolis and\l"
# 418 "data/maps/SkyPillar_Top/scripts.pory"
	.string "putting an end to this chaos.$"
# 419 "data/maps/SkyPillar_Top/scripts.pory"

# 420 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieDoYouSee::
# 421 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieDoYouSee, MSGBOX_DEFAULT
# 422 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 423 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 424 "data/maps/SkyPillar_Top/scripts.pory"

# 425 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieDoYouSee::
# 426 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieDoYouSee, MSGBOX_DEFAULT
# 427 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 428 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 429 "data/maps/SkyPillar_Top/scripts.pory"

# 430 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieLostControl:
# 431 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: What is this…\n"
# 432 "data/maps/SkyPillar_Top/scripts.pory"
	.string "My control is broken?\p"
# 433 "data/maps/SkyPillar_Top/scripts.pory"
	.string "First Kyogre, and now here too…$"
# 434 "data/maps/SkyPillar_Top/scripts.pory"

# 435 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieLostControl:
# 436 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: What is this…\n"
# 437 "data/maps/SkyPillar_Top/scripts.pory"
	.string "My control is broken?\p"
# 438 "data/maps/SkyPillar_Top/scripts.pory"
	.string "First Groudon, and now here too…$"
# 439 "data/maps/SkyPillar_Top/scripts.pory"

# 440 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieLostControl::
# 441 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieLostControl, MSGBOX_DEFAULT
# 442 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 443 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 444 "data/maps/SkyPillar_Top/scripts.pory"

# 445 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieLostControl::
# 446 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieLostControl, MSGBOX_DEFAULT
# 447 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 448 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 449 "data/maps/SkyPillar_Top/scripts.pory"

# 450 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieHowCanThisBe:
# 451 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: How can this be?!\p"
# 452 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Even with the power of this\n"
# 453 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Pokémon, I am still defeated?\p"
# 454 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This changes nothing. As long\n"
# 455 "data/maps/SkyPillar_Top/scripts.pory"
	.string "as I still… … …$"
# 456 "data/maps/SkyPillar_Top/scripts.pory"

# 457 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieHowCanThisBe:
# 458 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: How can this be?!\p"
# 459 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Even with the power of this\n"
# 460 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Pokémon, I am still defeated?\p"
# 461 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This changes nothing. As long\n"
# 462 "data/maps/SkyPillar_Top/scripts.pory"
	.string "as I still… … …$"
# 463 "data/maps/SkyPillar_Top/scripts.pory"

# 464 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieHowCanThisBe::
# 465 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieHowCanThisBe, MSGBOX_DEFAULT
# 466 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 467 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 468 "data/maps/SkyPillar_Top/scripts.pory"

# 469 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieHowCanThisBe::
# 470 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieHowCanThisBe, MSGBOX_DEFAULT
# 471 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 472 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 473 "data/maps/SkyPillar_Top/scripts.pory"

# 474 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EvilLeaderKnockedBack:
# 475 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 476 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 477 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 478 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 479 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 480 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 481 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 482 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 483 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_down
# 484 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 485 "data/maps/SkyPillar_Top/scripts.pory"

# 486 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_GoodLeaderApproachEvilLeader:
# 487 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 488 "data/maps/SkyPillar_Top/scripts.pory"
	face_left
# 489 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 490 "data/maps/SkyPillar_Top/scripts.pory"

# 491 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieYouWillNotStopMe:
# 492 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: You will not stop me.$"
# 493 "data/maps/SkyPillar_Top/scripts.pory"

# 494 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieYouWillNotStopMe:
# 495 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: You will not stop me.$"
# 496 "data/maps/SkyPillar_Top/scripts.pory"

# 497 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieYouStillDefy:
# 498 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Even now you still defy me?\p"
# 499 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It matters not. I will shape the world\n"
# 500 "data/maps/SkyPillar_Top/scripts.pory"
	.string "into one of Team Aqua's design.\p"
# 501 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You will not stand in my way.$"
# 502 "data/maps/SkyPillar_Top/scripts.pory"

# 503 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieYouStillDefy:
# 504 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Even now you still defy me?\p"
# 505 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It matters not. I will shape the world\n"
# 506 "data/maps/SkyPillar_Top/scripts.pory"
	.string "into one of Team Magma's design.\p"
# 507 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You will not stand in my way.$"
# 508 "data/maps/SkyPillar_Top/scripts.pory"

# 509 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieYouStillDefy::
# 510 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieYouStillDefy, MSGBOX_DEFAULT
# 511 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 512 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 513 "data/maps/SkyPillar_Top/scripts.pory"

# 514 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieYouStillDefy::
# 515 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieYouStillDefy, MSGBOX_DEFAULT
# 516 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 517 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 518 "data/maps/SkyPillar_Top/scripts.pory"

# 519 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_GoodLeaderMoveForPlayer:
# 520 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_right
# 521 "data/maps/SkyPillar_Top/scripts.pory"
	face_up
# 522 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 523 "data/maps/SkyPillar_Top/scripts.pory"

# 524 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieSoYoullHelp:
# 525 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: So you will help me?\p"
# 526 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\n"
# 527 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\p"
# 528 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Thank you.\p"
# 529 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Okay, let's do this.$"
# 530 "data/maps/SkyPillar_Top/scripts.pory"

# 531 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieSoYoullHelp:
# 532 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: So you will help me?\p"
# 533 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\n"
# 534 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\p"
# 535 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Thank you.\p"
# 536 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Okay, let's do this.$"
# 537 "data/maps/SkyPillar_Top/scripts.pory"

# 538 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieSoYoullHelp::
# 539 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieSoYoullHelp, MSGBOX_DEFAULT
# 540 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 541 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 542 "data/maps/SkyPillar_Top/scripts.pory"

# 543 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieSoYoullHelp::
# 544 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieSoYoullHelp, MSGBOX_DEFAULT
# 545 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 546 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 547 "data/maps/SkyPillar_Top/scripts.pory"

# 548 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_EmmieDefeatedMaxie::
# 549 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieDefeatedMaxie, MSGBOX_DEFAULT
# 550 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 551 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 552 "data/maps/SkyPillar_Top/scripts.pory"

# 553 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_EmmieDefeatedArchie::
# 554 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieDefeatedArchie, MSGBOX_DEFAULT
# 555 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 556 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 557 "data/maps/SkyPillar_Top/scripts.pory"

# 558 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieDefeatedArchie:
# 559 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: {PLAYER}, you've got this.\p"
# 560 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Together we've defeated Archie even\n"
# 561 "data/maps/SkyPillar_Top/scripts.pory"
	.string "when he had the power of Kyogre\l"
# 562 "data/maps/SkyPillar_Top/scripts.pory"
	.string "on his side.\p"
# 563 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You've also tackled both Team Aqua\n"
# 564 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and Team Magma without my help.\p"
# 565 "data/maps/SkyPillar_Top/scripts.pory"
	.string "After watching you and Archie\n"
# 566 "data/maps/SkyPillar_Top/scripts.pory"
	.string "defeat Maxie on Mt Pyre, I know\l"
# 567 "data/maps/SkyPillar_Top/scripts.pory"
	.string "that you can succeed here too.\p"
# 568 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Help Maxie defeat Archie and all\n"
# 569 "data/maps/SkyPillar_Top/scripts.pory"
	.string "this can finally end.\p"
# 570 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I believe in you!$"
# 571 "data/maps/SkyPillar_Top/scripts.pory"

# 572 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieDefeatedMaxie:
# 573 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: {PLAYER}, you've got this.\p"
# 574 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Together we've defeated Maxie even\n"
# 575 "data/maps/SkyPillar_Top/scripts.pory"
	.string "when he had the power of Groudon\l"
# 576 "data/maps/SkyPillar_Top/scripts.pory"
	.string "on his side.\p"
# 577 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You've also tackled both Team Aqua\n"
# 578 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and Team Magma without my help.\p"
# 579 "data/maps/SkyPillar_Top/scripts.pory"
	.string "After watching you and Maxie\n"
# 580 "data/maps/SkyPillar_Top/scripts.pory"
	.string "defeat Archie on Mt Pyre, I know\l"
# 581 "data/maps/SkyPillar_Top/scripts.pory"
	.string "that you can succeed here too.\p"
# 582 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Help Archie defeat Maxie and all\n"
# 583 "data/maps/SkyPillar_Top/scripts.pory"
	.string "this can finally end.\p"
# 584 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I believe in you!$"
# 585 "data/maps/SkyPillar_Top/scripts.pory"

# 586 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachPlayer:
# 587 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 588 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_right
# 589 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 590 "data/maps/SkyPillar_Top/scripts.pory"

# 591 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxiePleaseHelp:
# 592 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: {PLAYER}, Archie is refusing\n"
# 593 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to listen to reason.\p"
# 594 "data/maps/SkyPillar_Top/scripts.pory"
	.string "He is hell bent on using this Pokémon\n"
# 595 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to defeat Groudon and control Kyogre.\p"
# 596 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created was not \n"
# 597 "data/maps/SkyPillar_Top/scripts.pory"
	.string "part of my design.\p"
# 598 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I accept that I hold equal blame with\n"
# 599 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie, but I see now that we were\l"
# 600 "data/maps/SkyPillar_Top/scripts.pory"
	.string "playing with forces beyond our control.\p"
# 601 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I know that you do not trust me, but\n"
# 602 "data/maps/SkyPillar_Top/scripts.pory"
	.string "trust that I also want to stop Archie.\p"
# 603 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, help me stop Archie and together\n"
# 604 "data/maps/SkyPillar_Top/scripts.pory"
	.string "we can put an end to all this.$"
# 605 "data/maps/SkyPillar_Top/scripts.pory"

# 606 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchiePleaseHelp:
# 607 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: {PLAYER}, Maxie is refusing\n"
# 608 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to listen to reason.\p"
# 609 "data/maps/SkyPillar_Top/scripts.pory"
	.string "He is hell bent on using this Pokémon\n"
# 610 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to defeat Kyogre and control Groudon.\p"
# 611 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created was not \n"
# 612 "data/maps/SkyPillar_Top/scripts.pory"
	.string "part of my design.\p"
# 613 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I accept that I hold equal blame with\n"
# 614 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie, but I see now that we were\l"
# 615 "data/maps/SkyPillar_Top/scripts.pory"
	.string "playing with forces beyond our control.\p"
# 616 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I know that you do not trust me, but\n"
# 617 "data/maps/SkyPillar_Top/scripts.pory"
	.string "trust that I also want to stop Maxie.\p"
# 618 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, help me stop Maxie and together\n"
# 619 "data/maps/SkyPillar_Top/scripts.pory"
	.string "we can put an end to all this.$"
# 620 "data/maps/SkyPillar_Top/scripts.pory"

# 621 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchiePleaseHelp::
# 622 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchiePleaseHelp, MSGBOX_DEFAULT
# 623 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 624 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 625 "data/maps/SkyPillar_Top/scripts.pory"

# 626 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxiePleaseHelp::
# 627 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxiePleaseHelp, MSGBOX_DEFAULT
# 628 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 629 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 630 "data/maps/SkyPillar_Top/scripts.pory"

# 631 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieWeWillSubdue:
# 632 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Together we will subdue Groudon\n"
# 633 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and restrain the power of Kyogre.$"
# 634 "data/maps/SkyPillar_Top/scripts.pory"

# 635 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieWeWillSubdue:
# 636 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Together we will subdue Kyogre\n"
# 637 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and restrain the power of Groudon.$"
# 638 "data/maps/SkyPillar_Top/scripts.pory"

# 639 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieWeWillSubdue::
# 640 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieWeWillSubdue, MSGBOX_DEFAULT
# 641 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 642 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 643 "data/maps/SkyPillar_Top/scripts.pory"

# 644 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieWeWillSubdue::
# 645 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieWeWillSubdue, MSGBOX_DEFAULT
# 646 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 647 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 648 "data/maps/SkyPillar_Top/scripts.pory"

# 649 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaExitPokeball:
# 650 "data/maps/SkyPillar_Top/scripts.pory"
	exit_pokeball
# 651 "data/maps/SkyPillar_Top/scripts.pory"
	set_invisible
# 652 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 653 "data/maps/SkyPillar_Top/scripts.pory"

# 654 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieSeeHowControl:
# 655 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: See how this Pokémon eliminates\n"
# 656 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the effects of the weather distortion.\p"
# 657 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With its power, I can control Groudon's\n"
# 658 "data/maps/SkyPillar_Top/scripts.pory"
	.string "abilities.$"
# 659 "data/maps/SkyPillar_Top/scripts.pory"

# 660 "data/maps/SkyPillar_Top/scripts.pory"

# 661 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieSeeHowControl:
# 662 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: See how this Pokémon eliminates\n"
# 663 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the effects of the weather distortion.\p"
# 664 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With its power, I can control Kyogre's\n"
# 665 "data/maps/SkyPillar_Top/scripts.pory"
	.string "abilities.$"
# 666 "data/maps/SkyPillar_Top/scripts.pory"

# 667 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieSeeHowControl::
# 668 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieSeeHowControl, MSGBOX_DEFAULT
# 669 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 670 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 671 "data/maps/SkyPillar_Top/scripts.pory"

# 672 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieSeeHowControl::
# 673 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieSeeHowControl, MSGBOX_DEFAULT
# 674 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 675 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 676 "data/maps/SkyPillar_Top/scripts.pory"

# 677 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleCameraPanFromAction:
# 678 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 679 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 680 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 681 "data/maps/SkyPillar_Top/scripts.pory"

# 682 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaEnterPokeball:
# 683 "data/maps/SkyPillar_Top/scripts.pory"
	enter_pokeball
# 684 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 685 "data/maps/SkyPillar_Top/scripts.pory"

# 686 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieFailToSee::
# 687 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieFailToSee, MSGBOX_DEFAULT
# 688 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 689 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 690 "data/maps/SkyPillar_Top/scripts.pory"

# 691 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieFailToSee::
# 692 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieFailToSee, MSGBOX_DEFAULT
# 693 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 694 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 695 "data/maps/SkyPillar_Top/scripts.pory"

# 696 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieFailToSee:
# 697 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: As ever, Maxie, you fail to see\n"
# 698 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the bigger picture.\p"
# 699 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With the power of this Pokémon, Team\n"
# 700 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Aqua's world may not yet be lost.\p"
# 701 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Observe…$"
# 702 "data/maps/SkyPillar_Top/scripts.pory"

# 703 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieFailToSee:
# 704 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: As ever, Archie, you fail to see\n"
# 705 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the bigger picture.\p"
# 706 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With the power of this Pokémon, Team\n"
# 707 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Magma's world may not yet be lost.\p"
# 708 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Observe…$"
# 709 "data/maps/SkyPillar_Top/scripts.pory"

# 710 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleGoodLeaderPushedBack:
# 711 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 712 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 713 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 714 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 715 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 716 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 717 "data/maps/SkyPillar_Top/scripts.pory"

# 718 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchiePleadWithMaxie::
# 719 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchiePleadWithMaxie, MSGBOX_DEFAULT
# 720 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 721 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 722 "data/maps/SkyPillar_Top/scripts.pory"

# 723 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxiePleadWithArchie::
# 724 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxiePleadWithArchie, MSGBOX_DEFAULT
# 725 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 726 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 727 "data/maps/SkyPillar_Top/scripts.pory"

# 728 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxiePleadWithArchie:
# 729 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Archie, please, this has gone\n"
# 730 "data/maps/SkyPillar_Top/scripts.pory"
	.string "too far.\p"
# 731 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created… This is\n"
# 732 "data/maps/SkyPillar_Top/scripts.pory"
	.string "not the world Team Magma dreamed of.\p"
# 733 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This cannot be what you and Team Aqua\n"
# 734 "data/maps/SkyPillar_Top/scripts.pory"
	.string "want either?\p"
# 735 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The imbalance we have brought to the\n"
# 736 "data/maps/SkyPillar_Top/scripts.pory"
	.string "region must come to an end, but this\l"
# 737 "data/maps/SkyPillar_Top/scripts.pory"
	.string "isn't the way!$"
# 738 "data/maps/SkyPillar_Top/scripts.pory"

# 739 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchiePleadWithMaxie:
# 740 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Maxie, please, this has gone\n"
# 741 "data/maps/SkyPillar_Top/scripts.pory"
	.string "too far.\p"
# 742 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created… This is\n"
# 743 "data/maps/SkyPillar_Top/scripts.pory"
	.string "not the world Team Aqua dreamed of.\p"
# 744 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This cannot be what you and Team Magma\n"
# 745 "data/maps/SkyPillar_Top/scripts.pory"
	.string "want either?\p"
# 746 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The imbalance we have brought to the\n"
# 747 "data/maps/SkyPillar_Top/scripts.pory"
	.string "region must come to an end, but this\l"
# 748 "data/maps/SkyPillar_Top/scripts.pory"
	.string "isn't the way!$"
# 749 "data/maps/SkyPillar_Top/scripts.pory"

# 750 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleCameraPanToAction:
# 751 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 752 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 753 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 754 "data/maps/SkyPillar_Top/scripts.pory"

# 755 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleMaxieMusic::
# 756 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 757 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 758 "data/maps/SkyPillar_Top/scripts.pory"

# 759 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleArchieMusic::
# 760 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 761 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 762 "data/maps/SkyPillar_Top/scripts.pory"

# 763 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleEmmieApproach:
# 764 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 765 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 766 "data/maps/SkyPillar_Top/scripts.pory"
	face_up
# 767 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 768 "data/maps/SkyPillar_Top/scripts.pory"

# 769 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 770 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 771 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 772 "data/maps/SkyPillar_Top/scripts.pory"

# 773 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachMatt:
# 774 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 775 "data/maps/SkyPillar_Top/scripts.pory"
	walk_down
# 776 "data/maps/SkyPillar_Top/scripts.pory"
	face_left
# 777 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 778 "data/maps/SkyPillar_Top/scripts.pory"

# 779 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattLeaveWellAlone:
# 780 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: You two, again!\p"
# 781 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You just don't know when to quit\n"
# 782 "data/maps/SkyPillar_Top/scripts.pory"
	.string "do you?$"
# 783 "data/maps/SkyPillar_Top/scripts.pory"

# 784 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaTenacious:
# 785 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Heh… Tenacious aren't you…$"
# 786 "data/maps/SkyPillar_Top/scripts.pory"

# 787 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattBeenHereBefore:
# 788 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: We've been here before…\p"
# 789 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Let's get it right this time.$"
# 790 "data/maps/SkyPillar_Top/scripts.pory"

# 791 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaWhyNot:
# 792 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Sure, why not?$"
# 793 "data/maps/SkyPillar_Top/scripts.pory"

# 794 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaApproachPlayer:
# 795 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 796 "data/maps/SkyPillar_Top/scripts.pory"
	face_right
# 797 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 798 "data/maps/SkyPillar_Top/scripts.pory"

# 799 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaNotLikePyre:
# 800 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Hehehe… This isn't going to\n"
# 801 "data/maps/SkyPillar_Top/scripts.pory"
	.string "end like Mt Pyre!$"
# 802 "data/maps/SkyPillar_Top/scripts.pory"

# 803 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattDefeat:
# 804 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I concede. Team Aqua may never be able\n"
# 805 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to hold you back…$"
# 806 "data/maps/SkyPillar_Top/scripts.pory"

# 807 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaDefeat:
# 808 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Hehe… Hehehehe…$"
# 809 "data/maps/SkyPillar_Top/scripts.pory"

# 810 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaMattKnockedBack:
# 811 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 812 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_left
# 813 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 814 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 815 "data/maps/SkyPillar_Top/scripts.pory"

# 816 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattPostBattle:
# 817 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: Whatever happens now is beyond\n"
# 818 "data/maps/SkyPillar_Top/scripts.pory"
	.string "my control.$"
# 819 "data/maps/SkyPillar_Top/scripts.pory"

# 820 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaPostBattle:
# 821 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Nothing you say or do will\n"
# 822 "data/maps/SkyPillar_Top/scripts.pory"
	.string "ever weaken my faith in Maxie…$"
# 823 "data/maps/SkyPillar_Top/scripts.pory"

# 824 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_MattReturnToPosition:
# 825 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 826 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 827 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 828 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
# 829 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 830 "data/maps/SkyPillar_Top/scripts.pory"

# 831 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaReturnToPosition:
# 832 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 833 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
# 834 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 835 "data/maps/SkyPillar_Top/scripts.pory"

# 836 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieNearlyThere:
# 837 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: C'mon, {PLAYER}, we're almost\n"
# 838 "data/maps/SkyPillar_Top/scripts.pory"
	.string "there!$"
# 839 "data/maps/SkyPillar_Top/scripts.pory"

# 840 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabitha::
# 841 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 842 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 843 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 844 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachMatt
# 845 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 846 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_FACE_UP
# 847 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_FACE_DOWN
# 848 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_FaceRight
# 849 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_FaceRight
# 850 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 851 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 852 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_ExclamationMark
# 853 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_ExclamationMark
# 854 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 855 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterRight
# 856 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 857 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattLeaveWellAlone, MSGBOX_DEFAULT
# 858 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 859 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 860 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 861 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaTenacious, MSGBOX_DEFAULT
# 862 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 863 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_FaceDown
# 864 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterUp
# 865 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 866 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattBeenHereBefore, MSGBOX_DEFAULT
# 867 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 868 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 869 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 870 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaWhyNot, MSGBOX_DEFAULT
# 871 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 872 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaApproachPlayer
# 873 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkSlowRight
# 874 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowLeft
# 875 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowLeft
# 876 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 877 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 878 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 879 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaNotLikePyre, MSGBOX_DEFAULT
# 880 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 881 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_MattTabithaDoMultiBattle
# 882 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 883 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 884 "data/maps/SkyPillar_Top/scripts.pory"

# 885 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaDoMultiBattle::
# 886 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 887 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2p_vs_2 TRAINER_TABITHA_SKY_PILLAR, SkyPillar_Top_Text_TabithaDefeat, TRAINER_MATT_SKY_PILLAR, SkyPillar_Top_Text_MattDefeat, PARTNER_EMMIE
# 888 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 889 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_MattTabithaVictory
# 890 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 891 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 892 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 893 "data/maps/SkyPillar_Top/scripts.pory"

# 894 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaVictory::
# 895 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 896 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaMattKnockedBack
# 897 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, SkyPillar_Top_Movement_TabithaMattKnockedBack
# 898 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 899 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterRight
# 900 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 901 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattPostBattle, MSGBOX_DEFAULT
# 902 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 903 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 904 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 905 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaPostBattle, MSGBOX_DEFAULT
# 906 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 907 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, SkyPillar_Top_Movement_MattReturnToPosition
# 908 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaReturnToPosition
# 909 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowLeft
# 910 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 911 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_FACE_DOWN
# 912 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_FACE_DOWN
# 913 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 914 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 915 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 916 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieNearlyThere, MSGBOX_DEFAULT
# 917 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 918 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 919 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 920 "data/maps/SkyPillar_Top/scripts.pory"

# 921 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Matt::
# 922 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 923 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattPostBattle, MSGBOX_DEFAULT
# 924 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 925 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 926 "data/maps/SkyPillar_Top/scripts.pory"

# 927 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Tabitha::
# 928 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 929 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaPostBattle, MSGBOX_DEFAULT
# 930 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 931 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 932 "data/maps/SkyPillar_Top/scripts.pory"

# 933 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyNoInterruptions:
# 934 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: Maxie instructed me that\n"
# 935 "data/maps/SkyPillar_Top/scripts.pory"
	.string "there are to be no interruptions.\p"
# 936 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Nobody makes me break a promise with\n"
# 937 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie, especially not you Shelly!$"
# 938 "data/maps/SkyPillar_Top/scripts.pory"

# 939 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_PlayerApproachShelly:
# 940 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 941 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 942 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 943 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 944 "data/maps/SkyPillar_Top/scripts.pory"

# 945 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachCourtney:
# 946 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 947 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 948 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 949 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 950 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 951 "data/maps/SkyPillar_Top/scripts.pory"

# 952 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyShouldHaveKnown:
# 953 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Shelly: I should have known you two\n"
# 954 "data/maps/SkyPillar_Top/scripts.pory"
	.string "would turn up sooner or later…\p"
# 955 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I trust that Archie knows what's\n"
# 956 "data/maps/SkyPillar_Top/scripts.pory"
	.string "best, and every time you show up,\l"
# 957 "data/maps/SkyPillar_Top/scripts.pory"
	.string "things only ever get worse…$"
# 958 "data/maps/SkyPillar_Top/scripts.pory"

# 959 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneySpeechless:
# 960 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: … … … … … …$"
# 961 "data/maps/SkyPillar_Top/scripts.pory"

# 962 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShellyCourtney::
# 963 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 964 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_FACE_RIGHT
# 965 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_FACE_LEFT
# 966 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SkyPillar_Top_Movement_PlayerApproachShelly
# 967 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachCourtney
# 968 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 969 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 970 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 971 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 972 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyNoInterruptions, MSGBOX_DEFAULT
# 973 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 974 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_FaceDown
# 975 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_FaceDown
# 976 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 977 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 978 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_ExclamationMark
# 979 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_ExclamationMark
# 980 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 981 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 982 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 983 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyShouldHaveKnown, MSGBOX_DEFAULT
# 984 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 985 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_FaceRight
# 986 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_FaceLeft
# 987 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 988 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 989 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneySpeechless, MSGBOX_DEFAULT
# 990 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 991 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkDown
# 992 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkDown
# 993 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 994 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_CourtneyShellyDoMultiBattle
# 995 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 996 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 997 "data/maps/SkyPillar_Top/scripts.pory"

# 998 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CourtneyShellyDoMultiBattle::
# 999 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 1000 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_FACE_DOWN
# 1001 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_FACE_DOWN
# 1002 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2p_vs_2 TRAINER_SHELLY_SKY_PILLAR, SkyPillar_Top_Text_ShellyDefeat, TRAINER_COURTNEY_SKY_PILLAR, SkyPillar_Top_Text_CourtneyDefeat, PARTNER_EMMIE
# 1003 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 1004 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_CourtneyShellyVictory
# 1005 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1006 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 1007 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1008 "data/maps/SkyPillar_Top/scripts.pory"

# 1009 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CourtneyShellyVictory::
# 1010 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 1011 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, SkyPillar_Top_Movement_CourtneyShellyKnockedBack
# 1012 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, SkyPillar_Top_Movement_CourtneyShellyKnockedBack
# 1013 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1014 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 1015 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1016 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 1017 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1018 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 1019 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1020 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 1021 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1022 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowRight
# 1023 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 1024 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1025 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieThisIsIt, MSGBOX_DEFAULT
# 1026 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1027 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 1028 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1029 "data/maps/SkyPillar_Top/scripts.pory"

# 1030 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Shelly::
# 1031 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 1032 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 1033 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1034 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1035 "data/maps/SkyPillar_Top/scripts.pory"

# 1036 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Courtney::
# 1037 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 1038 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 1039 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1040 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1041 "data/maps/SkyPillar_Top/scripts.pory"

# 1042 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyDefeat:
# 1043 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maybe I was wrong about you…\n"
# 1044 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Perhaps you are the answer…$"
# 1045 "data/maps/SkyPillar_Top/scripts.pory"

# 1046 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyDefeat:
# 1047 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie trusted me and I've let\n"
# 1048 "data/maps/SkyPillar_Top/scripts.pory"
	.string "him down…$"
# 1049 "data/maps/SkyPillar_Top/scripts.pory"

# 1050 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieThisIsIt:
# 1051 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: We made it, {PLAYER}.\n"
# 1052 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie and Maxie are up ahead.\p"
# 1053 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Once we get involved, there's no\n"
# 1054 "data/maps/SkyPillar_Top/scripts.pory"
	.string "turning back.\p"
# 1055 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We better make sure we're prepared\n"
# 1056 "data/maps/SkyPillar_Top/scripts.pory"
	.string "before we go any further.$"
# 1057 "data/maps/SkyPillar_Top/scripts.pory"

# 1058 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyPostBattle:
# 1059 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: Please! You can't interrupt\n"
# 1060 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie now, this is too important!$"
# 1061 "data/maps/SkyPillar_Top/scripts.pory"

# 1062 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyPostBattle:
# 1063 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Shelly: There really is no stopping\n"
# 1064 "data/maps/SkyPillar_Top/scripts.pory"
	.string "you two is there…$"
# 1065 "data/maps/SkyPillar_Top/scripts.pory"

# 1066 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CourtneyShellyKnockedBack:
# 1067 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 1068 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 1069 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 1070 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1071 "data/maps/SkyPillar_Top/scripts.pory"

# 1072 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 1073 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 1074 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1075 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1076 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 1077 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 1078 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 1079 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1080 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1081 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1082 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1083 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 1084 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 1085 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 1086 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 1087 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 1088 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1089 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1090 "data/maps/SkyPillar_Top/scripts.pory"

# 1091 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 1092 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 1093 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 1094 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1095 "data/maps/SkyPillar_Top/scripts.pory"

# 1096 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 1097 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 1098 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 1099 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1100 "data/maps/SkyPillar_Top/scripts.pory"

# 1101 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 1102 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1103 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1104 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1105 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1106 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1107 "data/maps/SkyPillar_Top/scripts.pory"

# 1108 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 1109 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1110 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1111 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1112 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 1113 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 1114 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1115 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1116 "data/maps/SkyPillar_Top/scripts.pory"

# 1117 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 1118 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 1119 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 1120 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1121 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1122 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 1123 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 1124 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1125 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 1126 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 1127 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1128 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1129 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1130 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 1131 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 1132 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 1133 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 1134 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 1135 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1136 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1137 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1138 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 1139 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 1140 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 1141 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 1142 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 1143 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1144 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 1145 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 1146 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1147 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 1148 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 1149 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1150 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 1151 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 1152 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 1153 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 1154 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1155 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 1156 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 1157 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 1158 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 1159 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1160 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1161 "data/maps/SkyPillar_Top/scripts.pory"

# 1162 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 1163 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 1164 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 1165 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1166 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 1167 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1168 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1169 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1170 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1171 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1172 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 1173 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1174 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 1175 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1176 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1177 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1178 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1179 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1180 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1181 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1182 "data/maps/SkyPillar_Top/scripts.pory"

# 1183 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 1184 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1185 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 1186 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 1187 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 1188 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 1189 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 1190 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1191 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1192 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1193 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1194 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1195 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1196 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1197 "data/maps/SkyPillar_Top/scripts.pory"

# 1198 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 1199 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1200 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1201 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1202 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1203 "data/maps/SkyPillar_Top/scripts.pory"

# 1204 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 1205 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1206 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1207 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1208 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1209 "data/maps/SkyPillar_Top/scripts.pory"

# 1210 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 1211 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"
