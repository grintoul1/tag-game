# 1 "data/maps/SootopolisCity/scripts.pory"

# 2 "data/maps/SootopolisCity/scripts.pory"

# 3 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_MapScripts::
# 4 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_OnLoad
# 5 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_OnTransition
# 6 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_OnResume
# 7 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_OnFrame
# 8 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_OnWarp
# 9 "data/maps/SootopolisCity/scripts.pory"
	.byte 0
# 10 "data/maps/SootopolisCity/scripts.pory"

# 11 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad:
# 12 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 13 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 14 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockGymDoor
# 15 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_EventScript_LegendariesNotArrived
# 16 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockHouseDoors
# 17 "data/maps/SootopolisCity/scripts.pory"
	end
# 18 "data/maps/SootopolisCity/scripts.pory"

# 19 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesNotArrived::
# 20 "data/maps/SootopolisCity/scripts.pory"
	end
# 21 "data/maps/SootopolisCity/scripts.pory"

# 22 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockHouseDoors::
# 23 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 24 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 25 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
# 26 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 27 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 8, 35, METATILE_Sootopolis_Door_Closed, TRUE
# 28 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
# 29 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 45, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 30 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 48, 25, METATILE_Sootopolis_Door_Closed, TRUE
# 31 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 32 "data/maps/SootopolisCity/scripts.pory"
	return
# 33 "data/maps/SootopolisCity/scripts.pory"

# 34 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockGymDoor::
# 35 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
# 36 "data/maps/SootopolisCity/scripts.pory"
	return
# 37 "data/maps/SootopolisCity/scripts.pory"

# 38 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition:
# 39 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 40 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 41 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 42 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 43 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 44 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWeather
# 45 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetLayout
# 46 "data/maps/SootopolisCity/scripts.pory"
	call_if_lt VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetArchieMaxiePos
# 47 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetStevenPos
# 48 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetStevenPos
# 49 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetBattleSpectators
# 50 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetBattleSpectators
# 51 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetBattleSpectators
# 52 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetBattleSpectators
# 53 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetBattleSpectators
# 54 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 55 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 56 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
# 57 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetOutsideGymObjPos
# 58 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetExpertBlockCaveEntrance
# 59 "data/maps/SootopolisCity/scripts.pory"
	end
# 60 "data/maps/SootopolisCity/scripts.pory"

# 61 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetArchieMaxiePos::
# 62 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SootopolisCity_EventScript_ArchieDefeatedPos
# 63 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SootopolisCity_EventScript_MaxieDefeatedPos
# 64 "data/maps/SootopolisCity/scripts.pory"
	return
# 65 "data/maps/SootopolisCity/scripts.pory"

# 66 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetStevenPos::
# 67 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 31, 33
# 68 "data/maps/SootopolisCity/scripts.pory"
	return
# 69 "data/maps/SootopolisCity/scripts.pory"

# 70 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieDefeatedPos::
# 71 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 72 "data/maps/SootopolisCity/scripts.pory"
	return
# 73 "data/maps/SootopolisCity/scripts.pory"

# 74 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieDefeatedPos::
# 75 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 76 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_MAXIE, 31, 33
# 77 "data/maps/SootopolisCity/scripts.pory"
	return
# 78 "data/maps/SootopolisCity/scripts.pory"

# 79 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_HideMapNamePopup::
# 80 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 81 "data/maps/SootopolisCity/scripts.pory"
	return
# 82 "data/maps/SootopolisCity/scripts.pory"

# 83 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetBattleSpectators::
# 84 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 85 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_BOY_1, 46, 32
# 86 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_BOY_2, 19, 36
# 87 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 20, 35
# 88 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_NINJA_BOY, 48, 41
# 89 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WOMAN_1, 45, 43
# 90 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 91 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 92 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 93 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
# 94 "data/maps/SootopolisCity/scripts.pory"
	return
# 95 "data/maps/SootopolisCity/scripts.pory"

# 96 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout::
# 97 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalLayout
# 98 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalLayout
# 99 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 100 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetLegendariesLayout
# 101 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetLegendariesLayout
# 102 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetLegendariesLayout
# 103 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 104 "data/maps/SootopolisCity/scripts.pory"
	return
# 105 "data/maps/SootopolisCity/scripts.pory"

# 106 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalLayout::
# 107 "data/maps/SootopolisCity/scripts.pory"
	return
# 108 "data/maps/SootopolisCity/scripts.pory"

# 109 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLegendariesLayout::
# 110 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
# 111 "data/maps/SootopolisCity/scripts.pory"
	return
# 112 "data/maps/SootopolisCity/scripts.pory"

# 113 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather::
# 114 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalWeather
# 115 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalWeather
# 116 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 117 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 118 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, Common_EventScript_SetAbnormalWeather
# 119 "data/maps/SootopolisCity/scripts.pory"
	return
# 120 "data/maps/SootopolisCity/scripts.pory"

# 121 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalWeather::
# 122 "data/maps/SootopolisCity/scripts.pory"
	return
# 123 "data/maps/SootopolisCity/scripts.pory"

# 124 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetDownpour::
# 125 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 126 "data/maps/SootopolisCity/scripts.pory"
	return
# 127 "data/maps/SootopolisCity/scripts.pory"

# 128 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
# 129 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
# 130 "data/maps/SootopolisCity/scripts.pory"
	return
# 131 "data/maps/SootopolisCity/scripts.pory"

# 132 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
# 133 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 134 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
# 135 "data/maps/SootopolisCity/scripts.pory"
	return
# 136 "data/maps/SootopolisCity/scripts.pory"

# 137 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
# 138 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 139 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 18
# 140 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
# 141 "data/maps/SootopolisCity/scripts.pory"
	end
# 142 "data/maps/SootopolisCity/scripts.pory"

# 143 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos::
# 144 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
# 145 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 29, 33
# 146 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_MAXIE, 33, 35
# 147 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_ARCHIE, 34, 35
# 148 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 0, SootopolisCity_EventScript_SetWallaceMiddle
# 149 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 1, SootopolisCity_EventScript_SetWallaceRight
# 150 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 2, SootopolisCity_EventScript_SetWallaceLeft
# 151 "data/maps/SootopolisCity/scripts.pory"
	return
# 152 "data/maps/SootopolisCity/scripts.pory"

# 153 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceMiddle::
# 154 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 33
# 155 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 156 "data/maps/SootopolisCity/scripts.pory"
	return
# 157 "data/maps/SootopolisCity/scripts.pory"

# 158 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceRight::
# 159 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 32, 33
# 160 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 161 "data/maps/SootopolisCity/scripts.pory"
	return
# 162 "data/maps/SootopolisCity/scripts.pory"

# 163 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceLeft::
# 164 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 30, 33
# 165 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 166 "data/maps/SootopolisCity/scripts.pory"
	return
# 167 "data/maps/SootopolisCity/scripts.pory"

# 168 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
# 169 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
# 170 "data/maps/SootopolisCity/scripts.pory"
	return
# 171 "data/maps/SootopolisCity/scripts.pory"

# 172 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnWarp:
# 173 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
# 174 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 175 "data/maps/SootopolisCity/scripts.pory"

