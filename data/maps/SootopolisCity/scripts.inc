# 1 "data/maps/SootopolisCity/scripts.pory"

# 2 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_EXPERT, 1
# 3 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WOMAN_2, 2
# 4 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_KIRI, 3
# 5 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_NINJA_BOY, 4
# 6 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BOY_1, 5
# 7 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_STEVEN, 7
# 8 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WOMAN_1, 8
# 9 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_GROUDON, 9
# 10 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_KYOGRE, 10
# 11 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_RAYQUAZA, 11
# 12 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_MANIAC, 12
# 13 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_GIRL, 13
# 14 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BLACK_BELT, 14
# 15 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BOY_2, 15
# 16 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_MAXIE, 16
# 17 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_ARCHIE, 17
# 18 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WALLACE, 18
# 19 "data/maps/SootopolisCity/scripts.pory"

# 20 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_MapScripts::
# 21 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_OnLoad
# 22 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_OnTransition
# 23 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_OnResume
# 24 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_OnFrame
# 25 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_OnWarp
# 26 "data/maps/SootopolisCity/scripts.pory"
	.byte 0
# 27 "data/maps/SootopolisCity/scripts.pory"

# 28 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad:
# 29 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 30 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockGymDoor
# 31 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_EventScript_LegendariesNotArrived
# 32 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockHouseDoors
# 33 "data/maps/SootopolisCity/scripts.pory"
	end
# 34 "data/maps/SootopolisCity/scripts.pory"

# 35 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesNotArrived::
# 36 "data/maps/SootopolisCity/scripts.pory"
	end
# 37 "data/maps/SootopolisCity/scripts.pory"

# 38 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockHouseDoors::
# 39 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 40 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 41 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
# 42 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 43 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 8, 35, METATILE_Sootopolis_Door_Closed, TRUE
# 44 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
# 45 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 45, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 46 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 48, 25, METATILE_Sootopolis_Door_Closed, TRUE
# 47 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 48 "data/maps/SootopolisCity/scripts.pory"
	return
# 49 "data/maps/SootopolisCity/scripts.pory"

# 50 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockGymDoor::
# 51 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
# 52 "data/maps/SootopolisCity/scripts.pory"
	return
# 53 "data/maps/SootopolisCity/scripts.pory"

# 54 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition:
# 55 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 56 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 57 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 58 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 59 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWeather
# 60 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetLayout
# 61 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetBattleSpectators
# 62 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetBattleSpectators
# 63 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetBattleSpectators
# 64 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetBattleSpectators
# 65 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetBattleSpectators
# 66 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 67 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 68 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
# 69 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetOutsideGymObjPos
# 70 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetExpertBlockCaveEntrance
# 71 "data/maps/SootopolisCity/scripts.pory"
	end
# 72 "data/maps/SootopolisCity/scripts.pory"

# 73 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_HideMapNamePopup::
# 74 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 75 "data/maps/SootopolisCity/scripts.pory"
	return
# 76 "data/maps/SootopolisCity/scripts.pory"

# 77 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetBattleSpectators::
# 78 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 79 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_BOY_1, 46, 32
# 80 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_NINJA_BOY, 48, 41
# 81 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WOMAN_1, 45, 43
# 82 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 83 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 84 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 85 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
# 86 "data/maps/SootopolisCity/scripts.pory"
	return
# 87 "data/maps/SootopolisCity/scripts.pory"

# 88 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout::
# 89 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalLayout
# 90 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalLayout
# 91 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 92 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetLegendariesLayout
# 93 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetLegendariesLayout
# 94 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetLegendariesLayout
# 95 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 96 "data/maps/SootopolisCity/scripts.pory"
	return
# 97 "data/maps/SootopolisCity/scripts.pory"

# 98 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalLayout::
# 99 "data/maps/SootopolisCity/scripts.pory"
	return
# 100 "data/maps/SootopolisCity/scripts.pory"

# 101 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLegendariesLayout::
# 102 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
# 103 "data/maps/SootopolisCity/scripts.pory"
	return
# 104 "data/maps/SootopolisCity/scripts.pory"

# 105 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather::
# 106 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalWeather
# 107 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalWeather
# 108 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 109 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 110 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, Common_EventScript_SetAbnormalWeather
# 111 "data/maps/SootopolisCity/scripts.pory"
	return
# 112 "data/maps/SootopolisCity/scripts.pory"

# 113 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalWeather::
# 114 "data/maps/SootopolisCity/scripts.pory"
	return
# 115 "data/maps/SootopolisCity/scripts.pory"

# 116 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetDownpour::
# 117 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 118 "data/maps/SootopolisCity/scripts.pory"
	return
# 119 "data/maps/SootopolisCity/scripts.pory"

# 120 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
# 121 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
# 122 "data/maps/SootopolisCity/scripts.pory"
	return
# 123 "data/maps/SootopolisCity/scripts.pory"

# 124 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
# 125 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 126 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 32, 18
# 127 "data/maps/SootopolisCity/scripts.pory"
	return
# 128 "data/maps/SootopolisCity/scripts.pory"

# 129 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
# 130 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 131 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 18
# 132 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 32, 18
# 133 "data/maps/SootopolisCity/scripts.pory"
	end
# 134 "data/maps/SootopolisCity/scripts.pory"

# 135 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos::
# 136 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
# 137 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 29, 33
# 138 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 33, 35
# 139 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 34, 35
# 140 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 0, SootopolisCity_EventScript_SetWallaceMiddle
# 141 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 1, SootopolisCity_EventScript_SetWallaceRight
# 142 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 2, SootopolisCity_EventScript_SetWallaceLeft
# 143 "data/maps/SootopolisCity/scripts.pory"
	return
# 144 "data/maps/SootopolisCity/scripts.pory"

# 145 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceMiddle::
# 146 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 33
# 147 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 148 "data/maps/SootopolisCity/scripts.pory"
	return
# 149 "data/maps/SootopolisCity/scripts.pory"

# 150 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceRight::
# 151 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 32, 33
# 152 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 153 "data/maps/SootopolisCity/scripts.pory"
	return
# 154 "data/maps/SootopolisCity/scripts.pory"

# 155 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceLeft::
# 156 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 30, 33
# 157 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 158 "data/maps/SootopolisCity/scripts.pory"
	return
# 159 "data/maps/SootopolisCity/scripts.pory"

# 160 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
# 161 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
# 162 "data/maps/SootopolisCity/scripts.pory"
	return
# 163 "data/maps/SootopolisCity/scripts.pory"

# 164 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnWarp:
# 165 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
# 166 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 167 "data/maps/SootopolisCity/scripts.pory"

# 168 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries::
# 169 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_PlayerFaceLegendaries1
# 170 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 2, SootopolisCity_EventScript_PlayerFaceLegendaries2
# 171 "data/maps/SootopolisCity/scripts.pory"
	end
