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
	setflag FLAG_HIDE_SKY_PILLAR_EVIL_TEAMS
# 324 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_ABNORMAL_WEATHER_RAIN
# 325 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 326 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 327 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_CUTSCENE_INVISIBLE
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 329 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 330 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 331 "data/maps/SkyPillar_Top/scripts.pory"

# 332 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EvilLeaderDefeat:
# 333 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This should not be possible!$"
# 334 "data/maps/SkyPillar_Top/scripts.pory"

# 335 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieComeMaxie:
# 336 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Come, Maxie.\p"
# 337 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This situation is of our creation.\p"
# 338 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It is our responsibility to ensure\n"
# 339 "data/maps/SkyPillar_Top/scripts.pory"
	.string "it comes to a close.$"
# 340 "data/maps/SkyPillar_Top/scripts.pory"

# 341 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieComeArchie:
# 342 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Come, Archie.\p"
# 343 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This situation is of our creation.\p"
# 344 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It is our responsibility to ensure\n"
# 345 "data/maps/SkyPillar_Top/scripts.pory"
	.string "it comes to a close.$"
# 346 "data/maps/SkyPillar_Top/scripts.pory"

# 347 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieComeArchie::
# 348 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieComeArchie, MSGBOX_DEFAULT
# 349 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 350 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 351 "data/maps/SkyPillar_Top/scripts.pory"

# 352 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieComeMaxie::
# 353 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieComeMaxie, MSGBOX_DEFAULT
# 354 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 355 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 356 "data/maps/SkyPillar_Top/scripts.pory"

# 357 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieThankYou:
# 358 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: {PLAYER}, thank you, I don't\n"
# 359 "data/maps/SkyPillar_Top/scripts.pory"
	.string "believe that I could have defeated\l"
# 360 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie and that Pokémon alone.\p"
# 361 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's time for me to return to\n"
# 362 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Sootopolis.\p"
# 363 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I expect that you will be close\n"
# 364 "data/maps/SkyPillar_Top/scripts.pory"
	.string "behind, as you always are.$"
# 365 "data/maps/SkyPillar_Top/scripts.pory"

# 366 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieThankYou:
# 367 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: {PLAYER}, thank you, I don't\n"
# 368 "data/maps/SkyPillar_Top/scripts.pory"
	.string "believe that I could have defeated\l"
# 369 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie and that Pokémon alone.\p"
# 370 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's time for me to return to\n"
# 371 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Sootopolis.\p"
# 372 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I expect that you will be close\n"
# 373 "data/maps/SkyPillar_Top/scripts.pory"
	.string "behind, as you always are.$"
# 374 "data/maps/SkyPillar_Top/scripts.pory"

# 375 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieThankYou::
# 376 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieThankYou, MSGBOX_DEFAULT
# 377 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 378 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 379 "data/maps/SkyPillar_Top/scripts.pory"

# 380 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieThankYou::
# 381 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieThankYou, MSGBOX_DEFAULT
# 382 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 383 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 384 "data/maps/SkyPillar_Top/scripts.pory"

# 385 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieBeenMisguided:
# 386 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Could it really be that I\n"
# 387 "data/maps/SkyPillar_Top/scripts.pory"
	.string "have been misguided all this time…?$"
# 388 "data/maps/SkyPillar_Top/scripts.pory"

# 389 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieBeenMisguided:
# 390 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Could it really be that I\n"
# 391 "data/maps/SkyPillar_Top/scripts.pory"
	.string "have been misguided all this time…?$"
# 392 "data/maps/SkyPillar_Top/scripts.pory"

# 393 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieBeenMisguided::
# 394 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieBeenMisguided, MSGBOX_DEFAULT
# 395 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 396 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 397 "data/maps/SkyPillar_Top/scripts.pory"

# 398 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieBeenMisguided::
# 399 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieBeenMisguided, MSGBOX_DEFAULT
# 400 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 401 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 402 "data/maps/SkyPillar_Top/scripts.pory"

# 403 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieDoYouSee:
# 404 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Do you see now, Maxie?\p"
# 405 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We have tampered with forces beyond\n"
# 406 "data/maps/SkyPillar_Top/scripts.pory"
	.string "our control and our understanding.\p"
# 407 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Our only hope is for that Pokémon\n"
# 408 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to be heading to Sootopolis and\l"
# 409 "data/maps/SkyPillar_Top/scripts.pory"
	.string "putting an end to this chaos.$"
# 410 "data/maps/SkyPillar_Top/scripts.pory"

