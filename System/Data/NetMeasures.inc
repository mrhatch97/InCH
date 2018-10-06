[MeasureNetIn]
Measure=NetIn
Interface=#NetInterface#
AverageSize=#NetSmoothing#
MaxValue=(#NetDownstreamSpeed#*1048576)
DynamicVariables=1

[MeasureNetOut]
Measure=NetOut
Interface=#NetInterface#
AverageSize=#NetSmoothing#
MaxValue=(#NetUpstreamSpeed#*1048576)
DynamicVariables=1

[MeasureLANIP]
Measure=Plugin
Plugin=SysInfo
SysInfoType=IP_ADDRESS
SysInfoData=#NetInterface#
UpdateDivider=100
DynamicVariables=1

[MeasureWANIP]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=http://checkip.dyndns.org
RegExp="(?siU)Address: (.*)</body>"
StringIndex=1
UpdateRate=-1
