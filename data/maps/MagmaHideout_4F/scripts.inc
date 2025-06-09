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
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MagmaHideout_4F_OnFrame
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 15 "data/maps/MagmaHideout_4F/scripts.pory"

# 16 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_OnFrame:
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 43, MagmaHideout_4F_EventScript_ProgressEmmieState
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	.2byte 0
# 19 "data/maps/MagmaHideout_4F/scripts.pory"

# 20 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_ProgressEmmieState::
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 44
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	return
# 23 "data/maps/MagmaHideout_4F/scripts.pory"

# 24 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_OnTransition:
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_unset FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_EventScript_SetGroudonPosition
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_SetGroudonPosition::
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_GROUDON, 16, 19
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	return
# 31 "data/maps/MagmaHideout_4F/scripts.pory"

# 32 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 44 "data/maps/MagmaHideout_4F/scripts.pory"

# 45 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 49 "data/maps/MagmaHideout_4F/scripts.pory"

# 50 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 63 "data/maps/MagmaHideout_4F/scripts.pory"

# 64 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	faceplayer
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 68 "data/maps/MagmaHideout_4F/scripts.pory"

# 69 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11Grunt12::
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
lockall
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT11
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
playse SE_PIN
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
msgbox MagmaHideout_4F_Text_Grunt11Intro MSGBOX_AUTOCLOSE
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT12
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
playse SE_PIN
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
msgbox MagmaHideout_4F_Text_Grunt12Intro, MSGBOX_AUTOCLOSE
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
goto MagmaHideout_4F_EventScript_Grunt11Grunt12_ChoosePartyForMultiBattle
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
releaseall
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
end
# 90 "data/maps/MagmaHideout_4F/scripts.pory"

# 91 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11Grunt12_ChoosePartyForMultiBattle::
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
special SavePlayerParty
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
fadescreen FADE_TO_BLACK
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
special ChooseHalfPartyForBattle
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
waitstate
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_4F_EventScript_Grunt11Grunt12DoMultiBattle
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
goto MagmaHideout_4F_EventScript_Grunt11Grunt12_ChoosePartyForMultiBattle
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
closemessage
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
releaseall
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
end
# 101 "data/maps/MagmaHideout_4F/scripts.pory"

# 102 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11Grunt12DoMultiBattle::
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Defeat, PARTNER_SHELLY
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
special LoadPlayerParty
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
switch VAR_RESULT
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
case 1, MagmaHideout_4F_EventScript_Grunt11Grunt12Victory
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
fadescreen FADE_TO_BLACK
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
special SetCB2WhiteOut
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
waitstate
# 111 "data/maps/MagmaHideout_4F/scripts.pory"

# 112 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11Grunt12Victory::
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
waitmovement 0
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
end
# 121 "data/maps/MagmaHideout_4F/scripts.pory"

# 122 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 123 "data/maps/MagmaHideout_4F/scripts.pory"
	faceplayer
# 124 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 126 "data/maps/MagmaHideout_4F/scripts.pory"

# 127 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_PlayerKnockedBack:
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_down
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_down
# 132 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 133 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 134 "data/maps/MagmaHideout_4F/scripts.pory"

# 135 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_TabithaKnockedBack:
# 136 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_up
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_up
# 140 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 141 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 142 "data/maps/MagmaHideout_4F/scripts.pory"

# 143 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_CourtneyKnockedBack:
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 145 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 146 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_right
# 147 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 148 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 149 "data/maps/MagmaHideout_4F/scripts.pory"

# 150 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_CourtneyApproachShelly:
# 151 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
	jump_2_down
# 153 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 154 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 155 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 156 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 157 "data/maps/MagmaHideout_4F/scripts.pory"

# 158 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_ShellyKnockedBack:
# 159 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_8
# 160 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 161 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_fast_left
# 162 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 164 "data/maps/MagmaHideout_4F/scripts.pory"

# 165 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_ShellyExit:
# 166 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 167 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 168 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 169 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 172 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 175 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 176 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 177 "data/maps/MagmaHideout_4F/scripts.pory"

# 178 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_CourtneyMoveForShelly:
# 179 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 180 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	lock_facing_direction
# 183 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 184 "data/maps/MagmaHideout_4F/scripts.pory"
	unlock_facing_direction
# 185 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 186 "data/maps/MagmaHideout_4F/scripts.pory"

