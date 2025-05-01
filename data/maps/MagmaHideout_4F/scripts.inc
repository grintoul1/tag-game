# 1 "data/maps/MagmaHideout_4F/scripts.pory"

# 2 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON, 1
# 3 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT11, 2
# 4 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT12, 3
# 5 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_COURTNEY, 4
# 6 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_TABITHA, 5
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_MAXIE, 6
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON_SLEEPING, 7
# 9 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_SHELLY, 9
# 10 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_EMMIE, 10
# 11 "data/maps/MagmaHideout_4F/scripts.pory"

# 12 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 13 "data/maps/MagmaHideout_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_4F_OnTransition
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 15 "data/maps/MagmaHideout_4F/scripts.pory"

# 16 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_OnTransition:
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_unset FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_EventScript_SetGroudonPosition
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
	
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_SetGroudonPosition::
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_GROUDON, 16, 19
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	return
# 23 "data/maps/MagmaHideout_4F/scripts.pory"

# 24 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 36 "data/maps/MagmaHideout_4F/scripts.pory"

# 37 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 41 "data/maps/MagmaHideout_4F/scripts.pory"

# 42 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 55 "data/maps/MagmaHideout_4F/scripts.pory"

# 56 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 59 "data/maps/MagmaHideout_4F/scripts.pory"

# 60 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11Grunt12::
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
lockall
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT11
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
playse SE_PIN
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
msgbox MagmaHideout_4F_Text_Grunt11Intro MSGBOX_AUTOCLOSE
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT12
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
playse SE_PIN
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
msgbox MagmaHideout_4F_Text_Grunt12Intro MSGBOX_AUTOCLOSE
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
goto MagmaHideout_4F_EventScript_Grunt11Grunt12_ChoosePartyForMultiBattle
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
releaseall
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
end
# 81 "data/maps/MagmaHideout_4F/scripts.pory"

# 82 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11Grunt12_ChoosePartyForMultiBattle::
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
special SavePlayerParty
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
fadescreen FADE_TO_BLACK
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
special ChooseHalfPartyForBattle
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
waitstate
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_4F_EventScript_Grunt11Grunt12DoMultiBattle
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
goto MagmaHideout_4F_EventScript_Grunt11Grunt12_ChoosePartyForMultiBattle
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
closemessage
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
releaseall
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
end
# 92 "data/maps/MagmaHideout_4F/scripts.pory"

# 93 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11Grunt12DoMultiBattle::
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Defeat, PARTNER_SHELLY
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
special LoadPlayerParty
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
switch VAR_RESULT
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
case 1, MagmaHideout_4F_EventScript_Grunt11Grunt12Victory
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
fadescreen FADE_TO_BLACK
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
special SetCB2WhiteOut
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
waitstate
# 102 "data/maps/MagmaHideout_4F/scripts.pory"

# 103 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11Grunt12Victory::
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
end
# 112 "data/maps/MagmaHideout_4F/scripts.pory"

# 113 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 116 "data/maps/MagmaHideout_4F/scripts.pory"

# 117 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_PlayerKnockedBack:
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_down
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_down
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 123 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 124 "data/maps/MagmaHideout_4F/scripts.pory"

# 125 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_TabithaKnockedBack:
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 127 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_up
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_up
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 132 "data/maps/MagmaHideout_4F/scripts.pory"

# 133 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_CourtneyKnockedBack:
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 136 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_right
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 139 "data/maps/MagmaHideout_4F/scripts.pory"

# 140 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_CourtneyApproachShelly:
# 141 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	jump_2_down
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 145 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 146 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 147 "data/maps/MagmaHideout_4F/scripts.pory"

# 148 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_ShellyKnockedBack:
# 149 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_8
# 150 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 151 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_left
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 153 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 154 "data/maps/MagmaHideout_4F/scripts.pory"

# 155 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_ShellyExit:
# 156 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 157 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 159 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 160 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 161 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 162 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 164 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 165 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 166 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 167 "data/maps/MagmaHideout_4F/scripts.pory"

# 168 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_CourtneyMoveForShelly:
# 169 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 172 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 175 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 176 "data/maps/MagmaHideout_4F/scripts.pory"

# 177 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_EmmieEnters:
# 178 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 179 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 180 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 183 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 184 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 185 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 187 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 188 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 190 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 193 "data/maps/MagmaHideout_4F/scripts.pory"

