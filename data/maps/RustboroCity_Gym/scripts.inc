# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_TOMMY, 3
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_JOSH, 2
# 4 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_ROXANNE, 1
# 5 "data/maps/RustboroCity_Gym/scripts.pory"

# 6 "data/maps/RustboroCity_Gym/scripts.pory"

# 7 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 9 "data/maps/RustboroCity_Gym/scripts.pory"

# 10 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_RoxannePostBattle
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
lockall
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_ROXANNE
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
playse SE_PIN
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_RoxanneIntro MSGBOX_AUTOCLOSE
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_ReadyToFight MSGBOX_YESNO
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
goto_if_eq VAR_RESULT, YES, RustboroCity_Gym_EventScript_RoxanneDoMultiBattle
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_ComeBackWhenReady, MSGBOX_DEFAULT
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
closemessage
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_Movement_Roxanne_NotReady
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
releaseall
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
end
# 30 "data/maps/RustboroCity_Gym/scripts.pory"

# 31 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDoMultiBattle::
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat, PARTNER_EMMIE
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
switch VAR_RESULT
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
case 1, RustboroCity_Gym_EventScript_RoxanneVictory
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
waitstate
# 39 "data/maps/RustboroCity_Gym/scripts.pory"

# 40 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneVictory::
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
addvar VAR_RUSTBOROCITY_GYM_STATE, 1
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
goto RustboroCity_Gym_EventScript_RoxanneDefeated
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
end
# 46 "data/maps/RustboroCity_Gym/scripts.pory"

# 47 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Movement_Roxanne_NotReady:
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
walk_down
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
step_end
# 50 "data/maps/RustboroCity_Gym/scripts.pory"

# 51 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne2::
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 56 "data/maps/RustboroCity_Gym/scripts.pory"

# 57 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxannePostBattle::
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 62 "data/maps/RustboroCity_Gym/scripts.pory"

# 63 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 3
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 78 "data/maps/RustboroCity_Gym/scripts.pory"

# 79 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 86 "data/maps/RustboroCity_Gym/scripts.pory"

# 87 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 91 "data/maps/RustboroCity_Gym/scripts.pory"

# 92 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_JoshTommy::
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
lockall
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JOSH
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
playse SE_PIN
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_JoshIntro MSGBOX_AUTOCLOSE
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_TOMMY
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
playse SE_PIN
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_TommyIntro MSGBOX_AUTOCLOSE
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
goto RustboroCity_Gym_EventScript_JoshTommyDoMultiBattle
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
releaseall
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
end
# 113 "data/maps/RustboroCity_Gym/scripts.pory"

# 114 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_JoshTommyDoMultiBattle::
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_JOSH, RustboroCity_Gym_Text_JoshDefeat, TRAINER_TOMMY, RustboroCity_Gym_Text_TommyDefeat, PARTNER_EMMIE
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
switch VAR_RESULT
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
case 1, RustboroCity_Gym_EventScript_JoshTommyVictory
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
waitstate
# 122 "data/maps/RustboroCity_Gym/scripts.pory"

# 123 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_JoshTommyVictory::
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
addvar VAR_RUSTBOROCITY_GYM_STATE, 1
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
end
# 132 "data/maps/RustboroCity_Gym/scripts.pory"

# 133 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 136 "data/maps/RustboroCity_Gym/scripts.pory"

# 137 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 140 "data/maps/RustboroCity_Gym/scripts.pory"

# 141 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 145 "data/maps/RustboroCity_Gym/scripts.pory"

# 146 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 153 "data/maps/RustboroCity_Gym/scripts.pory"

# 154 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 158 "data/maps/RustboroCity_Gym/scripts.pory"

# 159 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 164 "data/maps/RustboroCity_Gym/scripts.pory"

# 165 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 170 "data/maps/RustboroCity_Gym/scripts.pory"

# 171 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 175 "data/maps/RustboroCity_Gym/scripts.pory"

# 176 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 180 "data/maps/RustboroCity_Gym/scripts.pory"

# 181 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 195 "data/maps/RustboroCity_Gym/scripts.pory"

# 196 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE, the GYM LEADER, is a user\n"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type POKéMON.\p"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"

# 218 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"

# 230 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"

# 234 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"

# 237 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"

# 241 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ROXANNE!$"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"

# 245 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"

# 248 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"

# 253 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"

# 259 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"

# 263 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"

# 268 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER so that I might\n"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the POKéMON\l"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which POKéMON?$"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"

# 277 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE's rules state\n"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official POKéMON\n"
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 288 "data/maps/RustboroCity_Gym/scripts.pory"

# 289 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 292 "data/maps/RustboroCity_Gym/scripts.pory"

# 293 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE heightens the ATTACK\n"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "power of your POKéMON.\p"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It also enables them to use the HM move\n"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "CUT outside of battle.\p"
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 299 "data/maps/RustboroCity_Gym/scripts.pory"

# 300 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 304 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 305 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Remember, a TM can be used only once,\n"
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so think before you use it.$"
# 309 "data/maps/RustboroCity_Gym/scripts.pory"

# 310 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 311 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 313 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 314 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 315 "data/maps/RustboroCity_Gym/scripts.pory"

# 316 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 318 "data/maps/RustboroCity_Gym/scripts.pory"

# 319 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 322 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 323 "data/maps/RustboroCity_Gym/scripts.pory"

# 324 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 325 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 326 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 327 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 329 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 330 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 331 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 332 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 333 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 334 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 335 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 337 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 338 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 339 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 340 "data/maps/RustboroCity_Gym/scripts.pory"

# 341 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 342 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 343 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 344 "data/maps/RustboroCity_Gym/scripts.pory"

# 345 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 346 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 347 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 348 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 350 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 351 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 352 "data/maps/RustboroCity_Gym/scripts.pory"

# 353 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 354 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 355 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 356 "data/maps/RustboroCity_Gym/scripts.pory"

# 357 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 358 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 359 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 360 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 361 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 362 "data/maps/RustboroCity_Gym/scripts.pory"

# 363 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 364 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 365 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 366 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 367 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 368 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 369 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 370 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 371 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 372 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 373 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"
# 374 "data/maps/RustboroCity_Gym/scripts.pory"

# 375 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReadyToFight:
# 376 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Are you ready?$"
# 377 "data/maps/RustboroCity_Gym/scripts.pory"

# 378 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ComeBackWhenReady:
# 379 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come back when you're ready.$"