# 176 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries::
# 177 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_PlayerFaceLegendaries1
# 178 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 2, SootopolisCity_EventScript_PlayerFaceLegendaries2
# 179 "data/maps/SootopolisCity/scripts.pory"
	end
# 180 "data/maps/SootopolisCity/scripts.pory"

# 181 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 182 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 183 "data/maps/SootopolisCity/scripts.pory"
	return
# 184 "data/maps/SootopolisCity/scripts.pory"

# 185 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 186 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 187 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 188 "data/maps/SootopolisCity/scripts.pory"
	return
# 189 "data/maps/SootopolisCity/scripts.pory"

# 190 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnResume:
# 191 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 192 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 193 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
# 194 "data/maps/SootopolisCity/scripts.pory"
	end
# 195 "data/maps/SootopolisCity/scripts.pory"

# 196 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnFrame:
# 197 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 198 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
# 199 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 200 "data/maps/SootopolisCity/scripts.pory"

# 201 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 202 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 203 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 204 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 205 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
# 206 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
# 207 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 208 "data/maps/SootopolisCity/scripts.pory"
	end
# 209 "data/maps/SootopolisCity/scripts.pory"

# 210 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 211 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 212 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 213 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 214 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 215 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 216 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 217 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 218 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 219 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 220 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 221 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 222 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 223 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 224 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 225 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 226 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 227 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 228 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 229 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 230 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 231 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 232 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 233 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 234 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 235 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 236 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 237 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 238 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 239 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 240 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 241 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 242 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 243 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 244 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonAttack
# 245 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 246 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 247 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 248 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 249 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 250 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 251 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 252 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 253 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 254 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 255 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 256 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 257 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 258 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 259 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 260 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 261 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 262 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 263 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 264 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 265 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 266 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 267 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 268 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 269 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 270 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 271 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonIdle
# 272 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 273 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 274 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 275 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 276 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 277 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 278 "data/maps/SootopolisCity/scripts.pory"
	end
# 279 "data/maps/SootopolisCity/scripts.pory"

# 280 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter:
# 281 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 282 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 283 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 284 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 285 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 286 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 287 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 288 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 289 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 290 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 291 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 292 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 293 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 294 "data/maps/SootopolisCity/scripts.pory"

# 295 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter:
# 296 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 297 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 298 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 299 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 300 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 301 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 302 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 303 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 304 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 305 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 306 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 308 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 309 "data/maps/SootopolisCity/scripts.pory"

# 310 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 311 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 312 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 313 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 314 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 315 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 316 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 317 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 318 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 319 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 320 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 321 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 322 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 323 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 324 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 325 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 326 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 327 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 328 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 329 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 330 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 331 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 332 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 333 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 334 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 335 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 336 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 337 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 338 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 339 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 340 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 341 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 342 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 343 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 344 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonAttack
# 345 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 346 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 347 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 348 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 349 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 350 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 351 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 352 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 353 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 354 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 356 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 357 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 358 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 359 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 360 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 361 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 362 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 363 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 364 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 365 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 366 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 367 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 368 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 369 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 370 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 371 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonIdle
# 372 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 373 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 374 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 375 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 376 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 377 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 378 "data/maps/SootopolisCity/scripts.pory"
	end
# 379 "data/maps/SootopolisCity/scripts.pory"

# 380 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive:
# 381 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 382 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 383 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 384 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 385 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 386 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 387 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 388 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 389 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 390 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 391 "data/maps/SootopolisCity/scripts.pory"

# 392 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive:
# 393 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 394 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 395 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 396 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 397 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 398 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 399 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 400 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 401 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 402 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 403 "data/maps/SootopolisCity/scripts.pory"

# 404 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 405 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 406 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 407 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 408 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 409 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 410 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 411 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 412 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 413 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 414 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 415 "data/maps/SootopolisCity/scripts.pory"

# 416 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend:
# 417 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 418 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 419 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 420 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 421 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 422 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 423 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 424 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 425 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 426 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 427 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 428 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 429 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 430 "data/maps/SootopolisCity/scripts.pory"

# 431 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack:
# 432 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 433 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 434 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 435 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 436 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 437 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 438 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 439 "data/maps/SootopolisCity/scripts.pory"

# 440 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle:
# 441 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 442 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 443 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 444 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 445 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 446 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 447 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 448 "data/maps/SootopolisCity/scripts.pory"

# 449 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack:
# 450 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 451 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 452 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 453 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 454 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 455 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 456 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 457 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 458 "data/maps/SootopolisCity/scripts.pory"

# 459 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 460 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 461 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 462 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 463 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 464 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 465 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 466 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 467 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 468 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 469 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 470 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 471 "data/maps/SootopolisCity/scripts.pory"

# 472 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack:
# 473 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 474 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 475 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 476 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 477 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 478 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 479 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 480 "data/maps/SootopolisCity/scripts.pory"

# 481 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle:
# 482 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 483 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 484 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 485 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 486 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 487 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 488 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 489 "data/maps/SootopolisCity/scripts.pory"

# 490 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 491 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 492 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 493 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 494 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
# 495 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
# 496 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 497 "data/maps/SootopolisCity/scripts.pory"
	end
# 498 "data/maps/SootopolisCity/scripts.pory"

# 499 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 500 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 501 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 502 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 503 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 504 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 505 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 506 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 507 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 508 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 509 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 510 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 511 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_SOOTOPOLIS_RAYQUAZA, MAP_SOOTOPOLIS_CITY
# 512 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 513 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 514 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 515 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 516 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 517 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 518 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 520 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 521 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 522 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 523 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 524 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 525 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 526 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 527 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 528 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 529 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 530 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 531 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 532 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 533 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 534 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 535 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 536 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 537 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 538 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 539 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 541 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 542 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 543 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 544 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 545 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 546 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 547 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 548 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 549 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 43, 32
# 550 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 551 "data/maps/SootopolisCity/scripts.pory"
	end
# 552 "data/maps/SootopolisCity/scripts.pory"

# 553 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 554 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 555 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 556 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 557 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 559 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 560 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 561 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 562 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 563 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 564 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 565 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 566 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 567 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 568 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 569 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 570 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 571 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 573 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 574 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 575 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 576 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 577 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 578 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 579 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 580 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 581 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 582 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 583 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 584 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 585 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 586 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 587 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 588 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 589 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 590 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 591 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 592 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 593 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 594 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 595 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 596 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 597 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 598 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 599 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SURF
# 600 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 601 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 602 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 29, 53
# 603 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 604 "data/maps/SootopolisCity/scripts.pory"
	end
# 605 "data/maps/SootopolisCity/scripts.pory"

# 606 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 607 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 608 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 609 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 610 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 611 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 612 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 613 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 614 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 615 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 616 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 617 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 618 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 619 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 620 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 621 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 622 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 623 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 624 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 625 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 626 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 627 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 628 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 629 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 630 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 631 "data/maps/SootopolisCity/scripts.pory"
	return
# 632 "data/maps/SootopolisCity/scripts.pory"

# 633 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 634 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 635 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 636 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 637 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 638 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 639 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 640 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 641 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 642 "data/maps/SootopolisCity/scripts.pory"

# 643 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 644 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 645 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 646 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 647 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 648 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 649 "data/maps/SootopolisCity/scripts.pory"

