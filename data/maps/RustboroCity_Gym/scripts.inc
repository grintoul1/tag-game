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
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_RoxanneIntro, MSGBOX_AUTOCLOSE
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
goto RustboroCity_Gym_EventScript_RoxanneDoMultiBattle
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
releaseall
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
end
# 21 "data/maps/RustboroCity_Gym/scripts.pory"

# 22 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDoMultiBattle::
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat, PARTNER_EMMIE
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
switch VAR_RESULT
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
case 1, RustboroCity_Gym_EventScript_RoxanneVictory
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
waitstate
# 30 "data/maps/RustboroCity_Gym/scripts.pory"

# 31 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneVictory::
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
addvar VAR_RUSTBOROCITY_GYM_STATE, 1
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
goto RustboroCity_Gym_EventScript_RoxanneDefeated
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
end
# 35 "data/maps/RustboroCity_Gym/scripts.pory"

# 36 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Movement_Roxanne_NotReady:
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
walk_down
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
step_end
# 39 "data/maps/RustboroCity_Gym/scripts.pory"

# 40 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne2::
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 45 "data/maps/RustboroCity_Gym/scripts.pory"

# 46 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxannePostBattle::
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 51 "data/maps/RustboroCity_Gym/scripts.pory"

# 52 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 3
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 67 "data/maps/RustboroCity_Gym/scripts.pory"

# 68 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 75 "data/maps/RustboroCity_Gym/scripts.pory"

# 76 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 80 "data/maps/RustboroCity_Gym/scripts.pory"

# 81 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_JoshTommy::
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
lockall
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JOSH
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
playse SE_PIN
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_JoshIntro MSGBOX_AUTOCLOSE
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_TOMMY
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
playse SE_PIN
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_TommyIntro, MSGBOX_AUTOCLOSE
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
goto RustboroCity_Gym_EventScript_JoshTommyDoMultiBattle
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
releaseall
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
end
# 102 "data/maps/RustboroCity_Gym/scripts.pory"

# 103 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_JoshTommyDoMultiBattle::
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_JOSH, RustboroCity_Gym_Text_JoshDefeat, TRAINER_TOMMY, RustboroCity_Gym_Text_TommyDefeat, PARTNER_EMMIE
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
switch VAR_RESULT
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
case 1, RustboroCity_Gym_EventScript_JoshTommyVictory
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
waitstate
# 111 "data/maps/RustboroCity_Gym/scripts.pory"

# 112 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_JoshTommyVictory::
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
addvar VAR_RUSTBOROCITY_GYM_STATE, 1
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
end
# 121 "data/maps/RustboroCity_Gym/scripts.pory"

# 122 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 125 "data/maps/RustboroCity_Gym/scripts.pory"

# 126 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 129 "data/maps/RustboroCity_Gym/scripts.pory"

# 130 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 134 "data/maps/RustboroCity_Gym/scripts.pory"

# 135 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 142 "data/maps/RustboroCity_Gym/scripts.pory"

# 143 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 147 "data/maps/RustboroCity_Gym/scripts.pory"

# 148 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 153 "data/maps/RustboroCity_Gym/scripts.pory"

# 154 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 159 "data/maps/RustboroCity_Gym/scripts.pory"

# 160 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 164 "data/maps/RustboroCity_Gym/scripts.pory"

# 165 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 169 "data/maps/RustboroCity_Gym/scripts.pory"

# 170 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 184 "data/maps/RustboroCity_Gym/scripts.pory"

# 185 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE, the GYM LEADER, is a user\n"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type POKéMON.\p"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"

# 207 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"

# 219 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"

# 223 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"

# 226 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"

# 230 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ROXANNE!$"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"

# 234 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"

# 237 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\n"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"

# 242 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"

# 248 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"

# 252 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"

# 257 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER so that I might\n"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the POKéMON\l"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which POKéMON?$"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"

# 266 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE's rules state\n"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official POKéMON\n"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 277 "data/maps/RustboroCity_Gym/scripts.pory"

# 278 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 281 "data/maps/RustboroCity_Gym/scripts.pory"

# 282 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE heightens the ATTACK\n"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "power of your POKéMON.\p"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It also enables them to use the HM move\n"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "CUT outside of battle.\p"
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 288 "data/maps/RustboroCity_Gym/scripts.pory"

# 289 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Remember, a TM can be used only once,\n"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so think before you use it.$"
# 298 "data/maps/RustboroCity_Gym/scripts.pory"

# 299 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 304 "data/maps/RustboroCity_Gym/scripts.pory"

# 305 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 307 "data/maps/RustboroCity_Gym/scripts.pory"

# 308 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 309 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 310 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 311 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 312 "data/maps/RustboroCity_Gym/scripts.pory"

# 313 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 314 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 318 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 319 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 322 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 323 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 324 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 325 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 326 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 327 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 329 "data/maps/RustboroCity_Gym/scripts.pory"

# 330 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 331 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 332 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 333 "data/maps/RustboroCity_Gym/scripts.pory"

# 334 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 335 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 337 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 338 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 339 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 340 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 341 "data/maps/RustboroCity_Gym/scripts.pory"

# 342 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 343 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 344 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 345 "data/maps/RustboroCity_Gym/scripts.pory"

# 346 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 347 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 348 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 350 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 351 "data/maps/RustboroCity_Gym/scripts.pory"

# 352 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 353 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 354 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 355 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 356 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 357 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 358 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 359 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 360 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 361 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 362 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"
# 363 "data/maps/RustboroCity_Gym/scripts.pory"

# 364 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReadyToFight:
# 365 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Are you ready?$"
# 366 "data/maps/RustboroCity_Gym/scripts.pory"

# 367 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ComeBackWhenReady:
# 368 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come back when you're ready.$"
