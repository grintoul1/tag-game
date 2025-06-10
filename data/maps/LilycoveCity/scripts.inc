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
# 23 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 24 "data/maps/LilycoveCity/scripts.pory"
	end
# 25 "data/maps/LilycoveCity/scripts.pory"

# 26 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 33 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 34 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 35 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 36 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 37 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 38 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 39 "data/maps/LilycoveCity/scripts.pory"
	return
# 40 "data/maps/LilycoveCity/scripts.pory"

# 41 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 42 "data/maps/LilycoveCity/scripts.pory"
	lock
# 43 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 44 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 45 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 46 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 47 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 48 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 49 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 50 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 51 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 52 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 53 "data/maps/LilycoveCity/scripts.pory"
	release
# 54 "data/maps/LilycoveCity/scripts.pory"
	end
# 55 "data/maps/LilycoveCity/scripts.pory"

# 56 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 57 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 58 "data/maps/LilycoveCity/scripts.pory"
	release
# 59 "data/maps/LilycoveCity/scripts.pory"
	end
# 60 "data/maps/LilycoveCity/scripts.pory"

# 61 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 62 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 63 "data/maps/LilycoveCity/scripts.pory"
	end
# 64 "data/maps/LilycoveCity/scripts.pory"

# 65 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 66 "data/maps/LilycoveCity/scripts.pory"
	lock
# 67 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 68 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 69 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 70 "data/maps/LilycoveCity/scripts.pory"
	release
# 71 "data/maps/LilycoveCity/scripts.pory"
	end
# 72 "data/maps/LilycoveCity/scripts.pory"

# 73 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 74 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 75 "data/maps/LilycoveCity/scripts.pory"
	release
# 76 "data/maps/LilycoveCity/scripts.pory"
	end
# 77 "data/maps/LilycoveCity/scripts.pory"

# 78 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 79 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 80 "data/maps/LilycoveCity/scripts.pory"
	end
# 81 "data/maps/LilycoveCity/scripts.pory"

# 82 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 83 "data/maps/LilycoveCity/scripts.pory"
	lock
# 84 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 85 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 86 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 87 "data/maps/LilycoveCity/scripts.pory"
	release
# 88 "data/maps/LilycoveCity/scripts.pory"
	end
# 89 "data/maps/LilycoveCity/scripts.pory"

# 90 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 91 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 92 "data/maps/LilycoveCity/scripts.pory"
	release
# 93 "data/maps/LilycoveCity/scripts.pory"
	end
# 94 "data/maps/LilycoveCity/scripts.pory"

# 95 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 96 "data/maps/LilycoveCity/scripts.pory"
	lock
# 97 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 98 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 99 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 100 "data/maps/LilycoveCity/scripts.pory"
	release
# 101 "data/maps/LilycoveCity/scripts.pory"
	end
# 102 "data/maps/LilycoveCity/scripts.pory"

# 103 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 104 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 105 "data/maps/LilycoveCity/scripts.pory"
	release
# 106 "data/maps/LilycoveCity/scripts.pory"
	end
# 107 "data/maps/LilycoveCity/scripts.pory"

# 108 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 109 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 110 "data/maps/LilycoveCity/scripts.pory"
	end
# 111 "data/maps/LilycoveCity/scripts.pory"

# 112 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 113 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 114 "data/maps/LilycoveCity/scripts.pory"
	end
# 115 "data/maps/LilycoveCity/scripts.pory"

# 116 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 117 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 118 "data/maps/LilycoveCity/scripts.pory"
	end
# 119 "data/maps/LilycoveCity/scripts.pory"

# 120 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 121 "data/maps/LilycoveCity/scripts.pory"
	lock
# 122 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 123 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 124 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 125 "data/maps/LilycoveCity/scripts.pory"
	release
# 126 "data/maps/LilycoveCity/scripts.pory"
	end
# 127 "data/maps/LilycoveCity/scripts.pory"

