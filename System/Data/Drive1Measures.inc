[MeasureDiskUnused1]
Measure=FreeDiskSpace
Drive=#Drive1#
UpdateDivider=5

[MeasureDiskLabel1]
Measure=FreeDiskSpace
Drive=#Drive1#
Label=1
UpdateDivider=5

[MeasureDiskTotal1]
Measure=FreeDiskSpace
Drive=#Drive1#
Total=1
UpdateDivider=5

[MeasureDiskRate1]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Index=1
UpdateDivider=3

[MeasureDiskRate1Scalar]
Measure=Calc
Formula=MeasureDiskRate1 / 3
