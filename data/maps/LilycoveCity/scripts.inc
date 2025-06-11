# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_WOMAN_1, 19
# 3 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_MAN_1, 20
# 4 "data/maps/LilycoveCity/scripts.pory"

# 5 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 6 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 7 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 8 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_OnFrame
# 9 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 10 "data/maps/LilycoveCity/scripts.pory"

# 11 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnFrame:
# 12 "data/maps/LilycoveCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 46, LilycoveCity_EventScript_ProgressEmmieState
# 13 "data/maps/LilycoveCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 49, LilycoveCity_EventScript_ProgressEmmieStateReturnToAHO
# 14 "data/maps/LilycoveCity/scripts.pory"
	.2byte 0
# 15 "data/maps/LilycoveCity/scripts.pory"

# 16 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ProgressEmmieStateReturnToAHO::
# 17 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 48
# 18 "data/maps/LilycoveCity/scripts.pory"
	return
# 19 "data/maps/LilycoveCity/scripts.pory"

# 20 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ProgressEmmieState::
# 21 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 47
# 22 "data/maps/LilycoveCity/scripts.pory"
	return
# 23 "data/maps/LilycoveCity/scripts.pory"

# 24 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 25 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 26 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 27 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 28 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 29 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 30 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 31 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 32 "data/maps/LilycoveCity/scripts.pory"
	end
# 33 "data/maps/LilycoveCity/scripts.pory"

# 34 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 35 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 36 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 37 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 38 "data/maps/LilycoveCity/scripts.pory"
	end
# 39 "data/maps/LilycoveCity/scripts.pory"

# 40 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 41 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 42 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 43 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 44 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 45 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 46 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 47 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 48 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 49 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 50 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 51 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 52 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 53 "data/maps/LilycoveCity/scripts.pory"
	return
# 54 "data/maps/LilycoveCity/scripts.pory"

# 55 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 56 "data/maps/LilycoveCity/scripts.pory"
	lock
# 57 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 58 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 59 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 60 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 61 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 62 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 63 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 64 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 65 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 66 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 67 "data/maps/LilycoveCity/scripts.pory"
	release
# 68 "data/maps/LilycoveCity/scripts.pory"
	end
# 69 "data/maps/LilycoveCity/scripts.pory"

# 70 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 71 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 72 "data/maps/LilycoveCity/scripts.pory"
	release
# 73 "data/maps/LilycoveCity/scripts.pory"
	end
# 74 "data/maps/LilycoveCity/scripts.pory"

# 75 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 76 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 77 "data/maps/LilycoveCity/scripts.pory"
	end
# 78 "data/maps/LilycoveCity/scripts.pory"

# 79 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 80 "data/maps/LilycoveCity/scripts.pory"
	lock
# 81 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 82 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 83 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 84 "data/maps/LilycoveCity/scripts.pory"
	release
# 85 "data/maps/LilycoveCity/scripts.pory"
	end
# 86 "data/maps/LilycoveCity/scripts.pory"

# 87 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 88 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 89 "data/maps/LilycoveCity/scripts.pory"
	release
# 90 "data/maps/LilycoveCity/scripts.pory"
	end
# 91 "data/maps/LilycoveCity/scripts.pory"

# 92 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 93 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 94 "data/maps/LilycoveCity/scripts.pory"
	end
# 95 "data/maps/LilycoveCity/scripts.pory"

# 96 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 97 "data/maps/LilycoveCity/scripts.pory"
	lock
# 98 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 99 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 100 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity/scripts.pory"
	release
# 102 "data/maps/LilycoveCity/scripts.pory"
	end
# 103 "data/maps/LilycoveCity/scripts.pory"

# 104 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 105 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 106 "data/maps/LilycoveCity/scripts.pory"
	release
# 107 "data/maps/LilycoveCity/scripts.pory"
	end
# 108 "data/maps/LilycoveCity/scripts.pory"

# 109 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 110 "data/maps/LilycoveCity/scripts.pory"
	lock
# 111 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 112 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 113 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 114 "data/maps/LilycoveCity/scripts.pory"
	release
# 115 "data/maps/LilycoveCity/scripts.pory"
	end
