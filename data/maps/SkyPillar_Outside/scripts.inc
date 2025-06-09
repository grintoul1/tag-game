# 1 "data/maps/SkyPillar_Outside/scripts.pory"

# 2 "data/maps/SkyPillar_Outside/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/SkyPillar_Outside/scripts.pory"

# 4 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_MapScripts::
# 5 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Outside_OnTransition
# 6 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SkyPillar_Outside_OnLoad
# 7 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_Outside_OnFrame
# 8 "data/maps/SkyPillar_Outside/scripts.pory"
	.byte 0
# 9 "data/maps/SkyPillar_Outside/scripts.pory"

# 10 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnTransition:
# 11 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SkyPillar_Outside_EventScript_HideMapNamePopup
# 12 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, SkyPillar_Outside_EventScript_CheckSetAbnormalWeather
# 13 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 14 "data/maps/SkyPillar_Outside/scripts.pory"

# 15 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_HideMapNamePopup::
# 16 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 17 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 18 "data/maps/SkyPillar_Outside/scripts.pory"

# 19 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_CheckSetAbnormalWeather::
# 20 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 21 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 22 "data/maps/SkyPillar_Outside/scripts.pory"

# 23 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnLoad:
# 24 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_set FLAG_WALLACE_GOES_TO_SKY_PILLAR, SkyPillar_Outside_EventScript_OpenDoor
# 25 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 26 "data/maps/SkyPillar_Outside/scripts.pory"

# 27 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_OpenDoor::
# 28 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 4, METATILE_Pacifidlog_SkyPillar_DoorOpen_Top, FALSE
# 29 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 5, METATILE_Pacifidlog_SkyPillar_DoorOpen_Bottom, FALSE
# 30 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 31 "data/maps/SkyPillar_Outside/scripts.pory"

# 32 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnFrame:
# 33 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 65, SkyPillar_Outside_EventScript_ProgressEmmieState
# 34 "data/maps/SkyPillar_Outside/scripts.pory"
	.2byte 0
# 35 "data/maps/SkyPillar_Outside/scripts.pory"

# 36 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_ProgressEmmieState::
# 37 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 67
# 38 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 39 "data/maps/SkyPillar_Outside/scripts.pory"

# 40 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_WallaceScene::
# 41 "data/maps/SkyPillar_Outside/scripts.pory"
	lockall
# 42 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_OpenedDoorToSkyPillar, MSGBOX_DEFAULT
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 45 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 46 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 47 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 48 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 49 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 50 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 51 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 40
# 52 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_EarthquakeNotMomentToWaste, MSGBOX_DEFAULT
# 53 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 54 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 55 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 3   @ horizontal pan
# 56 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 20  @ num shakes
# 57 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 5   @ shake delay
# 58 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 59 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 60 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 61 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterLeft
# 62 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 63 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 10
# 64 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 65 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 66 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 67 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 68 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 69 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 70 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_SituationGettingWorse, MSGBOX_DEFAULT
# 71 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 72 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 73 "data/maps/SkyPillar_Outside/scripts.pory"
	setweather WEATHER_ABNORMAL
# 74 "data/maps/SkyPillar_Outside/scripts.pory"
	doweather
# 75 "data/maps/SkyPillar_Outside/scripts.pory"
	special WaitWeather
# 76 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 77 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 78 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_GotToGoBackForSootopolis, MSGBOX_DEFAULT
# 79 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 80 "data/maps/SkyPillar_Outside/scripts.pory"
	playse SE_EXIT
# 81 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 82 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 83 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 4
# 84 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 64
# 85 "data/maps/SkyPillar_Outside/scripts.pory"
	removeobject LOCALID_WALLACE
# 86 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 87 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 88 "data/maps/SkyPillar_Outside/scripts.pory"
	releaseall
# 89 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 90 "data/maps/SkyPillar_Outside/scripts.pory"

# 91 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceApproachPlayer:
# 92 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 93 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 94 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 95 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 96 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 97 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 98 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 99 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 100 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 101 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 102 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 103 "data/maps/SkyPillar_Outside/scripts.pory"

# 104 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceClimbSkyPillar:
# 105 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 106 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 107 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 108 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 109 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 110 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 111 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 112 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 113 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 114 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 115 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 116 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 117 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 118 "data/maps/SkyPillar_Outside/scripts.pory"

# 119 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_PlayerClimbSkyPillar:
# 120 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 121 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 122 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 123 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 124 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 125 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 126 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 127 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 128 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 129 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 130 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 131 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 132 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 133 "data/maps/SkyPillar_Outside/scripts.pory"

# 134 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_Wallace::
# 135 "data/maps/SkyPillar_Outside/scripts.pory"
	faceplayer
# 136 "data/maps/SkyPillar_Outside/scripts.pory"
	goto SkyPillar_Outside_EventScript_WallaceScene
# 137 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 138 "data/maps/SkyPillar_Outside/scripts.pory"

# 139 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_ClosedDoor::
# 140 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_DoorIsClosed, MSGBOX_SIGN
# 141 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 142 "data/maps/SkyPillar_Outside/scripts.pory"

# 143 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_DoorIsClosed:
# 144 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The door is closed.$"
# 145 "data/maps/SkyPillar_Outside/scripts.pory"

# 146 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_OpenedDoorToSkyPillar:
# 147 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: Oh, my, I'm terribly sorry!\p"
# 148 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "In my haste, I didn't notice that\n"
# 149 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I'd left you behind!\p"
# 150 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I've opened the locked door of\n"
# 151 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "the SKY PILLAR.$"
# 152 "data/maps/SkyPillar_Outside/scripts.pory"

# 153 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_EarthquakeNotMomentToWaste:
# 154 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: It's an earthquake!\p"
# 155 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "There's not a moment to waste!\n"
# 156 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "We've got to hurry!$"
# 157 "data/maps/SkyPillar_Outside/scripts.pory"

# 158 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_SituationGettingWorse:
# 159 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: Hmm…\n"
# 160 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The situation is getting worse…$"
# 161 "data/maps/SkyPillar_Outside/scripts.pory"

# 162 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_GotToGoBackForSootopolis:
# 163 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: This isn't good…\p"
# 164 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The weather distortion is spreading\n"
# 165 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "even here…\p"
# 166 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 167 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "RAYQUAZA should be farther up\n"
# 168 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "from here.\p"
# 169 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I'm worried about SOOTOPOLIS.\n"
# 170 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I've got to go back.\p"
# 171 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Everything is in your hands now.\n"
# 172 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Don't fail us!$"
