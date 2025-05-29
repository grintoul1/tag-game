# 1 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_SCIENTIST_1, 1
# 3 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_SCIENTIST_2, 2
# 4 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_SAILOR, 3
# 5 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_OLD_MAN, 4
# 6 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_WOMAN, 5
# 7 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_GRUNT2, 9
# 8 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_GRUNT1, 7
# 9 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_GRUNT3, 6
# 10 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_GRUNT4, 8
# 11 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 12 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_MapScripts::
# 13 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_SpaceCenter_1F_OnLoad
# 14 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_1F_OnTransition
# 15 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.byte 0
# 16 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 17 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnTransition:
# 18 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma
# 19 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 20 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 21 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma::
# 22 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SAILOR, 1, 9
# 23 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
# 24 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_WOMAN, 0, 8
# 25 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
# 26 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 1, 6
# 27 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_OLD_MAN, MOVEMENT_TYPE_FACE_RIGHT
# 28 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST_1, 3, 4
# 29 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST_1, MOVEMENT_TYPE_FACE_RIGHT
# 30 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST_2, MOVEMENT_TYPE_FACE_RIGHT
# 31 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 32 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 33 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnLoad:
# 34 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_le VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote
# 35 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 36 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 37 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote::
# 38 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setmetatile 2, 5, METATILE_Facility_DataPad, TRUE
# 39 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 40 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 41 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter::
# 42 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 43 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 44 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma
# 45 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 46 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 47 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 48 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, 0, MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet
# 49 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_ge VAR_RESULT, 1, MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber
# 50 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 51 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 52 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 53 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 54 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 55 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 56 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet::
# 57 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent, MSGBOX_DEFAULT
# 58 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 59 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 60 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber::
# 61 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber, MSGBOX_DEFAULT
# 62 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 63 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 64 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma::
# 65 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 66 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 67 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 68 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, 0, MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma
# 69 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_ge VAR_RESULT, 1, MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma
# 70 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 71 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 72 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 74 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 75 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 76 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma::
# 77 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent, MSGBOX_DEFAULT
# 78 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 79 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 80 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma::
# 81 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber, MSGBOX_DEFAULT
# 82 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 83 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 84 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Scientist::
# 85 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 86 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 87 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma
# 88 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection, MSGBOX_DEFAULT
# 89 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 90 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 91 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 92 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma::
# 93 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter, MSGBOX_DEFAULT
# 94 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 95 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 96 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 97 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 98 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 99 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan::
# 100 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 101 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 102 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma
# 103 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone
# 104 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt, MSGBOX_DEFAULT
# 105 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 106 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 107 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 108 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 109 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 110 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 111 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 112 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone::
# 113 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 114 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 115 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 116 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 117 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma::
# 118 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma
# 119 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis, MSGBOX_DEFAULT
# 120 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 121 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 122 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 123 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 124 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 125 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 126 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 127 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 128 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 129 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma::
# 130 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 131 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 132 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 133 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 134 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 135 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 136 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman::
# 137 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 138 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 139 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
# 140 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
# 141 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
# 142 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
# 143 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 144 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 145 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal::
# 146 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace, MSGBOX_DEFAULT
# 147 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 148 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 149 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 150 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma::
# 151 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma, MSGBOX_DEFAULT
# 152 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 153 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 154 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 155 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan::
# 156 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 157 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 158 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
# 159 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
# 160 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
# 161 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
# 162 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 163 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 164 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal::
# 165 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind, MSGBOX_DEFAULT
# 166 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 167 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 168 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 169 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 170 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 171 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 172 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma::
# 173 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream, MSGBOX_DEFAULT
# 174 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 175 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 176 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 177 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 178 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 179 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 180 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Steven::
# 181 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 182 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 183 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel, MSGBOX_DEFAULT
# 184 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 185 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 186 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 187 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 188 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 189 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MagmaNote::
# 190 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lockall
# 191 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice, MSGBOX_DEFAULT
# 192 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	releaseall
# 193 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 194 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 195 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2::
# 196 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
lockall
# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playse SE_PIN
# 198 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement LOCALID_GRUNT1, Common_Movement_ExclamationMark
# 199 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 200 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 201 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 202 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 203 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 204 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playse SE_PIN
# 205 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement  LOCALID_GRUNT2, Common_Movement_ExclamationMark
# 206 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 207 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 208 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 209 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 210 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro MSGBOX_AUTOCLOSE
# 211 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
goto MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2DoMultiBattle
# 212 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
releaseall
# 213 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
end
# 214 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 215 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2DoMultiBattle::
# 216 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 217 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_SPACE_CENTER_1, MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat, TRAINER_GRUNT_SPACE_CENTER_2, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat, PARTNER_EMMIE
# 218 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
switch VAR_RESULT
# 219 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
case 1, MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2Victory
# 220 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 221 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
special SetCB2WhiteOut
# 222 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitstate
# 223 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 224 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2Victory::
# 225 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 226 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 227 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 229 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 230 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
addvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 232 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
end
# 233 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 234 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4::
# 235 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
lockall
# 236 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playse SE_PIN
# 237 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement LOCALID_GRUNT3, Common_Movement_ExclamationMark
# 238 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 239 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 240 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 241 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 242 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro MSGBOX_AUTOCLOSE
# 243 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playse SE_PIN
# 244 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement  LOCALID_GRUNT4, Common_Movement_ExclamationMark
# 245 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 246 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 247 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 248 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 249 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro MSGBOX_AUTOCLOSE
# 250 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
goto MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4DoMultiBattle
# 251 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
releaseall
# 252 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
end
# 253 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 254 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4DoMultiBattle::
# 255 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 256 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_SPACE_CENTER_3, MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat, TRAINER_GRUNT_SPACE_CENTER_4, MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat, PARTNER_EMMIE
# 257 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
switch VAR_RESULT
# 258 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
case 1, MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4Victory
# 259 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 260 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
special SetCB2WhiteOut
# 261 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitstate
# 262 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 263 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4Victory::
# 264 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 265 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 266 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 267 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 268 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 269 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 270 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
addvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 271 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
end
# 272 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 273 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3::
# 274 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 275 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 276 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 277 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 278 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1::
# 279 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 280 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 282 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 283 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt4::
# 284 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 285 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 287 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 288 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2::
# 289 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 290 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated
# 291 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro, MSGBOX_DEFAULT
# 292 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_2, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat
# 293 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F
# 294 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	switch VAR_FACING
# 295 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest
# 296 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
#ifdef BUGFIX
# 297 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_EAST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
# 298 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
#else
# 299 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
# 300 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
#endif
# 301 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_GRUNT2, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs
# 302 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 303 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2
# 304 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 305 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 306 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 307 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated::
# 308 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
# 309 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 310 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 311 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 312 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest::
# 313 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_GRUNT2, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest
# 314 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 315 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 1
# 316 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 317 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 318 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 319 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused by mistake. The movement is handled anyway after the switch (see above)
# 320 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ This also means VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE can never be 3
# 321 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast::
# 322 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_GRUNT2, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast
# 323 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 324 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 3
# 325 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 326 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 327 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 328 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest:
# 329 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 330 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_left
# 331 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 332 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 333 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 334 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused. See above
# 335 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast:
# 336 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 337 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 338 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 339 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 340 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 341 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ This was meant to only handle the player facing North, but by mistake(?) it also handles the player facing East
# 342 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs:
# 343 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	face_left
# 344 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 345 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 346 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 347 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 348 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 349 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent:
# 350 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket's launch is imminent!$"
# 351 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 352 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber:
# 353 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket launched safely!\n"
# 354 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That's successful launch no. {STR_VAR_1}!$"
# 355 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 356 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent:
# 357 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I know that things are a little\n"
# 358 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "haywire right now, but…\p"
# 359 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket's launch is imminent!$"
# 360 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 361 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber:
# 362 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I know that things are a little\n"
# 363 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "haywire right now, but…\p"
# 364 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket launched safely!\n"
# 365 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That's successful launch no. {STR_VAR_1}!$"
# 366 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 367 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection:
# 368 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A rocket launch demands perfection.\n"
# 369 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Not even a 1% margin of error is allowed.\p"
# 370 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Even if it's 99% okay, the whole thing\n"
# 371 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "is useless if 1% happens to be no good.\p"
# 372 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Despite that, we never stop trying.\n"
# 373 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Why? It's a dream that never ends.$"
# 374 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 375 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter:
# 376 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Those MAGMA thugs have their sights\n"
# 377 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "set on our SPACE CENTER.\p"
# 378 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "But we can't allow anything that minor\n"
# 379 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "to interfere with our rocket launch!$"
# 380 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 381 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt:
# 382 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I was taking a stroll down the beach\n"
# 383 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "when I found this.\p"
# 384 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "It's not anything I need, so you can\n"
# 385 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "have it.$"
# 386 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 387 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers:
# 388 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The HOENN region has been famous for \n"
# 389 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "its meteor showers for a long time.$"
# 390 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 391 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis:
# 392 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA can't be allowed to steal\n"
# 393 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the rocket fuel.\p"
# 394 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Oh, by the way, you can have this stone\n"
# 395 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I found on the beach.$"
# 396 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 397 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma:
# 398 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "With TEAM MAGMA around, I guess\n"
# 399 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "strolls on the beach aren't safe.$"
# 400 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 401 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace:
# 402 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Some people claim that POKéMON came\n"
# 403 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "from space. Could it be true?$"
# 404 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 405 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma:
# 406 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM AQUA should take care of\n"
# 407 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA!\p"
# 408 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "But if they did that, TEAM AQUA will\n"
# 409 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "become bold and brazen, won't they?$"
# 410 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 411 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind:
# 412 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A giant chunk of metal bursts through\n"
# 413 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the skies and flies into space…\p"
# 414 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "It boggles my mind!$"
# 415 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 416 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream:
# 417 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A giant chunk of metal bursts through\n"
# 418 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the skies and flies into space…\p"
# 419 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "But TEAM MAGMA wants to spoil\n"
# 420 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "that dream of mine!\p"
# 421 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I'm not having any of that!$"
# 422 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 423 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel:
# 424 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, have you read that\n"
# 425 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "proclamation already?\p"
# 426 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA is coming after the rocket\n"
# 427 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "fuel on this island.\p"
# 428 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I don't know what they'd need it for,\n"
# 429 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "but they can't be allowed to take it.\p"
# 430 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I'll keep an eye on things for\n"
# 431 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "a while longer.\p"
# 432 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "In the meantime, why don't you go\n"
# 433 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "check out the town?$"
# 434 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 435 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro:
# 436 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "As promised, we've come for\n"
# 437 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the rocket fuel!$"
# 438 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 439 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat:
# 440 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ran out of fuel…$"
# 441 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 442 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle:
# 443 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Don't think you're on a roll just\n"
# 444 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "because you've beaten me!$"
# 445 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 446 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro:
# 447 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We gave you fair warning!\n"
# 448 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "There's nothing sneaky about us!$"
# 449 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 450 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat:
# 451 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Grrr…\n"
# 452 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We should've used sneaky treachery…$"
# 453 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 454 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle:
# 455 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Okay, I get it already! The next time,\n"
# 456 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "we'll come unannounced.$"
# 457 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 458 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro:
# 459 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket fuel the SPACE CENTER has\n"
# 460 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "in storage--that's what we're after.\p"
# 461 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We mean to take every last bit of it!$"
# 462 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 463 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat:
# 464 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Please, can you spare some fuel?\n"
# 465 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Even a chintzy cup will do!$"
# 466 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 467 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle:
# 468 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "What are we going to do with\n"
# 469 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the rocket fuel?\p"
# 470 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "How would I know?\n"
# 471 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ask our leader upstairs!$"
# 472 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 473 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro:
# 474 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Our leader said no one, but no one,\n"
# 475 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "gets past me!$"
# 476 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 477 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat:
# 478 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ack! Ack! Aaack!$"
# 479 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 480 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle:
# 481 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Please, tell our leader that\n"
# 482 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I never abandoned my post.\l"
# 483 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That I stayed to the bitter end…$"
# 484 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 485 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice:
# 486 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "This is…\n"
# 487 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "An intent-to-steal notice?\p"
# 488 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“To the staff of the SPACE CENTER:\n"
# 489 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "How are you? We are doing fine.\p"
# 490 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“We will soon visit you to take your\n"
# 491 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "rocket fuel.\p"
# 492 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“Please don't try to stop us.\n"
# 493 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We will take the fuel no matter what.\p"
# 494 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“Let there be more land!\n"
# 495 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "                                          TEAM MAGMA”$"
