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
	call_if_eq VAR_SKY_PILLAR_STATE, 8, SkyPillar_Top_EventScript_SetWeather
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
	delay 240
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_DROUGHT
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieSeeHowControl
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieSeeHowControl
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterRight
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0 
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_BOUNCE_2
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BALL_OPEN
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE_INVISIBLE, SkyPillar_Top_Movement_RayquazaExitPokeball
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	addobject LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_NONE
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_FinaleCameraPanFromAction
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieWeWillSubdue
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieWeWillSubdue
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	delay 12
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterDown
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchiePleaseHelp
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxiePleaseHelp
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachPlayer
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_EmmieDefeatedMaxie
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_EmmieDefeatedArchie
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterDown
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieSoYoullHelp
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieSoYoullHelp
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowUp
# 180 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, SkyPillar_Top_Movement_GoodLeaderMoveForPlayer
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 182 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 183 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 184 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieYouStillDefy
# 185 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieYouStillDefy
# 186 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 187 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 188 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkSlowDown
# 189 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, SkyPillar_Top_Movement_GoodLeaderApproachEvilLeader
# 190 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_Maxie_ChoosePartyForMultiBattle
# 192 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_Archie_ChoosePartyForMultiBattle
# 193 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 194 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 195 "data/maps/SkyPillar_Top/scripts.pory"

# 196 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Archie_ChoosePartyForMultiBattle::
# 197 "data/maps/SkyPillar_Top/scripts.pory"
	special SavePlayerParty
# 198 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/SkyPillar_Top/scripts.pory"
	special ChooseHalfPartyForBattle
# 200 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 201 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SkyPillar_Top_EventScript_ArchieDoMultiBattle
# 202 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieYouWillNotStopMe, MSGBOX_AUTOCLOSE
# 203 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_Archie_ChoosePartyForMultiBattle
# 204 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 205 "data/maps/SkyPillar_Top/scripts.pory"

# 206 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieDoMultiBattle::
# 207 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2_vs_1 TRAINER_ARCHIE_SKY_PILLAR, SkyPillar_Top_Text_EvilLeaderDefeat, PARTNER_MAXIE_SKY_PILLAR
# 208 "data/maps/SkyPillar_Top/scripts.pory"
	special LoadPlayerParty
# 209 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 210 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_FinaleVictory
# 211 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 212 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 213 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 214 "data/maps/SkyPillar_Top/scripts.pory"

# 215 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Maxie_ChoosePartyForMultiBattle::
# 216 "data/maps/SkyPillar_Top/scripts.pory"
	special SavePlayerParty
# 217 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 218 "data/maps/SkyPillar_Top/scripts.pory"
	special ChooseHalfPartyForBattle
# 219 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 220 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SkyPillar_Top_EventScript_MaxieDoMultiBattle
# 221 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieYouWillNotStopMe, MSGBOX_AUTOCLOSE
# 222 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_Maxie_ChoosePartyForMultiBattle
# 223 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 224 "data/maps/SkyPillar_Top/scripts.pory"

# 225 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieDoMultiBattle::
# 226 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2_vs_1 TRAINER_MAXIE_SKY_PILLAR, SkyPillar_Top_Text_EvilLeaderDefeat, PARTNER_ARCHIE_SKY_PILLAR
# 227 "data/maps/SkyPillar_Top/scripts.pory"
	special LoadPlayerParty
# 228 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 229 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_FinaleVictory
# 230 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 231 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 232 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 233 "data/maps/SkyPillar_Top/scripts.pory"

# 234 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleVictory::
# 235 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 236 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, SkyPillar_Top_Movement_EvilLeaderKnockedBack
# 237 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_FaceUp
# 238 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 239 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieHowCanThisBe
# 240 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieHowCanThisBe
# 241 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 242 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 243 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 244 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 245 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 246 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 247 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 248 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 249 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 250 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 251 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_QuestionMark
# 252 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_QuestionMark
# 253 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 254 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_FaceRight
# 255 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_FaceRight
# 256 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 257 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 258 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 259 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 260 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 261 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 262 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 263 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 264 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 265 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 266 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 267 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 268 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE, SkyPillar_Top_Movement_RayquazaFlyOff
# 269 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 270 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_RAYQUAZA_CUTSCENE
# 271 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 272 "data/maps/SkyPillar_Top/scripts.pory"
	setweather WEATHER_ABNORMAL
# 273 "data/maps/SkyPillar_Top/scripts.pory"
	doweather
# 274 "data/maps/SkyPillar_Top/scripts.pory"
	special WaitWeather
# 275 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 276 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 277 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_FaceUp
# 278 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
# 279 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 280 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 281 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieLostControl
# 282 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieLostControl
# 283 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterUp
# 284 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 285 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieDoYouSee
# 286 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieDoYouSee
# 287 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8002, Common_Movement_WalkInPlaceFasterDown
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 289 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_MaxieBeenMisguided
# 290 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_ArchieBeenMisguided
# 291 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterDown
# 292 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 293 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieThankYou
# 294 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieThankYou
# 295 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement VAR_0x8003, Common_Movement_WalkInPlaceFasterUp
# 296 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 297 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SkyPillar_Top_EventScript_ArchieComeMaxie
# 298 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SkyPillar_Top_EventScript_MaxieComeArchie
# 299 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_EXIT
# 300 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 301 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 302 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_ARCHIE
# 303 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_MAXIE
# 304 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_TABITHA
# 305 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_SHELLY
# 306 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_MATT
# 307 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_SKYPILLAR_COURTNEY
# 308 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_SKY_PILLAR_EVIL_TEAMS
# 309 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 310 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 311 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 312 "data/maps/SkyPillar_Top/scripts.pory"

