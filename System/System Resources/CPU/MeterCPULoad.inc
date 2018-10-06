[MeterCore0]
Meter=String
MeasureName=MeasureCPUCore0
MeterStyle=StyleSmallText
StringAlign=Center
X=(1*#CoreTempGaugeWidth#/2+#SkinPadding#)
Y=#LoadTextY#
FontColor=#Core0Color#
Postfix=" %"

[MeterCore1]
Meter=String
MeasureName=MeasureCPUCore1
MeterStyle=StyleSmallText
StringAlign=Center
X=([MeterCore0:X]+#CoreTempGaugeWidth#+#CoreTempGaugePadding#)
Y=0r
FontColor=#Core1Color#
Postfix=" %"

[MeterCore2]
Meter=String
MeasureName=MeasureCPUCore2
MeterStyle=StyleSmallText
StringAlign=Center
X=([MeterCore1:X]+#CoreTempGaugeWidth#+#CoreTempGaugePadding#)
Y=0r
FontColor=#Core2Color#
Postfix=" %"

[MeterCore3]
Meter=String
MeasureName=MeasureCPUCore3
MeterStyle=StyleSmallText
StringAlign=Center
X=([MeterCore2:X]+#CoreTempGaugeWidth#+#CoreTempGaugePadding#)
Y=0r
FontColor=#Core3Color#
Postfix=" %"
