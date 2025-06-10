# 1 "data/maps/RusturfTunnel/scripts.pory"

# 2 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDAS_BF, 1
# 3 "data/maps/RusturfTunnel/scripts.pory"
@.set LOCALID_BRINEY, 5
# 4 "data/maps/RusturfTunnel/scripts.pory"
@.set LOCALID_GRUNT, 6
# 5 "data/maps/RusturfTunnel/scripts.pory"
@.set LOCALID_PEEKO, 7
# 6 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDA, 6
# 7 "data/maps/RusturfTunnel/scripts.pory"

# 8 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 9 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 10 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 11 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 12 "data/maps/RusturfTunnel/scripts.pory"

# 13 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 14 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 15 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 16 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 17 "data/maps/RusturfTunnel/scripts.pory"

# 18 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 19 "data/maps/RusturfTunnel/scripts.pory"
	@call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 20 "data/maps/RusturfTunnel/scripts.pory"
	end
# 21 "data/maps/RusturfTunnel/scripts.pory"

# 22 "data/maps/RusturfTunnel/scripts.pory"
@RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 23 "data/maps/RusturfTunnel/scripts.pory"
	@setobjectxyperm LOCALID_PEEKO, 13, 4
# 24 "data/maps/RusturfTunnel/scripts.pory"
	@setobjectxyperm LOCALID_GRUNT, 13, 5
# 25 "data/maps/RusturfTunnel/scripts.pory"
	@return
# 26 "data/maps/RusturfTunnel/scripts.pory"

# 27 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 28 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 29 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 30 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 31 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 32 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 33 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 34 "data/maps/RusturfTunnel/scripts.pory"
	release
# 35 "data/maps/RusturfTunnel/scripts.pory"
	end
# 36 "data/maps/RusturfTunnel/scripts.pory"

# 37 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 38 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 39 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 40 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 41 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 42 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 43 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 44 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 45 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 46 "data/maps/RusturfTunnel/scripts.pory"
	release
# 47 "data/maps/RusturfTunnel/scripts.pory"
	end
# 48 "data/maps/RusturfTunnel/scripts.pory"

# 49 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 50 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 51 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 52 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 53 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 54 "data/maps/RusturfTunnel/scripts.pory"
	release
# 55 "data/maps/RusturfTunnel/scripts.pory"
	end
# 56 "data/maps/RusturfTunnel/scripts.pory"

# 57 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 58 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 59 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 60 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 61 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 62 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 63 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 64 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 65 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 66 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 67 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 68 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 69 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 70 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 71 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 72 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 73 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 74 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 75 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 76 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 77 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 78 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 79 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 80 "data/maps/RusturfTunnel/scripts.pory"
	end
# 81 "data/maps/RusturfTunnel/scripts.pory"

# 82 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 83 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 84 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 85 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 86 "data/maps/RusturfTunnel/scripts.pory"
	return
# 87 "data/maps/RusturfTunnel/scripts.pory"

# 88 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 89 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 90 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 91 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 92 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 93 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 94 "data/maps/RusturfTunnel/scripts.pory"
	return
# 95 "data/maps/RusturfTunnel/scripts.pory"

# 96 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 97 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 98 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 99 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 100 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 101 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 102 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 103 "data/maps/RusturfTunnel/scripts.pory"
	return
# 104 "data/maps/RusturfTunnel/scripts.pory"

# 105 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 106 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 107 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 108 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 109 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 110 "data/maps/RusturfTunnel/scripts.pory"
	return
# 111 "data/maps/RusturfTunnel/scripts.pory"

# 112 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 113 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 114 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 115 "data/maps/RusturfTunnel/scripts.pory"
	return
# 116 "data/maps/RusturfTunnel/scripts.pory"

# 117 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 118 "data/maps/RusturfTunnel/scripts.pory"
	return
# 119 "data/maps/RusturfTunnel/scripts.pory"

# 120 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 121 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 122 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 123 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 124 "data/maps/RusturfTunnel/scripts.pory"
	return
# 125 "data/maps/RusturfTunnel/scripts.pory"