# 411 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieDoYouSee:
# 412 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Do you see now, Archie?\p"
# 413 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We have tampered with forces beyond\n"
# 414 "data/maps/SkyPillar_Top/scripts.pory"
	.string "our control and our understanding.\p"
# 415 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Our only hope is for that Pokémon\n"
# 416 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to be heading to Sootopolis and\l"
# 417 "data/maps/SkyPillar_Top/scripts.pory"
	.string "putting an end to this chaos.$"
# 418 "data/maps/SkyPillar_Top/scripts.pory"

# 419 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieDoYouSee::
# 420 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieDoYouSee, MSGBOX_DEFAULT
# 421 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 422 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 423 "data/maps/SkyPillar_Top/scripts.pory"

# 424 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieDoYouSee::
# 425 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieDoYouSee, MSGBOX_DEFAULT
# 426 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 427 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 428 "data/maps/SkyPillar_Top/scripts.pory"

# 429 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieLostControl:
# 430 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: What is this…\n"
# 431 "data/maps/SkyPillar_Top/scripts.pory"
	.string "My control is broken?\p"
# 432 "data/maps/SkyPillar_Top/scripts.pory"
	.string "First Kyogre, and now here too…$"
# 433 "data/maps/SkyPillar_Top/scripts.pory"

# 434 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieLostControl:
# 435 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: What is this…\n"
# 436 "data/maps/SkyPillar_Top/scripts.pory"
	.string "My control is broken?\p"
# 437 "data/maps/SkyPillar_Top/scripts.pory"
	.string "First Groudon, and now here too…$"
# 438 "data/maps/SkyPillar_Top/scripts.pory"

# 439 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieLostControl::
# 440 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieLostControl, MSGBOX_DEFAULT
# 441 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 442 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 443 "data/maps/SkyPillar_Top/scripts.pory"

# 444 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieLostControl::
# 445 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieLostControl, MSGBOX_DEFAULT
# 446 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 447 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 448 "data/maps/SkyPillar_Top/scripts.pory"

# 449 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieHowCanThisBe:
# 450 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: How can this be?!\p"
# 451 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Even with the power of this\n"
# 452 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Pokémon, I am still defeated?\p"
# 453 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This changes nothing. As long\n"
# 454 "data/maps/SkyPillar_Top/scripts.pory"
	.string "as I still… … …$"
# 455 "data/maps/SkyPillar_Top/scripts.pory"

# 456 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieHowCanThisBe:
# 457 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: How can this be?!\p"
# 458 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Even with the power of this\n"
# 459 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Pokémon, I am still defeated?\p"
# 460 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This changes nothing. As long\n"
# 461 "data/maps/SkyPillar_Top/scripts.pory"
	.string "as I still… … …$"
# 462 "data/maps/SkyPillar_Top/scripts.pory"

# 463 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieHowCanThisBe::
# 464 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieHowCanThisBe, MSGBOX_DEFAULT
# 465 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 466 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 467 "data/maps/SkyPillar_Top/scripts.pory"

# 468 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieHowCanThisBe::
# 469 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieHowCanThisBe, MSGBOX_DEFAULT
# 470 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 471 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 472 "data/maps/SkyPillar_Top/scripts.pory"

# 473 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EvilLeaderKnockedBack:
# 474 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 475 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 476 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 477 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 478 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 479 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 480 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 481 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 482 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_down
# 483 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 484 "data/maps/SkyPillar_Top/scripts.pory"

# 485 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_GoodLeaderApproachEvilLeader:
# 486 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 487 "data/maps/SkyPillar_Top/scripts.pory"
	face_left
# 488 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 489 "data/maps/SkyPillar_Top/scripts.pory"

# 490 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieYouWillNotStopMe:
# 491 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: You will not stop me.$"
# 492 "data/maps/SkyPillar_Top/scripts.pory"

# 493 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieYouWillNotStopMe:
# 494 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: You will not stop me.$"
# 495 "data/maps/SkyPillar_Top/scripts.pory"

# 496 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieYouStillDefy:
# 497 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Even now you still defy me?\p"
# 498 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It matters not. I will shape the world\n"
# 499 "data/maps/SkyPillar_Top/scripts.pory"
	.string "into one of Team Aqua's design.\p"
# 500 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You will not stand in my way.$"
# 501 "data/maps/SkyPillar_Top/scripts.pory"

# 502 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieYouStillDefy:
# 503 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Even now you still defy me?\p"
# 504 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It matters not. I will shape the world\n"
# 505 "data/maps/SkyPillar_Top/scripts.pory"
	.string "into one of Team Magma's design.\p"
