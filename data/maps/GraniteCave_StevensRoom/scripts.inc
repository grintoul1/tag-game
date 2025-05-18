# 1 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 2 "data/maps/GraniteCave_StevensRoom/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_MapScripts::
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.byte 0
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven::
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM_STEEL_WING
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_STEVEN
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is STEVEN.\p"
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'm interested in rare stones,\n"
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "so I travel here and there.\p"
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh?\n"
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "A LETTER for me?$"
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ThankYouTakeThis:
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "STEVEN: Okay, thank you.\p"
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You went through all this trouble to\n"
# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "deliver that. I need to thank you.\p"
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Let me see…\n"
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'll give you this TM.\p"
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "It contains my favorite move,\n"
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "STEEL WING.$"
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "STEVEN: Your POKéMON appear quite\n"
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "capable.\p"
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "If you keep training, you could even\n"
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "become the CHAMPION of the POKéMON\l"
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "LEAGUE one day. That's what I think.\p"
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I know, since we've gotten to know each\n"
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "other, let's register one another in\l"
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "our POKéNAVS.\p"
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … … … … …$"
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven:
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered STEVEN\n"
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "in the POKéNAV.$"
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_OhBagIsFull:
# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your BAG is full…\n"
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "That's too bad, then.$"