# 128 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 129 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 130 "data/maps/LilycoveCity/scripts.pory"
	release
# 131 "data/maps/LilycoveCity/scripts.pory"
	end
# 132 "data/maps/LilycoveCity/scripts.pory"

# 133 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 134 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 135 "data/maps/LilycoveCity/scripts.pory"
	end
# 136 "data/maps/LilycoveCity/scripts.pory"

# 137 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 138 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 139 "data/maps/LilycoveCity/scripts.pory"
	end
# 140 "data/maps/LilycoveCity/scripts.pory"

# 141 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 142 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 143 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 144 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
# 145 "data/maps/LilycoveCity/scripts.pory"
	end
# 146 "data/maps/LilycoveCity/scripts.pory"

# 147 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 148 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 149 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 150 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 151 "data/maps/LilycoveCity/scripts.pory"
	end
# 152 "data/maps/LilycoveCity/scripts.pory"

# 153 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 154 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 155 "data/maps/LilycoveCity/scripts.pory"
	end
# 156 "data/maps/LilycoveCity/scripts.pory"

# 157 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 158 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 159 "data/maps/LilycoveCity/scripts.pory"
	end
# 160 "data/maps/LilycoveCity/scripts.pory"

# 161 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 162 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 163 "data/maps/LilycoveCity/scripts.pory"
	end
# 164 "data/maps/LilycoveCity/scripts.pory"

# 165 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 166 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 167 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 168 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 169 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 170 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 171 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 172 "data/maps/LilycoveCity/scripts.pory"
	end
# 173 "data/maps/LilycoveCity/scripts.pory"

# 174 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 175 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 176 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 177 "data/maps/LilycoveCity/scripts.pory"
	end
# 178 "data/maps/LilycoveCity/scripts.pory"

# 179 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 180 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 181 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 182 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 183 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 184 "data/maps/LilycoveCity/scripts.pory"
	end
# 185 "data/maps/LilycoveCity/scripts.pory"

# 186 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 187 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 188 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 189 "data/maps/LilycoveCity/scripts.pory"
	end
# 190 "data/maps/LilycoveCity/scripts.pory"

# 191 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 192 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 193 "data/maps/LilycoveCity/scripts.pory"
	end
# 194 "data/maps/LilycoveCity/scripts.pory"

# 195 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 196 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 197 "data/maps/LilycoveCity/scripts.pory"
	end
# 198 "data/maps/LilycoveCity/scripts.pory"

# 199 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 200 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 201 "data/maps/LilycoveCity/scripts.pory"
	end
# 202 "data/maps/LilycoveCity/scripts.pory"

# 203 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 204 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 205 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 206 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 207 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 208 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 209 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 210 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 211 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 212 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 213 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 214 "data/maps/LilycoveCity/scripts.pory"
	end
# 215 "data/maps/LilycoveCity/scripts.pory"

# 216 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 217 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 218 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 219 "data/maps/LilycoveCity/scripts.pory"
	end
# 220 "data/maps/LilycoveCity/scripts.pory"

# 221 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 222 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 223 "data/maps/LilycoveCity/scripts.pory"
	end
# 224 "data/maps/LilycoveCity/scripts.pory"

# 225 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 226 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 227 "data/maps/LilycoveCity/scripts.pory"
	end
# 228 "data/maps/LilycoveCity/scripts.pory"

# 229 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 230 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 231 "data/maps/LilycoveCity/scripts.pory"
	end
# 232 "data/maps/LilycoveCity/scripts.pory"

# 233 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 234 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 235 "data/maps/LilycoveCity/scripts.pory"
	end
# 236 "data/maps/LilycoveCity/scripts.pory"

# 237 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 238 "data/maps/LilycoveCity/scripts.pory"
	lock
# 239 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 240 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 241 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
# 242 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
# 243 "data/maps/LilycoveCity/scripts.pory"
	end
# 244 "data/maps/LilycoveCity/scripts.pory"