# 172 "data/maps/SootopolisCity/scripts.pory"

# 173 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 174 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 175 "data/maps/SootopolisCity/scripts.pory"
	return
# 176 "data/maps/SootopolisCity/scripts.pory"

# 177 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 178 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 179 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 180 "data/maps/SootopolisCity/scripts.pory"
	return
# 181 "data/maps/SootopolisCity/scripts.pory"

# 182 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnResume:
# 183 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 184 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
# 185 "data/maps/SootopolisCity/scripts.pory"
	end
# 186 "data/maps/SootopolisCity/scripts.pory"

# 187 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnFrame:
# 188 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 189 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
# 190 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 191 "data/maps/SootopolisCity/scripts.pory"

# 192 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 193 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 194 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 195 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 196 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
# 197 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
# 198 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 199 "data/maps/SootopolisCity/scripts.pory"
	end
# 200 "data/maps/SootopolisCity/scripts.pory"

# 201 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 202 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 203 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 204 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 205 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 207 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 208 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 209 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 210 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 211 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 212 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 213 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 214 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 215 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 216 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 218 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 219 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 220 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 221 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 222 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 223 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 224 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 225 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 226 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 227 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 228 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 229 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 230 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 231 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 232 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 233 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 234 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 235 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 236 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 237 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 238 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 239 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 240 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 241 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 242 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 243 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 244 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 245 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 246 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 247 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 248 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 249 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 250 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 251 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 252 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 253 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 254 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 255 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 256 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 257 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 258 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 259 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 260 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 261 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 262 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 263 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 264 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 266 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 267 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 268 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 269 "data/maps/SootopolisCity/scripts.pory"
	end
# 270 "data/maps/SootopolisCity/scripts.pory"

# 271 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter:
# 272 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 273 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 274 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 275 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 276 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 277 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 278 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 279 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 280 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 281 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 282 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 283 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 284 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 285 "data/maps/SootopolisCity/scripts.pory"

# 286 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter:
# 287 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 288 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 289 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 290 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 291 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 292 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 293 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 294 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 295 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 296 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 297 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 298 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 299 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 300 "data/maps/SootopolisCity/scripts.pory"

# 301 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 302 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 303 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 304 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 305 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 307 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 308 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 309 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 310 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 311 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 312 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 313 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 314 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 315 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 316 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 317 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 318 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 319 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 320 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 321 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 322 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 323 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 324 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 325 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 326 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 327 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 328 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 329 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 330 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 331 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 332 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 333 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 334 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 335 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 336 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 338 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 339 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 340 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 341 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 342 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 343 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 344 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 345 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 346 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 347 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 348 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 349 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 350 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 352 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 353 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 354 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 355 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 356 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 357 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 358 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 359 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 360 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 361 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 362 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 363 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 364 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 366 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 367 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 368 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 369 "data/maps/SootopolisCity/scripts.pory"
	end
# 370 "data/maps/SootopolisCity/scripts.pory"

# 371 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive:
# 372 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 373 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 374 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 375 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 376 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 377 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 378 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 379 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 380 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 381 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 382 "data/maps/SootopolisCity/scripts.pory"

# 383 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive:
# 384 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 385 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 386 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 387 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 388 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 389 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 390 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 391 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 392 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 393 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 394 "data/maps/SootopolisCity/scripts.pory"

# 395 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 396 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 397 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 398 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 399 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 400 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 401 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 402 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 403 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 404 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 405 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 406 "data/maps/SootopolisCity/scripts.pory"

# 407 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend:
# 408 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 409 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 410 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 411 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 412 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 413 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 414 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 415 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 416 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 417 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 418 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 419 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 420 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 421 "data/maps/SootopolisCity/scripts.pory"

# 422 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack:
# 423 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 424 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 425 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 426 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 427 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 428 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 429 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 430 "data/maps/SootopolisCity/scripts.pory"

# 431 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle:
# 432 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 433 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 434 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 435 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 436 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 437 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 438 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 439 "data/maps/SootopolisCity/scripts.pory"

# 440 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack:
# 441 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 442 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 443 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 444 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 445 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 446 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 447 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 448 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 449 "data/maps/SootopolisCity/scripts.pory"

# 450 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 451 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 452 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 453 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 454 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 455 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 456 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 457 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 458 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 459 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 460 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 461 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 462 "data/maps/SootopolisCity/scripts.pory"

# 463 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack:
# 464 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 465 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 466 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 467 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 468 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 469 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 470 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 471 "data/maps/SootopolisCity/scripts.pory"

# 472 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle:
# 473 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 474 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 475 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 476 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 477 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 478 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 479 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 480 "data/maps/SootopolisCity/scripts.pory"

# 481 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 482 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 483 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 484 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 485 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
# 486 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
# 487 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 488 "data/maps/SootopolisCity/scripts.pory"
	end
# 489 "data/maps/SootopolisCity/scripts.pory"

# 490 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 491 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 492 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 493 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 494 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 495 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 496 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 497 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 498 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 499 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 500 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 501 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 502 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_RAYQUAZA, MAP_SOOTOPOLIS_CITY
# 503 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 504 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 505 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 506 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 507 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 508 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 509 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 511 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 512 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 513 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 514 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 515 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 516 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 517 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 518 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 519 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 520 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 521 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 522 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 523 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 524 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 525 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 526 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 527 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 528 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 529 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 530 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 532 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 533 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 534 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 535 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 536 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 537 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 538 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 539 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 540 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 43, 32
# 541 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 542 "data/maps/SootopolisCity/scripts.pory"
	end
# 543 "data/maps/SootopolisCity/scripts.pory"

# 544 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 545 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 546 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 547 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 548 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 550 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 551 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 552 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 553 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 554 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 555 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 556 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 557 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 558 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 559 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 560 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 561 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 562 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 563 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 564 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 565 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 566 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 567 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 568 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 569 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 570 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 571 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 572 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 573 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 574 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 575 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 576 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 577 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 578 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 579 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 580 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 581 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 582 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 583 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 584 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 585 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 586 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 587 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 588 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
# 589 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 590 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SURF
# 591 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 592 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 593 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 29, 53
# 594 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 595 "data/maps/SootopolisCity/scripts.pory"
	end
# 596 "data/maps/SootopolisCity/scripts.pory"

# 597 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 598 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 599 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 600 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 601 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 602 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 603 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 604 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 605 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 606 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 607 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 608 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 609 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 610 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 611 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 612 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 613 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 614 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 615 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 616 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 617 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 618 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 619 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 620 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 621 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 622 "data/maps/SootopolisCity/scripts.pory"
	return
# 623 "data/maps/SootopolisCity/scripts.pory"

# 624 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 625 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 626 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 627 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 628 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 629 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 630 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 631 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 632 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 633 "data/maps/SootopolisCity/scripts.pory"

# 634 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 635 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 636 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 637 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 638 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 639 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 640 "data/maps/SootopolisCity/scripts.pory"