# 506 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You will not stand in my way.$"
# 507 "data/maps/SkyPillar_Top/scripts.pory"

# 508 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieYouStillDefy::
# 509 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieYouStillDefy, MSGBOX_DEFAULT
# 510 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 511 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 512 "data/maps/SkyPillar_Top/scripts.pory"

# 513 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieYouStillDefy::
# 514 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieYouStillDefy, MSGBOX_DEFAULT
# 515 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 516 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 517 "data/maps/SkyPillar_Top/scripts.pory"

# 518 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_GoodLeaderMoveForPlayer:
# 519 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_right
# 520 "data/maps/SkyPillar_Top/scripts.pory"
	face_up
# 521 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 522 "data/maps/SkyPillar_Top/scripts.pory"

# 523 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieSoYoullHelp:
# 524 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: So you will help me?\p"
# 525 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\n"
# 526 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\p"
# 527 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Thank you.\p"
# 528 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Okay, let's do this.$"
# 529 "data/maps/SkyPillar_Top/scripts.pory"

# 530 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieSoYoullHelp:
# 531 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: So you will help me?\p"
# 532 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\n"
# 533 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\p"
# 534 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Thank you.\p"
# 535 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Okay, let's do this.$"
# 536 "data/maps/SkyPillar_Top/scripts.pory"

# 537 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieSoYoullHelp::
# 538 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieSoYoullHelp, MSGBOX_DEFAULT
# 539 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 540 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 541 "data/maps/SkyPillar_Top/scripts.pory"

# 542 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieSoYoullHelp::
# 543 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieSoYoullHelp, MSGBOX_DEFAULT
# 544 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 545 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 546 "data/maps/SkyPillar_Top/scripts.pory"

# 547 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_EmmieDefeatedMaxie::
# 548 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieDefeatedMaxie, MSGBOX_DEFAULT
# 549 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 550 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 551 "data/maps/SkyPillar_Top/scripts.pory"

# 552 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_EmmieDefeatedArchie::
# 553 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieDefeatedArchie, MSGBOX_DEFAULT
# 554 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 555 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 556 "data/maps/SkyPillar_Top/scripts.pory"

# 557 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieDefeatedArchie:
# 558 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: {PLAYER}, you've got this.\p"
# 559 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Together we've defeated Archie even\n"
# 560 "data/maps/SkyPillar_Top/scripts.pory"
	.string "when he had the power of Kyogre\l"
# 561 "data/maps/SkyPillar_Top/scripts.pory"
	.string "on his side.\p"
# 562 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You've also tackled both Team Aqua\n"
# 563 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and Team Magma without my help.\p"
# 564 "data/maps/SkyPillar_Top/scripts.pory"
	.string "After watching you and Archie\n"
# 565 "data/maps/SkyPillar_Top/scripts.pory"
	.string "defeat Maxie on Mt Pyre, I know\l"
# 566 "data/maps/SkyPillar_Top/scripts.pory"
	.string "that you can succeed here too.\p"
# 567 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Help Maxie defeat Archie and all\n"
# 568 "data/maps/SkyPillar_Top/scripts.pory"
	.string "this can finally end.\p"
# 569 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I believe in you!$"
# 570 "data/maps/SkyPillar_Top/scripts.pory"

# 571 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieDefeatedMaxie:
# 572 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: {PLAYER}, you've got this.\p"
# 573 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Together we've defeated Maxie even\n"
# 574 "data/maps/SkyPillar_Top/scripts.pory"
	.string "when he had the power of Groudon\l"
# 575 "data/maps/SkyPillar_Top/scripts.pory"
	.string "on his side.\p"
# 576 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You've also tackled both Team Aqua\n"
# 577 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and Team Magma without my help.\p"
# 578 "data/maps/SkyPillar_Top/scripts.pory"
	.string "After watching you and Maxie\n"
# 579 "data/maps/SkyPillar_Top/scripts.pory"
	.string "defeat Archie on Mt Pyre, I know\l"
# 580 "data/maps/SkyPillar_Top/scripts.pory"
	.string "that you can succeed here too.\p"
# 581 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Help Archie defeat Maxie and all\n"
# 582 "data/maps/SkyPillar_Top/scripts.pory"
	.string "this can finally end.\p"
# 583 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I believe in you!$"
# 584 "data/maps/SkyPillar_Top/scripts.pory"

# 585 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachPlayer:
# 586 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 587 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_right
# 588 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 589 "data/maps/SkyPillar_Top/scripts.pory"

