# 1 "data/maps/VictoryRoad_B1F/scripts.pory"

# 2 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_MapScripts::
# 3 "data/maps/VictoryRoad_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/VictoryRoad_B1F/scripts.pory"

# 5 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_ShannonSamuel::
# 6 "data/maps/VictoryRoad_B1F/scripts.pory"
lockall
# 7 "data/maps/VictoryRoad_B1F/scripts.pory"
playse SE_PIN
# 8 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement LOCALID_SHANNON, Common_Movement_ExclamationMark
# 9 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 10 "data/maps/VictoryRoad_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 11 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 12 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 13 "data/maps/VictoryRoad_B1F/scripts.pory"
msgbox VictoryRoad_B1F_Text_ShannonIntro MSGBOX_AUTOCLOSE
# 14 "data/maps/VictoryRoad_B1F/scripts.pory"
playse SE_PIN
# 15 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement  LOCALID_SAMUEL, Common_Movement_ExclamationMark
# 16 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 17 "data/maps/VictoryRoad_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 18 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 19 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 20 "data/maps/VictoryRoad_B1F/scripts.pory"
msgbox VictoryRoad_B1F_Text_SamuelIntro MSGBOX_AUTOCLOSE
# 21 "data/maps/VictoryRoad_B1F/scripts.pory"
goto VictoryRoad_B1F_EventScript_ShannonSamuelDoMultiBattle
# 22 "data/maps/VictoryRoad_B1F/scripts.pory"
releaseall
# 23 "data/maps/VictoryRoad_B1F/scripts.pory"
end
# 24 "data/maps/VictoryRoad_B1F/scripts.pory"

# 25 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_ShannonSamuelDoMultiBattle::
# 26 "data/maps/VictoryRoad_B1F/scripts.pory"
playbgm MUS_VICTORY_ROAD, TRUE
# 27 "data/maps/VictoryRoad_B1F/scripts.pory"
multi_2p_vs_2 TRAINER_SHANNON, VictoryRoad_B1F_Text_ShannonDefeat, TRAINER_SAMUEL, VictoryRoad_B1F_Text_SamuelDefeat, PARTNER_EMMIE
# 28 "data/maps/VictoryRoad_B1F/scripts.pory"
switch VAR_RESULT
# 29 "data/maps/VictoryRoad_B1F/scripts.pory"
case 1, VictoryRoad_B1F_EventScript_ShannonSamuelVictory
# 30 "data/maps/VictoryRoad_B1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 31 "data/maps/VictoryRoad_B1F/scripts.pory"
special SetCB2WhiteOut
# 32 "data/maps/VictoryRoad_B1F/scripts.pory"
waitstate
# 33 "data/maps/VictoryRoad_B1F/scripts.pory"

# 34 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_ShannonSamuelVictory::
# 35 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 36 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 37 "data/maps/VictoryRoad_B1F/scripts.pory"
msgbox VictoryRoad_B1F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 39 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 40 "data/maps/VictoryRoad_B1F/scripts.pory"
msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/VictoryRoad_B1F/scripts.pory"
addvar VAR_VICTORY_ROAD_1F_STATE, 1
# 42 "data/maps/VictoryRoad_B1F/scripts.pory"
end
# 43 "data/maps/VictoryRoad_B1F/scripts.pory"

# 44 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Samuel::
# 45 "data/maps/VictoryRoad_B1F/scripts.pory"
	faceplayer
# 46 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 48 "data/maps/VictoryRoad_B1F/scripts.pory"

# 49 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Shannon::
# 50 "data/maps/VictoryRoad_B1F/scripts.pory"
	faceplayer
# 51 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 53 "data/maps/VictoryRoad_B1F/scripts.pory"

# 54 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_MitchellMichelle::
# 55 "data/maps/VictoryRoad_B1F/scripts.pory"
lockall
# 56 "data/maps/VictoryRoad_B1F/scripts.pory"
playse SE_PIN
# 57 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement LOCALID_MITCHELL, Common_Movement_ExclamationMark
# 58 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 59 "data/maps/VictoryRoad_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 60 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 62 "data/maps/VictoryRoad_B1F/scripts.pory"
msgbox VictoryRoad_B1F_Text_MitchellIntro MSGBOX_AUTOCLOSE
# 63 "data/maps/VictoryRoad_B1F/scripts.pory"
playse SE_PIN
# 64 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement  LOCALID_MICHELLE, Common_Movement_ExclamationMark
# 65 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 66 "data/maps/VictoryRoad_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 67 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 68 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 69 "data/maps/VictoryRoad_B1F/scripts.pory"
msgbox VictoryRoad_B1F_Text_MichelleIntro MSGBOX_AUTOCLOSE
# 70 "data/maps/VictoryRoad_B1F/scripts.pory"
goto VictoryRoad_B1F_EventScript_MitchellMichelleDoMultiBattle
# 71 "data/maps/VictoryRoad_B1F/scripts.pory"
releaseall
# 72 "data/maps/VictoryRoad_B1F/scripts.pory"
end
# 73 "data/maps/VictoryRoad_B1F/scripts.pory"