# 116 "data/maps/LilycoveCity/scripts.pory"

# 117 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 118 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 119 "data/maps/LilycoveCity/scripts.pory"
	release
# 120 "data/maps/LilycoveCity/scripts.pory"
	end
# 121 "data/maps/LilycoveCity/scripts.pory"

# 122 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 123 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 124 "data/maps/LilycoveCity/scripts.pory"
	end
# 125 "data/maps/LilycoveCity/scripts.pory"

# 126 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 127 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 128 "data/maps/LilycoveCity/scripts.pory"
	end
# 129 "data/maps/LilycoveCity/scripts.pory"

# 130 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 131 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 132 "data/maps/LilycoveCity/scripts.pory"
	end
# 133 "data/maps/LilycoveCity/scripts.pory"

# 134 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 135 "data/maps/LilycoveCity/scripts.pory"
	lock
# 136 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 137 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 138 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 139 "data/maps/LilycoveCity/scripts.pory"
	release
# 140 "data/maps/LilycoveCity/scripts.pory"
	end
# 141 "data/maps/LilycoveCity/scripts.pory"

# 142 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 143 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 144 "data/maps/LilycoveCity/scripts.pory"
	release
# 145 "data/maps/LilycoveCity/scripts.pory"
	end
# 146 "data/maps/LilycoveCity/scripts.pory"

# 147 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 148 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 149 "data/maps/LilycoveCity/scripts.pory"
	end
# 150 "data/maps/LilycoveCity/scripts.pory"

# 151 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 152 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 153 "data/maps/LilycoveCity/scripts.pory"
	end
# 154 "data/maps/LilycoveCity/scripts.pory"

# 155 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 156 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 157 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 158 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
# 159 "data/maps/LilycoveCity/scripts.pory"
	end
# 160 "data/maps/LilycoveCity/scripts.pory"

# 161 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 162 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 163 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 164 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 165 "data/maps/LilycoveCity/scripts.pory"
	end
# 166 "data/maps/LilycoveCity/scripts.pory"

# 167 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 168 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 169 "data/maps/LilycoveCity/scripts.pory"
	end
# 170 "data/maps/LilycoveCity/scripts.pory"

# 171 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 172 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 173 "data/maps/LilycoveCity/scripts.pory"
	end
# 174 "data/maps/LilycoveCity/scripts.pory"

# 175 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 176 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 177 "data/maps/LilycoveCity/scripts.pory"
	end
# 178 "data/maps/LilycoveCity/scripts.pory"

# 179 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 180 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 181 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 182 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 183 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 184 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 185 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 186 "data/maps/LilycoveCity/scripts.pory"
	end
# 187 "data/maps/LilycoveCity/scripts.pory"

# 188 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 189 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 190 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 191 "data/maps/LilycoveCity/scripts.pory"
	end
# 192 "data/maps/LilycoveCity/scripts.pory"

# 193 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 194 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 195 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 196 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 197 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 198 "data/maps/LilycoveCity/scripts.pory"
	end
# 199 "data/maps/LilycoveCity/scripts.pory"

# 200 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 201 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 202 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 203 "data/maps/LilycoveCity/scripts.pory"
	end
# 204 "data/maps/LilycoveCity/scripts.pory"

# 205 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 206 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 207 "data/maps/LilycoveCity/scripts.pory"
	end
# 208 "data/maps/LilycoveCity/scripts.pory"

# 209 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 210 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 211 "data/maps/LilycoveCity/scripts.pory"
	end
# 212 "data/maps/LilycoveCity/scripts.pory"

# 213 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 214 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 215 "data/maps/LilycoveCity/scripts.pory"
	end
# 216 "data/maps/LilycoveCity/scripts.pory"

# 217 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 218 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 219 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 220 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 221 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 222 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 223 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 224 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 225 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 226 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 227 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 228 "data/maps/LilycoveCity/scripts.pory"
	end
# 229 "data/maps/LilycoveCity/scripts.pory"

# 230 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 231 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 232 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 233 "data/maps/LilycoveCity/scripts.pory"
	end
# 234 "data/maps/LilycoveCity/scripts.pory"

# 235 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 236 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 237 "data/maps/LilycoveCity/scripts.pory"
	end
