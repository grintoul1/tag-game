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
	.byte 0
# 9 "data/maps/LilycoveCity/scripts.pory"

# 10 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 11 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 12 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 13 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 14 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 15 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 16 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 17 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/LilycoveCity/scripts.pory"
	end
# 19 "data/maps/LilycoveCity/scripts.pory"

# 20 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 21 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 22 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 23 "data/maps/LilycoveCity/scripts.pory"
	end
# 24 "data/maps/LilycoveCity/scripts.pory"

# 25 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 26 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 33 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 34 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 35 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 36 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 37 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 38 "data/maps/LilycoveCity/scripts.pory"
	return
# 39 "data/maps/LilycoveCity/scripts.pory"

# 40 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 41 "data/maps/LilycoveCity/scripts.pory"
	lock
# 42 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 43 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 44 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 45 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 46 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 47 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 48 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 49 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 50 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 51 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 52 "data/maps/LilycoveCity/scripts.pory"
	release
# 53 "data/maps/LilycoveCity/scripts.pory"
	end
# 54 "data/maps/LilycoveCity/scripts.pory"

# 55 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 56 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 57 "data/maps/LilycoveCity/scripts.pory"
	release
# 58 "data/maps/LilycoveCity/scripts.pory"
	end
# 59 "data/maps/LilycoveCity/scripts.pory"

# 60 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 61 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 62 "data/maps/LilycoveCity/scripts.pory"
	end
# 63 "data/maps/LilycoveCity/scripts.pory"

# 64 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 65 "data/maps/LilycoveCity/scripts.pory"
	lock
# 66 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 67 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 68 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 69 "data/maps/LilycoveCity/scripts.pory"
	release
# 70 "data/maps/LilycoveCity/scripts.pory"
	end
# 71 "data/maps/LilycoveCity/scripts.pory"

# 72 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 73 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 74 "data/maps/LilycoveCity/scripts.pory"
	release
# 75 "data/maps/LilycoveCity/scripts.pory"
	end
# 76 "data/maps/LilycoveCity/scripts.pory"

# 77 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 78 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 79 "data/maps/LilycoveCity/scripts.pory"
	end
# 80 "data/maps/LilycoveCity/scripts.pory"

# 81 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 82 "data/maps/LilycoveCity/scripts.pory"
	lock
# 83 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 84 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 85 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 86 "data/maps/LilycoveCity/scripts.pory"
	release
# 87 "data/maps/LilycoveCity/scripts.pory"
	end
# 88 "data/maps/LilycoveCity/scripts.pory"

# 89 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 90 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 91 "data/maps/LilycoveCity/scripts.pory"
	release
# 92 "data/maps/LilycoveCity/scripts.pory"
	end
# 93 "data/maps/LilycoveCity/scripts.pory"

# 94 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 95 "data/maps/LilycoveCity/scripts.pory"
	lock
# 96 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 97 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 98 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 99 "data/maps/LilycoveCity/scripts.pory"
	release
# 100 "data/maps/LilycoveCity/scripts.pory"
	end
# 101 "data/maps/LilycoveCity/scripts.pory"

# 102 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 103 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 104 "data/maps/LilycoveCity/scripts.pory"
	release
# 105 "data/maps/LilycoveCity/scripts.pory"
	end
# 106 "data/maps/LilycoveCity/scripts.pory"

# 107 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 108 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 109 "data/maps/LilycoveCity/scripts.pory"
	end
# 110 "data/maps/LilycoveCity/scripts.pory"

# 111 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 112 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 113 "data/maps/LilycoveCity/scripts.pory"
	end
# 114 "data/maps/LilycoveCity/scripts.pory"

# 115 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 116 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 117 "data/maps/LilycoveCity/scripts.pory"
	end
# 118 "data/maps/LilycoveCity/scripts.pory"

# 119 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 120 "data/maps/LilycoveCity/scripts.pory"
	lock
# 121 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 122 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 123 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 124 "data/maps/LilycoveCity/scripts.pory"
	release