# 245 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 246 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 247 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 248 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 249 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
# 250 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 251 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 252 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleMayTreecko
# 253 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleMayTorchic
# 254 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleMayMudkip
# 255 "data/maps/LilycoveCity/scripts.pory"
	end
# 256 "data/maps/LilycoveCity/scripts.pory"

# 257 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 258 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 259 "data/maps/LilycoveCity/scripts.pory"
	return
# 260 "data/maps/LilycoveCity/scripts.pory"

# 261 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 262 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 263 "data/maps/LilycoveCity/scripts.pory"
	return
# 264 "data/maps/LilycoveCity/scripts.pory"

# 265 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 266 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 267 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 268 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 269 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 270 "data/maps/LilycoveCity/scripts.pory"
	release
# 271 "data/maps/LilycoveCity/scripts.pory"
	end
# 272 "data/maps/LilycoveCity/scripts.pory"

# 273 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 274 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 275 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 276 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 277 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 278 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 279 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 280 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
# 281 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
# 282 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
# 283 "data/maps/LilycoveCity/scripts.pory"
	end
# 284 "data/maps/LilycoveCity/scripts.pory"

# 285 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 286 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 287 "data/maps/LilycoveCity/scripts.pory"
	return
# 288 "data/maps/LilycoveCity/scripts.pory"

# 289 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 290 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 291 "data/maps/LilycoveCity/scripts.pory"
	return
# 292 "data/maps/LilycoveCity/scripts.pory"

# 293 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 294 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 295 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 296 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 297 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 298 "data/maps/LilycoveCity/scripts.pory"
	release
# 299 "data/maps/LilycoveCity/scripts.pory"
	end
# 300 "data/maps/LilycoveCity/scripts.pory"

# 301 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko::
# 302 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 303 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 304 "data/maps/LilycoveCity/scripts.pory"
	end
# 305 "data/maps/LilycoveCity/scripts.pory"

# 306 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 307 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 308 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 309 "data/maps/LilycoveCity/scripts.pory"
	end
# 310 "data/maps/LilycoveCity/scripts.pory"

# 311 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip::
# 312 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 313 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 314 "data/maps/LilycoveCity/scripts.pory"
	end
# 315 "data/maps/LilycoveCity/scripts.pory"

# 316 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 317 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 318 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 319 "data/maps/LilycoveCity/scripts.pory"
	end
# 320 "data/maps/LilycoveCity/scripts.pory"

# 321 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic::
# 322 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 323 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 324 "data/maps/LilycoveCity/scripts.pory"
	end
# 325 "data/maps/LilycoveCity/scripts.pory"

# 326 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip::
# 327 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 328 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 329 "data/maps/LilycoveCity/scripts.pory"
	end
# 330 "data/maps/LilycoveCity/scripts.pory"

# 331 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 332 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 333 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 334 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 335 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 336 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 337 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 338 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 339 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 340 "data/maps/LilycoveCity/scripts.pory"
	end
# 341 "data/maps/LilycoveCity/scripts.pory"

# 342 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 343 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 344 "data/maps/LilycoveCity/scripts.pory"
	return
# 345 "data/maps/LilycoveCity/scripts.pory"

# 346 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 347 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 348 "data/maps/LilycoveCity/scripts.pory"
	return
# 349 "data/maps/LilycoveCity/scripts.pory"

# 350 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 351 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 352 "data/maps/LilycoveCity/scripts.pory"
	return
# 353 "data/maps/LilycoveCity/scripts.pory"

# 354 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 355 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 356 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 357 "data/maps/LilycoveCity/scripts.pory"
	return
# 358 "data/maps/LilycoveCity/scripts.pory"

# 359 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 360 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 361 "data/maps/LilycoveCity/scripts.pory"
	return
# 362 "data/maps/LilycoveCity/scripts.pory"

# 363 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 364 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 365 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 366 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 367 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 368 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 369 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 370 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 371 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 372 "data/maps/LilycoveCity/scripts.pory"
	end