# 238 "data/maps/LilycoveCity/scripts.pory"

# 239 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 240 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 241 "data/maps/LilycoveCity/scripts.pory"
	end
# 242 "data/maps/LilycoveCity/scripts.pory"

# 243 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 244 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 245 "data/maps/LilycoveCity/scripts.pory"
	end
# 246 "data/maps/LilycoveCity/scripts.pory"

# 247 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 248 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 249 "data/maps/LilycoveCity/scripts.pory"
	end
# 250 "data/maps/LilycoveCity/scripts.pory"

# 251 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 252 "data/maps/LilycoveCity/scripts.pory"
	lock
# 253 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 254 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 255 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
# 256 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
# 257 "data/maps/LilycoveCity/scripts.pory"
	end
# 258 "data/maps/LilycoveCity/scripts.pory"

# 259 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 260 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 261 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 262 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 263 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
# 264 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 265 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 266 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleMayTreecko
# 267 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleMayTorchic
# 268 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleMayMudkip
# 269 "data/maps/LilycoveCity/scripts.pory"
	end
# 270 "data/maps/LilycoveCity/scripts.pory"

# 271 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 272 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 273 "data/maps/LilycoveCity/scripts.pory"
	return
# 274 "data/maps/LilycoveCity/scripts.pory"

# 275 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 276 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 277 "data/maps/LilycoveCity/scripts.pory"
	return
# 278 "data/maps/LilycoveCity/scripts.pory"

# 279 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 280 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 281 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 282 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 283 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 284 "data/maps/LilycoveCity/scripts.pory"
	release
# 285 "data/maps/LilycoveCity/scripts.pory"
	end
# 286 "data/maps/LilycoveCity/scripts.pory"

# 287 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 288 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 289 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 290 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 291 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 292 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 293 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 294 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
# 295 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
# 296 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
# 297 "data/maps/LilycoveCity/scripts.pory"
	end
# 298 "data/maps/LilycoveCity/scripts.pory"

# 299 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 300 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 301 "data/maps/LilycoveCity/scripts.pory"
	return
# 302 "data/maps/LilycoveCity/scripts.pory"

# 303 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 304 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 305 "data/maps/LilycoveCity/scripts.pory"
	return
# 306 "data/maps/LilycoveCity/scripts.pory"

# 307 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 308 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 309 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 310 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 311 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 312 "data/maps/LilycoveCity/scripts.pory"
	release
# 313 "data/maps/LilycoveCity/scripts.pory"
	end
# 314 "data/maps/LilycoveCity/scripts.pory"

# 315 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko::
# 316 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 317 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 318 "data/maps/LilycoveCity/scripts.pory"
	end
# 319 "data/maps/LilycoveCity/scripts.pory"

# 320 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 321 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 322 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 323 "data/maps/LilycoveCity/scripts.pory"
	end
# 324 "data/maps/LilycoveCity/scripts.pory"

# 325 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip::
# 326 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 327 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 328 "data/maps/LilycoveCity/scripts.pory"
	end
# 329 "data/maps/LilycoveCity/scripts.pory"

# 330 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 331 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 332 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 333 "data/maps/LilycoveCity/scripts.pory"
	end
# 334 "data/maps/LilycoveCity/scripts.pory"

# 335 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic::
# 336 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 337 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 338 "data/maps/LilycoveCity/scripts.pory"
	end
# 339 "data/maps/LilycoveCity/scripts.pory"

# 340 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip::
# 341 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 342 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 343 "data/maps/LilycoveCity/scripts.pory"
	end
# 344 "data/maps/LilycoveCity/scripts.pory"

# 345 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 346 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 347 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 348 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 349 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 350 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 351 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 352 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 353 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 354 "data/maps/LilycoveCity/scripts.pory"
	end
# 355 "data/maps/LilycoveCity/scripts.pory"

# 356 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 357 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 358 "data/maps/LilycoveCity/scripts.pory"
	return
# 359 "data/maps/LilycoveCity/scripts.pory"

# 360 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 361 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 362 "data/maps/LilycoveCity/scripts.pory"
	return
# 363 "data/maps/LilycoveCity/scripts.pory"

