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
.set LOCALID_EMMIE, 9
# 10 "data/maps/MagmaHideout_4F/scripts.pory"

# 11 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 12 "data/maps/MagmaHideout_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_4F_OnTransition
# 13 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 14 "data/maps/MagmaHideout_4F/scripts.pory"

# 15 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_OnTransition:
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_unset FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_EventScript_SetGroudonPosition
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_SetGroudonPosition::
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_GROUDON, 16, 19
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	return
# 22 "data/maps/MagmaHideout_4F/scripts.pory"

# 23 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 35 "data/maps/MagmaHideout_4F/scripts.pory"

# 36 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 40 "data/maps/MagmaHideout_4F/scripts.pory"

# 41 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 54 "data/maps/MagmaHideout_4F/scripts.pory"

# 55 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 58 "data/maps/MagmaHideout_4F/scripts.pory"

# 59 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11Grunt12::
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
lockall
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT11
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
playse SE_PIN
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
msgbox MagmaHideout_4F_Text_Grunt11Intro MSGBOX_AUTOCLOSE
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT12
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
playse SE_PIN
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
msgbox MagmaHideout_4F_Text_Grunt12Intro, MSGBOX_AUTOCLOSE
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
goto MagmaHideout_4F_EventScript_Grunt11Grunt12_ChoosePartyForMultiBattle
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
releaseall
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
end
# 80 "data/maps/MagmaHideout_4F/scripts.pory"

# 81 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11Grunt12_ChoosePartyForMultiBattle::
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
special SavePlayerParty
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
fadescreen FADE_TO_BLACK
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
special ChooseHalfPartyForBattle
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
waitstate
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_4F_EventScript_Grunt11Grunt12DoMultiBattle
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
goto MagmaHideout_4F_EventScript_Grunt11Grunt12_ChoosePartyForMultiBattle
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
closemessage
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
releaseall
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
end
# 91 "data/maps/MagmaHideout_4F/scripts.pory"

# 92 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11Grunt12DoMultiBattle::
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Defeat, PARTNER_SHELLY
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
special LoadPlayerParty
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
switch VAR_RESULT
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
case 1, MagmaHideout_4F_EventScript_Grunt11Grunt12Victory
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
fadescreen FADE_TO_BLACK
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
special SetCB2WhiteOut
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
waitstate
# 101 "data/maps/MagmaHideout_4F/scripts.pory"

# 102 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11Grunt12Victory::
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
end
# 111 "data/maps/MagmaHideout_4F/scripts.pory"

# 112 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 115 "data/maps/MagmaHideout_4F/scripts.pory"

# 116 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_PlayerKnockedBack:
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_down
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_down
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 123 "data/maps/MagmaHideout_4F/scripts.pory"

# 124 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_TabithaKnockedBack:
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 127 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_up
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_up
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 131 "data/maps/MagmaHideout_4F/scripts.pory"

# 132 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_CourtneyKnockedBack:
# 133 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_right
# 136 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 138 "data/maps/MagmaHideout_4F/scripts.pory"

# 139 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_CourtneyApproachShelly:
# 140 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 141 "data/maps/MagmaHideout_4F/scripts.pory"
	jump_2_down
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 145 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 146 "data/maps/MagmaHideout_4F/scripts.pory"

# 147 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_ShellyKnockedBack:
# 148 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_8
# 149 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 150 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_left
# 151 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 153 "data/maps/MagmaHideout_4F/scripts.pory"

# 154 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_ShellyExit:
# 155 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
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
	walk_down
# 162 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 164 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 165 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 166 "data/maps/MagmaHideout_4F/scripts.pory"

# 167 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_CourtneyMoveForShelly:
# 168 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 169 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 172 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 175 "data/maps/MagmaHideout_4F/scripts.pory"

# 176 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_EmmieEnters:
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 178 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 179 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 180 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 183 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 184 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
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
	face_down
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 192 "data/maps/MagmaHideout_4F/scripts.pory"

# 193 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_PanToAction:
# 194 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_southwest
# 195 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_southwest
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
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
	step_end
# 208 "data/maps/MagmaHideout_4F/scripts.pory"

