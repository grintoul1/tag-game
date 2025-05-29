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
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 31 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockGymDoor
# 32 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_EventScript_LegendariesNotArrived
# 33 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockHouseDoors
# 34 "data/maps/SootopolisCity/scripts.pory"
	end
# 35 "data/maps/SootopolisCity/scripts.pory"

# 36 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesNotArrived::
# 37 "data/maps/SootopolisCity/scripts.pory"
	end
# 38 "data/maps/SootopolisCity/scripts.pory"

# 39 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockHouseDoors::
# 40 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 41 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 42 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
# 43 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 44 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 8, 35, METATILE_Sootopolis_Door_Closed, TRUE
# 45 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
# 46 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 45, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 47 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 48, 25, METATILE_Sootopolis_Door_Closed, TRUE
# 48 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 49 "data/maps/SootopolisCity/scripts.pory"
	return
# 50 "data/maps/SootopolisCity/scripts.pory"

# 51 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockGymDoor::
# 52 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
# 53 "data/maps/SootopolisCity/scripts.pory"
	return
# 54 "data/maps/SootopolisCity/scripts.pory"

# 55 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition:
# 56 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 57 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 58 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 59 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 60 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 61 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWeather
# 62 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetLayout
# 63 "data/maps/SootopolisCity/scripts.pory"
	call_if_lt VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetArchieMaxiePos
# 64 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetStevenPos
# 65 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetStevenPos
# 66 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetBattleSpectators
# 67 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetBattleSpectators
# 68 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetBattleSpectators
# 69 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetBattleSpectators
# 70 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetBattleSpectators
# 71 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 72 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 73 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
# 74 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetOutsideGymObjPos
# 75 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetExpertBlockCaveEntrance
# 76 "data/maps/SootopolisCity/scripts.pory"
	end
# 77 "data/maps/SootopolisCity/scripts.pory"

# 78 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetArchieMaxiePos::
# 79 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SootopolisCity_EventScript_ArchieDefeatedPos
# 80 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SootopolisCity_EventScript_MaxieDefeatedPos
# 81 "data/maps/SootopolisCity/scripts.pory"
	return
# 82 "data/maps/SootopolisCity/scripts.pory"

# 83 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetStevenPos::
# 84 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 31, 33
# 85 "data/maps/SootopolisCity/scripts.pory"
	return
# 86 "data/maps/SootopolisCity/scripts.pory"

# 87 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieDefeatedPos::
# 88 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 89 "data/maps/SootopolisCity/scripts.pory"
	return
# 90 "data/maps/SootopolisCity/scripts.pory"

# 91 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieDefeatedPos::
# 92 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 93 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 31, 33
# 94 "data/maps/SootopolisCity/scripts.pory"
	return
# 95 "data/maps/SootopolisCity/scripts.pory"

# 96 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_HideMapNamePopup::
# 97 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 98 "data/maps/SootopolisCity/scripts.pory"
	return
# 99 "data/maps/SootopolisCity/scripts.pory"

# 100 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetBattleSpectators::
# 101 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 102 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_BOY_1, 46, 32
# 103 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_BOY_2, 19, 36
# 104 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 20, 35
# 105 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_NINJA_BOY, 48, 41
# 106 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WOMAN_1, 45, 43
# 107 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 108 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 109 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 110 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
# 111 "data/maps/SootopolisCity/scripts.pory"
	return
# 112 "data/maps/SootopolisCity/scripts.pory"

# 113 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout::
# 114 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalLayout
# 115 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalLayout
# 116 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 117 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetLegendariesLayout
# 118 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetLegendariesLayout
# 119 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetLegendariesLayout
# 120 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 121 "data/maps/SootopolisCity/scripts.pory"
	return
# 122 "data/maps/SootopolisCity/scripts.pory"

# 123 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalLayout::
# 124 "data/maps/SootopolisCity/scripts.pory"
	return
# 125 "data/maps/SootopolisCity/scripts.pory"

# 126 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLegendariesLayout::
# 127 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
# 128 "data/maps/SootopolisCity/scripts.pory"
	return
# 129 "data/maps/SootopolisCity/scripts.pory"

# 130 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather::
# 131 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalWeather
# 132 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalWeather
# 133 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 134 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 135 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, Common_EventScript_SetAbnormalWeather
# 136 "data/maps/SootopolisCity/scripts.pory"
	return
# 137 "data/maps/SootopolisCity/scripts.pory"

# 138 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalWeather::
# 139 "data/maps/SootopolisCity/scripts.pory"
	return
# 140 "data/maps/SootopolisCity/scripts.pory"

# 141 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetDownpour::
# 142 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 143 "data/maps/SootopolisCity/scripts.pory"
	return
# 144 "data/maps/SootopolisCity/scripts.pory"

# 145 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
# 146 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
# 147 "data/maps/SootopolisCity/scripts.pory"
	return
# 148 "data/maps/SootopolisCity/scripts.pory"

# 149 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
# 150 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 151 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 32, 18
# 152 "data/maps/SootopolisCity/scripts.pory"
	return
# 153 "data/maps/SootopolisCity/scripts.pory"

# 154 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
# 155 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 156 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 18
# 157 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 32, 18
# 158 "data/maps/SootopolisCity/scripts.pory"
	end
# 159 "data/maps/SootopolisCity/scripts.pory"

# 160 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos::
# 161 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
# 162 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 29, 33
# 163 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 33, 35
# 164 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 34, 35
# 165 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 0, SootopolisCity_EventScript_SetWallaceMiddle
# 166 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 1, SootopolisCity_EventScript_SetWallaceRight
# 167 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 2, SootopolisCity_EventScript_SetWallaceLeft
# 168 "data/maps/SootopolisCity/scripts.pory"
	return
# 169 "data/maps/SootopolisCity/scripts.pory"

# 170 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceMiddle::
# 171 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 33
# 172 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 173 "data/maps/SootopolisCity/scripts.pory"
	return
# 174 "data/maps/SootopolisCity/scripts.pory"

# 175 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceRight::
# 176 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 32, 33
# 177 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 178 "data/maps/SootopolisCity/scripts.pory"
	return
# 179 "data/maps/SootopolisCity/scripts.pory"

# 180 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceLeft::
# 181 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 30, 33
# 182 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 183 "data/maps/SootopolisCity/scripts.pory"
	return
# 184 "data/maps/SootopolisCity/scripts.pory"

# 185 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
# 186 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
# 187 "data/maps/SootopolisCity/scripts.pory"
	return
# 188 "data/maps/SootopolisCity/scripts.pory"

# 189 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnWarp:
# 190 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
# 191 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 192 "data/maps/SootopolisCity/scripts.pory"

# 193 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries::
# 194 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_PlayerFaceLegendaries1
# 195 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 2, SootopolisCity_EventScript_PlayerFaceLegendaries2
# 196 "data/maps/SootopolisCity/scripts.pory"
	end
# 197 "data/maps/SootopolisCity/scripts.pory"

# 198 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 199 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 200 "data/maps/SootopolisCity/scripts.pory"
	return
# 201 "data/maps/SootopolisCity/scripts.pory"