# 590 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxiePleaseHelp:
# 591 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: {PLAYER}, Archie is refusing\n"
# 592 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to listen to reason.\p"
# 593 "data/maps/SkyPillar_Top/scripts.pory"
	.string "He is hell bent on using this Pokémon\n"
# 594 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to defeat Groudon and control Kyogre.\p"
# 595 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created was not \n"
# 596 "data/maps/SkyPillar_Top/scripts.pory"
	.string "part of my design.\p"
# 597 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I accept that I hold equal blame with\n"
# 598 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie, but I see now that we were\l"
# 599 "data/maps/SkyPillar_Top/scripts.pory"
	.string "playing with forces beyond our control.\p"
# 600 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I know that you do not trust me, but\n"
# 601 "data/maps/SkyPillar_Top/scripts.pory"
	.string "trust that I also want to stop Archie.\p"
# 602 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, help me stop Archie and together\n"
# 603 "data/maps/SkyPillar_Top/scripts.pory"
	.string "we can put an end to all this.$"
# 604 "data/maps/SkyPillar_Top/scripts.pory"

# 605 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchiePleaseHelp:
# 606 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: {PLAYER}, Maxie is refusing\n"
# 607 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to listen to reason.\p"
# 608 "data/maps/SkyPillar_Top/scripts.pory"
	.string "He is hell bent on using this Pokémon\n"
# 609 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to defeat Kyogre and control Groudon.\p"
# 610 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created was not \n"
# 611 "data/maps/SkyPillar_Top/scripts.pory"
	.string "part of my design.\p"
# 612 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I accept that I hold equal blame with\n"
# 613 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie, but I see now that we were\l"
# 614 "data/maps/SkyPillar_Top/scripts.pory"
	.string "playing with forces beyond our control.\p"
# 615 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I know that you do not trust me, but\n"
# 616 "data/maps/SkyPillar_Top/scripts.pory"
	.string "trust that I also want to stop Maxie.\p"
# 617 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, help me stop Maxie and together\n"
# 618 "data/maps/SkyPillar_Top/scripts.pory"
	.string "we can put an end to all this.$"
# 619 "data/maps/SkyPillar_Top/scripts.pory"

# 620 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchiePleaseHelp::
# 621 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchiePleaseHelp, MSGBOX_DEFAULT
# 622 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 623 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 624 "data/maps/SkyPillar_Top/scripts.pory"

# 625 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxiePleaseHelp::
# 626 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxiePleaseHelp, MSGBOX_DEFAULT
# 627 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 628 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 629 "data/maps/SkyPillar_Top/scripts.pory"

# 630 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieWeWillSubdue:
# 631 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Together we will subdue Groudon\n"
# 632 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and restrain the power of Kyogre.$"
# 633 "data/maps/SkyPillar_Top/scripts.pory"

# 634 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieWeWillSubdue:
# 635 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Together we will subdue Kyogre\n"
# 636 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and restrain the power of Groudon.$"
# 637 "data/maps/SkyPillar_Top/scripts.pory"

# 638 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieWeWillSubdue::
# 639 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieWeWillSubdue, MSGBOX_DEFAULT
# 640 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 641 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 642 "data/maps/SkyPillar_Top/scripts.pory"

# 643 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieWeWillSubdue::
# 644 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieWeWillSubdue, MSGBOX_DEFAULT
# 645 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 646 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 647 "data/maps/SkyPillar_Top/scripts.pory"

# 648 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaExitPokeball:
# 649 "data/maps/SkyPillar_Top/scripts.pory"
	exit_pokeball
# 650 "data/maps/SkyPillar_Top/scripts.pory"
	set_invisible
# 651 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 652 "data/maps/SkyPillar_Top/scripts.pory"

# 653 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieSeeHowControl:
# 654 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: See how this Pokémon eliminates\n"
# 655 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the effects of the weather distortion.\p"
# 656 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With its power, I can control Groudon's\n"
# 657 "data/maps/SkyPillar_Top/scripts.pory"
	.string "abilities.$"
# 658 "data/maps/SkyPillar_Top/scripts.pory"

# 659 "data/maps/SkyPillar_Top/scripts.pory"

# 660 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieSeeHowControl:
# 661 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: See how this Pokémon eliminates\n"
# 662 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the effects of the weather distortion.\p"
# 663 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With its power, I can control Kyogre's\n"
# 664 "data/maps/SkyPillar_Top/scripts.pory"
	.string "abilities.$"
# 665 "data/maps/SkyPillar_Top/scripts.pory"

