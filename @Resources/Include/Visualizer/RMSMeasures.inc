[MeasureAudioRMSLeftRaw]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=L
Type=RMS

[MeasureAudioRMSLeft]
Measure=Calc
Formula=(1/15) * Floor(MeasureAudioRMSLeftRaw / (1/15))

[MeasureAudioRMSRightRaw]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=R
Type=RMS

[MeasureAudioRMSRight]
Measure=Calc
Formula=(1/15) * Floor(MeasureAudioRMSRightRaw / (1/15))