# 202 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 203 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 204 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 205 "data/maps/SootopolisCity/scripts.pory"
	return
# 206 "data/maps/SootopolisCity/scripts.pory"

# 207 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnResume:
# 208 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 209 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 210 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
# 211 "data/maps/SootopolisCity/scripts.pory"
	end
# 212 "data/maps/SootopolisCity/scripts.pory"

# 213 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnFrame:
# 214 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 215 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
# 216 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 217 "data/maps/SootopolisCity/scripts.pory"

# 218 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 219 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 220 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 221 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 222 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
# 223 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
# 224 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 225 "data/maps/SootopolisCity/scripts.pory"
	end
# 226 "data/maps/SootopolisCity/scripts.pory"

# 227 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 228 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 229 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 230 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 231 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 232 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 233 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 234 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 235 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 236 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 237 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 238 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 239 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 240 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 241 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 242 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 243 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 244 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 245 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 246 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 247 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 248 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 249 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 250 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 251 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 252 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 253 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 254 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 255 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 256 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 257 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 258 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 259 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 260 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 261 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 262 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 263 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 264 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 265 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 266 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 267 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 268 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 269 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 270 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 271 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 272 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 273 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 274 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 275 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 276 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 277 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 278 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 279 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 280 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 281 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 282 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 283 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 284 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 285 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 286 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 287 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 288 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 289 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 290 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 291 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 292 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 293 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 294 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 295 "data/maps/SootopolisCity/scripts.pory"
	end
# 296 "data/maps/SootopolisCity/scripts.pory"

# 297 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter:
# 298 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 299 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 300 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 301 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 302 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 303 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 304 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 305 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 306 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 308 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 309 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 310 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 311 "data/maps/SootopolisCity/scripts.pory"

# 312 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter:
# 313 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 314 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 315 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 316 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 317 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 318 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 319 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 320 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 321 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 322 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 323 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 324 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 325 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 326 "data/maps/SootopolisCity/scripts.pory"

# 327 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 328 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 329 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 330 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 331 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 332 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 333 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 334 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 335 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 336 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 337 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 338 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 339 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 340 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 341 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 342 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 343 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 344 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 345 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 346 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 347 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 348 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 350 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 351 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 352 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 353 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 354 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 355 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 356 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 357 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 358 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 359 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 360 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 361 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 362 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 363 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 364 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 365 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 366 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 367 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 368 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 369 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 370 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 371 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 372 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 373 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 374 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 375 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 376 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 377 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 378 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 379 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 380 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 381 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 382 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 383 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 384 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 385 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 386 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 387 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 388 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 389 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 390 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 391 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 392 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 393 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 394 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 395 "data/maps/SootopolisCity/scripts.pory"
	end
# 396 "data/maps/SootopolisCity/scripts.pory"

# 397 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive:
# 398 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 399 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 400 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 401 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 402 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 403 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 404 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 405 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 406 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 407 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 408 "data/maps/SootopolisCity/scripts.pory"

# 409 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive:
# 410 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 411 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 412 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 413 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 414 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 415 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 416 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 417 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 418 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 419 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 420 "data/maps/SootopolisCity/scripts.pory"

# 421 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 422 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 423 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 424 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 425 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 426 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 427 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 428 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 429 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 430 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 431 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 432 "data/maps/SootopolisCity/scripts.pory"

# 433 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend:
# 434 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 435 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 436 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 437 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 438 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 439 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 440 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 441 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 442 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 443 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 444 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 445 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 446 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 447 "data/maps/SootopolisCity/scripts.pory"

# 448 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack:
# 449 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 450 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 451 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 452 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 453 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 454 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 455 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 456 "data/maps/SootopolisCity/scripts.pory"

# 457 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle:
# 458 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 459 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 460 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 461 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 462 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 463 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 464 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 465 "data/maps/SootopolisCity/scripts.pory"

# 466 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack:
# 467 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 468 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 469 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 470 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 471 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 472 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 473 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 474 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 475 "data/maps/SootopolisCity/scripts.pory"

# 476 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 477 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 478 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 479 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 480 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 481 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 482 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 483 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 484 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 485 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 486 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 487 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 488 "data/maps/SootopolisCity/scripts.pory"

# 489 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack:
# 490 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 491 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 492 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 493 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 494 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 495 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 496 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 497 "data/maps/SootopolisCity/scripts.pory"

# 498 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle:
# 499 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 500 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 501 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 502 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 503 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 504 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 505 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 506 "data/maps/SootopolisCity/scripts.pory"

# 507 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 508 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 509 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 510 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 511 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
# 512 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
# 513 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 514 "data/maps/SootopolisCity/scripts.pory"
	end
# 515 "data/maps/SootopolisCity/scripts.pory"

# 516 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 517 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 518 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 519 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 520 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 522 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 523 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 524 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 525 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 526 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 527 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 528 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_RAYQUAZA, MAP_SOOTOPOLIS_CITY
# 529 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 530 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 531 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 532 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 533 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 534 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 535 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 537 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 538 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 539 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 540 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 541 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 542 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 543 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 544 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 545 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 546 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 547 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 548 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 549 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 550 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 551 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 552 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 553 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 554 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 555 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 556 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 557 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 558 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 559 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 560 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 561 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 562 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 563 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 564 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 565 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 566 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 43, 32
# 567 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 568 "data/maps/SootopolisCity/scripts.pory"
	end
# 569 "data/maps/SootopolisCity/scripts.pory"

# 570 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 571 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 572 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 573 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 574 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 575 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 576 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 577 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 578 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 579 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 580 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 581 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 582 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 583 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 584 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 585 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 586 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 587 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 588 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 589 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 590 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 591 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 592 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 593 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 594 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 595 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 596 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 597 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 598 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 599 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 600 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 601 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 602 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 603 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 604 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 605 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 606 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 607 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 608 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 609 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 611 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 612 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 613 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 614 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
# 615 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 616 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SURF
# 617 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 618 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 619 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 29, 53
# 620 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 621 "data/maps/SootopolisCity/scripts.pory"
	end
# 622 "data/maps/SootopolisCity/scripts.pory"

# 623 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 624 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 625 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 626 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 627 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 628 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 629 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 630 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 631 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 632 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 633 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 634 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 635 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 636 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 637 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 638 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 639 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 640 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 641 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 642 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 643 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 644 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 645 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 646 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 647 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 648 "data/maps/SootopolisCity/scripts.pory"
	return
# 649 "data/maps/SootopolisCity/scripts.pory"

# 650 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 651 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 652 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 653 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 654 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 655 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 656 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 657 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 658 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 659 "data/maps/SootopolisCity/scripts.pory"

# 660 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 661 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 662 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 663 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 664 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 665 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 666 "data/maps/SootopolisCity/scripts.pory"

# 667 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 668 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 669 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 670 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 671 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 672 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 673 "data/maps/SootopolisCity/scripts.pory"

# 674 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 675 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 676 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 677 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 678 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 679 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 680 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 681 "data/maps/SootopolisCity/scripts.pory"

# 682 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 683 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 684 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 685 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 686 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 687 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 688 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 689 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 690 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 691 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 692 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 693 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 694 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 695 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 696 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 697 "data/maps/SootopolisCity/scripts.pory"