# 126 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 127 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit1
# 128 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 129 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 130 "data/maps/RusturfTunnel/scripts.pory"
	return
# 131 "data/maps/RusturfTunnel/scripts.pory"

# 132 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 133 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 134 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 135 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit
# 136 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 137 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 138 "data/maps/RusturfTunnel/scripts.pory"
	return
# 139 "data/maps/RusturfTunnel/scripts.pory"

# 140 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 141 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 142 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_ExclamationMark
# 143 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 144 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_Delay48
# 145 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 146 "data/maps/RusturfTunnel/scripts.pory"
	return
# 147 "data/maps/RusturfTunnel/scripts.pory"

# 148 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 149 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 150 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 151 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 152 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 153 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 154 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 155 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 156 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 157 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 158 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 159 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 160 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 161 "data/maps/RusturfTunnel/scripts.pory"

# 162 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 163 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 164 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 165 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 166 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 167 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 168 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 169 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 170 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 171 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 172 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 173 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 174 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 175 "data/maps/RusturfTunnel/scripts.pory"

# 176 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 177 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 179 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 180 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 181 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 182 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 183 "data/maps/RusturfTunnel/scripts.pory"

# 184 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 185 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 186 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 187 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 188 "data/maps/RusturfTunnel/scripts.pory"

# 189 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 190 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 191 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 192 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 193 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 194 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 195 "data/maps/RusturfTunnel/scripts.pory"

# 196 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 197 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 198 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_down
# 199 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 201 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 202 "data/maps/RusturfTunnel/scripts.pory"

# 203 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 204 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 206 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 207 "data/maps/RusturfTunnel/scripts.pory"

# 208 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 209 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 210 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 211 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 212 "data/maps/RusturfTunnel/scripts.pory"

# 213 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 214 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 215 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 216 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 217 "data/maps/RusturfTunnel/scripts.pory"

# 218 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 220 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 221 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 222 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 223 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 224 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 226 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 227 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 228 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 229 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 230 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 231 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 232 "data/maps/RusturfTunnel/scripts.pory"

# 233 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 234 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 235 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 236 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 237 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 238 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 239 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 240 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 241 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 242 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 243 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 244 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 245 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 246 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 247 "data/maps/RusturfTunnel/scripts.pory"

# 248 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 249 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 250 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 251 "data/maps/RusturfTunnel/scripts.pory"

# 252 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 253 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 254 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 255 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 256 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 257 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 258 "data/maps/RusturfTunnel/scripts.pory"

# 259 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 260 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 261 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 262 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 263 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 264 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 265 "data/maps/RusturfTunnel/scripts.pory"

# 266 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 267 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 268 "data/maps/RusturfTunnel/scripts.pory"
	end
# 269 "data/maps/RusturfTunnel/scripts.pory"

# 270 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 271 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 272 "data/maps/RusturfTunnel/scripts.pory"
	end
# 273 "data/maps/RusturfTunnel/scripts.pory"

# 274 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 275 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 276 "data/maps/RusturfTunnel/scripts.pory"
	end
# 277 "data/maps/RusturfTunnel/scripts.pory"

# 278 "data/maps/RusturfTunnel/scripts.pory"
@RusturfTunnel_EventScript_AquaGruntBackUp::
# 279 "data/maps/RusturfTunnel/scripts.pory"
	@lockall
# 280 "data/maps/RusturfTunnel/scripts.pory"
	@setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 281 "data/maps/RusturfTunnel/scripts.pory"
	@msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 282 "data/maps/RusturfTunnel/scripts.pory"
	@closemessage
# 283 "data/maps/RusturfTunnel/scripts.pory"
	@applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 284 "data/maps/RusturfTunnel/scripts.pory"
	@applymovement LOCALID_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 285 "data/maps/RusturfTunnel/scripts.pory"
	@waitmovement 0
# 286 "data/maps/RusturfTunnel/scripts.pory"
	@copyobjectxytoperm LOCALID_GRUNT
# 287 "data/maps/RusturfTunnel/scripts.pory"
	@copyobjectxytoperm LOCALID_PEEKO
