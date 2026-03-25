	.include "MPlayDef.s"

	.equ	se_m_hyper_beam_gen1_grp, voicegroup000
	.equ	se_m_hyper_beam_gen1_pri, 0
	.equ	se_m_hyper_beam_gen1_rev, 0
	.equ	se_m_hyper_beam_gen1_mvl, 127
	.equ	se_m_hyper_beam_gen1_key, 0
	.equ	se_m_hyper_beam_gen1_tbs, 1
	.equ	se_m_hyper_beam_gen1_exg, 0
	.equ	se_m_hyper_beam_gen1_cmp, 1

	.section .rodata
	.global	se_m_hyper_beam_gen1
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

se_m_hyper_beam_gen1_1:
	.byte		VOL   , 127*se_m_hyper_beam_gen1_mvl/mxv
	.byte	KEYSH , se_m_hyper_beam_gen1_key+0
@ 000   ----------------------------------------
	.byte	TEMPO , 140*se_m_hyper_beam_gen1_tbs/2
	.byte		VOICE , 80
	.byte		N01   , Cn5 , v120
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Dn5 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Fn5 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Gs5 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Cn6 
	.byte	W02
	.byte		        Cn4 
	.byte	W02
	.byte		        Fn6 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Cn7 
	.byte	W02
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

se_m_hyper_beam_gen1_2:
	.byte		VOL   , 127*se_m_hyper_beam_gen1_mvl/mxv
	.byte	KEYSH , se_m_hyper_beam_gen1_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 80
	.byte		N01   , Cn5 , v120
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Dn5 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Fn5 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Gs5 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Cn6 
	.byte	W02
	.byte		        Cn4 
	.byte	W02
	.byte		        Fn6 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		        Cn7 
	.byte	W02
	.byte		        Cn4 
	.byte	W01
	.byte		        Cn7 
	.byte	W02
	.byte	FINE

@**************** Track 3 (Midi-Chn.10) ****************@

se_m_hyper_beam_gen1_3:
	.byte		VOL   , 127*se_m_hyper_beam_gen1_mvl/mxv
	.byte	KEYSH , se_m_hyper_beam_gen1_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 80
	.byte		N01   , Dn1 , v104
	.byte		N01   , Fs1 
	.byte	W01
	.byte		N01   
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		        Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte		N01   , Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		        Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		N01   
	.byte		N01   , Fs1 
	.byte	W01
	.byte		N01   
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		        Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte		N01   , Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		        Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		N01   
	.byte		N01   , Fs1 
	.byte	W01
	.byte		N01   
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		        Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte		N01   , Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		        Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		N01   
	.byte		N01   , Fs1 
	.byte	W01
	.byte		N01   
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		        Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte		N01   , Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		        Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		N01   
	.byte		N01   , Fs1 
	.byte	W01
	.byte		N01   
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		        Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte		N01   , Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		        Fs1 
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte		N01   
	.byte		N01   , Fs1 
	.byte	W01
	.byte		N01   
	.byte	W01
	.byte		        Dn1 
	.byte	W01
	.byte	FINE

@******************************************************@
	.align	2

se_m_hyper_beam_gen1:
	.byte	3	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_hyper_beam_gen1_pri	@ Priority
	.byte	se_m_hyper_beam_gen1_rev	@ Reverb.

	.word	se_m_hyper_beam_gen1_grp

	.word	se_m_hyper_beam_gen1_1
	.word	se_m_hyper_beam_gen1_2
	.word	se_m_hyper_beam_gen1_3

	.end
