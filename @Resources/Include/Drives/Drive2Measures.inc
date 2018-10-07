[MeasureDiskUnused2]
Measure=FreeDiskSpace
Drive=#Drive2#
UpdateDivider=5

[MeasureDiskLabel2]
Measure=FreeDiskSpace
Drive=#Drive2#
Label=1
UpdateDivider=5

[MeasureDiskTotal2]
Measure=FreeDiskSpace
Drive=#Drive2#
Total=1
UpdateDivider=5

[MeasureDiskRate2]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Index=2
UpdateDivider=3

[MeasureDiskRate2Scalar]
Measure=Calc
Formula=MeasureDiskRate2 / 3
