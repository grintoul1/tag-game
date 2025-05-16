# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_MATT, 3
# 3 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_SHELLY, 4
# 4 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_JAMES, 10
# 5 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_LYLE, 9
# 6 "data/maps/PetalburgWoods/scripts.pory"

# 7 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 8 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 9 "data/maps/PetalburgWoods/scripts.pory"

# 10 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_MattShelly::
# 11 "data/maps/PetalburgWoods/scripts.pory"
lockall
# 12 "data/maps/PetalburgWoods/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 13 "data/maps/PetalburgWoods/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 14 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 15 "data/maps/PetalburgWoods/scripts.pory"
msgbox PetalburgWoods_Text_MattIntro MSGBOX_AUTOCLOSE
# 16 "data/maps/PetalburgWoods/scripts.pory"
setvar VAR_0x8008, LOCALID_MATT
# 17 "data/maps/PetalburgWoods/scripts.pory"
playse SE_PIN
# 18 "data/maps/PetalburgWoods/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 19 "data/maps/PetalburgWoods/scripts.pory"
setvar VAR_0x8008, LOCALID_SHELLY
# 20 "data/maps/PetalburgWoods/scripts.pory"
playse SE_PIN
# 21 "data/maps/PetalburgWoods/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 22 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 23 "data/maps/PetalburgWoods/scripts.pory"
setvar VAR_0x8008, LOCALID_MATT
# 24 "data/maps/PetalburgWoods/scripts.pory"
applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterUp
# 25 "data/maps/PetalburgWoods/scripts.pory"
setvar VAR_0x8008, LOCALID_SHELLY
# 26 "data/maps/PetalburgWoods/scripts.pory"
applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterUp
# 27 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 28 "data/maps/PetalburgWoods/scripts.pory"
msgbox PetalburgWoods_Text_ShellyIntro MSGBOX_AUTOCLOSE
# 29 "data/maps/PetalburgWoods/scripts.pory"
goto PetalburgWoods_EventScript_MattShellyDoMultiBattle
# 30 "data/maps/PetalburgWoods/scripts.pory"
releaseall
# 31 "data/maps/PetalburgWoods/scripts.pory"
end
# 32 "data/maps/PetalburgWoods/scripts.pory"

# 33 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_MattShellyDoMultiBattle::
# 34 "data/maps/PetalburgWoods/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 35 "data/maps/PetalburgWoods/scripts.pory"
multi_2p_vs_2 TRAINER_MATT_PETALBURG_WOODS, PetalburgWoods_Text_MattDefeat, TRAINER_SHELLY_PETALBURG_WOODS, PetalburgWoods_Text_ShellyDefeat, PARTNER_EMMIE
# 36 "data/maps/PetalburgWoods/scripts.pory"
switch VAR_RESULT
# 37 "data/maps/PetalburgWoods/scripts.pory"
case 1, PetalburgWoods_EventScript_MattShellyVictory
# 38 "data/maps/PetalburgWoods/scripts.pory"
fadescreen FADE_TO_BLACK
# 39 "data/maps/PetalburgWoods/scripts.pory"
special SetCB2WhiteOut
# 40 "data/maps/PetalburgWoods/scripts.pory"
waitstate
# 41 "data/maps/PetalburgWoods/scripts.pory"

# 42 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_MattShellyVictory::
# 43 "data/maps/PetalburgWoods/scripts.pory"
msgbox PetalburgWoods_Text_MattPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/PetalburgWoods/scripts.pory"
applymovement LOCALID_MATT, PetalburgWoods_Movement_AquaRunAway
# 45 "data/maps/PetalburgWoods/scripts.pory"
applymovement LOCALID_SHELLY, PetalburgWoods_Movement_AquaRunAway
# 46 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 47 "data/maps/PetalburgWoods/scripts.pory"
removeobject LOCALID_MATT
# 48 "data/maps/PetalburgWoods/scripts.pory"
removeobject LOCALID_SHELLY
# 49 "data/maps/PetalburgWoods/scripts.pory"
addvar VAR_PETALBURG_WOODS_STATE, 1
# 50 "data/maps/PetalburgWoods/scripts.pory"
setvar VAR_EMMIE_BATTLE_STATE, 1
# 51 "data/maps/PetalburgWoods/scripts.pory"
setflag FLAG_EMMIE_BATTLE_1
# 52 "data/maps/PetalburgWoods/scripts.pory"
end
# 53 "data/maps/PetalburgWoods/scripts.pory"

