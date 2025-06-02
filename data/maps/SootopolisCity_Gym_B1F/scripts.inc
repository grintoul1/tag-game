# 1 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 2 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_MapScripts::
# 3 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 5 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_AndreaConnieFallDown::
# 6 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	playse SE_ICE_BREAK
# 7 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	setmetatile 9, 19, METATILE_SootopolisGym_Ice_Broken, TRUE
# 8 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	special DrawWholeMapView
# 9 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	delay 16
# 10 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 0
# 11 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 12 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 13 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_OliviaBriannaFallDown::
# 14 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	playse SE_ICE_BREAK
# 15 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	setmetatile 5, 14, METATILE_SootopolisGym_Ice_Broken, TRUE
# 16 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	special DrawWholeMapView
# 17 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	delay 16
# 18 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 0
# 19 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 20 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 21 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_CrissyBethanyFallDown::
# 22 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	playse SE_ICE_BREAK
# 23 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	setmetatile 11, 9, METATILE_SootopolisGym_Ice_Broken, TRUE
# 24 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	special DrawWholeMapView
# 25 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	delay 16
# 26 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 0
# 27 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 28 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 29 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Movement_FallDown::
# 30 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	set_invisible
# 31 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	step_end
# 32 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 33 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_AndreaConnie::
# 34 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
lockall
# 35 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_PIN
# 36 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement LOCALID_ANDREA, Common_Movement_ExclamationMark
# 37 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 38 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 39 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 40 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 41 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_AndreaIntro MSGBOX_AUTOCLOSE
# 42 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_PIN
# 43 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement  LOCALID_CONNIE, Common_Movement_ExclamationMark
# 44 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 45 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 46 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 47 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 48 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_ConnieIntro MSGBOX_AUTOCLOSE
# 49 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
goto SootopolisCity_Gym_B1F_EventScript_AndreaConnieDoMultiBattle
# 50 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
releaseall
# 51 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
end
# 52 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 53 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_AndreaConnieDoMultiBattle::
# 54 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 55 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
multi_2p_vs_2 TRAINER_ANDREA, SootopolisCity_Gym_B1F_Text_AndreaDefeat, TRAINER_CONNIE, SootopolisCity_Gym_B1F_Text_ConnieDefeat, PARTNER_EMMIE
# 56 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
switch VAR_RESULT
# 57 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
case 1, SootopolisCity_Gym_B1F_EventScript_AndreaConnieVictory
# 58 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 59 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
special SetCB2WhiteOut
# 60 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitstate
# 61 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 62 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_AndreaConnieVictory::
# 63 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 64 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 65 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_AndreaPostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 67 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 68 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
addvar VAR_SOOTOPOLIS_CITY_GYM_STATE, 1
# 70 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_ICE_BREAK
# 71 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
setmetatile 9, 19, METATILE_SootopolisGym_Ice_Broken, TRUE
# 72 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
special DrawWholeMapView
# 73 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
delay 16
# 74 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
setvar VAR_ICE_STEP_COUNT, 0
# 75 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
end
# 76 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 77 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_DaphneAnnika::
# 78 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
lockall
# 79 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_PIN
# 80 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement LOCALID_DAPHNE, Common_Movement_ExclamationMark
# 81 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 82 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 83 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 84 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 85 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_DaphneIntro MSGBOX_AUTOCLOSE
# 86 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_PIN
# 87 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement  LOCALID_ANNIKA, Common_Movement_ExclamationMark
# 88 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 89 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 90 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 91 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 92 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_AnnikaIntro MSGBOX_AUTOCLOSE
# 93 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
goto SootopolisCity_Gym_B1F_EventScript_DaphneAnnikaDoMultiBattle
# 94 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
releaseall
# 95 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
end
# 96 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 97 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_DaphneAnnikaDoMultiBattle::
# 98 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 99 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
multi_2p_vs_2 TRAINER_DAPHNE, SootopolisCity_Gym_B1F_Text_DaphneDefeat, TRAINER_ANNIKA, SootopolisCity_Gym_B1F_Text_AnnikaDefeat, PARTNER_EMMIE
# 100 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
switch VAR_RESULT
# 101 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
case 1, SootopolisCity_Gym_B1F_EventScript_DaphneAnnikaVictory
# 102 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 103 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
special SetCB2WhiteOut
# 104 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitstate
# 105 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 106 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_DaphneAnnikaVictory::
# 107 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 108 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 109 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_DaphnePostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 111 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 112 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_AnnikaPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
addvar VAR_SOOTOPOLIS_CITY_GYM_STATE, 1
# 114 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
end
# 115 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 116 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_OliviaBrianna::
# 117 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
lockall
# 118 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_PIN
# 119 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement LOCALID_OLIVIA, Common_Movement_ExclamationMark
# 120 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 121 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 122 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 123 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 124 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_OliviaIntro MSGBOX_AUTOCLOSE
# 125 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_PIN
# 126 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement  LOCALID_BRIANNA, Common_Movement_ExclamationMark
# 127 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 128 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 129 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 130 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 131 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_BriannaIntro MSGBOX_AUTOCLOSE
# 132 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
goto SootopolisCity_Gym_B1F_EventScript_OliviaBriannaDoMultiBattle
# 133 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
releaseall
# 134 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
end
# 135 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 136 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_OliviaBriannaDoMultiBattle::
# 137 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 138 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
multi_2p_vs_2 TRAINER_OLIVIA, SootopolisCity_Gym_B1F_Text_OliviaDefeat, TRAINER_BRIANNA, SootopolisCity_Gym_B1F_Text_BriannaDefeat, PARTNER_EMMIE
# 139 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
switch VAR_RESULT
# 140 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
case 1, SootopolisCity_Gym_B1F_EventScript_OliviaBriannaVictory
# 141 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 142 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
special SetCB2WhiteOut
# 143 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitstate
# 144 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 145 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_OliviaBriannaVictory::
# 146 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 147 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 148 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 150 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 151 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_BriannaPostBattle, MSGBOX_AUTOCLOSE
# 152 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
addvar VAR_SOOTOPOLIS_CITY_GYM_STATE, 1
# 153 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_ICE_BREAK
# 154 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
setmetatile 5, 14, METATILE_SootopolisGym_Ice_Broken, TRUE
# 155 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
special DrawWholeMapView
# 156 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
delay 16
# 157 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
setvar VAR_ICE_STEP_COUNT, 0
# 158 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
end
# 159 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 160 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_CrissyBethany::
# 161 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
lockall
# 162 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_PIN
# 163 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement LOCALID_CRISSY, Common_Movement_ExclamationMark
# 164 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 165 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 166 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 167 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 168 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_CrissyIntro MSGBOX_AUTOCLOSE
# 169 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_PIN
# 170 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement  LOCALID_BETHANY, Common_Movement_ExclamationMark
# 171 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 172 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 173 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 174 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 175 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_BethanyIntro MSGBOX_AUTOCLOSE
# 176 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
goto SootopolisCity_Gym_B1F_EventScript_CrissyBethanyDoMultiBattle
# 177 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
releaseall
# 178 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
end
# 179 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 180 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_CrissyBethanyDoMultiBattle::
# 181 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 182 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
multi_2p_vs_2 TRAINER_CRISSY, SootopolisCity_Gym_B1F_Text_CrissyDefeat, TRAINER_BETHANY, SootopolisCity_Gym_B1F_Text_BethanyDefeat, PARTNER_EMMIE
# 183 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
switch VAR_RESULT
# 184 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
case 1, SootopolisCity_Gym_B1F_EventScript_CrissyBethanyVictory
# 185 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 186 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
special SetCB2WhiteOut
# 187 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitstate
# 188 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 189 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_CrissyBethanyVictory::
# 190 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 191 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 192 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_CrissyPostBattle, MSGBOX_AUTOCLOSE
# 193 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 194 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 195 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
# 196 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
addvar VAR_SOOTOPOLIS_CITY_GYM_STATE, 1
# 197 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_ICE_BREAK
# 198 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
setmetatile 11, 9, METATILE_SootopolisGym_Ice_Broken, TRUE
# 199 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
special DrawWholeMapView
# 200 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
delay 16
# 201 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
setvar VAR_ICE_STEP_COUNT, 0
# 202 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
end
# 203 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 204 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_TiffanyBridget::
# 205 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
lockall
# 206 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_PIN
# 207 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement LOCALID_TIFFANY, Common_Movement_ExclamationMark
# 208 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 209 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 210 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 211 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 212 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_TiffanyIntro MSGBOX_AUTOCLOSE
# 213 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playse SE_PIN
# 214 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement  LOCALID_BRIDGET, Common_Movement_ExclamationMark
# 215 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 216 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 217 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 218 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 219 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_BridgetIntro MSGBOX_AUTOCLOSE
# 220 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
goto SootopolisCity_Gym_B1F_EventScript_TiffanyBridgetDoMultiBattle
# 221 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
releaseall
# 222 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
end
# 223 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 224 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_TiffanyBridgetDoMultiBattle::
# 225 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 226 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
multi_2p_vs_2 TRAINER_TIFFANY, SootopolisCity_Gym_B1F_Text_TiffanyDefeat, TRAINER_BRIDGET, SootopolisCity_Gym_B1F_Text_BridgetDefeat, PARTNER_EMMIE
# 227 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
switch VAR_RESULT
# 228 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
case 1, SootopolisCity_Gym_B1F_EventScript_TiffanyBridgetVictory
# 229 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 230 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
special SetCB2WhiteOut
# 231 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitstate
# 232 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 233 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_TiffanyBridgetVictory::
# 234 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 235 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 236 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_TiffanyPostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 238 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
waitmovement 0
# 239 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
msgbox SootopolisCity_Gym_B1F_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
addvar VAR_SOOTOPOLIS_CITY_GYM_STATE, 1
# 241 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
end
# 242 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 243 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_Andrea::
# 244 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	faceplayer
# 245 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	msgbox SootopolisCity_Gym_B1F_Text_AndreaPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 247 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 248 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_Crissy::
# 249 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	faceplayer
# 250 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	msgbox SootopolisCity_Gym_B1F_Text_CrissyPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 252 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 253 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_Brianna::
# 254 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	faceplayer
# 255 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	msgbox SootopolisCity_Gym_B1F_Text_BriannaPostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 257 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 258 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_Connie::
# 259 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	faceplayer
# 260 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	msgbox SootopolisCity_Gym_B1F_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 262 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 263 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_Bridget::
# 264 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	faceplayer
# 265 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	msgbox SootopolisCity_Gym_B1F_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
# 266 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 267 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 268 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_Olivia::
# 269 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	faceplayer
# 270 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	msgbox SootopolisCity_Gym_B1F_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
# 271 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 272 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 273 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_Tiffany::
# 274 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	faceplayer
# 275 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	msgbox SootopolisCity_Gym_B1F_Text_TiffanyPostBattle, MSGBOX_AUTOCLOSE
# 276 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 277 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 278 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_Bethany::
# 279 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	faceplayer
# 280 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	msgbox SootopolisCity_Gym_B1F_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 282 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 283 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_Annika::
# 284 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	faceplayer
# 285 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	msgbox SootopolisCity_Gym_B1F_Text_AnnikaPostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 287 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 288 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_EventScript_Daphne::
# 289 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	faceplayer
# 290 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	msgbox SootopolisCity_Gym_B1F_Text_DaphnePostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	end
# 292 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 293 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_AndreaIntro:
# 294 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I'll show you the sublime techniques\n"
# 295 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I learned from our LEADER JUAN!$"
# 296 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 297 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_AndreaDefeat:
# 298 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Please forgive me, JUAN…$"
# 299 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 300 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_AndreaPostBattle:
# 301 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Watch what happens if you crack all\n"
# 302 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "the floor tiles.$"
# 303 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 304 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_CrissyIntro:
# 305 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "You came all the way here, but you won't\n"
# 306 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "get to see JUAN.\p"
# 307 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Not if you lose to me, you won't!$"
# 308 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 309 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_CrissyDefeat:
# 310 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "You're strong!\n"
# 311 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I was fooled by your cute looks!$"
# 312 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 313 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_CrissyPostBattle:
# 314 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "You might be good enough to avoid\n"
# 315 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "being wiped out in one hit by JUAN.$"
# 316 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 317 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_DaphneIntro:
# 318 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "The sight of JUAN conducting\n"
# 319 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "a battle…\p"
# 320 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "The very beauty of it compelled me to\n"
# 321 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "become a TRAINER.$"
# 322 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 323 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_DaphneDefeat:
# 324 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "You battled with more beauty than\n"
# 325 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I could muster…$"
# 326 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 327 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_DaphnePostBattle:
# 328 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "The grace you bring to battle is\n"
# 329 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "fabulous.\p"
# 330 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Oh… I'm so fortunate to have found\n"
# 331 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "POKéMON.$"
# 332 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 333 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_ConnieIntro:
# 334 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I should teach you how harsh battles\n"
# 335 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "can be.$"
# 336 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 337 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_ConnieDefeat:
# 338 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Oh.\n"
# 339 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "You're strong.$"
# 340 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 341 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_ConniePostBattle:
# 342 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I'll tell you something good.\p"
# 343 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "If you want to reach JUAN, you\n"
# 344 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "need to walk on each floor tile once.$"
# 345 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 346 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_BridgetIntro:
# 347 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "The POKéMON GYM of the highest level\n"
# 348 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "in the HOENN region…\p"
# 349 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "That's the SOOTOPOLIS GYM.$"
# 350 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 351 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_BridgetDefeat:
# 352 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "What a high level you are!$"
# 353 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 354 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_BridgetPostBattle:
# 355 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Rather than being satisfied by being\n"
# 356 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "in a strong GYM, I imagine training in\l"
# 357 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "other places will make you stronger.\l"
# 358 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "But above all, it looks more fun.$"
# 359 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 360 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_OliviaIntro:
# 361 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I train my POKéMON together with\n"
# 362 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "JUAN.\p"
# 363 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Don't think I'm a pushover.$"
# 364 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 365 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_OliviaDefeat:
# 366 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I was beaten…$"
# 367 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 368 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_OliviaPostBattle:
# 369 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I think you have potential.\n"
# 370 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Why don't you stay and train with us?$"
# 371 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 372 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_TiffanyIntro:
# 373 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "A graceful glide across the ice while\n"
# 374 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "crossing no lines…\p"
# 375 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "A TRAINER putting on that performance\n"
# 376 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "would be elegantly beautiful!$"
# 377 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 378 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_TiffanyDefeat:
# 379 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Well, excuse me?!$"
# 380 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 381 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_TiffanyPostBattle:
# 382 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "This is really obvious, but how strong\n"
# 383 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "you are as a TRAINER has nothing to do\l"
# 384 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "with how young or old you are.$"
# 385 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 386 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_BethanyIntro:
# 387 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "When I'm with my POKéMON, the time\n"
# 388 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "flies by before you can say, “Oops!”$"
# 389 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 390 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_BethanyDefeat:
# 391 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Oops!$"
# 392 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 393 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_BethanyPostBattle:
# 394 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I wish I could forget about lost causes\n"
# 395 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "before I can manage an “Oops!”$"
# 396 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 397 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_AnnikaIntro:
# 398 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I can battle with really rare POKéMON\n"
# 399 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "if you'd like.$"
# 400 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 401 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_AnnikaDefeat:
# 402 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Oh, there now! Did you have a good look\n"
# 403 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "at my POKéMON?$"
# 404 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 405 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_AnnikaPostBattle:
# 406 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I came to this GYM because JUAN\n"
# 407 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "praised me for my darling POKéMON.\p"
# 408 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Oh, if only I'd met JUAN years ago\n"
# 409 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "when I was younger…$"
# 410 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 411 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_BriannaIntro:
# 412 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Giggle…\n"
# 413 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Your grim look is so charming.$"
# 414 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 415 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_BriannaDefeat:
# 416 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "Oh, dear.\n"
# 417 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I went much too easy on you.$"
# 418 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"

# 419 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
SootopolisCity_Gym_B1F_Text_BriannaPostBattle:
# 420 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "You couldn't lay a finger on JUAN,\n"
# 421 "data/maps/SootopolisCity_Gym_B1F/scripts.pory"
	.string "I'm sure. Giggle…$"