# 641 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 642 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 643 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 644 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 645 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 646 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 647 "data/maps/SootopolisCity/scripts.pory"

# 648 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 649 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 650 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 651 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 652 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 653 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 654 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 655 "data/maps/SootopolisCity/scripts.pory"

# 656 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 657 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 658 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 659 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 660 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 661 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 662 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 663 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 664 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 665 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 666 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 667 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 668 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 669 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 670 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 671 "data/maps/SootopolisCity/scripts.pory"

# 672 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 673 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 674 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 675 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 676 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 677 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 678 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 679 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 680 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 681 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 682 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 683 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 684 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 685 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 686 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 687 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 688 "data/maps/SootopolisCity/scripts.pory"

# 689 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 690 "data/maps/SootopolisCity/scripts.pory"
	lock
# 691 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 692 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ExpertPostLegendaries
# 693 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ExpertLegendaries
# 694 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
# 695 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 696 "data/maps/SootopolisCity/scripts.pory"
	release
# 697 "data/maps/SootopolisCity/scripts.pory"
	end
# 698 "data/maps/SootopolisCity/scripts.pory"

# 699 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 700 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 701 "data/maps/SootopolisCity/scripts.pory"
	release
# 702 "data/maps/SootopolisCity/scripts.pory"
	end
# 703 "data/maps/SootopolisCity/scripts.pory"

# 704 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 705 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 706 "data/maps/SootopolisCity/scripts.pory"
	release
# 707 "data/maps/SootopolisCity/scripts.pory"
	end
# 708 "data/maps/SootopolisCity/scripts.pory"

# 709 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 710 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 711 "data/maps/SootopolisCity/scripts.pory"
	release
# 712 "data/maps/SootopolisCity/scripts.pory"
	end
# 713 "data/maps/SootopolisCity/scripts.pory"

# 714 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 715 "data/maps/SootopolisCity/scripts.pory"
	lock
# 716 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 717 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
# 718 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_KiriGiveBerry
# 719 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_KiriRayquaza
# 720 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 721 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 722 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 723 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 724 "data/maps/SootopolisCity/scripts.pory"
	release
# 725 "data/maps/SootopolisCity/scripts.pory"
	end
# 726 "data/maps/SootopolisCity/scripts.pory"

# 727 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 728 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 729 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 730 "data/maps/SootopolisCity/scripts.pory"
	release
# 731 "data/maps/SootopolisCity/scripts.pory"
	end
# 732 "data/maps/SootopolisCity/scripts.pory"

# 733 "data/maps/SootopolisCity/scripts.pory"
@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
# 734 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 735 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 736 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 737 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
# 738 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 739 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 740 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 741 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 742 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 743 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 744 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 745 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 746 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 747 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
# 748 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
# 749 "data/maps/SootopolisCity/scripts.pory"
	end
# 750 "data/maps/SootopolisCity/scripts.pory"

# 751 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 752 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 753 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 754 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 755 "data/maps/SootopolisCity/scripts.pory"
	release
# 756 "data/maps/SootopolisCity/scripts.pory"
	end
# 757 "data/maps/SootopolisCity/scripts.pory"

# 758 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry::
# 759 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 760 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 761 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 762 "data/maps/SootopolisCity/scripts.pory"
	release
# 763 "data/maps/SootopolisCity/scripts.pory"
	end
# 764 "data/maps/SootopolisCity/scripts.pory"

# 765 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 766 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 767 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 768 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 769 "data/maps/SootopolisCity/scripts.pory"
	release
# 770 "data/maps/SootopolisCity/scripts.pory"
	end
# 771 "data/maps/SootopolisCity/scripts.pory"

# 772 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 773 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 774 "data/maps/SootopolisCity/scripts.pory"
	release
# 775 "data/maps/SootopolisCity/scripts.pory"
	end
# 776 "data/maps/SootopolisCity/scripts.pory"

# 777 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 778 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 779 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FacePlayer
# 780 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman2Rayquaza
# 782 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 783 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 784 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FaceOriginalDirection
# 785 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 786 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 787 "data/maps/SootopolisCity/scripts.pory"
	end
# 788 "data/maps/SootopolisCity/scripts.pory"

# 789 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 790 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 791 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 792 "data/maps/SootopolisCity/scripts.pory"
	end
# 793 "data/maps/SootopolisCity/scripts.pory"

# 794 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 795 "data/maps/SootopolisCity/scripts.pory"
	lock
# 796 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 797 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ManPostLegendaries
# 798 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 799 "data/maps/SootopolisCity/scripts.pory"
	release
# 800 "data/maps/SootopolisCity/scripts.pory"
	end
# 801 "data/maps/SootopolisCity/scripts.pory"

# 802 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 803 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 804 "data/maps/SootopolisCity/scripts.pory"
	release
# 805 "data/maps/SootopolisCity/scripts.pory"
	end
# 806 "data/maps/SootopolisCity/scripts.pory"

# 807 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 808 "data/maps/SootopolisCity/scripts.pory"
	lock
# 809 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 810 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Woman1PostLegendaries
# 811 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman1Rayquaza
# 812 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
# 813 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 814 "data/maps/SootopolisCity/scripts.pory"
	release
# 815 "data/maps/SootopolisCity/scripts.pory"
	end
# 816 "data/maps/SootopolisCity/scripts.pory"

# 817 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 818 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 819 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 820 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 821 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 822 "data/maps/SootopolisCity/scripts.pory"
	release
# 823 "data/maps/SootopolisCity/scripts.pory"
	end
# 824 "data/maps/SootopolisCity/scripts.pory"

# 825 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 826 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 827 "data/maps/SootopolisCity/scripts.pory"
	release
# 828 "data/maps/SootopolisCity/scripts.pory"
	end
# 829 "data/maps/SootopolisCity/scripts.pory"

# 830 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 831 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 832 "data/maps/SootopolisCity/scripts.pory"
	release
# 833 "data/maps/SootopolisCity/scripts.pory"
	end
# 834 "data/maps/SootopolisCity/scripts.pory"

# 835 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 836 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 837 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FacePlayer
# 838 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 839 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NinjaBoyRayquaza
# 840 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_NinjaBoyNormal
# 841 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
# 842 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 843 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 844 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 845 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 846 "data/maps/SootopolisCity/scripts.pory"
	release
# 847 "data/maps/SootopolisCity/scripts.pory"
	end
# 848 "data/maps/SootopolisCity/scripts.pory"

# 849 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 850 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 851 "data/maps/SootopolisCity/scripts.pory"
	release
# 852 "data/maps/SootopolisCity/scripts.pory"
	end
# 853 "data/maps/SootopolisCity/scripts.pory"

# 854 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 855 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 856 "data/maps/SootopolisCity/scripts.pory"
	release
# 857 "data/maps/SootopolisCity/scripts.pory"
	end
# 858 "data/maps/SootopolisCity/scripts.pory"