# 125 "data/maps/LilycoveCity/scripts.pory"
	end
# 126 "data/maps/LilycoveCity/scripts.pory"

# 127 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 128 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 129 "data/maps/LilycoveCity/scripts.pory"
	release
# 130 "data/maps/LilycoveCity/scripts.pory"
	end
# 131 "data/maps/LilycoveCity/scripts.pory"

# 132 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 133 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 134 "data/maps/LilycoveCity/scripts.pory"
	end
# 135 "data/maps/LilycoveCity/scripts.pory"

# 136 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 137 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 138 "data/maps/LilycoveCity/scripts.pory"
	end
# 139 "data/maps/LilycoveCity/scripts.pory"

# 140 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 141 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 142 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 143 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
# 144 "data/maps/LilycoveCity/scripts.pory"
	end
# 145 "data/maps/LilycoveCity/scripts.pory"

# 146 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 147 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 148 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 149 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 150 "data/maps/LilycoveCity/scripts.pory"
	end
# 151 "data/maps/LilycoveCity/scripts.pory"

# 152 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 153 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 154 "data/maps/LilycoveCity/scripts.pory"
	end
# 155 "data/maps/LilycoveCity/scripts.pory"

# 156 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 157 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 158 "data/maps/LilycoveCity/scripts.pory"
	end
# 159 "data/maps/LilycoveCity/scripts.pory"

# 160 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 161 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 162 "data/maps/LilycoveCity/scripts.pory"
	end
# 163 "data/maps/LilycoveCity/scripts.pory"

# 164 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 165 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 166 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 167 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 168 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 169 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 170 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 171 "data/maps/LilycoveCity/scripts.pory"
	end
# 172 "data/maps/LilycoveCity/scripts.pory"

# 173 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 174 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 175 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 176 "data/maps/LilycoveCity/scripts.pory"
	end
# 177 "data/maps/LilycoveCity/scripts.pory"

# 178 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 179 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 180 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 181 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 182 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 183 "data/maps/LilycoveCity/scripts.pory"
	end
# 184 "data/maps/LilycoveCity/scripts.pory"

# 185 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 186 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 187 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 188 "data/maps/LilycoveCity/scripts.pory"
	end
# 189 "data/maps/LilycoveCity/scripts.pory"

# 190 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 191 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 192 "data/maps/LilycoveCity/scripts.pory"
	end
# 193 "data/maps/LilycoveCity/scripts.pory"

# 194 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 195 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 196 "data/maps/LilycoveCity/scripts.pory"
	end
# 197 "data/maps/LilycoveCity/scripts.pory"

# 198 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 199 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 200 "data/maps/LilycoveCity/scripts.pory"
	end
# 201 "data/maps/LilycoveCity/scripts.pory"

# 202 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 203 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 204 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 205 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 206 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 207 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 209 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 210 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 212 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 213 "data/maps/LilycoveCity/scripts.pory"
	end
# 214 "data/maps/LilycoveCity/scripts.pory"

# 215 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 216 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 217 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 218 "data/maps/LilycoveCity/scripts.pory"
	end
# 219 "data/maps/LilycoveCity/scripts.pory"

# 220 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 221 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 222 "data/maps/LilycoveCity/scripts.pory"
	end
# 223 "data/maps/LilycoveCity/scripts.pory"

# 224 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 225 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 226 "data/maps/LilycoveCity/scripts.pory"
	end
# 227 "data/maps/LilycoveCity/scripts.pory"

# 228 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 229 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 230 "data/maps/LilycoveCity/scripts.pory"
	end
# 231 "data/maps/LilycoveCity/scripts.pory"

# 232 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 233 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 234 "data/maps/LilycoveCity/scripts.pory"
	end
# 235 "data/maps/LilycoveCity/scripts.pory"

# 236 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 237 "data/maps/LilycoveCity/scripts.pory"
	lock
# 238 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 239 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 240 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
# 241 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
# 242 "data/maps/LilycoveCity/scripts.pory"
	end