# 288 "data/maps/RusturfTunnel/scripts.pory"
	@setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 289 "data/maps/RusturfTunnel/scripts.pory"
	@releaseall
# 290 "data/maps/RusturfTunnel/scripts.pory"
	@end
# 291 "data/maps/RusturfTunnel/scripts.pory"

# 292 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 293 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 294 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 295 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 296 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 297 "data/maps/RusturfTunnel/scripts.pory"

# 298 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 299 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 300 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 301 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 302 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 303 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 304 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 305 "data/maps/RusturfTunnel/scripts.pory"
	release
# 306 "data/maps/RusturfTunnel/scripts.pory"
	end
# 307 "data/maps/RusturfTunnel/scripts.pory"

# 308 "data/maps/RusturfTunnel/scripts.pory"
@RusturfTunnel_EventScript_Grunt::
# 309 "data/maps/RusturfTunnel/scripts.pory"
	@lock
# 310 "data/maps/RusturfTunnel/scripts.pory"
	@faceplayer
# 311 "data/maps/RusturfTunnel/scripts.pory"
	@playbgm MUS_ENCOUNTER_AQUA, FALSE
# 312 "data/maps/RusturfTunnel/scripts.pory"
	@msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 313 "data/maps/RusturfTunnel/scripts.pory"
	@trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 314 "data/maps/RusturfTunnel/scripts.pory"
	@msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 315 "data/maps/RusturfTunnel/scripts.pory"
	@giveitem ITEM_DEVON_PARTS
# 316 "data/maps/RusturfTunnel/scripts.pory"
	@closemessage
# 317 "data/maps/RusturfTunnel/scripts.pory"
	@applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 318 "data/maps/RusturfTunnel/scripts.pory"
	@applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntEscape
# 319 "data/maps/RusturfTunnel/scripts.pory"
	@waitmovement 0
# 320 "data/maps/RusturfTunnel/scripts.pory"
	@removeobject LOCALID_GRUNT
# 321 "data/maps/RusturfTunnel/scripts.pory"
	@delay 50
# 322 "data/maps/RusturfTunnel/scripts.pory"
	@addobject LOCALID_BRINEY
# 323 "data/maps/RusturfTunnel/scripts.pory"
	@applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 324 "data/maps/RusturfTunnel/scripts.pory"
	@waitmovement 0
# 325 "data/maps/RusturfTunnel/scripts.pory"
	@applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 326 "data/maps/RusturfTunnel/scripts.pory"
	@applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 327 "data/maps/RusturfTunnel/scripts.pory"
	@waitmovement 0
# 328 "data/maps/RusturfTunnel/scripts.pory"
	@msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 329 "data/maps/RusturfTunnel/scripts.pory"
	@applymovement LOCALID_BRINEY, Common_Movement_FacePlayer
# 330 "data/maps/RusturfTunnel/scripts.pory"
	@waitmovement 0
# 331 "data/maps/RusturfTunnel/scripts.pory"
	@message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 332 "data/maps/RusturfTunnel/scripts.pory"
	@waitmessage
# 333 "data/maps/RusturfTunnel/scripts.pory"
	@waitse
# 334 "data/maps/RusturfTunnel/scripts.pory"
	@playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 335 "data/maps/RusturfTunnel/scripts.pory"
	@waitbuttonpress
# 336 "data/maps/RusturfTunnel/scripts.pory"
	@waitmoncry
# 337 "data/maps/RusturfTunnel/scripts.pory"
	@closemessage
# 338 "data/maps/RusturfTunnel/scripts.pory"
	@applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 339 "data/maps/RusturfTunnel/scripts.pory"
	@applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyExit
# 340 "data/maps/RusturfTunnel/scripts.pory"
	@applymovement LOCALID_PEEKO, RusturfTunnel_Movement_PeekoExit
# 341 "data/maps/RusturfTunnel/scripts.pory"
	@waitmovement 0
# 342 "data/maps/RusturfTunnel/scripts.pory"
	@removeobject LOCALID_BRINEY
# 343 "data/maps/RusturfTunnel/scripts.pory"
	@removeobject LOCALID_PEEKO
