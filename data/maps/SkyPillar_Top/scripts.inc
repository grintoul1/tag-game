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
	call_if_ge VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_LeaderVars
# 21 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 22 "data/maps/SkyPillar_Top/scripts.pory"

# 23 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 24 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 26 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 27 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 28 "data/maps/SkyPillar_Top/scripts.pory"

# 29 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition:
# 30 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 8, SkyPillar_Top_EventScript_SetCleanLayout
# 31 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 7, SkyPillar_Top_EventScript_SetWeather
# 32 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 7, SkyPillar_Top_EventScript_HideRayquaza
# 33 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 9, SkyPillar_Top_EventScript_TryShowRayquaza
# 34 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_MattTabithaPos
# 35 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_LeaderVars
# 36 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_LeaderPos
# 37 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 38 "data/maps/SkyPillar_Top/scripts.pory"

# 39 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_HideRayquaza::
# 40 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_RAYQUAZA_STILL
# 41 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 42 "data/maps/SkyPillar_Top/scripts.pory"

# 43 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetWeather:
# 44 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_ABNORMAL
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 46 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 47 "data/maps/SkyPillar_Top/scripts.pory"

# 48 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaPos::
# 49 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectxyperm LOCALID_SKYPILLAR_MATT, 12, 21
# 50 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectxyperm LOCALID_SKYPILLAR_TABITHA, 12, 19
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 52 "data/maps/SkyPillar_Top/scripts.pory"

# 53 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_LeaderPos::
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectxyperm VAR_0x8003, 12, 9
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype VAR_0x8003, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 57 "data/maps/SkyPillar_Top/scripts.pory"

# 58 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_LeaderVars::
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieVars
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieVars
# 61 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 62 "data/maps/SkyPillar_Top/scripts.pory"

# 63 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 66 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 67 "data/maps/SkyPillar_Top/scripts.pory"

# 68 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 70 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 71 "data/maps/SkyPillar_Top/scripts.pory"

# 72 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 75 "data/maps/SkyPillar_Top/scripts.pory"

# 76 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 77 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 79 "data/maps/SkyPillar_Top/scripts.pory"

# 80 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieVars::
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8002, LOCALID_SKYPILLAR_MAXIE
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8003, LOCALID_SKYPILLAR_ARCHIE
# 83 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 84 "data/maps/SkyPillar_Top/scripts.pory"

# 85 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieVars::
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8002, LOCALID_SKYPILLAR_ARCHIE
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8003, LOCALID_SKYPILLAR_MAXIE
# 88 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 89 "data/maps/SkyPillar_Top/scripts.pory"

# 90 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Finale::
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_WalkUp
# 92 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER SkyPillar_Top_Movement_FinaleEmmieApproach
# 93 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanToAction
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_FinaleMaxieMusic
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_FinaleArchieMusic
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkUp
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchiePleadWithMaxie
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxiePleadWithArchie
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, SkyPillar_Top_Movement_FinaleGoodLeaderPushedBack
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkSlowDown
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieFailToSee
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieFailToSee
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanToAction
# 116 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkUp
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_THROW
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaEnterPokeball
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 131 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanFromAction
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkDown
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	delay 360
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_DROUGHT
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieSeeHowControl
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieSeeHowControl
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterRight
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0 
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_BOUNCE_2
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_OPEN
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE_INVISIBLE, SkyPillar_Top_Movement_RayquazaExitPokeball
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	addobject LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_NONE
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanFromAction
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieWeWillSubdue
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieWeWillSubdue
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	delay 12
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterDown
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchiePleaseHelp
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxiePleaseHelp
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachPlayer
# 180 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 182 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_EmmieDefeatedMaxie
# 183 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_EmmieDefeatedArchie
# 184 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 185 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 186 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterDown
# 187 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 188 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieSoYoullHelp
# 189 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieSoYoullHelp
# 190 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowUp
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, SkyPillar_Top_Movement_GoodLeaderMoveForPlayer
# 192 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 193 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 194 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 195 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieYouStillDefy
# 196 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieYouStillDefy
# 197 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 198 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 199 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkSlowDown
# 200 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, SkyPillar_Top_Movement_GoodLeaderApproachEvilLeader
# 201 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 202 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_Maxie_ChoosePartyForMultiBattle
# 203 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_Archie_ChoosePartyForMultiBattle
# 204 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 205 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 206 "data/maps/SkyPillar_Top/scripts.pory"

# 207 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Archie_ChoosePartyForMultiBattle::
# 208 "data/maps/SkyPillar_Top/scripts.pory"
	special SavePlayerParty
# 209 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 210 "data/maps/SkyPillar_Top/scripts.pory"
	special ChooseHalfPartyForBattle
# 211 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 212 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SkyPillar_Top_EventScript_ArchieDoMultiBattle
# 213 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieYouWillNotStopMe, MSGBOX_AUTOCLOSE
# 214 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_Archie_ChoosePartyForMultiBattle
# 215 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 216 "data/maps/SkyPillar_Top/scripts.pory"

# 217 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieDoMultiBattle::
# 218 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_NONE, TRUE
# 219 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2_vs_1 TRAINER_ARCHIE_SKY_PILLAR, SkyPillar_Top_Text_EvilLeaderDefeat, PARTNER_MAXIE_SKY_PILLAR
# 220 "data/maps/SkyPillar_Top/scripts.pory"
	special LoadPlayerParty
# 221 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 222 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_FinaleVictory
# 223 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 225 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 226 "data/maps/SkyPillar_Top/scripts.pory"