# 243 "data/maps/LilycoveCity/scripts.pory"

# 244 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 245 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 246 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 247 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 248 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
# 249 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 250 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 251 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleMayTreecko
# 252 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleMayTorchic
# 253 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleMayMudkip
# 254 "data/maps/LilycoveCity/scripts.pory"
	end
# 255 "data/maps/LilycoveCity/scripts.pory"

# 256 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 257 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 258 "data/maps/LilycoveCity/scripts.pory"
	return
# 259 "data/maps/LilycoveCity/scripts.pory"

# 260 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 261 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 262 "data/maps/LilycoveCity/scripts.pory"
	return
# 263 "data/maps/LilycoveCity/scripts.pory"

# 264 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 265 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 266 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 267 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 268 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 269 "data/maps/LilycoveCity/scripts.pory"
	release
# 270 "data/maps/LilycoveCity/scripts.pory"
	end
# 271 "data/maps/LilycoveCity/scripts.pory"

# 272 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 273 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 274 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 275 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 276 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 277 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 278 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 279 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
# 280 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
# 281 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
# 282 "data/maps/LilycoveCity/scripts.pory"
	end
# 283 "data/maps/LilycoveCity/scripts.pory"

# 284 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 285 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 286 "data/maps/LilycoveCity/scripts.pory"
	return
# 287 "data/maps/LilycoveCity/scripts.pory"

# 288 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 289 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 290 "data/maps/LilycoveCity/scripts.pory"
	return
# 291 "data/maps/LilycoveCity/scripts.pory"

# 292 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 293 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 294 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 295 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 296 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 297 "data/maps/LilycoveCity/scripts.pory"
	release
# 298 "data/maps/LilycoveCity/scripts.pory"
	end
# 299 "data/maps/LilycoveCity/scripts.pory"

# 300 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko::
# 301 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 302 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 303 "data/maps/LilycoveCity/scripts.pory"
	end
# 304 "data/maps/LilycoveCity/scripts.pory"

# 305 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 306 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 307 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 308 "data/maps/LilycoveCity/scripts.pory"
	end
# 309 "data/maps/LilycoveCity/scripts.pory"

# 310 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip::
# 311 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 312 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 313 "data/maps/LilycoveCity/scripts.pory"
	end
# 314 "data/maps/LilycoveCity/scripts.pory"

# 315 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 316 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 317 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 318 "data/maps/LilycoveCity/scripts.pory"
	end
# 319 "data/maps/LilycoveCity/scripts.pory"

# 320 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic::
# 321 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 322 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 323 "data/maps/LilycoveCity/scripts.pory"
	end
# 324 "data/maps/LilycoveCity/scripts.pory"

# 325 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip::
# 326 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 327 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 328 "data/maps/LilycoveCity/scripts.pory"
	end
# 329 "data/maps/LilycoveCity/scripts.pory"

# 330 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 331 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 332 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 333 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 334 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 335 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 336 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 337 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 338 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 339 "data/maps/LilycoveCity/scripts.pory"
	end
# 340 "data/maps/LilycoveCity/scripts.pory"

# 341 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 342 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 343 "data/maps/LilycoveCity/scripts.pory"
	return
# 344 "data/maps/LilycoveCity/scripts.pory"

# 345 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 346 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 347 "data/maps/LilycoveCity/scripts.pory"
	return
# 348 "data/maps/LilycoveCity/scripts.pory"

# 349 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 350 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 351 "data/maps/LilycoveCity/scripts.pory"
	return
# 352 "data/maps/LilycoveCity/scripts.pory"

# 353 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 354 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 355 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 356 "data/maps/LilycoveCity/scripts.pory"
	return
# 357 "data/maps/LilycoveCity/scripts.pory"

# 358 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 359 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 360 "data/maps/LilycoveCity/scripts.pory"
	return
# 361 "data/maps/LilycoveCity/scripts.pory"

