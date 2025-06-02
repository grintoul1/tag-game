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
	.byte 0
# 8 "data/maps/SkyPillar_Top/scripts.pory"

# 9 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume:
# 10 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
# 11 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 12 "data/maps/SkyPillar_Top/scripts.pory"

# 13 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 14 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 18 "data/maps/SkyPillar_Top/scripts.pory"

# 19 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition:
# 20 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 8, SkyPillar_Top_EventScript_SetCleanLayout
# 21 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 7, SkyPillar_Top_EventScript_SetWeather
# 22 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 7, SkyPillar_Top_EventScript_HideRayquaza
# 23 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 9, SkyPillar_Top_EventScript_TryShowRayquaza
# 24 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_MattTabithaPos
# 25 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_LeaderVars
# 26 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 4, SkyPillar_Top_EventScript_LeaderPos
# 27 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 28 "data/maps/SkyPillar_Top/scripts.pory"

# 29 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_HideRayquaza::
# 30 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_RAYQUAZA_STILL
# 31 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 32 "data/maps/SkyPillar_Top/scripts.pory"

# 33 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetWeather:
# 34 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_ABNORMAL
# 35 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 36 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 37 "data/maps/SkyPillar_Top/scripts.pory"

# 38 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaPos::
# 39 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectxyperm LOCALID_SKYPILLAR_MATT, 12, 21
# 40 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectxyperm LOCALID_SKYPILLAR_TABITHA, 12, 19
# 41 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 42 "data/maps/SkyPillar_Top/scripts.pory"

# 43 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_LeaderPos::
# 44 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectxyperm VAR_0x8003, 12, 9
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype VAR_0x8003, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 47 "data/maps/SkyPillar_Top/scripts.pory"

# 48 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_LeaderVars::
# 49 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieVars
# 50 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieVars
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 52 "data/maps/SkyPillar_Top/scripts.pory"

# 53 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 56 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 57 "data/maps/SkyPillar_Top/scripts.pory"

# 58 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 61 "data/maps/SkyPillar_Top/scripts.pory"

# 62 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 65 "data/maps/SkyPillar_Top/scripts.pory"

# 66 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 67 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 69 "data/maps/SkyPillar_Top/scripts.pory"

# 70 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieVars::
# 71 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8002, LOCALID_SKYPILLAR_MAXIE
# 72 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8003, LOCALID_SKYPILLAR_ARCHIE
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 74 "data/maps/SkyPillar_Top/scripts.pory"

# 75 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieVars::
# 76 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8002, LOCALID_SKYPILLAR_ARCHIE
# 77 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8003, LOCALID_SKYPILLAR_MAXIE
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 79 "data/maps/SkyPillar_Top/scripts.pory"

# 80 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Finale::
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_WalkUp
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER SkyPillar_Top_Movement_FinaleEmmieApproach
# 83 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 84 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanToAction
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 88 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_FinaleMaxieMusic
# 89 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_FinaleArchieMusic
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkUp
# 92 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 93 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchiePleadWithMaxie
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxiePleadWithArchie
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, SkyPillar_Top_Movement_FinaleGoodLeaderPushedBack
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkSlowDown
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieFailToSee
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieFailToSee
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanToAction
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkUp
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_THROW
# 116 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaEnterPokeball
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanFromAction
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkDown
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 131 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	delay 360
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_DROUGHT
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieSeeHowControl
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieSeeHowControl
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterRight
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0 
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_BOUNCE_2
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_OPEN
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE_INVISIBLE, SkyPillar_Top_Movement_RayquazaExitPokeball
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	addobject LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_NONE
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanFromAction
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieWeWillSubdue
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieWeWillSubdue
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	delay 12
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterDown
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchiePleaseHelp
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxiePleaseHelp
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachPlayer
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_EmmieDefeatedMaxie
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_EmmieDefeatedArchie
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterDown
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieSoYoullHelp
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieSoYoullHelp
# 180 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowUp
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, SkyPillar_Top_Movement_GoodLeaderMoveForPlayer
# 182 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 183 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 184 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 185 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieYouStillDefy
# 186 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieYouStillDefy
# 187 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 188 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 189 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkSlowDown
# 190 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, SkyPillar_Top_Movement_GoodLeaderApproachEvilLeader
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 192 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_Maxie_ChoosePartyForMultiBattle
# 193 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_Archie_ChoosePartyForMultiBattle
# 194 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 195 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 196 "data/maps/SkyPillar_Top/scripts.pory"

# 197 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Archie_ChoosePartyForMultiBattle::
# 198 "data/maps/SkyPillar_Top/scripts.pory"
	special SavePlayerParty
# 199 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 200 "data/maps/SkyPillar_Top/scripts.pory"
	special ChooseHalfPartyForBattle
# 201 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 202 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SkyPillar_Top_EventScript_ArchieDoMultiBattle
# 203 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieYouWillNotStopMe, MSGBOX_AUTOCLOSE
# 204 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_Archie_ChoosePartyForMultiBattle
# 205 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 206 "data/maps/SkyPillar_Top/scripts.pory"

# 207 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieDoMultiBattle::
# 208 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_NONE, TRUE
# 209 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2_vs_1 TRAINER_ARCHIE_SKY_PILLAR, SkyPillar_Top_Text_EvilLeaderDefeat, PARTNER_MAXIE_SKY_PILLAR
# 210 "data/maps/SkyPillar_Top/scripts.pory"
	special LoadPlayerParty