# 54 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 55 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 56 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 57 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 58 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 59 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 60 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 61 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 62 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 63 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 64 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 65 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 66 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 67 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 68 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 69 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 70 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 71 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 72 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 73 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 74 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 75 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 76 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 77 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 78 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 79 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 80 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 81 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 83 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 84 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 85 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 86 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 87 "data/maps/PetalburgWoods/scripts.pory"
	end
# 88 "data/maps/PetalburgWoods/scripts.pory"

# 89 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 90 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 91 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 92 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 93 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 94 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 95 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 96 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 97 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 98 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 99 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 100 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 101 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 102 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 103 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 104 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 106 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 107 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 108 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 109 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 110 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 111 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 113 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 114 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 115 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 116 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 117 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 118 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 119 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 120 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 121 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 122 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 123 "data/maps/PetalburgWoods/scripts.pory"
	end
# 124 "data/maps/PetalburgWoods/scripts.pory"

# 125 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 126 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 127 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 128 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 129 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 130 "data/maps/PetalburgWoods/scripts.pory"
	return
# 131 "data/maps/PetalburgWoods/scripts.pory"

# 132 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 133 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 134 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 135 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 136 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 137 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 138 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 139 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 140 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 141 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 142 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 143 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 144 "data/maps/PetalburgWoods/scripts.pory"
	end
# 145 "data/maps/PetalburgWoods/scripts.pory"

# 146 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 147 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 148 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 149 "data/maps/PetalburgWoods/scripts.pory"
	end
# 150 "data/maps/PetalburgWoods/scripts.pory"

# 151 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 152 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 153 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 154 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 155 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 156 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 157 "data/maps/PetalburgWoods/scripts.pory"
	return
# 158 "data/maps/PetalburgWoods/scripts.pory"

# 159 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 160 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 161 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 162 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 163 "data/maps/PetalburgWoods/scripts.pory"
	end
# 164 "data/maps/PetalburgWoods/scripts.pory"

# 165 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 166 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 167 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 168 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 169 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 170 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 171 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 172 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 173 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 174 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 175 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 176 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 177 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 178 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 179 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 180 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 181 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 182 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 183 "data/maps/PetalburgWoods/scripts.pory"

# 184 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 186 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 188 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 189 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 190 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 191 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 192 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 193 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 194 "data/maps/PetalburgWoods/scripts.pory"

# 195 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 196 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 197 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 198 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 199 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 200 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 201 "data/maps/PetalburgWoods/scripts.pory"

# 202 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 203 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 204 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 205 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 206 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 207 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 208 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 209 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 210 "data/maps/PetalburgWoods/scripts.pory"

# 211 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 212 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 213 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 214 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 215 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 216 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 217 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 218 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 219 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 220 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 221 "data/maps/PetalburgWoods/scripts.pory"

# 222 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 223 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 224 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 225 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 226 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 227 "data/maps/PetalburgWoods/scripts.pory"

# 228 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 229 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 230 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 231 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 232 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 233 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 234 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 235 "data/maps/PetalburgWoods/scripts.pory"

# 236 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 237 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 238 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 239 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 240 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 241 "data/maps/PetalburgWoods/scripts.pory"

# 242 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 243 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 244 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 245 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 246 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 247 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 248 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 249 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 250 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 251 "data/maps/PetalburgWoods/scripts.pory"

# 252 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 253 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 254 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 255 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 256 "data/maps/PetalburgWoods/scripts.pory"