# 74 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_MitchellMichelleDoMultiBattle::
# 75 "data/maps/VictoryRoad_B1F/scripts.pory"
playbgm MUS_VICTORY_ROAD, TRUE
# 76 "data/maps/VictoryRoad_B1F/scripts.pory"
multi_2p_vs_2 TRAINER_MITCHELL, VictoryRoad_B1F_Text_MitchellDefeat, TRAINER_MICHELLE, VictoryRoad_B1F_Text_MichelleDefeat, PARTNER_EMMIE
# 77 "data/maps/VictoryRoad_B1F/scripts.pory"
switch VAR_RESULT
# 78 "data/maps/VictoryRoad_B1F/scripts.pory"
case 1, VictoryRoad_B1F_EventScript_MitchellMichelleVictory
# 79 "data/maps/VictoryRoad_B1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 80 "data/maps/VictoryRoad_B1F/scripts.pory"
special SetCB2WhiteOut
# 81 "data/maps/VictoryRoad_B1F/scripts.pory"
waitstate
# 82 "data/maps/VictoryRoad_B1F/scripts.pory"

# 83 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_MitchellMichelleVictory::
# 84 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 85 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 86 "data/maps/VictoryRoad_B1F/scripts.pory"
msgbox VictoryRoad_B1F_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 88 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 89 "data/maps/VictoryRoad_B1F/scripts.pory"
msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/VictoryRoad_B1F/scripts.pory"
addvar VAR_VICTORY_ROAD_1F_STATE, 1
# 91 "data/maps/VictoryRoad_B1F/scripts.pory"
end
# 92 "data/maps/VictoryRoad_B1F/scripts.pory"

# 93 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_FelixHalle::
# 94 "data/maps/VictoryRoad_B1F/scripts.pory"
lockall
# 95 "data/maps/VictoryRoad_B1F/scripts.pory"
playse SE_PIN
# 96 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement LOCALID_FELIX, Common_Movement_ExclamationMark
# 97 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 98 "data/maps/VictoryRoad_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 99 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 100 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 101 "data/maps/VictoryRoad_B1F/scripts.pory"
msgbox VictoryRoad_B2F_Text_FelixIntro MSGBOX_AUTOCLOSE
# 102 "data/maps/VictoryRoad_B1F/scripts.pory"
playse SE_PIN
# 103 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement  LOCALID_HALLE, Common_Movement_ExclamationMark
# 104 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 105 "data/maps/VictoryRoad_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 106 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 107 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 108 "data/maps/VictoryRoad_B1F/scripts.pory"
msgbox VictoryRoad_B1F_Text_HalleIntro MSGBOX_AUTOCLOSE
# 109 "data/maps/VictoryRoad_B1F/scripts.pory"
goto VictoryRoad_B1F_EventScript_FelixHalleDoMultiBattle
# 110 "data/maps/VictoryRoad_B1F/scripts.pory"
releaseall
# 111 "data/maps/VictoryRoad_B1F/scripts.pory"
end
# 112 "data/maps/VictoryRoad_B1F/scripts.pory"

# 113 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_FelixHalleDoMultiBattle::
# 114 "data/maps/VictoryRoad_B1F/scripts.pory"
playbgm MUS_VICTORY_ROAD, TRUE
# 115 "data/maps/VictoryRoad_B1F/scripts.pory"
multi_2p_vs_2 TRAINER_FELIX, VictoryRoad_B2F_Text_FelixDefeat, TRAINER_HALLE, VictoryRoad_B1F_Text_HalleDefeat, PARTNER_EMMIE
# 116 "data/maps/VictoryRoad_B1F/scripts.pory"
switch VAR_RESULT
# 117 "data/maps/VictoryRoad_B1F/scripts.pory"
case 1, VictoryRoad_B1F_EventScript_FelixHalleVictory
# 118 "data/maps/VictoryRoad_B1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 119 "data/maps/VictoryRoad_B1F/scripts.pory"
special SetCB2WhiteOut
# 120 "data/maps/VictoryRoad_B1F/scripts.pory"
waitstate
# 121 "data/maps/VictoryRoad_B1F/scripts.pory"