# 211 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 212 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_FinaleVictory
# 213 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 214 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 215 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 216 "data/maps/SkyPillar_Top/scripts.pory"

# 217 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Maxie_ChoosePartyForMultiBattle::
# 218 "data/maps/SkyPillar_Top/scripts.pory"
	special SavePlayerParty
# 219 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 220 "data/maps/SkyPillar_Top/scripts.pory"
	special ChooseHalfPartyForBattle
# 221 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 222 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SkyPillar_Top_EventScript_MaxieDoMultiBattle
# 223 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieYouWillNotStopMe, MSGBOX_AUTOCLOSE
# 224 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_Maxie_ChoosePartyForMultiBattle
# 225 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 226 "data/maps/SkyPillar_Top/scripts.pory"

# 227 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieDoMultiBattle::
# 228 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_NONE, TRUE
# 229 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2_vs_1 TRAINER_MAXIE_SKY_PILLAR, SkyPillar_Top_Text_EvilLeaderDefeat, PARTNER_ARCHIE_SKY_PILLAR
# 230 "data/maps/SkyPillar_Top/scripts.pory"
	special LoadPlayerParty
# 231 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 232 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_FinaleVictory
# 233 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 234 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 235 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 236 "data/maps/SkyPillar_Top/scripts.pory"

# 237 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleVictory::
# 238 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 239 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, SkyPillar_Top_Movement_EvilLeaderKnockedBack
# 240 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_FaceUp
# 241 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 242 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieHowCanThisBe
# 243 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieHowCanThisBe
# 244 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 245 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 246 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 247 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 248 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 249 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 250 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 251 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 252 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 253 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 254 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_QuestionMark
# 255 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_QuestionMark
# 256 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 257 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_FaceRight
# 258 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_FaceRight
# 259 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 260 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 261 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 262 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 263 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 264 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 265 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 266 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 267 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 268 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 269 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 270 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 271 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE, SkyPillar_Top_Movement_RayquazaFlyOff
# 272 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 273 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE
# 274 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE_INVISIBLE
# 275 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 276 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_ABNORMAL
# 277 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 278 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 279 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 280 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 281 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_FaceUp
# 282 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 283 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 284 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 285 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieLostControl
# 286 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieLostControl
# 287 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterUp
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 289 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieDoYouSee
# 290 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieDoYouSee
# 291 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 292 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 293 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieBeenMisguided
# 294 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieBeenMisguided
# 295 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterDown
# 296 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 297 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieThankYou
# 298 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieThankYou
# 299 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterUp
# 300 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 301 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieComeMaxie
# 302 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieComeArchie
# 303 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_EXIT
# 304 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 305 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 306 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_ARCHIE
# 307 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_MAXIE
# 308 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_TABITHA
# 309 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_SHELLY
# 310 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_MATT
# 311 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_COURTNEY
# 312 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 313 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_SKY_PILLAR_EVIL_TEAMS
# 314 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_ABNORMAL_WEATHER_RAIN
# 315 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 316 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 317 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_CUTSCENE_INVISIBLE
# 318 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 319 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 320 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 321 "data/maps/SkyPillar_Top/scripts.pory"

# 322 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EvilLeaderDefeat:
# 323 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This should not be possible!$"
# 324 "data/maps/SkyPillar_Top/scripts.pory"

# 325 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieComeMaxie:
# 326 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Come, Maxie.\p"
# 327 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This situation is of our creation.\p"
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It is our responsibility to ensure\n"
# 329 "data/maps/SkyPillar_Top/scripts.pory"
	.string "it comes to a close.$"
# 330 "data/maps/SkyPillar_Top/scripts.pory"

# 331 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieComeArchie:
# 332 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Come, Archie.\p"
# 333 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This situation is of our creation.\p"
# 334 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It is our responsibility to ensure\n"
# 335 "data/maps/SkyPillar_Top/scripts.pory"
	.string "it comes to a close.$"
# 336 "data/maps/SkyPillar_Top/scripts.pory"

# 337 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieComeArchie::
# 338 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieComeArchie, MSGBOX_DEFAULT
# 339 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 340 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 341 "data/maps/SkyPillar_Top/scripts.pory"

# 342 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieComeMaxie::
# 343 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieComeMaxie, MSGBOX_DEFAULT
# 344 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 345 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 346 "data/maps/SkyPillar_Top/scripts.pory"

# 347 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieThankYou:
# 348 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: {PLAYER}, thank you, I don't\n"
# 349 "data/maps/SkyPillar_Top/scripts.pory"
	.string "believe that I could have defeated\l"
# 350 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie and that Pokémon alone.\p"
# 351 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's time for me to return to\n"
# 352 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Sootopolis.\p"
# 353 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I expect that you will be close\n"
# 354 "data/maps/SkyPillar_Top/scripts.pory"
	.string "behind, as you always are.$"
# 355 "data/maps/SkyPillar_Top/scripts.pory"

# 356 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieThankYou:
# 357 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: {PLAYER}, thank you, I don't\n"
# 358 "data/maps/SkyPillar_Top/scripts.pory"
	.string "believe that I could have defeated\l"
# 359 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie and that Pokémon alone.\p"
# 360 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's time for me to return to\n"
# 361 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Sootopolis.\p"
# 362 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I expect that you will be close\n"
# 363 "data/maps/SkyPillar_Top/scripts.pory"
	.string "behind, as you always are.$"
# 364 "data/maps/SkyPillar_Top/scripts.pory"

# 365 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieThankYou::
# 366 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieThankYou, MSGBOX_DEFAULT
# 367 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 368 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 369 "data/maps/SkyPillar_Top/scripts.pory"