# 227 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Maxie_ChoosePartyForMultiBattle::
# 228 "data/maps/SkyPillar_Top/scripts.pory"
	special SavePlayerParty
# 229 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 230 "data/maps/SkyPillar_Top/scripts.pory"
	special ChooseHalfPartyForBattle
# 231 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 232 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SkyPillar_Top_EventScript_MaxieDoMultiBattle
# 233 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieYouWillNotStopMe, MSGBOX_AUTOCLOSE
# 234 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_Maxie_ChoosePartyForMultiBattle
# 235 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 236 "data/maps/SkyPillar_Top/scripts.pory"

# 237 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieDoMultiBattle::
# 238 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_NONE, TRUE
# 239 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2_vs_1 TRAINER_MAXIE_SKY_PILLAR, SkyPillar_Top_Text_EvilLeaderDefeat, PARTNER_ARCHIE_SKY_PILLAR
# 240 "data/maps/SkyPillar_Top/scripts.pory"
	special LoadPlayerParty
# 241 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 242 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_FinaleVictory
# 243 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 244 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 245 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 246 "data/maps/SkyPillar_Top/scripts.pory"

# 247 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleVictory::
# 248 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 249 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, SkyPillar_Top_Movement_EvilLeaderKnockedBack
# 250 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_FaceUp
# 251 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 252 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieHowCanThisBe
# 253 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieHowCanThisBe
# 254 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 255 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 256 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 257 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 258 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 259 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 260 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 261 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 262 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 263 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 264 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_QuestionMark
# 265 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_QuestionMark
# 266 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 267 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_FaceRight
# 268 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_FaceRight
# 269 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 270 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 271 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 272 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 273 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 274 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 275 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 276 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 277 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 278 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 279 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 280 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 281 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE, SkyPillar_Top_Movement_RayquazaFlyOff
# 282 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 283 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE
# 284 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE_INVISIBLE
# 285 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 286 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_ABNORMAL
# 287 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 289 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 290 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 291 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_FaceUp
# 292 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 293 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 294 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 295 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieLostControl
# 296 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieLostControl
# 297 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterUp
# 298 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 299 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieDoYouSee
# 300 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieDoYouSee
# 301 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 302 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 303 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieBeenMisguided
# 304 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieBeenMisguided
# 305 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterDown
# 306 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 307 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieThankYou
# 308 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieThankYou
# 309 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterUp
# 310 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 311 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieComeMaxie
# 312 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieComeArchie
# 313 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_EXIT
# 314 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 315 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 316 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_ARCHIE
# 317 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_MAXIE
# 318 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_TABITHA
# 319 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_SHELLY
# 320 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_MATT
# 321 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_COURTNEY
# 322 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 323 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 68
# 324 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_LEVEL_CAP, 90
# 325 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_SKY_PILLAR_EVIL_TEAMS
# 326 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_ABNORMAL_WEATHER_RAIN
# 327 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 329 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_CUTSCENE_INVISIBLE
# 330 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA
# 331 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 332 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 333 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 334 "data/maps/SkyPillar_Top/scripts.pory"

# 335 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EvilLeaderDefeat:
# 336 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This should not be possible!$"
# 337 "data/maps/SkyPillar_Top/scripts.pory"

# 338 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieComeMaxie:
# 339 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Come, Maxie.\p"
# 340 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This situation is of our creation.\p"
# 341 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It is our responsibility to ensure\n"
# 342 "data/maps/SkyPillar_Top/scripts.pory"
	.string "it comes to a close.$"
# 343 "data/maps/SkyPillar_Top/scripts.pory"

# 344 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieComeArchie:
# 345 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Come, Archie.\p"
# 346 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This situation is of our creation.\p"
# 347 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It is our responsibility to ensure\n"
# 348 "data/maps/SkyPillar_Top/scripts.pory"
	.string "it comes to a close.$"
# 349 "data/maps/SkyPillar_Top/scripts.pory"

# 350 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieComeArchie::
# 351 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieComeArchie, MSGBOX_DEFAULT
# 352 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 353 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 354 "data/maps/SkyPillar_Top/scripts.pory"

# 355 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieComeMaxie::
# 356 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieComeMaxie, MSGBOX_DEFAULT
# 357 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 358 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 359 "data/maps/SkyPillar_Top/scripts.pory"

# 360 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieThankYou:
# 361 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: {PLAYER}, thank you, I don't\n"
# 362 "data/maps/SkyPillar_Top/scripts.pory"
	.string "believe that I could have defeated\l"
# 363 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie and that Pokémon alone.\p"
# 364 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's time for me to return to\n"
# 365 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Sootopolis.\p"
# 366 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I expect that you will be close\n"
# 367 "data/maps/SkyPillar_Top/scripts.pory"
	.string "behind, as you always are.$"
# 368 "data/maps/SkyPillar_Top/scripts.pory"

# 369 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieThankYou:
# 370 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: {PLAYER}, thank you, I don't\n"
# 371 "data/maps/SkyPillar_Top/scripts.pory"
	.string "believe that I could have defeated\l"
# 372 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie and that Pokémon alone.\p"
# 373 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's time for me to return to\n"
# 374 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Sootopolis.\p"
# 375 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I expect that you will be close\n"
# 376 "data/maps/SkyPillar_Top/scripts.pory"
	.string "behind, as you always are.$"
# 377 "data/maps/SkyPillar_Top/scripts.pory"

# 378 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieThankYou::
# 379 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieThankYou, MSGBOX_DEFAULT
# 380 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 381 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 382 "data/maps/SkyPillar_Top/scripts.pory"