# 698 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 699 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 700 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 701 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 702 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 703 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 704 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 705 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 706 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 707 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 708 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 709 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 710 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 711 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 712 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 713 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 714 "data/maps/SootopolisCity/scripts.pory"

# 715 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 716 "data/maps/SootopolisCity/scripts.pory"
	lock
# 717 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 718 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ExpertPostLegendaries
# 719 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ExpertLegendaries
# 720 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
# 721 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 722 "data/maps/SootopolisCity/scripts.pory"
	release
# 723 "data/maps/SootopolisCity/scripts.pory"
	end
# 724 "data/maps/SootopolisCity/scripts.pory"

# 725 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 726 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 727 "data/maps/SootopolisCity/scripts.pory"
	release
# 728 "data/maps/SootopolisCity/scripts.pory"
	end
# 729 "data/maps/SootopolisCity/scripts.pory"

# 730 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 731 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 732 "data/maps/SootopolisCity/scripts.pory"
	release
# 733 "data/maps/SootopolisCity/scripts.pory"
	end
# 734 "data/maps/SootopolisCity/scripts.pory"

# 735 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 736 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 737 "data/maps/SootopolisCity/scripts.pory"
	release
# 738 "data/maps/SootopolisCity/scripts.pory"
	end
# 739 "data/maps/SootopolisCity/scripts.pory"

# 740 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 741 "data/maps/SootopolisCity/scripts.pory"
	lock
# 742 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 743 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
# 744 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_KiriGiveBerry
# 745 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_KiriRayquaza
# 746 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 747 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 748 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 749 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 750 "data/maps/SootopolisCity/scripts.pory"
	release
# 751 "data/maps/SootopolisCity/scripts.pory"
	end
# 752 "data/maps/SootopolisCity/scripts.pory"

# 753 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 754 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 755 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 756 "data/maps/SootopolisCity/scripts.pory"
	release
# 757 "data/maps/SootopolisCity/scripts.pory"
	end
# 758 "data/maps/SootopolisCity/scripts.pory"

# 759 "data/maps/SootopolisCity/scripts.pory"
@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
# 760 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 761 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 762 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 763 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
# 764 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 765 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 766 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 767 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 768 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 769 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 770 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 771 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 772 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 773 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
# 774 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
# 775 "data/maps/SootopolisCity/scripts.pory"
	end
# 776 "data/maps/SootopolisCity/scripts.pory"

# 777 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 778 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 779 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 780 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 781 "data/maps/SootopolisCity/scripts.pory"
	release
# 782 "data/maps/SootopolisCity/scripts.pory"
	end
# 783 "data/maps/SootopolisCity/scripts.pory"

# 784 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry::
# 785 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 786 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 787 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 788 "data/maps/SootopolisCity/scripts.pory"
	release
# 789 "data/maps/SootopolisCity/scripts.pory"
	end
# 790 "data/maps/SootopolisCity/scripts.pory"

# 791 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 792 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 793 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 794 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 795 "data/maps/SootopolisCity/scripts.pory"
	release
# 796 "data/maps/SootopolisCity/scripts.pory"
	end
# 797 "data/maps/SootopolisCity/scripts.pory"

# 798 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 799 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 800 "data/maps/SootopolisCity/scripts.pory"
	release
# 801 "data/maps/SootopolisCity/scripts.pory"
	end
# 802 "data/maps/SootopolisCity/scripts.pory"

# 803 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 804 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 805 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FacePlayer
# 806 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 807 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman2Rayquaza
# 808 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 809 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 810 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FaceOriginalDirection
# 811 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 813 "data/maps/SootopolisCity/scripts.pory"
	end
# 814 "data/maps/SootopolisCity/scripts.pory"

# 815 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 816 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 817 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 818 "data/maps/SootopolisCity/scripts.pory"
	end
# 819 "data/maps/SootopolisCity/scripts.pory"

# 820 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 821 "data/maps/SootopolisCity/scripts.pory"
	lock
# 822 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 823 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ManPostLegendaries
# 824 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 825 "data/maps/SootopolisCity/scripts.pory"
	release
# 826 "data/maps/SootopolisCity/scripts.pory"
	end
# 827 "data/maps/SootopolisCity/scripts.pory"

# 828 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 829 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 830 "data/maps/SootopolisCity/scripts.pory"
	release
# 831 "data/maps/SootopolisCity/scripts.pory"
	end
# 832 "data/maps/SootopolisCity/scripts.pory"

# 833 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 834 "data/maps/SootopolisCity/scripts.pory"
	lock
# 835 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 836 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Woman1PostLegendaries
# 837 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman1Rayquaza
# 838 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
# 839 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 840 "data/maps/SootopolisCity/scripts.pory"
	release
# 841 "data/maps/SootopolisCity/scripts.pory"
	end
# 842 "data/maps/SootopolisCity/scripts.pory"

# 843 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 844 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 845 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 846 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 847 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 848 "data/maps/SootopolisCity/scripts.pory"
	release
# 849 "data/maps/SootopolisCity/scripts.pory"
	end
# 850 "data/maps/SootopolisCity/scripts.pory"

# 851 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 852 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 853 "data/maps/SootopolisCity/scripts.pory"
	release
# 854 "data/maps/SootopolisCity/scripts.pory"
	end
# 855 "data/maps/SootopolisCity/scripts.pory"

# 856 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 857 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 858 "data/maps/SootopolisCity/scripts.pory"
	release
# 859 "data/maps/SootopolisCity/scripts.pory"
	end
# 860 "data/maps/SootopolisCity/scripts.pory"

# 861 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 862 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 863 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FacePlayer
# 864 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 865 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NinjaBoyRayquaza
# 866 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_NinjaBoyNormal
# 867 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
# 868 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 869 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 870 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 871 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 872 "data/maps/SootopolisCity/scripts.pory"
	release
# 873 "data/maps/SootopolisCity/scripts.pory"
	end
# 874 "data/maps/SootopolisCity/scripts.pory"

# 875 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 876 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 877 "data/maps/SootopolisCity/scripts.pory"
	release
# 878 "data/maps/SootopolisCity/scripts.pory"
	end
# 879 "data/maps/SootopolisCity/scripts.pory"

# 880 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 881 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 882 "data/maps/SootopolisCity/scripts.pory"
	release
# 883 "data/maps/SootopolisCity/scripts.pory"
	end
# 884 "data/maps/SootopolisCity/scripts.pory"

# 885 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 886 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 887 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FacePlayer
# 888 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 889 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy1Rayquaza
# 890 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
# 891 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Boy1Normal
# 892 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
# 893 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 894 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 895 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FaceOriginalDirection
# 896 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 897 "data/maps/SootopolisCity/scripts.pory"
	release
# 898 "data/maps/SootopolisCity/scripts.pory"
	end
# 899 "data/maps/SootopolisCity/scripts.pory"

# 900 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 901 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 902 "data/maps/SootopolisCity/scripts.pory"
	release
# 903 "data/maps/SootopolisCity/scripts.pory"
	end
# 904 "data/maps/SootopolisCity/scripts.pory"

# 905 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 906 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 907 "data/maps/SootopolisCity/scripts.pory"
	release