# 370 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieThankYou::
# 371 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieThankYou, MSGBOX_DEFAULT
# 372 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 373 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 374 "data/maps/SkyPillar_Top/scripts.pory"

# 375 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieBeenMisguided:
# 376 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Could it really be that I\n"
# 377 "data/maps/SkyPillar_Top/scripts.pory"
	.string "have been misguided all this time…?$"
# 378 "data/maps/SkyPillar_Top/scripts.pory"

# 379 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieBeenMisguided:
# 380 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Could it really be that I\n"
# 381 "data/maps/SkyPillar_Top/scripts.pory"
	.string "have been misguided all this time…?$"
# 382 "data/maps/SkyPillar_Top/scripts.pory"

# 383 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieBeenMisguided::
# 384 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieBeenMisguided, MSGBOX_DEFAULT
# 385 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 386 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 387 "data/maps/SkyPillar_Top/scripts.pory"

# 388 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieBeenMisguided::
# 389 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieBeenMisguided, MSGBOX_DEFAULT
# 390 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 391 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 392 "data/maps/SkyPillar_Top/scripts.pory"

# 393 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieDoYouSee:
# 394 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Do you see now, Maxie?\p"
# 395 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We have tampered with forces beyond\n"
# 396 "data/maps/SkyPillar_Top/scripts.pory"
	.string "our control and our understanding.\p"
# 397 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Our only hope is for that Pokémon\n"
# 398 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to be heading to Sootopolis and\l"
# 399 "data/maps/SkyPillar_Top/scripts.pory"
	.string "putting an end to this chaos.$"
# 400 "data/maps/SkyPillar_Top/scripts.pory"

# 401 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieDoYouSee:
# 402 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Do you see now, Archie?\p"
# 403 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We have tampered with forces beyond\n"
# 404 "data/maps/SkyPillar_Top/scripts.pory"
	.string "our control and our understanding.\p"
# 405 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Our only hope is for that Pokémon\n"
# 406 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to be heading to Sootopolis and\l"
# 407 "data/maps/SkyPillar_Top/scripts.pory"
	.string "putting an end to this chaos.$"
# 408 "data/maps/SkyPillar_Top/scripts.pory"

# 409 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieDoYouSee::
# 410 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieDoYouSee, MSGBOX_DEFAULT
# 411 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 412 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 413 "data/maps/SkyPillar_Top/scripts.pory"

# 414 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieDoYouSee::
# 415 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieDoYouSee, MSGBOX_DEFAULT
# 416 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 417 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 418 "data/maps/SkyPillar_Top/scripts.pory"

# 419 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieLostControl:
# 420 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: What is this…\n"
# 421 "data/maps/SkyPillar_Top/scripts.pory"
	.string "My control is broken?\p"
# 422 "data/maps/SkyPillar_Top/scripts.pory"
	.string "First Kyogre, and now here too…$"
# 423 "data/maps/SkyPillar_Top/scripts.pory"

# 424 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieLostControl:
# 425 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: What is this…\n"
# 426 "data/maps/SkyPillar_Top/scripts.pory"
	.string "My control is broken?\p"
# 427 "data/maps/SkyPillar_Top/scripts.pory"
	.string "First Groudon, and now here too…$"
# 428 "data/maps/SkyPillar_Top/scripts.pory"

# 429 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieLostControl::
# 430 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieLostControl, MSGBOX_DEFAULT
# 431 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 432 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 433 "data/maps/SkyPillar_Top/scripts.pory"

# 434 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieLostControl::
# 435 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieLostControl, MSGBOX_DEFAULT
# 436 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 437 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 438 "data/maps/SkyPillar_Top/scripts.pory"

# 439 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieHowCanThisBe:
# 440 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: How can this be?!\p"
# 441 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Even with the power of this\n"
# 442 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Pokémon, I am still defeated?\p"
# 443 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This changes nothing. As long\n"
# 444 "data/maps/SkyPillar_Top/scripts.pory"
	.string "as I still… … …$"
# 445 "data/maps/SkyPillar_Top/scripts.pory"

# 446 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieHowCanThisBe:
# 447 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: How can this be?!\p"
# 448 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Even with the power of this\n"
# 449 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Pokémon, I am still defeated?\p"
# 450 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This changes nothing. As long\n"
# 451 "data/maps/SkyPillar_Top/scripts.pory"
	.string "as I still… … …$"
# 452 "data/maps/SkyPillar_Top/scripts.pory"

# 453 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieHowCanThisBe::
# 454 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieHowCanThisBe, MSGBOX_DEFAULT
# 455 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 456 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 457 "data/maps/SkyPillar_Top/scripts.pory"

# 458 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieHowCanThisBe::
# 459 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieHowCanThisBe, MSGBOX_DEFAULT
# 460 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 461 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 462 "data/maps/SkyPillar_Top/scripts.pory"

# 463 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EvilLeaderKnockedBack:
# 464 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 465 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 466 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 467 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 468 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 469 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 470 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 471 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 472 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_down
# 473 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 474 "data/maps/SkyPillar_Top/scripts.pory"

# 475 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_GoodLeaderApproachEvilLeader:
# 476 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 477 "data/maps/SkyPillar_Top/scripts.pory"
	face_left
# 478 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 479 "data/maps/SkyPillar_Top/scripts.pory"

# 480 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieYouWillNotStopMe:
# 481 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: You will not stop me.$"
# 482 "data/maps/SkyPillar_Top/scripts.pory"

