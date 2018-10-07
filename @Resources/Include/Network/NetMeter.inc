[MeterActivityDown]
Meter=String
MeasureName=MeasureNetIn
MeterStyle=StyleSmallText
FontColor=#DLColor#
StringAlign=Right
ClipString=2
X=(#SkinWidth#/2)
AutoScale=1k
Text=DL:%1B/s
Padding=0,0,4,0

[MeterActivityUp]
Meter=String
MeasureName=MeasureNetOut
MeterStyle=StyleSmallText
FontColor=#ULColor#
StringAlign=Left
X=(#SkinWidth#/2)
Y=0r
ClipString=2
AutoScale=1k
Text=UL:%1B/s

[MeterIP]
Meter=String
Group=IPMeter
MeasureName=MeasureLANIP
MeterStyle=StyleSmallText
FontColor=#LANColor#
StringAlign=Center
X=(#SkinWidth#/2)
Y=0R
ClipString=2
Text=IP: %1
LeftMouseUpAction=[!SetClip "[MeasureWANIP]"]
MouseOverAction=[!SetOption MeterIP Text "IP: [MeasureWANIP]"][!UpdateMeter MeterIP][!Redraw]
MouseLeaveAction=[!SetOption MeterIP Text "IP: [MeasureLANIP]"][!UpdateMeter MeterIP][!Redraw]