# 908 "data/maps/SootopolisCity/scripts.pory"
	end
# 909 "data/maps/SootopolisCity/scripts.pory"

# 910 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 911 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 912 "data/maps/SootopolisCity/scripts.pory"
	release
# 913 "data/maps/SootopolisCity/scripts.pory"
	end
# 914 "data/maps/SootopolisCity/scripts.pory"

# 915 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 916 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 917 "data/maps/SootopolisCity/scripts.pory"
	end
# 918 "data/maps/SootopolisCity/scripts.pory"

# 919 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 920 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 921 "data/maps/SootopolisCity/scripts.pory"
	end
# 922 "data/maps/SootopolisCity/scripts.pory"

# 923 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 924 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 925 "data/maps/SootopolisCity/scripts.pory"
	end
# 926 "data/maps/SootopolisCity/scripts.pory"

# 927 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven::
# 928 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 929 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
# 930 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 931 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
# 932 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StevenHelpWallace
# 933 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_StevenHelpedWallace
# 934 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_StevenHelpedWallace
# 935 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_StevenMaxieArchieLeft
# 936 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
# 937 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 938 "data/maps/SootopolisCity/scripts.pory"
	end
# 939 "data/maps/SootopolisCity/scripts.pory"

# 940 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpWallace::
# 941 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
# 942 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 943 "data/maps/SootopolisCity/scripts.pory"
	end
# 944 "data/maps/SootopolisCity/scripts.pory"

# 945 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 946 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
# 947 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 948 "data/maps/SootopolisCity/scripts.pory"
	end
# 949 "data/maps/SootopolisCity/scripts.pory"

# 950 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpedWallace::
# 951 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
# 952 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 953 "data/maps/SootopolisCity/scripts.pory"
	end
# 954 "data/maps/SootopolisCity/scripts.pory"

# 955 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 956 "data/maps/SootopolisCity/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 957 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_TEMP_3, 21, SootopolisCity_EventScript_EmmieApproachSteven
# 958 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 959 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 960 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
# 961 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
# 962 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 963 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 964 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 965 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 966 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieWalkToCaveOfOrigin
# 967 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 968 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 969 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 970 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 971 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 972 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 973 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieArriveCaveEntrance
# 974 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 975 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 976 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 977 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 978 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 979 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 980 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 981 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_LEADERS
# 982 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 983 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 984 "data/maps/SootopolisCity/scripts.pory"
	end
# 985 "data/maps/SootopolisCity/scripts.pory"

# 986 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 987 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 988 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 989 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 990 "data/maps/SootopolisCity/scripts.pory"
	return
# 991 "data/maps/SootopolisCity/scripts.pory"

# 992 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 993 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 994 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 995 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieStartWalkToCaveOfOriginNorth
# 996 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 997 "data/maps/SootopolisCity/scripts.pory"
	return
# 998 "data/maps/SootopolisCity/scripts.pory"

# 999 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_EmmieApproachSteven::
# 1000 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieApproachSteven
# 1001 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1002 "data/maps/SootopolisCity/scripts.pory"
	return
# 1003 "data/maps/SootopolisCity/scripts.pory"

# 1004 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieApproachSteven:
# 1005 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1006 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1007 "data/maps/SootopolisCity/scripts.pory"
	face_up
# 1008 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1009 "data/maps/SootopolisCity/scripts.pory"

# 1010 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 1011 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1012 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1013 "data/maps/SootopolisCity/scripts.pory"
	walk_right
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
	walk_up
# 1023 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1024 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1025 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1026 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1027 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1028 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1029 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1030 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1031 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1032 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1033 "data/maps/SootopolisCity/scripts.pory"
	walk_left
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
	walk_up
# 1042 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1043 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1044 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1045 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1046 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1047 "data/maps/SootopolisCity/scripts.pory"

# 1048 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 1049 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1050 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1051 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1052 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1053 "data/maps/SootopolisCity/scripts.pory"
	walk_right
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
	walk_left
# 1066 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1067 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1068 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1069 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1070 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1071 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1072 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1073 "data/maps/SootopolisCity/scripts.pory"
	walk_left
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
	step_end
# 1085 "data/maps/SootopolisCity/scripts.pory"

# 1086 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 1087 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1088 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1089 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1090 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1091 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1092 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1093 "data/maps/SootopolisCity/scripts.pory"
	walk_up
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
	walk_left
# 1103 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1104 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1105 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1106 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1107 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1108 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1109 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1110 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1111 "data/maps/SootopolisCity/scripts.pory"
	walk_up
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
	step_end
# 1122 "data/maps/SootopolisCity/scripts.pory"

# 1123 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieStartWalkToCaveOfOriginNorth:
# 1124 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1125 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1126 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1127 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1128 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1129 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1130 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1131 "data/maps/SootopolisCity/scripts.pory"
	walk_up
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
	walk_left
# 1141 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1142 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1143 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1144 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1145 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1146 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1147 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1148 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1149 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1150 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1151 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1152 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1153 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1154 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1155 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1156 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1157 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1158 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1159 "data/maps/SootopolisCity/scripts.pory"

# 1160 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 1161 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1162 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1163 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1164 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1165 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1166 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1167 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1168 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1169 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1170 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1171 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1172 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1173 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1174 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1175 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1176 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1177 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1178 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1179 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1180 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1181 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1182 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1183 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1184 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1185 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1186 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1187 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1188 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1189 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1190 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1191 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1192 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1193 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1194 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1195 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1196 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1197 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1198 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1199 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1200 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1201 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1202 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1203 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1204 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1205 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1206 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1207 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1208 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1209 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1210 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1211 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 1212 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1213 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1214 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1215 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1216 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1217 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1218 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1219 "data/maps/SootopolisCity/scripts.pory"

# 1220 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 1221 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1222 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1223 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1224 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1225 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1226 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1227 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1228 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1229 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1230 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1231 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1232 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1233 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1234 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1235 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1236 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1237 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1238 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1239 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1240 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1241 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1242 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1243 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1244 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1245 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1246 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1247 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1248 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1249 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1250 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1251 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1252 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1253 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1254 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1255 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1256 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1257 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1258 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1259 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1260 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1261 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1262 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1263 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1264 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1265 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1266 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1267 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1268 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1269 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1270 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1271 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1272 "data/maps/SootopolisCity/scripts.pory"

# 1273 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieWalkToCaveOfOrigin:
# 1274 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1275 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1276 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1277 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1278 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1279 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1280 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1281 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1282 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1283 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1284 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1285 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1286 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1287 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1288 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1289 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1290 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1291 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1292 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1293 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1294 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1295 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1296 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1297 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1298 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1299 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1300 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1301 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1302 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1303 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1304 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1305 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1306 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1307 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1308 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1309 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1310 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1311 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1312 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1313 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1314 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1315 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1316 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1317 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1318 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1319 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1320 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1321 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1322 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1323 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1324 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1325 "data/maps/SootopolisCity/scripts.pory"

# 1326 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 1327 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 1328 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1329 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1330 "data/maps/SootopolisCity/scripts.pory"