# 362 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 363 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 364 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 365 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 366 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 367 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 368 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 369 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 370 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 371 "data/maps/LilycoveCity/scripts.pory"
	end
# 372 "data/maps/LilycoveCity/scripts.pory"

# 373 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 374 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 375 "data/maps/LilycoveCity/scripts.pory"
	return
# 376 "data/maps/LilycoveCity/scripts.pory"

# 377 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 378 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 379 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 380 "data/maps/LilycoveCity/scripts.pory"
	return
# 381 "data/maps/LilycoveCity/scripts.pory"

# 382 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 383 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 384 "data/maps/LilycoveCity/scripts.pory"
	return
# 385 "data/maps/LilycoveCity/scripts.pory"

# 386 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 387 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 388 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 389 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 390 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 391 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 392 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 393 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 394 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 395 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 396 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 397 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 398 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 399 "data/maps/LilycoveCity/scripts.pory"
	release
# 400 "data/maps/LilycoveCity/scripts.pory"
	end
# 401 "data/maps/LilycoveCity/scripts.pory"

# 402 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 403 "data/maps/LilycoveCity/scripts.pory"
	lock
# 404 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 405 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 406 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 407 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 408 "data/maps/LilycoveCity/scripts.pory"
	release
# 409 "data/maps/LilycoveCity/scripts.pory"
	end
# 410 "data/maps/LilycoveCity/scripts.pory"

# 411 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 412 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 413 "data/maps/LilycoveCity/scripts.pory"
	return
# 414 "data/maps/LilycoveCity/scripts.pory"

# 415 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 416 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 417 "data/maps/LilycoveCity/scripts.pory"
	return
# 418 "data/maps/LilycoveCity/scripts.pory"

# 419 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 420 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, hey?\n"
# 421 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 422 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of DOLLS and\n"
# 423 "data/maps/LilycoveCity/scripts.pory"
	.string "POSTERS.\p"
# 424 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 425 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON, and I'm raising them\l"
# 426 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 427 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 428 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
# 429 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 430 "data/maps/LilycoveCity/scripts.pory"
	.string "me your POKéMON, {PLAYER}{KUN}.$"
# 431 "data/maps/LilycoveCity/scripts.pory"

# 432 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 433 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
# 434 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your POKéMON?\p"
# 435 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 436 "data/maps/LilycoveCity/scripts.pory"
	.string "TRAINER…$"
# 437 "data/maps/LilycoveCity/scripts.pory"

# 438 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 439 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\n"
# 440 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your POKéMON!$"
# 441 "data/maps/LilycoveCity/scripts.pory"

# 442 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: The POKéMON I raised won't be\n"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"
# 445 "data/maps/LilycoveCity/scripts.pory"

# 446 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 447 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 448 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 449 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 452 "data/maps/LilycoveCity/scripts.pory"

# 453 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 454 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: I'm thinking of going back to\n"
# 455 "data/maps/LilycoveCity/scripts.pory"
	.string "LITTLEROOT soon.\p"
# 456 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of POKéMON,\n"
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "and my POKéDEX is coming along, so\l"
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 459 "data/maps/LilycoveCity/scripts.pory"

# 460 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 461 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 462 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 463 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 464 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting BADGES,\n"
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. I'll complete it before you!\p"
# 467 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 468 "data/maps/LilycoveCity/scripts.pory"

# 469 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 470 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 471 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the POKéMON LEAGUE\n"
# 472 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 474 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 475 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 476 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 478 "data/maps/LilycoveCity/scripts.pory"

# 479 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 480 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 481 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 484 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 485 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 488 "data/maps/LilycoveCity/scripts.pory"

# 489 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, hey, it's {PLAYER}.\p"
# 491 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 492 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any DOLLS.\p"
# 493 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 494 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 495 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON better?$"
# 496 "data/maps/LilycoveCity/scripts.pory"

# 497 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 498 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, what's the matter?\n"
# 499 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 500 "data/maps/LilycoveCity/scripts.pory"