# 666 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieSeeHowControl::
# 667 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieSeeHowControl, MSGBOX_DEFAULT
# 668 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 669 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 670 "data/maps/SkyPillar_Top/scripts.pory"

# 671 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieSeeHowControl::
# 672 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieSeeHowControl, MSGBOX_DEFAULT
# 673 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 674 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 675 "data/maps/SkyPillar_Top/scripts.pory"

# 676 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleCameraPanFromAction:
# 677 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 678 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 679 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 680 "data/maps/SkyPillar_Top/scripts.pory"

# 681 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaEnterPokeball:
# 682 "data/maps/SkyPillar_Top/scripts.pory"
	enter_pokeball
# 683 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 684 "data/maps/SkyPillar_Top/scripts.pory"

# 685 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieFailToSee::
# 686 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieFailToSee, MSGBOX_DEFAULT
# 687 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 688 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 689 "data/maps/SkyPillar_Top/scripts.pory"

# 690 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieFailToSee::
# 691 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieFailToSee, MSGBOX_DEFAULT
# 692 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 693 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 694 "data/maps/SkyPillar_Top/scripts.pory"

# 695 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieFailToSee:
# 696 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: As ever, Maxie, you fail to see\n"
# 697 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the bigger picture.\p"
# 698 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With the power of this Pokémon, Team\n"
# 699 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Aqua's world may not yet be lost.\p"
# 700 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Observe…$"
# 701 "data/maps/SkyPillar_Top/scripts.pory"

# 702 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieFailToSee:
# 703 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: As ever, Archie, you fail to see\n"
# 704 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the bigger picture.\p"
# 705 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With the power of this Pokémon, Team\n"
# 706 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Magma's world may not yet be lost.\p"
# 707 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Observe…$"
# 708 "data/maps/SkyPillar_Top/scripts.pory"

# 709 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleGoodLeaderPushedBack:
# 710 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 711 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 712 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 713 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 714 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 715 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 716 "data/maps/SkyPillar_Top/scripts.pory"

# 717 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchiePleadWithMaxie::
# 718 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchiePleadWithMaxie, MSGBOX_DEFAULT
# 719 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 720 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 721 "data/maps/SkyPillar_Top/scripts.pory"

# 722 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxiePleadWithArchie::
# 723 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxiePleadWithArchie, MSGBOX_DEFAULT
# 724 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 725 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 726 "data/maps/SkyPillar_Top/scripts.pory"

# 727 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxiePleadWithArchie:
# 728 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Archie, please, this has gone\n"
# 729 "data/maps/SkyPillar_Top/scripts.pory"
	.string "too far.\p"
# 730 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created… This is\n"
# 731 "data/maps/SkyPillar_Top/scripts.pory"
	.string "not the world Team Magma dreamed of.\p"
# 732 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This cannot be what you and Team Aqua\n"
# 733 "data/maps/SkyPillar_Top/scripts.pory"
	.string "want either?\p"
# 734 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The imbalance we have brought to the\n"
# 735 "data/maps/SkyPillar_Top/scripts.pory"
	.string "region must come to an end, but this\l"
# 736 "data/maps/SkyPillar_Top/scripts.pory"
	.string "isn't the way!$"
# 737 "data/maps/SkyPillar_Top/scripts.pory"

# 738 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchiePleadWithMaxie:
# 739 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Maxie, please, this has gone\n"
# 740 "data/maps/SkyPillar_Top/scripts.pory"
	.string "too far.\p"
# 741 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created… This is\n"
# 742 "data/maps/SkyPillar_Top/scripts.pory"
	.string "not the world Team Aqua dreamed of.\p"
# 743 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This cannot be what you and Team Magma\n"
# 744 "data/maps/SkyPillar_Top/scripts.pory"
	.string "want either?\p"
# 745 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The imbalance we have brought to the\n"
# 746 "data/maps/SkyPillar_Top/scripts.pory"
	.string "region must come to an end, but this\l"
# 747 "data/maps/SkyPillar_Top/scripts.pory"
	.string "isn't the way!$"
# 748 "data/maps/SkyPillar_Top/scripts.pory"

# 749 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleCameraPanToAction:
# 750 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 751 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 752 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 753 "data/maps/SkyPillar_Top/scripts.pory"

# 754 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleMaxieMusic::
# 755 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 756 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 757 "data/maps/SkyPillar_Top/scripts.pory"

# 758 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleArchieMusic::
# 759 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 760 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 761 "data/maps/SkyPillar_Top/scripts.pory"

# 762 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleEmmieApproach:
# 763 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 764 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 765 "data/maps/SkyPillar_Top/scripts.pory"
	face_up
