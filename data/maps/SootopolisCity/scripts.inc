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
	goto_if_le VAR_SKY_PILLAR_STATE, 7, SootopolisCity_EventScript_SetLegendariesLayout
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
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NoMusic
# 174 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
# 175 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 176 "data/maps/SootopolisCity/scripts.pory"

# 177 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NoMusic::
# 178 "data/maps/SootopolisCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 179 "data/maps/SootopolisCity/scripts.pory"
	end
# 180 "data/maps/SootopolisCity/scripts.pory"

# 181 "data/maps/SootopolisCity/scripts.pory"

# 182 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries::
# 183 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_PlayerFaceLegendaries1
# 184 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 7, SootopolisCity_EventScript_PlayerFaceLegendaries2
# 185 "data/maps/SootopolisCity/scripts.pory"
	end
# 186 "data/maps/SootopolisCity/scripts.pory"

# 187 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 188 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 189 "data/maps/SootopolisCity/scripts.pory"
	return
# 190 "data/maps/SootopolisCity/scripts.pory"

# 191 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 192 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 193 "data/maps/SootopolisCity/scripts.pory"
	return
# 194 "data/maps/SootopolisCity/scripts.pory"

# 195 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnResume:
# 196 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 197 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 198 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
# 199 "data/maps/SootopolisCity/scripts.pory"
	end
# 200 "data/maps/SootopolisCity/scripts.pory"

# 201 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnFrame:
# 202 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 203 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 7, SootopolisCity_EventScript_StartRayquazaScene
# 204 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 205 "data/maps/SootopolisCity/scripts.pory"

# 206 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 207 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 208 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 209 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 210 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
# 211 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
# 212 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 213 "data/maps/SootopolisCity/scripts.pory"
	end
# 214 "data/maps/SootopolisCity/scripts.pory"

# 215 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 216 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 217 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 218 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 219 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 220 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 221 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 222 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 223 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 224 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 225 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 226 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 227 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 228 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 229 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 230 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 231 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 232 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 233 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 234 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 235 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
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
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 244 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 245 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 246 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 247 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 248 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 249 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonAttack
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
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 258 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 259 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 260 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 261 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 262 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 263 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 264 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 266 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 267 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 268 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 269 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 270 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 271 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 272 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 273 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 274 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 275 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 276 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonIdle
# 277 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 278 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 279 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 280 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 281 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 282 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 283 "data/maps/SootopolisCity/scripts.pory"
	end
# 284 "data/maps/SootopolisCity/scripts.pory"

# 285 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter:
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
	walk_slow_diag_southwest
# 294 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 295 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 296 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 297 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 298 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 299 "data/maps/SootopolisCity/scripts.pory"

# 300 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter:
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
	walk_slow_diag_northeast
# 309 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 310 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 311 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 312 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 313 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 314 "data/maps/SootopolisCity/scripts.pory"

# 315 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 316 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 317 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 318 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 319 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 320 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 321 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 322 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 323 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 324 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 325 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 326 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 327 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 328 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 329 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 330 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 332 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 333 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 334 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 335 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
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
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 344 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 345 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 346 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 347 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 348 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 349 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonAttack
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
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 358 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 359 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 360 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 361 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 362 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 363 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 364 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 366 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 367 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 368 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 369 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 370 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 371 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 372 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 373 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 374 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 375 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 376 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonIdle
# 377 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 378 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 379 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 380 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 381 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 382 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 383 "data/maps/SootopolisCity/scripts.pory"
	end
# 384 "data/maps/SootopolisCity/scripts.pory"

# 385 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive:
# 386 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 387 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 388 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 389 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 390 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 391 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 392 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 393 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 394 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 395 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 396 "data/maps/SootopolisCity/scripts.pory"

# 397 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive:
# 398 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 399 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 400 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 401 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 402 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 403 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 404 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 405 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 406 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 407 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 408 "data/maps/SootopolisCity/scripts.pory"

# 409 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 410 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 411 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 412 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 413 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 414 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 415 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 416 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 417 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 418 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 419 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 420 "data/maps/SootopolisCity/scripts.pory"

# 421 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend:
# 422 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 423 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 424 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 425 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 426 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 427 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 428 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 429 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 430 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 431 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 432 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 433 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 434 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 435 "data/maps/SootopolisCity/scripts.pory"

# 436 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack:
# 437 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 438 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 439 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 440 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 441 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 442 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 443 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 444 "data/maps/SootopolisCity/scripts.pory"

# 445 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle:
# 446 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 447 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 448 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 449 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 450 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 451 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 452 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 453 "data/maps/SootopolisCity/scripts.pory"

# 454 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack:
# 455 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 456 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 457 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 458 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 459 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 460 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 461 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 462 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 463 "data/maps/SootopolisCity/scripts.pory"

# 464 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 465 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 466 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 467 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 468 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 469 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 470 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 471 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 472 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 473 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 474 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 475 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 476 "data/maps/SootopolisCity/scripts.pory"

# 477 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack:
# 478 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 479 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 480 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 481 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 482 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 483 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 484 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 485 "data/maps/SootopolisCity/scripts.pory"

# 486 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle:
# 487 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 488 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 489 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 490 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 491 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 492 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 493 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 494 "data/maps/SootopolisCity/scripts.pory"

# 495 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 496 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 497 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 498 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 499 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
# 500 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
# 501 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 502 "data/maps/SootopolisCity/scripts.pory"
	end
# 503 "data/maps/SootopolisCity/scripts.pory"

# 504 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 505 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 506 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 507 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 508 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 509 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 510 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 511 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 512 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 513 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 514 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 515 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 516 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_SOOTOPOLIS_RAYQUAZA, MAP_SOOTOPOLIS_CITY
# 517 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 518 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 519 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 520 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 521 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 522 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 523 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 525 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 526 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 527 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 528 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 529 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 530 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 531 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 532 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 533 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 534 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 535 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 536 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 537 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 538 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 539 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 540 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 541 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 542 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 543 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 544 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 546 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 547 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 548 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 549 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_ABNORMAL_WEATHER_RAIN
# 550 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 551 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 552 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 553 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 554 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 555 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 43, 32
# 556 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 557 "data/maps/SootopolisCity/scripts.pory"
	end
# 558 "data/maps/SootopolisCity/scripts.pory"