# 383 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieThankYou::
# 384 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieThankYou, MSGBOX_DEFAULT
# 385 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 386 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 387 "data/maps/SkyPillar_Top/scripts.pory"

# 388 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieBeenMisguided:
# 389 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Could it really be that I\n"
# 390 "data/maps/SkyPillar_Top/scripts.pory"
	.string "have been misguided all this time…?$"
# 391 "data/maps/SkyPillar_Top/scripts.pory"

# 392 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieBeenMisguided:
# 393 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Could it really be that I\n"
# 394 "data/maps/SkyPillar_Top/scripts.pory"
	.string "have been misguided all this time…?$"
# 395 "data/maps/SkyPillar_Top/scripts.pory"

# 396 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieBeenMisguided::
# 397 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieBeenMisguided, MSGBOX_DEFAULT
# 398 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 399 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 400 "data/maps/SkyPillar_Top/scripts.pory"

# 401 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieBeenMisguided::
# 402 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieBeenMisguided, MSGBOX_DEFAULT
# 403 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 404 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 405 "data/maps/SkyPillar_Top/scripts.pory"

# 406 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieDoYouSee:
# 407 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Do you see now, Maxie?\p"
# 408 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We have tampered with forces beyond\n"
# 409 "data/maps/SkyPillar_Top/scripts.pory"
	.string "our control and our understanding.\p"
# 410 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Our only hope is for that Pokémon\n"
# 411 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to be heading to Sootopolis and\l"
# 412 "data/maps/SkyPillar_Top/scripts.pory"
	.string "putting an end to this chaos.$"
# 413 "data/maps/SkyPillar_Top/scripts.pory"

# 414 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieDoYouSee:
# 415 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Do you see now, Archie?\p"
# 416 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We have tampered with forces beyond\n"
# 417 "data/maps/SkyPillar_Top/scripts.pory"
	.string "our control and our understanding.\p"
# 418 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Our only hope is for that Pokémon\n"
# 419 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to be heading to Sootopolis and\l"
# 420 "data/maps/SkyPillar_Top/scripts.pory"
	.string "putting an end to this chaos.$"
# 421 "data/maps/SkyPillar_Top/scripts.pory"

# 422 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieDoYouSee::
# 423 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieDoYouSee, MSGBOX_DEFAULT
# 424 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 425 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 426 "data/maps/SkyPillar_Top/scripts.pory"

# 427 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieDoYouSee::
# 428 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieDoYouSee, MSGBOX_DEFAULT
# 429 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 430 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 431 "data/maps/SkyPillar_Top/scripts.pory"

# 432 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieLostControl:
# 433 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: What is this…\n"
# 434 "data/maps/SkyPillar_Top/scripts.pory"
	.string "My control is broken?\p"
# 435 "data/maps/SkyPillar_Top/scripts.pory"
	.string "First Kyogre, and now here too…$"
# 436 "data/maps/SkyPillar_Top/scripts.pory"

# 437 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieLostControl:
# 438 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: What is this…\n"
# 439 "data/maps/SkyPillar_Top/scripts.pory"
	.string "My control is broken?\p"
# 440 "data/maps/SkyPillar_Top/scripts.pory"
	.string "First Groudon, and now here too…$"
# 441 "data/maps/SkyPillar_Top/scripts.pory"

# 442 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieLostControl::
# 443 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieLostControl, MSGBOX_DEFAULT
# 444 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 445 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 446 "data/maps/SkyPillar_Top/scripts.pory"

# 447 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieLostControl::
# 448 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieLostControl, MSGBOX_DEFAULT
# 449 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 450 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 451 "data/maps/SkyPillar_Top/scripts.pory"

# 452 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieHowCanThisBe:
# 453 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: How can this be?!\p"
# 454 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Even with the power of this\n"
# 455 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Pokémon, I am still defeated?\p"
# 456 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This changes nothing. As long\n"
# 457 "data/maps/SkyPillar_Top/scripts.pory"
	.string "as I still… … …$"
# 458 "data/maps/SkyPillar_Top/scripts.pory"

# 459 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieHowCanThisBe:
# 460 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: How can this be?!\p"
# 461 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Even with the power of this\n"
# 462 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Pokémon, I am still defeated?\p"
# 463 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This changes nothing. As long\n"
# 464 "data/maps/SkyPillar_Top/scripts.pory"
	.string "as I still… … …$"
# 465 "data/maps/SkyPillar_Top/scripts.pory"

# 466 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieHowCanThisBe::
# 467 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieHowCanThisBe, MSGBOX_DEFAULT
# 468 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 469 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 470 "data/maps/SkyPillar_Top/scripts.pory"

# 471 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieHowCanThisBe::
# 472 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieHowCanThisBe, MSGBOX_DEFAULT
# 473 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 474 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 475 "data/maps/SkyPillar_Top/scripts.pory"

# 476 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EvilLeaderKnockedBack:
# 477 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 478 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 479 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 480 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 481 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 482 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 483 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 484 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 485 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_down
# 486 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 487 "data/maps/SkyPillar_Top/scripts.pory"

# 488 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_GoodLeaderApproachEvilLeader:
# 489 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 490 "data/maps/SkyPillar_Top/scripts.pory"
	face_left
# 491 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 492 "data/maps/SkyPillar_Top/scripts.pory"

# 493 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieYouWillNotStopMe:
# 494 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: You will not stop me.$"
# 495 "data/maps/SkyPillar_Top/scripts.pory"

# 496 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieYouWillNotStopMe:
# 497 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: You will not stop me.$"
# 498 "data/maps/SkyPillar_Top/scripts.pory"

