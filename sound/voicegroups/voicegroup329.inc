	.align 2
voicegroup329:: @ HGSS main
	voice_keysplit voicegroup_hg_piano_1, keysplit_hg_piano_1    @ piano
	voice_keysplit voicegroup_hg_piano_2, keysplit_hg_piano_2    @ piano 2
	voice_keysplit voicegroup_hg_piano_3, keysplit_hg_piano_3    @ piano octave
	voice_keysplit voicegroup336, keysplit_hg_rhodes     @ rhodes 1
	voice_keysplit voicegroup337, keysplit_hg_rhodes     @ rhodes 2
	voice_keysplit voicegroup338, keysplit_hg_piano_2    @ vibraphone
	voice_keysplit voicegroup339, keysplit_hg_marimba    @ marimba
	voice_keysplit voicegroup340, keysplit_hg_trumpet    @ xylophone
	voice_keysplit voicegroup341, keysplit_hg_tubular_bell    @ tubular bell
	voice_keysplit voicegroup342, keysplit_hg_piano_2    @ glockenspiel
	voice_keysplit voicegroup343, keysplit_hg_marimba    @ music box
	voice_keysplit voicegroup344, keysplit_hg_organ    @ drawbar organ
	voice_keysplit voicegroup345, keysplit_hg_organ    @ jazz organ
	voice_keysplit voicegroup346, keysplit_hg_organ    @ accordion
	voice_keysplit voicegroup347, keysplit_hg_nylon_guitar    @ nylon guitar
	voice_keysplit voicegroup348, keysplit_hg_nylon_guitar    @ martin guitar
	voice_keysplit voicegroup349, keysplit_hg_distortion_guitar    @ distortion guitar 1
	voice_keysplit voicegroup350, keysplit_hg_distortion_guitar    @ distortion guitar 2
	voice_keysplit voicegroup351, keysplit_hg_nylon_guitar    @ clean guitar
	voice_keysplit voicegroup352, keysplit_hg_upright_bass    @ upright bass
	voice_keysplit voicegroup353, keysplit_hg_fingered_bass    @ fingered bass
	voice_directsound 60, 0, DirectSoundWaveData_dp_slapbass_c1_16, 255, 0, 255, 192
	voice_keysplit voicegroup354, keysplit_hg_synth_bass    @ synth bass
	voice_keysplit voicegroup355, keysplit_hg_strings    @ strings
	voice_keysplit voicegroup356, keysplit_hg_violin    @ violin
	voice_keysplit voicegroup357, keysplit_hg_trombone    @ cello
	voice_keysplit voicegroup358, keysplit_hg_pizzicato    @ pizzicato
	voice_keysplit voicegroup359, keysplit_hg_organ    @ harp
	voice_keysplit voicegroup360, keysplit_hg_organ    @ timpani
	voice_keysplit voicegroup361, keysplit_hg_trumpet    @ trumpets
	voice_keysplit voicegroup362, keysplit_hg_trombone    @ trombones
	voice_keysplit voicegroup363, keysplit_hg_french_horn_solo    @ french horn solo
	voice_keysplit voicegroup364, keysplit_hg_french_horns    @ french horns
	voice_keysplit voicegroup365, keysplit_hg_oboe    @ oboe
	voice_keysplit voicegroup366, keysplit_hg_clarinet    @ clarinet
	voice_keysplit voicegroup367, keysplit_hg_flute    @ flute
	voice_keysplit voicegroup368, keysplit_hg_bassoon    @ bassoon
	voice_keysplit voicegroup369, keysplit_hg_orchestra_hit    @ orchestra hit
	voice_keysplit voicegroup370, keysplit_hg_marimba    @ square wave
	voice_keysplit_all voicegroup330				 @ drums
	voice_keysplit_all voicegroup331				 @ taiko drums
	voice_directsound 60, 0, DirectSoundWaveData_dp_woodbass_d3_16, 255, 251, 0, 171
	voice_keysplit voicegroup371, keysplit_hg_koto    @ koto
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
	voice_directsound 60, 0, DirectSoundWaveData_dp_whistle_c5_16, 255, 246, 78, 192	@ remaining voices wrap around
	voice_directsound 60, 0, DirectSoundWaveData_dp_reverscyn_16, 255, 0, 255, 16		@ to the next voice group, so
	voice_directsound 60, 0, DirectSoundWaveData_dp_org5_c3_16, 255, 167, 235, 171		@ have some dittos
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_37, 80, 234, 191, 220
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_12, 80, 234, 191, 220
	voice_directsound 60, 0, DirectSoundWaveData_dp_orchhitmajor60, 255, 197, 255, 171						@ 60
	voice_directsound 60, 0, DirectSoundWaveData_dp_orchhitminor60, 255, 197, 255, 171						@ 61
	voice_keysplit_all voicegroup332				 @ synth kick+snare										@ 62
	voice_keysplit voicegroup316, keysplit_dppt_timpani    @ DPPt timpani											@ 63
	voice_directsound 60, 0, DirectSoundWaveData_dp_synbass1_c2_16, 255, 42, 255, 192						@ 64
	voice_directsound 60, 0, DirectSoundWaveData_dp_synbass2_c1_16, 255, 0, 255, 220						@ 65
	voice_directsound 60, 0, DirectSoundWaveData_dp_sawtoothlead60, 255, 197, 255, 171						@ 66
	voice_keysplit voicegroup372, keysplit_hg_shamisen    @ shamisen												@ 67
	voice_directsound 60, 0, DirectSoundWaveData_hg_hyoshigi, 255, 0, 255, 171								@ 68
	voice_directsound 60, 0, DirectSoundWaveData_hg_kodaiko, 255, 0, 255, 171								@ 69
	voice_directsound 60, 0, DirectSoundWaveData_hg_tsuzumi, 255, 0, 255, 171								@ 70
	voice_directsound 60, 0, DirectSoundWaveData_hg_jinglebell, 255, 0, 255, 171							@ 71
	voice_directsound 60, 0, DirectSoundWaveData_hg_hoohclap, 255, 0, 255, 0								@ 72
	voice_directsound 60, 0, DirectSoundWaveData_dp_tenorchoir48, 255, 197, 255, 171						@ 73
	voice_directsound 60, 0, DirectSoundWaveData_dp_sopranochoir60, 255, 197, 255, 171						@ 74
	voice_directsound 60, 0, DirectSoundWaveData_hg_choirc5, 255, 197, 255, 171 @ 1 octave too low			@ 75
	voice_directsound 60, 0, DirectSoundWaveData_dp_reverscyn_16, 255, 197, 255, 171 @ 1 octave too high	@ 76
	voice_directsound 60, 0, DirectSoundWaveData_dp_spearpillarwind60, 255, 0, 255, 32						@ 77
	voice_directsound 60, 0, DirectSoundWaveData_dp_altosax_c3_16, 255, 216, 252, 192						@ 78
	voice_directsound 60, 0, DirectSoundWaveData_dp_synthsnare, 255, 0, 255, 171							@ 79
	voice_keysplit voicegroup373, keysplit_hg_piano_national_park    @ piano (national park)								@ 80
	voice_directsound 60, 0, DirectSoundWaveData_dp_tom1_16, 255, 0, 255, 32								@ 81
	voice_keysplit voicegroup319, keysplit_dp_trumpet    @ dp trumpets (arceus)									@ 82
	voice_keysplit voicegroup320, keysplit_dp_trombone    @ dp trombone (arceus)									@ 83
