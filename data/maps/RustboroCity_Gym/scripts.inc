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
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_Gym_OnFrame
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 10 "data/maps/RustboroCity_Gym/scripts.pory"

# 11 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_OnFrame:
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 5, RustboroCity_Gym_EventScript_ProgressEmmieState
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte 0
# 14 "data/maps/RustboroCity_Gym/scripts.pory"

# 15 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_ProgressEmmieState::
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 6
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 18 "data/maps/RustboroCity_Gym/scripts.pory"

# 19 "data/maps/RustboroCity_Gym/scripts.pory"

# 20 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_RoxannePostBattle
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
lockall
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_RoxanneIntro, MSGBOX_AUTOCLOSE
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
goto RustboroCity_Gym_EventScript_RoxanneDoMultiBattle
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
releaseall
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
end
# 31 "data/maps/RustboroCity_Gym/scripts.pory"

# 32 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDoMultiBattle::
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat, PARTNER_EMMIE
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
switch VAR_RESULT
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
case 1, RustboroCity_Gym_EventScript_RoxanneVictory
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
waitstate
# 40 "data/maps/RustboroCity_Gym/scripts.pory"

# 41 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneVictory::
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
addvar VAR_RUSTBOROCITY_GYM_STATE, 1
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
setvar VAR_PARTNER_EMMIE_STATE, 7
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
setvar VAR_LEVEL_CAP, 38
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
goto RustboroCity_Gym_EventScript_RoxanneDefeated
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
end
# 47 "data/maps/RustboroCity_Gym/scripts.pory"

# 48 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Movement_Roxanne_NotReady:
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
walk_down
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
step_end
# 51 "data/maps/RustboroCity_Gym/scripts.pory"

# 52 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne2::
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 57 "data/maps/RustboroCity_Gym/scripts.pory"

# 58 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxannePostBattle::
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 63 "data/maps/RustboroCity_Gym/scripts.pory"

# 64 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 3
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 79 "data/maps/RustboroCity_Gym/scripts.pory"

# 80 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 87 "data/maps/RustboroCity_Gym/scripts.pory"

# 88 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 92 "data/maps/RustboroCity_Gym/scripts.pory"

# 93 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_JoshTommy::
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
lockall
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JOSH
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
playse SE_PIN
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_JoshIntro MSGBOX_AUTOCLOSE
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_TOMMY
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
playse SE_PIN
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_TommyIntro, MSGBOX_AUTOCLOSE
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
goto RustboroCity_Gym_EventScript_JoshTommyDoMultiBattle
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
releaseall
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
end
# 114 "data/maps/RustboroCity_Gym/scripts.pory"

# 115 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_JoshTommyDoMultiBattle::
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_JOSH, RustboroCity_Gym_Text_JoshDefeat, TRAINER_TOMMY, RustboroCity_Gym_Text_TommyDefeat, PARTNER_EMMIE
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
switch VAR_RESULT
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
case 1, RustboroCity_Gym_EventScript_JoshTommyVictory
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
waitstate
# 123 "data/maps/RustboroCity_Gym/scripts.pory"

# 124 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_JoshTommyVictory::
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
waitmovement 0
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
addvar VAR_RUSTBOROCITY_GYM_STATE, 1
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
end
# 133 "data/maps/RustboroCity_Gym/scripts.pory"

# 134 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 138 "data/maps/RustboroCity_Gym/scripts.pory"

# 139 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 143 "data/maps/RustboroCity_Gym/scripts.pory"

# 144 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 148 "data/maps/RustboroCity_Gym/scripts.pory"

# 149 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 156 "data/maps/RustboroCity_Gym/scripts.pory"

# 157 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 161 "data/maps/RustboroCity_Gym/scripts.pory"

# 162 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 167 "data/maps/RustboroCity_Gym/scripts.pory"

# 168 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 173 "data/maps/RustboroCity_Gym/scripts.pory"

# 174 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 178 "data/maps/RustboroCity_Gym/scripts.pory"

# 179 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 183 "data/maps/RustboroCity_Gym/scripts.pory"

# 184 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 198 "data/maps/RustboroCity_Gym/scripts.pory"

# 199 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE, the GYM LEADER, is a user\n"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type POKéMON.\p"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"

# 221 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"

# 233 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"

# 237 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"

# 240 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"

# 244 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ROXANNE!$"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"

# 248 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"

# 251 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\n"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"

# 256 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"

# 262 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"

# 266 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"

# 271 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER so that I might\n"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the POKéMON\l"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which POKéMON?$"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"

# 280 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE's rules state\n"
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official POKéMON\n"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"

# 292 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"

# 296 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE heightens the ATTACK\n"
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "power of your POKéMON.\p"
# 299 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It also enables them to use the HM move\n"
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "CUT outside of battle.\p"
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 302 "data/maps/RustboroCity_Gym/scripts.pory"

# 303 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 304 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 305 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 309 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 310 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Remember, a TM can be used only once,\n"
# 311 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so think before you use it.$"
# 312 "data/maps/RustboroCity_Gym/scripts.pory"

# 313 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 314 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 318 "data/maps/RustboroCity_Gym/scripts.pory"

# 319 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 321 "data/maps/RustboroCity_Gym/scripts.pory"

# 322 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 323 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 324 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 325 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 326 "data/maps/RustboroCity_Gym/scripts.pory"

# 327 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 329 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 330 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 331 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 332 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 333 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 334 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 335 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 337 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 338 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 339 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 340 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 341 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 342 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 343 "data/maps/RustboroCity_Gym/scripts.pory"

# 344 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 345 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 346 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 347 "data/maps/RustboroCity_Gym/scripts.pory"

# 348 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 350 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 351 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 352 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 353 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 354 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 355 "data/maps/RustboroCity_Gym/scripts.pory"

# 356 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 357 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 358 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 359 "data/maps/RustboroCity_Gym/scripts.pory"

# 360 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 361 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 362 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 363 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 364 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 365 "data/maps/RustboroCity_Gym/scripts.pory"

# 366 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 367 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 368 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 369 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 370 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 371 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 372 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 373 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 374 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 375 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 376 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"
# 377 "data/maps/RustboroCity_Gym/scripts.pory"

# 378 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReadyToFight:
# 379 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Are you ready?$"
# 380 "data/maps/RustboroCity_Gym/scripts.pory"

# 381 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ComeBackWhenReady:
# 382 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come back when you're ready.$"
