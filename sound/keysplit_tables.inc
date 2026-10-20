@ Due to the way mks4agb (Nintendo's tool) works, key split table labels can
@ appear before the actual start of the key split table data. If you look at
@ the first keysplit table (KeySplitTable1), you'll notice it's offset backwards
@ by 36 bytes. This is because the key split tables don't map instruments
@ for the entire note range (0-127)--they only map subsets, and the upper
@ and lower ranges aren't necessarily 0 or 127.
@
@ For example if a key split table maps an note range of 10-20, then the key
@ split table label will be offset 10 bytes before the actual key split data
@ begins. Therefore, the notes naturally map to the key split table without
@ any extra offset calculation.

keysplit piano, 36
	split 0, 55
	split 1, 70
	split 2, 91
	split 3, 108

keysplit strings, 36
	split 0, 69
	split 1, 81
	split 2, 108

keysplit trumpet, 36
	split 0, 66
	split 1, 84
	split 2, 108

keysplit tuba, 24
	split 0, 42
	split 1, 108

keysplit french_horn, 36
    split 0, 66
    split 1, 108


@ Mezmerkaiser generated keysplit tables

keysplit mezmerkaiser_000, 0
    split 0, 55
    split 1, 67
    split 2, 85
    split 4, 128

keysplit mezmerkaiser_001, 0
    split 0, 55
    split 1, 67
    split 2, 85
    split 4, 128

keysplit mezmerkaiser_002, 0
    split 0, 55
    split 1, 67
    split 2, 79
    split 3, 91
    split 4, 128

keysplit mezmerkaiser_003, 0
    split 0, 128

keysplit mezmerkaiser_004, 0
    split 0, 128

keysplit mezmerkaiser_005, 0
    split 0, 128

keysplit mezmerkaiser_006, 0
    split 0, 128

keysplit mezmerkaiser_007, 0
    split 0, 50
    split 1, 68
    split 2, 95
    split 3, 128

keysplit mezmerkaiser_008, 0
    split 0, 128

keysplit mezmerkaiser_009, 0
    split 0, 128

keysplit mezmerkaiser_010, 0
    split 0, 128

keysplit mezmerkaiser_011, 0
    split 0, 128

keysplit mezmerkaiser_012, 0
    split 0, 128

keysplit mezmerkaiser_013, 0
    split 0, 128

keysplit mezmerkaiser_014, 0
    split 0, 128

keysplit mezmerkaiser_015, 0
    split 0, 128

keysplit mezmerkaiser_016, 0
    split 0, 128

keysplit mezmerkaiser_017, 0
    split 0, 128

keysplit mezmerkaiser_018, 0
    split 0, 61
    split 1, 128

keysplit mezmerkaiser_019, 0
    split 0, 128

keysplit mezmerkaiser_020, 0
    split 0, 128

keysplit mezmerkaiser_021, 0
    split 0, 128

keysplit mezmerkaiser_022, 0
    split 0, 128

keysplit mezmerkaiser_023, 0
    split 0, 128

keysplit mezmerkaiser_024, 0
    split 0, 128

keysplit mezmerkaiser_025, 0
    split 0, 128

keysplit mezmerkaiser_026, 0
    split 0, 128

keysplit mezmerkaiser_027, 0
    split 0, 128

keysplit mezmerkaiser_028, 0
    split 0, 128

keysplit mezmerkaiser_029, 0
    split 0, 128

keysplit mezmerkaiser_030, 0
    split 0, 128

keysplit mezmerkaiser_031, 0
    split 0, 128

keysplit mezmerkaiser_032, 0
    split 0, 55
    split 2, 128

keysplit mezmerkaiser_033, 0
    split 0, 128

keysplit mezmerkaiser_034, 0
    split 0, 128

keysplit mezmerkaiser_035, 0
    split 0, 128

keysplit mezmerkaiser_036, 0
    split 0, 128

keysplit mezmerkaiser_037, 0
    split 0, 128

keysplit mezmerkaiser_038, 0
    split 0, 128

keysplit mezmerkaiser_039, 0
    split 0, 128

keysplit mezmerkaiser_040, 0
    split 0, 55
    split 1, 67
    split 2, 85
    split 4, 128

keysplit mezmerkaiser_041, 0
    split 0, 55
    split 1, 67
    split 2, 85
    split 4, 128

keysplit mezmerkaiser_042, 0
    split 0, 55
    split 1, 67
    split 2, 85
    split 4, 128

keysplit mezmerkaiser_043, 0
    split 0, 128

keysplit mezmerkaiser_044, 0
    split 0, 67
    split 2, 79
    split 3, 128

keysplit mezmerkaiser_045, 0
    split 0, 128

keysplit mezmerkaiser_046, 0
    split 0, 128

keysplit mezmerkaiser_047, 0
    split 0, 128

keysplit mezmerkaiser_048, 0
    split 0, 67
    split 2, 79
    split 3, 128

keysplit mezmerkaiser_049, 0
    split 0, 67
    split 2, 79
    split 3, 128

keysplit mezmerkaiser_050, 0
    split 0, 128

keysplit mezmerkaiser_051, 0
    split 0, 128

keysplit mezmerkaiser_052, 0
    split 0, 128

keysplit mezmerkaiser_053, 0
    split 0, 128

keysplit mezmerkaiser_054, 0
    split 0, 128

keysplit mezmerkaiser_055, 0
    split 0, 128

keysplit mezmerkaiser_056, 0
    split 0, 67
    split 1, 79
    split 2, 128

keysplit mezmerkaiser_057, 0
    split 0, 128

keysplit mezmerkaiser_058, 0
    split 0, 46
    split 1, 56
    split 2, 128

keysplit mezmerkaiser_059, 0
    split 0, 128

keysplit mezmerkaiser_060, 0
    split 0, 50
    split 1, 67
    split 2, 128

keysplit mezmerkaiser_061, 0
    split 0, 46
    split 1, 56
    split 2, 67
    split 4, 79
    split 7, 128

keysplit mezmerkaiser_062, 0
    split 0, 43
    split 1, 51
    split 2, 57
    split 3, 63
    split 5, 69
    split 6, 75
    split 8, 81
    split 9, 87
    split 11, 128

keysplit mezmerkaiser_063, 0
    split 0, 47
    split 1, 57
    split 3, 63
    split 4, 69
    split 6, 75
    split 8, 84
    split 10, 128

keysplit mezmerkaiser_064, 0
    split 0, 128

keysplit mezmerkaiser_065, 0
    split 0, 128

keysplit mezmerkaiser_066, 0
    split 0, 128

keysplit mezmerkaiser_067, 0
    split 0, 128

keysplit mezmerkaiser_068, 0
    split 0, 128

keysplit mezmerkaiser_069, 0
    split 0, 128

keysplit mezmerkaiser_070, 0
    split 0, 128

keysplit mezmerkaiser_071, 0
    split 0, 128

keysplit mezmerkaiser_072, 0
    split 0, 128

keysplit mezmerkaiser_073, 0
    split 0, 128

keysplit mezmerkaiser_074, 0
    split 0, 128

keysplit mezmerkaiser_075, 0
    split 0, 128

keysplit mezmerkaiser_076, 0
    split 0, 60
    split 1, 72
    split 2, 81
    split 3, 87
    split 4, 128

keysplit mezmerkaiser_077, 0
    split 0, 128

keysplit mezmerkaiser_078, 0
    split 0, 128

keysplit mezmerkaiser_079, 0
    split 0, 128

keysplit mezmerkaiser_080, 0
    split 0, 43
    split 1, 55
    split 2, 67
    split 3, 79
    split 4, 128

keysplit mezmerkaiser_081, 0
    split 0, 43
    split 1, 55
    split 2, 67
    split 3, 79
    split 4, 128

keysplit mezmerkaiser_082, 0
    split 0, 60
    split 1, 72
    split 2, 84
    split 3, 128

keysplit mezmerkaiser_083, 0
    split 0, 43
    split 1, 55
    split 2, 67
    split 3, 79
    split 4, 128

keysplit mezmerkaiser_084, 0
    split 0, 60
    split 1, 72
    split 2, 84
    split 3, 128

keysplit mezmerkaiser_085, 0
    split 0, 43
    split 1, 55
    split 2, 67
    split 3, 79
    split 4, 128

keysplit mezmerkaiser_086, 0
    split 0, 43
    split 1, 55
    split 2, 67
    split 3, 79
    split 4, 128

keysplit mezmerkaiser_087, 0
    split 0, 60
    split 1, 72
    split 2, 84
    split 3, 128

keysplit mezmerkaiser_088, 0
    split 0, 128

keysplit mezmerkaiser_089, 0
    split 0, 43
    split 1, 55
    split 2, 67
    split 3, 79
    split 4, 128

keysplit mezmerkaiser_090, 0
    split 0, 128

keysplit mezmerkaiser_091, 0
    split 0, 128

keysplit mezmerkaiser_092, 0
    split 0, 43
    split 1, 55
    split 2, 67
    split 3, 79
    split 4, 128

keysplit mezmerkaiser_093, 0
    split 0, 60
    split 1, 72
    split 2, 84
    split 3, 128

keysplit mezmerkaiser_094, 0
    split 0, 60
    split 1, 72
    split 2, 84
    split 3, 128

keysplit mezmerkaiser_095, 0
    split 0, 60
    split 1, 72
    split 2, 84
    split 3, 128

keysplit mezmerkaiser_096, 0
    split 0, 60
    split 1, 72
    split 2, 84
    split 3, 128

keysplit mezmerkaiser_097, 0
    split 0, 60
    split 1, 72
    split 2, 84
    split 3, 128

keysplit mezmerkaiser_098, 0
    split 0, 60
    split 1, 72
    split 2, 84
    split 3, 128

keysplit mezmerkaiser_099, 0
    split 0, 128

keysplit mezmerkaiser_100, 0
    split 0, 128

keysplit mezmerkaiser_101, 0
    split 0, 128

keysplit mezmerkaiser_102, 0
    split 0, 128

keysplit mezmerkaiser_103, 0
    split 0, 128

keysplit mezmerkaiser_104, 0
    split 0, 128

keysplit mezmerkaiser_105, 0
    split 0, 128

keysplit mezmerkaiser_106, 0
    split 0, 128

keysplit mezmerkaiser_107, 0
    split 0, 128

keysplit mezmerkaiser_108, 0
    split 0, 128

keysplit mezmerkaiser_109, 0
    split 0, 128

keysplit mezmerkaiser_110, 0
    split 0, 67
    split 1, 128

keysplit mezmerkaiser_111, 0
    split 0, 67
    split 1, 128

keysplit mezmerkaiser_112, 0
    split 0, 128

keysplit mezmerkaiser_113, 0
    split 0, 128

keysplit mezmerkaiser_114, 0
    split 0, 128

keysplit mezmerkaiser_115, 0
    split 0, 128

keysplit mezmerkaiser_116, 0
    split 0, 128

keysplit mezmerkaiser_117, 0
    split 0, 128

keysplit mezmerkaiser_118, 0
    split 0, 128

keysplit mezmerkaiser_119, 0
    split 0, 128

keysplit mezmerkaiser_120, 0
    split 0, 128

keysplit mezmerkaiser_121, 0
    split 0, 128

keysplit mezmerkaiser_122, 0
    split 0, 128

keysplit mezmerkaiser_123, 0
    split 0, 128

keysplit mezmerkaiser_124, 0
    split 0, 128

keysplit mezmerkaiser_125, 0
    split 0, 128

keysplit mezmerkaiser_126, 0
    split 0, 128

@ Mezmerkaiser program 127
keysplit mezmerkaiser_127, 0
    split 0, 128

keysplit hg_rhodes, 0 
	split 0, 53
	split 1, 55
	split 2, 61
	split 3, 64
	split 4, 67
	split 5, 69
	split 6, 72
	split 7, 77
	split 8, 80
	split 9, 85
	split 10, 89
	split 11, 90
	split 12, 92
	split 13, 93
	split 14, 98
	split 15, 100
	split 16, 101
	split 17, 128

keysplit hg_tubular_bell, 0
	split 0, 34
	split 1, 39
	split 2, 46
	split 3, 54
	split 4, 55
	split 5, 56
	split 6, 60
	split 7, 64
	split 8, 66
	split 9, 69
	split 10, 70
	split 11, 71
	split 12, 73
	split 13, 77
	split 14, 78
	split 15, 81
	split 16, 88
	split 17, 89
	split 18, 92
	split 19, 96
	split 20, 97
	split 21, 103
	split 22, 106
	split 23, 107
	split 24, 128

keysplit dppt_timpani, 0
    split 0, 58
    split 1, 66
    split 2, 67
    split 3, 70
    split 4, 71
    split 5, 75
    split 6, 76
    split 7, 77
    split 8, 78
    split 9, 82
    split 10, 83
    split 11, 85
    split 12, 86
    split 13, 88
    split 14, 89
    split 15, 92
    split 16, 94
    split 17, 96
    split 18, 98
    split 19, 101
    split 20, 103
    split 21, 104
    split 22, 128

keysplit dp_trumpet, 0
    split 0, 48
    split 1, 51
    split 2, 68
    split 3, 74
    split 4, 87
    split 5, 89
    split 6, 96
    split 7, 98
    split 8, 102
    split 9, 128

keysplit dp_trombone, 0
    split 0, 39
    split 1, 53
    split 2, 57
    split 3, 58
    split 4, 64
    split 5, 70
    split 6, 71
    split 7, 78
    split 8, 79
    split 9, 81
    split 10, 86
    split 11, 89
    split 12, 93
    split 13, 96
    split 14, 98
    split 15, 100
    split 16, 128

keysplit hg_distortion_guitar, 0
    split 0, 79
    split 1, 84
    split 2, 89
    split 3, 101
    split 4, 109
    split 5, 128

keysplit hg_piano_1, 0
    split 0, 60
    split 1, 65
    split 2, 72
    split 3, 75
    split 4, 80
    split 5, 86
    split 6, 96
    split 7, 102
    split 8, 105
    split 9, 128

keysplit hg_piano_2, 0
    split 0, 68
    split 1, 128

keysplit hg_piano_3, 0
    split 0, 44
    split 1, 56
    split 2, 68
    split 3, 128

keysplit hg_marimba, 0
    split 0, 68
    split 1, 80
    split 2, 128

keysplit hg_trumpet, 0
    split 0, 66
    split 1, 75
    split 2, 128

keysplit hg_organ, 0
    split 0, 56
    split 1, 68
    split 2, 128

keysplit hg_nylon_guitar, 0
    split 0, 53
    split 1, 61
    split 2, 70
    split 3, 128

keysplit hg_upright_bass, 0
    split 0, 46
    split 1, 128

keysplit hg_fingered_bass, 0
    split 0, 54
    split 1, 128

keysplit hg_synth_bass, 0
    split 0, 44
    split 1, 128

keysplit hg_strings, 0
    split 0, 66
    split 1, 75
    split 2, 84
    split 3, 128

keysplit hg_violin, 0
    split 0, 70
    split 1, 78
    split 2, 128

keysplit hg_trombone, 0
    split 0, 49
    split 1, 58
    split 2, 128

keysplit hg_pizzicato, 0
    split 0, 49
    split 1, 58
    split 2, 66
    split 3, 75
    split 4, 128

keysplit hg_french_horn_solo, 0
    split 0, 61
    split 1, 66
    split 2, 128

keysplit hg_french_horns, 0
    split 0, 54
    split 1, 63
    split 2, 128

keysplit hg_oboe, 0
    split 0, 70
    split 1, 77
    split 2, 128

keysplit hg_clarinet, 0
    split 0, 61
    split 1, 70
    split 2, 128

keysplit hg_flute, 0
    split 0, 66
    split 1, 75
    split 2, 82
    split 3, 128

keysplit hg_bassoon, 0
    split 0, 46
    split 1, 54
    split 2, 128

keysplit hg_orchestra_hit, 0
    split 0, 68
    split 1, 77
    split 2, 83
    split 3, 128

keysplit hg_koto, 0
    split 0, 58
    split 1, 68
    split 2, 128

keysplit hg_shamisen, 0
    split 0, 56
    split 1, 65
    split 2, 128

keysplit hg_piano_national_park, 0
    split 0, 42
    split 1, 51
    split 2, 60
    split 3, 68
    split 4, 77
    split 5, 85
    split 6, 128

keysplit hg_saw, 0
    split 0, 47
    split 1, 50
    split 2, 53
    split 3, 56
    split 4, 65
    split 5, 66
    split 6, 68
    split 7, 79
    split 8, 85
    split 9, 86
    split 10, 91
    split 11, 96
    split 12, 99
    split 13, 108
    split 14, 128

keysplit hg_choir, 0
    split 0, 65
    split 1, 86
    split 2, 88
    split 3, 89
    split 4, 128

keysplit uvg_marimba, 0
    split 0, 83
    split 1, 89
    split 2, 90
    split 3, 99
    split 4, 103
    split 5, 128

keysplit square_wave, 0
    split 0, 49
    split 1, 62
    split 2, 79
    split 3, 82
    split 4, 91
    split 5, 96
    split 6, 103
    split 7, 128

.set KeySplitTableNylonGuitar, . - 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 1
	.byte 1
	.byte 1
	.byte 1
	.byte 1
	.byte 1
	.byte 1
	.byte 1
	.byte 1
	.byte 1
	.byte 1
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 3
	.byte 3
	.byte 3
	.byte 3
	.byte 3
	.byte 4
	.byte 4
	.byte 4
	.byte 4
	.byte 4
	.byte 4
	.byte 4
	.byte 4
	.byte 4
	.byte 5
	.byte 5
	.byte 6
	.byte 6
	.byte 6
	.byte 6
	.byte 6
	.byte 6
	.byte 6
	.byte 6
	.byte 6
	.byte 6
	.byte 6
	.byte 6
	.byte 6
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7

.set KeySplitTableSteelGuitar, . - 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 0
	.byte 1
	.byte 1
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 3
	.byte 3
	.byte 3
	.byte 4
	.byte 4
	.byte 4
	.byte 5
	.byte 5
	.byte 6
	.byte 6
	.byte 6
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 8
	.byte 8
	.byte 8
	.byte 9
	.byte 9
	.byte 9
	.byte 9
	.byte 9
	.byte 10
	.byte 10
	.byte 10
	.byte 10
	.byte 11
	.byte 12
	.byte 12
	.byte 13
	.byte 14
	.byte 14
	.byte 14
	.byte 14
	.byte 14
	.byte 15
	.byte 15
	.byte 16
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 17