# 499 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieYouStillDefy:
# 500 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Even now you still defy me?\p"
# 501 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It matters not. I will shape the world\n"
# 502 "data/maps/SkyPillar_Top/scripts.pory"
	.string "into one of Team Aqua's design.\p"
# 503 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You will not stand in my way.$"
# 504 "data/maps/SkyPillar_Top/scripts.pory"

# 505 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieYouStillDefy:
# 506 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Even now you still defy me?\p"
# 507 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It matters not. I will shape the world\n"
# 508 "data/maps/SkyPillar_Top/scripts.pory"
	.string "into one of Team Magma's design.\p"
# 509 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You will not stand in my way.$"
# 510 "data/maps/SkyPillar_Top/scripts.pory"

# 511 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieYouStillDefy::
# 512 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieYouStillDefy, MSGBOX_DEFAULT
# 513 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 514 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 515 "data/maps/SkyPillar_Top/scripts.pory"

# 516 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieYouStillDefy::
# 517 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieYouStillDefy, MSGBOX_DEFAULT
# 518 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 519 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 520 "data/maps/SkyPillar_Top/scripts.pory"

# 521 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_GoodLeaderMoveForPlayer:
# 522 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_right
# 523 "data/maps/SkyPillar_Top/scripts.pory"
	face_up
# 524 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 525 "data/maps/SkyPillar_Top/scripts.pory"

# 526 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieSoYoullHelp:
# 527 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: So you will help me?\p"
# 528 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\n"
# 529 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\p"
# 530 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Thank you.\p"
# 531 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Okay, let's do this.$"
# 532 "data/maps/SkyPillar_Top/scripts.pory"

# 533 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieSoYoullHelp:
# 534 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: So you will help me?\p"
# 535 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\n"
# 536 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\p"
# 537 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Thank you.\p"
# 538 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Okay, let's do this.$"
# 539 "data/maps/SkyPillar_Top/scripts.pory"

# 540 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieSoYoullHelp::
# 541 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieSoYoullHelp, MSGBOX_DEFAULT
# 542 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 543 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 544 "data/maps/SkyPillar_Top/scripts.pory"

# 545 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieSoYoullHelp::
# 546 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieSoYoullHelp, MSGBOX_DEFAULT
# 547 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 548 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 549 "data/maps/SkyPillar_Top/scripts.pory"

# 550 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_EmmieDefeatedMaxie::
# 551 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieDefeatedMaxie, MSGBOX_DEFAULT
# 552 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 553 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 554 "data/maps/SkyPillar_Top/scripts.pory"

# 555 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_EmmieDefeatedArchie::
# 556 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieDefeatedArchie, MSGBOX_DEFAULT
# 557 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 558 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 559 "data/maps/SkyPillar_Top/scripts.pory"

# 560 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieDefeatedArchie:
# 561 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: {PLAYER}, you've got this.\p"
# 562 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Together we've defeated Archie even\n"
# 563 "data/maps/SkyPillar_Top/scripts.pory"
	.string "when he had the power of Kyogre\l"
# 564 "data/maps/SkyPillar_Top/scripts.pory"
	.string "on his side.\p"
# 565 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You've also tackled both Team Aqua\n"
# 566 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and Team Magma without my help.\p"
# 567 "data/maps/SkyPillar_Top/scripts.pory"
	.string "After watching you and Archie\n"
# 568 "data/maps/SkyPillar_Top/scripts.pory"
	.string "defeat Maxie on Mt Pyre, I know\l"
# 569 "data/maps/SkyPillar_Top/scripts.pory"
	.string "that you can succeed here too.\p"
# 570 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Help Maxie defeat Archie and all\n"
# 571 "data/maps/SkyPillar_Top/scripts.pory"
	.string "this can finally end.\p"
# 572 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I believe in you!$"
# 573 "data/maps/SkyPillar_Top/scripts.pory"

# 574 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieDefeatedMaxie:
# 575 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: {PLAYER}, you've got this.\p"
# 576 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Together we've defeated Maxie even\n"
# 577 "data/maps/SkyPillar_Top/scripts.pory"
	.string "when he had the power of Groudon\l"
# 578 "data/maps/SkyPillar_Top/scripts.pory"
	.string "on his side.\p"
# 579 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You've also tackled both Team Aqua\n"
# 580 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and Team Magma without my help.\p"
# 581 "data/maps/SkyPillar_Top/scripts.pory"
	.string "After watching you and Maxie\n"
# 582 "data/maps/SkyPillar_Top/scripts.pory"
	.string "defeat Archie on Mt Pyre, I know\l"
# 583 "data/maps/SkyPillar_Top/scripts.pory"
	.string "that you can succeed here too.\p"
# 584 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Help Archie defeat Maxie and all\n"
# 585 "data/maps/SkyPillar_Top/scripts.pory"
	.string "this can finally end.\p"
# 586 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I believe in you!$"
# 587 "data/maps/SkyPillar_Top/scripts.pory"

# 588 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachPlayer:
# 589 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 590 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_right
# 591 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 592 "data/maps/SkyPillar_Top/scripts.pory"

# 593 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxiePleaseHelp:
# 594 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: {PLAYER}, Archie is refusing\n"
# 595 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to listen to reason.\p"
# 596 "data/maps/SkyPillar_Top/scripts.pory"
	.string "He is hell bent on using this Pokémon\n"
# 597 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to defeat Groudon and control Kyogre.\p"
# 598 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created was not \n"
# 599 "data/maps/SkyPillar_Top/scripts.pory"
	.string "part of my design.\p"