# 187 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_EmmieEnters:
# 188 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 190 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 194 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 195 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 198 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 199 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 203 "data/maps/MagmaHideout_4F/scripts.pory"

# 204 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_PanToAction:
# 205 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_southwest
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_southwest
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 208 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 209 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 213 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 215 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 217 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 218 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 219 "data/maps/MagmaHideout_4F/scripts.pory"

# 220 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_PanFromAction:
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 223 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 225 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 226 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 231 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_up
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_northeast
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_diag_northeast
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 235 "data/maps/MagmaHideout_4F/scripts.pory"

# 236 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_ShellyApproachPlayer:
# 237 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 238 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_left
# 239 "data/maps/MagmaHideout_4F/scripts.pory"
	face_down
# 240 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 241 "data/maps/MagmaHideout_4F/scripts.pory"

# 242 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaThinkIWouldntFindYou:
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: Did you think you I wouldn't\n"
# 244 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "find you?\p"
# 245 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You two really need to work on your\n"
# 246 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "stealth!$"
# 247 "data/maps/MagmaHideout_4F/scripts.pory"

# 248 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyThatWasLow:
# 249 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Tabitha! That was low, even\n"
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "by your standards.$"
# 251 "data/maps/MagmaHideout_4F/scripts.pory"

# 252 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyAreYouOkay:
# 253 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Are you okay kid?\p"
# 254 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Pull yourself together now. We're\n"
# 255 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "almost at the heart of the hideout.$"
# 256 "data/maps/MagmaHideout_4F/scripts.pory"

# 257 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyTabithaMove:
# 258 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: You know you can't take both\n"
# 259 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "of us alone.\l"
# 260 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Do yourself a favour and move!$"
# 261 "data/maps/MagmaHideout_4F/scripts.pory"

# 262 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyNotAlone:
# 263 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "????: Oh, but he isn't alone!$"
# 264 "data/maps/MagmaHideout_4F/scripts.pory"

# 265 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyCourtney:
# 266 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Courtney!$"
# 267 "data/maps/MagmaHideout_4F/scripts.pory"

# 268 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyJustInTime:
# 269 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Courtney: You made it just in time to\n"
# 270 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "witness our vision come to pass.\p"
# 271 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Look, over there!$"
# 272 "data/maps/MagmaHideout_4F/scripts.pory"

# 273 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaYoureTooLate:
# 274 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: Hehe… You're too late. Maxie has\n"
# 275 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "awoken Groudon at long last!$"
# 276 "data/maps/MagmaHideout_4F/scripts.pory"

# 277 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyNeedToTellArchie:
# 278 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: I need to tell Archie what has\n"
# 279 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "happened here.$"
# 280 "data/maps/MagmaHideout_4F/scripts.pory"

# 281 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyCourtneyMove:
# 282 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Courtney, move out of my way.$"
# 283 "data/maps/MagmaHideout_4F/scripts.pory"

# 284 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyYoureGoingNowhere:
# 285 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Courtney: I don't think so. You're not\n"
# 286 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "going anywhere!$"
# 287 "data/maps/MagmaHideout_4F/scripts.pory"

# 288 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaLooksLikeYoureCaught:
# 289 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: It looks like you're caught\n"
# 290 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "between a rock and a hot place!\p"
# 291 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This time there's no way out.$"
# 292 "data/maps/MagmaHideout_4F/scripts.pory"

# 293 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyTabitha_NowhereToRun:
# 294 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: There's nowhere to run!$"
# 295 "data/maps/MagmaHideout_4F/scripts.pory"

# 296 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Maxie_NowhereToRun:
# 297 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: You're not getting away this\n"
# 298 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "time!$"
# 299 "data/maps/MagmaHideout_4F/scripts.pory"

# 300 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_ShellyMustLeave:
# 301 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Shelly: Listen kid. With Groudon\n"
# 302 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "awake, disaster is about to strike.\p"
# 303 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I'm grateful for your help, but there's\n"
# 304 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "nothing more we can do here.\p"
# 305 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I need to tell Archie what has happened\n"
# 306 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "and I strongly suggest you leave too.\p"
# 307 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You may have taken on Maxie before, but\n"
# 308 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "now he wields the power of Groudon,\l"
# 309 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "meaning he's unstoppable.\p"
# 310 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our interests aligned today, but you\n"
# 311 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "must understand that Team Aqua has no\l"
# 312 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "choice but to retaliate.\p"
# 313 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I know you won't listen, you never\n"
# 314 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "do, but please stay out of our way…$"
# 315 "data/maps/MagmaHideout_4F/scripts.pory"