# 859 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 860 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 861 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FacePlayer
# 862 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 863 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy1Rayquaza
# 864 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
# 865 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Boy1Normal
# 866 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
# 867 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 868 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 869 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FaceOriginalDirection
# 870 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 871 "data/maps/SootopolisCity/scripts.pory"
	release
# 872 "data/maps/SootopolisCity/scripts.pory"
	end
# 873 "data/maps/SootopolisCity/scripts.pory"

# 874 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 875 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 876 "data/maps/SootopolisCity/scripts.pory"
	release
# 877 "data/maps/SootopolisCity/scripts.pory"
	end
# 878 "data/maps/SootopolisCity/scripts.pory"

# 879 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 880 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 881 "data/maps/SootopolisCity/scripts.pory"
	release
# 882 "data/maps/SootopolisCity/scripts.pory"
	end
# 883 "data/maps/SootopolisCity/scripts.pory"

# 884 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 885 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 886 "data/maps/SootopolisCity/scripts.pory"
	release
# 887 "data/maps/SootopolisCity/scripts.pory"
	end
# 888 "data/maps/SootopolisCity/scripts.pory"

# 889 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 890 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 891 "data/maps/SootopolisCity/scripts.pory"
	end
# 892 "data/maps/SootopolisCity/scripts.pory"

# 893 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 894 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 895 "data/maps/SootopolisCity/scripts.pory"
	end
# 896 "data/maps/SootopolisCity/scripts.pory"

# 897 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 898 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 899 "data/maps/SootopolisCity/scripts.pory"
	end
# 900 "data/maps/SootopolisCity/scripts.pory"

# 901 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven::
# 902 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 903 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
# 904 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 905 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
# 906 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StevenHelpWallace
# 907 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_StevenHelpedWallace
# 908 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_StevenHelpedWallace
# 909 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_StevenMaxieArchieLeft
# 910 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
# 911 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 912 "data/maps/SootopolisCity/scripts.pory"
	end
# 913 "data/maps/SootopolisCity/scripts.pory"

# 914 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpWallace::
# 915 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
# 916 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 917 "data/maps/SootopolisCity/scripts.pory"
	end
# 918 "data/maps/SootopolisCity/scripts.pory"

# 919 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 920 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
# 921 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 922 "data/maps/SootopolisCity/scripts.pory"
	end
# 923 "data/maps/SootopolisCity/scripts.pory"

# 924 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpedWallace::
# 925 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
# 926 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 927 "data/maps/SootopolisCity/scripts.pory"
	end
# 928 "data/maps/SootopolisCity/scripts.pory"

# 929 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 930 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 931 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 932 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
# 933 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
# 934 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 935 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 936 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 937 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 938 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 939 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 940 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 941 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 942 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 943 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 944 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 945 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 946 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 947 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 948 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 949 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 950 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 951 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 952 "data/maps/SootopolisCity/scripts.pory"
	end
# 953 "data/maps/SootopolisCity/scripts.pory"

# 954 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 955 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 956 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 957 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 958 "data/maps/SootopolisCity/scripts.pory"
	return
# 959 "data/maps/SootopolisCity/scripts.pory"

# 960 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 961 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 962 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 963 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 964 "data/maps/SootopolisCity/scripts.pory"
	return
# 965 "data/maps/SootopolisCity/scripts.pory"

# 966 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 967 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 968 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 969 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 970 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 971 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 972 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 973 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 974 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 975 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 976 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 977 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 978 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 979 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 980 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 981 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 982 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 983 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 984 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 985 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 986 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 987 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 988 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 989 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 990 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 991 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 992 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 993 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 994 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 995 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 996 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 997 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 998 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 999 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1000 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1001 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1002 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1003 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1004 "data/maps/SootopolisCity/scripts.pory"

# 1005 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 1006 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1007 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1008 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1009 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1010 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1011 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1012 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1013 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1014 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1015 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1016 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1017 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1018 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1019 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1020 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1021 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1022 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1023 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1024 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1025 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1026 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1027 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1028 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1029 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1030 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1031 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1032 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1033 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1034 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1035 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1036 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1037 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1038 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1039 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1040 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1041 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1042 "data/maps/SootopolisCity/scripts.pory"

# 1043 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 1044 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1045 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1046 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1047 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1048 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1049 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1050 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1051 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1052 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1053 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1054 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1055 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1056 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1057 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1058 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1059 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1060 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1061 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1062 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1063 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1064 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1065 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1066 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1067 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1068 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1069 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1070 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1071 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1072 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1073 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1074 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1075 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1076 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1077 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1078 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1079 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1080 "data/maps/SootopolisCity/scripts.pory"

# 1081 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 1082 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1083 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1084 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1085 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1086 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1087 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1088 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1089 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1090 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1091 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1092 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1093 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1094 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1095 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1096 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1097 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1098 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1099 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1100 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1101 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1102 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1103 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1104 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1105 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1106 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1107 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1108 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1109 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1110 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1111 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1112 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1113 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1114 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1115 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1116 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1117 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1118 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1119 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1120 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1121 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1122 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1123 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1124 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1125 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1126 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1127 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1128 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1129 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1130 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1131 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1132 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 1133 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1134 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1135 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1136 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1137 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1138 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1139 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1140 "data/maps/SootopolisCity/scripts.pory"

# 1141 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 1142 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1143 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1144 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1145 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1146 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1147 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1148 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1149 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1150 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1151 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1152 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1153 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1154 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1155 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1156 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1157 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1158 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1159 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1160 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1161 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1162 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1163 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1164 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1165 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1166 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1167 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1168 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1169 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1170 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1171 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1172 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1173 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1174 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1175 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1176 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1177 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1178 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1179 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1180 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1181 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1182 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1183 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1184 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1185 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1186 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1187 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1188 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1189 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1190 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1191 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1192 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1193 "data/maps/SootopolisCity/scripts.pory"

# 1194 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 1195 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 1196 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1197 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1198 "data/maps/SootopolisCity/scripts.pory"

# 1199 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 1200 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1201 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1202 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1203 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1204 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1205 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1206 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1207 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1208 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1209 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1210 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1211 "data/maps/SootopolisCity/scripts.pory"

# 1212 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 1213 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1214 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1215 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1216 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1217 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1218 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1219 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1220 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1221 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1222 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1223 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1224 "data/maps/SootopolisCity/scripts.pory"

# 1225 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 1226 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1227 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1228 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1229 "data/maps/SootopolisCity/scripts.pory"

# 1230 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 1231 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1232 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FacePlayer
# 1233 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1234 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy2Rayquaza
# 1235 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 1236 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1237 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FaceOriginalDirection
# 1238 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1239 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1240 "data/maps/SootopolisCity/scripts.pory"
	end
# 1241 "data/maps/SootopolisCity/scripts.pory"

# 1242 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 1243 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 1244 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1245 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1246 "data/maps/SootopolisCity/scripts.pory"
	end