# 344 "data/maps/RusturfTunnel/scripts.pory"
	@clearflag FLAG_DEVON_GOODS_STOLEN
# 345 "data/maps/RusturfTunnel/scripts.pory"
	@setflag FLAG_RECOVERED_DEVON_GOODS
# 346 "data/maps/RusturfTunnel/scripts.pory"
	@setvar VAR_RUSTBORO_CITY_STATE, 4
# 347 "data/maps/RusturfTunnel/scripts.pory"
	@setvar VAR_BRINEY_HOUSE_STATE, 1
# 348 "data/maps/RusturfTunnel/scripts.pory"
	@setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 349 "data/maps/RusturfTunnel/scripts.pory"
	@release
# 350 "data/maps/RusturfTunnel/scripts.pory"
	@end
# 351 "data/maps/RusturfTunnel/scripts.pory"

# 352 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 353 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 354 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 355 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 356 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 357 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 358 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 359 "data/maps/RusturfTunnel/scripts.pory"

# 360 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 361 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 362 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 363 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 364 "data/maps/RusturfTunnel/scripts.pory"

# 365 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 366 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 367 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 368 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 369 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 370 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 371 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 372 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 373 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 374 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 375 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 376 "data/maps/RusturfTunnel/scripts.pory"

# 377 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 378 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 379 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 380 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 381 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 382 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 383 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 384 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 385 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 386 "data/maps/RusturfTunnel/scripts.pory"

# 387 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 388 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 389 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 390 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 391 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 392 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 393 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 394 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 395 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 396 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 397 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 398 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 399 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 400 "data/maps/RusturfTunnel/scripts.pory"

# 401 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 402 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 403 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 404 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 405 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 406 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 407 "data/maps/RusturfTunnel/scripts.pory"

# 408 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 409 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 410 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 411 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 412 "data/maps/RusturfTunnel/scripts.pory"

# 413 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 414 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 415 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 416 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 417 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 418 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 419 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 420 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 421 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 422 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 423 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 424 "data/maps/RusturfTunnel/scripts.pory"

# 425 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 426 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_1, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 427 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 428 "data/maps/RusturfTunnel/scripts.pory"
	end
# 429 "data/maps/RusturfTunnel/scripts.pory"

# 430 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 431 "data/maps/RusturfTunnel/scripts.pory"
	.string "What, are you coming?\n"
# 432 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come and get some, then!$"
# 433 "data/maps/RusturfTunnel/scripts.pory"

# 434 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 435 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pii pihyoh!$"
# 436 "data/maps/RusturfTunnel/scripts.pory"

# 437 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 438 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
# 439 "data/maps/RusturfTunnel/scripts.pory"
	.string "That hostage POKéMON turned out to\n"
# 440 "data/maps/RusturfTunnel/scripts.pory"
	.string "be worthless!\p"
# 441 "data/maps/RusturfTunnel/scripts.pory"
	.string "And to think I made a getaway…\n"
# 442 "data/maps/RusturfTunnel/scripts.pory"
	.string "In this tunnel to nowhere!\p"
# 443 "data/maps/RusturfTunnel/scripts.pory"
	.string "Hey! You!\n"
# 444 "data/maps/RusturfTunnel/scripts.pory"
	.string "So you want to battle me?$"
# 445 "data/maps/RusturfTunnel/scripts.pory"

# 446 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 447 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 448 "data/maps/RusturfTunnel/scripts.pory"
	.string "a dead end!$"
# 449 "data/maps/RusturfTunnel/scripts.pory"

# 450 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 451 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
# 452 "data/maps/RusturfTunnel/scripts.pory"
	.string "The BOSS told me this would be a\n"
# 453 "data/maps/RusturfTunnel/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 454 "data/maps/RusturfTunnel/scripts.pory"
	.string "All I had to do was steal some package\n"
# 455 "data/maps/RusturfTunnel/scripts.pory"
	.string "from DEVON.\p"
# 456 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tch!\n"
# 457 "data/maps/RusturfTunnel/scripts.pory"
	.string "You want it back that badly, take it!$"
# 458 "data/maps/RusturfTunnel/scripts.pory"

