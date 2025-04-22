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
end
# 51 "data/maps/PetalburgWoods/scripts.pory"

# 52 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 53 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 54 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 55 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 56 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 57 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 58 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 59 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 60 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 61 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 62 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 63 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 64 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 65 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 66 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 67 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 68 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 69 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 70 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 71 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 73 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 74 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 75 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 76 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 77 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 78 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 79 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 80 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 81 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 82 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 83 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 84 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 85 "data/maps/PetalburgWoods/scripts.pory"
	end
# 86 "data/maps/PetalburgWoods/scripts.pory"

# 87 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 88 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 89 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 90 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 91 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 92 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 93 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 94 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 95 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 96 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 97 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 98 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 99 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 100 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 101 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 102 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 103 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 104 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 106 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 107 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 108 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 109 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 110 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 111 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 112 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 113 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 114 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 115 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 116 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 117 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 118 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 119 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 120 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 121 "data/maps/PetalburgWoods/scripts.pory"
	end
# 122 "data/maps/PetalburgWoods/scripts.pory"

# 123 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 124 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 125 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 126 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 127 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 128 "data/maps/PetalburgWoods/scripts.pory"
	return
# 129 "data/maps/PetalburgWoods/scripts.pory"

# 130 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 131 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 132 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 133 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 134 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 135 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 136 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 137 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 138 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 139 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 140 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 141 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 142 "data/maps/PetalburgWoods/scripts.pory"
	end
# 143 "data/maps/PetalburgWoods/scripts.pory"

# 144 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 145 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 146 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 147 "data/maps/PetalburgWoods/scripts.pory"
	end
# 148 "data/maps/PetalburgWoods/scripts.pory"

# 149 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 150 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 151 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 152 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 153 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 154 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 155 "data/maps/PetalburgWoods/scripts.pory"
	return
# 156 "data/maps/PetalburgWoods/scripts.pory"

# 157 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 158 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 159 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 160 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 161 "data/maps/PetalburgWoods/scripts.pory"
	end
# 162 "data/maps/PetalburgWoods/scripts.pory"

# 163 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 164 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 165 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 166 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 167 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 168 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 169 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 170 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 171 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 172 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 173 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 174 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 175 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 176 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 177 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 178 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 179 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 180 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 181 "data/maps/PetalburgWoods/scripts.pory"

# 182 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 184 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
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
	step_end
# 192 "data/maps/PetalburgWoods/scripts.pory"

# 193 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 194 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 195 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 196 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 197 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 198 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 199 "data/maps/PetalburgWoods/scripts.pory"

# 200 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 201 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 202 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 203 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 205 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 206 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 207 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 208 "data/maps/PetalburgWoods/scripts.pory"

# 209 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 210 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 211 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 212 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
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
	step_end
# 219 "data/maps/PetalburgWoods/scripts.pory"

# 220 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 221 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 222 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 223 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 224 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 225 "data/maps/PetalburgWoods/scripts.pory"

# 226 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 227 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 228 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 229 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 230 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 231 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 232 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 233 "data/maps/PetalburgWoods/scripts.pory"

# 234 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 235 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 236 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 237 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 238 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 239 "data/maps/PetalburgWoods/scripts.pory"

# 240 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 241 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 242 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 243 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 244 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 245 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 246 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 247 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 248 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 249 "data/maps/PetalburgWoods/scripts.pory"

# 250 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 251 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 252 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 253 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 254 "data/maps/PetalburgWoods/scripts.pory"

# 255 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 256 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 257 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 258 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 259 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 260 "data/maps/PetalburgWoods/scripts.pory"

# 261 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 262 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 263 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 264 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 265 "data/maps/PetalburgWoods/scripts.pory"

# 266 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 267 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 268 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 269 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 270 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 271 "data/maps/PetalburgWoods/scripts.pory"

# 272 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 273 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 274 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 275 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 276 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 277 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 278 "data/maps/PetalburgWoods/scripts.pory"