# 501 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 502 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Want to battle to see who's\n"
# 503 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising POKéMON better?$"
# 504 "data/maps/LilycoveCity/scripts.pory"

# 505 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 506 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Aww, but you know I'm not\n"
# 507 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 508 "data/maps/LilycoveCity/scripts.pory"

# 509 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 510 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 511 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 512 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 513 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a TRAINER…$"
# 514 "data/maps/LilycoveCity/scripts.pory"

# 515 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 516 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: I…\n"
# 517 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to LITTLEROOT.\p"
# 518 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 519 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. It's coming together pretty\l"
# 520 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 521 "data/maps/LilycoveCity/scripts.pory"

# 522 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 523 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 524 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 525 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 528 "data/maps/LilycoveCity/scripts.pory"

# 529 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 530 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 531 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 532 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the POKéMON LEAGUE challenge?\p"
# 533 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my POKéMON\n"
# 534 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 536 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 537 "data/maps/LilycoveCity/scripts.pory"

# 538 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 539 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 543 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 544 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the BATTLE FRONTIER.\p"
# 546 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my POKéMON a bit more,\n"
# 547 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 548 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the BATTLE\n"
# 549 "data/maps/LilycoveCity/scripts.pory"
	.string "FRONTIER.\p"
# 550 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 551 "data/maps/LilycoveCity/scripts.pory"

# 552 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 553 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 554 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 555 "data/maps/LilycoveCity/scripts.pory"
	.string "HIDEOUT today…\p"
# 556 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 558 "data/maps/LilycoveCity/scripts.pory"

# 559 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 560 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a GRUNT, so I don't know what\n"
# 561 "data/maps/LilycoveCity/scripts.pory"
	.string "the BOSS is thinking…\p"
# 562 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on TEAM AQUA, I know I'll get\n"
# 563 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 564 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 565 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 566 "data/maps/LilycoveCity/scripts.pory"

# 567 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 568 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 569 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 570 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 571 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 572 "data/maps/LilycoveCity/scripts.pory"

# 573 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 574 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 575 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's, it will be a happier\l"
# 576 "data/maps/LilycoveCity/scripts.pory"
	.string "place for POKéMON, too.$"
# 577 "data/maps/LilycoveCity/scripts.pory"

# 578 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 579 "data/maps/LilycoveCity/scripts.pory"
	.string "There! WAILMER!\n"
# 580 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 581 "data/maps/LilycoveCity/scripts.pory"

# 582 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 583 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 585 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 586 "data/maps/LilycoveCity/scripts.pory"

# 587 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 588 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a POKéMON CONTEST HALL\n"
# 589 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 590 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised POKéMON will\n"
# 591 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 592 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 593 "data/maps/LilycoveCity/scripts.pory"

# 594 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 595 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 596 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 597 "data/maps/LilycoveCity/scripts.pory"

# 598 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 599 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my POKéMON some new\n"
# 600 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a CONTEST.\p"
# 601 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the MOVE DELETER\n"
# 602 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 603 "data/maps/LilycoveCity/scripts.pory"

# 604 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 605 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from KANTO.\p"
# 606 "data/maps/LilycoveCity/scripts.pory"
	.string "The HOENN region is beautiful with\n"
# 607 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 608 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 609 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare POKéMON that live\n"
# 610 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 611 "data/maps/LilycoveCity/scripts.pory"

# 612 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 613 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's been training their\n"
# 614 "data/maps/LilycoveCity/scripts.pory"
	.string "WAILMER in the cove.\p"
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "We SAILORS can't get our boats out\n"
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 617 "data/maps/LilycoveCity/scripts.pory"

# 618 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 619 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 620 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted TEAM AQUA out of\n"
# 621 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the WAILMER out of the cove,\n"
# 623 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 624 "data/maps/LilycoveCity/scripts.pory"

# 625 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 626 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 627 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 628 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my POKéMON!\p"
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 630 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA? Is it TEAM AQUA?$"
# 631 "data/maps/LilycoveCity/scripts.pory"