# 650 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 651 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 652 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 653 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 654 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 655 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 656 "data/maps/SootopolisCity/scripts.pory"

# 657 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 658 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 659 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 660 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 661 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 662 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 663 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 664 "data/maps/SootopolisCity/scripts.pory"

# 665 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 666 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 667 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 668 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 669 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 670 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 671 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 672 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 673 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 674 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 675 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 676 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 677 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 678 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 679 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 680 "data/maps/SootopolisCity/scripts.pory"

# 681 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 682 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 683 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 684 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 685 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 686 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 687 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 688 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 689 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 690 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 691 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 692 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 693 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 694 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 695 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 696 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 697 "data/maps/SootopolisCity/scripts.pory"

# 698 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 699 "data/maps/SootopolisCity/scripts.pory"
	lock
# 700 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 701 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ExpertPostLegendaries
# 702 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ExpertLegendaries
# 703 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
# 704 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 705 "data/maps/SootopolisCity/scripts.pory"
	release
# 706 "data/maps/SootopolisCity/scripts.pory"
	end
# 707 "data/maps/SootopolisCity/scripts.pory"

# 708 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 709 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 710 "data/maps/SootopolisCity/scripts.pory"
	release
# 711 "data/maps/SootopolisCity/scripts.pory"
	end
# 712 "data/maps/SootopolisCity/scripts.pory"

# 713 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 714 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 715 "data/maps/SootopolisCity/scripts.pory"
	release
# 716 "data/maps/SootopolisCity/scripts.pory"
	end
# 717 "data/maps/SootopolisCity/scripts.pory"

# 718 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 719 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 720 "data/maps/SootopolisCity/scripts.pory"
	release
# 721 "data/maps/SootopolisCity/scripts.pory"
	end
# 722 "data/maps/SootopolisCity/scripts.pory"

# 723 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 724 "data/maps/SootopolisCity/scripts.pory"
	lock
# 725 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 726 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
# 727 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_KiriGiveBerry
# 728 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_KiriRayquaza
# 729 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 730 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 731 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 732 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/SootopolisCity/scripts.pory"
	release
# 734 "data/maps/SootopolisCity/scripts.pory"
	end
# 735 "data/maps/SootopolisCity/scripts.pory"

# 736 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 737 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 738 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 739 "data/maps/SootopolisCity/scripts.pory"
	release
# 740 "data/maps/SootopolisCity/scripts.pory"
	end
# 741 "data/maps/SootopolisCity/scripts.pory"

# 742 "data/maps/SootopolisCity/scripts.pory"
@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
# 743 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 744 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 745 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 746 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
# 747 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 748 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 749 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 750 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 751 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 752 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 753 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 754 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 755 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 756 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
# 757 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
# 758 "data/maps/SootopolisCity/scripts.pory"
	end
# 759 "data/maps/SootopolisCity/scripts.pory"

# 760 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 761 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 762 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 763 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 764 "data/maps/SootopolisCity/scripts.pory"
	release
# 765 "data/maps/SootopolisCity/scripts.pory"
	end
# 766 "data/maps/SootopolisCity/scripts.pory"

# 767 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry::
# 768 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 769 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 770 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 771 "data/maps/SootopolisCity/scripts.pory"
	release
# 772 "data/maps/SootopolisCity/scripts.pory"
	end
# 773 "data/maps/SootopolisCity/scripts.pory"

# 774 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 775 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 776 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 777 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 778 "data/maps/SootopolisCity/scripts.pory"
	release
# 779 "data/maps/SootopolisCity/scripts.pory"
	end
# 780 "data/maps/SootopolisCity/scripts.pory"

# 781 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 782 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 783 "data/maps/SootopolisCity/scripts.pory"
	release
# 784 "data/maps/SootopolisCity/scripts.pory"
	end
# 785 "data/maps/SootopolisCity/scripts.pory"

# 786 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 787 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 788 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FacePlayer
# 789 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 790 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman2Rayquaza
# 791 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 792 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 793 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FaceOriginalDirection
# 794 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 796 "data/maps/SootopolisCity/scripts.pory"
	end
# 797 "data/maps/SootopolisCity/scripts.pory"

# 798 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 799 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 800 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 801 "data/maps/SootopolisCity/scripts.pory"
	end
# 802 "data/maps/SootopolisCity/scripts.pory"

# 803 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 804 "data/maps/SootopolisCity/scripts.pory"
	lock
# 805 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 806 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ManPostLegendaries
# 807 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 808 "data/maps/SootopolisCity/scripts.pory"
	release
# 809 "data/maps/SootopolisCity/scripts.pory"
	end
# 810 "data/maps/SootopolisCity/scripts.pory"

# 811 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 812 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 813 "data/maps/SootopolisCity/scripts.pory"
	release
# 814 "data/maps/SootopolisCity/scripts.pory"
	end
# 815 "data/maps/SootopolisCity/scripts.pory"

# 816 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 817 "data/maps/SootopolisCity/scripts.pory"
	lock
# 818 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 819 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Woman1PostLegendaries
# 820 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman1Rayquaza
# 821 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
# 822 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 823 "data/maps/SootopolisCity/scripts.pory"
	release
# 824 "data/maps/SootopolisCity/scripts.pory"
	end
# 825 "data/maps/SootopolisCity/scripts.pory"

# 826 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 827 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 828 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 829 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_1, Common_Movement_FaceOriginalDirection
# 830 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 831 "data/maps/SootopolisCity/scripts.pory"
	release
# 832 "data/maps/SootopolisCity/scripts.pory"
	end
# 833 "data/maps/SootopolisCity/scripts.pory"

# 834 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 835 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 836 "data/maps/SootopolisCity/scripts.pory"
	release
# 837 "data/maps/SootopolisCity/scripts.pory"
	end
# 838 "data/maps/SootopolisCity/scripts.pory"

# 839 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 840 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 841 "data/maps/SootopolisCity/scripts.pory"
	release
# 842 "data/maps/SootopolisCity/scripts.pory"
	end
# 843 "data/maps/SootopolisCity/scripts.pory"

# 844 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 845 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 846 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FacePlayer
# 847 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 848 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NinjaBoyRayquaza
# 849 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_NinjaBoyNormal
# 850 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
# 851 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 852 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 853 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 854 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 855 "data/maps/SootopolisCity/scripts.pory"
	release
# 856 "data/maps/SootopolisCity/scripts.pory"
	end
# 857 "data/maps/SootopolisCity/scripts.pory"

# 858 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 859 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 860 "data/maps/SootopolisCity/scripts.pory"
	release
# 861 "data/maps/SootopolisCity/scripts.pory"
	end
# 862 "data/maps/SootopolisCity/scripts.pory"

# 863 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 864 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 865 "data/maps/SootopolisCity/scripts.pory"
	release
# 866 "data/maps/SootopolisCity/scripts.pory"
	end
# 867 "data/maps/SootopolisCity/scripts.pory"

# 868 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 869 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 870 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FacePlayer
# 871 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 872 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy1Rayquaza
# 873 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
# 874 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Boy1Normal
# 875 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
# 876 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 877 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 878 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FaceOriginalDirection
# 879 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 880 "data/maps/SootopolisCity/scripts.pory"
	release
# 881 "data/maps/SootopolisCity/scripts.pory"
	end