# 279 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 280 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 281 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 282 "data/maps/PetalburgWoods/scripts.pory"

# 283 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 284 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 285 "data/maps/PetalburgWoods/scripts.pory"
	end
# 286 "data/maps/PetalburgWoods/scripts.pory"

# 287 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 288 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 289 "data/maps/PetalburgWoods/scripts.pory"
	end
# 290 "data/maps/PetalburgWoods/scripts.pory"

# 291 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 292 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 293 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 294 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 295 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 296 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 297 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 298 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 299 "data/maps/PetalburgWoods/scripts.pory"
	release
# 300 "data/maps/PetalburgWoods/scripts.pory"
	end
# 301 "data/maps/PetalburgWoods/scripts.pory"

# 302 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 303 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 304 "data/maps/PetalburgWoods/scripts.pory"
	release
# 305 "data/maps/PetalburgWoods/scripts.pory"
	end
# 306 "data/maps/PetalburgWoods/scripts.pory"

# 307 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 308 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 309 "data/maps/PetalburgWoods/scripts.pory"
	end
# 310 "data/maps/PetalburgWoods/scripts.pory"

# 311 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 312 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 313 "data/maps/PetalburgWoods/scripts.pory"
	end
# 314 "data/maps/PetalburgWoods/scripts.pory"

# 315 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 316 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 317 "data/maps/PetalburgWoods/scripts.pory"
	end
# 318 "data/maps/PetalburgWoods/scripts.pory"

# 319 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesLyle::
# 320 "data/maps/PetalburgWoods/scripts.pory"
lockall
# 321 "data/maps/PetalburgWoods/scripts.pory"
setvar VAR_0x8008, LOCALID_JAMES
# 322 "data/maps/PetalburgWoods/scripts.pory"
playse SE_PIN
# 323 "data/maps/PetalburgWoods/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 324 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 325 "data/maps/PetalburgWoods/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 326 "data/maps/PetalburgWoods/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 327 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 328 "data/maps/PetalburgWoods/scripts.pory"
msgbox PetalburgWoods_Text_JamesIntro MSGBOX_AUTOCLOSE
# 329 "data/maps/PetalburgWoods/scripts.pory"
setvar VAR_0x8008, LOCALID_LYLE
# 330 "data/maps/PetalburgWoods/scripts.pory"
playse SE_PIN
# 331 "data/maps/PetalburgWoods/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 332 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 333 "data/maps/PetalburgWoods/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 334 "data/maps/PetalburgWoods/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 335 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 336 "data/maps/PetalburgWoods/scripts.pory"
msgbox PetalburgWoods_Text_LyleIntro MSGBOX_AUTOCLOSE
# 337 "data/maps/PetalburgWoods/scripts.pory"
goto PetalburgWoods_EventScript_JamesLyleDoMultiBattle
# 338 "data/maps/PetalburgWoods/scripts.pory"
releaseall
# 339 "data/maps/PetalburgWoods/scripts.pory"
end
# 340 "data/maps/PetalburgWoods/scripts.pory"

# 341 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesLyleDoMultiBattle::
# 342 "data/maps/PetalburgWoods/scripts.pory"
playbgm MUS_PETALBURG_WOODS, TRUE
# 343 "data/maps/PetalburgWoods/scripts.pory"
multi_2p_vs_2 TRAINER_JAMES_1, PetalburgWoods_Text_JamesDefeat, TRAINER_LYLE, PetalburgWoods_Text_LyleDefeat, PARTNER_EMMIE
# 344 "data/maps/PetalburgWoods/scripts.pory"
switch VAR_RESULT
# 345 "data/maps/PetalburgWoods/scripts.pory"
case 1, PetalburgWoods_EventScript_JamesLyleVictory
# 346 "data/maps/PetalburgWoods/scripts.pory"
fadescreen FADE_TO_BLACK
# 347 "data/maps/PetalburgWoods/scripts.pory"
special SetCB2WhiteOut
# 348 "data/maps/PetalburgWoods/scripts.pory"
waitstate
# 349 "data/maps/PetalburgWoods/scripts.pory"