# 483 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieYouWillNotStopMe:
# 484 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: You will not stop me.$"
# 485 "data/maps/SkyPillar_Top/scripts.pory"

# 486 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieYouStillDefy:
# 487 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Even now you still defy me?\p"
# 488 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It matters not. I will shape the world\n"
# 489 "data/maps/SkyPillar_Top/scripts.pory"
	.string "into one of Team Aqua's design.\p"
# 490 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You will not stand in my way.$"
# 491 "data/maps/SkyPillar_Top/scripts.pory"

# 492 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieYouStillDefy:
# 493 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Even now you still defy me?\p"
# 494 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It matters not. I will shape the world\n"
# 495 "data/maps/SkyPillar_Top/scripts.pory"
	.string "into one of Team Magma's design.\p"
# 496 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You will not stand in my way.$"
# 497 "data/maps/SkyPillar_Top/scripts.pory"

# 498 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieYouStillDefy::
# 499 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieYouStillDefy, MSGBOX_DEFAULT
# 500 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 501 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 502 "data/maps/SkyPillar_Top/scripts.pory"

# 503 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieYouStillDefy::
# 504 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieYouStillDefy, MSGBOX_DEFAULT
# 505 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 506 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 507 "data/maps/SkyPillar_Top/scripts.pory"

# 508 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_GoodLeaderMoveForPlayer:
# 509 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_right
# 510 "data/maps/SkyPillar_Top/scripts.pory"
	face_up
# 511 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 512 "data/maps/SkyPillar_Top/scripts.pory"

# 513 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieSoYoullHelp:
# 514 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: So you will help me?\p"
# 515 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\n"
# 516 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\p"
# 517 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Thank you.\p"
# 518 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Okay, let's do this.$"
# 519 "data/maps/SkyPillar_Top/scripts.pory"

# 520 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieSoYoullHelp:
# 521 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: So you will help me?\p"
# 522 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\n"
# 523 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\p"
# 524 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Thank you.\p"
# 525 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Okay, let's do this.$"
# 526 "data/maps/SkyPillar_Top/scripts.pory"

# 527 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieSoYoullHelp::
# 528 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieSoYoullHelp, MSGBOX_DEFAULT
# 529 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 530 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 531 "data/maps/SkyPillar_Top/scripts.pory"

# 532 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieSoYoullHelp::
# 533 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieSoYoullHelp, MSGBOX_DEFAULT
# 534 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 535 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 536 "data/maps/SkyPillar_Top/scripts.pory"

# 537 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_EmmieDefeatedMaxie::
# 538 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieDefeatedMaxie, MSGBOX_DEFAULT
# 539 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 540 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 541 "data/maps/SkyPillar_Top/scripts.pory"

# 542 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_EmmieDefeatedArchie::
# 543 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieDefeatedArchie, MSGBOX_DEFAULT
# 544 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 545 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 546 "data/maps/SkyPillar_Top/scripts.pory"

# 547 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieDefeatedArchie:
# 548 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: {PLAYER}, you've got this.\p"
# 549 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Together we've defeated Archie even\n"
# 550 "data/maps/SkyPillar_Top/scripts.pory"
	.string "when he had the power of Kyogre\l"
# 551 "data/maps/SkyPillar_Top/scripts.pory"
	.string "on his side.\p"
# 552 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You've also tackled both Team Aqua\n"
# 553 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and Team Magma without my help.\p"
# 554 "data/maps/SkyPillar_Top/scripts.pory"
	.string "After watching you and Archie\n"
# 555 "data/maps/SkyPillar_Top/scripts.pory"
	.string "defeat Maxie on Mt Pyre, I know\l"
# 556 "data/maps/SkyPillar_Top/scripts.pory"
	.string "that you can succeed here too.\p"
# 557 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Help Maxie defeat Archie and all\n"
# 558 "data/maps/SkyPillar_Top/scripts.pory"
	.string "this can finally end.\p"
# 559 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I believe in you!$"
# 560 "data/maps/SkyPillar_Top/scripts.pory"

# 561 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieDefeatedMaxie:
# 562 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: {PLAYER}, you've got this.\p"
# 563 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Together we've defeated Maxie even\n"
# 564 "data/maps/SkyPillar_Top/scripts.pory"
	.string "when he had the power of Groudon\l"
# 565 "data/maps/SkyPillar_Top/scripts.pory"
	.string "on his side.\p"
# 566 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You've also tackled both Team Aqua\n"
# 567 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and Team Magma without my help.\p"
# 568 "data/maps/SkyPillar_Top/scripts.pory"
	.string "After watching you and Maxie\n"
# 569 "data/maps/SkyPillar_Top/scripts.pory"
	.string "defeat Archie on Mt Pyre, I know\l"
# 570 "data/maps/SkyPillar_Top/scripts.pory"
	.string "that you can succeed here too.\p"
# 571 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Help Archie defeat Maxie and all\n"
# 572 "data/maps/SkyPillar_Top/scripts.pory"
	.string "this can finally end.\p"
# 573 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I believe in you!$"
# 574 "data/maps/SkyPillar_Top/scripts.pory"

# 575 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachPlayer:
# 576 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 577 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_right
# 578 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 579 "data/maps/SkyPillar_Top/scripts.pory"

# 580 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxiePleaseHelp:
# 581 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: {PLAYER}, Archie is refusing\n"
# 582 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to listen to reason.\p"
# 583 "data/maps/SkyPillar_Top/scripts.pory"
	.string "He is hell bent on using this Pokémon\n"