# 559 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 560 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 561 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 562 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 563 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 564 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 565 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 566 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 567 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 568 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 569 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 570 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 571 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 572 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 573 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 574 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 575 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 576 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 577 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 578 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 579 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 580 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 581 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 582 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 583 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 584 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 585 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 586 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 587 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 588 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 589 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 590 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 591 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 592 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 593 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 594 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 595 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 596 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 597 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 598 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 599 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 600 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 601 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 602 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 603 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_ABNORMAL_WEATHER_RAIN
# 604 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 605 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 606 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SURF
# 607 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 608 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 609 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 29, 53
# 610 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 611 "data/maps/SootopolisCity/scripts.pory"
	end
# 612 "data/maps/SootopolisCity/scripts.pory"

# 613 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 614 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 615 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 616 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 617 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 618 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 619 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 620 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 621 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 622 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 623 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 624 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 625 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 626 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 627 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 628 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 629 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 630 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 631 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 632 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 633 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 634 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 635 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 636 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 637 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 638 "data/maps/SootopolisCity/scripts.pory"
	return
# 639 "data/maps/SootopolisCity/scripts.pory"

# 640 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 641 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 642 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 643 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 644 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 645 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 646 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 647 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 648 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 649 "data/maps/SootopolisCity/scripts.pory"

# 650 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
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
SootopolisCity_Movement_PlayerApproachLegendaries:
# 658 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 659 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 660 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 661 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 662 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 663 "data/maps/SootopolisCity/scripts.pory"

# 664 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 665 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 666 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 667 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 668 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 669 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 670 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 671 "data/maps/SootopolisCity/scripts.pory"

# 672 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 673 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 674 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 675 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 676 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 677 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 678 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 679 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 680 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 681 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 682 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 683 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 684 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 685 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 686 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 687 "data/maps/SootopolisCity/scripts.pory"

# 688 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 689 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 690 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 691 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 692 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 693 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 694 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 695 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 696 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 697 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 698 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 699 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 700 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 701 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 702 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 703 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 704 "data/maps/SootopolisCity/scripts.pory"

# 705 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 706 "data/maps/SootopolisCity/scripts.pory"
	lock
# 707 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 708 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ExpertPostLegendaries
# 709 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ExpertLegendaries
# 710 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
# 711 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 712 "data/maps/SootopolisCity/scripts.pory"
	release
# 713 "data/maps/SootopolisCity/scripts.pory"
	end
# 714 "data/maps/SootopolisCity/scripts.pory"

# 715 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 716 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 717 "data/maps/SootopolisCity/scripts.pory"
	release
# 718 "data/maps/SootopolisCity/scripts.pory"
	end
# 719 "data/maps/SootopolisCity/scripts.pory"

# 720 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 721 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 722 "data/maps/SootopolisCity/scripts.pory"
	release
# 723 "data/maps/SootopolisCity/scripts.pory"
	end
# 724 "data/maps/SootopolisCity/scripts.pory"

# 725 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 726 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 727 "data/maps/SootopolisCity/scripts.pory"
	release
# 728 "data/maps/SootopolisCity/scripts.pory"
	end
# 729 "data/maps/SootopolisCity/scripts.pory"

# 730 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 731 "data/maps/SootopolisCity/scripts.pory"
	lock
# 732 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 733 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
# 734 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_KiriGiveBerry
# 735 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_KiriRayquaza
# 736 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 737 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 738 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 739 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 740 "data/maps/SootopolisCity/scripts.pory"
	release
# 741 "data/maps/SootopolisCity/scripts.pory"
	end
# 742 "data/maps/SootopolisCity/scripts.pory"

# 743 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 744 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 745 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 746 "data/maps/SootopolisCity/scripts.pory"
	release
# 747 "data/maps/SootopolisCity/scripts.pory"
	end
# 748 "data/maps/SootopolisCity/scripts.pory"

# 749 "data/maps/SootopolisCity/scripts.pory"
@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
# 750 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 751 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 752 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 753 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
# 754 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 755 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 756 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 757 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 758 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 759 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 760 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 761 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 762 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 763 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
# 764 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
# 765 "data/maps/SootopolisCity/scripts.pory"
	end
# 766 "data/maps/SootopolisCity/scripts.pory"

# 767 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 768 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
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
SootopolisCity_EventScript_GiveIapapaBerry::
# 775 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 776 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 777 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 778 "data/maps/SootopolisCity/scripts.pory"
	release
# 779 "data/maps/SootopolisCity/scripts.pory"
	end
# 780 "data/maps/SootopolisCity/scripts.pory"

# 781 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 782 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 783 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 784 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 785 "data/maps/SootopolisCity/scripts.pory"
	release
# 786 "data/maps/SootopolisCity/scripts.pory"
	end
# 787 "data/maps/SootopolisCity/scripts.pory"

# 788 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 789 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 790 "data/maps/SootopolisCity/scripts.pory"
	release
# 791 "data/maps/SootopolisCity/scripts.pory"
	end
# 792 "data/maps/SootopolisCity/scripts.pory"

# 793 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 794 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 795 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FacePlayer
# 796 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 797 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman2Rayquaza
# 798 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 799 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 800 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FaceOriginalDirection
# 801 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 803 "data/maps/SootopolisCity/scripts.pory"
	end
# 804 "data/maps/SootopolisCity/scripts.pory"

# 805 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 806 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 807 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 808 "data/maps/SootopolisCity/scripts.pory"
	end
# 809 "data/maps/SootopolisCity/scripts.pory"

# 810 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 811 "data/maps/SootopolisCity/scripts.pory"
	lock
# 812 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 813 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ManPostLegendaries
# 814 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 815 "data/maps/SootopolisCity/scripts.pory"
	release
# 816 "data/maps/SootopolisCity/scripts.pory"
	end
# 817 "data/maps/SootopolisCity/scripts.pory"

# 818 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 819 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 820 "data/maps/SootopolisCity/scripts.pory"
	release
# 821 "data/maps/SootopolisCity/scripts.pory"
	end
# 822 "data/maps/SootopolisCity/scripts.pory"

# 823 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 824 "data/maps/SootopolisCity/scripts.pory"
	lock
# 825 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 826 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Woman1PostLegendaries
# 827 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman1Rayquaza
# 828 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
# 829 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 830 "data/maps/SootopolisCity/scripts.pory"
	release
# 831 "data/maps/SootopolisCity/scripts.pory"
	end
# 832 "data/maps/SootopolisCity/scripts.pory"

