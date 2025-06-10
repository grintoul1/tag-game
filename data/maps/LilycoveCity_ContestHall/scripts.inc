# 1 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 2 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ VAR_LAST_TALKED would have made all these direct references unnecessary
# 3 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 4 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_MapScripts::
# 5 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 7 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Boy1::
# 8 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_TodayWonSmartnessContest, MSGBOX_NPC
# 9 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 10 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 11 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Boy2::
# 12 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EnteredBunchOfContests, MSGBOX_NPC
# 13 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 15 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Girl::
# 16 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks, MSGBOX_NPC
# 17 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 18 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 19 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Sailor::
# 20 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous, MSGBOX_NPC
# 21 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 22 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 23 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestMC::
# 24 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 25 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 26 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal, MSGBOX_DEFAULT
# 27 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 28 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_MC, Common_Movement_FaceOriginalDirection
# 29 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 30 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 31 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 32 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 33 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestJudge::
# 34 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 35 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 36 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest, MSGBOX_DEFAULT
# 37 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 38 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_JUDGE, Common_Movement_FaceOriginalDirection
# 39 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 40 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 41 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 42 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 43 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant1::
# 44 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 45 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 46 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EnteredWrongContest, MSGBOX_DEFAULT
# 47 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 48 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 49 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 50 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 51 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 52 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 53 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant2::
# 54 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 55 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 56 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_RaisedMonToBeSmart, MSGBOX_DEFAULT
# 57 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 58 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 59 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 60 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 61 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 62 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 63 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant3::
# 64 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 65 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 66 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext, MSGBOX_DEFAULT
# 67 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 68 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 69 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 70 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 71 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 72 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 73 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant4::
# 74 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 75 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 76 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife, MSGBOX_DEFAULT
# 77 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 78 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 79 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 80 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 81 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 82 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 83 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience1::
# 84 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa, MSGBOX_SIGN
# 85 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 86 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 87 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience2::
# 88 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 89 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 90 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves, MSGBOX_DEFAULT
# 91 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 92 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 93 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 94 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 95 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 96 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 97 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience3::
# 98 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 99 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 100 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 102 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 103 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 104 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 105 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 106 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 107 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience4::
# 108 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 109 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 110 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_StillLoveSmartnessContests, MSGBOX_DEFAULT
# 111 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 112 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_AUDIENCE_4, Common_Movement_FaceOriginalDirection
# 113 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 114 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 115 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 116 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 117 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestMC::
# 118 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 119 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 120 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest, MSGBOX_DEFAULT
# 121 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 122 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_MC, Common_Movement_FaceOriginalDirection
# 123 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 124 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 125 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 126 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 127 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestJudge::
# 128 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 129 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 130 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty, MSGBOX_DEFAULT
# 131 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 132 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_JUDGE, Common_Movement_FaceOriginalDirection
# 133 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 134 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 135 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 136 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 137 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant1::
# 138 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 139 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 140 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty, MSGBOX_DEFAULT
# 141 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 142 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 143 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 144 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 145 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 146 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 147 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant2::
# 148 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 149 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 150 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_OverdidGrooming, MSGBOX_DEFAULT
# 151 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 152 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 153 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 154 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 155 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 156 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 157 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant3::
# 158 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 159 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 160 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam, MSGBOX_DEFAULT
# 161 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 162 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 163 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 164 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 165 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 166 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 167 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant4::
# 168 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 169 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 170 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe, MSGBOX_DEFAULT
# 171 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 172 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 173 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 174 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 175 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 176 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 177 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience1::
# 178 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 179 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 180 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy, MSGBOX_DEFAULT
# 181 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 182 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_AUDIENCE_1, Common_Movement_FaceOriginalDirection
# 183 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 184 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 185 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 186 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 187 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience2::
# 188 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 189 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 190 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon, MSGBOX_DEFAULT
# 191 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 192 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 193 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 194 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 195 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 196 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 197 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience3::
# 198 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 199 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 200 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone, MSGBOX_DEFAULT
# 201 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 202 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 203 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 204 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 205 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 206 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 207 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestMC::
# 208 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 209 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 210 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_InTheMiddleOfContest, MSGBOX_DEFAULT
# 211 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 212 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_MC, Common_Movement_FaceOriginalDirection
# 213 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 214 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 215 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 216 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 217 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestJudge::
# 218 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 219 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 220 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals, MSGBOX_DEFAULT
# 221 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 222 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_JUDGE, Common_Movement_FaceOriginalDirection
# 223 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 224 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 225 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 226 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 227 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant1::
# 228 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 229 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 230 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyAzurillWasDistracted, MSGBOX_DEFAULT
# 231 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 232 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 233 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 234 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 235 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 236 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 237 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant2::
# 238 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 239 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 240 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_NeverWonBattleButContest, MSGBOX_DEFAULT
# 241 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 242 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 243 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 244 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 245 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 246 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 247 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant3::
# 248 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 249 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 250 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PetalDanceIsMarvel, MSGBOX_DEFAULT
# 251 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 252 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 253 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 254 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 255 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 256 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 257 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant4::
# 258 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 259 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 260 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter, MSGBOX_DEFAULT
# 261 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 262 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 263 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 264 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 265 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 266 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 267 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience1::
# 268 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lockall
# 269 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FacePlayer
# 270 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 271 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyChildIsInContest, MSGBOX_DEFAULT
# 272 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 273 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FaceOriginalDirection
# 274 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 275 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	delay 25
# 276 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ComeOnDear, MSGBOX_DEFAULT
# 277 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	releaseall
# 278 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 279 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 280 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience2::
# 281 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 282 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 283 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn, MSGBOX_DEFAULT
# 284 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 285 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 286 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 287 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 288 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 289 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 290 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience3::
# 291 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 292 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 293 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest, MSGBOX_DEFAULT
# 294 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 295 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 296 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 297 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 298 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 299 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 300 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyStageSign::
# 301 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_BeautyContestStage, MSGBOX_SIGN
# 302 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 303 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 304 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteStageSign::
# 305 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_CuteContestStage, MSGBOX_SIGN
# 306 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 307 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 308 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartStageSign::
# 309 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_SmartContestStage, MSGBOX_SIGN
# 310 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 311 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 312 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_TodayWonSmartnessContest:
# 313 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "This POKéMON won the BEAUTY CONTEST\n"
# 314 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "here before.\p"
# 315 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Well, guess what? Today, I made it\n"
# 316 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "win a SMARTNESS CONTEST!\p"
# 317 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My abilities scare even me…$"
# 318 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 319 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EnteredBunchOfContests:
# 320 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I've entered a bunch of CONTESTS,\n"
# 321 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "so I'm seeing how things work.\p"
# 322 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "If you're in a COOLNESS CONTEST,\n"
# 323 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "cool moves go over as appeals.\p"
# 324 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "But smart moves and cute moves\n"
# 325 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "don't go over well, for instance.$"
# 326 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 327 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks:
# 328 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "That young man who won earlier had\n"
# 329 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "a whole bunch of different {POKEBLOCK}S.\p"
# 330 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Can you win if you had that many\n"
# 331 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "of those things?$"
# 332 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 333 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous:
# 334 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Whoa, isn't this place humongous!\p"
# 335 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "The tension in the air… It's not\n"
# 336 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "like a CONTEST hall in the sticks.$"
# 337 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 338 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal:
# 339 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "MC: Okay, SMART POKéMON and their\n"
# 340 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "TRAINERS, are you ready?!\p"
# 341 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Give it your best showing!\n"
# 342 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Let's appeal!$"
# 343 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 344 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest:
# 345 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "JUDGE: Are you enjoying this CONTEST?\p"
# 346 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Come back with three friends, and\n"
# 347 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "all of you may enter a CONTEST!$"
# 348 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 349 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EnteredWrongContest:
# 350 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ayayayay…\n"
# 351 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I entered the wrong CONTEST.\p"
# 352 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I entered this tough POKéMON in\n"
# 353 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "the SMARTNESS CONTEST…\p"
# 354 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Come on, wow them with a smart-looking\n"
# 355 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "ROCK SMASH.$"
# 356 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 357 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_RaisedMonToBeSmart:
# 358 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I've spent many a year, and all my\n"
# 359 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "wisdom besides, raising this POKéMON\l"
# 360 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "to be smart.\p"
# 361 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "It won't be easily bested by some\n"
# 362 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "young pup's POKéMON.\p"
# 363 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My dear wife, are you seeing this?$"
# 364 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 365 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext:
# 366 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "There it is!\p"
# 367 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "If my POKéMON pulls a smart move next,\n"
# 368 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "the audience's excitement will peak!$"
# 369 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 370 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife:
# 371 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, dear, no!\p"
# 372 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My darling ZUBAT's LEECH LIFE is so\n"
# 373 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "cute I kept using it over and over!\p"
# 374 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "But these mean people don't appreciate\n"
# 375 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "it at all!$"
# 376 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 377 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa:
# 378 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Kiyaaah! You're beautiful, Grandpa!$"
# 379 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 380 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves:
# 381 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Even when TRAINERS enter the same\n"
# 382 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "kind of POKéMON, they all seem to use\l"
# 383 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "different moves for appeals.\p"
# 384 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "It's just like the way people have\n"
# 385 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "different styles for battling.$"
# 386 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 387 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers:
# 388 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I think the POKéMON look smarter\n"
# 389 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "than their TRAINERS. By a lot.$"
# 390 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 391 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_StillLoveSmartnessContests:
# 392 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "When all's said and done, I still love\n"
# 393 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "SMARTNESS CONTESTS.\p"
# 394 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "That intellectual green color…\n"
# 395 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "It's so… So… Cool.$"
# 396 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 397 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest:
# 398 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "MC: Are you entering the BEAUTY\n"
# 399 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "CONTEST, too? Good luck!$"
# 400 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 401 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty:
# 402 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "JUDGE: Ah, every POKéMON here is\n"
# 403 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "a model of pristine beauty!\p"
# 404 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Why, I almost forgot to score them!$"
# 405 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 406 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty:
# 407 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "A POKéMON this beautiful…\n"
# 408 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "There isn't another one like it.\p"
# 409 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Everyone's eyes will be glued to\n"
# 410 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "my beauty.$"
# 411 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 412 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_OverdidGrooming:
# 413 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Waaaah!\p"
# 414 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I brushed and groomed my POKéMON\n"
# 415 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "carefully for this CONTEST…\p"
# 416 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "But I overdid it…\n"
# 417 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My POKéMON's coat turned all scraggly…\p"
# 418 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "What should I do?$"
# 419 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 420 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam:
# 421 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "This AURORA BEAM is so dazzling,\n"
# 422 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "the JUDGE won't be able to see it.\p"
# 423 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Uh, wait a second…\n"
# 424 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "That'll be meaningless, then!$"
# 425 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 426 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe:
# 427 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "This pretty POKéMON looks just like\n"
# 428 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "me when I was younger.\p"
# 429 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Right when I said that, my husband\n"
# 430 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "spewed the coffee he was drinking.\p"
# 431 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Did I say something funny?$"
# 432 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 433 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy:
# 434 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "You know, if I win at a BEAUTY\n"
# 435 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "CONTEST, sure it makes me\l"
# 436 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "happy. More than usual, anyway.$"
# 437 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 438 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon:
# 439 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wahahahah!\p"
# 440 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Will you take a gander at all those\n"
# 441 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "pretty POKéMON!\l"
# 442 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I just love this sort of glitz!$"
# 443 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 444 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone:
# 445 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "You can't always win on just beauty\n"
# 446 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "alone.\p"
# 447 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "You have to groom your POKéMON so\n"
# 448 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "it's nice and glossy like mine.$"
# 449 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 450 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_InTheMiddleOfContest:
# 451 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "MC: Uh-oh! Hello!\n"
# 452 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "We're in the middle of a CONTEST!\p"
# 453 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Please enter at our registration\n"
# 454 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "counter and come out, okay?$"
# 455 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 456 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals:
# 457 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "JUDGE: Oh, such charming and cute\n"
# 458 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "appeals!\p"
# 459 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, my goodness! What a perfectly\n"
# 460 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "adorable WATER SPORT appeal!$"
# 461 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 462 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyAzurillWasDistracted:
# 463 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, no… My sweet AZURILL was\n"
# 464 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "distracted by another POKéMON.$"
# 465 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 466 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_NeverWonBattleButContest:
# 467 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My POKéMON has never won in a battle,\n"
# 468 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "but put it in a CONTEST and look out!$"
# 469 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 470 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PetalDanceIsMarvel:
# 471 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My POKéMON's PETAL DANCE is a marvel\n"
# 472 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "of elegance.\p"
# 473 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I won't let anyone disturb its\n"
# 474 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "performance.$"
# 475 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 476 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter:
# 477 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Everyone's POKéMON are very cute.\p"
# 478 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "However, if my POKéMON were to make\n"
# 479 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "a cute appeal…\p"
# 480 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I'm sure that it would be so much \n"
# 481 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "cuter than the others.$"
# 482 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 483 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyChildIsInContest:
# 484 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My child is in this CONTEST.$"
# 485 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 486 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ComeOnDear:
# 487 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Come on, dear. Go for it!\n"
# 488 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Your POKéMON is the best!$"
# 489 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 490 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest:
# 491 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I think that girl over there is\n"
# 492 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "the cutest of the lot.\p"
# 493 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "What's that? They're judging\n"
# 494 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "POKéMON by their looks?$"
# 495 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 496 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn:
# 497 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ohh, seeing all these cute POKéMON,\n"
# 498 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "they make we want to get my own!\p"
# 499 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I'm going to go catch some!$"
# 500 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 501 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_BeautyContestStage:
# 502 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BEAUTY CONTEST STAGE\n"
# 503 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BE ALLURED BY BEAUTIFUL POKéMON!$"
# 504 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 505 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_CuteContestStage:
# 506 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "CUTENESS CONTEST STAGE\n"
# 507 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BE CHARMED BY CUTE POKéMON!$"
# 508 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 509 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_SmartContestStage:
# 510 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "SMARTNESS CONTEST STAGE\n"
# 511 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BE IMPRESSED BY SMART POKéMON!$"