# 209 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_PanFromAction:
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
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
	walk_diag_northeast
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_northeast
# 223 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 224 "data/maps/MagmaHideout_4F/scripts.pory"

# 225 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_ShellyApproachPlayer:
# 226 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 230 "data/maps/MagmaHideout_4F/scripts.pory"

# 231 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaThinkIWouldntFindYou:
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: Did you think you I wouldn't\n"
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "find you?\p"
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You two really need to work on your\n"
# 235 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "stealth!$"
# 236 "data/maps/MagmaHideout_4F/scripts.pory"

# 237 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyThatWasLow:
# 238 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Tabitha! That was low, even\n"
# 239 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "by your standards.$"
# 240 "data/maps/MagmaHideout_4F/scripts.pory"

# 241 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyAreYouOkay:
# 242 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Are you okay kid?\p"
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Pull yourself together now. We're\n"
# 244 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "almost at the heart of the hideout.$"
# 245 "data/maps/MagmaHideout_4F/scripts.pory"

# 246 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyTabithaMove:
# 247 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: You know you can't take both\n"
# 248 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "of us alone.\l"
# 249 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Do yourself a favour and move!$"
# 250 "data/maps/MagmaHideout_4F/scripts.pory"

# 251 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyNotAlone:
# 252 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "????: Oh, but he isn't alone!$"
# 253 "data/maps/MagmaHideout_4F/scripts.pory"

# 254 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyCourtney:
# 255 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Courtney!$"
# 256 "data/maps/MagmaHideout_4F/scripts.pory"

# 257 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyJustInTime:
# 258 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Courtney: You made it just in time to\n"
# 259 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "witness our vision come to pass.\p"
# 260 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Look, over there!$"
# 261 "data/maps/MagmaHideout_4F/scripts.pory"

# 262 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaYoureTooLate:
# 263 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: Hehe… You're too late. Maxie has\n"
# 264 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "awoken Groudon at long last!$"
# 265 "data/maps/MagmaHideout_4F/scripts.pory"

# 266 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyNeedToTellArchie:
# 267 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: I need to tell Archie what has\n"
# 268 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "happened here.$"
# 269 "data/maps/MagmaHideout_4F/scripts.pory"

# 270 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyCourtneyMove:
# 271 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Courtney, move out of my way.$"
# 272 "data/maps/MagmaHideout_4F/scripts.pory"

# 273 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyYoureGoingNowhere:
# 274 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Courtney: I don't think so. You're not\n"
# 275 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "going anywhere!$"
# 276 "data/maps/MagmaHideout_4F/scripts.pory"

# 277 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaLooksLikeYoureCaught:
# 278 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: It looks like you're caught\n"
# 279 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "between a rock and a hot place!\p"
# 280 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This time there's no way out.$"
# 281 "data/maps/MagmaHideout_4F/scripts.pory"

# 282 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyTabitha_NowhereToRun:
# 283 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: There's nowhere to run!$"
# 284 "data/maps/MagmaHideout_4F/scripts.pory"

# 285 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Maxie_NowhereToRun:
# 286 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: You're not getting away this\n"
# 287 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "time!$"
# 288 "data/maps/MagmaHideout_4F/scripts.pory"

# 289 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyMustLeave:
# 290 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Listen kid. With Groudon\n"
# 291 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "awake, disaster is about to strike.\p"
# 292 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I'm grateful for your help, but there's\n"
# 293 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "nothing more we can do here.\p"
# 294 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I need to tell Archie what has happened\n"
# 295 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "and I strongly suggest you leave too.\p"
# 296 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You may have taken on Maxie before, but\n"
# 297 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "now he wields the power of Groudon,\l"
# 298 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "meaning he's unstoppable.\p"
# 299 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our interests aligned today, but you\n"
# 300 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "must understand that Team Aqua has no\l"
# 301 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "choice but to retaliate.\p"
# 302 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I know you won't listen, you never\n"
# 303 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "do, but please stay out of our way…$"
# 304 "data/maps/MagmaHideout_4F/scripts.pory"