# 833 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 834 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 835 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 836 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_1, Common_Movement_FaceOriginalDirection
# 837 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 838 "data/maps/SootopolisCity/scripts.pory"
	release
# 839 "data/maps/SootopolisCity/scripts.pory"
	end
# 840 "data/maps/SootopolisCity/scripts.pory"

# 841 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 842 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 843 "data/maps/SootopolisCity/scripts.pory"
	release
# 844 "data/maps/SootopolisCity/scripts.pory"
	end
# 845 "data/maps/SootopolisCity/scripts.pory"

# 846 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 847 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 848 "data/maps/SootopolisCity/scripts.pory"
	release
# 849 "data/maps/SootopolisCity/scripts.pory"
	end
# 850 "data/maps/SootopolisCity/scripts.pory"

# 851 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 852 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 853 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FacePlayer
# 854 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 855 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NinjaBoyRayquaza
# 856 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_NinjaBoyNormal
# 857 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
# 858 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 859 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 860 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 861 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 862 "data/maps/SootopolisCity/scripts.pory"
	release
# 863 "data/maps/SootopolisCity/scripts.pory"
	end
# 864 "data/maps/SootopolisCity/scripts.pory"

# 865 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 866 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 867 "data/maps/SootopolisCity/scripts.pory"
	release
# 868 "data/maps/SootopolisCity/scripts.pory"
	end
# 869 "data/maps/SootopolisCity/scripts.pory"

# 870 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 871 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 872 "data/maps/SootopolisCity/scripts.pory"
	release
# 873 "data/maps/SootopolisCity/scripts.pory"
	end
# 874 "data/maps/SootopolisCity/scripts.pory"

# 875 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 876 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 877 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FacePlayer
# 878 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 879 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy1Rayquaza
# 880 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
# 881 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Boy1Normal
# 882 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
# 883 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 884 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 885 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FaceOriginalDirection
# 886 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 887 "data/maps/SootopolisCity/scripts.pory"
	release
# 888 "data/maps/SootopolisCity/scripts.pory"
	end
# 889 "data/maps/SootopolisCity/scripts.pory"

# 890 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 891 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 892 "data/maps/SootopolisCity/scripts.pory"
	release
# 893 "data/maps/SootopolisCity/scripts.pory"
	end
# 894 "data/maps/SootopolisCity/scripts.pory"

# 895 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 896 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 897 "data/maps/SootopolisCity/scripts.pory"
	release
# 898 "data/maps/SootopolisCity/scripts.pory"
	end
# 899 "data/maps/SootopolisCity/scripts.pory"

# 900 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 901 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 902 "data/maps/SootopolisCity/scripts.pory"
	release
# 903 "data/maps/SootopolisCity/scripts.pory"
	end
# 904 "data/maps/SootopolisCity/scripts.pory"

# 905 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 906 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 907 "data/maps/SootopolisCity/scripts.pory"
	end
# 908 "data/maps/SootopolisCity/scripts.pory"

# 909 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 910 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 911 "data/maps/SootopolisCity/scripts.pory"
	end
# 912 "data/maps/SootopolisCity/scripts.pory"

# 913 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 914 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 915 "data/maps/SootopolisCity/scripts.pory"
	end
# 916 "data/maps/SootopolisCity/scripts.pory"

# 917 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven::
# 918 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 919 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, Common_Movement_FacePlayer
# 920 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 921 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
# 922 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StevenHelpWallace
# 923 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_StevenHelpedWallace
# 924 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_StevenHelpedWallace
# 925 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_StevenMaxieArchieLeft
# 926 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
# 927 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 928 "data/maps/SootopolisCity/scripts.pory"
	end
# 929 "data/maps/SootopolisCity/scripts.pory"

# 930 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpWallace::
# 931 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
# 932 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 933 "data/maps/SootopolisCity/scripts.pory"
	end
# 934 "data/maps/SootopolisCity/scripts.pory"

# 935 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 936 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
# 937 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 938 "data/maps/SootopolisCity/scripts.pory"
	end
# 939 "data/maps/SootopolisCity/scripts.pory"

# 940 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpedWallace::
# 941 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
# 942 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 943 "data/maps/SootopolisCity/scripts.pory"
	end
# 944 "data/maps/SootopolisCity/scripts.pory"

# 945 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 946 "data/maps/SootopolisCity/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 947 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_TEMP_3, 21, SootopolisCity_EventScript_EmmieApproachSteven
# 948 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 949 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 950 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
# 951 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
# 952 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 953 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 954 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 955 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 956 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieWalkToCaveOfOrigin
# 957 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 958 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 959 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 960 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 961 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 962 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 963 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieArriveCaveEntrance
# 964 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 965 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 966 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 967 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 968 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 969 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 970 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 971 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_LEADERS
# 972 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 973 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 974 "data/maps/SootopolisCity/scripts.pory"
	end
# 975 "data/maps/SootopolisCity/scripts.pory"

# 976 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 977 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 978 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 979 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 980 "data/maps/SootopolisCity/scripts.pory"
	return
# 981 "data/maps/SootopolisCity/scripts.pory"

# 982 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 983 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 984 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 985 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieStartWalkToCaveOfOriginNorth
# 986 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 987 "data/maps/SootopolisCity/scripts.pory"
	return
# 988 "data/maps/SootopolisCity/scripts.pory"

# 989 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_EmmieApproachSteven::
# 990 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieApproachSteven
# 991 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 992 "data/maps/SootopolisCity/scripts.pory"
	return
# 993 "data/maps/SootopolisCity/scripts.pory"

# 994 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieApproachSteven:
# 995 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 996 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 997 "data/maps/SootopolisCity/scripts.pory"
	face_up
# 998 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 999 "data/maps/SootopolisCity/scripts.pory"

# 1000 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 1001 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1002 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1003 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1004 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1005 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1006 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1007 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1008 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1009 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1010 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1011 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1012 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1013 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1014 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1015 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1016 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1017 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1018 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1019 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1020 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1021 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1022 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1023 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1024 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1025 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1026 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1027 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1028 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1029 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1030 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1031 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1032 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1033 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1034 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1035 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1036 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1037 "data/maps/SootopolisCity/scripts.pory"

# 1038 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 1039 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1040 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1041 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1042 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1043 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1044 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1045 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1046 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1047 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1048 "data/maps/SootopolisCity/scripts.pory"
	walk_up
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
	walk_left
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
	walk_left