# 882 "data/maps/SootopolisCity/scripts.pory"

# 883 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 884 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 885 "data/maps/SootopolisCity/scripts.pory"
	release
# 886 "data/maps/SootopolisCity/scripts.pory"
	end
# 887 "data/maps/SootopolisCity/scripts.pory"

# 888 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 889 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 890 "data/maps/SootopolisCity/scripts.pory"
	release
# 891 "data/maps/SootopolisCity/scripts.pory"
	end
# 892 "data/maps/SootopolisCity/scripts.pory"

# 893 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 894 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 895 "data/maps/SootopolisCity/scripts.pory"
	release
# 896 "data/maps/SootopolisCity/scripts.pory"
	end
# 897 "data/maps/SootopolisCity/scripts.pory"

# 898 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 899 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 900 "data/maps/SootopolisCity/scripts.pory"
	end
# 901 "data/maps/SootopolisCity/scripts.pory"

# 902 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 903 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 904 "data/maps/SootopolisCity/scripts.pory"
	end
# 905 "data/maps/SootopolisCity/scripts.pory"

# 906 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 907 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 908 "data/maps/SootopolisCity/scripts.pory"
	end
# 909 "data/maps/SootopolisCity/scripts.pory"

# 910 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven::
# 911 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 912 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, Common_Movement_FacePlayer
# 913 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 914 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
# 915 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StevenHelpWallace
# 916 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_StevenHelpedWallace
# 917 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_StevenHelpedWallace
# 918 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_StevenMaxieArchieLeft
# 919 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
# 920 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 921 "data/maps/SootopolisCity/scripts.pory"
	end
# 922 "data/maps/SootopolisCity/scripts.pory"

# 923 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpWallace::
# 924 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
# 925 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 926 "data/maps/SootopolisCity/scripts.pory"
	end
# 927 "data/maps/SootopolisCity/scripts.pory"

# 928 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 929 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
# 930 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 931 "data/maps/SootopolisCity/scripts.pory"
	end
# 932 "data/maps/SootopolisCity/scripts.pory"

# 933 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpedWallace::
# 934 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
# 935 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 936 "data/maps/SootopolisCity/scripts.pory"
	end
# 937 "data/maps/SootopolisCity/scripts.pory"

# 938 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 939 "data/maps/SootopolisCity/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 940 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_TEMP_3, 21, SootopolisCity_EventScript_EmmieApproachSteven
# 941 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 942 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 943 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
# 944 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
# 945 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 946 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 947 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 948 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 949 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieWalkToCaveOfOrigin
# 950 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 951 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 952 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 953 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 954 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 955 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 956 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieArriveCaveEntrance
# 957 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 958 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 959 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 960 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 961 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 962 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 963 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 964 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_LEADERS
# 965 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 966 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 967 "data/maps/SootopolisCity/scripts.pory"
	end
# 968 "data/maps/SootopolisCity/scripts.pory"

# 969 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 970 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 971 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 972 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 973 "data/maps/SootopolisCity/scripts.pory"
	return
# 974 "data/maps/SootopolisCity/scripts.pory"

# 975 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 976 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 977 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 978 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieStartWalkToCaveOfOriginNorth
# 979 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 980 "data/maps/SootopolisCity/scripts.pory"
	return
# 981 "data/maps/SootopolisCity/scripts.pory"

# 982 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_EmmieApproachSteven::
# 983 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieApproachSteven
# 984 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 985 "data/maps/SootopolisCity/scripts.pory"
	return
# 986 "data/maps/SootopolisCity/scripts.pory"

# 987 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieApproachSteven:
# 988 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 989 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 990 "data/maps/SootopolisCity/scripts.pory"
	face_up
# 991 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 992 "data/maps/SootopolisCity/scripts.pory"

# 993 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 994 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 995 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 996 "data/maps/SootopolisCity/scripts.pory"
	walk_right
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
	walk_up
# 1003 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1004 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1005 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1006 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1007 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1008 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1009 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1010 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1011 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1012 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1013 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1014 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1015 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1016 "data/maps/SootopolisCity/scripts.pory"
	walk_left
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
	walk_up
# 1023 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1024 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1025 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1026 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1027 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1028 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1029 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1030 "data/maps/SootopolisCity/scripts.pory"

# 1031 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 1032 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1033 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1034 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1035 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1036 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1037 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1038 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1039 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1040 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1041 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1042 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1043 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1044 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1045 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1046 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1047 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1048 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1049 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1050 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1051 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1052 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1053 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1054 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1055 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1056 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1057 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1058 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1059 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1060 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1061 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1062 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1063 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1064 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1065 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1066 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1067 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1068 "data/maps/SootopolisCity/scripts.pory"

# 1069 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 1070 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1071 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1072 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1073 "data/maps/SootopolisCity/scripts.pory"
	walk_right
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
	walk_up
# 1080 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1081 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1082 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1083 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1084 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1085 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1086 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1087 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1088 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1089 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1090 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1091 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1092 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1093 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1094 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1095 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1096 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1097 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1098 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1099 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1100 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1101 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1102 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1103 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1104 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1105 "data/maps/SootopolisCity/scripts.pory"

# 1106 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieStartWalkToCaveOfOriginNorth:
# 1107 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1108 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1109 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1110 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1111 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1112 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1113 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1114 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1115 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1116 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1117 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1118 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1119 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1120 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1121 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1122 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1123 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1124 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1125 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1126 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1127 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1128 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1129 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1130 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1131 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1132 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1133 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1134 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1135 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1136 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1137 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1138 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1139 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1140 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1141 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1142 "data/maps/SootopolisCity/scripts.pory"

# 1143 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 1144 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1145 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1146 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1147 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1148 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1149 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1150 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1151 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1152 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1153 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1154 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1155 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1156 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1157 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1158 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1159 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1160 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1161 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1162 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1163 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1164 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1165 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1166 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1167 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1168 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1169 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1170 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1171 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1172 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1173 "data/maps/SootopolisCity/scripts.pory"
	walk_down
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
	walk_left
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
	walk_down
# 1190 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1191 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1192 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1193 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1194 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 1195 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1196 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1197 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1198 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1199 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1200 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1201 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1202 "data/maps/SootopolisCity/scripts.pory"

# 1203 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 1204 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1205 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1206 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1207 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1208 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1209 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1210 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1211 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1212 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1213 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1214 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1215 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1216 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1217 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1218 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1219 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1220 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1221 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1222 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1223 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1224 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1225 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1226 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1227 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1228 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1229 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1230 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1231 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1232 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1233 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1234 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1235 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1236 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1237 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1238 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1239 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1240 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1241 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1242 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1243 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1244 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1245 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1246 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1247 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1248 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1249 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1250 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1251 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1252 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1253 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1254 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1255 "data/maps/SootopolisCity/scripts.pory"

# 1256 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieWalkToCaveOfOrigin:
# 1257 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1258 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1259 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1260 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1261 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1262 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1263 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1264 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1265 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1266 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1267 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1268 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1269 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1270 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1271 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1272 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1273 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1274 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1275 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1276 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1277 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1278 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1279 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1280 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1281 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1282 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1283 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1284 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1285 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1286 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1287 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1288 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1289 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1290 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1291 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1292 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1293 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1294 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1295 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1296 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1297 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1298 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1299 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1300 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1301 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1302 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1303 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1304 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1305 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1306 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1307 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1308 "data/maps/SootopolisCity/scripts.pory"