# 632 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 633 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing POKéMON…\n"
# 634 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 635 "data/maps/LilycoveCity/scripts.pory"

# 636 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 637 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an ART DEALER.\p"
# 638 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 639 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 640 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the MUSEUM here has\n"
# 641 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 642 "data/maps/LilycoveCity/scripts.pory"

# 643 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 644 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 646 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 647 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 648 "data/maps/LilycoveCity/scripts.pory"

# 649 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 650 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 651 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 652 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 653 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 654 "data/maps/LilycoveCity/scripts.pory"

# 655 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 656 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 657 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 658 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 659 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that TEAM AQUA lot came\l"
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 661 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 662 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving TEAM AQUA”!\p"
# 663 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 664 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 665 "data/maps/LilycoveCity/scripts.pory"

# 666 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 667 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 668 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 669 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 670 "data/maps/LilycoveCity/scripts.pory"
	.string "That TEAM AQUA lot, they must\n"
# 671 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 672 "data/maps/LilycoveCity/scripts.pory"

# 673 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 674 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY\p"
# 675 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 676 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 677 "data/maps/LilycoveCity/scripts.pory"

# 678 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 679 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON CONTEST HALL\n"
# 680 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for TRAINERS!”$"
# 681 "data/maps/LilycoveCity/scripts.pory"

# 682 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 683 "data/maps/LilycoveCity/scripts.pory"
	.string "COVE LILY MOTEL\p"
# 684 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as COVE LILY of\n"
# 685 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE.”$"
# 686 "data/maps/LilycoveCity/scripts.pory"

# 687 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 688 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 689 "data/maps/LilycoveCity/scripts.pory"
	.string "“POKéMON Masterpiece Collection\n"
# 690 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 691 "data/maps/LilycoveCity/scripts.pory"

# 692 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 693 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 694 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s POKéMON Collection\n"
# 695 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 696 "data/maps/LilycoveCity/scripts.pory"

# 697 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 698 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 699 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 700 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in SLATEPORT CITY.\p"
# 701 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 702 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 703 "data/maps/LilycoveCity/scripts.pory"

# 704 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 705 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 706 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 707 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 708 "data/maps/LilycoveCity/scripts.pory"

# 709 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 710 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
# 711 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of TRAINERS are scribbled\n"
# 712 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 713 "data/maps/LilycoveCity/scripts.pory"

# 714 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 715 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p"
# 716 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 717 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 718 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 719 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 720 "data/maps/LilycoveCity/scripts.pory"

# 721 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 722 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVE DELETER'S HOUSE\p"
# 723 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted POKéMON moves deleted.”$"
# 724 "data/maps/LilycoveCity/scripts.pory"

# 725 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 726 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 727 "data/maps/LilycoveCity/scripts.pory"
	.string "BERRY BLENDER?$"
# 728 "data/maps/LilycoveCity/scripts.pory"

# 729 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 730 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 731 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 732 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 733 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}S you can get, I've heard.$"
# 734 "data/maps/LilycoveCity/scripts.pory"

# 735 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 736 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 737 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 738 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a POKéMON,\n"
# 739 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 740 "data/maps/LilycoveCity/scripts.pory"

# 741 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 742 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 743 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 744 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the SKY PILLAR, I hear.$"
# 745 "data/maps/LilycoveCity/scripts.pory"

# 746 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 747 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 748 "data/maps/LilycoveCity/scripts.pory"
	.string "around ROUTE 131.\p"
# 749 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 750 "data/maps/LilycoveCity/scripts.pory"

# 751 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 752 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 753 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 754 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a DRAGON-type\n"
# 755 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON flying way up in the sky.\p"
# 756 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool POKéMON like that live in\n"
# 757 "data/maps/LilycoveCity/scripts.pory"
	.string "the HOENN region?$"
# 758 "data/maps/LilycoveCity/scripts.pory"

# 759 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 760 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 761 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare POKéMON as we can.\p"
# 762 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 763 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON as soon as we arrived.\p"
# 764 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"