# 313 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EvilLeaderDefeat:
# 314 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This should not be possible!$"
# 315 "data/maps/SkyPillar_Top/scripts.pory"

# 316 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieComeMaxie:
# 317 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Come, Maxie.\p"
# 318 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This is situation is of our\n"
# 319 "data/maps/SkyPillar_Top/scripts.pory"
	.string "creation.\p"
# 320 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It is our responsibility to ensure\n"
# 321 "data/maps/SkyPillar_Top/scripts.pory"
	.string "it comes to a close.$"
# 322 "data/maps/SkyPillar_Top/scripts.pory"

# 323 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieComeArchie:
# 324 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Come, Archie.\p"
# 325 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This is situation is of our\n"
# 326 "data/maps/SkyPillar_Top/scripts.pory"
	.string "creation.\p"
# 327 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It is our responsibility to ensure\n"
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	.string "it comes to a close.$"
# 329 "data/maps/SkyPillar_Top/scripts.pory"

# 330 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieComeArchie::
# 331 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieComeArchie, MSGBOX_DEFAULT
# 332 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 333 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 334 "data/maps/SkyPillar_Top/scripts.pory"

# 335 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieComeMaxie::
# 336 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieComeMaxie, MSGBOX_DEFAULT
# 337 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 338 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 339 "data/maps/SkyPillar_Top/scripts.pory"

# 340 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieThankYou:
# 341 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: {PLAYER}, thank you, I don't\n"
# 342 "data/maps/SkyPillar_Top/scripts.pory"
	.string "believe that I could have defeated\l"
# 343 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie and that Pokémon alone.\p"
# 344 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's time for me to return to\n"
# 345 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Sootopolis.\p"
# 346 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I expect that you will be close\n"
# 347 "data/maps/SkyPillar_Top/scripts.pory"
	.string "behind, as you always are.$"
# 348 "data/maps/SkyPillar_Top/scripts.pory"

# 349 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieThankYou:
# 350 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: {PLAYER}, thank you, I don't\n"
# 351 "data/maps/SkyPillar_Top/scripts.pory"
	.string "believe that I could have defeated\l"
# 352 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie and that Pokémon alone.\p"
# 353 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's time for me to return to\n"
# 354 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Sootopolis.\p"
# 355 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I expect that you will be close\n"
# 356 "data/maps/SkyPillar_Top/scripts.pory"
	.string "behind, as you always are.$"
# 357 "data/maps/SkyPillar_Top/scripts.pory"

# 358 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieThankYou::
# 359 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieThankYou, MSGBOX_DEFAULT
# 360 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 361 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 362 "data/maps/SkyPillar_Top/scripts.pory"

# 363 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieThankYou::
# 364 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieThankYou, MSGBOX_DEFAULT
# 365 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 366 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 367 "data/maps/SkyPillar_Top/scripts.pory"

# 368 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieBeenMisguided:
# 369 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Could it really be that I\n"
# 370 "data/maps/SkyPillar_Top/scripts.pory"
	.string "have been misguided all this time…?$"
# 371 "data/maps/SkyPillar_Top/scripts.pory"

# 372 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieBeenMisguided:
# 373 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Could it really be that I\n"
# 374 "data/maps/SkyPillar_Top/scripts.pory"
	.string "have been misguided all this time…?$"
# 375 "data/maps/SkyPillar_Top/scripts.pory"

# 376 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieBeenMisguided::
# 377 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieBeenMisguided, MSGBOX_DEFAULT
# 378 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 379 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 380 "data/maps/SkyPillar_Top/scripts.pory"

# 381 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieBeenMisguided::
# 382 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieBeenMisguided, MSGBOX_DEFAULT
# 383 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 384 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 385 "data/maps/SkyPillar_Top/scripts.pory"

# 386 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieDoYouSee:
# 387 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Do you see now, Maxie?\p"
# 388 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We have tampered with forces beyond\n"
# 389 "data/maps/SkyPillar_Top/scripts.pory"
	.string "our control and our understanding.\p"
# 390 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Our only hope is for that Pokémon\n"
# 391 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to be heading to Sootopolis and\l"
# 392 "data/maps/SkyPillar_Top/scripts.pory"
	.string "putting an end to this chaos.$"
# 393 "data/maps/SkyPillar_Top/scripts.pory"

# 394 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieDoYouSee:
# 395 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Do you see now, Archie?\p"
# 396 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We have tampered with forces beyond\n"
# 397 "data/maps/SkyPillar_Top/scripts.pory"
	.string "our control and our understanding.\p"
# 398 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Our only hope is for that Pokémon\n"
# 399 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to be heading to Sootopolis and\l"
# 400 "data/maps/SkyPillar_Top/scripts.pory"
	.string "putting an end to this chaos.$"
# 401 "data/maps/SkyPillar_Top/scripts.pory"

# 402 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieDoYouSee::
# 403 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieDoYouSee, MSGBOX_DEFAULT
# 404 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 405 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 406 "data/maps/SkyPillar_Top/scripts.pory"