# 194 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_PanToAction:
# 195 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_southwest
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_southwest
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 198 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 199 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 203 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 204 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 205 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 208 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 209 "data/maps/MagmaHideout_4F/scripts.pory"

# 210 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_PanFromAction:
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 213 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 215 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 217 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 218 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 219 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_northeast
# 223 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_northeast
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 225 "data/maps/MagmaHideout_4F/scripts.pory"

# 226 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_ShellyApproachPlayer:
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 231 "data/maps/MagmaHideout_4F/scripts.pory"

# 232 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaThinkIWouldntFindYou:
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: Did you think you I wouldn't\n"
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "find you?\p"
# 235 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You two really need to work on your\n"
# 236 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "stealth!$"
# 237 "data/maps/MagmaHideout_4F/scripts.pory"

# 238 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyThatWasLow:
# 239 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Tabitha! That was low, even\n"
# 240 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "by your standards.$"
# 241 "data/maps/MagmaHideout_4F/scripts.pory"

# 242 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyAreYouOkay:
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Are you okay kid?\p"
# 244 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Pull yourself together now. We're\n"
# 245 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "almost at the heart of the hideout.$"
# 246 "data/maps/MagmaHideout_4F/scripts.pory"

# 247 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyTabithaMove:
# 248 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: You know you can't take both\n"
# 249 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "of us alone.\l"
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Do yourself a favour and move!$"
# 251 "data/maps/MagmaHideout_4F/scripts.pory"

# 252 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyNotAlone:
# 253 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Courtney: Oh, but he isn't alone!$"
# 254 "data/maps/MagmaHideout_4F/scripts.pory"

# 255 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyCourtney:
# 256 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Courtney!$"
# 257 "data/maps/MagmaHideout_4F/scripts.pory"

# 258 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyJustInTime:
# 259 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Courtney: You made it just in time to\n"
# 260 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "witness our vision come to pass.\p"
# 261 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Look, over there!$"
# 262 "data/maps/MagmaHideout_4F/scripts.pory"

# 263 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaYoureTooLate:
# 264 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: Hehe… You're too late. Maxie has\n"
# 265 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "awoken Groudon at long last!$"
# 266 "data/maps/MagmaHideout_4F/scripts.pory"

# 267 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyNeedToTellArchie:
# 268 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: I need to tell Archie what has\n"
# 269 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "happened here.$"
# 270 "data/maps/MagmaHideout_4F/scripts.pory"

# 271 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyCourtneyMove:
# 272 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Courtney, move out of my way.$"
# 273 "data/maps/MagmaHideout_4F/scripts.pory"

# 274 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyYoureGoingNowhere:
# 275 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Courtney: I don't think so. You're\n"
# 276 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "not going anywhere!$"
# 277 "data/maps/MagmaHideout_4F/scripts.pory"

# 278 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaLooksLikeYoureCaught:
# 279 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: It looks like you're caught\n"
# 280 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "between a rock and a hot place!\p"
# 281 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This time there's no way out.$"
# 282 "data/maps/MagmaHideout_4F/scripts.pory"

# 283 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyTabitha_NowhereToRun:
# 284 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: There's nowhere to run!$"
# 285 "data/maps/MagmaHideout_4F/scripts.pory"

# 286 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Maxie_NowhereToRun:
# 287 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: You're not getting away this\n"
# 288 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "time!$"
# 289 "data/maps/MagmaHideout_4F/scripts.pory"

# 290 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyMustLeave:
# 291 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Listen kid. With Groudon\n"
# 292 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "awake, disaster is about to strike.\p"
# 293 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I'm grateful for your help, but there's\n"
# 294 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "nothing more we can do here.\p"
# 295 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I need to tell Archie what has happened\n"
# 296 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "and I strongly suggest you leave too.\p"
# 297 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You may have taken on Maxie before, but\n"
# 298 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "now that he wields the power of Groudon,\l"
# 299 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "he's unstoppable.\p"
# 300 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our interests aligned today, but you\n"
# 301 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "must understand that Team Aqua has no\l"
# 302 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "choice but to retaliate.\p"
# 303 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I know you won't listen, you never\n"
# 304 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "do, but please stay out of our way…$"
# 305 "data/maps/MagmaHideout_4F/scripts.pory"