# 1331 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 1332 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1333 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1334 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1335 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1336 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1337 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1338 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1339 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1340 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1341 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1342 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1343 "data/maps/SootopolisCity/scripts.pory"

# 1344 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 1345 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1346 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1347 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1348 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1349 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1350 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1351 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1352 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1353 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1354 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1355 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1356 "data/maps/SootopolisCity/scripts.pory"

# 1357 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieArriveCaveEntrance:
# 1358 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1359 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1360 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1361 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1362 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1363 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1364 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1365 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1366 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1367 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1368 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1369 "data/maps/SootopolisCity/scripts.pory"

# 1370 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 1371 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1372 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1373 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1374 "data/maps/SootopolisCity/scripts.pory"

# 1375 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 1376 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1377 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FacePlayer
# 1378 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1379 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy2Rayquaza
# 1380 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 1381 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1382 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FaceOriginalDirection
# 1383 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1384 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1385 "data/maps/SootopolisCity/scripts.pory"
	end
# 1386 "data/maps/SootopolisCity/scripts.pory"

# 1387 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 1388 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 1389 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1390 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1391 "data/maps/SootopolisCity/scripts.pory"
	end
# 1392 "data/maps/SootopolisCity/scripts.pory"

# 1393 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 1394 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1395 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_BlackBeltRayquaza
# 1396 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 1397 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1398 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1399 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1400 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 1401 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1402 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 1403 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1404 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1405 "data/maps/SootopolisCity/scripts.pory"
	end
# 1406 "data/maps/SootopolisCity/scripts.pory"

# 1407 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 1408 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1409 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1410 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 1411 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1412 "data/maps/SootopolisCity/scripts.pory"
	end
# 1413 "data/maps/SootopolisCity/scripts.pory"

# 1414 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 1415 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1416 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FacePlayer
# 1417 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1418 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GirlRayquaza
# 1419 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 1420 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1421 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FaceOriginalDirection
# 1422 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1423 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1424 "data/maps/SootopolisCity/scripts.pory"
	end
# 1425 "data/maps/SootopolisCity/scripts.pory"

# 1426 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 1427 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 1428 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1429 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1430 "data/maps/SootopolisCity/scripts.pory"
	end
# 1431 "data/maps/SootopolisCity/scripts.pory"

# 1432 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 1433 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1434 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FacePlayer
# 1435 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1436 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ManiacRayquaza
# 1437 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 1438 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1439 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FaceOriginalDirection
# 1440 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1441 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1442 "data/maps/SootopolisCity/scripts.pory"
	end
# 1443 "data/maps/SootopolisCity/scripts.pory"

# 1444 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 1445 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 1446 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1447 "data/maps/SootopolisCity/scripts.pory"
	end
# 1448 "data/maps/SootopolisCity/scripts.pory"

# 1449 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 1450 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1451 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1452 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_GoToSkyPillar
# 1453 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_GoToGym
# 1454 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_GiveWaterfall
# 1455 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 1456 "data/maps/SootopolisCity/scripts.pory"
	release
# 1457 "data/maps/SootopolisCity/scripts.pory"
	end
# 1458 "data/maps/SootopolisCity/scripts.pory"

# 1459 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall::
# 1460 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 1461 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 1462 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 1463 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 1464 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1465 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_WallaceMoveFromGym
# 1466 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SootopolisCity_EventScript_WallaceMoveFromGym
# 1467 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_WallaceMoveFromGymWest
# 1468 "data/maps/SootopolisCity/scripts.pory"
	release
# 1469 "data/maps/SootopolisCity/scripts.pory"
	end
# 1470 "data/maps/SootopolisCity/scripts.pory"

# 1471 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGym::
# 1472 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 1473 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1474 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 1475 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 1476 "data/maps/SootopolisCity/scripts.pory"
	return
# 1477 "data/maps/SootopolisCity/scripts.pory"

# 1478 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 1479 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 1480 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1481 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_WALLACE
# 1482 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 1483 "data/maps/SootopolisCity/scripts.pory"
	return
# 1484 "data/maps/SootopolisCity/scripts.pory"

# 1485 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToSkyPillar::
# 1486 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 1487 "data/maps/SootopolisCity/scripts.pory"
	release
# 1488 "data/maps/SootopolisCity/scripts.pory"
	end
# 1489 "data/maps/SootopolisCity/scripts.pory"

# 1490 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToGym::
# 1491 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
# 1492 "data/maps/SootopolisCity/scripts.pory"
	release
# 1493 "data/maps/SootopolisCity/scripts.pory"
	end
# 1494 "data/maps/SootopolisCity/scripts.pory"

# 1495 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 1496 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1497 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1498 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1499 "data/maps/SootopolisCity/scripts.pory"

# 1500 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 1501 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1502 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1503 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1504 "data/maps/SootopolisCity/scripts.pory"

# 1505 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 1506 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1507 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_MaxieRayquaza
# 1508 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 1509 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1510 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1511 "data/maps/SootopolisCity/scripts.pory"
	end
# 1512 "data/maps/SootopolisCity/scripts.pory"

# 1513 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza::
# 1514 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_DEFAULT
# 1515 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1516 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1517 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1518 "data/maps/SootopolisCity/scripts.pory"
	end
# 1519 "data/maps/SootopolisCity/scripts.pory"

# 1520 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 1521 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1522 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ArchieRayquaza
# 1523 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 1524 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1525 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1526 "data/maps/SootopolisCity/scripts.pory"
	end
# 1527 "data/maps/SootopolisCity/scripts.pory"

# 1528 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza::
# 1529 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_DEFAULT
# 1530 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1531 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1532 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1533 "data/maps/SootopolisCity/scripts.pory"
	end
# 1534 "data/maps/SootopolisCity/scripts.pory"

# 1535 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieArchieLeave::
# 1536 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 1537 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 1538 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1539 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1540 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1541 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 1542 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 1543 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1544 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1545 "data/maps/SootopolisCity/scripts.pory"
	end
# 1546 "data/maps/SootopolisCity/scripts.pory"

# 1547 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1548 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 1549 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1550 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1551 "data/maps/SootopolisCity/scripts.pory"

# 1552 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1553 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 1554 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1555 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1556 "data/maps/SootopolisCity/scripts.pory"

# 1557 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign:
# 1558 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\n"
# 1559 "data/maps/SootopolisCity/scripts.pory"
	.string "Leader: JUAN\p"
# 1560 "data/maps/SootopolisCity/scripts.pory"
	.string "“The GYM LEADER with the beauty\n"
# 1561 "data/maps/SootopolisCity/scripts.pory"
	.string "of pure water!”$"
# 1562 "data/maps/SootopolisCity/scripts.pory"

# 1563 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign:
# 1564 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY\p"
# 1565 "data/maps/SootopolisCity/scripts.pory"
	.string "“The mystical city where history\n"
# 1566 "data/maps/SootopolisCity/scripts.pory"
	.string "slumbers.”$"
# 1567 "data/maps/SootopolisCity/scripts.pory"

# 1568 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed:
# 1569 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"
# 1570 "data/maps/SootopolisCity/scripts.pory"

# 1571 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere:
# 1572 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
# 1573 "data/maps/SootopolisCity/scripts.pory"
	.string "down stairs all the time…\p"