# 584 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to defeat Groudon and control Kyogre.\p"
# 585 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created was not \n"
# 586 "data/maps/SkyPillar_Top/scripts.pory"
	.string "part of my design.\p"
# 587 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I accept that I hold equal blame with\n"
# 588 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie, but I see now that we were\l"
# 589 "data/maps/SkyPillar_Top/scripts.pory"
	.string "playing with forces beyond our control.\p"
# 590 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I know that you do not trust me, but\n"
# 591 "data/maps/SkyPillar_Top/scripts.pory"
	.string "trust that I also want to stop Archie.\p"
# 592 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, help me stop Archie and together\n"
# 593 "data/maps/SkyPillar_Top/scripts.pory"
	.string "we can put an end to all this.$"
# 594 "data/maps/SkyPillar_Top/scripts.pory"

# 595 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchiePleaseHelp:
# 596 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: {PLAYER}, Maxie is refusing\n"
# 597 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to listen to reason.\p"
# 598 "data/maps/SkyPillar_Top/scripts.pory"
	.string "He is hell bent on using this Pokémon\n"
# 599 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to defeat Kyogre and control Groudon.\p"
# 600 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created was not \n"
# 601 "data/maps/SkyPillar_Top/scripts.pory"
	.string "part of my design.\p"
# 602 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I accept that I hold equal blame with\n"
# 603 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie, but I see now that we were\l"
# 604 "data/maps/SkyPillar_Top/scripts.pory"
	.string "playing with forces beyond our control.\p"
# 605 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I know that you do not trust me, but\n"
# 606 "data/maps/SkyPillar_Top/scripts.pory"
	.string "trust that I also want to stop Maxie.\p"
# 607 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, help me stop Maxie and together\n"
# 608 "data/maps/SkyPillar_Top/scripts.pory"
	.string "we can put an end to all this.$"
# 609 "data/maps/SkyPillar_Top/scripts.pory"

# 610 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchiePleaseHelp::
# 611 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchiePleaseHelp, MSGBOX_DEFAULT
# 612 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 613 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 614 "data/maps/SkyPillar_Top/scripts.pory"

# 615 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxiePleaseHelp::
# 616 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxiePleaseHelp, MSGBOX_DEFAULT
# 617 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 618 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 619 "data/maps/SkyPillar_Top/scripts.pory"

# 620 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieWeWillSubdue:
# 621 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Together we will subdue Groudon\n"
# 622 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and restrain the power of Kyogre.$"
# 623 "data/maps/SkyPillar_Top/scripts.pory"

# 624 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieWeWillSubdue:
# 625 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Together we will subdue Kyogre\n"
# 626 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and restrain the power of Groudon.$"
# 627 "data/maps/SkyPillar_Top/scripts.pory"

# 628 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieWeWillSubdue::
# 629 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieWeWillSubdue, MSGBOX_DEFAULT
# 630 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 631 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 632 "data/maps/SkyPillar_Top/scripts.pory"

# 633 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieWeWillSubdue::
# 634 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieWeWillSubdue, MSGBOX_DEFAULT
# 635 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 636 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 637 "data/maps/SkyPillar_Top/scripts.pory"

# 638 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaExitPokeball:
# 639 "data/maps/SkyPillar_Top/scripts.pory"
	exit_pokeball
# 640 "data/maps/SkyPillar_Top/scripts.pory"
	set_invisible
# 641 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 642 "data/maps/SkyPillar_Top/scripts.pory"

# 643 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieSeeHowControl:
# 644 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: See how this Pokémon eliminates\n"
# 645 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the effects of the weather distortion.\p"
# 646 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With its power, I can control Groudon's\n"
# 647 "data/maps/SkyPillar_Top/scripts.pory"
	.string "abilities.$"
# 648 "data/maps/SkyPillar_Top/scripts.pory"

# 649 "data/maps/SkyPillar_Top/scripts.pory"

# 650 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieSeeHowControl:
# 651 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: See how this Pokémon eliminates\n"
# 652 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the effects of the weather distortion.\p"
# 653 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With its power, I can control Kyogre's\n"
# 654 "data/maps/SkyPillar_Top/scripts.pory"
	.string "abilities.$"
# 655 "data/maps/SkyPillar_Top/scripts.pory"

# 656 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieSeeHowControl::
# 657 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieSeeHowControl, MSGBOX_DEFAULT
# 658 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 659 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 660 "data/maps/SkyPillar_Top/scripts.pory"

# 661 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieSeeHowControl::
# 662 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieSeeHowControl, MSGBOX_DEFAULT
# 663 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 664 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 665 "data/maps/SkyPillar_Top/scripts.pory"

# 666 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleCameraPanFromAction:
# 667 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 668 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 669 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 670 "data/maps/SkyPillar_Top/scripts.pory"

# 671 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaEnterPokeball:
# 672 "data/maps/SkyPillar_Top/scripts.pory"
	enter_pokeball
# 673 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 674 "data/maps/SkyPillar_Top/scripts.pory"

# 675 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieFailToSee::
# 676 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieFailToSee, MSGBOX_DEFAULT
# 677 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 678 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 679 "data/maps/SkyPillar_Top/scripts.pory"

# 680 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieFailToSee::
# 681 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieFailToSee, MSGBOX_DEFAULT
# 682 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 683 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 684 "data/maps/SkyPillar_Top/scripts.pory"