# 1062 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1063 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1064 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1065 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1066 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1067 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1068 "data/maps/SootopolisCity/scripts.pory"
	walk_up
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
	step_end
# 1075 "data/maps/SootopolisCity/scripts.pory"

# 1076 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 1077 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1078 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1079 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1080 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1081 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1082 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1083 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1084 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1085 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1086 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1087 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1088 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1089 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1090 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1091 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1092 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1093 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1094 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1095 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1096 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1097 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1098 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1099 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1100 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1101 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1102 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1103 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1104 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1105 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1106 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1107 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1108 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1109 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1110 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1111 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1112 "data/maps/SootopolisCity/scripts.pory"

# 1113 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieStartWalkToCaveOfOriginNorth:
# 1114 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1115 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1116 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1117 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1118 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1119 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1120 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1121 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1122 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1123 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1124 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1125 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1126 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1127 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1128 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1129 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1130 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1131 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1132 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1133 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1134 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1135 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1136 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1137 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1138 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1139 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1140 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1141 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1142 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1143 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1144 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1145 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1146 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1147 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1148 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1149 "data/maps/SootopolisCity/scripts.pory"

# 1150 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 1151 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1152 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1153 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1154 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1155 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1156 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1157 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1158 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1159 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1160 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1161 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1162 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1163 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1164 "data/maps/SootopolisCity/scripts.pory"
	walk_up
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
	walk_right
# 1173 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1174 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1175 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1176 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1177 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1178 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1179 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1180 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1181 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1182 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1183 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1184 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1185 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1186 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1187 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1188 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1189 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1190 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1191 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1192 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1193 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1194 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1195 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1196 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1197 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1198 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1199 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1200 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1201 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 1202 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1203 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1204 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1205 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1206 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1207 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1208 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1209 "data/maps/SootopolisCity/scripts.pory"

# 1210 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 1211 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1212 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1213 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1214 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1215 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1216 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1217 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1218 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1219 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1220 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1221 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1222 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1223 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1224 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1225 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1226 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1227 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1228 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1229 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1230 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1231 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1232 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1233 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1234 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1235 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1236 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1237 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1238 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1239 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1240 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1241 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1242 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1243 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1244 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1245 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1246 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1247 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1248 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1249 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1250 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1251 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1252 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1253 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1254 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1255 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1256 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1257 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1258 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1259 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1260 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1261 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1262 "data/maps/SootopolisCity/scripts.pory"

# 1263 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieWalkToCaveOfOrigin:
# 1264 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1265 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1266 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1267 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1268 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1269 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1270 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1271 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1272 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1273 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1274 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1275 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1276 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1277 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1278 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1279 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1280 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1281 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1282 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1283 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1284 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1285 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1286 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1287 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1288 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1289 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1290 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1291 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1292 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1293 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1294 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1295 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1296 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1297 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1298 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1299 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1300 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1301 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1302 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1303 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1304 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1305 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1306 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1307 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1308 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1309 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1310 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1311 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1312 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1313 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1314 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1315 "data/maps/SootopolisCity/scripts.pory"

# 1316 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 1317 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 1318 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1319 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1320 "data/maps/SootopolisCity/scripts.pory"

# 1321 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 1322 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1323 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1324 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1325 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1326 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1327 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1328 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1329 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1330 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1331 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1332 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1333 "data/maps/SootopolisCity/scripts.pory"

# 1334 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 1335 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1336 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1337 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1338 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1339 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1340 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1341 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1342 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1343 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1344 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1345 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1346 "data/maps/SootopolisCity/scripts.pory"

# 1347 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieArriveCaveEntrance:
# 1348 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1349 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1350 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1351 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1352 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1353 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1354 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1355 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1356 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1357 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1358 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1359 "data/maps/SootopolisCity/scripts.pory"

# 1360 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 1361 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1362 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1363 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1364 "data/maps/SootopolisCity/scripts.pory"

# 1365 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 1366 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1367 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FacePlayer
# 1368 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1369 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy2Rayquaza
# 1370 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 1371 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1372 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FaceOriginalDirection
# 1373 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1374 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1375 "data/maps/SootopolisCity/scripts.pory"
	end
# 1376 "data/maps/SootopolisCity/scripts.pory"

# 1377 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 1378 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 1379 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1380 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1381 "data/maps/SootopolisCity/scripts.pory"
	end
# 1382 "data/maps/SootopolisCity/scripts.pory"

# 1383 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 1384 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1385 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_BlackBeltRayquaza
# 1386 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 1387 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1388 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 1389 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1390 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 1391 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1392 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 1393 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1394 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1395 "data/maps/SootopolisCity/scripts.pory"
	end
# 1396 "data/maps/SootopolisCity/scripts.pory"

# 1397 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 1398 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 1399 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1400 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 1401 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1402 "data/maps/SootopolisCity/scripts.pory"
	end
# 1403 "data/maps/SootopolisCity/scripts.pory"

# 1404 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 1405 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1406 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FacePlayer
# 1407 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1408 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GirlRayquaza
# 1409 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 1410 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1411 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FaceOriginalDirection
# 1412 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1413 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1414 "data/maps/SootopolisCity/scripts.pory"
	end
# 1415 "data/maps/SootopolisCity/scripts.pory"

# 1416 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 1417 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 1418 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1419 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1420 "data/maps/SootopolisCity/scripts.pory"
	end
# 1421 "data/maps/SootopolisCity/scripts.pory"

# 1422 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 1423 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1424 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FacePlayer
# 1425 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1426 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ManiacRayquaza
# 1427 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 1428 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1429 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FaceOriginalDirection
# 1430 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1431 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1432 "data/maps/SootopolisCity/scripts.pory"
	end
# 1433 "data/maps/SootopolisCity/scripts.pory"

# 1434 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 1435 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 1436 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1437 "data/maps/SootopolisCity/scripts.pory"
	end
# 1438 "data/maps/SootopolisCity/scripts.pory"

# 1439 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 1440 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1441 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1442 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_GoToSkyPillar
# 1443 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_GoToGym
# 1444 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_GiveWaterfall
# 1445 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 1446 "data/maps/SootopolisCity/scripts.pory"
	release
# 1447 "data/maps/SootopolisCity/scripts.pory"
	end
# 1448 "data/maps/SootopolisCity/scripts.pory"