# 1247 "data/maps/SootopolisCity/scripts.pory"

# 1248 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 1249 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1250 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_BlackBeltRayquaza
# 1251 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 1252 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1253 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1254 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1255 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 1256 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1257 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 1258 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1259 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1260 "data/maps/SootopolisCity/scripts.pory"
	end
# 1261 "data/maps/SootopolisCity/scripts.pory"

# 1262 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 1263 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1264 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1265 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 1266 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1267 "data/maps/SootopolisCity/scripts.pory"
	end
# 1268 "data/maps/SootopolisCity/scripts.pory"

# 1269 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 1270 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1271 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FacePlayer
# 1272 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1273 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GirlRayquaza
# 1274 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 1275 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1276 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FaceOriginalDirection
# 1277 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1278 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1279 "data/maps/SootopolisCity/scripts.pory"
	end
# 1280 "data/maps/SootopolisCity/scripts.pory"

# 1281 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 1282 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 1283 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1284 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1285 "data/maps/SootopolisCity/scripts.pory"
	end
# 1286 "data/maps/SootopolisCity/scripts.pory"

# 1287 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 1288 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1289 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FacePlayer
# 1290 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1291 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ManiacRayquaza
# 1292 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 1293 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1294 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FaceOriginalDirection
# 1295 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1296 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1297 "data/maps/SootopolisCity/scripts.pory"
	end
# 1298 "data/maps/SootopolisCity/scripts.pory"

# 1299 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 1300 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 1301 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1302 "data/maps/SootopolisCity/scripts.pory"
	end
# 1303 "data/maps/SootopolisCity/scripts.pory"

# 1304 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 1305 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1306 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1307 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_GoToSkyPillar
# 1308 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_GoToGym
# 1309 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_GiveWaterfall
# 1310 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 1311 "data/maps/SootopolisCity/scripts.pory"
	release
# 1312 "data/maps/SootopolisCity/scripts.pory"
	end
# 1313 "data/maps/SootopolisCity/scripts.pory"

# 1314 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall::
# 1315 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 1316 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 1317 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 1318 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 1319 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1320 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_WallaceMoveFromGym
# 1321 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SootopolisCity_EventScript_WallaceMoveFromGym
# 1322 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_WallaceMoveFromGymWest
# 1323 "data/maps/SootopolisCity/scripts.pory"
	release
# 1324 "data/maps/SootopolisCity/scripts.pory"
	end
# 1325 "data/maps/SootopolisCity/scripts.pory"

# 1326 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGym::
# 1327 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 1328 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1329 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 1330 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 1331 "data/maps/SootopolisCity/scripts.pory"
	return
# 1332 "data/maps/SootopolisCity/scripts.pory"

# 1333 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 1334 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 1335 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1336 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 1337 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 1338 "data/maps/SootopolisCity/scripts.pory"
	return
# 1339 "data/maps/SootopolisCity/scripts.pory"

# 1340 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToSkyPillar::
# 1341 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 1342 "data/maps/SootopolisCity/scripts.pory"
	release
# 1343 "data/maps/SootopolisCity/scripts.pory"
	end
# 1344 "data/maps/SootopolisCity/scripts.pory"

# 1345 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToGym::
# 1346 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
# 1347 "data/maps/SootopolisCity/scripts.pory"
	release
# 1348 "data/maps/SootopolisCity/scripts.pory"
	end
# 1349 "data/maps/SootopolisCity/scripts.pory"

# 1350 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 1351 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1352 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1353 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1354 "data/maps/SootopolisCity/scripts.pory"

# 1355 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 1356 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1357 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1358 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1359 "data/maps/SootopolisCity/scripts.pory"

# 1360 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 1361 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1362 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_MaxieRayquaza
# 1363 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 1364 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1365 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1366 "data/maps/SootopolisCity/scripts.pory"
	end
# 1367 "data/maps/SootopolisCity/scripts.pory"

# 1368 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza::
# 1369 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_DEFAULT
# 1370 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1371 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1372 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1373 "data/maps/SootopolisCity/scripts.pory"
	end
# 1374 "data/maps/SootopolisCity/scripts.pory"

# 1375 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 1376 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1377 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ArchieRayquaza
# 1378 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 1379 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1380 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1381 "data/maps/SootopolisCity/scripts.pory"
	end
# 1382 "data/maps/SootopolisCity/scripts.pory"

# 1383 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza::
# 1384 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_DEFAULT
# 1385 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1386 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1387 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1388 "data/maps/SootopolisCity/scripts.pory"
	end
# 1389 "data/maps/SootopolisCity/scripts.pory"

# 1390 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieArchieLeave::
# 1391 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 1392 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 1393 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1394 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1395 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1396 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 1397 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 1398 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1399 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1400 "data/maps/SootopolisCity/scripts.pory"
	end
# 1401 "data/maps/SootopolisCity/scripts.pory"

# 1402 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1403 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 1404 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1405 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1406 "data/maps/SootopolisCity/scripts.pory"

# 1407 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1408 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 1409 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1410 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1411 "data/maps/SootopolisCity/scripts.pory"

# 1412 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign:
# 1413 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\n"
# 1414 "data/maps/SootopolisCity/scripts.pory"
	.string "Leader: JUAN\p"
# 1415 "data/maps/SootopolisCity/scripts.pory"
	.string "“The GYM LEADER with the beauty\n"
# 1416 "data/maps/SootopolisCity/scripts.pory"
	.string "of pure water!”$"
# 1417 "data/maps/SootopolisCity/scripts.pory"

# 1418 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign:
# 1419 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY\p"
# 1420 "data/maps/SootopolisCity/scripts.pory"
	.string "“The mystical city where history\n"
# 1421 "data/maps/SootopolisCity/scripts.pory"
	.string "slumbers.”$"
# 1422 "data/maps/SootopolisCity/scripts.pory"

# 1423 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed:
# 1424 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"
# 1425 "data/maps/SootopolisCity/scripts.pory"

# 1426 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere:
# 1427 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
# 1428 "data/maps/SootopolisCity/scripts.pory"
	.string "down stairs all the time…\p"
# 1429 "data/maps/SootopolisCity/scripts.pory"
	.string "If you live in this town, you end up\n"
# 1430 "data/maps/SootopolisCity/scripts.pory"
	.string "getting physically fit.$"
# 1431 "data/maps/SootopolisCity/scripts.pory"

# 1432 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
# 1433 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant POKéMON suddenly appeared\n"
# 1434 "data/maps/SootopolisCity/scripts.pory"
	.string "in the middle of the city!\p"
# 1435 "data/maps/SootopolisCity/scripts.pory"
	.string "And, I've never seen them before!\p"
# 1436 "data/maps/SootopolisCity/scripts.pory"
	.string "Why are they smashing into each\n"
# 1437 "data/maps/SootopolisCity/scripts.pory"
	.string "other like that?\p"