# 600 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I accept that I hold equal blame with\n"
# 601 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie, but I see now that we were\l"
# 602 "data/maps/SkyPillar_Top/scripts.pory"
	.string "playing with forces beyond our control.\p"
# 603 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I know that you do not trust me, but\n"
# 604 "data/maps/SkyPillar_Top/scripts.pory"
	.string "trust that I also want to stop Archie.\p"
# 605 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, help me stop Archie and together\n"
# 606 "data/maps/SkyPillar_Top/scripts.pory"
	.string "we can put an end to all this.$"
# 607 "data/maps/SkyPillar_Top/scripts.pory"

# 608 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchiePleaseHelp:
# 609 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: {PLAYER}, Maxie is refusing\n"
# 610 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to listen to reason.\p"
# 611 "data/maps/SkyPillar_Top/scripts.pory"
	.string "He is hell bent on using this Pokémon\n"
# 612 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to defeat Kyogre and control Groudon.\p"
# 613 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created was not \n"
# 614 "data/maps/SkyPillar_Top/scripts.pory"
	.string "part of my design.\p"
# 615 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I accept that I hold equal blame with\n"
# 616 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie, but I see now that we were\l"
# 617 "data/maps/SkyPillar_Top/scripts.pory"
	.string "playing with forces beyond our control.\p"
# 618 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I know that you do not trust me, but\n"
# 619 "data/maps/SkyPillar_Top/scripts.pory"
	.string "trust that I also want to stop Maxie.\p"
# 620 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, help me stop Maxie and together\n"
# 621 "data/maps/SkyPillar_Top/scripts.pory"
	.string "we can put an end to all this.$"
# 622 "data/maps/SkyPillar_Top/scripts.pory"

# 623 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchiePleaseHelp::
# 624 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchiePleaseHelp, MSGBOX_DEFAULT
# 625 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 626 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 627 "data/maps/SkyPillar_Top/scripts.pory"

# 628 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxiePleaseHelp::
# 629 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxiePleaseHelp, MSGBOX_DEFAULT
# 630 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 631 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 632 "data/maps/SkyPillar_Top/scripts.pory"

# 633 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieWeWillSubdue:
# 634 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Together we will subdue Groudon\n"
# 635 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and restrain the power of Kyogre.$"
# 636 "data/maps/SkyPillar_Top/scripts.pory"

# 637 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieWeWillSubdue:
# 638 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Together we will subdue Kyogre\n"
# 639 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and restrain the power of Groudon.$"
# 640 "data/maps/SkyPillar_Top/scripts.pory"

# 641 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieWeWillSubdue::
# 642 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieWeWillSubdue, MSGBOX_DEFAULT
# 643 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 644 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 645 "data/maps/SkyPillar_Top/scripts.pory"

# 646 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieWeWillSubdue::
# 647 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieWeWillSubdue, MSGBOX_DEFAULT
# 648 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 649 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 650 "data/maps/SkyPillar_Top/scripts.pory"

# 651 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaExitPokeball:
# 652 "data/maps/SkyPillar_Top/scripts.pory"
	exit_pokeball
# 653 "data/maps/SkyPillar_Top/scripts.pory"
	set_invisible
# 654 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 655 "data/maps/SkyPillar_Top/scripts.pory"

# 656 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieSeeHowControl:
# 657 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: See how this Pokémon eliminates\n"
# 658 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the effects of the weather distortion.\p"
# 659 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With its power, I can control Groudon's\n"
# 660 "data/maps/SkyPillar_Top/scripts.pory"
	.string "abilities.$"
# 661 "data/maps/SkyPillar_Top/scripts.pory"

# 662 "data/maps/SkyPillar_Top/scripts.pory"

# 663 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieSeeHowControl:
# 664 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: See how this Pokémon eliminates\n"
# 665 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the effects of the weather distortion.\p"
# 666 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With its power, I can control Kyogre's\n"
# 667 "data/maps/SkyPillar_Top/scripts.pory"
	.string "abilities.$"
# 668 "data/maps/SkyPillar_Top/scripts.pory"

# 669 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieSeeHowControl::
# 670 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieSeeHowControl, MSGBOX_DEFAULT
# 671 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 672 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 673 "data/maps/SkyPillar_Top/scripts.pory"

# 674 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieSeeHowControl::
# 675 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieSeeHowControl, MSGBOX_DEFAULT
# 676 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 677 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 678 "data/maps/SkyPillar_Top/scripts.pory"

# 679 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleCameraPanFromAction:
# 680 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 681 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 682 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 683 "data/maps/SkyPillar_Top/scripts.pory"

# 684 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaEnterPokeball:
# 685 "data/maps/SkyPillar_Top/scripts.pory"
	enter_pokeball
# 686 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 687 "data/maps/SkyPillar_Top/scripts.pory"

# 688 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieFailToSee::
# 689 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieFailToSee, MSGBOX_DEFAULT
# 690 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 691 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 692 "data/maps/SkyPillar_Top/scripts.pory"

# 693 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieFailToSee::
# 694 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieFailToSee, MSGBOX_DEFAULT
# 695 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 696 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 697 "data/maps/SkyPillar_Top/scripts.pory"

# 698 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieFailToSee:
# 699 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: As ever, Maxie, you fail to see\n"
# 700 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the bigger picture.\p"
# 701 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With the power of this Pokémon, Team\n"
# 702 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Aqua's world may not yet be lost.\p"
# 703 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Observe…$"
# 704 "data/maps/SkyPillar_Top/scripts.pory"