# 1309 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 1310 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 1311 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1312 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1313 "data/maps/SootopolisCity/scripts.pory"

# 1314 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 1315 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1316 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1317 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1318 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1319 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1320 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1321 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1322 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1323 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1324 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1325 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1326 "data/maps/SootopolisCity/scripts.pory"

# 1327 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 1328 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1329 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1330 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1331 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1332 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1333 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1334 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1335 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1336 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1337 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1338 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1339 "data/maps/SootopolisCity/scripts.pory"

# 1340 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieArriveCaveEntrance:
# 1341 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1342 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1343 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1344 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1345 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1346 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1347 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1348 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1349 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1350 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1351 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1352 "data/maps/SootopolisCity/scripts.pory"

# 1353 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 1354 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1355 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1356 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1357 "data/maps/SootopolisCity/scripts.pory"

# 1358 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 1359 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1360 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FacePlayer
# 1361 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1362 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy2Rayquaza
# 1363 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 1364 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1365 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FaceOriginalDirection
# 1366 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1367 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1368 "data/maps/SootopolisCity/scripts.pory"
	end
# 1369 "data/maps/SootopolisCity/scripts.pory"

# 1370 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 1371 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 1372 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1373 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1374 "data/maps/SootopolisCity/scripts.pory"
	end
# 1375 "data/maps/SootopolisCity/scripts.pory"

# 1376 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 1377 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1378 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_BlackBeltRayquaza
# 1379 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 1380 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1381 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 1382 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1383 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 1384 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1385 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 1386 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1387 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1388 "data/maps/SootopolisCity/scripts.pory"
	end
# 1389 "data/maps/SootopolisCity/scripts.pory"

# 1390 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 1391 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 1392 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1393 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 1394 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1395 "data/maps/SootopolisCity/scripts.pory"
	end
# 1396 "data/maps/SootopolisCity/scripts.pory"

# 1397 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 1398 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1399 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FacePlayer
# 1400 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1401 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GirlRayquaza
# 1402 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 1403 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1404 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FaceOriginalDirection
# 1405 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1406 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1407 "data/maps/SootopolisCity/scripts.pory"
	end
# 1408 "data/maps/SootopolisCity/scripts.pory"

# 1409 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 1410 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 1411 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1412 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1413 "data/maps/SootopolisCity/scripts.pory"
	end
# 1414 "data/maps/SootopolisCity/scripts.pory"

# 1415 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 1416 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1417 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FacePlayer
# 1418 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1419 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ManiacRayquaza
# 1420 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 1421 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1422 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FaceOriginalDirection
# 1423 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1424 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1425 "data/maps/SootopolisCity/scripts.pory"
	end
# 1426 "data/maps/SootopolisCity/scripts.pory"

# 1427 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 1428 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 1429 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1430 "data/maps/SootopolisCity/scripts.pory"
	end
# 1431 "data/maps/SootopolisCity/scripts.pory"

# 1432 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 1433 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1434 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1435 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_GoToSkyPillar
# 1436 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_GoToGym
# 1437 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_GiveWaterfall
# 1438 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 1439 "data/maps/SootopolisCity/scripts.pory"
	release
# 1440 "data/maps/SootopolisCity/scripts.pory"
	end
# 1441 "data/maps/SootopolisCity/scripts.pory"

# 1442 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall::
# 1443 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 1444 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 1445 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 1446 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 1447 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1448 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_WallaceMoveFromGym
# 1449 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SootopolisCity_EventScript_WallaceMoveFromGym
# 1450 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_WallaceMoveFromGymWest
# 1451 "data/maps/SootopolisCity/scripts.pory"
	release
# 1452 "data/maps/SootopolisCity/scripts.pory"
	end
# 1453 "data/maps/SootopolisCity/scripts.pory"

# 1454 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGym::
# 1455 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 1456 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1457 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 1458 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 1459 "data/maps/SootopolisCity/scripts.pory"
	return
# 1460 "data/maps/SootopolisCity/scripts.pory"

# 1461 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 1462 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 1463 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1464 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 1465 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 1466 "data/maps/SootopolisCity/scripts.pory"
	return
# 1467 "data/maps/SootopolisCity/scripts.pory"

# 1468 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToSkyPillar::
# 1469 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 1470 "data/maps/SootopolisCity/scripts.pory"
	release
# 1471 "data/maps/SootopolisCity/scripts.pory"
	end
# 1472 "data/maps/SootopolisCity/scripts.pory"

# 1473 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToGym::
# 1474 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
# 1475 "data/maps/SootopolisCity/scripts.pory"
	release
# 1476 "data/maps/SootopolisCity/scripts.pory"
	end
# 1477 "data/maps/SootopolisCity/scripts.pory"

# 1478 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 1479 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1480 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1481 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1482 "data/maps/SootopolisCity/scripts.pory"

# 1483 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 1484 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1485 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1486 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1487 "data/maps/SootopolisCity/scripts.pory"

# 1488 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 1489 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1490 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_MaxieRayquaza
# 1491 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 1492 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1493 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1494 "data/maps/SootopolisCity/scripts.pory"
	end
# 1495 "data/maps/SootopolisCity/scripts.pory"

# 1496 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza::
# 1497 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_DEFAULT
# 1498 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1499 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1500 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1501 "data/maps/SootopolisCity/scripts.pory"
	end
# 1502 "data/maps/SootopolisCity/scripts.pory"

# 1503 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 1504 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1505 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ArchieRayquaza
# 1506 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 1507 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1508 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1509 "data/maps/SootopolisCity/scripts.pory"
	end
# 1510 "data/maps/SootopolisCity/scripts.pory"

# 1511 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza::
# 1512 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_DEFAULT
# 1513 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1514 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1515 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1516 "data/maps/SootopolisCity/scripts.pory"
	end
# 1517 "data/maps/SootopolisCity/scripts.pory"

# 1518 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieArchieLeave::
# 1519 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 1520 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 1521 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1522 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1523 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1524 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 1525 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 1526 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1527 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1528 "data/maps/SootopolisCity/scripts.pory"
	end
# 1529 "data/maps/SootopolisCity/scripts.pory"

# 1530 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1531 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 1532 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1533 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1534 "data/maps/SootopolisCity/scripts.pory"

# 1535 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1536 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 1537 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1538 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1539 "data/maps/SootopolisCity/scripts.pory"

# 1540 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign:
# 1541 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\n"
# 1542 "data/maps/SootopolisCity/scripts.pory"
	.string "Leader: JUAN\p"
# 1543 "data/maps/SootopolisCity/scripts.pory"
	.string "“The GYM LEADER with the beauty\n"
# 1544 "data/maps/SootopolisCity/scripts.pory"
	.string "of pure water!”$"
# 1545 "data/maps/SootopolisCity/scripts.pory"

# 1546 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign:
# 1547 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY\p"
# 1548 "data/maps/SootopolisCity/scripts.pory"
	.string "“The mystical city where history\n"
# 1549 "data/maps/SootopolisCity/scripts.pory"
	.string "slumbers.”$"