# 122 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_FelixHalleVictory::
# 123 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 124 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 125 "data/maps/VictoryRoad_B1F/scripts.pory"
msgbox VictoryRoad_B2F_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/VictoryRoad_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 127 "data/maps/VictoryRoad_B1F/scripts.pory"
waitmovement 0
# 128 "data/maps/VictoryRoad_B1F/scripts.pory"
msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/VictoryRoad_B1F/scripts.pory"
addvar VAR_VICTORY_ROAD_1F_STATE, 1
# 130 "data/maps/VictoryRoad_B1F/scripts.pory"
end
# 131 "data/maps/VictoryRoad_B1F/scripts.pory"

# 132 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Michelle::
# 133 "data/maps/VictoryRoad_B1F/scripts.pory"
	faceplayer
# 134 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 136 "data/maps/VictoryRoad_B1F/scripts.pory"

# 137 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Mitchell::
# 138 "data/maps/VictoryRoad_B1F/scripts.pory"
	faceplayer
# 139 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
# 140 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 141 "data/maps/VictoryRoad_B1F/scripts.pory"

# 142 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Halle::
# 143 "data/maps/VictoryRoad_B1F/scripts.pory"
	faceplayer
# 144 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 146 "data/maps/VictoryRoad_B1F/scripts.pory"

# 147 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelIntro:
# 148 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "The thought that I'm getting closer to\n"
# 149 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the POKéMON LEAGUE…\p"
# 150 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I'm getting stage fright…$"
# 151 "data/maps/VictoryRoad_B1F/scripts.pory"

# 152 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelDefeat:
# 153 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I couldn't do a thing…$"
# 154 "data/maps/VictoryRoad_B1F/scripts.pory"

# 155 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelPostBattle:
# 156 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "The POKéMON LEAGUE became distant\n"
# 157 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "again… What a letdown…$"
# 158 "data/maps/VictoryRoad_B1F/scripts.pory"

# 159 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_ShannonIntro:
# 160 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "To win your way through the POKéMON\n"
# 161 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "LEAGUE, you need the trust of your\l"
# 162 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "POKéMON.$"
# 163 "data/maps/VictoryRoad_B1F/scripts.pory"

# 164 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_ShannonDefeat:
# 165 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Your relationship is based on\n"
# 166 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "solid trust.$"
# 167 "data/maps/VictoryRoad_B1F/scripts.pory"

# 168 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_ShannonPostBattle:
# 169 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "By being together all the time, trust\n"
# 170 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "grows between POKéMON and TRAINERS.$"
# 171 "data/maps/VictoryRoad_B1F/scripts.pory"

# 172 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichelleIntro:
# 173 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "This isn't the goal. It's only a place\n"
# 174 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "on the way to the POKéMON LEAGUE.$"
# 175 "data/maps/VictoryRoad_B1F/scripts.pory"

# 176 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichelleDefeat:
# 177 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "That's the way!$"
# 178 "data/maps/VictoryRoad_B1F/scripts.pory"

# 179 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichellePostBattle:
# 180 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "You'll do fine, for sure!\n"
# 181 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Your POKéMON are all eager to go!$"
# 182 "data/maps/VictoryRoad_B1F/scripts.pory"

# 183 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MitchellIntro:
# 184 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "My POKéMON are cosmically\n"
# 185 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "awe inspiring!$"
# 186 "data/maps/VictoryRoad_B1F/scripts.pory"

# 187 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MitchellDefeat:
# 188 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I've never met anyone like you before.$"
# 189 "data/maps/VictoryRoad_B1F/scripts.pory"

# 190 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MitchellPostBattle:
# 191 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Even outside of battle, I sense\n"
# 192 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "incredible power emanating from you\l"
# 193 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "and your POKéMON.$"
# 194 "data/maps/VictoryRoad_B1F/scripts.pory"

# 195 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HalleIntro:
# 196 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Okay, no need to get your back up!\n"
# 197 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Relax, let's take it easy!$"
# 198 "data/maps/VictoryRoad_B1F/scripts.pory"

# 199 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HalleDefeat:
# 200 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Whoa!\n"
# 201 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Wonderful!$"
# 202 "data/maps/VictoryRoad_B1F/scripts.pory"

# 203 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HallePostBattle:
# 204 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Sure, this is VICTORY ROAD.\p"
# 205 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "But it's not all that different from\n"
# 206 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the path you've taken so far.\p"
# 207 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Try to enjoy things the rest of\n"
# 208 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the way!$"