# 1449 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall::
# 1450 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 1451 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 1452 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 1453 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 1454 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1455 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_WallaceMoveFromGym
# 1456 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SootopolisCity_EventScript_WallaceMoveFromGym
# 1457 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_WallaceMoveFromGymWest
# 1458 "data/maps/SootopolisCity/scripts.pory"
	release
# 1459 "data/maps/SootopolisCity/scripts.pory"
	end
# 1460 "data/maps/SootopolisCity/scripts.pory"

# 1461 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGym::
# 1462 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 1463 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1464 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 1465 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 1466 "data/maps/SootopolisCity/scripts.pory"
	return
# 1467 "data/maps/SootopolisCity/scripts.pory"

# 1468 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 1469 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 1470 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1471 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 1472 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 1473 "data/maps/SootopolisCity/scripts.pory"
	return
# 1474 "data/maps/SootopolisCity/scripts.pory"

# 1475 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToSkyPillar::
# 1476 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 1477 "data/maps/SootopolisCity/scripts.pory"
	release
# 1478 "data/maps/SootopolisCity/scripts.pory"
	end
# 1479 "data/maps/SootopolisCity/scripts.pory"

# 1480 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToGym::
# 1481 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
# 1482 "data/maps/SootopolisCity/scripts.pory"
	release
# 1483 "data/maps/SootopolisCity/scripts.pory"
	end
# 1484 "data/maps/SootopolisCity/scripts.pory"

# 1485 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 1486 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1487 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1488 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1489 "data/maps/SootopolisCity/scripts.pory"

# 1490 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 1491 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1492 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1493 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1494 "data/maps/SootopolisCity/scripts.pory"

# 1495 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 1496 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1497 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_MaxieRayquaza
# 1498 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 1499 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1500 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1501 "data/maps/SootopolisCity/scripts.pory"
	end
# 1502 "data/maps/SootopolisCity/scripts.pory"

# 1503 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza::
# 1504 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_DEFAULT
# 1505 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1506 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1507 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1508 "data/maps/SootopolisCity/scripts.pory"
	end
# 1509 "data/maps/SootopolisCity/scripts.pory"

# 1510 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 1511 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1512 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ArchieRayquaza
# 1513 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 1514 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1515 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1516 "data/maps/SootopolisCity/scripts.pory"
	end
# 1517 "data/maps/SootopolisCity/scripts.pory"

# 1518 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza::
# 1519 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_DEFAULT
# 1520 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1521 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1522 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1523 "data/maps/SootopolisCity/scripts.pory"
	end
# 1524 "data/maps/SootopolisCity/scripts.pory"

# 1525 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieArchieLeave::
# 1526 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 1527 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 1528 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1529 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1530 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1531 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 1532 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1533 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1534 "data/maps/SootopolisCity/scripts.pory"
	end
# 1535 "data/maps/SootopolisCity/scripts.pory"

# 1536 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1537 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 1538 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1539 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1540 "data/maps/SootopolisCity/scripts.pory"

# 1541 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1542 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 1543 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1544 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1545 "data/maps/SootopolisCity/scripts.pory"

# 1546 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign:
# 1547 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\n"
# 1548 "data/maps/SootopolisCity/scripts.pory"
	.string "Leader: JUAN\p"
# 1549 "data/maps/SootopolisCity/scripts.pory"
	.string "“The GYM LEADER with the beauty\n"
# 1550 "data/maps/SootopolisCity/scripts.pory"
	.string "of pure water!”$"
# 1551 "data/maps/SootopolisCity/scripts.pory"

# 1552 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign:
# 1553 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY\p"
# 1554 "data/maps/SootopolisCity/scripts.pory"
	.string "“The mystical city where history\n"
# 1555 "data/maps/SootopolisCity/scripts.pory"
	.string "slumbers.”$"
# 1556 "data/maps/SootopolisCity/scripts.pory"

# 1557 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed:
# 1558 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"
# 1559 "data/maps/SootopolisCity/scripts.pory"

# 1560 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere:
# 1561 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
# 1562 "data/maps/SootopolisCity/scripts.pory"
	.string "down stairs all the time…\p"
# 1563 "data/maps/SootopolisCity/scripts.pory"
	.string "If you live in this town, you end up\n"
# 1564 "data/maps/SootopolisCity/scripts.pory"
	.string "getting physically fit.$"
# 1565 "data/maps/SootopolisCity/scripts.pory"

# 1566 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
# 1567 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant POKéMON suddenly appeared\n"
# 1568 "data/maps/SootopolisCity/scripts.pory"
	.string "in the middle of the city!\p"
# 1569 "data/maps/SootopolisCity/scripts.pory"
	.string "And, I've never seen them before!\p"
# 1570 "data/maps/SootopolisCity/scripts.pory"
	.string "Why are they smashing into each\n"
# 1571 "data/maps/SootopolisCity/scripts.pory"
	.string "other like that?\p"
# 1572 "data/maps/SootopolisCity/scripts.pory"
	.string "Why can't they be friends, those\n"
# 1573 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 1574 "data/maps/SootopolisCity/scripts.pory"

# 1575 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon:
# 1576 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
# 1577 "data/maps/SootopolisCity/scripts.pory"
	.string "What is that green POKéMON?!$"
# 1578 "data/maps/SootopolisCity/scripts.pory"

# 1579 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo:
# 1580 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON and KYOGRE…\n"
# 1581 "data/maps/SootopolisCity/scripts.pory"
	.string "Where did they go?\p"
# 1582 "data/maps/SootopolisCity/scripts.pory"
	.string "Will they cause droughts or downpours\n"
# 1583 "data/maps/SootopolisCity/scripts.pory"
	.string "somewhere else?$"
# 1584 "data/maps/SootopolisCity/scripts.pory"

# 1585 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry:
# 1586 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
# 1587 "data/maps/SootopolisCity/scripts.pory"
	.string "the two POKéMON aren't angry.\p"
# 1588 "data/maps/SootopolisCity/scripts.pory"
	.string "I think… They probably can't control\n"
# 1589 "data/maps/SootopolisCity/scripts.pory"
	.string "their own power…$"
# 1590 "data/maps/SootopolisCity/scripts.pory"

# 1591 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage:
# 1592 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying POKéMON came down from\n"
# 1593 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky and stopped the rampaging\l"
# 1594 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON…$"
# 1595 "data/maps/SootopolisCity/scripts.pory"