# 459 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 460 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO!\n"
# 461 "data/maps/RusturfTunnel/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 462 "data/maps/RusturfTunnel/scripts.pory"

# 463 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 464 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO owes her life to you!\p"
# 465 "data/maps/RusturfTunnel/scripts.pory"
	.string "They call me MR. BRINEY.\n"
# 466 "data/maps/RusturfTunnel/scripts.pory"
	.string "And, you are?\p"
# 467 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 468 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 469 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 470 "data/maps/RusturfTunnel/scripts.pory"
	.string "I sincerely thank you!\p"
# 471 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 472 "data/maps/RusturfTunnel/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 473 "data/maps/RusturfTunnel/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 474 "data/maps/RusturfTunnel/scripts.pory"
	.string "by the sea near PETALBURG WOODS.\p"
# 475 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come, PEEKO, we should make our way\n"
# 476 "data/maps/RusturfTunnel/scripts.pory"
	.string "home.\p"
# 477 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pihyoh!$"
# 478 "data/maps/RusturfTunnel/scripts.pory"

# 479 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 480 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 481 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 482 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 483 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in VERDANTURF\n"
# 484 "data/maps/RusturfTunnel/scripts.pory"
	.string "TOWN just beyond here…\p"
# 485 "data/maps/RusturfTunnel/scripts.pory"
	.string "If RUSTBORO and VERDANTURF were\n"
# 486 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 487 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 488 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 489 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 490 "data/maps/RusturfTunnel/scripts.pory"

# 491 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 492 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
# 493 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to DEWFORD, then pass\l"
# 494 "data/maps/RusturfTunnel/scripts.pory"
	.string "through SLATEPORT and MAUVILLE…$"
# 495 "data/maps/RusturfTunnel/scripts.pory"

# 496 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 497 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 498 "data/maps/RusturfTunnel/scripts.pory"
	.string "blocking the way.\p"
# 499 "data/maps/RusturfTunnel/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 500 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd like you to have this HM.$"
# 501 "data/maps/RusturfTunnel/scripts.pory"

# 502 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 503 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains STRENGTH.\p"
# 504 "data/maps/RusturfTunnel/scripts.pory"
	.string "If a muscular POKéMON were to learn\n"
# 505 "data/maps/RusturfTunnel/scripts.pory"
	.string "that, it would be able to move even\l"
# 506 "data/maps/RusturfTunnel/scripts.pory"
	.string "large boulders.$"
# 507 "data/maps/RusturfTunnel/scripts.pory"

# 508 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 509 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA!\n"
# 510 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now I can see you anytime!\p"
# 511 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA: That's…wonderful.\p"
# 512 "data/maps/RusturfTunnel/scripts.pory"
	.string "Please, take some rest at my home.$"
# 513 "data/maps/RusturfTunnel/scripts.pory"

# 514 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 515 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
# 516 "data/maps/RusturfTunnel/scripts.pory"
	.string "My boyfriend is there.\p"
# 517 "data/maps/RusturfTunnel/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 518 "data/maps/RusturfTunnel/scripts.pory"
	.string "to come see me.\p"
# 519 "data/maps/RusturfTunnel/scripts.pory"
	.string "He works his hands raw and rough\n"
# 520 "data/maps/RusturfTunnel/scripts.pory"
	.string "for the benefit of everyone.$"
# 521 "data/maps/RusturfTunnel/scripts.pory"

# 522 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 523 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 524 "data/maps/RusturfTunnel/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 525 "data/maps/RusturfTunnel/scripts.pory"
	.string "So why don't they call a POKéMON in\n"
# 526 "data/maps/RusturfTunnel/scripts.pory"
	.string "the mountains a mountain POKéMON?$"
# 527 "data/maps/RusturfTunnel/scripts.pory"

# 528 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 529 "data/maps/RusturfTunnel/scripts.pory"
	.string "My POKéMON…\n"
# 530 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 531 "data/maps/RusturfTunnel/scripts.pory"

# 532 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 533 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 534 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect POKéMON, right?\l"
# 535 "data/maps/RusturfTunnel/scripts.pory"
	.string "There's a feel-good story!$"