# 364 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 365 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 366 "data/maps/LilycoveCity/scripts.pory"
	return
# 367 "data/maps/LilycoveCity/scripts.pory"

# 368 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 369 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 370 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 371 "data/maps/LilycoveCity/scripts.pory"
	return
# 372 "data/maps/LilycoveCity/scripts.pory"

# 373 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 374 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 375 "data/maps/LilycoveCity/scripts.pory"
	return
# 376 "data/maps/LilycoveCity/scripts.pory"

# 377 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 378 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 379 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 380 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 381 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 382 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 383 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 384 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 385 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 386 "data/maps/LilycoveCity/scripts.pory"
	end
# 387 "data/maps/LilycoveCity/scripts.pory"

# 388 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 389 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 390 "data/maps/LilycoveCity/scripts.pory"
	return
# 391 "data/maps/LilycoveCity/scripts.pory"

# 392 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 393 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 394 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 395 "data/maps/LilycoveCity/scripts.pory"
	return
# 396 "data/maps/LilycoveCity/scripts.pory"

# 397 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 398 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 399 "data/maps/LilycoveCity/scripts.pory"
	return
# 400 "data/maps/LilycoveCity/scripts.pory"

# 401 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 402 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 403 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 404 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 405 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 406 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 407 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 408 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 409 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 410 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 411 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 412 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 413 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 414 "data/maps/LilycoveCity/scripts.pory"
	release
# 415 "data/maps/LilycoveCity/scripts.pory"
	end
# 416 "data/maps/LilycoveCity/scripts.pory"

# 417 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 418 "data/maps/LilycoveCity/scripts.pory"
	lock
# 419 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 420 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 421 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 422 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 423 "data/maps/LilycoveCity/scripts.pory"
	release
# 424 "data/maps/LilycoveCity/scripts.pory"
	end
# 425 "data/maps/LilycoveCity/scripts.pory"

# 426 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 427 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 428 "data/maps/LilycoveCity/scripts.pory"
	return
# 429 "data/maps/LilycoveCity/scripts.pory"

# 430 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 431 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 432 "data/maps/LilycoveCity/scripts.pory"
	return
# 433 "data/maps/LilycoveCity/scripts.pory"

# 434 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 435 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, hey?\n"
# 436 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 437 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of DOLLS and\n"
# 438 "data/maps/LilycoveCity/scripts.pory"
	.string "POSTERS.\p"
# 439 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 440 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON, and I'm raising them\l"
# 441 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 442 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 445 "data/maps/LilycoveCity/scripts.pory"
	.string "me your POKéMON, {PLAYER}{KUN}.$"
# 446 "data/maps/LilycoveCity/scripts.pory"

# 447 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 448 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
# 449 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your POKéMON?\p"
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "TRAINER…$"
# 452 "data/maps/LilycoveCity/scripts.pory"

# 453 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 454 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\n"
# 455 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your POKéMON!$"
# 456 "data/maps/LilycoveCity/scripts.pory"

# 457 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: The POKéMON I raised won't be\n"
# 459 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"
# 460 "data/maps/LilycoveCity/scripts.pory"

# 461 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 462 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 463 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 464 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 467 "data/maps/LilycoveCity/scripts.pory"

# 468 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 469 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: I'm thinking of going back to\n"
# 470 "data/maps/LilycoveCity/scripts.pory"
	.string "LITTLEROOT soon.\p"
# 471 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of POKéMON,\n"
# 472 "data/maps/LilycoveCity/scripts.pory"
	.string "and my POKéDEX is coming along, so\l"
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 474 "data/maps/LilycoveCity/scripts.pory"

# 475 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 476 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 478 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 479 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting BADGES,\n"
# 480 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 481 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. I'll complete it before you!\p"
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 483 "data/maps/LilycoveCity/scripts.pory"

# 484 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 485 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the POKéMON LEAGUE\n"
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 488 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 489 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 491 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 492 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 493 "data/maps/LilycoveCity/scripts.pory"

# 494 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 495 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 496 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 497 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 498 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 499 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 500 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 501 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 502 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 503 "data/maps/LilycoveCity/scripts.pory"