# 407 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieDoYouSee::
# 408 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieDoYouSee, MSGBOX_DEFAULT
# 409 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 410 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 411 "data/maps/SkyPillar_Top/scripts.pory"

# 412 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieLostControl:
# 413 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: What is this…\n"
# 414 "data/maps/SkyPillar_Top/scripts.pory"
	.string "My control is broken?\p"
# 415 "data/maps/SkyPillar_Top/scripts.pory"
	.string "First Kyogre, and now here too…$"
# 416 "data/maps/SkyPillar_Top/scripts.pory"

# 417 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieLostControl:
# 418 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: What is this…\n"
# 419 "data/maps/SkyPillar_Top/scripts.pory"
	.string "My control is broken?\p"
# 420 "data/maps/SkyPillar_Top/scripts.pory"
	.string "First Groudon, and now here too…$"
# 421 "data/maps/SkyPillar_Top/scripts.pory"

# 422 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieLostControl::
# 423 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieLostControl, MSGBOX_DEFAULT
# 424 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 425 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 426 "data/maps/SkyPillar_Top/scripts.pory"

# 427 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieLostControl::
# 428 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieLostControl, MSGBOX_DEFAULT
# 429 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 430 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 431 "data/maps/SkyPillar_Top/scripts.pory"

# 432 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieHowCanThisBe:
# 433 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: How can this be?!\p"
# 434 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Even with the power of this\n"
# 435 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Pokémon, I am still defeated?\p"
# 436 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This changes nothing. As long\n"
# 437 "data/maps/SkyPillar_Top/scripts.pory"
	.string "as I still… … …$"
# 438 "data/maps/SkyPillar_Top/scripts.pory"

# 439 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieHowCanThisBe:
# 440 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: How can this be?!\p"
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
SkyPillar_Top_EventScript_MaxieHowCanThisBe::
# 447 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieHowCanThisBe, MSGBOX_DEFAULT
# 448 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 449 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 450 "data/maps/SkyPillar_Top/scripts.pory"

# 451 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieHowCanThisBe::
# 452 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieHowCanThisBe, MSGBOX_DEFAULT
# 453 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 454 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 455 "data/maps/SkyPillar_Top/scripts.pory"

# 456 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EvilLeaderKnockedBack:
# 457 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 458 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 459 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 460 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 461 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 462 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 463 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 464 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 465 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_down
# 466 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 467 "data/maps/SkyPillar_Top/scripts.pory"

# 468 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_GoodLeaderApproachEvilLeader:
# 469 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 470 "data/maps/SkyPillar_Top/scripts.pory"
	face_left
# 471 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 472 "data/maps/SkyPillar_Top/scripts.pory"

# 473 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieYouWillNotStopMe:
# 474 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: You will not stop me.$"
# 475 "data/maps/SkyPillar_Top/scripts.pory"

# 476 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieYouWillNotStopMe:
# 477 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: You will not stop me.$"
# 478 "data/maps/SkyPillar_Top/scripts.pory"

# 479 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieYouStillDefy:
# 480 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Even now you still defy me?\p"
# 481 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It matters not. I will shape the world\n"
# 482 "data/maps/SkyPillar_Top/scripts.pory"
	.string "into one of Team Aqua's design.\p"
# 483 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You will not stand in my way.$"
# 484 "data/maps/SkyPillar_Top/scripts.pory"

# 485 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieYouStillDefy:
# 486 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Even now you still defy me?\p"
# 487 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It matters not. I will shape the world\n"
# 488 "data/maps/SkyPillar_Top/scripts.pory"
	.string "into one of Team Magma's design.\p"
# 489 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You will not stand in my way.$"
# 490 "data/maps/SkyPillar_Top/scripts.pory"

# 491 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieYouStillDefy::
# 492 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieYouStillDefy, MSGBOX_DEFAULT
# 493 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 494 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 495 "data/maps/SkyPillar_Top/scripts.pory"

# 496 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieYouStillDefy::
# 497 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieYouStillDefy, MSGBOX_DEFAULT
# 498 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 499 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 500 "data/maps/SkyPillar_Top/scripts.pory"

# 501 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_GoodLeaderMoveForPlayer:
# 502 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_right
# 503 "data/maps/SkyPillar_Top/scripts.pory"
	face_up
# 504 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 505 "data/maps/SkyPillar_Top/scripts.pory"

# 506 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieSoYoullHelp:
# 507 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: So you will help me?\p"
# 508 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\n"
# 509 "data/maps/SkyPillar_Top/scripts.pory"
	.string "… … … … … …\p"
# 510 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Thank you.\p"
# 511 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Okay, let's do this.$"
# 512 "data/maps/SkyPillar_Top/scripts.pory"

# 513 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieSoYoullHelp:
# 514 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: So you will help me?\p"
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
SkyPillar_Top_EventScript_ArchieSoYoullHelp::
# 521 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieSoYoullHelp, MSGBOX_DEFAULT
# 522 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 523 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 524 "data/maps/SkyPillar_Top/scripts.pory"

# 525 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieSoYoullHelp::
# 526 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieSoYoullHelp, MSGBOX_DEFAULT
# 527 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 528 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 529 "data/maps/SkyPillar_Top/scripts.pory"

# 530 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_EmmieDefeatedMaxie::
# 531 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieDefeatedMaxie, MSGBOX_DEFAULT
# 532 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 533 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 534 "data/maps/SkyPillar_Top/scripts.pory"