# 305 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_EmmieLetsGo:
# 306 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Emmie: {PLAYER}!\p"
# 307 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I felt an earthquake and came here as\n"
# 308 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "quickly as I could.\p"
# 309 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I just passed Shelly who explained that\n"
# 310 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie has awoken Groudon.\p"
# 311 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "She may have chosen to run, but I'm here\n"
# 312 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "and nobody has stopped us before.\p"
# 313 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I know we can defeat Maxie if we work\n"
# 314 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "together just like we always do.\p"
# 315 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Come on, let's go!$"
# 316 "data/maps/MagmaHideout_4F/scripts.pory"

# 317 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabitha::
# 318 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 319 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 320 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 321 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_PlayerKnockedBack
# 322 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 323 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaThinkIWouldntFindYou, MSGBOX_DEFAULT
# 324 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 325 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 326 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkSlowDown
# 327 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 328 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 329 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 330 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 331 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyThatWasLow, MSGBOX_DEFAULT
# 332 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 333 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 334 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 335 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyAreYouOkay, MSGBOX_DEFAULT
# 336 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 337 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 338 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 339 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyTabithaMove, MSGBOX_DEFAULT
# 340 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 341 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 342 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 344 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 345 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 22, 2
# 346 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 347 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 348 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 349 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyNotAlone, MSGBOX_DEFAULT
# 350 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 351 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_COURTNEY
# 352 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_CourtneyApproachShelly
# 353 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 354 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 355 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 356 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 357 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyCourtney, MSGBOX_DEFAULT
# 358 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 359 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyJustInTime, MSGBOX_DEFAULT
# 360 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 361 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_COURTNEY
# 362 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 17, 6
# 364 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 20, 6
# 365 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 366 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 367 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 368 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 369 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 370 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 371 "data/maps/MagmaHideout_4F/scripts.pory"
	special SpawnCameraObject
# 372 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MagmaHideout_4F_Movement_PanToAction
# 373 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 374 "data/maps/MagmaHideout_4F/scripts.pory"
	special RemoveCameraObject
# 375 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 376 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 377 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 378 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 379 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 380 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 381 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 382 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 383 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 384 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 385 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 386 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 387 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 388 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON_SLEEPING
# 389 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 390 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 391 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 392 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 393 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 394 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
# 395 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_GROUDON, 16, 19
# 396 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 397 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 398 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 399 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 400 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 401 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 402 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 403 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 404 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 405 "data/maps/MagmaHideout_4F/scripts.pory"
	special SpawnCameraObject
# 406 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MagmaHideout_4F_Movement_PanFromAction
# 407 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 408 "data/maps/MagmaHideout_4F/scripts.pory"
	special RemoveCameraObject
# 409 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 410 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterLeft
# 411 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 412 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 413 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 414 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 415 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaYoureTooLate, MSGBOX_DEFAULT
# 416 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 417 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 418 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 419 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyNeedToTellArchie, MSGBOX_DEFAULT
# 420 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 421 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkRight
# 422 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 423 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyCourtneyMove, MSGBOX_DEFAULT
# 424 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 425 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 426 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_4F_Movement_ShellyKnockedBack
# 427 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 428 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkSlowDown
# 429 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkSlowLeft
# 430 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 431 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyYoureGoingNowhere, MSGBOX_DEFAULT
# 432 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 433 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 434 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 435 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaLooksLikeYoureCaught, MSGBOX_DEFAULT
# 436 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 437 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_CourtneyTabitha_ChoosePartyForMultiBattle
# 438 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 439 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 440 "data/maps/MagmaHideout_4F/scripts.pory"

# 441 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabitha_ChoosePartyForMultiBattle::
# 442 "data/maps/MagmaHideout_4F/scripts.pory"
	special SavePlayerParty
# 443 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 444 "data/maps/MagmaHideout_4F/scripts.pory"
	special ChooseHalfPartyForBattle
# 445 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 446 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MagmaHideout_4F_EventScript_CourtneyTabithaDoMultiBattle
# 447 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_CourtneyTabitha_NowhereToRun
# 448 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 449 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 450 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 451 "data/maps/MagmaHideout_4F/scripts.pory"

# 452 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabitha_NowhereToRun::
# 453 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyTabitha_NowhereToRun, MSGBOX_DEFAULT
# 454 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 455 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_CourtneyTabitha_ChoosePartyForMultiBattle
# 456 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 457 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 458 "data/maps/MagmaHideout_4F/scripts.pory"