# 504 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 505 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, hey, it's {PLAYER}.\p"
# 506 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 507 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any DOLLS.\p"
# 508 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 509 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 510 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON better?$"
# 511 "data/maps/LilycoveCity/scripts.pory"

# 512 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 513 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, what's the matter?\n"
# 514 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 515 "data/maps/LilycoveCity/scripts.pory"

# 516 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 517 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Want to battle to see who's\n"
# 518 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising POKéMON better?$"
# 519 "data/maps/LilycoveCity/scripts.pory"

# 520 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 521 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Aww, but you know I'm not\n"
# 522 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 523 "data/maps/LilycoveCity/scripts.pory"

# 524 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 525 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a TRAINER…$"
# 529 "data/maps/LilycoveCity/scripts.pory"

# 530 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 531 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: I…\n"
# 532 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to LITTLEROOT.\p"
# 533 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 534 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. It's coming together pretty\l"
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 536 "data/maps/LilycoveCity/scripts.pory"

# 537 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 538 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 539 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 543 "data/maps/LilycoveCity/scripts.pory"

# 544 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 546 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 547 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the POKéMON LEAGUE challenge?\p"
# 548 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my POKéMON\n"
# 549 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 550 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 551 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 552 "data/maps/LilycoveCity/scripts.pory"

# 553 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 554 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 555 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 556 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 558 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 559 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 560 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the BATTLE FRONTIER.\p"
# 561 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my POKéMON a bit more,\n"
# 562 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 563 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the BATTLE\n"
# 564 "data/maps/LilycoveCity/scripts.pory"
	.string "FRONTIER.\p"
# 565 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 566 "data/maps/LilycoveCity/scripts.pory"

# 567 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 568 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 569 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 570 "data/maps/LilycoveCity/scripts.pory"
	.string "HIDEOUT today…\p"
# 571 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 572 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 573 "data/maps/LilycoveCity/scripts.pory"

# 574 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 575 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a GRUNT, so I don't know what\n"
# 576 "data/maps/LilycoveCity/scripts.pory"
	.string "the BOSS is thinking…\p"
# 577 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on TEAM AQUA, I know I'll get\n"
# 578 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 579 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 580 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 581 "data/maps/LilycoveCity/scripts.pory"

# 582 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 583 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 585 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 586 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 587 "data/maps/LilycoveCity/scripts.pory"

# 588 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 589 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 590 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's, it will be a happier\l"
# 591 "data/maps/LilycoveCity/scripts.pory"
	.string "place for POKéMON, too.$"
# 592 "data/maps/LilycoveCity/scripts.pory"

# 593 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 594 "data/maps/LilycoveCity/scripts.pory"
	.string "There! WAILMER!\n"
# 595 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 596 "data/maps/LilycoveCity/scripts.pory"

# 597 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 598 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 599 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 600 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 601 "data/maps/LilycoveCity/scripts.pory"

# 602 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 603 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a POKéMON CONTEST HALL\n"
# 604 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 605 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised POKéMON will\n"
# 606 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 607 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 608 "data/maps/LilycoveCity/scripts.pory"

# 609 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 610 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 612 "data/maps/LilycoveCity/scripts.pory"

# 613 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 614 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my POKéMON some new\n"
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a CONTEST.\p"
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the MOVE DELETER\n"
# 617 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 618 "data/maps/LilycoveCity/scripts.pory"

# 619 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 620 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from KANTO.\p"
# 621 "data/maps/LilycoveCity/scripts.pory"
	.string "The HOENN region is beautiful with\n"
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 623 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 624 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare POKéMON that live\n"
# 625 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 626 "data/maps/LilycoveCity/scripts.pory"

# 627 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 628 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's been training their\n"
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "WAILMER in the cove.\p"
# 630 "data/maps/LilycoveCity/scripts.pory"
	.string "We SAILORS can't get our boats out\n"
# 631 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 632 "data/maps/LilycoveCity/scripts.pory"

# 633 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 634 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 635 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted TEAM AQUA out of\n"
# 636 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 637 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the WAILMER out of the cove,\n"
# 638 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 639 "data/maps/LilycoveCity/scripts.pory"