# 535 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_EmmieDefeatedArchie::
# 536 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieDefeatedArchie, MSGBOX_DEFAULT
# 537 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 538 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 539 "data/maps/SkyPillar_Top/scripts.pory"

# 540 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieDefeatedArchie:
# 541 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: {PLAYER}, you've got this.\p"
# 542 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Together we've defeated Archie even\n"
# 543 "data/maps/SkyPillar_Top/scripts.pory"
	.string "when he had the power of Kyogre\l"
# 544 "data/maps/SkyPillar_Top/scripts.pory"
	.string "on his side.\p"
# 545 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You've also tackled both Team Aqua\n"
# 546 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and Team Magma without my help.\p"
# 547 "data/maps/SkyPillar_Top/scripts.pory"
	.string "After I watched you and Archie\n"
# 548 "data/maps/SkyPillar_Top/scripts.pory"
	.string "defeat Maxie on Mt Pyre, I know\l"
# 549 "data/maps/SkyPillar_Top/scripts.pory"
	.string "that you can succeed here too.\p"
# 550 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Help Maxie defeat Archie and all\n"
# 551 "data/maps/SkyPillar_Top/scripts.pory"
	.string "this can finally end.\p"
# 552 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I believe in you!$"
# 553 "data/maps/SkyPillar_Top/scripts.pory"

# 554 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieDefeatedMaxie:
# 555 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: {PLAYER}, you've got this.\p"
# 556 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Together we've defeated Maxie even\n"
# 557 "data/maps/SkyPillar_Top/scripts.pory"
	.string "when he had the power of Groudon\l"
# 558 "data/maps/SkyPillar_Top/scripts.pory"
	.string "on his side.\p"
# 559 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You've also tackled both Team Aqua\n"
# 560 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and Team Magma without my help.\p"
# 561 "data/maps/SkyPillar_Top/scripts.pory"
	.string "After I watched you and Maxie\n"
# 562 "data/maps/SkyPillar_Top/scripts.pory"
	.string "defeat Archie on Mt Pyre, I know\l"
# 563 "data/maps/SkyPillar_Top/scripts.pory"
	.string "that you can succeed here too.\p"
# 564 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Help Archie defeat Maxie and all\n"
# 565 "data/maps/SkyPillar_Top/scripts.pory"
	.string "this can finally end.\p"
# 566 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I believe in you!$"
# 567 "data/maps/SkyPillar_Top/scripts.pory"

# 568 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachPlayer:
# 569 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 570 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_right
# 571 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 572 "data/maps/SkyPillar_Top/scripts.pory"

# 573 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxiePleaseHelp:
# 574 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: {PLAYER}, Archie is refusing\n"
# 575 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to listen to reason.\p"
# 576 "data/maps/SkyPillar_Top/scripts.pory"
	.string "He is hell bent on using this Pokémon\n"
# 577 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to defeat Groudon and control Kyogre.\p"
# 578 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created was not \n"
# 579 "data/maps/SkyPillar_Top/scripts.pory"
	.string "part of my design.\p"
# 580 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I accept that I hold equal blame with\n"
# 581 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie, but I see now that we were\l"
# 582 "data/maps/SkyPillar_Top/scripts.pory"
	.string "playing with forces beyond our control.\p"
# 583 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I know that you do not trust me, but\n"
# 584 "data/maps/SkyPillar_Top/scripts.pory"
	.string "trust that I also want to stop Archie.\p"
# 585 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, help me stop Archie and together\n"
# 586 "data/maps/SkyPillar_Top/scripts.pory"
	.string "we can put an end to all this.$"
# 587 "data/maps/SkyPillar_Top/scripts.pory"

# 588 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchiePleaseHelp:
# 589 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: {PLAYER}, Maxie is refusing\n"
# 590 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to listen to reason.\p"
# 591 "data/maps/SkyPillar_Top/scripts.pory"
	.string "He is hell bent on using this Pokémon\n"
# 592 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to defeat Kyogre and control Groudon.\p"
# 593 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created was not \n"
# 594 "data/maps/SkyPillar_Top/scripts.pory"
	.string "part of my design.\p"
# 595 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I accept that I hold equal blame with\n"
# 596 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie, but I see now that we were\l"
# 597 "data/maps/SkyPillar_Top/scripts.pory"
	.string "playing with forces beyond our control.\p"
# 598 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I know that you do not trust me, but\n"
# 599 "data/maps/SkyPillar_Top/scripts.pory"
	.string "trust that I also want to stop Maxie.\p"
# 600 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, help me stop Maxie and together\n"
# 601 "data/maps/SkyPillar_Top/scripts.pory"
	.string "we can put an end to all this.$"
# 602 "data/maps/SkyPillar_Top/scripts.pory"

# 603 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchiePleaseHelp::
# 604 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchiePleaseHelp, MSGBOX_DEFAULT
# 605 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 606 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 607 "data/maps/SkyPillar_Top/scripts.pory"

# 608 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxiePleaseHelp::
# 609 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxiePleaseHelp, MSGBOX_DEFAULT
# 610 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 611 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 612 "data/maps/SkyPillar_Top/scripts.pory"

# 613 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieWeWillSubdue:
# 614 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Together we will subdue Groudon\n"
# 615 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and restrain the power of Kyogre.$"
# 616 "data/maps/SkyPillar_Top/scripts.pory"