# 257 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 258 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 259 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 260 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 261 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 262 "data/maps/PetalburgWoods/scripts.pory"

# 263 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 264 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 265 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 266 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 267 "data/maps/PetalburgWoods/scripts.pory"

# 268 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 269 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 270 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 271 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 272 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 273 "data/maps/PetalburgWoods/scripts.pory"

# 274 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 275 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 276 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 277 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 278 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 279 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 280 "data/maps/PetalburgWoods/scripts.pory"

# 281 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 282 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 283 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 284 "data/maps/PetalburgWoods/scripts.pory"

# 285 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 286 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 287 "data/maps/PetalburgWoods/scripts.pory"
	end
# 288 "data/maps/PetalburgWoods/scripts.pory"

# 289 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 290 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 291 "data/maps/PetalburgWoods/scripts.pory"
	end
# 292 "data/maps/PetalburgWoods/scripts.pory"

# 293 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 294 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 295 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 296 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 297 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 298 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 299 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 300 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 301 "data/maps/PetalburgWoods/scripts.pory"
	release
# 302 "data/maps/PetalburgWoods/scripts.pory"
	end
# 303 "data/maps/PetalburgWoods/scripts.pory"

# 304 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 305 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 306 "data/maps/PetalburgWoods/scripts.pory"
	release
# 307 "data/maps/PetalburgWoods/scripts.pory"
	end
# 308 "data/maps/PetalburgWoods/scripts.pory"

# 309 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 310 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 311 "data/maps/PetalburgWoods/scripts.pory"
	end
# 312 "data/maps/PetalburgWoods/scripts.pory"

# 313 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 314 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 315 "data/maps/PetalburgWoods/scripts.pory"
	end
# 316 "data/maps/PetalburgWoods/scripts.pory"

# 317 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 318 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 319 "data/maps/PetalburgWoods/scripts.pory"
	end
# 320 "data/maps/PetalburgWoods/scripts.pory"

# 321 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesLyle::
# 322 "data/maps/PetalburgWoods/scripts.pory"
lockall
# 323 "data/maps/PetalburgWoods/scripts.pory"
setvar VAR_0x8008, LOCALID_JAMES
# 324 "data/maps/PetalburgWoods/scripts.pory"
playse SE_PIN
# 325 "data/maps/PetalburgWoods/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 326 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 327 "data/maps/PetalburgWoods/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 328 "data/maps/PetalburgWoods/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 329 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 330 "data/maps/PetalburgWoods/scripts.pory"
msgbox PetalburgWoods_Text_JamesIntro MSGBOX_AUTOCLOSE
# 331 "data/maps/PetalburgWoods/scripts.pory"
setvar VAR_0x8008, LOCALID_LYLE
# 332 "data/maps/PetalburgWoods/scripts.pory"
playse SE_PIN
# 333 "data/maps/PetalburgWoods/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 334 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 335 "data/maps/PetalburgWoods/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 336 "data/maps/PetalburgWoods/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 337 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 338 "data/maps/PetalburgWoods/scripts.pory"
msgbox PetalburgWoods_Text_LyleIntro MSGBOX_AUTOCLOSE
# 339 "data/maps/PetalburgWoods/scripts.pory"
goto PetalburgWoods_EventScript_JamesLyleDoMultiBattle
# 340 "data/maps/PetalburgWoods/scripts.pory"
releaseall
# 341 "data/maps/PetalburgWoods/scripts.pory"
end
# 342 "data/maps/PetalburgWoods/scripts.pory"

