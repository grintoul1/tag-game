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
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_1F_OnFrame
# 16 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.byte 0
# 17 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 18 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnFrame:
# 19 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 54, MossdeepCity_SpaceCenter_1F_EventScript_ProgressEmmieState
# 20 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 56, MossdeepCity_SpaceCenter_1F_EventScript_ProgressEmmieState
# 21 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.2byte 0
# 22 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 23 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ProgressEmmieState::
# 24 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 55
# 25 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 26 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 27 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnTransition:
# 28 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma
# 29 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 30 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 31 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma::
# 32 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SAILOR, 1, 9
# 33 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
# 34 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_WOMAN, 0, 8
# 35 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
# 36 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 1, 6
# 37 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_OLD_MAN, MOVEMENT_TYPE_FACE_RIGHT
# 38 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST_1, 3, 4
# 39 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST_1, MOVEMENT_TYPE_FACE_RIGHT
# 40 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST_2, MOVEMENT_TYPE_FACE_RIGHT
# 41 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 42 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 43 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnLoad:
# 44 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_le VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote
# 45 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 46 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 47 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote::
# 48 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setmetatile 2, 5, METATILE_Facility_DataPad, TRUE
# 49 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 50 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 51 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter::
# 52 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 53 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 54 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma
# 55 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 56 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 57 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 58 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, 0, MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet
# 59 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_ge VAR_RESULT, 1, MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber
# 60 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 61 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 62 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 64 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 65 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 66 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet::
# 67 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent, MSGBOX_DEFAULT
# 68 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 69 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 70 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber::
# 71 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber, MSGBOX_DEFAULT
# 72 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 73 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 74 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma::
# 75 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 76 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 77 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 78 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, 0, MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma
# 79 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_ge VAR_RESULT, 1, MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma
# 80 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 81 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 82 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 84 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 85 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 86 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma::
# 87 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent, MSGBOX_DEFAULT
# 88 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 89 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 90 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma::
# 91 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber, MSGBOX_DEFAULT
# 92 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 93 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 94 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Scientist::
# 95 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 96 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 97 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma
# 98 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection, MSGBOX_DEFAULT
# 99 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 100 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 101 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 102 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma::
# 103 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter, MSGBOX_DEFAULT
# 104 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 105 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 106 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 107 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 108 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 109 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan::
# 110 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 111 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 112 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma
# 113 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone
# 114 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt, MSGBOX_DEFAULT
# 115 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 116 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 117 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 118 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 119 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 120 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 121 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 122 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone::
# 123 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 124 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 125 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 126 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 127 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma::
# 128 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma
# 129 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis, MSGBOX_DEFAULT
# 130 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 131 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 132 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 133 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 134 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 135 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 136 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 137 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 138 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 139 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma::
# 140 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 141 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 142 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 143 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 144 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 145 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 146 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman::
# 147 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 148 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 149 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
# 150 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
# 151 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
# 152 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
# 153 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 154 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 155 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal::
# 156 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace, MSGBOX_DEFAULT
# 157 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 158 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 159 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 160 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma::
# 161 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma, MSGBOX_DEFAULT
# 162 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 163 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 164 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 165 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan::
# 166 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 167 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 168 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
# 169 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
# 170 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
# 171 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
# 172 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 173 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 174 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal::
# 175 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind, MSGBOX_DEFAULT
# 176 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 177 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 178 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 179 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 180 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 181 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 182 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma::
# 183 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream, MSGBOX_DEFAULT
# 184 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 185 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 186 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 187 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 188 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 189 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 190 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Steven::
# 191 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 192 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 193 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel, MSGBOX_DEFAULT
# 194 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 195 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 196 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 198 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 199 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MagmaNote::
# 200 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lockall
# 201 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice, MSGBOX_DEFAULT
# 202 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	releaseall
# 203 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 204 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 205 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2::
# 206 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
lockall
# 207 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playse SE_PIN
# 208 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement LOCALID_GRUNT1, Common_Movement_ExclamationMark
# 209 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 210 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 211 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 212 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 213 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 214 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playse SE_PIN
# 215 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement  LOCALID_GRUNT2, Common_Movement_ExclamationMark
# 216 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 217 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 218 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 219 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 220 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro MSGBOX_AUTOCLOSE
# 221 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
goto MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2DoMultiBattle
# 222 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
releaseall
# 223 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
end
# 224 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 225 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2DoMultiBattle::
# 226 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 227 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_SPACE_CENTER_1, MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat, TRAINER_GRUNT_SPACE_CENTER_2, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat, PARTNER_EMMIE
# 228 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
switch VAR_RESULT
# 229 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
case 1, MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2Victory
# 230 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 231 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
special SetCB2WhiteOut
# 232 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitstate
# 233 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 234 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1Grunt2Victory::
# 235 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 236 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 237 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 239 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 240 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
addvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 242 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
end
# 243 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 244 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4::
# 245 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
lockall
# 246 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playse SE_PIN
# 247 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement LOCALID_GRUNT3, Common_Movement_ExclamationMark
# 248 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 249 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 250 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 251 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 252 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro MSGBOX_AUTOCLOSE
# 253 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playse SE_PIN
# 254 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement  LOCALID_GRUNT4, Common_Movement_ExclamationMark
# 255 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 256 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 257 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 258 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 259 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro MSGBOX_AUTOCLOSE
# 260 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
goto MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4DoMultiBattle
# 261 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
releaseall
# 262 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
end
# 263 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 264 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4DoMultiBattle::
# 265 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 266 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_SPACE_CENTER_3, MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat, TRAINER_GRUNT_SPACE_CENTER_4, MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat, PARTNER_EMMIE
# 267 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
switch VAR_RESULT
# 268 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
case 1, MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4Victory
# 269 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 270 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
special SetCB2WhiteOut
# 271 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitstate
# 272 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 273 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3Grunt4Victory::
# 274 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 275 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 276 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 277 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 278 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
waitmovement 0
# 279 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
addvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 281 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
end
# 282 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 283 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3::
# 284 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 285 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 287 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 288 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1::
# 289 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 290 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 292 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 293 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt4::
# 294 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 295 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 296 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 297 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 298 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2::
# 299 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 300 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated
# 301 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro, MSGBOX_DEFAULT
# 302 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_2, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat
# 303 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F
# 304 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	switch VAR_FACING
# 305 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest
# 306 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
#ifdef BUGFIX
# 307 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_EAST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
# 308 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
#else
# 309 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
# 310 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
#endif
# 311 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_GRUNT2, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs
# 312 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 313 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2
# 314 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 315 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 316 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 317 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated::
# 318 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
# 319 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 320 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 321 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 322 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest::
# 323 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_GRUNT2, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest
# 324 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 325 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 1
# 326 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 327 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 328 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 329 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused by mistake. The movement is handled anyway after the switch (see above)
# 330 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ This also means VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE can never be 3
# 331 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast::
# 332 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_GRUNT2, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast
# 333 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 334 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 3
# 335 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 336 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 337 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 338 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest:
# 339 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 340 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_left
# 341 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 342 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 343 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 344 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused. See above
# 345 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast:
# 346 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 347 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 348 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 349 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 350 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 351 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ This was meant to only handle the player facing North, but by mistake(?) it also handles the player facing East
# 352 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs:
# 353 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	face_left
# 354 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 355 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 356 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 357 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 358 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 359 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent:
# 360 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket's launch is imminent!$"
# 361 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 362 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber:
# 363 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket launched safely!\n"
# 364 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That's successful launch no. {STR_VAR_1}!$"
# 365 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 366 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent:
# 367 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I know that things are a little\n"
# 368 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "haywire right now, but…\p"
# 369 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket's launch is imminent!$"
# 370 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 371 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber:
# 372 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I know that things are a little\n"
# 373 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "haywire right now, but…\p"
# 374 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket launched safely!\n"
# 375 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That's successful launch no. {STR_VAR_1}!$"
# 376 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 377 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection:
# 378 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A rocket launch demands perfection.\n"
# 379 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Not even a 1% margin of error is allowed.\p"
# 380 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Even if it's 99% okay, the whole thing\n"
# 381 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "is useless if 1% happens to be no good.\p"
# 382 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Despite that, we never stop trying.\n"
# 383 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Why? It's a dream that never ends.$"
# 384 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 385 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter:
# 386 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Those MAGMA thugs have their sights\n"
# 387 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "set on our SPACE CENTER.\p"
# 388 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "But we can't allow anything that minor\n"
# 389 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "to interfere with our rocket launch!$"
# 390 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 391 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt:
# 392 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I was taking a stroll down the beach\n"
# 393 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "when I found this.\p"
# 394 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "It's not anything I need, so you can\n"
# 395 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "have it.$"
# 396 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 397 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers:
# 398 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The HOENN region has been famous for \n"
# 399 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "its meteor showers for a long time.$"
# 400 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 401 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis:
# 402 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA can't be allowed to steal\n"
# 403 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the rocket fuel.\p"
# 404 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Oh, by the way, you can have this stone\n"
# 405 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I found on the beach.$"
# 406 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 407 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma:
# 408 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "With TEAM MAGMA around, I guess\n"
# 409 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "strolls on the beach aren't safe.$"
# 410 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 411 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace:
# 412 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Some people claim that POKéMON came\n"
# 413 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "from space. Could it be true?$"
# 414 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 415 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma:
# 416 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM AQUA should take care of\n"
# 417 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA!\p"
# 418 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "But if they did that, TEAM AQUA will\n"
# 419 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "become bold and brazen, won't they?$"
# 420 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 421 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind:
# 422 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A giant chunk of metal bursts through\n"
# 423 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the skies and flies into space…\p"
# 424 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "It boggles my mind!$"
# 425 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 426 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream:
# 427 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A giant chunk of metal bursts through\n"
# 428 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the skies and flies into space…\p"
# 429 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "But TEAM MAGMA wants to spoil\n"
# 430 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "that dream of mine!\p"
# 431 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I'm not having any of that!$"
# 432 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 433 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel:
# 434 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, have you read that\n"
# 435 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "proclamation already?\p"
# 436 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA is coming after the rocket\n"
# 437 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "fuel on this island.\p"
# 438 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I don't know what they'd need it for,\n"
# 439 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "but they can't be allowed to take it.\p"
# 440 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I'll keep an eye on things for\n"
# 441 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "a while longer.\p"
# 442 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "In the meantime, why don't you go\n"
# 443 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "check out the town?$"
# 444 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 445 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro:
# 446 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "As promised, we've come for\n"
# 447 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the rocket fuel!$"
# 448 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 449 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat:
# 450 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ran out of fuel…$"
# 451 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 452 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle:
# 453 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Don't think you're on a roll just\n"
# 454 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "because you've beaten me!$"
# 455 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 456 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro:
# 457 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We gave you fair warning!\n"
# 458 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "There's nothing sneaky about us!$"
# 459 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 460 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat:
# 461 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Grrr…\n"
# 462 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We should've used sneaky treachery…$"
# 463 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 464 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle:
# 465 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Okay, I get it already! The next time,\n"
# 466 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "we'll come unannounced.$"
# 467 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 468 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro:
# 469 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket fuel the SPACE CENTER has\n"
# 470 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "in storage--that's what we're after.\p"
# 471 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We mean to take every last bit of it!$"
# 472 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 473 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat:
# 474 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Please, can you spare some fuel?\n"
# 475 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Even a chintzy cup will do!$"
# 476 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 477 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle:
# 478 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "What are we going to do with\n"
# 479 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the rocket fuel?\p"
# 480 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "How would I know?\n"
# 481 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ask our leader upstairs!$"
# 482 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 483 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro:
# 484 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Our leader said no one, but no one,\n"
# 485 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "gets past me!$"
# 486 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 487 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat:
# 488 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ack! Ack! Aaack!$"
# 489 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 490 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle:
# 491 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Please, tell our leader that\n"
# 492 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I never abandoned my post.\l"
# 493 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That I stayed to the bitter end…$"
# 494 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 495 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice:
# 496 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "This is…\n"
# 497 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "An intent-to-steal notice?\p"
# 498 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“To the staff of the SPACE CENTER:\n"
# 499 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "How are you? We are doing fine.\p"
# 500 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“We will soon visit you to take your\n"
# 501 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "rocket fuel.\p"
# 502 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“Please don't try to stop us.\n"
# 503 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We will take the fuel no matter what.\p"
# 504 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“Let there be more land!\n"
# 505 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "                                          TEAM MAGMA”$"