# 705 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieFailToSee:
# 706 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: As ever, Archie, you fail to see\n"
# 707 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the bigger picture.\p"
# 708 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With the power of this Pokémon, Team\n"
# 709 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Magma's world may not yet be lost.\p"
# 710 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Observe…$"
# 711 "data/maps/SkyPillar_Top/scripts.pory"

# 712 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleGoodLeaderPushedBack:
# 713 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 714 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 715 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 716 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 717 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 718 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 719 "data/maps/SkyPillar_Top/scripts.pory"

# 720 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchiePleadWithMaxie::
# 721 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchiePleadWithMaxie, MSGBOX_DEFAULT
# 722 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 723 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 724 "data/maps/SkyPillar_Top/scripts.pory"

# 725 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxiePleadWithArchie::
# 726 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxiePleadWithArchie, MSGBOX_DEFAULT
# 727 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 728 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 729 "data/maps/SkyPillar_Top/scripts.pory"

# 730 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxiePleadWithArchie:
# 731 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Archie, please, this has gone\n"
# 732 "data/maps/SkyPillar_Top/scripts.pory"
	.string "too far.\p"
# 733 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created… This is\n"
# 734 "data/maps/SkyPillar_Top/scripts.pory"
	.string "not the world Team Magma dreamed of.\p"
# 735 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This cannot be what you and Team Aqua\n"
# 736 "data/maps/SkyPillar_Top/scripts.pory"
	.string "want either?\p"
# 737 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The imbalance we have brought to the\n"
# 738 "data/maps/SkyPillar_Top/scripts.pory"
	.string "region must come to an end, but this\l"
# 739 "data/maps/SkyPillar_Top/scripts.pory"
	.string "isn't the way!$"
# 740 "data/maps/SkyPillar_Top/scripts.pory"

# 741 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchiePleadWithMaxie:
# 742 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Maxie, please, this has gone\n"
# 743 "data/maps/SkyPillar_Top/scripts.pory"
	.string "too far.\p"
# 744 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created… This is\n"
# 745 "data/maps/SkyPillar_Top/scripts.pory"
	.string "not the world Team Aqua dreamed of.\p"
# 746 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This cannot be what you and Team Magma\n"
# 747 "data/maps/SkyPillar_Top/scripts.pory"
	.string "want either?\p"
# 748 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The imbalance we have brought to the\n"
# 749 "data/maps/SkyPillar_Top/scripts.pory"
	.string "region must come to an end, but this\l"
# 750 "data/maps/SkyPillar_Top/scripts.pory"
	.string "isn't the way!$"
# 751 "data/maps/SkyPillar_Top/scripts.pory"

# 752 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleCameraPanToAction:
# 753 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 754 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 755 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 756 "data/maps/SkyPillar_Top/scripts.pory"

# 757 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleMaxieMusic::
# 758 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 759 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 760 "data/maps/SkyPillar_Top/scripts.pory"

# 761 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleArchieMusic::
# 762 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 763 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 764 "data/maps/SkyPillar_Top/scripts.pory"

# 765 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleEmmieApproach:
# 766 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 767 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 768 "data/maps/SkyPillar_Top/scripts.pory"
	face_up
# 769 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 770 "data/maps/SkyPillar_Top/scripts.pory"

# 771 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 772 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 773 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 774 "data/maps/SkyPillar_Top/scripts.pory"

# 775 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachMatt:
# 776 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 777 "data/maps/SkyPillar_Top/scripts.pory"
	walk_down
# 778 "data/maps/SkyPillar_Top/scripts.pory"
	face_left
# 779 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 780 "data/maps/SkyPillar_Top/scripts.pory"

# 781 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattLeaveWellAlone:
# 782 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: You two, again!\p"
# 783 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You just don't know when to quit\n"
# 784 "data/maps/SkyPillar_Top/scripts.pory"
	.string "do you?$"
# 785 "data/maps/SkyPillar_Top/scripts.pory"

# 786 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaTenacious:
# 787 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Heh… Tenacious aren't you…$"
# 788 "data/maps/SkyPillar_Top/scripts.pory"

# 789 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattBeenHereBefore:
# 790 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: We've been here before…\p"
# 791 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Let's get it right this time.$"
# 792 "data/maps/SkyPillar_Top/scripts.pory"

# 793 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaWhyNot:
# 794 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Sure, why not?$"
# 795 "data/maps/SkyPillar_Top/scripts.pory"

# 796 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaApproachPlayer:
# 797 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 798 "data/maps/SkyPillar_Top/scripts.pory"
	face_right
# 799 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 800 "data/maps/SkyPillar_Top/scripts.pory"

# 801 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaNotLikePyre:
# 802 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Hehehe… This isn't going to\n"
# 803 "data/maps/SkyPillar_Top/scripts.pory"
	.string "end like Mt Pyre!$"
# 804 "data/maps/SkyPillar_Top/scripts.pory"

# 805 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattDefeat:
# 806 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I concede. Team Aqua may never be able\n"
# 807 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to hold you back…$"
# 808 "data/maps/SkyPillar_Top/scripts.pory"

# 809 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaDefeat:
# 810 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Hehe… Hehehehe…$"
# 811 "data/maps/SkyPillar_Top/scripts.pory"

# 812 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaMattKnockedBack:
# 813 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 814 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_left
# 815 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 816 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 817 "data/maps/SkyPillar_Top/scripts.pory"

# 818 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattPostBattle:
# 819 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: Whatever happens now is beyond\n"
# 820 "data/maps/SkyPillar_Top/scripts.pory"
	.string "my control.$"
# 821 "data/maps/SkyPillar_Top/scripts.pory"