# 617 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieWeWillSubdue:
# 618 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Together we will subdue Kyogre\n"
# 619 "data/maps/SkyPillar_Top/scripts.pory"
	.string "and restrain the power of Groudon.$"
# 620 "data/maps/SkyPillar_Top/scripts.pory"

# 621 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieWeWillSubdue::
# 622 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieWeWillSubdue, MSGBOX_DEFAULT
# 623 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 624 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 625 "data/maps/SkyPillar_Top/scripts.pory"

# 626 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieWeWillSubdue::
# 627 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieWeWillSubdue, MSGBOX_DEFAULT
# 628 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 629 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 630 "data/maps/SkyPillar_Top/scripts.pory"

# 631 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaExitPokeball:
# 632 "data/maps/SkyPillar_Top/scripts.pory"
	exit_pokeball
# 633 "data/maps/SkyPillar_Top/scripts.pory"
	set_invisible
# 634 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 635 "data/maps/SkyPillar_Top/scripts.pory"

# 636 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieSeeHowControl:
# 637 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: See how this Pokémon eliminates\n"
# 638 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the effects of the weather distortion.\p"
# 639 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With its power, I can control Groudon's\n"
# 640 "data/maps/SkyPillar_Top/scripts.pory"
	.string "abilities.$"
# 641 "data/maps/SkyPillar_Top/scripts.pory"

# 642 "data/maps/SkyPillar_Top/scripts.pory"

# 643 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieSeeHowControl:
# 644 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: See how this Pokémon eliminates\n"
# 645 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the effects of the weather distortion.\p"
# 646 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With its power, I can control Kyogre's\n"
# 647 "data/maps/SkyPillar_Top/scripts.pory"
	.string "abilities.$"
# 648 "data/maps/SkyPillar_Top/scripts.pory"

# 649 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieSeeHowControl::
# 650 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieSeeHowControl, MSGBOX_DEFAULT
# 651 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 652 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 653 "data/maps/SkyPillar_Top/scripts.pory"

# 654 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieSeeHowControl::
# 655 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieSeeHowControl, MSGBOX_DEFAULT
# 656 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 657 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 658 "data/maps/SkyPillar_Top/scripts.pory"

# 659 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleCameraPanFromAction:
# 660 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 661 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 662 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 663 "data/maps/SkyPillar_Top/scripts.pory"

# 664 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaEnterPokeball:
# 665 "data/maps/SkyPillar_Top/scripts.pory"
	enter_pokeball
# 666 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 667 "data/maps/SkyPillar_Top/scripts.pory"

# 668 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxieFailToSee::
# 669 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxieFailToSee, MSGBOX_DEFAULT
# 670 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 671 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 672 "data/maps/SkyPillar_Top/scripts.pory"

# 673 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchieFailToSee::
# 674 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchieFailToSee, MSGBOX_DEFAULT
# 675 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 676 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 677 "data/maps/SkyPillar_Top/scripts.pory"

# 678 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchieFailToSee:
# 679 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: As ever, Maxie, you fail to see\n"
# 680 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the bigger picture.\p"
# 681 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With the power of this Pokémon, Team\n"
# 682 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Aqua's world may not yet be lost.\p"
# 683 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Observe…$"
# 684 "data/maps/SkyPillar_Top/scripts.pory"

# 685 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxieFailToSee:
# 686 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: As ever, Archie, you fail to see\n"
# 687 "data/maps/SkyPillar_Top/scripts.pory"
	.string "the bigger picture.\p"
# 688 "data/maps/SkyPillar_Top/scripts.pory"
	.string "With the power of this Pokémon, Team\n"
# 689 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Magma's world may not yet be lost.\p"
# 690 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Observe…$"
# 691 "data/maps/SkyPillar_Top/scripts.pory"

# 692 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleGoodLeaderPushedBack:
# 693 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 694 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 695 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 696 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 697 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 698 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 699 "data/maps/SkyPillar_Top/scripts.pory"

# 700 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ArchiePleadWithMaxie::
# 701 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ArchiePleadWithMaxie, MSGBOX_DEFAULT
# 702 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 703 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 704 "data/maps/SkyPillar_Top/scripts.pory"

# 705 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MaxiePleadWithArchie::
# 706 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MaxiePleadWithArchie, MSGBOX_DEFAULT
# 707 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 708 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 709 "data/maps/SkyPillar_Top/scripts.pory"

# 710 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MaxiePleadWithArchie:
# 711 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie: Archie, please, this has gone\n"
# 712 "data/maps/SkyPillar_Top/scripts.pory"
	.string "too far.\p"
# 713 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created… This is\n"
# 714 "data/maps/SkyPillar_Top/scripts.pory"
	.string "not the world Team Magma dreamed of.\p"
# 715 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This cannot be what you and Team Aqua\n"
# 716 "data/maps/SkyPillar_Top/scripts.pory"
	.string "want either?\p"
# 717 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The imbalance we have brought to the\n"
# 718 "data/maps/SkyPillar_Top/scripts.pory"
	.string "region must come to an end, but this\l"
# 719 "data/maps/SkyPillar_Top/scripts.pory"
	.string "isn't the way!$"
# 720 "data/maps/SkyPillar_Top/scripts.pory"

# 721 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ArchiePleadWithMaxie:
# 722 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie: Maxie, please, this has gone\n"
# 723 "data/maps/SkyPillar_Top/scripts.pory"
	.string "too far.\p"