# 306 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_EmmieLetsGo:
# 307 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Emmie: {PLAYER}!\p"
# 308 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I felt an earthquake and came here as\n"
# 309 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "quickly as I could.\p"
# 310 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I just passed Shelly who explained that\n"
# 311 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie has awoken Groudon.\p"
# 312 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "She may have chosen to run, but I'm here\n"
# 313 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "and nobody has stopped us before.\p"
# 314 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I know we can defeat Maxie if we work\n"
# 315 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "together just like we always do.\p"
# 316 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Come on, let's go!$"
# 317 "data/maps/MagmaHideout_4F/scripts.pory"

# 318 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabitha::
# 319 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 320 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 321 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_SHELLY
# 322 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 323 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_PlayerKnockedBack
# 324 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 325 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaThinkIWouldntFindYou, MSGBOX_DEFAULT
# 326 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 327 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 328 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkSlowDown
# 329 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 330 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 331 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterLeft
# 332 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 333 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyThatWasLow, MSGBOX_DEFAULT
# 334 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 335 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 336 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 337 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyAreYouOkay, MSGBOX_DEFAULT
# 338 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 339 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterLeft
# 340 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 341 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyTabithaMove, MSGBOX_DEFAULT
# 342 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 344 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 345 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterRight
# 346 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 347 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 22, 2
# 348 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 349 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_QuestionMark
# 350 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 351 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyNotAlone, MSGBOX_DEFAULT
# 352 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 353 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_COURTNEY
# 354 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_CourtneyApproachShelly
# 355 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 356 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 357 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 358 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 359 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyCourtney, MSGBOX_DEFAULT
# 360 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 361 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyJustInTime, MSGBOX_DEFAULT
# 362 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_COURTNEY
# 364 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 365 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 17, 6
# 366 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 20, 6
# 367 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 368 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 369 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 370 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 371 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 372 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 373 "data/maps/MagmaHideout_4F/scripts.pory"
	special SpawnCameraObject
# 374 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MagmaHideout_4F_Movement_PanToAction
# 375 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 376 "data/maps/MagmaHideout_4F/scripts.pory"
	special RemoveCameraObject
# 377 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 378 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 379 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 380 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 381 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 382 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 383 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 384 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 385 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 386 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 387 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 388 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 389 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 390 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON_SLEEPING
# 391 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 392 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 393 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 394 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 395 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 396 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
# 397 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_GROUDON, 16, 19
# 398 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 399 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 400 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 401 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 402 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 403 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 404 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 405 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 406 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 407 "data/maps/MagmaHideout_4F/scripts.pory"
	special SpawnCameraObject
# 408 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MagmaHideout_4F_Movement_PanFromAction
# 409 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 410 "data/maps/MagmaHideout_4F/scripts.pory"
	special RemoveCameraObject
# 411 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 412 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterLeft
# 413 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 414 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterLeft
# 415 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 416 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 417 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaYoureTooLate, MSGBOX_DEFAULT
# 418 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 419 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterRight
# 420 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 421 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyNeedToTellArchie, MSGBOX_DEFAULT
# 422 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 423 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkRight
# 424 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 425 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyCourtneyMove, MSGBOX_DEFAULT
# 426 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 427 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 428 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, MagmaHideout_4F_Movement_ShellyKnockedBack
# 429 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 430 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkSlowDown
# 431 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkSlowLeft
# 432 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 433 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyYoureGoingNowhere, MSGBOX_DEFAULT
# 434 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 435 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 436 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 437 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaLooksLikeYoureCaught, MSGBOX_DEFAULT
# 438 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 439 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_CourtneyTabitha_ChoosePartyForMultiBattle
# 440 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 441 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 442 "data/maps/MagmaHideout_4F/scripts.pory"

# 443 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabitha_ChoosePartyForMultiBattle::
# 444 "data/maps/MagmaHideout_4F/scripts.pory"
	special SavePlayerParty
# 445 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 446 "data/maps/MagmaHideout_4F/scripts.pory"
	special ChooseHalfPartyForBattle
# 447 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 448 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MagmaHideout_4F_EventScript_CourtneyTabithaDoMultiBattle
# 449 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_CourtneyTabitha_NowhereToRun
# 450 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 451 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 452 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 453 "data/maps/MagmaHideout_4F/scripts.pory"