# 640 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 641 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 642 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 643 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my POKéMON!\p"
# 644 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA? Is it TEAM AQUA?$"
# 646 "data/maps/LilycoveCity/scripts.pory"

# 647 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 648 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing POKéMON…\n"
# 649 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 650 "data/maps/LilycoveCity/scripts.pory"

# 651 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 652 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an ART DEALER.\p"
# 653 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 654 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 655 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the MUSEUM here has\n"
# 656 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 657 "data/maps/LilycoveCity/scripts.pory"

# 658 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 659 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 661 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 662 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 663 "data/maps/LilycoveCity/scripts.pory"

# 664 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 665 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 666 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 667 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 668 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 669 "data/maps/LilycoveCity/scripts.pory"

# 670 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 671 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 672 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 673 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 674 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that TEAM AQUA lot came\l"
# 675 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 676 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 677 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving TEAM AQUA”!\p"
# 678 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 679 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 680 "data/maps/LilycoveCity/scripts.pory"

# 681 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 682 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 683 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 684 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 685 "data/maps/LilycoveCity/scripts.pory"
	.string "That TEAM AQUA lot, they must\n"
# 686 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 687 "data/maps/LilycoveCity/scripts.pory"

# 688 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 689 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY\p"
# 690 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 691 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 692 "data/maps/LilycoveCity/scripts.pory"

# 693 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 694 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON CONTEST HALL\n"
# 695 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for TRAINERS!”$"
# 696 "data/maps/LilycoveCity/scripts.pory"

# 697 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 698 "data/maps/LilycoveCity/scripts.pory"
	.string "COVE LILY MOTEL\p"
# 699 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as COVE LILY of\n"
# 700 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE.”$"
# 701 "data/maps/LilycoveCity/scripts.pory"

# 702 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 703 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 704 "data/maps/LilycoveCity/scripts.pory"
	.string "“POKéMON Masterpiece Collection\n"
# 705 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 706 "data/maps/LilycoveCity/scripts.pory"

# 707 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 708 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 709 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s POKéMON Collection\n"
# 710 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 711 "data/maps/LilycoveCity/scripts.pory"

# 712 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 713 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 714 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 715 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in SLATEPORT CITY.\p"
# 716 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 717 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 718 "data/maps/LilycoveCity/scripts.pory"

# 719 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 720 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 721 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 722 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 723 "data/maps/LilycoveCity/scripts.pory"

# 724 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 725 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
# 726 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of TRAINERS are scribbled\n"
# 727 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 728 "data/maps/LilycoveCity/scripts.pory"

# 729 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 730 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p"
# 731 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 732 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 733 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 734 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 735 "data/maps/LilycoveCity/scripts.pory"

# 736 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 737 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVE DELETER'S HOUSE\p"
# 738 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted POKéMON moves deleted.”$"
# 739 "data/maps/LilycoveCity/scripts.pory"

# 740 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 741 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 742 "data/maps/LilycoveCity/scripts.pory"
	.string "BERRY BLENDER?$"
# 743 "data/maps/LilycoveCity/scripts.pory"

# 744 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 745 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 746 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 747 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 748 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}S you can get, I've heard.$"
# 749 "data/maps/LilycoveCity/scripts.pory"

# 750 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 751 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 752 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 753 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a POKéMON,\n"
# 754 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 755 "data/maps/LilycoveCity/scripts.pory"

# 756 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 757 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 758 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 759 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the SKY PILLAR, I hear.$"
# 760 "data/maps/LilycoveCity/scripts.pory"

# 761 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 762 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 763 "data/maps/LilycoveCity/scripts.pory"
	.string "around ROUTE 131.\p"
# 764 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 765 "data/maps/LilycoveCity/scripts.pory"

# 766 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 767 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 768 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 769 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a DRAGON-type\n"
# 770 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON flying way up in the sky.\p"
# 771 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool POKéMON like that live in\n"
# 772 "data/maps/LilycoveCity/scripts.pory"
	.string "the HOENN region?$"
# 773 "data/maps/LilycoveCity/scripts.pory"

# 774 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 775 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 776 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare POKéMON as we can.\p"
# 777 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 778 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON as soon as we arrived.\p"
# 779 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"