# 459 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabithaDoMultiBattle::
# 460 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 461 "data/maps/MagmaHideout_4F/scripts.pory"
	multi_2_vs_2 TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaDefeat, TRAINER_COURTNEY_MAGMA_HIDEOUT, MagmaHideout_4F_Text_CourtneyDefeat, PARTNER_SHELLY
# 462 "data/maps/MagmaHideout_4F/scripts.pory"
	special LoadPlayerParty
# 463 "data/maps/MagmaHideout_4F/scripts.pory"
	switch VAR_RESULT
# 464 "data/maps/MagmaHideout_4F/scripts.pory"
	case 1, MagmaHideout_4F_EventScript_CourtneyTabithaVictory
# 465 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 466 "data/maps/MagmaHideout_4F/scripts.pory"
	special SetCB2WhiteOut
# 467 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 468 "data/maps/MagmaHideout_4F/scripts.pory"

# 469 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabithaVictory::
# 470 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 471 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 472 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 473 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 474 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, MagmaHideout_4F_Movement_TabithaKnockedBack
# 475 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_CourtneyKnockedBack
# 476 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 477 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 478 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowRight
# 479 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowUp
# 480 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 481 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterLeft
# 482 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 483 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 484 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 485 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 486 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 487 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 488 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 489 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_4F_Movement_ShellyApproachPlayer
# 490 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 491 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyMustLeave, MSGBOX_AUTOCLOSE
# 492 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 493 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_4F_Movement_ShellyExit
# 494 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_CourtneyMoveForShelly
# 495 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 496 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 100
# 497 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 498 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 17, 5
# 499 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 20, 5
# 500 "data/maps/MagmaHideout_4F/scripts.pory"
	destroyfollowernpc
# 501 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_FOLLOWER_MAGMA_HIDEOUT_SHELLY, 2
# 502 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_COURTNEY
# 503 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_EMMIE
# 504 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 505 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
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
	setfollowernpc 9, FNPC_ALL, Common_EventScript_Emmie, PARTNER_EMMIE
# 515 "data/maps/MagmaHideout_4F/scripts.pory"
	addvar VAR_MAGMAHIDEOUT_STATE, 1
# 516 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 517 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 518 "data/maps/MagmaHideout_4F/scripts.pory"

# 519 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxiePyreMaxieDefeated::
# 520 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieMomentsAway1, MSGBOX_DEFAULT
# 521 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 522 "data/maps/MagmaHideout_4F/scripts.pory"
	return
# 523 "data/maps/MagmaHideout_4F/scripts.pory"

# 524 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxiePyreArchieDefeated::
# 525 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieMomentsAway2, MSGBOX_DEFAULT
# 526 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 527 "data/maps/MagmaHideout_4F/scripts.pory"
	return
# 528 "data/maps/MagmaHideout_4F/scripts.pory"

# 529 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 530 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 531 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 532 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 533 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 534 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, MagmaHideout_4F_EventScript_MaxiePyreMaxieDefeated
# 535 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, MagmaHideout_4F_EventScript_MaxiePyreArchieDefeated
# 536 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_MaxieDoMultiBattle
# 537 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 538 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 539 "data/maps/MagmaHideout_4F/scripts.pory"

# 540 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxieDoMultiBattle::
# 541 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 542 "data/maps/MagmaHideout_4F/scripts.pory"
	multi_2p_vs_1 TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat, PARTNER_EMMIE
# 543 "data/maps/MagmaHideout_4F/scripts.pory"
	switch VAR_RESULT
# 544 "data/maps/MagmaHideout_4F/scripts.pory"
	case 1, MagmaHideout_4F_EventScript_MaxieVictory
# 545 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 546 "data/maps/MagmaHideout_4F/scripts.pory"
	special SetCB2WhiteOut
# 547 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 548 "data/maps/MagmaHideout_4F/scripts.pory"