# 685 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieFailToSee:
# 686 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: As ever, Maxie, you fail to see\n"
# 687 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the bigger picture.\p"
# 688 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With the power of this Pokémon, Team\n"
# 689 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Aqua's world may not yet be lost.\p"
# 690 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Observe…$"
# 691 "data/maps/SkyPillar_Top/scripts.pory"

# 692 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieFailToSee:
# 693 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: As ever, Archie, you fail to see\n"
# 694 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the bigger picture.\p"
# 695 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With the power of this Pokémon, Team\n"
# 696 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Magma's world may not yet be lost.\p"
# 697 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Observe…$"
# 698 "data/maps/SkyPillar_Top/scripts.pory"

# 699 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleGoodLeaderPushedBack:
# 700 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 701 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 702 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 703 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 704 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 705 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 706 "data/maps/SkyPillar_Top/scripts.pory"

# 707 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchiePleadWithMaxie::
# 708 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchiePleadWithMaxie, MSGBOX_DEFAULT
# 709 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 710 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 711 "data/maps/SkyPillar_Top/scripts.pory"

# 712 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxiePleadWithArchie::
# 713 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxiePleadWithArchie, MSGBOX_DEFAULT
# 714 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 715 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 716 "data/maps/SkyPillar_Top/scripts.pory"

# 717 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxiePleadWithArchie:
# 718 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Archie, please, this has gone\n"
# 719 "data/maps/SkyPillar_Top/scripts.pory"
	.string "too far.\p"
# 720 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created… This is\n"
# 721 "data/maps/SkyPillar_Top/scripts.pory"
	.string "not the world Team Magma dreamed of.\p"
# 722 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This cannot be what you and Team Aqua\n"
# 723 "data/maps/SkyPillar_Top/scripts.pory"
	.string "want either?\p"
# 724 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The imbalance we have brought to the\n"
# 725 "data/maps/SkyPillar_Top/scripts.pory"
	.string "region must come to an end, but this\l"
# 726 "data/maps/SkyPillar_Top/scripts.pory"
	.string "isn't the way!$"
# 727 "data/maps/SkyPillar_Top/scripts.pory"

# 728 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchiePleadWithMaxie:
# 729 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Maxie, please, this has gone\n"
# 730 "data/maps/SkyPillar_Top/scripts.pory"
	.string "too far.\p"
# 731 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created… This is\n"
# 732 "data/maps/SkyPillar_Top/scripts.pory"
	.string "not the world Team Aqua dreamed of.\p"
# 733 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This cannot be what you and Team Magma\n"
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
SkyPillar_Top_Movement_FinaleCameraPanToAction:
# 740 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 741 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 742 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 743 "data/maps/SkyPillar_Top/scripts.pory"

# 744 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleMaxieMusic::
# 745 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 746 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 747 "data/maps/SkyPillar_Top/scripts.pory"

# 748 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleArchieMusic::
# 749 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 750 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 751 "data/maps/SkyPillar_Top/scripts.pory"

# 752 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleEmmieApproach:
# 753 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 754 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 755 "data/maps/SkyPillar_Top/scripts.pory"
	face_up
# 756 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 757 "data/maps/SkyPillar_Top/scripts.pory"

# 758 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 759 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 760 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 761 "data/maps/SkyPillar_Top/scripts.pory"

# 762 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachMatt:
# 763 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 764 "data/maps/SkyPillar_Top/scripts.pory"
	walk_down
# 765 "data/maps/SkyPillar_Top/scripts.pory"
	face_left
# 766 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 767 "data/maps/SkyPillar_Top/scripts.pory"

# 768 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattLeaveWellAlone:
# 769 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: You two, again!\p"
# 770 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You just don't know when to quit\n"
# 771 "data/maps/SkyPillar_Top/scripts.pory"
	.string "do you?$"
# 772 "data/maps/SkyPillar_Top/scripts.pory"

# 773 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaTenacious:
# 774 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Heh… Tenacious aren't you…$"
# 775 "data/maps/SkyPillar_Top/scripts.pory"

# 776 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattBeenHereBefore:
# 777 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: We've been here before…\p"
# 778 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Let's get it right this time.$"
# 779 "data/maps/SkyPillar_Top/scripts.pory"

# 780 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaWhyNot:
# 781 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Sure, why not?$"
# 782 "data/maps/SkyPillar_Top/scripts.pory"

# 783 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaApproachPlayer:
# 784 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 785 "data/maps/SkyPillar_Top/scripts.pory"
	face_right
# 786 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 787 "data/maps/SkyPillar_Top/scripts.pory"

# 788 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaNotLikePyre:
# 789 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Hehehe… This isn't going to\n"
# 790 "data/maps/SkyPillar_Top/scripts.pory"
	.string "end like Mt Pyre!$"
# 791 "data/maps/SkyPillar_Top/scripts.pory"

# 792 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattDefeat:
# 793 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I concede. Team Aqua may never be able\n"
# 794 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to hold you back…$"
# 795 "data/maps/SkyPillar_Top/scripts.pory"

# 796 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaDefeat:
# 797 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Hehe… Hehehehe…$"
# 798 "data/maps/SkyPillar_Top/scripts.pory"

# 799 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaMattKnockedBack:
# 800 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 801 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_left
# 802 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 803 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 804 "data/maps/SkyPillar_Top/scripts.pory"

# 805 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattPostBattle:
# 806 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: Whatever happens now is beyond\n"
# 807 "data/maps/SkyPillar_Top/scripts.pory"
	.string "my control.$"
# 808 "data/maps/SkyPillar_Top/scripts.pory"

# 809 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaPostBattle:
# 810 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Nothing you say or do will\n"
# 811 "data/maps/SkyPillar_Top/scripts.pory"
	.string "ever weaken my faith in Maxie…$"
