# 1 "data/maps/MtPyre_2F/scripts.pory"

# 2 "data/maps/MtPyre_2F/scripts.pory"
.set LOCALID_PYRE_AQUAGRUNT1, 5
# 3 "data/maps/MtPyre_2F/scripts.pory"
.set LOCALID_PYRE_AQUAGRUNT2, 6
# 4 "data/maps/MtPyre_2F/scripts.pory"
.set LOCALID_PYRE_MAGMAGRUNT4, 7
# 5 "data/maps/MtPyre_2F/scripts.pory"
.set LOCALID_PYRE_MAGMAGRUNT5, 4
# 6 "data/maps/MtPyre_2F/scripts.pory"

# 7 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_MapScripts::
# 8 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 9 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 10 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtPyre_2F_SetHoleWarp
# 11 "data/maps/MtPyre_2F/scripts.pory"
	.byte 0
# 12 "data/maps/MtPyre_2F/scripts.pory"

# 13 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_SetHoleWarp:
# 14 "data/maps/MtPyre_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 15 "data/maps/MtPyre_2F/scripts.pory"
	setholewarp MAP_MT_PYRE_1F
# 16 "data/maps/MtPyre_2F/scripts.pory"
	end
# 17 "data/maps/MtPyre_2F/scripts.pory"

# 18 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Woman::
# 19 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MemoriesOfSkitty, MSGBOX_NPC
# 20 "data/maps/MtPyre_2F/scripts.pory"
	end
# 21 "data/maps/MtPyre_2F/scripts.pory"

# 22 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_PokefanM::
# 23 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_TumbledFromFloorAbove, MSGBOX_NPC
# 24 "data/maps/MtPyre_2F/scripts.pory"
	end
# 25 "data/maps/MtPyre_2F/scripts.pory"

# 26 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Pyre_AquaGrunt1Pyre_AquaGrunt2::
# 27 "data/maps/MtPyre_2F/scripts.pory"
lockall
# 28 "data/maps/MtPyre_2F/scripts.pory"
setvar VAR_0x8008, LOCALID_PYRE_AQUAGRUNT1
# 29 "data/maps/MtPyre_2F/scripts.pory"
playse SE_PIN
# 30 "data/maps/MtPyre_2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 31 "data/maps/MtPyre_2F/scripts.pory"
waitmovement 0
# 32 "data/maps/MtPyre_2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 33 "data/maps/MtPyre_2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 34 "data/maps/MtPyre_2F/scripts.pory"
waitmovement 0
# 35 "data/maps/MtPyre_2F/scripts.pory"
msgbox MtPyre_2F_Text_Pyre_AquaGrunt1Intro MSGBOX_AUTOCLOSE
# 36 "data/maps/MtPyre_2F/scripts.pory"
setvar VAR_0x8008, LOCALID_PYRE_AQUAGRUNT2
# 37 "data/maps/MtPyre_2F/scripts.pory"
playse SE_PIN
# 38 "data/maps/MtPyre_2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 39 "data/maps/MtPyre_2F/scripts.pory"
waitmovement 0
# 40 "data/maps/MtPyre_2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 41 "data/maps/MtPyre_2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/MtPyre_2F/scripts.pory"
waitmovement 0
# 43 "data/maps/MtPyre_2F/scripts.pory"
msgbox MtPyre_2F_Text_Pyre_AquaGrunt2Intro, MSGBOX_AUTOCLOSE
# 44 "data/maps/MtPyre_2F/scripts.pory"
goto MtPyre_2F_EventScript_Pyre_AquaGrunt1Pyre_AquaGrunt2DoMultiBattle
# 45 "data/maps/MtPyre_2F/scripts.pory"
releaseall
# 46 "data/maps/MtPyre_2F/scripts.pory"
end
# 47 "data/maps/MtPyre_2F/scripts.pory"