# 549 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxieVictory::
# 550 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxiePostBattle, MSGBOX_DEFAULT
# 551 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 552 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_COURTNEY
# 553 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 554 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 555 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 556 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 557 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieGroudonLeave, MSGBOX_DEFAULT
# 558 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 559 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 560 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 561 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 562 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 563 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 564 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 565 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 566 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 567 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 568 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 569 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 570 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 571 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 572 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 573 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 574 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 575 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 576 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 577 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
# 578 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 579 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 580 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 581 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 582 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 583 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 584 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 585 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 586 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 587 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 588 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 589 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 590 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 591 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
# 592 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 593 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 7, 20
# 594 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 7, 21
# 595 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_COURTNEY
# 596 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_TABITHA
# 597 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_AdminApproachMaxie
# 598 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, MagmaHideout_4F_Movement_AdminApproachMaxie
# 599 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 600 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 601 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieLetsGo, MSGBOX_DEFAULT
# 602 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 603 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 604 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_ABNORMAL_WEATHER_SUN
# 605 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 606 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 607 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 608 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT11
# 609 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT12
# 610 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_COURTNEY
# 611 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 612 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 613 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 614 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
# 615 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_COURTNEY
# 616 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_SHELLY
# 617 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS
# 618 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 619 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_SHELLY
# 620 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 621 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_JAGGED_PASS_MAXIE
# 622 "data/maps/MagmaHideout_4F/scripts.pory"
	addvar VAR_MAGMAHIDEOUT_STATE, 1
# 623 "data/maps/MagmaHideout_4F/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 624 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_LEVEL_CAP, 75
# 625 "data/maps/MagmaHideout_4F/scripts.pory"
	warp MAP_JAGGED_PASS, 16, 19
# 626 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 627 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 628 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 629 "data/maps/MagmaHideout_4F/scripts.pory"

# 630 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieLetsGo:
# 631 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Tabitha… Courtney… Let us step\n"
# 632 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "outside and see our dream in reality.$"
# 633 "data/maps/MagmaHideout_4F/scripts.pory"

# 634 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_AdminApproachMaxie:
# 635 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 636 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 637 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 638 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 639 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 640 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 641 "data/maps/MagmaHideout_4F/scripts.pory"

# 642 "data/maps/MagmaHideout_4F/scripts.pory"

# 643 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Courtney::
# 644 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
# 645 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 646 "data/maps/MagmaHideout_4F/scripts.pory"

# 647 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 648 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 649 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 650 "data/maps/MagmaHideout_4F/scripts.pory"

# 651 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxiePostBattle:
# 652 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: How can this be?!\p"
# 653 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Even with the power of Groudon by my\n"
# 654 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "side, you remain defiant.$"
# 655 "data/maps/MagmaHideout_4F/scripts.pory"

# 656 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonLeave:
# 657 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: This matters not.\p"
# 658 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon, I release you!\n"
# 659 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Bask the world in the light of the sun!$"
# 660 "data/maps/MagmaHideout_4F/scripts.pory"

# 661 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Intro:
# 662 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I want to see GROUDON, too, but they\n"
# 663 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "won't let me see even its tail…\p"
# 664 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's got me feeling really frustrated.\p"
# 665 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Oh, no!\n"
# 666 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I blabbed about GROUDON!$"
# 667 "data/maps/MagmaHideout_4F/scripts.pory"

# 668 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Defeat:
# 669 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I guess it's impossible to win if one\n"
# 670 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "doesn't have a calm mind…$"
# 671 "data/maps/MagmaHideout_4F/scripts.pory"

# 672 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11PostBattle:
# 673 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I wonder if GROUDON even has a tail?$"
# 674 "data/maps/MagmaHideout_4F/scripts.pory"

# 675 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Intro:
# 676 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!\n"
# 677 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Soon! Very soon!\l"
# 678 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our grand objective will be achieved!$"
# 679 "data/maps/MagmaHideout_4F/scripts.pory"

# 680 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Defeat:
# 681 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
# 682 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've come so far, but now this?$"
# 683 "data/maps/MagmaHideout_4F/scripts.pory"

# 684 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12PostBattle:
# 685 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE, sir!\n"
# 686 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "An intruder is headed your way!$"
# 687 "data/maps/MagmaHideout_4F/scripts.pory"

# 688 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyIntro:
# 689 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 690 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 691 "data/maps/MagmaHideout_4F/scripts.pory"

