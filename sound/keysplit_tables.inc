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

keysplit mezmerkaiser_007, 0
    split 0, 50
    split 1, 68
    split 2, 95
    split 3, 128

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

keysplit mezmerkaiser_087, 0
    split 0, 60
    split 1, 72
    split 2, 84
    split 3, 128

keysplit mezmerkaiser_090, 0
    split 0, 128

keysplit mezmerkaiser_093, 0
    split 0, 60
    split 1, 72
    split 2, 84
    split 3, 128

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

.set KeySplitTableViola, . - 0
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
	.byte 1
	.byte 1
	.byte 1
	.byte 1
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 2
	.byte 3
	.byte 4
	.byte 4
	.byte 5
	.byte 5
	.byte 6
	.byte 6
	.byte 6
	.byte 6
	.byte 7
	.byte 7
	.byte 8
	.byte 9
	.byte 10
	.byte 10
	.byte 10
	.byte 10
	.byte 11
	.byte 12
	.byte 12
	.byte 12
	.byte 13
	.byte 13
	.byte 13
	.byte 13
	.byte 14
	.byte 14
	.byte 14
	.byte 14
	.byte 15
	.byte 15
	.byte 16
	.byte 16
	.byte 17
	.byte 17
	.byte 17
	.byte 17
	.byte 18
	.byte 18
	.byte 18
	.byte 18
	.byte 18
	.byte 19
	.byte 19
	.byte 19
	.byte 19
	.byte 20
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21
	.byte 21

.set KeySplitTableBaritoneSax, . - 0
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
	.byte 4
	.byte 4
	.byte 4
	.byte 4
	.byte 4
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 6
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 7
	.byte 8
	.byte 9
	.byte 9
	.byte 9
	.byte 9
	.byte 9
	.byte 9
	.byte 10
	.byte 10
	.byte 10
	.byte 11
	.byte 11
	.byte 11
	.byte 11
	.byte 11
	.byte 12
	.byte 12
	.byte 13
	.byte 13
	.byte 13
	.byte 13
	.byte 13
	.byte 14
	.byte 15
	.byte 15
	.byte 15
	.byte 15
	.byte 15
	.byte 15
	.byte 15
	.byte 15
	.byte 15
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16
	.byte 16

.set KeySplitTableCelesta, . - 0
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
	.byte 2
	.byte 3
	.byte 3
	.byte 3
	.byte 3
	.byte 3
	.byte 3
	.byte 3
	.byte 3
	.byte 3
	.byte 4
	.byte 4
	.byte 4
	.byte 4
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
	.byte 5