# 373 "data/maps/LilycoveCity/scripts.pory"

# 374 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 375 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 376 "data/maps/LilycoveCity/scripts.pory"
	return
# 377 "data/maps/LilycoveCity/scripts.pory"

# 378 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 379 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 380 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 381 "data/maps/LilycoveCity/scripts.pory"
	return
# 382 "data/maps/LilycoveCity/scripts.pory"

# 383 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 384 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 385 "data/maps/LilycoveCity/scripts.pory"
	return
# 386 "data/maps/LilycoveCity/scripts.pory"

# 387 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 388 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 389 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 390 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 391 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 392 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 393 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 394 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 395 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 396 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 397 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 398 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 399 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 400 "data/maps/LilycoveCity/scripts.pory"
	release
# 401 "data/maps/LilycoveCity/scripts.pory"
	end
# 402 "data/maps/LilycoveCity/scripts.pory"

# 403 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 404 "data/maps/LilycoveCity/scripts.pory"
	lock
# 405 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 406 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 407 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 408 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 409 "data/maps/LilycoveCity/scripts.pory"
	release
# 410 "data/maps/LilycoveCity/scripts.pory"
	end
# 411 "data/maps/LilycoveCity/scripts.pory"

# 412 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 413 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 414 "data/maps/LilycoveCity/scripts.pory"
	return
# 415 "data/maps/LilycoveCity/scripts.pory"

# 416 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 417 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 418 "data/maps/LilycoveCity/scripts.pory"
	return
# 419 "data/maps/LilycoveCity/scripts.pory"

# 420 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 421 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, hey?\n"
# 422 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 423 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of DOLLS and\n"
# 424 "data/maps/LilycoveCity/scripts.pory"
	.string "POSTERS.\p"
# 425 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 426 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON, and I'm raising them\l"
# 427 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 428 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 429 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
# 430 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 431 "data/maps/LilycoveCity/scripts.pory"
	.string "me your POKéMON, {PLAYER}{KUN}.$"
# 432 "data/maps/LilycoveCity/scripts.pory"

# 433 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 434 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
# 435 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your POKéMON?\p"
# 436 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 437 "data/maps/LilycoveCity/scripts.pory"
	.string "TRAINER…$"
# 438 "data/maps/LilycoveCity/scripts.pory"

# 439 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 440 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\n"
# 441 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your POKéMON!$"
# 442 "data/maps/LilycoveCity/scripts.pory"

# 443 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: The POKéMON I raised won't be\n"
# 445 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"
# 446 "data/maps/LilycoveCity/scripts.pory"

# 447 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 448 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 449 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 452 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 453 "data/maps/LilycoveCity/scripts.pory"

# 454 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 455 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: I'm thinking of going back to\n"
# 456 "data/maps/LilycoveCity/scripts.pory"
	.string "LITTLEROOT soon.\p"
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of POKéMON,\n"
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "and my POKéDEX is coming along, so\l"
# 459 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 460 "data/maps/LilycoveCity/scripts.pory"

# 461 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 462 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 463 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 464 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting BADGES,\n"
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 467 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. I'll complete it before you!\p"
# 468 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 469 "data/maps/LilycoveCity/scripts.pory"

# 470 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 471 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 472 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the POKéMON LEAGUE\n"
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 474 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 475 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 476 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 478 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 479 "data/maps/LilycoveCity/scripts.pory"

# 480 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 481 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 484 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 485 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 488 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 489 "data/maps/LilycoveCity/scripts.pory"

# 490 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 491 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, hey, it's {PLAYER}.\p"
# 492 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 493 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any DOLLS.\p"
# 494 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 495 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 496 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON better?$"
# 497 "data/maps/LilycoveCity/scripts.pory"

# 498 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 499 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, what's the matter?\n"
# 500 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 501 "data/maps/LilycoveCity/scripts.pory"