# 1438 "data/maps/SootopolisCity/scripts.pory"
	.string "Why can't they be friends, those\n"
# 1439 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 1440 "data/maps/SootopolisCity/scripts.pory"

# 1441 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon:
# 1442 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
# 1443 "data/maps/SootopolisCity/scripts.pory"
	.string "What is that green POKéMON?!$"
# 1444 "data/maps/SootopolisCity/scripts.pory"

# 1445 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo:
# 1446 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON and KYOGRE…\n"
# 1447 "data/maps/SootopolisCity/scripts.pory"
	.string "Where did they go?\p"
# 1448 "data/maps/SootopolisCity/scripts.pory"
	.string "Will they cause droughts or downpours\n"
# 1449 "data/maps/SootopolisCity/scripts.pory"
	.string "somewhere else?$"
# 1450 "data/maps/SootopolisCity/scripts.pory"

# 1451 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry:
# 1452 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
# 1453 "data/maps/SootopolisCity/scripts.pory"
	.string "the two POKéMON aren't angry.\p"
# 1454 "data/maps/SootopolisCity/scripts.pory"
	.string "I think… They probably can't control\n"
# 1455 "data/maps/SootopolisCity/scripts.pory"
	.string "their own power…$"
# 1456 "data/maps/SootopolisCity/scripts.pory"

# 1457 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage:
# 1458 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying POKéMON came down from\n"
# 1459 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky and stopped the rampaging\l"
# 1460 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON…$"
# 1461 "data/maps/SootopolisCity/scripts.pory"

# 1462 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike:
# 1463 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
# 1464 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder what the world is like on\n"
# 1465 "data/maps/SootopolisCity/scripts.pory"
	.string "the other side of this round sky?$"
# 1466 "data/maps/SootopolisCity/scripts.pory"

# 1467 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked:
# 1468 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1469 "data/maps/SootopolisCity/scripts.pory"
	.string "This is wicked!$"
# 1470 "data/maps/SootopolisCity/scripts.pory"

# 1471 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked:
# 1472 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1473 "data/maps/SootopolisCity/scripts.pory"
	.string "That was wicked!$"
# 1474 "data/maps/SootopolisCity/scripts.pory"

# 1475 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon:
# 1476 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red POKéMON!\n"
# 1477 "data/maps/SootopolisCity/scripts.pory"
	.string "Don't back off, blue POKéMON!$"
# 1478 "data/maps/SootopolisCity/scripts.pory"

# 1479 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames:
# 1480 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1481 "data/maps/SootopolisCity/scripts.pory"
	.string "Hi, do you know the names of those\n"
# 1482 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON fighting over there?$"
# 1483 "data/maps/SootopolisCity/scripts.pory"

# 1484 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings:
# 1485 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
# 1486 "data/maps/SootopolisCity/scripts.pory"
	.string "the red one or the blue one, but, oh no,\l"
# 1487 "data/maps/SootopolisCity/scripts.pory"
	.string "it's the green one that settles things!\p"
# 1488 "data/maps/SootopolisCity/scripts.pory"
	.string "Talk about a huge turn of events!$"
# 1489 "data/maps/SootopolisCity/scripts.pory"

# 1490 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes:
# 1491 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1492 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1493 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 1494 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I'm seeing that happen with\n"
# 1495 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1496 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1497 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1498 "data/maps/SootopolisCity/scripts.pory"

# 1499 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes:
# 1500 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1501 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1502 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 1503 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I saw that happen with\n"
# 1504 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1505 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1506 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1507 "data/maps/SootopolisCity/scripts.pory"

# 1508 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting:
# 1509 "data/maps/SootopolisCity/scripts.pory"
	.string "A big POKéMON is fighting with\n"
# 1510 "data/maps/SootopolisCity/scripts.pory"
	.string "another big POKéMON!\p"
# 1511 "data/maps/SootopolisCity/scripts.pory"
	.string "Please, someone make them stop!$"
# 1512 "data/maps/SootopolisCity/scripts.pory"

# 1513 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky:
# 1514 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty POKéMON came down from\n"
# 1515 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky…$"
# 1516 "data/maps/SootopolisCity/scripts.pory"

# 1517 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked:
# 1518 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
# 1519 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY will get wrecked!$"
# 1520 "data/maps/SootopolisCity/scripts.pory"

# 1521 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked:
# 1522 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY didn't get wrecked!$"
# 1523 "data/maps/SootopolisCity/scripts.pory"

# 1524 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist:
# 1525 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
# 1526 "data/maps/SootopolisCity/scripts.pory"
	.string "You've come all the way to SOOTOPOLIS?\l"
# 1527 "data/maps/SootopolisCity/scripts.pory"
	.string "You're no ordinary tourist.\p"
# 1528 "data/maps/SootopolisCity/scripts.pory"
	.string "But I suppose that doesn't make you\n"
# 1529 "data/maps/SootopolisCity/scripts.pory"
	.string "an extraordinary tourist, either.$"
# 1530 "data/maps/SootopolisCity/scripts.pory"

# 1531 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm:
# 1532 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"
# 1533 "data/maps/SootopolisCity/scripts.pory"

# 1534 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave:
# 1535 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
# 1536 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN.\p"
# 1537 "data/maps/SootopolisCity/scripts.pory"
	.string "The spirits of POKéMON, becalmed at\n"
# 1538 "data/maps/SootopolisCity/scripts.pory"
	.string "MT. PYRE, are said to be revived here.\p"
# 1539 "data/maps/SootopolisCity/scripts.pory"
	.string "Please leave.$"
# 1540 "data/maps/SootopolisCity/scripts.pory"

# 1541 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave:
# 1542 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
# 1543 "data/maps/SootopolisCity/scripts.pory"
	.string "superior talent…\p"
# 1544 "data/maps/SootopolisCity/scripts.pory"
	.string "A TRAINER who has knowledge and\n"
# 1545 "data/maps/SootopolisCity/scripts.pory"
	.string "experience of many kinds of POKéMON…\p"
# 1546 "data/maps/SootopolisCity/scripts.pory"
	.string "If such a person were to appear, I was\n"
# 1547 "data/maps/SootopolisCity/scripts.pory"
	.string "instructed by WALLACE to lead that\l"
# 1548 "data/maps/SootopolisCity/scripts.pory"
	.string "TRAINER to this CAVE.$"
# 1549 "data/maps/SootopolisCity/scripts.pory"

# 1550 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash:
# 1551 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
# 1552 "data/maps/SootopolisCity/scripts.pory"
	.string "The clash between the two awakened\n"
# 1553 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON was quelled by the awakening\l"
# 1554 "data/maps/SootopolisCity/scripts.pory"
	.string "of a third POKéMON…$"
# 1555 "data/maps/SootopolisCity/scripts.pory"