# 692 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyDefeat:
# 693 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was I that easy to knock down?$"
# 694 "data/maps/MagmaHideout_4F/scripts.pory"

# 695 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyPostBattle:
# 696 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Courtney: You really are a force to be \n"
# 697 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "reckoned with, aren't you…\p"
# 698 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "No matter. You cannot stop what is\n"
# 699 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "about to happen.$"
# 700 "data/maps/MagmaHideout_4F/scripts.pory"

# 701 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 702 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 703 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 704 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 705 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, GROUDON is sleeping!\p"
# 706 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE went to GROUDON just seconds\n"
# 707 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 708 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 709 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 710 "data/maps/MagmaHideout_4F/scripts.pory"

# 711 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 712 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Taken down again…\n"
# 713 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe…$"
# 714 "data/maps/MagmaHideout_4F/scripts.pory"

# 715 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 716 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: Heh… Groudon has awakened…\p"
# 717 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This means everything is about to\n"
# 718 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "change forever…$"
# 719 "data/maps/MagmaHideout_4F/scripts.pory"

# 720 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 721 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Groudon…\p"
# 722 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 723 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 724 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This Blue Orb is what you sought.\n"
# 725 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't it?\p"
# 726 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the Blue Orb.\n"
# 727 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 728 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And show me…\n"
# 729 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Show me the full extent of your power!$"
# 730 "data/maps/MagmaHideout_4F/scripts.pory"

# 731 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieMomentsAway1:
# 732 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: {PLAYER}, Emmie… It appears on this\n"
# 733 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "occasion your timing is off.\p"
# 734 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You bear witness to the rebirth of the\n"
# 735 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "legendary Pokémon Groudon.\p"
# 736 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With its power on our side, Team Magma's\n"
# 737 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "vision of expanding the land is mere\l"
# 738 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "moments away.\p"
# 739 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I told you atop Mt. Pyre that we were\n"
# 740 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "not the villains.\p"
# 741 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I stand by my words, but sometimes even\n"
# 742 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "good people must make tough decisions.\p"
# 743 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I regret to inform you that our hideout\n"
# 744 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is the end of the line for you.$"
# 745 "data/maps/MagmaHideout_4F/scripts.pory"

# 746 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieMomentsAway2:
# 747 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: {PLAYER}, Emmie… It appears on\n"
# 748 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "this occasion your timing is off.\p"
# 749 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You bear witness to the rebirth of the\n"
# 750 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "legendary Pokémon Groudon.\p"
# 751 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With its power on our side, Team Magma's\n"
# 752 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "vision of expanding the land is mere\l"
# 753 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "moments away.\p"
# 754 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "On Mt. Pyre I warned you to not involve\n"
# 755 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "yourselves in ours affairs again.\p"
# 756 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Here you stand before me, at the very\n"
# 757 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "moment that everything I've worked to\l"
# 758 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "achieve is finally within my grasp.\p"
# 759 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I regret to inform you that our hideout\n"
# 760 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is the end of the line for you.$"
# 761 "data/maps/MagmaHideout_4F/scripts.pory"

# 762 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 763 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Groudon!\n"
# 764 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 765 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the Blue Orb the key?\p"
# 766 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "GROUDON!\n"
# 767 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 768 "data/maps/MagmaHideout_4F/scripts.pory"

# 769 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 770 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: It is done.\p"
# 771 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon will soak Hoenn it the sun\n"
# 772 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "creating more land mass for all!$"
# 773 "data/maps/MagmaHideout_4F/scripts.pory"

# 774 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 775 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What makes you so adept at handling\n"
# 776 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "POKéMON?$"
# 777 "data/maps/MagmaHideout_4F/scripts.pory"

# 778 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 779 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: There has to be some reason\n"
# 780 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "why GROUDON fled…\p"
# 781 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's what you're trying to say,\n"
# 782 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "aren't you?\p"
# 783 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\n"
# 784 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 785 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Humph…\n"
# 786 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You think I didn't know that?\p"
# 787 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With GROUDON gone, there is no longer\n"
# 788 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "any need for this blasted volcano.\p"
# 789 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I am going after GROUDON, so this\n"
# 790 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is where we part!$"