# 502 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 503 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Want to battle to see who's\n"
# 504 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising POKéMON better?$"
# 505 "data/maps/LilycoveCity/scripts.pory"

# 506 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 507 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Aww, but you know I'm not\n"
# 508 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 509 "data/maps/LilycoveCity/scripts.pory"

# 510 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 511 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 512 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 513 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 514 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a TRAINER…$"
# 515 "data/maps/LilycoveCity/scripts.pory"

# 516 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 517 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: I…\n"
# 518 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to LITTLEROOT.\p"
# 519 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 520 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. It's coming together pretty\l"
# 521 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 522 "data/maps/LilycoveCity/scripts.pory"

# 523 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 524 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 525 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 529 "data/maps/LilycoveCity/scripts.pory"

# 530 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 531 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 532 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 533 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the POKéMON LEAGUE challenge?\p"
# 534 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my POKéMON\n"
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 536 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 537 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 538 "data/maps/LilycoveCity/scripts.pory"

# 539 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 543 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 544 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 546 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the BATTLE FRONTIER.\p"
# 547 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my POKéMON a bit more,\n"
# 548 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 549 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the BATTLE\n"
# 550 "data/maps/LilycoveCity/scripts.pory"
	.string "FRONTIER.\p"
# 551 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 552 "data/maps/LilycoveCity/scripts.pory"

# 553 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 554 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 555 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 556 "data/maps/LilycoveCity/scripts.pory"
	.string "HIDEOUT today…\p"
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 558 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 559 "data/maps/LilycoveCity/scripts.pory"

# 560 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 561 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a GRUNT, so I don't know what\n"
# 562 "data/maps/LilycoveCity/scripts.pory"
	.string "the BOSS is thinking…\p"
# 563 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on TEAM AQUA, I know I'll get\n"
# 564 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 565 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 566 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 567 "data/maps/LilycoveCity/scripts.pory"

# 568 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 569 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 570 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 571 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 572 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 573 "data/maps/LilycoveCity/scripts.pory"

# 574 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 575 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 576 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's, it will be a happier\l"
# 577 "data/maps/LilycoveCity/scripts.pory"
	.string "place for POKéMON, too.$"
# 578 "data/maps/LilycoveCity/scripts.pory"

# 579 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 580 "data/maps/LilycoveCity/scripts.pory"
	.string "There! WAILMER!\n"
# 581 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 582 "data/maps/LilycoveCity/scripts.pory"

# 583 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 585 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 586 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 587 "data/maps/LilycoveCity/scripts.pory"

# 588 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 589 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a POKéMON CONTEST HALL\n"
# 590 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 591 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised POKéMON will\n"
# 592 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 593 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 594 "data/maps/LilycoveCity/scripts.pory"

# 595 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 596 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 597 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 598 "data/maps/LilycoveCity/scripts.pory"

# 599 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 600 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my POKéMON some new\n"
# 601 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a CONTEST.\p"
# 602 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the MOVE DELETER\n"
# 603 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 604 "data/maps/LilycoveCity/scripts.pory"

# 605 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 606 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from KANTO.\p"
# 607 "data/maps/LilycoveCity/scripts.pory"
	.string "The HOENN region is beautiful with\n"
# 608 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 609 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 610 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare POKéMON that live\n"
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 612 "data/maps/LilycoveCity/scripts.pory"

# 613 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 614 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's been training their\n"
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "WAILMER in the cove.\p"
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "We SAILORS can't get our boats out\n"
# 617 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 618 "data/maps/LilycoveCity/scripts.pory"

# 619 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 620 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 621 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted TEAM AQUA out of\n"
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 623 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the WAILMER out of the cove,\n"
# 624 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 625 "data/maps/LilycoveCity/scripts.pory"

# 626 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 627 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 628 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my POKéMON!\p"
# 630 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 631 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA? Is it TEAM AQUA?$"
# 632 "data/maps/LilycoveCity/scripts.pory"

# 633 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 634 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing POKéMON…\n"
# 635 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 636 "data/maps/LilycoveCity/scripts.pory"