# 316 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_EmmieLetsGo:
# 317 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Emmie: {PLAYER}!\p"
# 318 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I felt an earthquake and came here as\n"
# 319 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "quickly as I could.\p"
# 320 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I just passed Shelly who explained that\n"
# 321 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie has awoken Groudon.\p"
# 322 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "She may have chosen to run, but I'm here\n"
# 323 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "and nobody has stopped us before.\p"
# 324 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I know we can defeat Maxie if we work\n"
# 325 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "together just like we always do.\p"
# 326 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Come on, let's go!$"
# 327 "data/maps/MagmaHideout_4F/scripts.pory"

# 328 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabitha::
# 329 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 330 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 331 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 332 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_PlayerKnockedBack
# 333 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 334 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaThinkIWouldntFindYou, MSGBOX_DEFAULT
# 335 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 336 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 337 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkSlowDown
# 338 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 339 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 340 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 341 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 342 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyThatWasLow, MSGBOX_DEFAULT
# 343 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 344 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 345 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 346 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyAreYouOkay, MSGBOX_DEFAULT
# 347 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 348 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 349 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 350 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyTabithaMove, MSGBOX_DEFAULT
# 351 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 352 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 353 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 354 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 355 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 356 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 22, 2
# 357 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 358 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 359 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 360 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyNotAlone, MSGBOX_DEFAULT
# 361 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 362 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_COURTNEY
# 363 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_CourtneyApproachShelly
# 364 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 365 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 366 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 367 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 368 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyCourtney, MSGBOX_DEFAULT
# 369 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 370 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyJustInTime, MSGBOX_DEFAULT
# 371 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 372 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_COURTNEY
# 373 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 374 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 17, 6
# 375 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 20, 6
# 376 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterDown
# 377 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 378 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 379 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 380 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 381 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 382 "data/maps/MagmaHideout_4F/scripts.pory"
	special SpawnCameraObject
# 383 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MagmaHideout_4F_Movement_PanToAction
# 384 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 385 "data/maps/MagmaHideout_4F/scripts.pory"
	special RemoveCameraObject
# 386 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 387 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 388 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 389 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 390 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 391 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 392 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 393 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 394 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 395 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 396 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 397 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 398 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 399 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON_SLEEPING
# 400 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 401 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 402 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 403 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 404 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 405 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
# 406 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_GROUDON, 16, 19
# 407 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 408 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 409 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 410 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 411 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 412 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 413 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 414 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 415 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 416 "data/maps/MagmaHideout_4F/scripts.pory"
	special SpawnCameraObject
# 417 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MagmaHideout_4F_Movement_PanFromAction
# 418 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 419 "data/maps/MagmaHideout_4F/scripts.pory"
	special RemoveCameraObject
# 420 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 421 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterLeft
# 422 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 423 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 424 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 425 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 426 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaYoureTooLate, MSGBOX_DEFAULT
# 427 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 428 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 429 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 430 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyNeedToTellArchie, MSGBOX_DEFAULT
# 431 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 432 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkRight
# 433 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 434 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyCourtneyMove, MSGBOX_DEFAULT
# 435 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 436 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 437 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_4F_Movement_ShellyKnockedBack
# 438 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 439 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkSlowDown
# 440 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkSlowLeft
# 441 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 442 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyYoureGoingNowhere, MSGBOX_DEFAULT
# 443 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 444 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 445 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 446 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaLooksLikeYoureCaught, MSGBOX_DEFAULT
# 447 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 448 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_CourtneyTabitha_ChoosePartyForMultiBattle
# 449 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 450 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 451 "data/maps/MagmaHideout_4F/scripts.pory"

# 452 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabitha_ChoosePartyForMultiBattle::
# 453 "data/maps/MagmaHideout_4F/scripts.pory"
	special SavePlayerParty
# 454 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 455 "data/maps/MagmaHideout_4F/scripts.pory"
	special ChooseHalfPartyForBattle
# 456 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 457 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MagmaHideout_4F_EventScript_CourtneyTabithaDoMultiBattle
# 458 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_CourtneyTabitha_NowhereToRun
# 459 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 460 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 461 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 462 "data/maps/MagmaHideout_4F/scripts.pory"