# 48 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Pyre_AquaGrunt1Pyre_AquaGrunt2DoMultiBattle::
# 49 "data/maps/MtPyre_2F/scripts.pory"
playbgm MUS_MT_PYRE, TRUE
# 50 "data/maps/MtPyre_2F/scripts.pory"
multi_2p_vs_2 TRAINER_PYRE_AQUAGRUNT1, MtPyre_2F_Text_Pyre_AquaGrunt1Defeat, TRAINER_PYRE_AQUAGRUNT2, MtPyre_2F_Text_Pyre_AquaGrunt2Defeat, PARTNER_EMMIE
# 51 "data/maps/MtPyre_2F/scripts.pory"
switch VAR_RESULT
# 52 "data/maps/MtPyre_2F/scripts.pory"
case 1, MtPyre_2F_EventScript_Pyre_AquaGrunt1Pyre_AquaGrunt2Victory
# 53 "data/maps/MtPyre_2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 54 "data/maps/MtPyre_2F/scripts.pory"
special SetCB2WhiteOut
# 55 "data/maps/MtPyre_2F/scripts.pory"
waitstate
# 56 "data/maps/MtPyre_2F/scripts.pory"

# 57 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Pyre_AquaGrunt1Pyre_AquaGrunt2Victory::
# 58 "data/maps/MtPyre_2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 59 "data/maps/MtPyre_2F/scripts.pory"
waitmovement 0
# 60 "data/maps/MtPyre_2F/scripts.pory"
msgbox MtPyre_2F_Text_Pyre_AquaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/MtPyre_2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 62 "data/maps/MtPyre_2F/scripts.pory"
waitmovement 0
# 63 "data/maps/MtPyre_2F/scripts.pory"
msgbox MtPyre_2F_Text_Pyre_AquaGrunt2PostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/MtPyre_2F/scripts.pory"
addvar VAR_MT_PYRE_STATE, 1
# 65 "data/maps/MtPyre_2F/scripts.pory"
end
# 66 "data/maps/MtPyre_2F/scripts.pory"

# 67 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Pyre_MagmaGrunt4Pyre_MagmaGrunt5::
# 68 "data/maps/MtPyre_2F/scripts.pory"
lockall
# 69 "data/maps/MtPyre_2F/scripts.pory"
setvar VAR_0x8008, LOCALID_PYRE_MAGMAGRUNT4
# 70 "data/maps/MtPyre_2F/scripts.pory"
playse SE_PIN
# 71 "data/maps/MtPyre_2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 72 "data/maps/MtPyre_2F/scripts.pory"
waitmovement 0
# 73 "data/maps/MtPyre_2F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 74 "data/maps/MtPyre_2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 75 "data/maps/MtPyre_2F/scripts.pory"
waitmovement 0
# 76 "data/maps/MtPyre_2F/scripts.pory"
msgbox MtPyre_2F_Text_Pyre_MagmaGrunt4Intro MSGBOX_AUTOCLOSE
# 77 "data/maps/MtPyre_2F/scripts.pory"
setvar VAR_0x8008, LOCALID_PYRE_MAGMAGRUNT5
# 78 "data/maps/MtPyre_2F/scripts.pory"
playse SE_PIN
# 79 "data/maps/MtPyre_2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 80 "data/maps/MtPyre_2F/scripts.pory"
waitmovement 0
# 81 "data/maps/MtPyre_2F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 82 "data/maps/MtPyre_2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 83 "data/maps/MtPyre_2F/scripts.pory"
waitmovement 0
# 84 "data/maps/MtPyre_2F/scripts.pory"
msgbox MtPyre_2F_Text_Pyre_MagmaGrunt5Intro, MSGBOX_AUTOCLOSE
# 85 "data/maps/MtPyre_2F/scripts.pory"
goto MtPyre_2F_EventScript_Pyre_MagmaGrunt4Pyre_MagmaGrunt5DoMultiBattle
# 86 "data/maps/MtPyre_2F/scripts.pory"
releaseall
# 87 "data/maps/MtPyre_2F/scripts.pory"
end
# 88 "data/maps/MtPyre_2F/scripts.pory"

# 89 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Pyre_MagmaGrunt4Pyre_MagmaGrunt5DoMultiBattle::
# 90 "data/maps/MtPyre_2F/scripts.pory"
playbgm MUS_MT_PYRE, TRUE
# 91 "data/maps/MtPyre_2F/scripts.pory"
multi_2p_vs_2 TRAINER_PYRE_MAGMAGRUNT4, MtPyre_2F_Text_Pyre_MagmaGrunt4Defeat, TRAINER_PYRE_MAGMAGRUNT5, MtPyre_2F_Text_Pyre_MagmaGrunt5Defeat, PARTNER_EMMIE
# 92 "data/maps/MtPyre_2F/scripts.pory"
switch VAR_RESULT
# 93 "data/maps/MtPyre_2F/scripts.pory"
case 1, MtPyre_2F_EventScript_Pyre_MagmaGrunt4Pyre_MagmaGrunt5Victory
# 94 "data/maps/MtPyre_2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 95 "data/maps/MtPyre_2F/scripts.pory"
special SetCB2WhiteOut
# 96 "data/maps/MtPyre_2F/scripts.pory"
waitstate
# 97 "data/maps/MtPyre_2F/scripts.pory"