# 822 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaPostBattle:
# 823 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Nothing you say or do will\n"
# 824 "data/maps/SkyPillar_Top/scripts.pory"
	.string "ever weaken my faith in Maxie…$"
# 825 "data/maps/SkyPillar_Top/scripts.pory"

# 826 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_MattReturnToPosition:
# 827 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 828 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 829 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 830 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
# 831 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 832 "data/maps/SkyPillar_Top/scripts.pory"

# 833 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaReturnToPosition:
# 834 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 835 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
# 836 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 837 "data/maps/SkyPillar_Top/scripts.pory"

# 838 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieNearlyThere:
# 839 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: C'mon, {PLAYER}, we're almost\n"
# 840 "data/maps/SkyPillar_Top/scripts.pory"
	.string "there!$"
# 841 "data/maps/SkyPillar_Top/scripts.pory"

# 842 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabitha::
# 843 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 844 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 845 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 846 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachMatt
# 847 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 848 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_FACE_UP
# 849 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_FACE_DOWN
# 850 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_FaceRight
# 851 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_FaceRight
# 852 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 853 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 854 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_ExclamationMark
# 855 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_ExclamationMark
# 856 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 857 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterRight
# 858 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 859 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattLeaveWellAlone, MSGBOX_DEFAULT
# 860 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 861 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 862 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 863 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaTenacious, MSGBOX_DEFAULT
# 864 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 865 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_FaceDown
# 866 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterUp
# 867 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 868 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattBeenHereBefore, MSGBOX_DEFAULT
# 869 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 870 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 871 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 872 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaWhyNot, MSGBOX_DEFAULT
# 873 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 874 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaApproachPlayer
# 875 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkSlowRight
# 876 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowLeft
# 877 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowLeft
# 878 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 879 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 880 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 881 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaNotLikePyre, MSGBOX_DEFAULT
# 882 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 883 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_MattTabithaDoMultiBattle
# 884 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 885 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 886 "data/maps/SkyPillar_Top/scripts.pory"

# 887 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaDoMultiBattle::
# 888 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 889 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2p_vs_2 TRAINER_TABITHA_SKY_PILLAR, SkyPillar_Top_Text_TabithaDefeat, TRAINER_MATT_SKY_PILLAR, SkyPillar_Top_Text_MattDefeat, PARTNER_EMMIE
# 890 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 891 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_MattTabithaVictory
# 892 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 893 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 894 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 895 "data/maps/SkyPillar_Top/scripts.pory"

# 896 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaVictory::
# 897 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 898 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaMattKnockedBack
# 899 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, SkyPillar_Top_Movement_TabithaMattKnockedBack
# 900 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 901 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterRight
# 902 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 903 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattPostBattle, MSGBOX_DEFAULT
# 904 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 905 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 906 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 907 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaPostBattle, MSGBOX_DEFAULT
# 908 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 909 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, SkyPillar_Top_Movement_MattReturnToPosition
# 910 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaReturnToPosition
# 911 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowLeft
# 912 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 913 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_FACE_DOWN
# 914 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_FACE_DOWN
# 915 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 916 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 917 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 918 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieNearlyThere, MSGBOX_DEFAULT
# 919 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 920 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 921 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 922 "data/maps/SkyPillar_Top/scripts.pory"

# 923 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Matt::
# 924 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 925 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattPostBattle, MSGBOX_DEFAULT
# 926 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 927 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 928 "data/maps/SkyPillar_Top/scripts.pory"

# 929 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Tabitha::
# 930 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 931 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaPostBattle, MSGBOX_DEFAULT
# 932 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 933 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 934 "data/maps/SkyPillar_Top/scripts.pory"

# 935 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyNoInterruptions:
# 936 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: Maxie instructed me that\n"
# 937 "data/maps/SkyPillar_Top/scripts.pory"
	.string "there are to be no interruptions.\p"
# 938 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Nobody makes me break a promise with\n"
# 939 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie, especially not you Shelly!$"
# 940 "data/maps/SkyPillar_Top/scripts.pory"

# 941 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_PlayerApproachShelly:
# 942 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 943 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 944 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 945 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 946 "data/maps/SkyPillar_Top/scripts.pory"

# 947 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachCourtney:
# 948 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 949 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 950 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 951 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 952 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 953 "data/maps/SkyPillar_Top/scripts.pory"

# 954 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyShouldHaveKnown:
# 955 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Shelly: I should have known you two\n"
# 956 "data/maps/SkyPillar_Top/scripts.pory"
	.string "would turn up sooner or later…\p"
# 957 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I trust that Archie knows what's\n"
# 958 "data/maps/SkyPillar_Top/scripts.pory"
	.string "best, and every time you show up,\l"
# 959 "data/maps/SkyPillar_Top/scripts.pory"
	.string "things only ever get worse…$"
# 960 "data/maps/SkyPillar_Top/scripts.pory"

# 961 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneySpeechless:
# 962 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: … … … … … …$"
# 963 "data/maps/SkyPillar_Top/scripts.pory"

# 964 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShellyCourtney::
# 965 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 966 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_FACE_RIGHT
# 967 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_FACE_LEFT
# 968 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SkyPillar_Top_Movement_PlayerApproachShelly
# 969 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachCourtney
# 970 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 971 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 972 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 973 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 974 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyNoInterruptions, MSGBOX_DEFAULT
# 975 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 976 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_FaceDown
# 977 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_FaceDown
# 978 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 979 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 980 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_ExclamationMark
# 981 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_ExclamationMark
# 982 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 983 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 984 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 985 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyShouldHaveKnown, MSGBOX_DEFAULT
# 986 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 987 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_FaceRight
# 988 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_FaceLeft
# 989 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 990 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 991 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneySpeechless, MSGBOX_DEFAULT
# 992 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 993 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkDown
# 994 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkDown
# 995 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 996 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_CourtneyShellyDoMultiBattle
# 997 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 998 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 999 "data/maps/SkyPillar_Top/scripts.pory"

