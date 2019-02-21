[MeasureAudioRMSLeftRaw]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=L
Type=RMS

[MeasureAudioRMSLeft]
Measure=Calc
Formula=(Floor(MeasureAudioRMSRightRaw * 15.0) / 15.0)

[MeasureAudioRMSRightRaw]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=R
Type=RMS

[MeasureAudioRMSRight]
Measure=Calc
Formula=(Floor(MeasureAudioRMSRightRaw * 15.0) / 15.0)