# 1596 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike:
# 1597 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
# 1598 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder what the world is like on\n"
# 1599 "data/maps/SootopolisCity/scripts.pory"
	.string "the other side of this round sky?$"
# 1600 "data/maps/SootopolisCity/scripts.pory"

# 1601 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked:
# 1602 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1603 "data/maps/SootopolisCity/scripts.pory"
	.string "This is wicked!$"
# 1604 "data/maps/SootopolisCity/scripts.pory"

# 1605 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked:
# 1606 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1607 "data/maps/SootopolisCity/scripts.pory"
	.string "That was wicked!$"
# 1608 "data/maps/SootopolisCity/scripts.pory"

# 1609 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon:
# 1610 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red POKéMON!\n"
# 1611 "data/maps/SootopolisCity/scripts.pory"
	.string "Don't back off, blue POKéMON!$"
# 1612 "data/maps/SootopolisCity/scripts.pory"

# 1613 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames:
# 1614 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1615 "data/maps/SootopolisCity/scripts.pory"
	.string "Hi, do you know the names of those\n"
# 1616 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON fighting over there?$"
# 1617 "data/maps/SootopolisCity/scripts.pory"

# 1618 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings:
# 1619 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
# 1620 "data/maps/SootopolisCity/scripts.pory"
	.string "the red one or the blue one, but, oh no,\l"
# 1621 "data/maps/SootopolisCity/scripts.pory"
	.string "it's the green one that settles things!\p"
# 1622 "data/maps/SootopolisCity/scripts.pory"
	.string "Talk about a huge turn of events!$"
# 1623 "data/maps/SootopolisCity/scripts.pory"

# 1624 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes:
# 1625 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1626 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1627 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 1628 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I'm seeing that happen with\n"
# 1629 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1630 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1631 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1632 "data/maps/SootopolisCity/scripts.pory"

# 1633 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes:
# 1634 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1635 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1636 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 1637 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I saw that happen with\n"
# 1638 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1639 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1640 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1641 "data/maps/SootopolisCity/scripts.pory"

# 1642 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting:
# 1643 "data/maps/SootopolisCity/scripts.pory"
	.string "A big POKéMON is fighting with\n"
# 1644 "data/maps/SootopolisCity/scripts.pory"
	.string "another big POKéMON!\p"
# 1645 "data/maps/SootopolisCity/scripts.pory"
	.string "Please, someone make them stop!$"
# 1646 "data/maps/SootopolisCity/scripts.pory"

# 1647 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky:
# 1648 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty POKéMON came down from\n"
# 1649 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky…$"
# 1650 "data/maps/SootopolisCity/scripts.pory"

# 1651 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked:
# 1652 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
# 1653 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY will get wrecked!$"
# 1654 "data/maps/SootopolisCity/scripts.pory"

# 1655 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked:
# 1656 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY didn't get wrecked!$"
# 1657 "data/maps/SootopolisCity/scripts.pory"

# 1658 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist:
# 1659 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
# 1660 "data/maps/SootopolisCity/scripts.pory"
	.string "You've come all the way to SOOTOPOLIS?\l"
# 1661 "data/maps/SootopolisCity/scripts.pory"
	.string "You're no ordinary tourist.\p"
# 1662 "data/maps/SootopolisCity/scripts.pory"
	.string "But I suppose that doesn't make you\n"
# 1663 "data/maps/SootopolisCity/scripts.pory"
	.string "an extraordinary tourist, either.$"
# 1664 "data/maps/SootopolisCity/scripts.pory"

# 1665 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm:
# 1666 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"
# 1667 "data/maps/SootopolisCity/scripts.pory"

# 1668 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave:
# 1669 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
# 1670 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN.\p"
# 1671 "data/maps/SootopolisCity/scripts.pory"
	.string "The spirits of POKéMON, becalmed at\n"
# 1672 "data/maps/SootopolisCity/scripts.pory"
	.string "MT. PYRE, are said to be revived here.\p"
# 1673 "data/maps/SootopolisCity/scripts.pory"
	.string "Please leave.$"
# 1674 "data/maps/SootopolisCity/scripts.pory"

# 1675 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave:
# 1676 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
# 1677 "data/maps/SootopolisCity/scripts.pory"
	.string "superior talent…\p"
# 1678 "data/maps/SootopolisCity/scripts.pory"
	.string "A TRAINER who has knowledge and\n"
# 1679 "data/maps/SootopolisCity/scripts.pory"
	.string "experience of many kinds of POKéMON…\p"
# 1680 "data/maps/SootopolisCity/scripts.pory"
	.string "If such a person were to appear, I was\n"
# 1681 "data/maps/SootopolisCity/scripts.pory"
	.string "instructed by WALLACE to lead that\l"
# 1682 "data/maps/SootopolisCity/scripts.pory"
	.string "TRAINER to this CAVE.$"
# 1683 "data/maps/SootopolisCity/scripts.pory"

# 1684 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash:
# 1685 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
# 1686 "data/maps/SootopolisCity/scripts.pory"
	.string "The clash between the two awakened\n"
# 1687 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON was quelled by the awakening\l"
# 1688 "data/maps/SootopolisCity/scripts.pory"
	.string "of a third POKéMON…$"
# 1689 "data/maps/SootopolisCity/scripts.pory"

# 1690 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo:
# 1691 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN…\p"
# 1692 "data/maps/SootopolisCity/scripts.pory"
	.string "With the passing of the crisis,\n"
# 1693 "data/maps/SootopolisCity/scripts.pory"
	.string "the cave, too, shall sleep…$"
# 1694 "data/maps/SootopolisCity/scripts.pory"

# 1695 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful:
# 1696 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS sprang up as a town in\n"
# 1697 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano.\p"
# 1698 "data/maps/SootopolisCity/scripts.pory"
	.string "If you look up at the sky, the lip of\n"
# 1699 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater is also visible.\l"
# 1700 "data/maps/SootopolisCity/scripts.pory"
	.string "So, all you see is the sky in a circle.\p"
# 1701 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's what makes the sky above\n"
# 1702 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS the most beautiful.$"
# 1703 "data/maps/SootopolisCity/scripts.pory"

# 1704 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight:
# 1705 "data/maps/SootopolisCity/scripts.pory"
	.string "When two POKéMON that gigantic\n"