# 1000 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CourtneyShellyDoMultiBattle::
# 1001 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 1002 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_FACE_DOWN
# 1003 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_FACE_DOWN
# 1004 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2p_vs_2 TRAINER_SHELLY_SKY_PILLAR, SkyPillar_Top_Text_ShellyDefeat, TRAINER_COURTNEY_SKY_PILLAR, SkyPillar_Top_Text_CourtneyDefeat, PARTNER_EMMIE
# 1005 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 1006 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_CourtneyShellyVictory
# 1007 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1008 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 1009 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1010 "data/maps/SkyPillar_Top/scripts.pory"

# 1011 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CourtneyShellyVictory::
# 1012 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 1013 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, SkyPillar_Top_Movement_CourtneyShellyKnockedBack
# 1014 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, SkyPillar_Top_Movement_CourtneyShellyKnockedBack
# 1015 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1016 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 1017 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1018 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 1019 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1020 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 1021 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1022 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 1023 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1024 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowRight
# 1025 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 1026 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1027 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieThisIsIt, MSGBOX_DEFAULT
# 1028 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1029 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 1030 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1031 "data/maps/SkyPillar_Top/scripts.pory"

# 1032 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Shelly::
# 1033 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 1034 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 1035 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1036 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1037 "data/maps/SkyPillar_Top/scripts.pory"

# 1038 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Courtney::
# 1039 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 1040 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 1041 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1042 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1043 "data/maps/SkyPillar_Top/scripts.pory"

# 1044 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyDefeat:
# 1045 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maybe I was wrong about you…\n"
# 1046 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Perhaps you are the answer…$"
# 1047 "data/maps/SkyPillar_Top/scripts.pory"

# 1048 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyDefeat:
# 1049 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie trusted me and I've let\n"
# 1050 "data/maps/SkyPillar_Top/scripts.pory"
	.string "him down…$"
# 1051 "data/maps/SkyPillar_Top/scripts.pory"

# 1052 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieThisIsIt:
# 1053 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: We made it, {PLAYER}.\n"
# 1054 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie and Maxie are up ahead.\p"
# 1055 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Once we get involved, there's no\n"
# 1056 "data/maps/SkyPillar_Top/scripts.pory"
	.string "turning back.\p"
# 1057 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We better make sure we're prepared\n"
# 1058 "data/maps/SkyPillar_Top/scripts.pory"
	.string "before we go any further.$"
# 1059 "data/maps/SkyPillar_Top/scripts.pory"

# 1060 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyPostBattle:
# 1061 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: Please! You can't interrupt\n"
# 1062 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie now, this is too important!$"
# 1063 "data/maps/SkyPillar_Top/scripts.pory"

# 1064 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyPostBattle:
# 1065 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Shelly: There really is no stopping\n"
# 1066 "data/maps/SkyPillar_Top/scripts.pory"
	.string "you two is there…$"
# 1067 "data/maps/SkyPillar_Top/scripts.pory"

# 1068 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CourtneyShellyKnockedBack:
# 1069 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 1070 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 1071 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 1072 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1073 "data/maps/SkyPillar_Top/scripts.pory"

# 1074 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 1075 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 1076 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1077 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1078 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 1079 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 1080 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 1081 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1082 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1083 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1084 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1085 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 1086 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 1087 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 1088 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 1089 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 1090 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1091 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1092 "data/maps/SkyPillar_Top/scripts.pory"

# 1093 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 1094 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 1095 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 1096 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1097 "data/maps/SkyPillar_Top/scripts.pory"

# 1098 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 1099 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 1100 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 1101 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1102 "data/maps/SkyPillar_Top/scripts.pory"

# 1103 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 1104 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1105 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1106 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1107 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1108 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1109 "data/maps/SkyPillar_Top/scripts.pory"

# 1110 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 1111 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1112 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1113 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1114 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 1115 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 1116 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1117 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1118 "data/maps/SkyPillar_Top/scripts.pory"

# 1119 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 1120 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 1121 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 1122 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1123 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1124 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 1125 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 1126 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1127 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 1128 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 1129 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1130 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1131 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1132 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 1133 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 1134 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 1135 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 1136 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 1137 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1138 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1139 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1140 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 1141 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 1142 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 1143 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 1144 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 1145 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1146 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 1147 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 1148 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1149 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 1150 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 1151 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1152 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 1153 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 1154 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 1155 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 1156 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1157 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 1158 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 1159 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 1160 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 1161 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1162 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1163 "data/maps/SkyPillar_Top/scripts.pory"

# 1164 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 1165 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 1166 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 1167 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1168 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 1169 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1170 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1171 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1172 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1173 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1174 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 1175 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1176 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 1177 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1178 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1179 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1180 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1181 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1182 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1183 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1184 "data/maps/SkyPillar_Top/scripts.pory"

# 1185 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 1186 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1187 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 1188 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 1189 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 1190 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 1191 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 1192 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1193 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1194 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1195 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1196 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1197 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1198 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1199 "data/maps/SkyPillar_Top/scripts.pory"

# 1200 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 1201 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1202 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1203 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1204 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1205 "data/maps/SkyPillar_Top/scripts.pory"

# 1206 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 1207 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1208 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1209 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1210 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1211 "data/maps/SkyPillar_Top/scripts.pory"

# 1212 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 1213 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"