# 812 "data/maps/SkyPillar_Top/scripts.pory"

# 813 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_MattReturnToPosition:
# 814 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 815 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 816 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 817 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
# 818 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 819 "data/maps/SkyPillar_Top/scripts.pory"

# 820 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaReturnToPosition:
# 821 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 822 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
# 823 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 824 "data/maps/SkyPillar_Top/scripts.pory"

# 825 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieNearlyThere:
# 826 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: C'mon, {PLAYER}, we're almost\n"
# 827 "data/maps/SkyPillar_Top/scripts.pory"
	.string "there!$"
# 828 "data/maps/SkyPillar_Top/scripts.pory"

# 829 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabitha::
# 830 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 831 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 832 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 833 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachMatt
# 834 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 835 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_FACE_UP
# 836 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_FACE_DOWN
# 837 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_FaceRight
# 838 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_FaceRight
# 839 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 840 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 841 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_ExclamationMark
# 842 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_ExclamationMark
# 843 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 844 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterRight
# 845 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 846 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattLeaveWellAlone, MSGBOX_DEFAULT
# 847 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 848 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 849 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 850 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaTenacious, MSGBOX_DEFAULT
# 851 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 852 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_FaceDown
# 853 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterUp
# 854 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 855 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattBeenHereBefore, MSGBOX_DEFAULT
# 856 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 857 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 858 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 859 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaWhyNot, MSGBOX_DEFAULT
# 860 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 861 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaApproachPlayer
# 862 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkSlowRight
# 863 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowLeft
# 864 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowLeft
# 865 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 866 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 867 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 868 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaNotLikePyre, MSGBOX_DEFAULT
# 869 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 870 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_MattTabithaDoMultiBattle
# 871 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 872 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 873 "data/maps/SkyPillar_Top/scripts.pory"

# 874 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaDoMultiBattle::
# 875 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 876 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2p_vs_2 TRAINER_TABITHA_SKY_PILLAR, SkyPillar_Top_Text_TabithaDefeat, TRAINER_MATT_SKY_PILLAR, SkyPillar_Top_Text_MattDefeat, PARTNER_EMMIE
# 877 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 878 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_MattTabithaVictory
# 879 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 880 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 881 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 882 "data/maps/SkyPillar_Top/scripts.pory"

# 883 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaVictory::
# 884 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 885 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaMattKnockedBack
# 886 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, SkyPillar_Top_Movement_TabithaMattKnockedBack
# 887 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 888 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterRight
# 889 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 890 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattPostBattle, MSGBOX_DEFAULT
# 891 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 892 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 893 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 894 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaPostBattle, MSGBOX_DEFAULT
# 895 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 896 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, SkyPillar_Top_Movement_MattReturnToPosition
# 897 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaReturnToPosition
# 898 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowLeft
# 899 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 900 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_FACE_DOWN
# 901 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_FACE_DOWN
# 902 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 903 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 904 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 905 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieNearlyThere, MSGBOX_DEFAULT
# 906 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 907 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 908 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 909 "data/maps/SkyPillar_Top/scripts.pory"

# 910 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Matt::
# 911 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 912 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattPostBattle, MSGBOX_DEFAULT
# 913 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 914 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 915 "data/maps/SkyPillar_Top/scripts.pory"

# 916 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Tabitha::
# 917 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 918 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaPostBattle, MSGBOX_DEFAULT
# 919 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 920 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 921 "data/maps/SkyPillar_Top/scripts.pory"

# 922 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyNoInterruptions:
# 923 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: Maxie instructed me that\n"
# 924 "data/maps/SkyPillar_Top/scripts.pory"
	.string "there are to be no interruptions.\p"
# 925 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Nobody makes me break a promise with\n"
# 926 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie, especially not you Shelly!$"
# 927 "data/maps/SkyPillar_Top/scripts.pory"

# 928 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_PlayerApproachShelly:
# 929 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 930 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 931 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 932 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 933 "data/maps/SkyPillar_Top/scripts.pory"

# 934 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachCourtney:
# 935 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 936 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 937 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 938 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 939 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 940 "data/maps/SkyPillar_Top/scripts.pory"

# 941 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyShouldHaveKnown:
# 942 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Shelly: I should have known you two\n"
# 943 "data/maps/SkyPillar_Top/scripts.pory"
	.string "would turn up sooner or later…\p"
# 944 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I trust that Archie knows what's\n"
# 945 "data/maps/SkyPillar_Top/scripts.pory"
	.string "best, and every time you show up,\l"
# 946 "data/maps/SkyPillar_Top/scripts.pory"
	.string "things only ever get worse…$"
# 947 "data/maps/SkyPillar_Top/scripts.pory"

# 948 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneySpeechless:
# 949 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: … … … … … …$"
# 950 "data/maps/SkyPillar_Top/scripts.pory"

# 951 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShellyCourtney::
# 952 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 953 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_FACE_RIGHT
# 954 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_FACE_LEFT
# 955 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SkyPillar_Top_Movement_PlayerApproachShelly
# 956 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachCourtney
# 957 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 958 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 959 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 960 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 961 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyNoInterruptions, MSGBOX_DEFAULT
# 962 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 963 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_FaceDown
# 964 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_FaceDown
# 965 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 966 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 967 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_ExclamationMark
# 968 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_ExclamationMark
# 969 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 970 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 971 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 972 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyShouldHaveKnown, MSGBOX_DEFAULT
# 973 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 974 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_FaceRight
# 975 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_FaceLeft
# 976 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 977 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 978 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneySpeechless, MSGBOX_DEFAULT
# 979 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 980 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkDown
# 981 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkDown
# 982 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 983 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_CourtneyShellyDoMultiBattle
# 984 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 985 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 986 "data/maps/SkyPillar_Top/scripts.pory"