# 1550 "data/maps/SootopolisCity/scripts.pory"

# 1551 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed:
# 1552 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"
# 1553 "data/maps/SootopolisCity/scripts.pory"

# 1554 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere:
# 1555 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
# 1556 "data/maps/SootopolisCity/scripts.pory"
	.string "down stairs all the time…\p"
# 1557 "data/maps/SootopolisCity/scripts.pory"
	.string "If you live in this town, you end up\n"
# 1558 "data/maps/SootopolisCity/scripts.pory"
	.string "getting physically fit.$"
# 1559 "data/maps/SootopolisCity/scripts.pory"

# 1560 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
# 1561 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant POKéMON suddenly appeared\n"
# 1562 "data/maps/SootopolisCity/scripts.pory"
	.string "in the middle of the city!\p"
# 1563 "data/maps/SootopolisCity/scripts.pory"
	.string "And, I've never seen them before!\p"
# 1564 "data/maps/SootopolisCity/scripts.pory"
	.string "Why are they smashing into each\n"
# 1565 "data/maps/SootopolisCity/scripts.pory"
	.string "other like that?\p"
# 1566 "data/maps/SootopolisCity/scripts.pory"
	.string "Why can't they be friends, those\n"
# 1567 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 1568 "data/maps/SootopolisCity/scripts.pory"

# 1569 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon:
# 1570 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
# 1571 "data/maps/SootopolisCity/scripts.pory"
	.string "What is that green POKéMON?!$"
# 1572 "data/maps/SootopolisCity/scripts.pory"

# 1573 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo:
# 1574 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON and KYOGRE…\n"
# 1575 "data/maps/SootopolisCity/scripts.pory"
	.string "Where did they go?\p"
# 1576 "data/maps/SootopolisCity/scripts.pory"
	.string "Will they cause droughts or downpours\n"
# 1577 "data/maps/SootopolisCity/scripts.pory"
	.string "somewhere else?$"
# 1578 "data/maps/SootopolisCity/scripts.pory"

# 1579 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry:
# 1580 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
# 1581 "data/maps/SootopolisCity/scripts.pory"
	.string "the two POKéMON aren't angry.\p"
# 1582 "data/maps/SootopolisCity/scripts.pory"
	.string "I think… They probably can't control\n"
# 1583 "data/maps/SootopolisCity/scripts.pory"
	.string "their own power…$"
# 1584 "data/maps/SootopolisCity/scripts.pory"

# 1585 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage:
# 1586 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying POKéMON came down from\n"
# 1587 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky and stopped the rampaging\l"
# 1588 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON…$"
# 1589 "data/maps/SootopolisCity/scripts.pory"

# 1590 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike:
# 1591 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
# 1592 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder what the world is like on\n"
# 1593 "data/maps/SootopolisCity/scripts.pory"
	.string "the other side of this round sky?$"
# 1594 "data/maps/SootopolisCity/scripts.pory"

# 1595 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked:
# 1596 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1597 "data/maps/SootopolisCity/scripts.pory"
	.string "This is wicked!$"
# 1598 "data/maps/SootopolisCity/scripts.pory"

# 1599 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked:
# 1600 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1601 "data/maps/SootopolisCity/scripts.pory"
	.string "That was wicked!$"
# 1602 "data/maps/SootopolisCity/scripts.pory"

# 1603 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon:
# 1604 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red POKéMON!\n"
# 1605 "data/maps/SootopolisCity/scripts.pory"
	.string "Don't back off, blue POKéMON!$"
# 1606 "data/maps/SootopolisCity/scripts.pory"

# 1607 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames:
# 1608 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1609 "data/maps/SootopolisCity/scripts.pory"
	.string "Hi, do you know the names of those\n"
# 1610 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON fighting over there?$"
# 1611 "data/maps/SootopolisCity/scripts.pory"

# 1612 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings:
# 1613 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
# 1614 "data/maps/SootopolisCity/scripts.pory"
	.string "the red one or the blue one, but, oh no,\l"
# 1615 "data/maps/SootopolisCity/scripts.pory"
	.string "it's the green one that settles things!\p"
# 1616 "data/maps/SootopolisCity/scripts.pory"
	.string "Talk about a huge turn of events!$"
# 1617 "data/maps/SootopolisCity/scripts.pory"

# 1618 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes:
# 1619 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1620 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1621 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 1622 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I'm seeing that happen with\n"
# 1623 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1624 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1625 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1626 "data/maps/SootopolisCity/scripts.pory"

# 1627 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes:
# 1628 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1629 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1630 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 1631 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I saw that happen with\n"
# 1632 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1633 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1634 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1635 "data/maps/SootopolisCity/scripts.pory"

# 1636 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting:
# 1637 "data/maps/SootopolisCity/scripts.pory"
	.string "A big POKéMON is fighting with\n"
# 1638 "data/maps/SootopolisCity/scripts.pory"
	.string "another big POKéMON!\p"
# 1639 "data/maps/SootopolisCity/scripts.pory"
	.string "Please, someone make them stop!$"
# 1640 "data/maps/SootopolisCity/scripts.pory"

# 1641 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky:
# 1642 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty POKéMON came down from\n"
# 1643 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky…$"
# 1644 "data/maps/SootopolisCity/scripts.pory"

# 1645 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked:
# 1646 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
# 1647 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY will get wrecked!$"
# 1648 "data/maps/SootopolisCity/scripts.pory"

# 1649 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked:
# 1650 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY didn't get wrecked!$"
# 1651 "data/maps/SootopolisCity/scripts.pory"

# 1652 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist:
# 1653 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
# 1654 "data/maps/SootopolisCity/scripts.pory"
	.string "You've come all the way to SOOTOPOLIS?\l"
# 1655 "data/maps/SootopolisCity/scripts.pory"
	.string "You're no ordinary tourist.\p"
# 1656 "data/maps/SootopolisCity/scripts.pory"
	.string "But I suppose that doesn't make you\n"
# 1657 "data/maps/SootopolisCity/scripts.pory"
	.string "an extraordinary tourist, either.$"
# 1658 "data/maps/SootopolisCity/scripts.pory"

# 1659 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm:
# 1660 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"
# 1661 "data/maps/SootopolisCity/scripts.pory"

# 1662 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave:
# 1663 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
# 1664 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN.\p"
# 1665 "data/maps/SootopolisCity/scripts.pory"
	.string "The spirits of POKéMON, becalmed at\n"
# 1666 "data/maps/SootopolisCity/scripts.pory"
	.string "MT. PYRE, are said to be revived here.\p"
# 1667 "data/maps/SootopolisCity/scripts.pory"
	.string "Please leave.$"
# 1668 "data/maps/SootopolisCity/scripts.pory"

# 1669 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave:
# 1670 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
# 1671 "data/maps/SootopolisCity/scripts.pory"
	.string "superior talent…\p"
# 1672 "data/maps/SootopolisCity/scripts.pory"
	.string "A TRAINER who has knowledge and\n"
# 1673 "data/maps/SootopolisCity/scripts.pory"
	.string "experience of many kinds of POKéMON…\p"
# 1674 "data/maps/SootopolisCity/scripts.pory"
	.string "If such a person were to appear, I was\n"