# 350 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesLyleVictory::
# 351 "data/maps/PetalburgWoods/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 352 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 353 "data/maps/PetalburgWoods/scripts.pory"
msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_AUTOCLOSE
# 354 "data/maps/PetalburgWoods/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 355 "data/maps/PetalburgWoods/scripts.pory"
waitmovement 0
# 356 "data/maps/PetalburgWoods/scripts.pory"
msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 357 "data/maps/PetalburgWoods/scripts.pory"
addvar VAR_PETALBURG_WOODS_STATE, 1
# 358 "data/maps/PetalburgWoods/scripts.pory"
end
# 359 "data/maps/PetalburgWoods/scripts.pory"

# 360 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 361 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 362 "data/maps/PetalburgWoods/scripts.pory"
	release
# 363 "data/maps/PetalburgWoods/scripts.pory"
	end
# 364 "data/maps/PetalburgWoods/scripts.pory"

# 365 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 366 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 367 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 368 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 369 "data/maps/PetalburgWoods/scripts.pory"
	release
# 370 "data/maps/PetalburgWoods/scripts.pory"
	end
# 371 "data/maps/PetalburgWoods/scripts.pory"

# 372 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 373 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 374 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 375 "data/maps/PetalburgWoods/scripts.pory"
	release
# 376 "data/maps/PetalburgWoods/scripts.pory"
	end
# 377 "data/maps/PetalburgWoods/scripts.pory"

# 378 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 379 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 380 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 381 "data/maps/PetalburgWoods/scripts.pory"
	release
# 382 "data/maps/PetalburgWoods/scripts.pory"
	end
# 383 "data/maps/PetalburgWoods/scripts.pory"

# 384 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 385 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 386 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 387 "data/maps/PetalburgWoods/scripts.pory"
	release
# 388 "data/maps/PetalburgWoods/scripts.pory"
	end
# 389 "data/maps/PetalburgWoods/scripts.pory"

# 390 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 391 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 392 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 393 "data/maps/PetalburgWoods/scripts.pory"
	end
# 394 "data/maps/PetalburgWoods/scripts.pory"

# 395 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 398 "data/maps/PetalburgWoods/scripts.pory"

# 399 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 400 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 401 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 402 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 403 "data/maps/PetalburgWoods/scripts.pory"

# 404 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 405 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 406 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 409 "data/maps/PetalburgWoods/scripts.pory"

# 410 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 413 "data/maps/PetalburgWoods/scripts.pory"

# 414 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 417 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 418 "data/maps/PetalburgWoods/scripts.pory"

# 419 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 420 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 423 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 424 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 425 "data/maps/PetalburgWoods/scripts.pory"

# 426 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 427 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 428 "data/maps/PetalburgWoods/scripts.pory"

# 429 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 430 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 438 "data/maps/PetalburgWoods/scripts.pory"

# 439 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 441 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 446 "data/maps/PetalburgWoods/scripts.pory"

# 447 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 451 "data/maps/PetalburgWoods/scripts.pory"

# 452 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 455 "data/maps/PetalburgWoods/scripts.pory"

# 456 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 459 "data/maps/PetalburgWoods/scripts.pory"

# 460 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_LyleIntro:
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 462 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 464 "data/maps/PetalburgWoods/scripts.pory"

# 465 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 468 "data/maps/PetalburgWoods/scripts.pory"

# 469 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 472 "data/maps/PetalburgWoods/scripts.pory"

# 473 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_JamesIntro:
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 475 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 476 "data/maps/PetalburgWoods/scripts.pory"

# 477 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 479 "data/maps/PetalburgWoods/scripts.pory"