# 766 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 767 "data/maps/SkyPillar_Top/scripts.pory"

# 768 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 769 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 770 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 771 "data/maps/SkyPillar_Top/scripts.pory"

# 772 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachMatt:
# 773 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 774 "data/maps/SkyPillar_Top/scripts.pory"
	walk_down
# 775 "data/maps/SkyPillar_Top/scripts.pory"
	face_left
# 776 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 777 "data/maps/SkyPillar_Top/scripts.pory"

# 778 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattLeaveWellAlone:
# 779 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: You two, again!\p"
# 780 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You just don't know when to quit\n"
# 781 "data/maps/SkyPillar_Top/scripts.pory"
	.string "do you?$"
# 782 "data/maps/SkyPillar_Top/scripts.pory"

# 783 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaTenacious:
# 784 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Heh… Tenacious aren't you…$"
# 785 "data/maps/SkyPillar_Top/scripts.pory"

# 786 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattBeenHereBefore:
# 787 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: We've been here before…\p"
# 788 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Let's get it right this time.$"
# 789 "data/maps/SkyPillar_Top/scripts.pory"

# 790 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaWhyNot:
# 791 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Sure, why not?$"
# 792 "data/maps/SkyPillar_Top/scripts.pory"

# 793 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaApproachPlayer:
# 794 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 795 "data/maps/SkyPillar_Top/scripts.pory"
	face_right
# 796 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 797 "data/maps/SkyPillar_Top/scripts.pory"

# 798 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaNotLikePyre:
# 799 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Hehehe… This isn't going to\n"
# 800 "data/maps/SkyPillar_Top/scripts.pory"
	.string "end like Mt Pyre!$"
# 801 "data/maps/SkyPillar_Top/scripts.pory"

# 802 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattDefeat:
# 803 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I concede. Team Aqua may never be able\n"
# 804 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to hold you back…$"
# 805 "data/maps/SkyPillar_Top/scripts.pory"

# 806 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaDefeat:
# 807 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Hehe… Hehehehe…$"
# 808 "data/maps/SkyPillar_Top/scripts.pory"

# 809 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaMattKnockedBack:
# 810 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 811 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_left
# 812 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 813 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 814 "data/maps/SkyPillar_Top/scripts.pory"

# 815 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattPostBattle:
# 816 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: Whatever happens now is beyond\n"
# 817 "data/maps/SkyPillar_Top/scripts.pory"
	.string "my control.$"
# 818 "data/maps/SkyPillar_Top/scripts.pory"

# 819 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaPostBattle:
# 820 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Nothing you say or do will\n"
# 821 "data/maps/SkyPillar_Top/scripts.pory"
	.string "ever weaken my faith in Maxie…$"
# 822 "data/maps/SkyPillar_Top/scripts.pory"

# 823 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_MattReturnToPosition:
# 824 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 825 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 826 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 827 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
# 828 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 829 "data/maps/SkyPillar_Top/scripts.pory"

# 830 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaReturnToPosition:
# 831 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 832 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
# 833 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 834 "data/maps/SkyPillar_Top/scripts.pory"

# 835 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieNearlyThere:
# 836 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: C'mon, {PLAYER}, we're almost\n"
# 837 "data/maps/SkyPillar_Top/scripts.pory"
	.string "there!$"
# 838 "data/maps/SkyPillar_Top/scripts.pory"

# 839 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabitha::
# 840 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 841 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 842 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 843 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachMatt
# 844 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 845 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_FACE_UP
# 846 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_FACE_DOWN
# 847 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_FaceRight
# 848 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_FaceRight
# 849 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 850 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 851 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_ExclamationMark
# 852 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_ExclamationMark
# 853 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 854 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterRight
# 855 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 856 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattLeaveWellAlone, MSGBOX_DEFAULT
# 857 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 858 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 859 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 860 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaTenacious, MSGBOX_DEFAULT
# 861 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 862 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_FaceDown
# 863 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterUp
# 864 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 865 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattBeenHereBefore, MSGBOX_DEFAULT
# 866 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 867 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 868 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 869 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaWhyNot, MSGBOX_DEFAULT
# 870 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 871 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaApproachPlayer
# 872 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkSlowRight
# 873 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowLeft
# 874 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowLeft
# 875 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 876 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 877 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 878 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaNotLikePyre, MSGBOX_DEFAULT
# 879 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 880 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_MattTabithaDoMultiBattle
# 881 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 882 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 883 "data/maps/SkyPillar_Top/scripts.pory"