# 1706 "data/maps/SootopolisCity/scripts.pory"
	.string "are fighting that savagely, there's\l"
# 1707 "data/maps/SootopolisCity/scripts.pory"
	.string "not much that we can do.$"
# 1708 "data/maps/SootopolisCity/scripts.pory"

# 1709 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
# 1710 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third POKéMON flew down,\n"
# 1711 "data/maps/SootopolisCity/scripts.pory"
	.string "I feared the worst.$"
# 1712 "data/maps/SootopolisCity/scripts.pory"

# 1713 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery:
# 1714 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
# 1715 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano…\p"
# 1716 "data/maps/SootopolisCity/scripts.pory"
	.string "And in that ring, stars flicker and\n"
# 1717 "data/maps/SootopolisCity/scripts.pory"
	.string "blink as if they were alive…\l"
# 1718 "data/maps/SootopolisCity/scripts.pory"
	.string "It's my favorite scenery.$"
# 1719 "data/maps/SootopolisCity/scripts.pory"

# 1720 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild:
# 1721 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
# 1722 "data/maps/SootopolisCity/scripts.pory"
	.string "but…\p"
# 1723 "data/maps/SootopolisCity/scripts.pory"
	.string "All of a sudden, dark clouds brewed up,\n"
# 1724 "data/maps/SootopolisCity/scripts.pory"
	.string "rain started falling in sheets, and\l"
# 1725 "data/maps/SootopolisCity/scripts.pory"
	.string "there was thunder and lightning, too.\p"
# 1726 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather just went completely\n"
# 1727 "data/maps/SootopolisCity/scripts.pory"
	.string "wild!\p"
# 1728 "data/maps/SootopolisCity/scripts.pory"
	.string "Is all of this because of those\n"
# 1729 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 1730 "data/maps/SootopolisCity/scripts.pory"

# 1731 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon:
# 1732 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
# 1733 "data/maps/SootopolisCity/scripts.pory"
	.string "It was you who brought that flying\n"
# 1734 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON here?\p"
# 1735 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, aren't you amazing!$"
# 1736 "data/maps/SootopolisCity/scripts.pory"

# 1737 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GroudonPleaseStop:
# 1738 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: G… GROUDON…\n"
# 1739 "data/maps/SootopolisCity/scripts.pory"
	.string "Please! Stop what you're doing!\p"
# 1740 "data/maps/SootopolisCity/scripts.pory"
	.string "I know the extent of your power now!\p"
# 1741 "data/maps/SootopolisCity/scripts.pory"
	.string "If you keep going, all HOENN, not just\n"
# 1742 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS, will be utterly ruined!$"
# 1743 "data/maps/SootopolisCity/scripts.pory"

# 1744 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming:
# 1745 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: So the super-ancient POKéMON\n"
# 1746 "data/maps/SootopolisCity/scripts.pory"
	.string "weren't only GROUDON and KYOGRE…\p"
# 1747 "data/maps/SootopolisCity/scripts.pory"
	.string "After all our fruitless scheming and\n"
# 1748 "data/maps/SootopolisCity/scripts.pory"
	.string "frantic efforts, that one POKéMON's\l"
# 1749 "data/maps/SootopolisCity/scripts.pory"
	.string "simple action puts everything right\l"
# 1750 "data/maps/SootopolisCity/scripts.pory"
	.string "again as if nothing had happened…\p"
# 1751 "data/maps/SootopolisCity/scripts.pory"
	.string "Fu…\n"
# 1752 "data/maps/SootopolisCity/scripts.pory"
	.string "Fuhahaha…$"
# 1753 "data/maps/SootopolisCity/scripts.pory"

# 1754 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KyogreCalmDown:
# 1755 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE! What's wrong?!\n"
# 1756 "data/maps/SootopolisCity/scripts.pory"
	.string "Look over here! It's the RED ORB!\l"
# 1757 "data/maps/SootopolisCity/scripts.pory"
	.string "Calm down! KYOGRE!\p"
# 1758 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1759 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1760 "data/maps/SootopolisCity/scripts.pory"
	.string "It's no good!\n"
# 1761 "data/maps/SootopolisCity/scripts.pory"
	.string "It's not responding at all!$"
# 1762 "data/maps/SootopolisCity/scripts.pory"

# 1763 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon:
# 1764 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE and GROUDON both\n"
# 1765 "data/maps/SootopolisCity/scripts.pory"
	.string "went off to who knows where.\p"
# 1766 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather in HOENN has returned\n"
# 1767 "data/maps/SootopolisCity/scripts.pory"
	.string "to its normal state…\p"
# 1768 "data/maps/SootopolisCity/scripts.pory"
	.string "Haha…\n"
# 1769 "data/maps/SootopolisCity/scripts.pory"
	.string "Hahaha…\p"
# 1770 "data/maps/SootopolisCity/scripts.pory"
	.string "Maybe what we were trying to do was\n"
# 1771 "data/maps/SootopolisCity/scripts.pory"
	.string "something small, even meaningless,\l"
# 1772 "data/maps/SootopolisCity/scripts.pory"
	.string "to POKéMON…$"
# 1773 "data/maps/SootopolisCity/scripts.pory"

# 1774 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_InvolvedWithCrisisComeWithMe:
# 1775 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Those POKéMON fighting…\n"
# 1776 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON… And KYOGRE…\p"
# 1777 "data/maps/SootopolisCity/scripts.pory"
	.string "The two super-ancient POKéMON\n"
# 1778 "data/maps/SootopolisCity/scripts.pory"
	.string "were awakened from a long sleep…\p"
# 1779 "data/maps/SootopolisCity/scripts.pory"
	.string "And now they are smashing each other\n"
# 1780 "data/maps/SootopolisCity/scripts.pory"
	.string "with their uncontrollable energy…\p"
# 1781 "data/maps/SootopolisCity/scripts.pory"
	.string "…{PLAYER}{KUN}.\p"
# 1782 "data/maps/SootopolisCity/scripts.pory"
	.string "You being here now I'll take to mean\n"
# 1783 "data/maps/SootopolisCity/scripts.pory"
	.string "that you're prepared to become\l"
# 1784 "data/maps/SootopolisCity/scripts.pory"
	.string "involved in this crisis.\p"
# 1785 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, then, there's someone that\n"
# 1786 "data/maps/SootopolisCity/scripts.pory"
	.string "I'd like you to meet.\p"