# 463 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabitha_NowhereToRun::
# 464 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyTabitha_NowhereToRun, MSGBOX_DEFAULT
# 465 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 466 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_CourtneyTabitha_ChoosePartyForMultiBattle
# 467 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 468 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 469 "data/maps/MagmaHideout_4F/scripts.pory"

# 470 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabithaDoMultiBattle::
# 471 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 472 "data/maps/MagmaHideout_4F/scripts.pory"
	multi_2_vs_2 TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaDefeat, TRAINER_COURTNEY_MAGMA_HIDEOUT, MagmaHideout_4F_Text_CourtneyDefeat, PARTNER_SHELLY
# 473 "data/maps/MagmaHideout_4F/scripts.pory"
	special LoadPlayerParty
# 474 "data/maps/MagmaHideout_4F/scripts.pory"
	switch VAR_RESULT
# 475 "data/maps/MagmaHideout_4F/scripts.pory"
	case 1, MagmaHideout_4F_EventScript_CourtneyTabithaVictory
# 476 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 477 "data/maps/MagmaHideout_4F/scripts.pory"
	special SetCB2WhiteOut
# 478 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 479 "data/maps/MagmaHideout_4F/scripts.pory"

# 480 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CourtneyTabithaVictory::
# 481 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 482 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 483 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 484 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 485 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, MagmaHideout_4F_Movement_TabithaKnockedBack
# 486 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_CourtneyKnockedBack
# 487 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 488 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 489 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowRight
# 490 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowUp
# 491 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 492 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, Common_Movement_WalkInPlaceFasterLeft
# 493 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 494 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyPostBattle, MSGBOX_DEFAULT
# 495 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 496 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 497 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 498 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 499 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 500 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_4F_Movement_ShellyApproachPlayer
# 501 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 502 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_ShellyMustLeave, MSGBOX_AUTOCLOSE
# 503 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 504 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_4F_Movement_ShellyExit
# 505 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_CourtneyMoveForShelly
# 506 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 507 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 100
# 508 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 509 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 17, 5
# 510 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 20, 5
# 511 "data/maps/MagmaHideout_4F/scripts.pory"
	destroyfollowernpc
# 512 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_FOLLOWER_MAGMA_HIDEOUT_SHELLY, 2
# 513 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_COURTNEY
# 514 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_EMMIE
# 515 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 516 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
# 517 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 518 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_EMMIE
# 519 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 520 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 521 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_EMMIE, MagmaHideout_4F_Movement_EmmieEnters
# 522 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 523 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_EmmieLetsGo, MSGBOX_DEFAULT
# 524 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 525 "data/maps/MagmaHideout_4F/scripts.pory"
	setfollowernpc 9, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
# 526 "data/maps/MagmaHideout_4F/scripts.pory"
	addvar VAR_MAGMAHIDEOUT_STATE, 1
# 527 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 45
# 528 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 529 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 530 "data/maps/MagmaHideout_4F/scripts.pory"

# 531 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxiePyreMaxieDefeated::
# 532 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieMomentsAway1, MSGBOX_DEFAULT
# 533 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 534 "data/maps/MagmaHideout_4F/scripts.pory"
	return
# 535 "data/maps/MagmaHideout_4F/scripts.pory"

# 536 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxiePyreArchieDefeated::
# 537 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieMomentsAway2, MSGBOX_DEFAULT
# 538 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 539 "data/maps/MagmaHideout_4F/scripts.pory"
	return
# 540 "data/maps/MagmaHideout_4F/scripts.pory"

# 541 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 542 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 543 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 544 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 545 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 546 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, MagmaHideout_4F_EventScript_MaxiePyreMaxieDefeated
# 547 "data/maps/MagmaHideout_4F/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, MagmaHideout_4F_EventScript_MaxiePyreArchieDefeated
# 548 "data/maps/MagmaHideout_4F/scripts.pory"
	goto MagmaHideout_4F_EventScript_MaxieDoMultiBattle
# 549 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 550 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 551 "data/maps/MagmaHideout_4F/scripts.pory"

# 552 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxieDoMultiBattle::
# 553 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 554 "data/maps/MagmaHideout_4F/scripts.pory"
	multi_2p_vs_1 TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat, PARTNER_EMMIE
# 555 "data/maps/MagmaHideout_4F/scripts.pory"
	switch VAR_RESULT
# 556 "data/maps/MagmaHideout_4F/scripts.pory"
	case 1, MagmaHideout_4F_EventScript_MaxieVictory