# 884 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaDoMultiBattle::
# 885 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 886 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2p_vs_2 TRAINER_TABITHA_SKY_PILLAR, SkyPillar_Top_Text_TabithaDefeat, TRAINER_MATT_SKY_PILLAR, SkyPillar_Top_Text_MattDefeat, PARTNER_EMMIE
# 887 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 888 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_MattTabithaVictory
# 889 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 890 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 891 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 892 "data/maps/SkyPillar_Top/scripts.pory"

# 893 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaVictory::
# 894 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 895 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaMattKnockedBack
# 896 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, SkyPillar_Top_Movement_TabithaMattKnockedBack
# 897 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 898 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterRight
# 899 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 900 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattPostBattle, MSGBOX_DEFAULT
# 901 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 902 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 903 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 904 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaPostBattle, MSGBOX_DEFAULT
# 905 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 906 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, SkyPillar_Top_Movement_MattReturnToPosition
# 907 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaReturnToPosition
# 908 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowLeft
# 909 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 910 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_FACE_DOWN
# 911 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_FACE_DOWN
# 912 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 913 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 914 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 915 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieNearlyThere, MSGBOX_DEFAULT
# 916 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 917 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 918 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 919 "data/maps/SkyPillar_Top/scripts.pory"

# 920 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Matt::
# 921 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 922 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattPostBattle, MSGBOX_DEFAULT
# 923 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 924 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 925 "data/maps/SkyPillar_Top/scripts.pory"

# 926 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Tabitha::
# 927 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 928 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaPostBattle, MSGBOX_DEFAULT
# 929 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 930 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 931 "data/maps/SkyPillar_Top/scripts.pory"

# 932 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyNoInterruptions:
# 933 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: Maxie instructed me that\n"
# 934 "data/maps/SkyPillar_Top/scripts.pory"
	.string "there are to be no interruptions.\p"
# 935 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Nobody makes me break a promise with\n"
# 936 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie, especially not you Shelly!$"
# 937 "data/maps/SkyPillar_Top/scripts.pory"

# 938 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_PlayerApproachShelly:
# 939 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 940 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 941 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 942 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 943 "data/maps/SkyPillar_Top/scripts.pory"

# 944 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachCourtney:
# 945 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 946 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 947 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 948 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 949 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 950 "data/maps/SkyPillar_Top/scripts.pory"

# 951 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyShouldHaveKnown:
# 952 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Shelly: I should have known you two\n"
# 953 "data/maps/SkyPillar_Top/scripts.pory"
	.string "would turn up sooner or later…\p"
# 954 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I trust that Archie knows what's\n"
# 955 "data/maps/SkyPillar_Top/scripts.pory"
	.string "best, and every time you show up,\l"
# 956 "data/maps/SkyPillar_Top/scripts.pory"
	.string "things only ever get worse…$"
# 957 "data/maps/SkyPillar_Top/scripts.pory"

# 958 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneySpeechless:
# 959 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: … … … … … …$"
# 960 "data/maps/SkyPillar_Top/scripts.pory"

# 961 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShellyCourtney::
# 962 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 963 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_FACE_RIGHT
# 964 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_FACE_LEFT
# 965 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SkyPillar_Top_Movement_PlayerApproachShelly
# 966 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachCourtney
# 967 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 968 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 969 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 970 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 971 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyNoInterruptions, MSGBOX_DEFAULT
# 972 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 973 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_FaceDown
# 974 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_FaceDown
# 975 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 976 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 977 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_ExclamationMark
# 978 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_ExclamationMark
# 979 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 980 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 981 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 982 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyShouldHaveKnown, MSGBOX_DEFAULT
# 983 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 984 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_FaceRight
# 985 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_FaceLeft
# 986 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 987 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 988 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneySpeechless, MSGBOX_DEFAULT
# 989 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 990 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkDown
# 991 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkDown
# 992 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 993 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_CourtneyShellyDoMultiBattle
# 994 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 995 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 996 "data/maps/SkyPillar_Top/scripts.pory"

# 997 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CourtneyShellyDoMultiBattle::
# 998 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 999 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_FACE_DOWN
# 1000 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_FACE_DOWN
# 1001 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2p_vs_2 TRAINER_SHELLY_SKY_PILLAR, SkyPillar_Top_Text_ShellyDefeat, TRAINER_COURTNEY_SKY_PILLAR, SkyPillar_Top_Text_CourtneyDefeat, PARTNER_EMMIE
# 1002 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 1003 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_CourtneyShellyVictory
# 1004 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1005 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 1006 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1007 "data/maps/SkyPillar_Top/scripts.pory"