# 343 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesLyleDoMultiBattle::
# 344 "data/maps/PetalburgWoods/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 345 "data/maps/PetalburgWoods/scripts.pory"
multi_2p_vs_2 TRAINER_JAMES_1, PetalburgWoods_Text_JamesDefeat, TRAINER_LYLE, PetalburgWoods_Text_LyleDefeat, PARTNER_EMMIE
# 346 "data/maps/PetalburgWoods/scripts.pory"
switch VAR_RESULT
# 347 "data/maps/PetalburgWoods/scripts.pory"
case 1, PetalburgWoods_EventScript_JamesLyleVictory
# 348 "data/maps/PetalburgWoods/scripts.pory"
fadescreen FADE_TO_BLACK
# 349 "data/maps/PetalburgWoods/scripts.pory"
special SetCB2WhiteOut
# 350 "data/maps/PetalburgWoods/scripts.pory"
waitstate
# 351 "data/maps/PetalburgWoods/scripts.pory"

# 352 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesLyleVictory::
# 353 "data/maps/PetalburgWoods/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 354 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 355 "data/maps/PetalburgWoods/scripts.pory"
msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_AUTOCLOSE
# 356 "data/maps/PetalburgWoods/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 357 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 358 "data/maps/PetalburgWoods/scripts.pory"
msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 359 "data/maps/PetalburgWoods/scripts.pory"
addvar VAR_PETALBURG_WOODS_STATE, 1
# 360 "data/maps/PetalburgWoods/scripts.pory"
end
# 361 "data/maps/PetalburgWoods/scripts.pory"

# 362 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 363 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 364 "data/maps/PetalburgWoods/scripts.pory"
	release
# 365 "data/maps/PetalburgWoods/scripts.pory"
	end
# 366 "data/maps/PetalburgWoods/scripts.pory"

# 367 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 368 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 369 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 370 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 371 "data/maps/PetalburgWoods/scripts.pory"
	release
# 372 "data/maps/PetalburgWoods/scripts.pory"
	end
# 373 "data/maps/PetalburgWoods/scripts.pory"

# 374 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 375 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 376 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 377 "data/maps/PetalburgWoods/scripts.pory"
	release
# 378 "data/maps/PetalburgWoods/scripts.pory"
	end
# 379 "data/maps/PetalburgWoods/scripts.pory"

# 380 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 381 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 382 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 383 "data/maps/PetalburgWoods/scripts.pory"
	release
# 384 "data/maps/PetalburgWoods/scripts.pory"
	end
# 385 "data/maps/PetalburgWoods/scripts.pory"

# 386 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 387 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 388 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 389 "data/maps/PetalburgWoods/scripts.pory"
	release
# 390 "data/maps/PetalburgWoods/scripts.pory"
	end
# 391 "data/maps/PetalburgWoods/scripts.pory"

# 392 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 393 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 394 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 395 "data/maps/PetalburgWoods/scripts.pory"
	end
# 396 "data/maps/PetalburgWoods/scripts.pory"

# 397 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 398 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 399 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 400 "data/maps/PetalburgWoods/scripts.pory"

# 401 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 402 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 409 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 410 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 411 "data/maps/PetalburgWoods/scripts.pory"

# 412 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 415 "data/maps/PetalburgWoods/scripts.pory"

# 416 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 417 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 420 "data/maps/PetalburgWoods/scripts.pory"

# 421 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 423 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 424 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 426 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 427 "data/maps/PetalburgWoods/scripts.pory"

# 428 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 429 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 430 "data/maps/PetalburgWoods/scripts.pory"

# 431 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 438 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 440 "data/maps/PetalburgWoods/scripts.pory"

# 441 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 448 "data/maps/PetalburgWoods/scripts.pory"

# 449 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 453 "data/maps/PetalburgWoods/scripts.pory"

# 454 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 457 "data/maps/PetalburgWoods/scripts.pory"

# 458 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 459 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 461 "data/maps/PetalburgWoods/scripts.pory"

# 462 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_LyleIntro:
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 466 "data/maps/PetalburgWoods/scripts.pory"

# 467 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 468 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 470 "data/maps/PetalburgWoods/scripts.pory"

# 471 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 474 "data/maps/PetalburgWoods/scripts.pory"

# 475 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_JamesIntro:
# 476 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 478 "data/maps/PetalburgWoods/scripts.pory"

# 479 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 480 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 481 "data/maps/PetalburgWoods/scripts.pory"