# 1675 "data/maps/SootopolisCity/scripts.pory"
	.string "instructed by WALLACE to lead that\l"
# 1676 "data/maps/SootopolisCity/scripts.pory"
	.string "TRAINER to this CAVE.$"
# 1677 "data/maps/SootopolisCity/scripts.pory"

# 1678 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash:
# 1679 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
# 1680 "data/maps/SootopolisCity/scripts.pory"
	.string "The clash between the two awakened\n"
# 1681 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON was quelled by the awakening\l"
# 1682 "data/maps/SootopolisCity/scripts.pory"
	.string "of a third POKéMON…$"
# 1683 "data/maps/SootopolisCity/scripts.pory"

# 1684 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo:
# 1685 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN…\p"
# 1686 "data/maps/SootopolisCity/scripts.pory"
	.string "With the passing of the crisis,\n"
# 1687 "data/maps/SootopolisCity/scripts.pory"
	.string "the cave, too, shall sleep…$"
# 1688 "data/maps/SootopolisCity/scripts.pory"

# 1689 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful:
# 1690 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS sprang up as a town in\n"
# 1691 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano.\p"
# 1692 "data/maps/SootopolisCity/scripts.pory"
	.string "If you look up at the sky, the lip of\n"
# 1693 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater is also visible.\l"
# 1694 "data/maps/SootopolisCity/scripts.pory"
	.string "So, all you see is the sky in a circle.\p"
# 1695 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's what makes the sky above\n"
# 1696 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS the most beautiful.$"
# 1697 "data/maps/SootopolisCity/scripts.pory"

# 1698 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight:
# 1699 "data/maps/SootopolisCity/scripts.pory"
	.string "When two POKéMON that gigantic\n"
# 1700 "data/maps/SootopolisCity/scripts.pory"
	.string "are fighting that savagely, there's\l"
# 1701 "data/maps/SootopolisCity/scripts.pory"
	.string "not much that we can do.$"
# 1702 "data/maps/SootopolisCity/scripts.pory"

# 1703 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
# 1704 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third POKéMON flew down,\n"
# 1705 "data/maps/SootopolisCity/scripts.pory"
	.string "I feared the worst.$"
# 1706 "data/maps/SootopolisCity/scripts.pory"

# 1707 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery:
# 1708 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
# 1709 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano…\p"
# 1710 "data/maps/SootopolisCity/scripts.pory"
	.string "And in that ring, stars flicker and\n"
# 1711 "data/maps/SootopolisCity/scripts.pory"
	.string "blink as if they were alive…\l"
# 1712 "data/maps/SootopolisCity/scripts.pory"
	.string "It's my favorite scenery.$"
# 1713 "data/maps/SootopolisCity/scripts.pory"

# 1714 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild:
# 1715 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
# 1716 "data/maps/SootopolisCity/scripts.pory"
	.string "but…\p"
# 1717 "data/maps/SootopolisCity/scripts.pory"
	.string "All of a sudden, dark clouds brewed up,\n"
# 1718 "data/maps/SootopolisCity/scripts.pory"
	.string "rain started falling in sheets, and\l"
# 1719 "data/maps/SootopolisCity/scripts.pory"
	.string "there was thunder and lightning, too.\p"
# 1720 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather just went completely\n"
# 1721 "data/maps/SootopolisCity/scripts.pory"
	.string "wild!\p"
# 1722 "data/maps/SootopolisCity/scripts.pory"
	.string "Is all of this because of those\n"
# 1723 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 1724 "data/maps/SootopolisCity/scripts.pory"

# 1725 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon:
# 1726 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
# 1727 "data/maps/SootopolisCity/scripts.pory"
	.string "It was you who brought that flying\n"
# 1728 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON here?\p"
# 1729 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, aren't you amazing!$"
# 1730 "data/maps/SootopolisCity/scripts.pory"

# 1731 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GroudonPleaseStop:
# 1732 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: G… GROUDON…\n"
# 1733 "data/maps/SootopolisCity/scripts.pory"
	.string "Please! Stop what you're doing!\p"
# 1734 "data/maps/SootopolisCity/scripts.pory"
	.string "I know the extent of your power now!\p"
# 1735 "data/maps/SootopolisCity/scripts.pory"
	.string "If you keep going, all HOENN, not just\n"
# 1736 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS, will be utterly ruined!$"
# 1737 "data/maps/SootopolisCity/scripts.pory"

# 1738 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming:
# 1739 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: So the super-ancient POKéMON\n"
# 1740 "data/maps/SootopolisCity/scripts.pory"
	.string "weren't only GROUDON and KYOGRE…\p"
# 1741 "data/maps/SootopolisCity/scripts.pory"
	.string "After all our fruitless scheming and\n"
# 1742 "data/maps/SootopolisCity/scripts.pory"
	.string "frantic efforts, that one POKéMON's\l"
# 1743 "data/maps/SootopolisCity/scripts.pory"
	.string "simple action puts everything right\l"
# 1744 "data/maps/SootopolisCity/scripts.pory"
	.string "again as if nothing had happened…\p"
# 1745 "data/maps/SootopolisCity/scripts.pory"
	.string "Fu…\n"
# 1746 "data/maps/SootopolisCity/scripts.pory"
	.string "Fuhahaha…$"
# 1747 "data/maps/SootopolisCity/scripts.pory"

# 1748 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KyogreCalmDown:
# 1749 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE! What's wrong?!\n"
# 1750 "data/maps/SootopolisCity/scripts.pory"
	.string "Look over here! It's the RED ORB!\l"
# 1751 "data/maps/SootopolisCity/scripts.pory"
	.string "Calm down! KYOGRE!\p"
# 1752 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1753 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1754 "data/maps/SootopolisCity/scripts.pory"
	.string "It's no good!\n"
# 1755 "data/maps/SootopolisCity/scripts.pory"
	.string "It's not responding at all!$"
# 1756 "data/maps/SootopolisCity/scripts.pory"

# 1757 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon:
# 1758 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE and GROUDON both\n"
# 1759 "data/maps/SootopolisCity/scripts.pory"
	.string "flew off to who knows where.\p"
# 1760 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather in HOENN has returned\n"
# 1761 "data/maps/SootopolisCity/scripts.pory"
	.string "to its normal state…\p"
# 1762 "data/maps/SootopolisCity/scripts.pory"
	.string "Haha…\n"
# 1763 "data/maps/SootopolisCity/scripts.pory"
	.string "Hahaha…\p"
# 1764 "data/maps/SootopolisCity/scripts.pory"
	.string "Maybe what we were trying to do was\n"
# 1765 "data/maps/SootopolisCity/scripts.pory"
	.string "something small, even meaningless,\l"
# 1766 "data/maps/SootopolisCity/scripts.pory"
	.string "to POKéMON…$"
# 1767 "data/maps/SootopolisCity/scripts.pory"

# 1768 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_InvolvedWithCrisisComeWithMe:
# 1769 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Those POKéMON fighting…\n"
# 1770 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON… And KYOGRE…\p"
# 1771 "data/maps/SootopolisCity/scripts.pory"
	.string "The two super-ancient POKéMON\n"
# 1772 "data/maps/SootopolisCity/scripts.pory"
	.string "were awakened from a long sleep…\p"