# 454 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabitha_NowhereToRun::
# 455 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyTabitha_NowhereToRun, MSGBOX_DEFAULT
# 456 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 457 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_CourtneyTabitha_ChoosePartyForMultiBattle
# 458 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 459 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 460 "data/maps/MagmaHideout_4F/scripts.pory"

# 461 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabithaDoMultiBattle::
# 462 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 463 "data/maps/MagmaHideout_4F/scripts.pory"
	multi_2_vs_2 TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaDefeat, TRAINER_COURTNEY_MAGMA_HIDEOUT, MagmaHideout_4F_Text_CourtneyDefeat, PARTNER_SHELLY
# 464 "data/maps/MagmaHideout_4F/scripts.pory"
	special LoadPlayerParty
# 465 "data/maps/MagmaHideout_4F/scripts.pory"
	switch VAR_RESULT
# 466 "data/maps/MagmaHideout_4F/scripts.pory"
	case 1, MagmaHideout_4F_EventScript_CourtneyTabithaVictory
# 467 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 468 "data/maps/MagmaHideout_4F/scripts.pory"
	special SetCB2WhiteOut
# 469 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 470 "data/maps/MagmaHideout_4F/scripts.pory"

# 471 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabithaVictory::
# 472 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 473 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 474 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 475 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 476 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, MagmaHideout_4F_Movement_TabithaKnockedBack
# 477 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_CourtneyKnockedBack
# 478 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 479 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 480 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkSlowRight
# 481 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowUp
# 482 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 483 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterLeft
# 484 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 485 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 486 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 487 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 488 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 489 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 490 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 491 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, MagmaHideout_4F_Movement_ShellyApproachPlayer
# 492 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 493 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyMustLeave, MSGBOX_AUTOCLOSE
# 494 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 495 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_SHELLY, MagmaHideout_4F_Movement_ShellyExit
# 496 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_CourtneyMoveForShelly
# 497 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 498 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 100
# 499 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 500 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 17, 5
# 501 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 20, 5
# 502 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_SHELLY
# 503 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_COURTNEY
# 504 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
# 505 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 506 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 507 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_EMMIE
# 508 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 509 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 510 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_EMMIE, MagmaHideout_4F_Movement_EmmieEnters
# 511 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 512 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_EmmieLetsGo, MSGBOX_DEFAULT
# 513 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 514 "data/maps/MagmaHideout_4F/scripts.pory"
	addvar VAR_MAGMAHIDEOUT_STATE, 1
# 515 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 516 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 517 "data/maps/MagmaHideout_4F/scripts.pory"

# 518 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxiePyreMaxieDefeated::
# 519 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieMomentsAway1, MSGBOX_DEFAULT
# 520 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 521 "data/maps/MagmaHideout_4F/scripts.pory"
	return
# 522 "data/maps/MagmaHideout_4F/scripts.pory"

# 523 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxiePyreArchieDefeated::
# 524 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieMomentsAway2, MSGBOX_DEFAULT
# 525 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 526 "data/maps/MagmaHideout_4F/scripts.pory"
	return
# 527 "data/maps/MagmaHideout_4F/scripts.pory"

# 528 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 529 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 530 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 531 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 532 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 533 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, MagmaHideout_4F_EventScript_MaxiePyreMaxieDefeated
# 534 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, MagmaHideout_4F_EventScript_MaxiePyreArchieDefeated
# 535 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_MaxieDoMultiBattle
# 536 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 537 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 538 "data/maps/MagmaHideout_4F/scripts.pory"

# 539 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxieDoMultiBattle::
# 540 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 541 "data/maps/MagmaHideout_4F/scripts.pory"
	multi_2p_vs_1 TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat, PARTNER_EMMIE
# 542 "data/maps/MagmaHideout_4F/scripts.pory"
	switch VAR_RESULT
# 543 "data/maps/MagmaHideout_4F/scripts.pory"
	case 1, MagmaHideout_4F_EventScript_MaxieVictory
# 544 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 545 "data/maps/MagmaHideout_4F/scripts.pory"
	special SetCB2WhiteOut
# 546 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 547 "data/maps/MagmaHideout_4F/scripts.pory"