# 482 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 483 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 484 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 485 "data/maps/PetalburgWoods/scripts.pory"

# 486 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 487 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 488 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 489 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 490 "data/maps/PetalburgWoods/scripts.pory"

# 491 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 492 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 493 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 494 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 495 "data/maps/PetalburgWoods/scripts.pory"

# 496 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 497 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 498 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 499 "data/maps/PetalburgWoods/scripts.pory"

# 500 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 501 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 502 "data/maps/PetalburgWoods/scripts.pory"

# 503 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 504 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 505 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 506 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 507 "data/maps/PetalburgWoods/scripts.pory"

# 508 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 509 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 510 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 511 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 512 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 513 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 514 "data/maps/PetalburgWoods/scripts.pory"

# 515 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 516 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 517 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 518 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 519 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 520 "data/maps/PetalburgWoods/scripts.pory"

# 521 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 522 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 523 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 524 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 525 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 526 "data/maps/PetalburgWoods/scripts.pory"

# 527 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 528 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 529 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 530 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 531 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 532 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 533 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 534 "data/maps/PetalburgWoods/scripts.pory"

# 535 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 536 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 537 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 538 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 539 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 540 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 541 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 542 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 543 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 544 "data/maps/PetalburgWoods/scripts.pory"

# 545 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 546 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 547 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 548 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 549 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 550 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 551 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"
# 552 "data/maps/PetalburgWoods/scripts.pory"

# 553 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MattIntro:
# 554 "data/maps/PetalburgWoods/scripts.pory"
	.string "Matt: What was that idiot thinking\n"
# 555 "data/maps/PetalburgWoods/scripts.pory"
	.string "taking that old man's Wingull?\p"
# 556 "data/maps/PetalburgWoods/scripts.pory"
	.string "Shelly: Just what we needed. Attention\n"
# 557 "data/maps/PetalburgWoods/scripts.pory"
	.string "before we execute our Slateport plans.$"
# 558 "data/maps/PetalburgWoods/scripts.pory"

# 559 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ShellyIntro:
# 560 "data/maps/PetalburgWoods/scripts.pory"
	.string "Shelly: Now what do we have here?\p"
# 561 "data/maps/PetalburgWoods/scripts.pory"
	.string "Matt: Children that need to be taught\n"
# 562 "data/maps/PetalburgWoods/scripts.pory"
	.string "a lesson about private conversations.$"
# 563 "data/maps/PetalburgWoods/scripts.pory"

# 564 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MattDefeat:
# 565 "data/maps/PetalburgWoods/scripts.pory"
	.string "Next time I see you punks\n"
# 566 "data/maps/PetalburgWoods/scripts.pory"
	.string "you're in for a beating!$"
# 567 "data/maps/PetalburgWoods/scripts.pory"

# 568 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ShellyDefeat:
# 569 "data/maps/PetalburgWoods/scripts.pory"
	.string "You heard nothing.\n"
# 570 "data/maps/PetalburgWoods/scripts.pory"
	.string "Just stay out the way…$"
# 571 "data/maps/PetalburgWoods/scripts.pory"

# 572 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MattPostBattle:
# 573 "data/maps/PetalburgWoods/scripts.pory"
	.string "Matt: We haven't got time for this.\p"
# 574 "data/maps/PetalburgWoods/scripts.pory"
	.string "Shelly: You kids better stay out of\n"
# 575 "data/maps/PetalburgWoods/scripts.pory"
	.string "Team Aqua's affairs!$"
# 576 "data/maps/PetalburgWoods/scripts.pory"

# 577 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_JamesDefeat:
# 578 "data/maps/PetalburgWoods/scripts.pory"
	.string "Maybe Bugs-only isn't the way.$"
# 579 "data/maps/PetalburgWoods/scripts.pory"

# 580 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_LyleDefeat:
# 581 "data/maps/PetalburgWoods/scripts.pory"
	.string "I will never diversify!$"