# 480 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 482 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 483 "data/maps/PetalburgWoods/scripts.pory"

# 484 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 485 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 486 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 487 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 488 "data/maps/PetalburgWoods/scripts.pory"

# 489 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 490 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 491 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 492 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 493 "data/maps/PetalburgWoods/scripts.pory"

# 494 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 495 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 496 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 497 "data/maps/PetalburgWoods/scripts.pory"

# 498 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 499 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 500 "data/maps/PetalburgWoods/scripts.pory"

# 501 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 502 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 503 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 504 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 505 "data/maps/PetalburgWoods/scripts.pory"

# 506 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 507 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 508 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 509 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 510 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 511 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 512 "data/maps/PetalburgWoods/scripts.pory"

# 513 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 514 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 515 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 516 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 517 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 518 "data/maps/PetalburgWoods/scripts.pory"

# 519 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 520 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 521 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 522 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 523 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 524 "data/maps/PetalburgWoods/scripts.pory"

# 525 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 526 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 527 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 528 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 529 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 530 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 531 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 532 "data/maps/PetalburgWoods/scripts.pory"

# 533 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 534 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 535 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 536 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 537 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 538 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 539 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 540 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 541 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 542 "data/maps/PetalburgWoods/scripts.pory"

# 543 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 544 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 545 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 546 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 547 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 548 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 549 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"
# 550 "data/maps/PetalburgWoods/scripts.pory"

# 551 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MattIntro:
# 552 "data/maps/PetalburgWoods/scripts.pory"
	.string "Matt: What was that idiot thinking\n"
# 553 "data/maps/PetalburgWoods/scripts.pory"
	.string "taking that old man's Wingull?\p"
# 554 "data/maps/PetalburgWoods/scripts.pory"
	.string "Shelly: Just what we needed. Attention\n"
# 555 "data/maps/PetalburgWoods/scripts.pory"
	.string "before we execute our Slateport plans.$"
# 556 "data/maps/PetalburgWoods/scripts.pory"

# 557 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ShellyIntro:
# 558 "data/maps/PetalburgWoods/scripts.pory"
	.string "Shelly: Now what do we have here?\p"
# 559 "data/maps/PetalburgWoods/scripts.pory"
	.string "Matt: Children that need to be taught\n"
# 560 "data/maps/PetalburgWoods/scripts.pory"
	.string "a lesson about private conversations.$"
# 561 "data/maps/PetalburgWoods/scripts.pory"

# 562 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MattDefeat:
# 563 "data/maps/PetalburgWoods/scripts.pory"
	.string "Next time I see you punks\n"
# 564 "data/maps/PetalburgWoods/scripts.pory"
	.string "you're in for a beating!$"
# 565 "data/maps/PetalburgWoods/scripts.pory"

# 566 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ShellyDefeat:
# 567 "data/maps/PetalburgWoods/scripts.pory"
	.string "You heard nothing.\n"
# 568 "data/maps/PetalburgWoods/scripts.pory"
	.string "Just stay out the way…$"
# 569 "data/maps/PetalburgWoods/scripts.pory"

# 570 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MattPostBattle:
# 571 "data/maps/PetalburgWoods/scripts.pory"
	.string "Matt: We haven't got time for this.\p"
# 572 "data/maps/PetalburgWoods/scripts.pory"
	.string "Shelly: You kids better stay out of\n"
# 573 "data/maps/PetalburgWoods/scripts.pory"
	.string "Team Aqua's affairs!$"
# 574 "data/maps/PetalburgWoods/scripts.pory"

# 575 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_JamesDefeat:
# 576 "data/maps/PetalburgWoods/scripts.pory"
	.string "Maybe Bugs-only isn't the way.$"
# 577 "data/maps/PetalburgWoods/scripts.pory"

# 578 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_LyleDefeat:
# 579 "data/maps/PetalburgWoods/scripts.pory"
	.string "I will never diversify!$"