# 548 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxieVictory::
# 549 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxiePostBattle, MSGBOX_DEFAULT
# 550 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 551 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_COURTNEY
# 552 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 553 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 554 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 555 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 556 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieGroudonLeave, MSGBOX_DEFAULT
# 557 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 558 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 559 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_QuestionMark
# 560 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 561 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 562 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_WalkInPlaceFasterUp
# 563 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 564 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 565 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 566 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 567 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 568 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 569 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 570 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 571 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 572 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 573 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 574 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 575 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 576 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
# 577 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 578 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 579 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 580 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 581 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 582 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 583 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 584 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 585 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 586 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_WalkInPlaceFasterRight
# 587 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 588 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 589 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 590 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
# 591 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 592 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 7, 20
# 593 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 7, 21
# 594 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_COURTNEY
# 595 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_TABITHA
# 596 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_AdminApproachMaxie
# 597 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, MagmaHideout_4F_Movement_AdminApproachMaxie
# 598 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 599 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 600 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieLetsGo, MSGBOX_DEFAULT
# 601 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 602 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 603 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_ABNORMAL_WEATHER_SUN
# 604 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 605 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 606 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 607 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT11
# 608 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT12
# 609 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_COURTNEY
# 610 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 611 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 612 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 613 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
# 614 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_COURTNEY
# 615 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_SHELLY
# 616 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS
# 617 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 618 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_SHELLY
# 619 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 620 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_JAGGED_PASS_MAXIE
# 621 "data/maps/MagmaHideout_4F/scripts.pory"
	addvar VAR_MAGMAHIDEOUT_STATE, 1
# 622 "data/maps/MagmaHideout_4F/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 623 "data/maps/MagmaHideout_4F/scripts.pory"
	warp MAP_JAGGED_PASS, 16, 19
# 624 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 625 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 626 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 627 "data/maps/MagmaHideout_4F/scripts.pory"

# 628 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieLetsGo:
# 629 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Tabitha… Courtney… Let us step\n"
# 630 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "outside and see our dream in reality.$"
# 631 "data/maps/MagmaHideout_4F/scripts.pory"

# 632 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_AdminApproachMaxie:
# 633 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 634 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 635 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 636 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 637 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 638 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 639 "data/maps/MagmaHideout_4F/scripts.pory"

# 640 "data/maps/MagmaHideout_4F/scripts.pory"

# 641 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Courtney::
# 642 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
# 643 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 644 "data/maps/MagmaHideout_4F/scripts.pory"

# 645 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 646 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 647 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 648 "data/maps/MagmaHideout_4F/scripts.pory"

# 649 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxiePostBattle:
# 650 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: How can this be?!\p"
# 651 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Even with the power of Groudon by my\n"
# 652 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "side, you remain defiant.$"
# 653 "data/maps/MagmaHideout_4F/scripts.pory"

# 654 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonLeave:
# 655 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: This matters not.\p"
# 656 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon, I release you!\n"
# 657 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Bask the world in the light of the sun!$"
# 658 "data/maps/MagmaHideout_4F/scripts.pory"

# 659 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Intro:
# 660 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I want to see GROUDON, too, but they\n"
# 661 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "won't let me see even its tail…\p"
# 662 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's got me feeling really frustrated.\p"
# 663 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Oh, no!\n"
# 664 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I blabbed about GROUDON!$"
# 665 "data/maps/MagmaHideout_4F/scripts.pory"

# 666 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Defeat:
# 667 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I guess it's impossible to win if one\n"
# 668 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "doesn't have a calm mind…$"
# 669 "data/maps/MagmaHideout_4F/scripts.pory"

# 670 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11PostBattle:
# 671 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I wonder if GROUDON even has a tail?$"
# 672 "data/maps/MagmaHideout_4F/scripts.pory"

# 673 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Intro:
# 674 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!\n"
# 675 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Soon! Very soon!\l"
# 676 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our grand objective will be achieved!$"
# 677 "data/maps/MagmaHideout_4F/scripts.pory"

# 678 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Defeat:
# 679 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
# 680 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've come so far, but now this?$"
# 681 "data/maps/MagmaHideout_4F/scripts.pory"

# 682 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12PostBattle:
# 683 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE, sir!\n"
# 684 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "An intruder is headed your way!$"
# 685 "data/maps/MagmaHideout_4F/scripts.pory"