# 637 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 638 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an ART DEALER.\p"
# 639 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 640 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 641 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the MUSEUM here has\n"
# 642 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 643 "data/maps/LilycoveCity/scripts.pory"

# 644 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 646 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 647 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 648 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 649 "data/maps/LilycoveCity/scripts.pory"

# 650 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 651 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 652 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 653 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 654 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 655 "data/maps/LilycoveCity/scripts.pory"

# 656 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 657 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 658 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 659 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that TEAM AQUA lot came\l"
# 661 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 662 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 663 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving TEAM AQUA”!\p"
# 664 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 665 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 666 "data/maps/LilycoveCity/scripts.pory"

# 667 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 668 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 669 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 670 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 671 "data/maps/LilycoveCity/scripts.pory"
	.string "That TEAM AQUA lot, they must\n"
# 672 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 673 "data/maps/LilycoveCity/scripts.pory"

# 674 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 675 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY\p"
# 676 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 677 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 678 "data/maps/LilycoveCity/scripts.pory"

# 679 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 680 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON CONTEST HALL\n"
# 681 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for TRAINERS!”$"
# 682 "data/maps/LilycoveCity/scripts.pory"

# 683 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 684 "data/maps/LilycoveCity/scripts.pory"
	.string "COVE LILY MOTEL\p"
# 685 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as COVE LILY of\n"
# 686 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE.”$"
# 687 "data/maps/LilycoveCity/scripts.pory"

# 688 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 689 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 690 "data/maps/LilycoveCity/scripts.pory"
	.string "“POKéMON Masterpiece Collection\n"
# 691 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 692 "data/maps/LilycoveCity/scripts.pory"

# 693 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 694 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 695 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s POKéMON Collection\n"
# 696 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 697 "data/maps/LilycoveCity/scripts.pory"

# 698 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 699 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 700 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 701 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in SLATEPORT CITY.\p"
# 702 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 703 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 704 "data/maps/LilycoveCity/scripts.pory"

# 705 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 706 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 707 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 708 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 709 "data/maps/LilycoveCity/scripts.pory"

# 710 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 711 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
# 712 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of TRAINERS are scribbled\n"
# 713 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 714 "data/maps/LilycoveCity/scripts.pory"

# 715 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 716 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p"
# 717 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 718 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 719 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 720 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 721 "data/maps/LilycoveCity/scripts.pory"

# 722 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 723 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVE DELETER'S HOUSE\p"
# 724 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted POKéMON moves deleted.”$"
# 725 "data/maps/LilycoveCity/scripts.pory"

# 726 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 727 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 728 "data/maps/LilycoveCity/scripts.pory"
	.string "BERRY BLENDER?$"
# 729 "data/maps/LilycoveCity/scripts.pory"

# 730 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 731 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 732 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 733 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 734 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}S you can get, I've heard.$"
# 735 "data/maps/LilycoveCity/scripts.pory"

# 736 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 737 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 738 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 739 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a POKéMON,\n"
# 740 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 741 "data/maps/LilycoveCity/scripts.pory"

# 742 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 743 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 744 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 745 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the SKY PILLAR, I hear.$"
# 746 "data/maps/LilycoveCity/scripts.pory"

# 747 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 748 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 749 "data/maps/LilycoveCity/scripts.pory"
	.string "around ROUTE 131.\p"
# 750 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 751 "data/maps/LilycoveCity/scripts.pory"

# 752 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 753 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 754 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 755 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a DRAGON-type\n"
# 756 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON flying way up in the sky.\p"
# 757 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool POKéMON like that live in\n"
# 758 "data/maps/LilycoveCity/scripts.pory"
	.string "the HOENN region?$"
# 759 "data/maps/LilycoveCity/scripts.pory"

# 760 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 761 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 762 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare POKéMON as we can.\p"
# 763 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 764 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON as soon as we arrived.\p"
# 765 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"