# 1574 "data/maps/SootopolisCity/scripts.pory"
	.string "If you live in this town, you end up\n"
# 1575 "data/maps/SootopolisCity/scripts.pory"
	.string "getting physically fit.$"
# 1576 "data/maps/SootopolisCity/scripts.pory"

# 1577 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
# 1578 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant POKéMON suddenly appeared\n"
# 1579 "data/maps/SootopolisCity/scripts.pory"
	.string "in the middle of the city!\p"
# 1580 "data/maps/SootopolisCity/scripts.pory"
	.string "And, I've never seen them before!\p"
# 1581 "data/maps/SootopolisCity/scripts.pory"
	.string "Why are they smashing into each\n"
# 1582 "data/maps/SootopolisCity/scripts.pory"
	.string "other like that?\p"
# 1583 "data/maps/SootopolisCity/scripts.pory"
	.string "Why can't they be friends, those\n"
# 1584 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 1585 "data/maps/SootopolisCity/scripts.pory"

# 1586 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon:
# 1587 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
# 1588 "data/maps/SootopolisCity/scripts.pory"
	.string "What is that green POKéMON?!$"
# 1589 "data/maps/SootopolisCity/scripts.pory"

# 1590 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo:
# 1591 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON and KYOGRE…\n"
# 1592 "data/maps/SootopolisCity/scripts.pory"
	.string "Where did they go?\p"
# 1593 "data/maps/SootopolisCity/scripts.pory"
	.string "Will they cause droughts or downpours\n"
# 1594 "data/maps/SootopolisCity/scripts.pory"
	.string "somewhere else?$"
# 1595 "data/maps/SootopolisCity/scripts.pory"

# 1596 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry:
# 1597 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
# 1598 "data/maps/SootopolisCity/scripts.pory"
	.string "the two POKéMON aren't angry.\p"
# 1599 "data/maps/SootopolisCity/scripts.pory"
	.string "I think… They probably can't control\n"
# 1600 "data/maps/SootopolisCity/scripts.pory"
	.string "their own power…$"
# 1601 "data/maps/SootopolisCity/scripts.pory"

# 1602 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage:
# 1603 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying POKéMON came down from\n"
# 1604 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky and stopped the rampaging\l"
# 1605 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON…$"
# 1606 "data/maps/SootopolisCity/scripts.pory"

# 1607 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike:
# 1608 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
# 1609 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder what the world is like on\n"
# 1610 "data/maps/SootopolisCity/scripts.pory"
	.string "the other side of this round sky?$"
# 1611 "data/maps/SootopolisCity/scripts.pory"

# 1612 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked:
# 1613 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1614 "data/maps/SootopolisCity/scripts.pory"
	.string "This is wicked!$"
# 1615 "data/maps/SootopolisCity/scripts.pory"

# 1616 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked:
# 1617 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1618 "data/maps/SootopolisCity/scripts.pory"
	.string "That was wicked!$"
# 1619 "data/maps/SootopolisCity/scripts.pory"

# 1620 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon:
# 1621 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red POKéMON!\n"
# 1622 "data/maps/SootopolisCity/scripts.pory"
	.string "Don't back off, blue POKéMON!$"
# 1623 "data/maps/SootopolisCity/scripts.pory"

# 1624 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames:
# 1625 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1626 "data/maps/SootopolisCity/scripts.pory"
	.string "Hi, do you know the names of those\n"
# 1627 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON fighting over there?$"
# 1628 "data/maps/SootopolisCity/scripts.pory"

# 1629 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings:
# 1630 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
# 1631 "data/maps/SootopolisCity/scripts.pory"
	.string "the red one or the blue one, but, oh no,\l"
# 1632 "data/maps/SootopolisCity/scripts.pory"
	.string "it's the green one that settles things!\p"
# 1633 "data/maps/SootopolisCity/scripts.pory"
	.string "Talk about a huge turn of events!$"
# 1634 "data/maps/SootopolisCity/scripts.pory"

# 1635 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes:
# 1636 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1637 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1638 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 1639 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I'm seeing that happen with\n"
# 1640 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1641 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1642 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1643 "data/maps/SootopolisCity/scripts.pory"

# 1644 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes:
# 1645 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1646 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1647 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 1648 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I saw that happen with\n"
# 1649 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1650 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1651 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1652 "data/maps/SootopolisCity/scripts.pory"

# 1653 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting:
# 1654 "data/maps/SootopolisCity/scripts.pory"
	.string "A big POKéMON is fighting with\n"
# 1655 "data/maps/SootopolisCity/scripts.pory"
	.string "another big POKéMON!\p"
# 1656 "data/maps/SootopolisCity/scripts.pory"
	.string "Please, someone make them stop!$"
# 1657 "data/maps/SootopolisCity/scripts.pory"

# 1658 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky:
# 1659 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty POKéMON came down from\n"
# 1660 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky…$"
# 1661 "data/maps/SootopolisCity/scripts.pory"

# 1662 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked:
# 1663 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
# 1664 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY will get wrecked!$"
# 1665 "data/maps/SootopolisCity/scripts.pory"

# 1666 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked:
# 1667 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY didn't get wrecked!$"
# 1668 "data/maps/SootopolisCity/scripts.pory"

# 1669 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist:
# 1670 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
# 1671 "data/maps/SootopolisCity/scripts.pory"
	.string "You've come all the way to SOOTOPOLIS?\l"
# 1672 "data/maps/SootopolisCity/scripts.pory"
	.string "You're no ordinary tourist.\p"
# 1673 "data/maps/SootopolisCity/scripts.pory"
	.string "But I suppose that doesn't make you\n"
# 1674 "data/maps/SootopolisCity/scripts.pory"
	.string "an extraordinary tourist, either.$"
# 1675 "data/maps/SootopolisCity/scripts.pory"

# 1676 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm:
# 1677 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"
# 1678 "data/maps/SootopolisCity/scripts.pory"

# 1679 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave:
# 1680 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
# 1681 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN.\p"
# 1682 "data/maps/SootopolisCity/scripts.pory"
	.string "The spirits of POKéMON, becalmed at\n"
# 1683 "data/maps/SootopolisCity/scripts.pory"
	.string "MT. PYRE, are said to be revived here.\p"
# 1684 "data/maps/SootopolisCity/scripts.pory"
	.string "Please leave.$"
# 1685 "data/maps/SootopolisCity/scripts.pory"

# 1686 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave:
# 1687 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
# 1688 "data/maps/SootopolisCity/scripts.pory"
	.string "superior talent…\p"
# 1689 "data/maps/SootopolisCity/scripts.pory"
	.string "A TRAINER who has knowledge and\n"
# 1690 "data/maps/SootopolisCity/scripts.pory"
	.string "experience of many kinds of POKéMON…\p"
# 1691 "data/maps/SootopolisCity/scripts.pory"
	.string "If such a person were to appear, I was\n"
# 1692 "data/maps/SootopolisCity/scripts.pory"
	.string "instructed by WALLACE to lead that\l"
# 1693 "data/maps/SootopolisCity/scripts.pory"
	.string "TRAINER to this CAVE.$"