# 987 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CourtneyShellyDoMultiBattle::
# 988 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 989 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_FACE_DOWN
# 990 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_FACE_DOWN
# 991 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2p_vs_2 TRAINER_SHELLY_SKY_PILLAR, SkyPillar_Top_Text_ShellyDefeat, TRAINER_COURTNEY_SKY_PILLAR, SkyPillar_Top_Text_CourtneyDefeat, PARTNER_EMMIE
# 992 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 993 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_CourtneyShellyVictory
# 994 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 995 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 996 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 997 "data/maps/SkyPillar_Top/scripts.pory"

# 998 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CourtneyShellyVictory::
# 999 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 1000 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, SkyPillar_Top_Movement_CourtneyShellyKnockedBack
# 1001 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, SkyPillar_Top_Movement_CourtneyShellyKnockedBack
# 1002 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1003 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 1004 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1005 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 1006 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1007 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 1008 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1009 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 1010 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1011 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowRight
# 1012 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 1013 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1014 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieThisIsIt, MSGBOX_DEFAULT
# 1015 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1016 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 1017 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1018 "data/maps/SkyPillar_Top/scripts.pory"

# 1019 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Shelly::
# 1020 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 1021 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 1022 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1023 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1024 "data/maps/SkyPillar_Top/scripts.pory"

# 1025 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Courtney::
# 1026 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 1027 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 1028 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1029 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1030 "data/maps/SkyPillar_Top/scripts.pory"

# 1031 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyDefeat:
# 1032 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maybe I was wrong about you…\n"
# 1033 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Perhaps you are the answer…$"
# 1034 "data/maps/SkyPillar_Top/scripts.pory"

# 1035 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyDefeat:
# 1036 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie trusted me and I've let\n"
# 1037 "data/maps/SkyPillar_Top/scripts.pory"
	.string "him down…$"
# 1038 "data/maps/SkyPillar_Top/scripts.pory"

# 1039 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieThisIsIt:
# 1040 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: We made it, {PLAYER}.\n"
# 1041 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie and Maxie are up ahead.\p"
# 1042 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Once we get involved, there's no\n"
# 1043 "data/maps/SkyPillar_Top/scripts.pory"
	.string "turning back.\p"
# 1044 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We better make sure we're prepared\n"
# 1045 "data/maps/SkyPillar_Top/scripts.pory"
	.string "before we go any further.$"
# 1046 "data/maps/SkyPillar_Top/scripts.pory"

# 1047 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyPostBattle:
# 1048 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: Please! You can't interrupt\n"
# 1049 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie now, this is too important!$"
# 1050 "data/maps/SkyPillar_Top/scripts.pory"

# 1051 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyPostBattle:
# 1052 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Shelly: There really is no stopping\n"
# 1053 "data/maps/SkyPillar_Top/scripts.pory"
	.string "you two is there…$"
# 1054 "data/maps/SkyPillar_Top/scripts.pory"

# 1055 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CourtneyShellyKnockedBack:
# 1056 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 1057 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 1058 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 1059 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1060 "data/maps/SkyPillar_Top/scripts.pory"

# 1061 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 1062 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 1063 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1064 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1065 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 1066 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 1067 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 1068 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1069 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1070 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1071 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1072 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 1073 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 1074 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 1075 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 1076 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 1077 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1078 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1079 "data/maps/SkyPillar_Top/scripts.pory"

# 1080 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 1081 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 1082 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 1083 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1084 "data/maps/SkyPillar_Top/scripts.pory"

# 1085 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 1086 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 1087 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 1088 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1089 "data/maps/SkyPillar_Top/scripts.pory"

# 1090 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 1091 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1092 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1093 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1094 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1095 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1096 "data/maps/SkyPillar_Top/scripts.pory"

# 1097 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 1098 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1099 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1100 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1101 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 1102 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 1103 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1104 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1105 "data/maps/SkyPillar_Top/scripts.pory"

# 1106 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 1107 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 1108 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 1109 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1110 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1111 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 1112 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 1113 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1114 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 1115 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 1116 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1117 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1118 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1119 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 1120 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 1121 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 1122 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 1123 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 1124 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1125 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1126 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1127 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 1128 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 1129 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 1130 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 1131 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 1132 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1133 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 1134 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 1135 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1136 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 1137 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 1138 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1139 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 1140 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 1141 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 1142 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 1143 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1144 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 1145 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 1146 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 1147 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 1148 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1149 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1150 "data/maps/SkyPillar_Top/scripts.pory"

# 1151 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 1152 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 1153 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 1154 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1155 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 1156 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1157 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1158 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1159 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1160 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1161 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 1162 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 1164 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1165 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1166 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1167 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1168 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1169 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1170 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1171 "data/maps/SkyPillar_Top/scripts.pory"

# 1172 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 1173 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1174 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 1175 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 1176 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 1177 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 1178 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 1179 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1180 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1181 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1182 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1183 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1184 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1185 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1186 "data/maps/SkyPillar_Top/scripts.pory"

# 1187 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 1188 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1189 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1190 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1191 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1192 "data/maps/SkyPillar_Top/scripts.pory"

# 1193 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 1194 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1195 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1196 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1197 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1198 "data/maps/SkyPillar_Top/scripts.pory"

# 1199 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 1200 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"