# 98 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Pyre_MagmaGrunt4Pyre_MagmaGrunt5Victory::
# 99 "data/maps/MtPyre_2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 100 "data/maps/MtPyre_2F/scripts.pory"
waitmovement 0
# 101 "data/maps/MtPyre_2F/scripts.pory"
msgbox MtPyre_2F_Text_Pyre_MagmaGrunt4PostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/MtPyre_2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 103 "data/maps/MtPyre_2F/scripts.pory"
waitmovement 0
# 104 "data/maps/MtPyre_2F/scripts.pory"
msgbox MtPyre_2F_Text_Pyre_MagmaGrunt5PostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/MtPyre_2F/scripts.pory"
addvar VAR_MT_PYRE_STATE, 1
# 106 "data/maps/MtPyre_2F/scripts.pory"
end
# 107 "data/maps/MtPyre_2F/scripts.pory"

# 108 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Mark::
# 109 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_MARK, MtPyre_2F_Text_MarkIntro, MtPyre_2F_Text_MarkDefeat
# 110 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/MtPyre_2F/scripts.pory"
	end
# 112 "data/maps/MtPyre_2F/scripts.pory"

# 113 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Pyre_MagmaGrunt4::
# 114 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_Pyre_MagmaGrunt4PostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/MtPyre_2F/scripts.pory"
	end
# 116 "data/maps/MtPyre_2F/scripts.pory"

# 117 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Pyre_MagmaGrunt5::
# 118 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_Pyre_MagmaGrunt5PostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/MtPyre_2F/scripts.pory"
	end
# 120 "data/maps/MtPyre_2F/scripts.pory"

# 121 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Pyre_AquaGrunt2::
# 122 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_Pyre_AquaGrunt2PostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/MtPyre_2F/scripts.pory"
	end
# 124 "data/maps/MtPyre_2F/scripts.pory"

# 125 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Pyre_AquaGrunt1::
# 126 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_Pyre_AquaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/MtPyre_2F/scripts.pory"
	end
# 128 "data/maps/MtPyre_2F/scripts.pory"

# 129 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MemoriesOfSkitty:
# 130 "data/maps/MtPyre_2F/scripts.pory"
	.string "Memories of my darling SKITTY…\n"
# 131 "data/maps/MtPyre_2F/scripts.pory"
	.string "My eyes overflow thinking about it.$"
# 132 "data/maps/MtPyre_2F/scripts.pory"

# 133 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_TumbledFromFloorAbove:
# 134 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ooch, ouch… I fell down here after\n"
# 135 "data/maps/MtPyre_2F/scripts.pory"
	.string "getting jumped by Team Magma.\p"
# 136 "data/maps/MtPyre_2F/scripts.pory"
	.string "Problem is I'm now too scared to\n"
# 137 "data/maps/MtPyre_2F/scripts.pory"
	.string "jump down again…$"
# 138 "data/maps/MtPyre_2F/scripts.pory"

# 139 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkIntro:
# 140 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hey! Are you searching for POKéMON?\n"
# 141 "data/maps/MtPyre_2F/scripts.pory"
	.string "You came along after me! You're rude!$"
# 142 "data/maps/MtPyre_2F/scripts.pory"

# 143 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkDefeat:
# 144 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ayieeeeh!\n"
# 145 "data/maps/MtPyre_2F/scripts.pory"
	.string "I'm sorry, forgive me, please!$"
# 146 "data/maps/MtPyre_2F/scripts.pory"

# 147 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkPostBattle:
# 148 "data/maps/MtPyre_2F/scripts.pory"
	.string "People don't come here often, so\n"
# 149 "data/maps/MtPyre_2F/scripts.pory"
	.string "I thought there'd be rare POKéMON.$"
# 150 "data/maps/MtPyre_2F/scripts.pory"