# 686 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyIntro:
# 687 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 688 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 689 "data/maps/MagmaHideout_4F/scripts.pory"

# 690 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyDefeat:
# 691 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was I that easy to knock down?$"
# 692 "data/maps/MagmaHideout_4F/scripts.pory"

# 693 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyPostBattle:
# 694 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Courtney: You really are a force to be \n"
# 695 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "reckoned with, aren't you…\p"
# 696 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "No matter. You cannot stop what is\n"
# 697 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "about to happen.$"
# 698 "data/maps/MagmaHideout_4F/scripts.pory"

# 699 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 700 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 701 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 702 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 703 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, GROUDON is sleeping!\p"
# 704 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE went to GROUDON just seconds\n"
# 705 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 706 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 707 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 708 "data/maps/MagmaHideout_4F/scripts.pory"

# 709 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 710 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Taken down again…\n"
# 711 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe…$"
# 712 "data/maps/MagmaHideout_4F/scripts.pory"

# 713 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 714 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: Heh… Groudon has awakened…\p"
# 715 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This means everything is about to\n"
# 716 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "change forever…$"
# 717 "data/maps/MagmaHideout_4F/scripts.pory"

# 718 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 719 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Groudon…\p"
# 720 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 721 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 722 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This Blue Orb is what you sought.\n"
# 723 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't it?\p"
# 724 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the Blue Orb.\n"
# 725 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 726 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And show me…\n"
# 727 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Show me the full extent of your power!$"
# 728 "data/maps/MagmaHideout_4F/scripts.pory"

# 729 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieMomentsAway1:
# 730 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: {PLAYER}, Emmie… It appears on\n"
# 731 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "this occasion your timing is off.\p"
# 732 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You bear witness to the rebirth of the\n"
# 733 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "legendary Pokémon Groudon.\p"
# 734 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With its power on our side, Team Magma's\n"
# 735 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "vision of expanding the land is mere\l"
# 736 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "moments away.\p"
# 737 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I told you atop Mt. Pyre that we were\n"
# 738 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "not the villains.\p"
# 739 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I stand by my words, but sometimes even\n"
# 740 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "good people must make tough decisions.\p"
# 741 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I regret to inform you that our hideout\n"
# 742 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is the end of the line for you.$"
# 743 "data/maps/MagmaHideout_4F/scripts.pory"

# 744 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieMomentsAway2:
# 745 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: {PLAYER}, Emmie… It appears on\n"
# 746 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "this occasion your timing is off.\p"
# 747 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You bear witness to the rebirth of the\n"
# 748 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "legendary Pokémon Groudon.\p"
# 749 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With its power on our side, Team Magma's\n"
# 750 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "vision of expanding the land is mere\l"
# 751 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "moments away.\p"
# 752 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "On Mt. Pyre I warned you to not involve\n"
# 753 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "yourselves in ours affairs again.\p"
# 754 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Here you stand before me, at the very\n"
# 755 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "moment that everything I've worked to\l"
# 756 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "achieve is finally within my grasp.\p"
# 757 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I regret to inform you that our hideout\n"
# 758 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is the end of the line for you.$"
# 759 "data/maps/MagmaHideout_4F/scripts.pory"

# 760 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 761 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Groudon!\n"
# 762 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 763 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the Blue Orb the key?\p"
# 764 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "GROUDON!\n"
# 765 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 766 "data/maps/MagmaHideout_4F/scripts.pory"

# 767 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 768 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: It is done.\p"
# 769 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon will soak Hoenn it the sun\n"
# 770 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "creating more land mass for all!$"
# 771 "data/maps/MagmaHideout_4F/scripts.pory"

# 772 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 773 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What makes you so adept at handling\n"
# 774 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "POKéMON?$"
# 775 "data/maps/MagmaHideout_4F/scripts.pory"

# 776 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 777 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: There has to be some reason\n"
# 778 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "why GROUDON fled…\p"
# 779 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's what you're trying to say,\n"
# 780 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "aren't you?\p"
# 781 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\n"
# 782 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 783 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Humph…\n"
# 784 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You think I didn't know that?\p"
# 785 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With GROUDON gone, there is no longer\n"
# 786 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "any need for this blasted volcano.\p"
# 787 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I am going after GROUDON, so this\n"
# 788 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is where we part!$"