# 557 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 558 "data/maps/MagmaHideout_4F/scripts.pory"
	special SetCB2WhiteOut
# 559 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 560 "data/maps/MagmaHideout_4F/scripts.pory"

# 561 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_MaxieVictory::
# 562 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxiePostBattle, MSGBOX_DEFAULT
# 563 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 564 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_COURTNEY
# 565 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 566 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 567 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 568 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 569 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieGroudonLeave, MSGBOX_DEFAULT
# 570 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 571 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 572 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 573 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 574 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 575 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 576 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 577 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 578 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 579 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 580 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
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
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 587 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 588 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 589 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
# 590 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 591 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 592 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 593 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 594 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 595 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 596 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 597 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 598 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 599 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 600 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 601 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 602 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 603 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
# 604 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 605 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_COURTNEY, 7, 20
# 606 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 7, 21
# 607 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_COURTNEY
# 608 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_TABITHA
# 609 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_COURTNEY, MagmaHideout_4F_Movement_AdminApproachMaxie
# 610 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, MagmaHideout_4F_Movement_AdminApproachMaxie
# 611 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 612 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 613 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieLetsGo, MSGBOX_DEFAULT
# 614 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 615 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 616 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_ABNORMAL_WEATHER_SUN
# 617 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 618 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 619 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 620 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT11
# 621 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT12
# 622 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_COURTNEY
# 623 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 624 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 625 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 626 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
# 627 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_COURTNEY
# 628 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_SHELLY
# 629 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS
# 630 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 631 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_SHELLY
# 632 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 633 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_JAGGED_PASS_MAXIE
# 634 "data/maps/MagmaHideout_4F/scripts.pory"
	addvar VAR_MAGMAHIDEOUT_STATE, 1
# 635 "data/maps/MagmaHideout_4F/scripts.pory"
	addvar VAR_JAGGED_PASS_STATE, 1
# 636 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_LEVEL_CAP, 75
# 637 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 46
# 638 "data/maps/MagmaHideout_4F/scripts.pory"
	warp MAP_JAGGED_PASS, 16, 19
# 639 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 640 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 641 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 642 "data/maps/MagmaHideout_4F/scripts.pory"

# 643 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieLetsGo:
# 644 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Tabitha… Courtney… Let us step\n"
# 645 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "outside and see our dream in reality.$"
# 646 "data/maps/MagmaHideout_4F/scripts.pory"

# 647 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_AdminApproachMaxie:
# 648 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 649 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 650 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 651 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 652 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 653 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 654 "data/maps/MagmaHideout_4F/scripts.pory"

# 655 "data/maps/MagmaHideout_4F/scripts.pory"

# 656 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Courtney::
# 657 "data/maps/MagmaHideout_4F/scripts.pory"
	faceplayer
# 658 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
# 659 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 660 "data/maps/MagmaHideout_4F/scripts.pory"

# 661 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 662 "data/maps/MagmaHideout_4F/scripts.pory"
	faceplayer
# 663 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 664 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 665 "data/maps/MagmaHideout_4F/scripts.pory"

# 666 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxiePostBattle:
# 667 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: How can this be?!\p"
# 668 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Even with the power of Groudon by my\n"
# 669 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "side, you remain defiant.$"
# 670 "data/maps/MagmaHideout_4F/scripts.pory"

# 671 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonLeave:
# 672 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: This matters not.\p"
# 673 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon, I release you!\n"
# 674 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Bask the world in the light of the sun!$"
# 675 "data/maps/MagmaHideout_4F/scripts.pory"

# 676 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Intro:
# 677 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I want to see GROUDON, too, but they\n"
# 678 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "won't let me see even its tail…\p"
# 679 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's got me feeling really frustrated.\p"
# 680 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Oh, no!\n"
# 681 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I blabbed about GROUDON!$"
# 682 "data/maps/MagmaHideout_4F/scripts.pory"

# 683 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Defeat:
# 684 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I guess it's impossible to win if one\n"
# 685 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "doesn't have a calm mind…$"
# 686 "data/maps/MagmaHideout_4F/scripts.pory"

# 687 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11PostBattle:
# 688 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I wonder if GROUDON even has a tail?$"
# 689 "data/maps/MagmaHideout_4F/scripts.pory"

# 690 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Intro:
# 691 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!\n"
# 692 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Soon! Very soon!\l"
# 693 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our grand objective will be achieved!$"
# 694 "data/maps/MagmaHideout_4F/scripts.pory"