# 1694 "data/maps/SootopolisCity/scripts.pory"

# 1695 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash:
# 1696 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
# 1697 "data/maps/SootopolisCity/scripts.pory"
	.string "The clash between the two awakened\n"
# 1698 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON was quelled by the awakening\l"
# 1699 "data/maps/SootopolisCity/scripts.pory"
	.string "of a third POKéMON…$"
# 1700 "data/maps/SootopolisCity/scripts.pory"

# 1701 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo:
# 1702 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN…\p"
# 1703 "data/maps/SootopolisCity/scripts.pory"
	.string "With the passing of the crisis,\n"
# 1704 "data/maps/SootopolisCity/scripts.pory"
	.string "the cave, too, shall sleep…$"
# 1705 "data/maps/SootopolisCity/scripts.pory"

# 1706 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful:
# 1707 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS sprang up as a town in\n"
# 1708 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano.\p"
# 1709 "data/maps/SootopolisCity/scripts.pory"
	.string "If you look up at the sky, the lip of\n"
# 1710 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater is also visible.\l"
# 1711 "data/maps/SootopolisCity/scripts.pory"
	.string "So, all you see is the sky in a circle.\p"
# 1712 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's what makes the sky above\n"
# 1713 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS the most beautiful.$"
# 1714 "data/maps/SootopolisCity/scripts.pory"

# 1715 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight:
# 1716 "data/maps/SootopolisCity/scripts.pory"
	.string "When two POKéMON that gigantic\n"
# 1717 "data/maps/SootopolisCity/scripts.pory"
	.string "are fighting that savagely, there's\l"
# 1718 "data/maps/SootopolisCity/scripts.pory"
	.string "not much that we can do.$"
# 1719 "data/maps/SootopolisCity/scripts.pory"

# 1720 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
# 1721 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third POKéMON flew down,\n"
# 1722 "data/maps/SootopolisCity/scripts.pory"
	.string "I feared the worst.$"
# 1723 "data/maps/SootopolisCity/scripts.pory"

# 1724 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery:
# 1725 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
# 1726 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano…\p"
# 1727 "data/maps/SootopolisCity/scripts.pory"
	.string "And in that ring, stars flicker and\n"
# 1728 "data/maps/SootopolisCity/scripts.pory"
	.string "blink as if they were alive…\l"
# 1729 "data/maps/SootopolisCity/scripts.pory"
	.string "It's my favorite scenery.$"
# 1730 "data/maps/SootopolisCity/scripts.pory"

# 1731 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild:
# 1732 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
# 1733 "data/maps/SootopolisCity/scripts.pory"
	.string "but…\p"
# 1734 "data/maps/SootopolisCity/scripts.pory"
	.string "All of a sudden, dark clouds brewed up,\n"
# 1735 "data/maps/SootopolisCity/scripts.pory"
	.string "rain started falling in sheets, and\l"
# 1736 "data/maps/SootopolisCity/scripts.pory"
	.string "there was thunder and lightning, too.\p"
# 1737 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather just went completely\n"
# 1738 "data/maps/SootopolisCity/scripts.pory"
	.string "wild!\p"
# 1739 "data/maps/SootopolisCity/scripts.pory"
	.string "Is all of this because of those\n"
# 1740 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 1741 "data/maps/SootopolisCity/scripts.pory"

# 1742 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon:
# 1743 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
# 1744 "data/maps/SootopolisCity/scripts.pory"
	.string "It was you who brought that flying\n"
# 1745 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON here?\p"
# 1746 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, aren't you amazing!$"
# 1747 "data/maps/SootopolisCity/scripts.pory"

# 1748 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GroudonPleaseStop:
# 1749 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: G… GROUDON…\n"
# 1750 "data/maps/SootopolisCity/scripts.pory"
	.string "Please! Stop what you're doing!\p"
# 1751 "data/maps/SootopolisCity/scripts.pory"
	.string "I know the extent of your power now!\p"
# 1752 "data/maps/SootopolisCity/scripts.pory"
	.string "If you keep going, all HOENN, not just\n"
# 1753 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS, will be utterly ruined!$"
# 1754 "data/maps/SootopolisCity/scripts.pory"

# 1755 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming:
# 1756 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: So the super-ancient POKéMON\n"
# 1757 "data/maps/SootopolisCity/scripts.pory"
	.string "weren't only GROUDON and KYOGRE…\p"
# 1758 "data/maps/SootopolisCity/scripts.pory"
	.string "After all our fruitless scheming and\n"
# 1759 "data/maps/SootopolisCity/scripts.pory"
	.string "frantic efforts, that one POKéMON's\l"
# 1760 "data/maps/SootopolisCity/scripts.pory"
	.string "simple action puts everything right\l"
# 1761 "data/maps/SootopolisCity/scripts.pory"
	.string "again as if nothing had happened…\p"
# 1762 "data/maps/SootopolisCity/scripts.pory"
	.string "Fu…\n"
# 1763 "data/maps/SootopolisCity/scripts.pory"
	.string "Fuhahaha…$"
# 1764 "data/maps/SootopolisCity/scripts.pory"

# 1765 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KyogreCalmDown:
# 1766 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE! What's wrong?!\n"
# 1767 "data/maps/SootopolisCity/scripts.pory"
	.string "Look over here! It's the RED ORB!\l"
# 1768 "data/maps/SootopolisCity/scripts.pory"
	.string "Calm down! KYOGRE!\p"
# 1769 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1770 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1771 "data/maps/SootopolisCity/scripts.pory"
	.string "It's no good!\n"
# 1772 "data/maps/SootopolisCity/scripts.pory"
	.string "It's not responding at all!$"
# 1773 "data/maps/SootopolisCity/scripts.pory"

# 1774 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon:
# 1775 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE and GROUDON both\n"
# 1776 "data/maps/SootopolisCity/scripts.pory"
	.string "flew off to who knows where.\p"
# 1777 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather in HOENN has returned\n"
# 1778 "data/maps/SootopolisCity/scripts.pory"
	.string "to its normal state…\p"
# 1779 "data/maps/SootopolisCity/scripts.pory"
	.string "Haha…\n"
# 1780 "data/maps/SootopolisCity/scripts.pory"
	.string "Hahaha…\p"
# 1781 "data/maps/SootopolisCity/scripts.pory"
	.string "Maybe what we were trying to do was\n"
# 1782 "data/maps/SootopolisCity/scripts.pory"
	.string "something small, even meaningless,\l"
# 1783 "data/maps/SootopolisCity/scripts.pory"
	.string "to POKéMON…$"
# 1784 "data/maps/SootopolisCity/scripts.pory"

# 1785 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_InvolvedWithCrisisComeWithMe:
# 1786 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Those POKéMON fighting…\n"
# 1787 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON… And KYOGRE…\p"
# 1788 "data/maps/SootopolisCity/scripts.pory"
	.string "The two super-ancient POKéMON\n"
# 1789 "data/maps/SootopolisCity/scripts.pory"
	.string "were awakened from a long sleep…\p"
# 1790 "data/maps/SootopolisCity/scripts.pory"
	.string "And now they are smashing each other\n"