# 1556 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo:
# 1557 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN…\p"
# 1558 "data/maps/SootopolisCity/scripts.pory"
	.string "With the passing of the crisis,\n"
# 1559 "data/maps/SootopolisCity/scripts.pory"
	.string "the cave, too, shall sleep…$"
# 1560 "data/maps/SootopolisCity/scripts.pory"

# 1561 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful:
# 1562 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS sprang up as a town in\n"
# 1563 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano.\p"
# 1564 "data/maps/SootopolisCity/scripts.pory"
	.string "If you look up at the sky, the lip of\n"
# 1565 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater is also visible.\l"
# 1566 "data/maps/SootopolisCity/scripts.pory"
	.string "So, all you see is the sky in a circle.\p"
# 1567 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's what makes the sky above\n"
# 1568 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS the most beautiful.$"
# 1569 "data/maps/SootopolisCity/scripts.pory"

# 1570 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight:
# 1571 "data/maps/SootopolisCity/scripts.pory"
	.string "When two POKéMON that gigantic\n"
# 1572 "data/maps/SootopolisCity/scripts.pory"
	.string "are fighting that savagely, there's\l"
# 1573 "data/maps/SootopolisCity/scripts.pory"
	.string "not much that we can do.$"
# 1574 "data/maps/SootopolisCity/scripts.pory"

# 1575 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
# 1576 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third POKéMON flew down,\n"
# 1577 "data/maps/SootopolisCity/scripts.pory"
	.string "I feared the worst.$"
# 1578 "data/maps/SootopolisCity/scripts.pory"

# 1579 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery:
# 1580 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
# 1581 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano…\p"
# 1582 "data/maps/SootopolisCity/scripts.pory"
	.string "And in that ring, stars flicker and\n"
# 1583 "data/maps/SootopolisCity/scripts.pory"
	.string "blink as if they were alive…\l"
# 1584 "data/maps/SootopolisCity/scripts.pory"
	.string "It's my favorite scenery.$"
# 1585 "data/maps/SootopolisCity/scripts.pory"

# 1586 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild:
# 1587 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
# 1588 "data/maps/SootopolisCity/scripts.pory"
	.string "but…\p"
# 1589 "data/maps/SootopolisCity/scripts.pory"
	.string "All of a sudden, dark clouds brewed up,\n"
# 1590 "data/maps/SootopolisCity/scripts.pory"
	.string "rain started falling in sheets, and\l"
# 1591 "data/maps/SootopolisCity/scripts.pory"
	.string "there was thunder and lightning, too.\p"
# 1592 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather just went completely\n"
# 1593 "data/maps/SootopolisCity/scripts.pory"
	.string "wild!\p"
# 1594 "data/maps/SootopolisCity/scripts.pory"
	.string "Is all of this because of those\n"
# 1595 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 1596 "data/maps/SootopolisCity/scripts.pory"

# 1597 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon:
# 1598 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
# 1599 "data/maps/SootopolisCity/scripts.pory"
	.string "It was you who brought that flying\n"
# 1600 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON here?\p"
# 1601 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, aren't you amazing!$"
# 1602 "data/maps/SootopolisCity/scripts.pory"

# 1603 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GroudonPleaseStop:
# 1604 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: G… GROUDON…\n"
# 1605 "data/maps/SootopolisCity/scripts.pory"
	.string "Please! Stop what you're doing!\p"
# 1606 "data/maps/SootopolisCity/scripts.pory"
	.string "I know the extent of your power now!\p"
# 1607 "data/maps/SootopolisCity/scripts.pory"
	.string "If you keep going, all HOENN, not just\n"
# 1608 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS, will be utterly ruined!$"
# 1609 "data/maps/SootopolisCity/scripts.pory"

# 1610 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming:
# 1611 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: So the super-ancient POKéMON\n"
# 1612 "data/maps/SootopolisCity/scripts.pory"
	.string "weren't only GROUDON and KYOGRE…\p"
# 1613 "data/maps/SootopolisCity/scripts.pory"
	.string "After all our fruitless scheming and\n"
# 1614 "data/maps/SootopolisCity/scripts.pory"
	.string "frantic efforts, that one POKéMON's\l"
# 1615 "data/maps/SootopolisCity/scripts.pory"
	.string "simple action puts everything right\l"
# 1616 "data/maps/SootopolisCity/scripts.pory"
	.string "again as if nothing had happened…\p"
# 1617 "data/maps/SootopolisCity/scripts.pory"
	.string "Fu…\n"
# 1618 "data/maps/SootopolisCity/scripts.pory"
	.string "Fuhahaha…$"
# 1619 "data/maps/SootopolisCity/scripts.pory"

# 1620 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KyogreCalmDown:
# 1621 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE! What's wrong?!\n"
# 1622 "data/maps/SootopolisCity/scripts.pory"
	.string "Look over here! It's the RED ORB!\l"
# 1623 "data/maps/SootopolisCity/scripts.pory"
	.string "Calm down! KYOGRE!\p"
# 1624 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1625 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1626 "data/maps/SootopolisCity/scripts.pory"
	.string "It's no good!\n"
# 1627 "data/maps/SootopolisCity/scripts.pory"
	.string "It's not responding at all!$"
# 1628 "data/maps/SootopolisCity/scripts.pory"

# 1629 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon:
# 1630 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE and GROUDON both\n"
# 1631 "data/maps/SootopolisCity/scripts.pory"
	.string "flew off to who knows where.\p"
# 1632 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather in HOENN has returned\n"
# 1633 "data/maps/SootopolisCity/scripts.pory"
	.string "to its normal state…\p"
# 1634 "data/maps/SootopolisCity/scripts.pory"
	.string "Haha…\n"
# 1635 "data/maps/SootopolisCity/scripts.pory"
	.string "Hahaha…\p"
# 1636 "data/maps/SootopolisCity/scripts.pory"
	.string "Maybe what we were trying to do was\n"
# 1637 "data/maps/SootopolisCity/scripts.pory"
	.string "something small, even meaningless,\l"
# 1638 "data/maps/SootopolisCity/scripts.pory"
	.string "to POKéMON…$"
# 1639 "data/maps/SootopolisCity/scripts.pory"

# 1640 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_InvolvedWithCrisisComeWithMe:
# 1641 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Those POKéMON fighting…\n"
# 1642 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON… And KYOGRE…\p"
# 1643 "data/maps/SootopolisCity/scripts.pory"
	.string "The two super-ancient POKéMON\n"
# 1644 "data/maps/SootopolisCity/scripts.pory"
	.string "were awakened from a long sleep…\p"
# 1645 "data/maps/SootopolisCity/scripts.pory"
	.string "And now they are smashing each other\n"
# 1646 "data/maps/SootopolisCity/scripts.pory"
	.string "with their uncontrollable energy…\p"
# 1647 "data/maps/SootopolisCity/scripts.pory"
	.string "…{PLAYER}{KUN}.\p"
