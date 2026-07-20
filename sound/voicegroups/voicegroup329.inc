	.align 2
voicegroup329:: @ HGSS main
	voice_keysplit voicegroup333, KeySplitTable35    @ piano
	voice_keysplit voicegroup334, KeySplitTable36    @ piano 2
	voice_keysplit voicegroup335, KeySplitTable37    @ piano octave
	voice_keysplit voicegroup336, KeySplitTable9     @ rhodes 1
	voice_keysplit voicegroup337, KeySplitTable9     @ rhodes 2
	voice_keysplit voicegroup338, KeySplitTable36    @ vibraphone
	voice_keysplit voicegroup339, KeySplitTable38    @ marimba
	voice_keysplit voicegroup340, KeySplitTable39    @ xylophone
	voice_keysplit voicegroup341, KeySplitTable25    @ tubular bell
	voice_keysplit voicegroup342, KeySplitTable36    @ glockenspiel
	voice_keysplit voicegroup343, KeySplitTable38    @ music box
	voice_keysplit voicegroup344, KeySplitTable40    @ drawbar organ
	voice_keysplit voicegroup345, KeySplitTable40    @ jazz organ
	voice_keysplit voicegroup346, KeySplitTable40    @ accordion
	voice_keysplit voicegroup347, KeySplitTable41    @ nylon guitar
	voice_keysplit voicegroup348, KeySplitTable41    @ martin guitar
	voice_keysplit voicegroup349, KeySplitTable32    @ distortion guitar 1
	voice_keysplit voicegroup350, KeySplitTable32    @ distortion guitar 2
	voice_keysplit voicegroup351, KeySplitTable41    @ clean guitar
	voice_keysplit voicegroup352, KeySplitTable42    @ upright bass
	voice_keysplit voicegroup353, KeySplitTable43    @ fingered bass
	voice_directsound 60, 0, DirectSoundWaveData_dp_slapbass_c1_16, 255, 0, 255, 192
	voice_keysplit voicegroup354, KeySplitTable44    @ synth bass
	voice_keysplit voicegroup355, KeySplitTable45    @ strings
	voice_keysplit voicegroup356, KeySplitTable46    @ violin
	voice_keysplit voicegroup357, KeySplitTable47    @ cello
	voice_keysplit voicegroup358, KeySplitTable48    @ pizzicato
	voice_keysplit voicegroup359, KeySplitTable40    @ harp
	voice_keysplit voicegroup360, KeySplitTable40    @ timpani
	voice_keysplit voicegroup361, KeySplitTable39    @ trumpets
	voice_keysplit voicegroup362, KeySplitTable47    @ trombones
	voice_keysplit voicegroup363, KeySplitTable49    @ french horn solo
	voice_keysplit voicegroup364, KeySplitTable50    @ french horns
	voice_keysplit voicegroup365, KeySplitTable51    @ oboe
	voice_keysplit voicegroup366, KeySplitTable52    @ clarinet
	voice_keysplit voicegroup367, KeySplitTable53    @ flute
	voice_keysplit voicegroup368, KeySplitTable54    @ bassoon
	voice_keysplit voicegroup369, KeySplitTable55    @ orchestra hit
	voice_keysplit voicegroup370, KeySplitTable38    @ square wave
	voice_keysplit_all voicegroup330				 @ drums
	voice_keysplit_all voicegroup331				 @ taiko drums
	voice_directsound 60, 0, DirectSoundWaveData_dp_woodbass_d3_16, 255, 251, 0, 171
	voice_keysplit voicegroup371, KeySplitTable56    @ koto
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 255, 242, 40, 211
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_wind, 67, 243, 155, 224
	voice_directsound 60, 0, DirectSoundWaveData_dp_explosion, 67, 255, 0, 245
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_square_wave, 255, 250, 0, 171 @ 1 octave too low
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_bubbles, 255, 0, 255, 0
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 255, 242, 25, 0  @ also 066 in BATTLE4 and DUNGEON4
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 255, 252, 0, 96
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 255, 250, 0, 220
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 224, 242, 101, 220
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 224, 242, 101, 192
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 42, 0, 57, 192
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 240, 242, 0, 192
@	voice_directsound 60, 0, DirectSoundWaveData_dp_whistle_c5_16, 255, 246, 78, 192	@ remaining voices wrap around
@	voice_directsound 60, 0, DirectSoundWaveData_dp_reverscyn_16, 255, 0, 255, 16		@ to the next voice group, so
@	voice_directsound 60, 0, DirectSoundWaveData_dp_org5_c3_16, 255, 167, 235, 171		@ have some dittos
@	voice_directsound 60, 0, DirectSoundWaveData_puresquare_37, 80, 234, 191, 220
@	voice_directsound 60, 0, DirectSoundWaveData_puresquare_12, 80, 234, 191, 220
@	voice_directsound 60, 0, DirectSoundWaveData_dp_orchhitmajor60, 255, 197, 255, 171						@ 60
@	voice_directsound 60, 0, DirectSoundWaveData_dp_orchhitminor60, 255, 197, 255, 171						@ 61
@	voice_keysplit_all voicegroup332				 @ synth kick+snare										@ 62
@	voice_keysplit voicegroup316, KeySplitTable27    @ DPPt timpani											@ 63
@	voice_directsound 60, 0, DirectSoundWaveData_dp_synbass1_c2_16, 255, 42, 255, 192						@ 64
@	voice_directsound 60, 0, DirectSoundWaveData_dp_synbass2_c1_16, 255, 0, 255, 220						@ 65
@	voice_directsound 60, 0, DirectSoundWaveData_dp_sawtoothlead60, 255, 197, 255, 171						@ 66
@	voice_keysplit voicegroup372, KeySplitTable57    @ shamisen												@ 67
@	voice_directsound 60, 0, DirectSoundWaveData_hg_hyoshigi, 255, 0, 255, 171								@ 68
@	voice_directsound 60, 0, DirectSoundWaveData_hg_kodaiko, 255, 0, 255, 171								@ 69
@	voice_directsound 60, 0, DirectSoundWaveData_hg_tsuzumi, 255, 0, 255, 171								@ 70
@	voice_directsound 60, 0, DirectSoundWaveData_hg_jinglebell, 255, 0, 255, 171							@ 71
@	voice_directsound 60, 0, DirectSoundWaveData_hg_hoohclap, 255, 0, 255, 0								@ 72
@	voice_directsound 60, 0, DirectSoundWaveData_dp_tenorchoir48, 255, 197, 255, 171						@ 73
@	voice_directsound 60, 0, DirectSoundWaveData_dp_sopranochoir60, 255, 197, 255, 171						@ 74
@	voice_directsound 60, 0, DirectSoundWaveData_hg_choirc5, 255, 197, 255, 171 @ 1 octave too low			@ 75
@	voice_directsound 60, 0, DirectSoundWaveData_dp_reverscyn_16, 255, 197, 255, 171 @ 1 octave too high	@ 76
@	voice_directsound 60, 0, DirectSoundWaveData_dp_spearpillarwind60, 255, 0, 255, 32						@ 77
@	voice_directsound 60, 0, DirectSoundWaveData_dp_altosax_c3_16, 255, 216, 252, 192						@ 78
@	voice_directsound 60, 0, DirectSoundWaveData_dp_synthsnare, 255, 0, 255, 171							@ 79
@	voice_keysplit voicegroup373, KeySplitTable58    @ piano (national park)								@ 80
@	voice_directsound 60, 0, DirectSoundWaveData_dp_tom1_16, 255, 0, 255, 32								@ 81
@	voice_keysplit voicegroup319, KeySplitTable29    @ dp trumpets (arceus)									@ 82
@	voice_keysplit voicegroup320, KeySplitTable30    @ dp trombone (arceus)									@ 83