# 1791 "data/maps/SootopolisCity/scripts.pory"
	.string "with their uncontrollable energy…\p"
# 1792 "data/maps/SootopolisCity/scripts.pory"
	.string "…{PLAYER}{KUN}.\p"
# 1793 "data/maps/SootopolisCity/scripts.pory"
	.string "You being here now I'll take to mean\n"
# 1794 "data/maps/SootopolisCity/scripts.pory"
	.string "that you're prepared to become\l"
# 1795 "data/maps/SootopolisCity/scripts.pory"
	.string "involved in this crisis.\p"
# 1796 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, then, there's someone that\n"
# 1797 "data/maps/SootopolisCity/scripts.pory"
	.string "I'd like you to meet.\p"
# 1798 "data/maps/SootopolisCity/scripts.pory"
	.string "Come with me, please.$"
# 1799 "data/maps/SootopolisCity/scripts.pory"

# 1800 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoesThisMakeYourFearPokemon:
# 1801 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Listen, {PLAYER}{KUN}.\p"
# 1802 "data/maps/SootopolisCity/scripts.pory"
	.string "Does seeing GROUDON and KYOGRE make\n"
# 1803 "data/maps/SootopolisCity/scripts.pory"
	.string "you think POKéMON are to be feared?\p"
# 1804 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's not true.\n"
# 1805 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON are really more…\p"
# 1806 "data/maps/SootopolisCity/scripts.pory"
	.string "…Why am I asking you this?\n"
# 1807 "data/maps/SootopolisCity/scripts.pory"
	.string "You already know.$"
# 1808 "data/maps/SootopolisCity/scripts.pory"

# 1809 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HereWereAreHelpWallace:
# 1810 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Okay, here we are!\p"
# 1811 "data/maps/SootopolisCity/scripts.pory"
	.string "Inside here you'll find someone named\n"
# 1812 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE.\p"
# 1813 "data/maps/SootopolisCity/scripts.pory"
	.string "I think you have what's needed to\n"
# 1814 "data/maps/SootopolisCity/scripts.pory"
	.string "help him…$"
# 1815 "data/maps/SootopolisCity/scripts.pory"

# 1816 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KnowWhatsNeededToHelpHim:
# 1817 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: I think you have what's\n"
# 1818 "data/maps/SootopolisCity/scripts.pory"
	.string "needed to help him…$"
# 1819 "data/maps/SootopolisCity/scripts.pory"

# 1820 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NeverBeenToSkyPillar:
# 1821 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: The SKY PILLAR…\p"
# 1822 "data/maps/SootopolisCity/scripts.pory"
	.string "I've never been there.\n"
# 1823 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder where it could be?$"
# 1824 "data/maps/SootopolisCity/scripts.pory"

# 1825 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SoThatsRayquaza:
# 1826 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: So that's RAYQUAZA…\p"
# 1827 "data/maps/SootopolisCity/scripts.pory"
	.string "It's incredible how the two rampaging\n"
# 1828 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON would flee from it in fear…$"
# 1829 "data/maps/SootopolisCity/scripts.pory"

# 1830 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_MaxieArchieLeft:
# 1831 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: It looks like both MAXIE and\n"
# 1832 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE have gone away somewhere.\p"
# 1833 "data/maps/SootopolisCity/scripts.pory"
	.string "Perhaps they've gone to MT. PYRE to\n"
# 1834 "data/maps/SootopolisCity/scripts.pory"
	.string "return those ORBS…$"
# 1835 "data/maps/SootopolisCity/scripts.pory"

# 1836 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar:
# 1837 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: Oh?\n"
# 1838 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}?\p"
# 1839 "data/maps/SootopolisCity/scripts.pory"
	.string "Haven't you scaled the SKY PILLAR\n"
# 1840 "data/maps/SootopolisCity/scripts.pory"
	.string "yet?\p"
# 1841 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you can make it to\n"
# 1842 "data/maps/SootopolisCity/scripts.pory"
	.string "the top of the SKY PILLAR…$"
# 1843 "data/maps/SootopolisCity/scripts.pory"

# 1844 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AquaMagmaDidntMeanHarm:
# 1845 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 1846 "data/maps/SootopolisCity/scripts.pory"
	.string "The leaders of TEAM MAGMA and AQUA,\n"
# 1847 "data/maps/SootopolisCity/scripts.pory"
	.string "I don't think they meant harm.\p"
# 1848 "data/maps/SootopolisCity/scripts.pory"
	.string "It wouldn't hurt to hear what they\n"
# 1849 "data/maps/SootopolisCity/scripts.pory"
	.string "have to say for themselves.$"
# 1850 "data/maps/SootopolisCity/scripts.pory"

# 1851 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThankYouForHelpAcceptThis:
# 1852 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\n"
# 1853 "data/maps/SootopolisCity/scripts.pory"
	.string "My eyes didn't deceive me.\p"
# 1854 "data/maps/SootopolisCity/scripts.pory"
	.string "Thanks to your help, SOOTOPOLIS…\n"
# 1855 "data/maps/SootopolisCity/scripts.pory"
	.string "No, all of HOENN was saved.\p"
# 1856 "data/maps/SootopolisCity/scripts.pory"
	.string "On behalf of the people, I thank you.\p"
# 1857 "data/maps/SootopolisCity/scripts.pory"
	.string "This is a gift from me.\n"
# 1858 "data/maps/SootopolisCity/scripts.pory"
	.string "Please accept it.$"
# 1859 "data/maps/SootopolisCity/scripts.pory"

# 1860 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ExplainWaterfallGoToGym:
# 1861 "data/maps/SootopolisCity/scripts.pory"
	.string "That HIDDEN MACHINE contains\n"
# 1862 "data/maps/SootopolisCity/scripts.pory"
	.string "WATERFALL.\p"
# 1863 "data/maps/SootopolisCity/scripts.pory"
	.string "If you have the RAIN BADGE, a POKéMON\n"
# 1864 "data/maps/SootopolisCity/scripts.pory"
	.string "that has learned that HM move can\l"
# 1865 "data/maps/SootopolisCity/scripts.pory"
	.string "force its way up waterfalls.\p"
# 1866 "data/maps/SootopolisCity/scripts.pory"
	.string "And where does one get the RAIN BADGE?\n"
# 1867 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, don't you?\p"
# 1868 "data/maps/SootopolisCity/scripts.pory"
	.string "That's right! You have to beat\n"
# 1869 "data/maps/SootopolisCity/scripts.pory"
	.string "the SOOTOPOLIS GYM LEADER.\p"
# 1870 "data/maps/SootopolisCity/scripts.pory"
	.string "When you're all set to go, step through\n"
# 1871 "data/maps/SootopolisCity/scripts.pory"
	.string "that door.$"
# 1872 "data/maps/SootopolisCity/scripts.pory"

# 1873 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DazzledByMentor:
# 1874 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: I'm sure that you will be\n"
# 1875 "data/maps/SootopolisCity/scripts.pory"
	.string "dazzled by my mentor's breathtakingly\l"
# 1876 "data/maps/SootopolisCity/scripts.pory"
	.string "elegant battle style.$"