# 695 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Defeat:
# 696 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
# 697 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've come so far, but now this?$"
# 698 "data/maps/MagmaHideout_4F/scripts.pory"

# 699 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12PostBattle:
# 700 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE, sir!\n"
# 701 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "An intruder is headed your way!$"
# 702 "data/maps/MagmaHideout_4F/scripts.pory"

# 703 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyIntro:
# 704 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 705 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 706 "data/maps/MagmaHideout_4F/scripts.pory"

# 707 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyDefeat:
# 708 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was I that easy to knock down?$"
# 709 "data/maps/MagmaHideout_4F/scripts.pory"

# 710 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_CourtneyPostBattle:
# 711 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Courtney: You really are a force to be \n"
# 712 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "reckoned with, aren't you…\p"
# 713 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "No matter. You cannot stop what is\n"
# 714 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "about to happen.$"
# 715 "data/maps/MagmaHideout_4F/scripts.pory"

# 716 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 717 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 718 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 719 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 720 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, GROUDON is sleeping!\p"
# 721 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE went to GROUDON just seconds\n"
# 722 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 723 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 724 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 725 "data/maps/MagmaHideout_4F/scripts.pory"

# 726 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 727 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Taken down again…\n"
# 728 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe…$"
# 729 "data/maps/MagmaHideout_4F/scripts.pory"

# 730 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 731 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Tabitha: Heh… Groudon has awakened…\p"
# 732 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This means everything is about to\n"
# 733 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "change forever…$"
# 734 "data/maps/MagmaHideout_4F/scripts.pory"

# 735 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 736 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Groudon…\p"
# 737 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 738 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 739 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This Blue Orb is what you sought.\n"
# 740 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't it?\p"
# 741 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the Blue Orb.\n"
# 742 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 743 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And show me…\n"
# 744 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Show me the full extent of your power!$"
# 745 "data/maps/MagmaHideout_4F/scripts.pory"

# 746 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieMomentsAway1:
# 747 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: {PLAYER}, Emmie… It appears on this\n"
# 748 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "occasion your timing is off.\p"
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
	.string "I told you atop Mt. Pyre that we were\n"
# 755 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "not the villains.\p"
# 756 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I stand by my words, but sometimes even\n"
# 757 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "good people must make tough decisions.\p"
# 758 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I regret to inform you that our hideout\n"
# 759 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is the end of the line for you.$"
# 760 "data/maps/MagmaHideout_4F/scripts.pory"

# 761 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieMomentsAway2:
# 762 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: {PLAYER}, Emmie… It appears on\n"
# 763 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "this occasion your timing is off.\p"
# 764 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You bear witness to the rebirth of the\n"
# 765 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "legendary Pokémon Groudon.\p"
# 766 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With its power on our side, Team Magma's\n"
# 767 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "vision of expanding the land is mere\l"
# 768 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "moments away.\p"
# 769 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "On Mt. Pyre I warned you to not involve\n"
# 770 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "yourselves in ours affairs again.\p"
# 771 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Here you stand before me, at the very\n"
# 772 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "moment that everything I've worked to\l"
# 773 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "achieve is finally within my grasp.\p"
# 774 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I regret to inform you that our hideout\n"
# 775 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is the end of the line for you.$"
# 776 "data/maps/MagmaHideout_4F/scripts.pory"

# 777 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 778 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: Groudon!\n"
# 779 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 780 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the Blue Orb the key?\p"
# 781 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "GROUDON!\n"
# 782 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 783 "data/maps/MagmaHideout_4F/scripts.pory"

# 784 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 785 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie: It is done.\p"
# 786 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon will soak Hoenn it the sun\n"
# 787 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "creating more land mass for all!$"
# 788 "data/maps/MagmaHideout_4F/scripts.pory"

# 789 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 790 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What makes you so adept at handling\n"
# 791 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "POKéMON?$"
# 792 "data/maps/MagmaHideout_4F/scripts.pory"

# 793 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 794 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: There has to be some reason\n"
# 795 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "why GROUDON fled…\p"
# 796 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's what you're trying to say,\n"
# 797 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "aren't you?\p"
# 798 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\n"
# 799 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 800 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Humph…\n"
# 801 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You think I didn't know that?\p"
# 802 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With GROUDON gone, there is no longer\n"
# 803 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "any need for this blasted volcano.\p"
# 804 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I am going after GROUDON, so this\n"
# 805 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is where we part!$"