# 1648 "data/maps/SootopolisCity/scripts.pory"
	.string "You being here now I'll take to mean\n"
# 1649 "data/maps/SootopolisCity/scripts.pory"
	.string "that you're prepared to become\l"
# 1650 "data/maps/SootopolisCity/scripts.pory"
	.string "involved in this crisis.\p"
# 1651 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, then, there's someone that\n"
# 1652 "data/maps/SootopolisCity/scripts.pory"
	.string "I'd like you to meet.\p"
# 1653 "data/maps/SootopolisCity/scripts.pory"
	.string "Come with me, please.$"
# 1654 "data/maps/SootopolisCity/scripts.pory"

# 1655 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoesThisMakeYourFearPokemon:
# 1656 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Listen, {PLAYER}{KUN}.\p"
# 1657 "data/maps/SootopolisCity/scripts.pory"
	.string "Does seeing GROUDON and KYOGRE make\n"
# 1658 "data/maps/SootopolisCity/scripts.pory"
	.string "you think POKéMON are to be feared?\p"
# 1659 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's not true.\n"
# 1660 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON are really more…\p"
# 1661 "data/maps/SootopolisCity/scripts.pory"
	.string "…Why am I asking you this?\n"
# 1662 "data/maps/SootopolisCity/scripts.pory"
	.string "You already know.$"
# 1663 "data/maps/SootopolisCity/scripts.pory"

# 1664 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HereWereAreHelpWallace:
# 1665 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Okay, here we are!\p"
# 1666 "data/maps/SootopolisCity/scripts.pory"
	.string "Inside here you'll find someone named\n"
# 1667 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE.\p"
# 1668 "data/maps/SootopolisCity/scripts.pory"
	.string "I think you have what's needed to\n"
# 1669 "data/maps/SootopolisCity/scripts.pory"
	.string "help him…$"
# 1670 "data/maps/SootopolisCity/scripts.pory"

# 1671 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KnowWhatsNeededToHelpHim:
# 1672 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: I think you have what's\n"
# 1673 "data/maps/SootopolisCity/scripts.pory"
	.string "needed to help him…$"
# 1674 "data/maps/SootopolisCity/scripts.pory"

# 1675 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NeverBeenToSkyPillar:
# 1676 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: The SKY PILLAR…\p"
# 1677 "data/maps/SootopolisCity/scripts.pory"
	.string "I've never been there.\n"
# 1678 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder where it could be?$"
# 1679 "data/maps/SootopolisCity/scripts.pory"

# 1680 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SoThatsRayquaza:
# 1681 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: So that's RAYQUAZA…\p"
# 1682 "data/maps/SootopolisCity/scripts.pory"
	.string "It's incredible how the two rampaging\n"
# 1683 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON would flee from it in fear…$"
# 1684 "data/maps/SootopolisCity/scripts.pory"

# 1685 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_MaxieArchieLeft:
# 1686 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: It looks like both MAXIE and\n"
# 1687 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE have gone away somewhere.\p"
# 1688 "data/maps/SootopolisCity/scripts.pory"
	.string "Perhaps they've gone to MT. PYRE to\n"
# 1689 "data/maps/SootopolisCity/scripts.pory"
	.string "return those ORBS…$"
# 1690 "data/maps/SootopolisCity/scripts.pory"

# 1691 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar:
# 1692 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: Oh?\n"
# 1693 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}?\p"
# 1694 "data/maps/SootopolisCity/scripts.pory"
	.string "Haven't you scaled the SKY PILLAR\n"
# 1695 "data/maps/SootopolisCity/scripts.pory"
	.string "yet?\p"
# 1696 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you can make it to\n"
# 1697 "data/maps/SootopolisCity/scripts.pory"
	.string "the top of the SKY PILLAR…$"
# 1698 "data/maps/SootopolisCity/scripts.pory"

# 1699 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AquaMagmaDidntMeanHarm:
# 1700 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 1701 "data/maps/SootopolisCity/scripts.pory"
	.string "The leaders of TEAM MAGMA and AQUA,\n"
# 1702 "data/maps/SootopolisCity/scripts.pory"
	.string "I don't think they meant harm.\p"
# 1703 "data/maps/SootopolisCity/scripts.pory"
	.string "It wouldn't hurt to hear what they\n"
# 1704 "data/maps/SootopolisCity/scripts.pory"
	.string "have to say for themselves.$"
# 1705 "data/maps/SootopolisCity/scripts.pory"

# 1706 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThankYouForHelpAcceptThis:
# 1707 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\n"
# 1708 "data/maps/SootopolisCity/scripts.pory"
	.string "My eyes didn't deceive me.\p"
# 1709 "data/maps/SootopolisCity/scripts.pory"
	.string "Thanks to your help, SOOTOPOLIS…\n"
# 1710 "data/maps/SootopolisCity/scripts.pory"
	.string "No, all of HOENN was saved.\p"
# 1711 "data/maps/SootopolisCity/scripts.pory"
	.string "On behalf of the people, I thank you.\p"
# 1712 "data/maps/SootopolisCity/scripts.pory"
	.string "This is a gift from me.\n"
# 1713 "data/maps/SootopolisCity/scripts.pory"
	.string "Please accept it.$"
# 1714 "data/maps/SootopolisCity/scripts.pory"

# 1715 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ExplainWaterfallGoToGym:
# 1716 "data/maps/SootopolisCity/scripts.pory"
	.string "That HIDDEN MACHINE contains\n"
# 1717 "data/maps/SootopolisCity/scripts.pory"
	.string "WATERFALL.\p"
# 1718 "data/maps/SootopolisCity/scripts.pory"
	.string "If you have the RAIN BADGE, a POKéMON\n"
# 1719 "data/maps/SootopolisCity/scripts.pory"
	.string "that has learned that HM move can\l"
# 1720 "data/maps/SootopolisCity/scripts.pory"
	.string "force its way up waterfalls.\p"
# 1721 "data/maps/SootopolisCity/scripts.pory"
	.string "And where does one get the RAIN BADGE?\n"
# 1722 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, don't you?\p"
# 1723 "data/maps/SootopolisCity/scripts.pory"
	.string "That's right! You have to beat\n"
# 1724 "data/maps/SootopolisCity/scripts.pory"
	.string "the SOOTOPOLIS GYM LEADER.\p"
# 1725 "data/maps/SootopolisCity/scripts.pory"
	.string "When you're all set to go, step through\n"
# 1726 "data/maps/SootopolisCity/scripts.pory"
	.string "that door.$"
# 1727 "data/maps/SootopolisCity/scripts.pory"

# 1728 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DazzledByMentor:
# 1729 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: I'm sure that you will be\n"
# 1730 "data/maps/SootopolisCity/scripts.pory"
	.string "dazzled by my mentor's breathtakingly\l"
# 1731 "data/maps/SootopolisCity/scripts.pory"
	.string "elegant battle style.$"
