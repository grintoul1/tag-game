	@ Initialize the Battle Pool challenge
	.macro pool_init
	setvar VAR_0x8004, BATTLE_POOL_FUNC_INIT
	special CallBattlePoolFunction
	.endm

	@ Get the value of some POOL_DATA_*. See GetBattlePoolData for the data types that can be retrieved
	.macro pool_get data:req
	setvar VAR_0x8004, BATTLE_POOL_FUNC_GET_DATA
	setvar VAR_0x8005, \data
	special CallBattlePoolFunction
	.endm

	@ Set some POOL_DATA_* to val. See SetBattlePoolData for the data types that can be set
	.macro pool_set data:req, val=0xFFFF
	setvar VAR_0x8004, BATTLE_POOL_FUNC_SET_DATA
	setvar VAR_0x8005, \data
	.if \val == 0xFFFF
	@ argument not provided
	.elseif \val >= VARS_START
	copyvar VAR_0x8006, \val
	.else
	setvar VAR_0x8006, \val
	.endif
	special CallBattlePoolFunction
	.endm

	@ Save the game and set the challenge status
	.macro pool_save challengeStatus:req
	setvar VAR_0x8004, BATTLE_POOL_FUNC_SAVE
	setvar VAR_0x8005, \challengeStatus
	special CallBattlePoolFunction
	.endm

	@ Select the initial rental mons for the challenge
	.macro pool_rentmons
	setvar VAR_0x8004, BATTLE_POOL_FUNC_SELECT_RENT_MONS
	special CallBattlePoolFunction
	.endm

	@ Select a mon to swap for from the previously defeated team
	.macro pool_swapmons
	setvar VAR_0x8004, BATTLE_POOL_FUNC_SWAP_RENT_MONS
	special CallBattlePoolFunction
	.endm

	@ Allows POOL_DATA_WIN_STREAK_SWAPS to be incremented once
	.macro pool_setswapped
	setvar VAR_0x8004, BATTLE_POOL_FUNC_SET_SWAPPED
	special CallBattlePoolFunction
	.endm

	@ Update gParties[B_TRAINER_OPPONENT_A] with the next set of rental mons
	.macro pool_setopponentmons
	setvar VAR_0x8004, BATTLE_POOL_FUNC_SET_OPPONENT_MONS
	special CallBattlePoolFunction
	.endm

	@ Populate gParties[B_TRAINER_PLAYER] and gParties[B_TRAINER_OPPONENT_A] with the rental mons. Only needed when resuming a challenge, otherwise only pool_setopponentmons and pool_rentmons/pool_swapmons are needed
	.macro pool_setparties arg:req
	setvar VAR_0x8004, BATTLE_POOL_FUNC_SET_PARTIES
	setvar VAR_0x8005, \arg
	special CallBattlePoolFunction
	.endm

	@ Set the object event gfx for the opponent trainer
	.macro pool_setopponentgfx
	setvar VAR_0x8004, BATTLE_POOL_FUNC_SET_OPPONENT_GFX
	special CallBattlePoolFunction
	.endm

	@ Generate the mons for the opponents team
	.macro pool_generateopponentmons
	setvar VAR_0x8004, BATTLE_POOL_FUNC_GENERATE_OPPONENT_MONS
	special CallBattlePoolFunction
	.endm

	@ Generate the random 6 mons to choose from for the initial rental
	.macro pool_generaterentalmons
	setvar VAR_0x8004, BATTLE_POOL_FUNC_GENERATE_RENTAL_MONS
	special CallBattlePoolFunction
	.endm

	@ Return the pokemon type most common in the opponents team, or NUMBER_OF_MON_TYPES if there is no standout type
	.macro pool_getopponentmontype
	setvar VAR_0x8004, BATTLE_POOL_FUNC_GET_OPPONENT_MON_TYPE
	special CallBattlePoolFunction
	.endm

	@ Return the POOL_STYLE_* dependent on what types of moves the opponents team has, or POOL_NUM_STYLES if multiple styles tie for the same amount of moves
	.macro pool_getopponentstyle
	setvar VAR_0x8004, BATTLE_POOL_FUNC_GET_OPPONENT_STYLE
	special CallBattlePoolFunction
	.endm

	@ Restore the held items for the players party to what they were pre-battle
	.macro pool_resethelditems
	setvar VAR_0x8004, BATTLE_POOL_FUNC_RESET_HELD_ITEMS
	special CallBattlePoolFunction
	.endm