# 151 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_Pyre_MagmaGrunt4Intro:
# 152 "data/maps/MtPyre_2F/scripts.pory"
	.string "We fell through a hole chasing Matt\n"
# 153 "data/maps/MtPyre_2F/scripts.pory"
	.string "and now my leg is all messed up!$"
# 154 "data/maps/MtPyre_2F/scripts.pory"

# 155 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_Pyre_MagmaGrunt4Defeat:
# 156 "data/maps/MtPyre_2F/scripts.pory"
	.string "Kick a man when he's down why don't you!$"
# 157 "data/maps/MtPyre_2F/scripts.pory"

# 158 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_Pyre_MagmaGrunt4PostBattle:
# 159 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ugh, just beat it already!$"
# 160 "data/maps/MtPyre_2F/scripts.pory"

# 161 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeNotEnoughMons:
# 162 "data/maps/MtPyre_2F/scripts.pory"
	.string "LUKE: If you want to take me on,\n"
# 163 "data/maps/MtPyre_2F/scripts.pory"
	.string "bring some more POKéMON.\p"
# 164 "data/maps/MtPyre_2F/scripts.pory"
	.string "If you don't, I won't be able to show\n"
# 165 "data/maps/MtPyre_2F/scripts.pory"
	.string "off to my girl how cool I am!$"
# 166 "data/maps/MtPyre_2F/scripts.pory"

# 167 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_Pyre_MagmaGrunt5Intro:
# 168 "data/maps/MtPyre_2F/scripts.pory"
	.string "Get a load of this guy!\p"
# 169 "data/maps/MtPyre_2F/scripts.pory"
	.string "Why do I always get paired up with the\n"
# 170 "data/maps/MtPyre_2F/scripts.pory"
	.string "weakest people?!$"
# 171 "data/maps/MtPyre_2F/scripts.pory"

# 172 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_Pyre_MagmaGrunt5Defeat:
# 173 "data/maps/MtPyre_2F/scripts.pory"
	.string "Maybe I could use a breather too…$"
# 174 "data/maps/MtPyre_2F/scripts.pory"

# 175 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_Pyre_MagmaGrunt5PostBattle:
# 176 "data/maps/MtPyre_2F/scripts.pory"
	.string "I guess I got over-confident.$"
# 177 "data/maps/MtPyre_2F/scripts.pory"

# 178 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezNotEnoughMons:
# 179 "data/maps/MtPyre_2F/scripts.pory"
	.string "DEZ: If you want to challenge us, you\n"
# 180 "data/maps/MtPyre_2F/scripts.pory"
	.string "should bring at least two POKéMON.\p"
# 181 "data/maps/MtPyre_2F/scripts.pory"
	.string "My boyfriend's strong.\n"
# 182 "data/maps/MtPyre_2F/scripts.pory"
	.string "Just one POKéMON won't do at all.$"
# 183 "data/maps/MtPyre_2F/scripts.pory"

# 184 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_Pyre_AquaGrunt2Intro:
# 185 "data/maps/MtPyre_2F/scripts.pory"
	.string "We have fallen behind Team Magma!$"
# 186 "data/maps/MtPyre_2F/scripts.pory"

# 187 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_Pyre_AquaGrunt2Defeat:
# 188 "data/maps/MtPyre_2F/scripts.pory"
	.string "This will hold us up even more!$"
# 189 "data/maps/MtPyre_2F/scripts.pory"

# 190 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_Pyre_AquaGrunt2PostBattle:
# 191 "data/maps/MtPyre_2F/scripts.pory"
	.string "We can't let Team Magma get any\n"
# 192 "data/maps/MtPyre_2F/scripts.pory"
	.string "ahead of us!$"
# 193 "data/maps/MtPyre_2F/scripts.pory"

# 194 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_Pyre_AquaGrunt1Intro:
# 195 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hey, you!$"
# 196 "data/maps/MtPyre_2F/scripts.pory"

# 197 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_Pyre_AquaGrunt1Defeat:
# 198 "data/maps/MtPyre_2F/scripts.pory"
	.string "…$"
# 199 "data/maps/MtPyre_2F/scripts.pory"

# 200 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_Pyre_AquaGrunt1PostBattle:
# 201 "data/maps/MtPyre_2F/scripts.pory"
	.string "This and Team Magma is too much!$"