# 1773 "data/maps/SootopolisCity/scripts.pory"
	.string "And now they are smashing each other\n"
# 1774 "data/maps/SootopolisCity/scripts.pory"
	.string "with their uncontrollable energy…\p"
# 1775 "data/maps/SootopolisCity/scripts.pory"
	.string "…{PLAYER}{KUN}.\p"
# 1776 "data/maps/SootopolisCity/scripts.pory"
	.string "You being here now I'll take to mean\n"
# 1777 "data/maps/SootopolisCity/scripts.pory"
	.string "that you're prepared to become\l"
# 1778 "data/maps/SootopolisCity/scripts.pory"
	.string "involved in this crisis.\p"
# 1779 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, then, there's someone that\n"
# 1780 "data/maps/SootopolisCity/scripts.pory"
	.string "I'd like you to meet.\p"
# 1781 "data/maps/SootopolisCity/scripts.pory"
	.string "Come with me, please.$"
# 1782 "data/maps/SootopolisCity/scripts.pory"

# 1783 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoesThisMakeYourFearPokemon:
# 1784 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Listen, {PLAYER}{KUN}.\p"
# 1785 "data/maps/SootopolisCity/scripts.pory"
	.string "Does seeing GROUDON and KYOGRE make\n"
# 1786 "data/maps/SootopolisCity/scripts.pory"
	.string "you think POKéMON are to be feared?\p"
# 1787 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's not true.\n"
# 1788 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON are really more…\p"
# 1789 "data/maps/SootopolisCity/scripts.pory"
	.string "…Why am I asking you this?\n"
# 1790 "data/maps/SootopolisCity/scripts.pory"
	.string "You already know.$"
# 1791 "data/maps/SootopolisCity/scripts.pory"

# 1792 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HereWereAreHelpWallace:
# 1793 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Okay, here we are!\p"
# 1794 "data/maps/SootopolisCity/scripts.pory"
	.string "Inside here you'll find someone named\n"
# 1795 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE.\p"
# 1796 "data/maps/SootopolisCity/scripts.pory"
	.string "I think you have what's needed to\n"
# 1797 "data/maps/SootopolisCity/scripts.pory"
	.string "help him…$"
# 1798 "data/maps/SootopolisCity/scripts.pory"

# 1799 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KnowWhatsNeededToHelpHim:
# 1800 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: I think you have what's\n"
# 1801 "data/maps/SootopolisCity/scripts.pory"
	.string "needed to help him…$"
# 1802 "data/maps/SootopolisCity/scripts.pory"

# 1803 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NeverBeenToSkyPillar:
# 1804 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: The SKY PILLAR…\p"
# 1805 "data/maps/SootopolisCity/scripts.pory"
	.string "I've never been there.\n"
# 1806 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder where it could be?$"
# 1807 "data/maps/SootopolisCity/scripts.pory"

# 1808 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SoThatsRayquaza:
# 1809 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: So that's RAYQUAZA…\p"
# 1810 "data/maps/SootopolisCity/scripts.pory"
	.string "It's incredible how the two rampaging\n"
# 1811 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON would flee from it in fear…$"
# 1812 "data/maps/SootopolisCity/scripts.pory"

# 1813 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_MaxieArchieLeft:
# 1814 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: It looks like both MAXIE and\n"
# 1815 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE have gone away somewhere.\p"
# 1816 "data/maps/SootopolisCity/scripts.pory"
	.string "Perhaps they've gone to MT. PYRE to\n"
# 1817 "data/maps/SootopolisCity/scripts.pory"
	.string "return those ORBS…$"
# 1818 "data/maps/SootopolisCity/scripts.pory"

# 1819 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar:
# 1820 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: Oh?\n"
# 1821 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}?\p"
# 1822 "data/maps/SootopolisCity/scripts.pory"
	.string "Haven't you scaled the SKY PILLAR\n"
# 1823 "data/maps/SootopolisCity/scripts.pory"
	.string "yet?\p"
# 1824 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you can make it to\n"
# 1825 "data/maps/SootopolisCity/scripts.pory"
	.string "the top of the SKY PILLAR…$"
# 1826 "data/maps/SootopolisCity/scripts.pory"

# 1827 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AquaMagmaDidntMeanHarm:
# 1828 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 1829 "data/maps/SootopolisCity/scripts.pory"
	.string "The leaders of TEAM MAGMA and AQUA,\n"
# 1830 "data/maps/SootopolisCity/scripts.pory"
	.string "I don't think they meant harm.\p"
# 1831 "data/maps/SootopolisCity/scripts.pory"
	.string "It wouldn't hurt to hear what they\n"
# 1832 "data/maps/SootopolisCity/scripts.pory"
	.string "have to say for themselves.$"
# 1833 "data/maps/SootopolisCity/scripts.pory"

# 1834 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThankYouForHelpAcceptThis:
# 1835 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\n"
# 1836 "data/maps/SootopolisCity/scripts.pory"
	.string "My eyes didn't deceive me.\p"
# 1837 "data/maps/SootopolisCity/scripts.pory"
	.string "Thanks to your help, SOOTOPOLIS…\n"
# 1838 "data/maps/SootopolisCity/scripts.pory"
	.string "No, all of HOENN was saved.\p"
# 1839 "data/maps/SootopolisCity/scripts.pory"
	.string "On behalf of the people, I thank you.\p"
# 1840 "data/maps/SootopolisCity/scripts.pory"
	.string "This is a gift from me.\n"
# 1841 "data/maps/SootopolisCity/scripts.pory"
	.string "Please accept it.$"
# 1842 "data/maps/SootopolisCity/scripts.pory"

# 1843 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ExplainWaterfallGoToGym:
# 1844 "data/maps/SootopolisCity/scripts.pory"
	.string "That HIDDEN MACHINE contains\n"
# 1845 "data/maps/SootopolisCity/scripts.pory"
	.string "WATERFALL.\p"
# 1846 "data/maps/SootopolisCity/scripts.pory"
	.string "If you have the RAIN BADGE, a POKéMON\n"
# 1847 "data/maps/SootopolisCity/scripts.pory"
	.string "that has learned that HM move can\l"
# 1848 "data/maps/SootopolisCity/scripts.pory"
	.string "force its way up waterfalls.\p"
# 1849 "data/maps/SootopolisCity/scripts.pory"
	.string "And where does one get the RAIN BADGE?\n"
# 1850 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, don't you?\p"
# 1851 "data/maps/SootopolisCity/scripts.pory"
	.string "That's right! You have to beat\n"
# 1852 "data/maps/SootopolisCity/scripts.pory"
	.string "the SOOTOPOLIS GYM LEADER.\p"
# 1853 "data/maps/SootopolisCity/scripts.pory"
	.string "When you're all set to go, step through\n"
# 1854 "data/maps/SootopolisCity/scripts.pory"
	.string "that door.$"
# 1855 "data/maps/SootopolisCity/scripts.pory"

# 1856 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DazzledByMentor:
# 1857 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: I'm sure that you will be\n"
# 1858 "data/maps/SootopolisCity/scripts.pory"
	.string "dazzled by my mentor's breathtakingly\l"
# 1859 "data/maps/SootopolisCity/scripts.pory"
	.string "elegant battle style.$"