# 724 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This world we have created… This is\n"
# 725 "data/maps/SkyPillar_Top/scripts.pory"
	.string "not the world Team Aqua dreamed of.\p"
# 726 "data/maps/SkyPillar_Top/scripts.pory"
	.string "This cannot be what you and Team Magma\n"
# 727 "data/maps/SkyPillar_Top/scripts.pory"
	.string "want either?\p"
# 728 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The imbalance we have brought to the\n"
# 729 "data/maps/SkyPillar_Top/scripts.pory"
	.string "region must come to an end, but this\l"
# 730 "data/maps/SkyPillar_Top/scripts.pory"
	.string "isn't the way!$"
# 731 "data/maps/SkyPillar_Top/scripts.pory"

# 732 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleCameraPanToAction:
# 733 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 734 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 735 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 736 "data/maps/SkyPillar_Top/scripts.pory"

# 737 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleMaxieMusic::
# 738 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 739 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 740 "data/maps/SkyPillar_Top/scripts.pory"

# 741 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_FinaleArchieMusic::
# 742 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 743 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 744 "data/maps/SkyPillar_Top/scripts.pory"

# 745 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_FinaleEmmieApproach:
# 746 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 747 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 748 "data/maps/SkyPillar_Top/scripts.pory"
	face_up
# 749 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 750 "data/maps/SkyPillar_Top/scripts.pory"

# 751 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 752 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 753 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 754 "data/maps/SkyPillar_Top/scripts.pory"

# 755 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachMatt:
# 756 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 757 "data/maps/SkyPillar_Top/scripts.pory"
	walk_down
# 758 "data/maps/SkyPillar_Top/scripts.pory"
	face_left
# 759 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 760 "data/maps/SkyPillar_Top/scripts.pory"

# 761 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattLeaveWellAlone:
# 762 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: You two, again!\p"
# 763 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You just don't know when to quit\n"
# 764 "data/maps/SkyPillar_Top/scripts.pory"
	.string "do you?$"
# 765 "data/maps/SkyPillar_Top/scripts.pory"

# 766 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaTenacious:
# 767 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Heh… Tenacious aren't you…$"
# 768 "data/maps/SkyPillar_Top/scripts.pory"

# 769 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattBeenHereBefore:
# 770 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: We've been here before…\p"
# 771 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Let's get it right this time.$"
# 772 "data/maps/SkyPillar_Top/scripts.pory"

# 773 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaWhyNot:
# 774 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Sure, why not?$"
# 775 "data/maps/SkyPillar_Top/scripts.pory"

# 776 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaApproachPlayer:
# 777 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 778 "data/maps/SkyPillar_Top/scripts.pory"
	face_right
# 779 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 780 "data/maps/SkyPillar_Top/scripts.pory"

# 781 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaNotLikePyre:
# 782 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Hehehe… This isn't going to\n"
# 783 "data/maps/SkyPillar_Top/scripts.pory"
	.string "end like Mt Pyre!$"
# 784 "data/maps/SkyPillar_Top/scripts.pory"

# 785 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattDefeat:
# 786 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I concede. Team Aqua may never be able\n"
# 787 "data/maps/SkyPillar_Top/scripts.pory"
	.string "to hold you back…$"
# 788 "data/maps/SkyPillar_Top/scripts.pory"

# 789 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaDefeat:
# 790 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Hehe… Hehehehe…$"
# 791 "data/maps/SkyPillar_Top/scripts.pory"

# 792 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaMattKnockedBack:
# 793 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 794 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_left
# 795 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 796 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 797 "data/maps/SkyPillar_Top/scripts.pory"

# 798 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_MattPostBattle:
# 799 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Matt: Whatever happens now is beyond\n"
# 800 "data/maps/SkyPillar_Top/scripts.pory"
	.string "my control.$"
# 801 "data/maps/SkyPillar_Top/scripts.pory"

# 802 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_TabithaPostBattle:
# 803 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Tabitha: Nothing you say or do will\n"
# 804 "data/maps/SkyPillar_Top/scripts.pory"
	.string "ever weaken my faith in Maxie…$"
# 805 "data/maps/SkyPillar_Top/scripts.pory"

# 806 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_MattReturnToPosition:
# 807 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 808 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 809 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 810 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
# 811 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 812 "data/maps/SkyPillar_Top/scripts.pory"

# 813 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_TabithaReturnToPosition:
# 814 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 815 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
# 816 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 817 "data/maps/SkyPillar_Top/scripts.pory"

# 818 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieNearlyThere:
# 819 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: C'mon, {PLAYER}, we're almost\n"
# 820 "data/maps/SkyPillar_Top/scripts.pory"
	.string "there!$"
# 821 "data/maps/SkyPillar_Top/scripts.pory"

# 822 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabitha::
# 823 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 824 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 825 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 826 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachMatt
# 827 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 828 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_FACE_UP
# 829 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_FACE_DOWN
# 830 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_FaceRight
# 831 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_FaceRight
# 832 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 833 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 834 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_ExclamationMark
# 835 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_ExclamationMark
# 836 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 837 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterRight
# 838 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 839 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattLeaveWellAlone, MSGBOX_DEFAULT
# 840 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 841 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 842 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 843 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaTenacious, MSGBOX_DEFAULT
# 844 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 845 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_FaceDown
# 846 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterUp
# 847 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 848 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattBeenHereBefore, MSGBOX_DEFAULT
# 849 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 850 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 851 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 852 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaWhyNot, MSGBOX_DEFAULT
# 853 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 854 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaApproachPlayer
# 855 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkSlowRight
# 856 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowLeft
# 857 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowLeft
# 858 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 859 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 860 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 861 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaNotLikePyre, MSGBOX_DEFAULT
# 862 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 863 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_MattTabithaDoMultiBattle
# 864 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 865 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 866 "data/maps/SkyPillar_Top/scripts.pory"