# 1787 "data/maps/SootopolisCity/scripts.pory"
	.string "Come with me, please.$"
# 1788 "data/maps/SootopolisCity/scripts.pory"

# 1789 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoesThisMakeYourFearPokemon:
# 1790 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Listen, {PLAYER}{KUN}.\p"
# 1791 "data/maps/SootopolisCity/scripts.pory"
	.string "Does seeing GROUDON and KYOGRE make\n"
# 1792 "data/maps/SootopolisCity/scripts.pory"
	.string "you think POKéMON are to be feared?\p"
# 1793 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's not true.\n"
# 1794 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON are really more…\p"
# 1795 "data/maps/SootopolisCity/scripts.pory"
	.string "…Why am I asking you this?\n"
# 1796 "data/maps/SootopolisCity/scripts.pory"
	.string "You already know.$"
# 1797 "data/maps/SootopolisCity/scripts.pory"

# 1798 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HereWereAreHelpWallace:
# 1799 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Okay, here we are!\p"
# 1800 "data/maps/SootopolisCity/scripts.pory"
	.string "Inside here you'll find someone named\n"
# 1801 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE.\p"
# 1802 "data/maps/SootopolisCity/scripts.pory"
	.string "I think you have what's needed to\n"
# 1803 "data/maps/SootopolisCity/scripts.pory"
	.string "help him…$"
# 1804 "data/maps/SootopolisCity/scripts.pory"

# 1805 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KnowWhatsNeededToHelpHim:
# 1806 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: I think you have what's\n"
# 1807 "data/maps/SootopolisCity/scripts.pory"
	.string "needed to help him…$"
# 1808 "data/maps/SootopolisCity/scripts.pory"

# 1809 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NeverBeenToSkyPillar:
# 1810 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: The SKY PILLAR…\p"
# 1811 "data/maps/SootopolisCity/scripts.pory"
	.string "I've never been there.\n"
# 1812 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder where it could be?$"
# 1813 "data/maps/SootopolisCity/scripts.pory"

# 1814 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SoThatsRayquaza:
# 1815 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: So that's RAYQUAZA…\p"
# 1816 "data/maps/SootopolisCity/scripts.pory"
	.string "It's incredible how the two rampaging\n"
# 1817 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON would flee from it in fear…$"
# 1818 "data/maps/SootopolisCity/scripts.pory"

# 1819 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_MaxieArchieLeft:
# 1820 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: It looks like both MAXIE and\n"
# 1821 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE have gone away somewhere.\p"
# 1822 "data/maps/SootopolisCity/scripts.pory"
	.string "Perhaps they've gone to MT. PYRE to\n"
# 1823 "data/maps/SootopolisCity/scripts.pory"
	.string "return those ORBS…$"
# 1824 "data/maps/SootopolisCity/scripts.pory"

# 1825 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar:
# 1826 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: Oh?\n"
# 1827 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}?\p"
# 1828 "data/maps/SootopolisCity/scripts.pory"
	.string "Haven't you scaled the SKY PILLAR\n"
# 1829 "data/maps/SootopolisCity/scripts.pory"
	.string "yet?\p"
# 1830 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you can make it to\n"
# 1831 "data/maps/SootopolisCity/scripts.pory"
	.string "the top of the SKY PILLAR…$"
# 1832 "data/maps/SootopolisCity/scripts.pory"

# 1833 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AquaMagmaDidntMeanHarm:
# 1834 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 1835 "data/maps/SootopolisCity/scripts.pory"
	.string "The leaders of TEAM MAGMA and AQUA,\n"
# 1836 "data/maps/SootopolisCity/scripts.pory"
	.string "I don't think they meant harm.\p"
# 1837 "data/maps/SootopolisCity/scripts.pory"
	.string "It wouldn't hurt to hear what they\n"
# 1838 "data/maps/SootopolisCity/scripts.pory"
	.string "have to say for themselves.$"
# 1839 "data/maps/SootopolisCity/scripts.pory"

# 1840 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThankYouForHelpAcceptThis:
# 1841 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\n"
# 1842 "data/maps/SootopolisCity/scripts.pory"
	.string "My eyes didn't deceive me.\p"
# 1843 "data/maps/SootopolisCity/scripts.pory"
	.string "Thanks to your help, SOOTOPOLIS…\n"
# 1844 "data/maps/SootopolisCity/scripts.pory"
	.string "No, all of HOENN was saved.\p"
# 1845 "data/maps/SootopolisCity/scripts.pory"
	.string "On behalf of the people, I thank you.\p"
# 1846 "data/maps/SootopolisCity/scripts.pory"
	.string "This is a gift from me.\n"
# 1847 "data/maps/SootopolisCity/scripts.pory"
	.string "Please accept it.$"
# 1848 "data/maps/SootopolisCity/scripts.pory"

# 1849 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ExplainWaterfallGoToGym:
# 1850 "data/maps/SootopolisCity/scripts.pory"
	.string "That HIDDEN MACHINE contains\n"
# 1851 "data/maps/SootopolisCity/scripts.pory"
	.string "WATERFALL.\p"
# 1852 "data/maps/SootopolisCity/scripts.pory"
	.string "If you have the RAIN BADGE, a POKéMON\n"
# 1853 "data/maps/SootopolisCity/scripts.pory"
	.string "that has learned that HM move can\l"
# 1854 "data/maps/SootopolisCity/scripts.pory"
	.string "force its way up waterfalls.\p"
# 1855 "data/maps/SootopolisCity/scripts.pory"
	.string "And where does one get the RAIN BADGE?\n"
# 1856 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, don't you?\p"
# 1857 "data/maps/SootopolisCity/scripts.pory"
	.string "That's right! You have to beat\n"
# 1858 "data/maps/SootopolisCity/scripts.pory"
	.string "the SOOTOPOLIS GYM LEADER.\p"
# 1859 "data/maps/SootopolisCity/scripts.pory"
	.string "When you're all set to go, step through\n"
# 1860 "data/maps/SootopolisCity/scripts.pory"
	.string "that door.$"
# 1861 "data/maps/SootopolisCity/scripts.pory"

# 1862 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DazzledByMentor:
# 1863 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: I'm sure that you will be\n"
# 1864 "data/maps/SootopolisCity/scripts.pory"
	.string "dazzled by my mentor's breathtakingly\l"
# 1865 "data/maps/SootopolisCity/scripts.pory"
	.string "elegant battle style.$"
