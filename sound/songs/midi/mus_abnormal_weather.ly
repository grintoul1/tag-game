% Lily was here -- automatically converted by midi2ly from /home/grintoul1/romhacking/tag-game/tag-game/sound/songs/midi/mus_abnormal_weather.mid
\version "2.14.0"

\layout {
  \context {
    \Voice
    \remove Note_heads_engraver
    \consists Completion_heads_engraver
    \remove Rest_engraver
    \consists Completion_rest_engraver
  }
}

trackAchannelA = {

  \time 4/4

  \tempo 4 = 108
  \skip 4
  \time 4/4

  % [MARKER] [
  \skip 1*16
  % [MARKER] ]

}

trackA = <<
  \context Voice = voiceA \trackAchannelA
>>


trackBchannelA = {
  \skip 4*65
}

trackBchannelB = \relative c {
  r4 ais''1*2 b ais b ais b ais b
}

trackB = <<
  \context Voice = voiceA \trackBchannelA
  \context Voice = voiceB \trackBchannelB
>>


trackCchannelA = {
  \skip 4*65
}

trackCchannelB = \relative c {
  r4 g''''4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16
  | % 2
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 3
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 4
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 5
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 6
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 7
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 8
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 9
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 10
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 11
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 12
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 13
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 14
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 15
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 16
  g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24 r16 g4*2/24
  r16
  | % 17
  g4*2/24 r16 g4*2/24 r16 g4*2/24
}

trackC = <<

  \clef "violin^8"

  \context Voice = voiceA \trackCchannelA
  \context Voice = voiceB \trackCchannelB
>>


trackDchannelA = {
  \skip 4*65
}

trackDchannelB = \relative c {
  a4 d,4*8/24 dis4*4/24 r4*4/24 dis r4*4/24 d4*8/24 dis4*4/24 r4*4/24 dis
  r4*4/24 dis8 r4*4/24 dis r8 dis'4*8/24 d,4*4/24 r4*4/24 dis4*8/24
  dis4*4/24 r4*4/24 dis r4*4/24 d r4*4/24 dis r4*4/24 dis r4*4/24 d
  r4*4/24 dis4*2/24 r4*2/24 dis r4*2/24 dis4*4/24 r4*4/24 d4*8/24
  | % 3
  dis4*4/24 r4*4/24 dis r4*4/24 dis4*8/24 e4*4/24 r4*4/24 e r4*4/24 dis4*8/24
  e4*4/24 r4*4/24 e r4*4/24 e4*8/24 r4*8/24 e4*4/24 r8
  | % 4
  e'4*8/24 e,4*4/24 r4*4/24 e4*8/24 e4*4/24 r4*4/24 e r4*4/24 dis
  r4*4/24 e r4*4/24 e r4*4/24 dis r4*4/24 e4*2/24 r4*2/24 e r4*2/24 e4*4/24
  r4*4/24 e4 d4*8/24 dis4*4/24 r4*4/24 dis r4*4/24 d4*8/24 dis4*4/24
  r4*4/24 dis r4*4/24 dis8 r4*4/24 dis r8 dis'4*8/24 d,4*4/24 r4*4/24
  | % 6
  dis4*8/24 dis4*4/24 r4*4/24 dis r4*4/24 d r4*4/24 dis r4*4/24 dis
  r4*4/24 d r4*4/24 dis4*2/24 r4*2/24 dis r4*2/24 dis4*4/24 r4*4/24 d4*8/24
  dis4*4/24 r4*4/24 dis r4*4/24
  | % 7
  dis4*8/24 e4*4/24 r4*4/24 e r4*4/24 dis4*8/24 e4*4/24 r4*4/24 e
  r4*4/24 e4*8/24 r4*8/24 e4*4/24 r8 e'4*8/24 e,4*4/24 r4*4/24
  | % 8
  e4*8/24 e4*4/24 r4*4/24 e r4*4/24 dis r4*4/24 e r4*4/24 e r4*4/24 dis
  r4*4/24 e4*2/24 r4*2/24 e r4*2/24 e4*4/24 r4*4/24 e4
  | % 9
  d4*8/24 dis4*4/24 r4*4/24 dis r4*4/24 d4*8/24 dis4*4/24 r4*4/24 dis
  r4*4/24 dis8 r4*4/24 dis r8 dis'4*8/24 d,4*4/24 r4*4/24
  | % 10
  dis4*8/24 dis4*4/24 r4*4/24 dis r4*4/24 d r4*4/24 dis r4*4/24 dis
  r4*4/24 d r4*4/24 dis4*2/24 r4*2/24 dis r4*2/24 dis4*4/24 r4*4/24 d4*8/24
  dis4*4/24 r4*4/24 dis r4*4/24
  | % 11
  dis4*8/24 e4*4/24 r4*4/24 e r4*4/24 dis4*8/24 e4*4/24 r4*4/24 e
  r4*4/24 e4*8/24 r4*8/24 e4*4/24 r8 e'4*8/24 e,4*4/24 r4*4/24
  | % 12
  e4*8/24 e4*4/24 r4*4/24 e r4*4/24 dis r4*4/24 e r4*4/24 e r4*4/24 dis
  r4*4/24 e4*2/24 r4*2/24 e r4*2/24 e4*4/24 r4*4/24 e4
  | % 13
  d4*8/24 dis4*4/24 r4*4/24 dis r4*4/24 d4*8/24 dis4*4/24 r4*4/24 dis
  r4*4/24 dis8 r4*4/24 dis r8 dis'4*8/24 d,4*4/24 r4*4/24
  | % 14
  dis4*8/24 dis4*4/24 r4*4/24 dis r4*4/24 d r4*4/24 dis r4*4/24 dis
  r4*4/24 d r4*4/24 dis4*2/24 r4*2/24 dis r4*2/24 dis4*4/24 r4*4/24 d4*8/24
  dis4*4/24 r4*4/24 dis r4*4/24
  | % 15
  dis4*8/24 e4*4/24 r4*4/24 e r4*4/24 dis4*8/24 e4*4/24 r4*4/24 e
  r4*4/24 e4*8/24 r4*8/24 e4*4/24 r8 e'4*8/24 e,4*4/24 r4*4/24
  | % 16
  e4*8/24 e4*4/24 r4*4/24 e r4*4/24 dis r4*4/24 e r4*4/24 e r4*4/24 dis
  r4*4/24 e4*2/24 r4*2/24 e r4*2/24 e4*4/24 r4*4/24 e4
  | % 17

}

trackD = <<

  \clef bass

  \context Voice = voiceA \trackDchannelA
  \context Voice = voiceB \trackDchannelB
>>


trackEchannelA = {
  \skip 4*65
}

trackEchannelB = \relative c {
  e, dis''1*2 dis4*7 b,4 dis'1*2 dis4*7 b,4 dis'1*2 dis4*7 b,4
  dis'1*2 dis4*7 b,4
}

trackE = <<

  \clef bass

  \context Voice = voiceA \trackEchannelA
  \context Voice = voiceB \trackEchannelB
>>


trackFchannelA = {
  \skip 4*65
}

trackFchannelB = \relative c {
  r4 c,4*4/24 r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r4*20/24 c4*4/24
  r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r8 d4*4/24
  r4*4/24
  | % 3
  c r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r8 d4*4/24
  r4*4/24
  | % 4
  c r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r8 d4*4/24
  r4*4/24
  | % 5
  c r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r4*20/24
  | % 6
  c4*4/24 r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24
  r8 d4*4/24 r4*4/24
  | % 7
  c r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r8 d4*4/24
  r4*4/24
  | % 8
  c r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r8 d4*4/24
  r4*4/24
  | % 9
  c r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r4*20/24
  | % 10
  c4*4/24 r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24
  r8 d4*4/24 r4*4/24
  | % 11
  c r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r8 d4*4/24
  r4*4/24
  | % 12
  c r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r8 d4*4/24
  r4*4/24
  | % 13
  c r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r4*20/24
  | % 14
  c4*4/24 r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24
  r8 d4*4/24 r4*4/24
  | % 15
  c r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r8 d4*4/24
  r4*4/24
  | % 16
  c r4*4/24 c r4*20/24 c4*4/24 r4*20/24 c4*4/24 r8 c4*4/24 r8 d4*4/24
  r4*4/24
  | % 17
  c
}

trackF = <<

  \clef bass

  \context Voice = voiceA \trackFchannelA
  \context Voice = voiceB \trackFchannelB
>>


trackGchannelA = {
  \skip 4*65
}

trackGchannelB = \relative c {
  \voiceTwo
  a4 d,4*8/24 dis4*4/24 r4*4/24 dis r4*4/24 d4*8/24 dis4*4/24 r4*4/24 dis
  r4*4/24 dis8 r4*4/24 dis r8 dis'4*8/24 d,4*4/24 r4*4/24 dis4*8/24
  dis4*4/24 r4*4/24 dis r4*4/24 d r4*4/24 dis r4*4/24 dis r4*4/24 d
  r4*4/24 dis4*2/24 r4*2/24 dis r4*2/24 dis4*4/24 r4*4/24 d4*8/24
  | % 3
  dis4*4/24 r4*4/24 dis r4*4/24 dis4*8/24 e4*4/24 r4*4/24 e r4*4/24 dis4*8/24
  e4*4/24 r4*4/24 e r4*4/24 e4*8/24 r4*8/24 e4*4/24 r8
  | % 4
  e'4*8/24 e,4*4/24 r4*4/24 e4*8/24 e4*4/24 r4*4/24 e r4*4/24 dis
  r4*4/24 e r4*4/24 e r4*4/24 dis r4*4/24 e4*2/24 r4*2/24 e r4*2/24 e4*4/24
  r4*4/24 e4 ais'''4*16/24 cis4*4/24 r4*4/24 c r8 a4*4/24 r4*4/24 dis,
  r4*4/24 d r4*4/24 fis' r8 a,4*4/24 r4*4/24 ais r4*4/24
  | % 6
  dis,4*40/24 d4*4/24 dis fis4 gis
  | % 7
  b4*8/24 ais4*4/24 r4*4/24 fis r4*4/24 gis4*8/24 b4*4/24 r4*4/24 ais
  r4*4/24 fis' r4*4/24 gis r8 fis,4*4/24 r4*4/24 fis r4*4/24 fis
  r4*4/24
  | % 8
  dis16*7 d4*4/24 dis r4*22/24 gis4
  | % 9
  d,,,4*8/24 dis4*4/24 r4*4/24 dis r4*4/24 d4*8/24 dis4*4/24
  r4*4/24 dis r4*4/24 dis8 r4*4/24 dis r8 dis'4*8/24 d,4*4/24 r4*4/24
  | % 10
  dis4*8/24 dis4*4/24 r4*4/24 dis r4*4/24 d r4*4/24 dis r4*4/24 dis
  r4*4/24 d r4*4/24 dis4*2/24 r4*2/24 dis r4*2/24 dis4*4/24 r4*4/24 d4*8/24
  dis4*4/24 r4*4/24 dis r4*4/24
  | % 11
  dis4*8/24 e4*4/24 r4*4/24 e r4*4/24 dis4*8/24 e4*4/24 r4*4/24 e
  r4*4/24 e4*8/24 r4*8/24 e4*4/24 r8 e'4*8/24 e,4*4/24 r4*4/24
  | % 12
  e4*8/24 e4*4/24 r4*4/24 e r4*4/24 dis r4*4/24 e r4*4/24 e r4*4/24 dis
  r4*4/24 e4*2/24 r4*2/24 e r4*2/24 e4*4/24 r4*4/24 e4
  | % 13
  ais''4*16/24 cis4*4/24 r4*4/24 c r8 a4*4/24 r4*4/24 dis, r4*4/24 d
  r4*4/24 fis' r8 a,4*4/24 r4*4/24 ais r4*4/24
  | % 14
  dis,4*40/24 d4*4/24 dis fis4 gis
  | % 15
  b4*8/24 ais4*4/24 r4*4/24 fis r4*4/24 gis4*8/24 b4*4/24 r4*4/24 ais
  r4*4/24 fis' r4*4/24 gis r8 fis,4*4/24 r4*4/24 fis r4*4/24 fis
  r4*4/24
  | % 16
  dis16*7 d4*4/24 dis r4*22/24 gis4
  | % 17

}

trackGchannelBvoiceB = \relative c {
  \voiceOne
  r4*31 fis''4 r4*31 fis,4
}

trackG = <<

  \clef bass

  \context Voice = voiceA \trackGchannelA
  \context Voice = voiceB \trackGchannelB
  \context Voice = voiceC \trackGchannelBvoiceB
>>


\score {
  <<
    \context Staff=trackB \trackA
    \context Staff=trackB \trackB
    \context Staff=trackC \trackA
    \context Staff=trackC \trackC
    \context Staff=trackD \trackA
    \context Staff=trackD \trackD
    \context Staff=trackE \trackA
    \context Staff=trackE \trackE
    \context Staff=trackF \trackA
    \context Staff=trackF \trackF
    \context Staff=trackG \trackA
    \context Staff=trackG \trackG
  >>
  \layout {}
  \midi {}
}