# 867 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaDoMultiBattle::
# 868 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 869 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2p_vs_2 TRAINER_TABITHA_SKY_PILLAR, SkyPillar_Top_Text_TabithaDefeat, TRAINER_MATT_SKY_PILLAR, SkyPillar_Top_Text_MattDefeat, PARTNER_EMMIE
# 870 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 871 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_MattTabithaVictory
# 872 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 873 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 874 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 875 "data/maps/SkyPillar_Top/scripts.pory"

# 876 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_MattTabithaVictory::
# 877 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 878 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaMattKnockedBack
# 879 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, SkyPillar_Top_Movement_TabithaMattKnockedBack
# 880 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 881 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, Common_Movement_WalkInPlaceFasterRight
# 882 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 883 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattPostBattle, MSGBOX_DEFAULT
# 884 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 885 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 886 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 887 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaPostBattle, MSGBOX_DEFAULT
# 888 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 889 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_MATT, SkyPillar_Top_Movement_MattReturnToPosition
# 890 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_TABITHA, SkyPillar_Top_Movement_TabithaReturnToPosition
# 891 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowLeft
# 892 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 893 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_MATT, MOVEMENT_TYPE_FACE_DOWN
# 894 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_TABITHA, MOVEMENT_TYPE_FACE_DOWN
# 895 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 896 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 897 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 898 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieNearlyThere, MSGBOX_DEFAULT
# 899 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 900 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 901 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 902 "data/maps/SkyPillar_Top/scripts.pory"

# 903 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Matt::
# 904 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 905 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_MattPostBattle, MSGBOX_DEFAULT
# 906 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 907 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 908 "data/maps/SkyPillar_Top/scripts.pory"

# 909 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Tabitha::
# 910 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 911 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_TabithaPostBattle, MSGBOX_DEFAULT
# 912 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 913 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 914 "data/maps/SkyPillar_Top/scripts.pory"

# 915 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyNoInterruptions:
# 916 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: Maxie instructed me that\n"
# 917 "data/maps/SkyPillar_Top/scripts.pory"
	.string "there are to be no interruptions.\p"
# 918 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Nobody makes me break a promise with\n"
# 919 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie, especially not you Shelly!$"
# 920 "data/maps/SkyPillar_Top/scripts.pory"

# 921 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_PlayerApproachShelly:
# 922 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 923 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 924 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 925 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 926 "data/maps/SkyPillar_Top/scripts.pory"

# 927 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_EmmieApproachCourtney:
# 928 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 929 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 930 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 931 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 932 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 933 "data/maps/SkyPillar_Top/scripts.pory"

# 934 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyShouldHaveKnown:
# 935 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Shelly: I should have known you two\n"
# 936 "data/maps/SkyPillar_Top/scripts.pory"
	.string "would turn up sooner or later…\p"
# 937 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I trust that Archie knows what's\n"
# 938 "data/maps/SkyPillar_Top/scripts.pory"
	.string "best, and every time you show up,\l"
# 939 "data/maps/SkyPillar_Top/scripts.pory"
	.string "things only ever get worse…$"
# 940 "data/maps/SkyPillar_Top/scripts.pory"

# 941 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneySpeechless:
# 942 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: … … … … … …$"
# 943 "data/maps/SkyPillar_Top/scripts.pory"

# 944 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShellyCourtney::
# 945 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 946 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_FACE_RIGHT
# 947 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_FACE_LEFT
# 948 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SkyPillar_Top_Movement_PlayerApproachShelly
# 949 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SkyPillar_Top_Movement_EmmieApproachCourtney
# 950 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 951 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 952 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkInPlaceFasterRight
# 953 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 954 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyNoInterruptions, MSGBOX_DEFAULT
# 955 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 956 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_FaceDown
# 957 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_FaceDown
# 958 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 959 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 960 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_ExclamationMark
# 961 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_ExclamationMark
# 962 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 963 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 964 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 965 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyShouldHaveKnown, MSGBOX_DEFAULT
# 966 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 967 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_FaceRight
# 968 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_FaceLeft
# 969 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 970 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 971 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneySpeechless, MSGBOX_DEFAULT
# 972 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 973 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkDown
# 974 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkDown
# 975 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 976 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_CourtneyShellyDoMultiBattle
# 977 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 978 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 979 "data/maps/SkyPillar_Top/scripts.pory"

# 980 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CourtneyShellyDoMultiBattle::
# 981 "data/maps/SkyPillar_Top/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 982 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_COURTNEY, MOVEMENT_TYPE_FACE_DOWN
# 983 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_SKYPILLAR_SHELLY, MOVEMENT_TYPE_FACE_DOWN
# 984 "data/maps/SkyPillar_Top/scripts.pory"
	multi_2p_vs_2 TRAINER_SHELLY_SKY_PILLAR, SkyPillar_Top_Text_ShellyDefeat, TRAINER_COURTNEY_SKY_PILLAR, SkyPillar_Top_Text_CourtneyDefeat, PARTNER_EMMIE