# 1008 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CourtneyShellyVictory::
# 1009 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 1010 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, SkyPillar_Top_Movement_CourtneyShellyKnockedBack
# 1011 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, SkyPillar_Top_Movement_CourtneyShellyKnockedBack
# 1012 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1013 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 1014 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1015 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 1016 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1017 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 1018 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1019 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 1020 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1021 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowRight
# 1022 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 1023 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1024 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieThisIsIt, MSGBOX_DEFAULT
# 1025 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1026 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 1027 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1028 "data/maps/SkyPillar_Top/scripts.pory"

# 1029 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Shelly::
# 1030 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 1031 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 1032 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1033 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1034 "data/maps/SkyPillar_Top/scripts.pory"

# 1035 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Courtney::
# 1036 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 1037 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 1038 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1039 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1040 "data/maps/SkyPillar_Top/scripts.pory"

# 1041 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyDefeat:
# 1042 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maybe I was wrong about you…\n"
# 1043 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Perhaps you are the answer…$"
# 1044 "data/maps/SkyPillar_Top/scripts.pory"

# 1045 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyDefeat:
# 1046 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie trusted me and I've let\n"
# 1047 "data/maps/SkyPillar_Top/scripts.pory"
	.string "him down…$"
# 1048 "data/maps/SkyPillar_Top/scripts.pory"

# 1049 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieThisIsIt:
# 1050 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: We made it, {PLAYER}.\n"
# 1051 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie and Maxie are up ahead.\p"
# 1052 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Once we get involved, there's no\n"
# 1053 "data/maps/SkyPillar_Top/scripts.pory"
	.string "turning back.\p"
# 1054 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We better make sure we're prepared\n"
# 1055 "data/maps/SkyPillar_Top/scripts.pory"
	.string "before we go any further.$"
# 1056 "data/maps/SkyPillar_Top/scripts.pory"

# 1057 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyPostBattle:
# 1058 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: Please! You can't interrupt\n"
# 1059 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie now, this is too important!$"
# 1060 "data/maps/SkyPillar_Top/scripts.pory"

# 1061 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyPostBattle:
# 1062 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Shelly: There really is no stopping\n"
# 1063 "data/maps/SkyPillar_Top/scripts.pory"
	.string "you two is there…$"
# 1064 "data/maps/SkyPillar_Top/scripts.pory"

# 1065 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CourtneyShellyKnockedBack:
# 1066 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 1067 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 1068 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 1069 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1070 "data/maps/SkyPillar_Top/scripts.pory"

# 1071 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 1072 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 1073 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1074 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1075 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 1076 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 1077 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 1078 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1079 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1080 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1081 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1082 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 1083 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 1084 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 1085 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 1086 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 1087 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1088 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1089 "data/maps/SkyPillar_Top/scripts.pory"

# 1090 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 1091 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 1092 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 1093 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1094 "data/maps/SkyPillar_Top/scripts.pory"

# 1095 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 1096 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 1097 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 1098 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1099 "data/maps/SkyPillar_Top/scripts.pory"

# 1100 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 1101 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1102 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1103 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1104 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1105 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1106 "data/maps/SkyPillar_Top/scripts.pory"

# 1107 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 1108 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1109 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1110 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1111 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 1112 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 1113 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1114 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1115 "data/maps/SkyPillar_Top/scripts.pory"

# 1116 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 1117 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 1118 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 1119 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1120 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1121 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 1122 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 1123 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1124 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 1125 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 1126 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1127 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1128 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1129 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 1130 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 1131 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 1132 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 1133 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 1134 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1135 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1136 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1137 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 1138 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 1139 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 1140 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 1141 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 1142 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1143 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 1144 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 1145 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1146 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 1147 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 1148 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1149 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 1150 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 1151 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 1152 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 1153 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1154 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 1155 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 1156 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 1157 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 1158 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1159 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1160 "data/maps/SkyPillar_Top/scripts.pory"

# 1161 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 1162 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 1163 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 1164 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1165 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 1166 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1167 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1168 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1169 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1170 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1171 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 1172 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1173 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 1174 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
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
	step_end
# 1181 "data/maps/SkyPillar_Top/scripts.pory"

# 1182 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 1183 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1184 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 1185 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 1186 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 1187 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 1188 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 1189 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
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
	step_end
# 1196 "data/maps/SkyPillar_Top/scripts.pory"

# 1197 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 1198 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1199 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1200 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1201 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1202 "data/maps/SkyPillar_Top/scripts.pory"

# 1203 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 1204 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1205 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1206 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1207 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1208 "data/maps/SkyPillar_Top/scripts.pory"

# 1209 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 1210 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"
