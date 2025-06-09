# 1 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 2 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VIVI, 1
# 3 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICTOR, 2
# 4 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICTORIA, 3
# 5 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICKY, 4
# 6 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 7 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_MapScripts::
# 8 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.byte 0
# 9 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 10 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victor::
# 11 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 12 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTOR
# 14 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
# 15 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 16 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 18 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 20 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTORIA
# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MACHO_BRACE
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 22
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace::
# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VIVI
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICKY
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You're the first TRAINER I've seen who\n"
# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "deploys POKéMON so masterfully.\p"
# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But, I should tell you--my son is\n"
# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "stronger than you.\p"
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He even took the POKéMON LEAGUE\n"
# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "challenge, I'll have you know.$"
# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace:
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "The desert to the north is challenging\n"
# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "to traverse.\p"
# 77 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Since you've beaten all of us here,\n"
# 78 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "we would like you to take these\l"
# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "goggles which will help you get through.$"
# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 82 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to POKéMON battles,\n"
# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "we tend to be pretty passionate.$"
# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 85 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
# 86 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mommy is stronger than Daddy.\p"
# 87 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I'm stronger than Mommy.\p"
# 88 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "And Grandma's stronger than me!\p"
# 89 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But my big brother is even stronger\n"
# 90 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "than Grandma.$"
# 91 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
# 93 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "There's no question that you're strong.\p"
# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But if you were to battle my grandson,\n"
# 95 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you'd end up crying in frustration.\p"
# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He's much stronger than any TRAINER\n"
# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "our family knows.\p"
# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He must be challenging the POKéMON\n"
# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "LEAGUE CHAMPION by now.\p"
# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"
# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 103 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 104 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\n"
# 105 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "POKéMON LEAGUE CHAMPION by now.\p"
# 106 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 107 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"