# 985 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 986 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, SkyPillar_Top_EventScript_CourtneyShellyVictory
# 987 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 988 "data/maps/SkyPillar_Top/scripts.pory"
	special SetCB2WhiteOut
# 989 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 990 "data/maps/SkyPillar_Top/scripts.pory"

# 991 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CourtneyShellyVictory::
# 992 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 993 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, SkyPillar_Top_Movement_CourtneyShellyKnockedBack
# 994 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, SkyPillar_Top_Movement_CourtneyShellyKnockedBack
# 995 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 996 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 997 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 998 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 999 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1000 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_SKYPILLAR_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 1001 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1002 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 1003 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1004 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowRight
# 1005 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 1006 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1007 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_EmmieThisIsIt, MSGBOX_DEFAULT
# 1008 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1009 "data/maps/SkyPillar_Top/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 1010 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1011 "data/maps/SkyPillar_Top/scripts.pory"

# 1012 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Shelly::
# 1013 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 1014 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 1015 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1016 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1017 "data/maps/SkyPillar_Top/scripts.pory"

# 1018 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Courtney::
# 1019 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 1020 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 1021 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1022 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1023 "data/maps/SkyPillar_Top/scripts.pory"

# 1024 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyDefeat:
# 1025 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maybe I was wrong about you…\n"
# 1026 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Perhaps you are the answer…$"
# 1027 "data/maps/SkyPillar_Top/scripts.pory"

# 1028 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyDefeat:
# 1029 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie trusted me and I've let\n"
# 1030 "data/maps/SkyPillar_Top/scripts.pory"
	.string "him down…$"
# 1031 "data/maps/SkyPillar_Top/scripts.pory"

# 1032 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_EmmieThisIsIt:
# 1033 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Emmie: We made it, {PLAYER}.\n"
# 1034 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Archie and Maxie are up ahead.\p"
# 1035 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Once we get involved, there's no\n"
# 1036 "data/maps/SkyPillar_Top/scripts.pory"
	.string "turning back.\p"
# 1037 "data/maps/SkyPillar_Top/scripts.pory"
	.string "We better make sure we're prepared\n"
# 1038 "data/maps/SkyPillar_Top/scripts.pory"
	.string "before we go any further.$"
# 1039 "data/maps/SkyPillar_Top/scripts.pory"

# 1040 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_CourtneyPostBattle:
# 1041 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Courtney: Please! You can't interrupt\n"
# 1042 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Maxie now, this is too important!$"
# 1043 "data/maps/SkyPillar_Top/scripts.pory"

# 1044 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_ShellyPostBattle:
# 1045 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Shelly: There really is no stopping\n"
# 1046 "data/maps/SkyPillar_Top/scripts.pory"
	.string "you two is there…$"
# 1047 "data/maps/SkyPillar_Top/scripts.pory"

# 1048 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CourtneyShellyKnockedBack:
# 1049 "data/maps/SkyPillar_Top/scripts.pory"
	lock_facing_direction
# 1050 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_up
# 1051 "data/maps/SkyPillar_Top/scripts.pory"
	unlock_facing_direction
# 1052 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1053 "data/maps/SkyPillar_Top/scripts.pory"

# 1054 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 1055 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 1056 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1057 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1058 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 1059 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 1060 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 1061 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1062 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 1063 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1064 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1065 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 1066 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 1067 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 1068 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 1069 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 1070 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1071 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1072 "data/maps/SkyPillar_Top/scripts.pory"

# 1073 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 1074 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 1075 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 1076 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1077 "data/maps/SkyPillar_Top/scripts.pory"

# 1078 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 1079 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 1080 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 1081 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1082 "data/maps/SkyPillar_Top/scripts.pory"

# 1083 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 1084 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1085 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1086 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1087 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1088 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1089 "data/maps/SkyPillar_Top/scripts.pory"

# 1090 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 1091 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1092 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1093 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1094 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 1095 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 1096 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1097 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1098 "data/maps/SkyPillar_Top/scripts.pory"

# 1099 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 1100 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 1101 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 1102 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1103 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1104 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 1105 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 1106 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1107 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 1108 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 1109 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1110 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1111 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1112 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 1113 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 1114 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 1115 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 1116 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 1117 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1118 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 1119 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 1120 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 1121 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 1122 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 1123 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 1124 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 1125 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 1126 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 1127 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 1128 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1129 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 1130 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 1131 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 1132 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 1133 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 1134 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 1135 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 1136 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 1137 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 1138 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 1139 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 1140 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 1141 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 1142 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 1143 "data/maps/SkyPillar_Top/scripts.pory"

# 1144 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 1145 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 1146 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 1147 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1148 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 1149 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1150 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1151 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1152 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1153 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1154 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 1155 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1156 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 1157 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1158 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1159 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1160 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1161 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1162 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1163 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1164 "data/maps/SkyPillar_Top/scripts.pory"

# 1165 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 1166 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 1167 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 1168 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 1169 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 1170 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 1171 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 1172 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1173 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1174 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1175 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1176 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1177 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 1178 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1179 "data/maps/SkyPillar_Top/scripts.pory"

# 1180 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 1181 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1182 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1183 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 1184 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1185 "data/maps/SkyPillar_Top/scripts.pory"

# 1186 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 1187 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1188 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1189 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 1190 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 1191 "data/maps/SkyPillar_Top/scripts.pory"

# 1192 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 1193 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"
