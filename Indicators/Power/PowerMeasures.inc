[MeasureBatteryPercent]
Measure=Plugin
Group=BatteryMeasures
Plugin=PowerPlugin
PowerState=Percent

[MeasureBatteryLife]
Measure=Plugin
Group=BatteryMeasures
Plugin=PowerPlugin
PowerState=Lifetime
Format=#BatteryLifetimeFormat#

[MeasureBatteryACLine]
Measure=Plugin
Plugin=PowerPlugin
PowerState=ACLine
; Plugged in - disable battery monitoring
IfEqualValue=1
IfEqualAction=[!SetVariable BatteryStatusColor #ACLine#][!DisableMeasureGroup BatteryMeasures][!HideMeterGroup BatteryMeters]
; Not plugged in - enable battery monitoring
IfBelowValue=1
IfBelowAction=[!EnableMeasureGroup BatteryMeasures][!ShowMeterGroup BatteryMeters]


[MeasureBatteryStatus]
Measure=Plugin
Group=BatteryMeasures
Plugin=PowerPlugin
PowerState=Status
; Battery high
IfCondition=MeasureBatteryStatus = 4
IfTrueAction=[!SetVariable BatteryStatusColor #BatteryNominalColor#]
; Battery low
IfCondition2=MeasureBatteryStatus = 3
IfTrueAction2=[!SetVariable MeterBatteryBarGhost ImageTint #BatteryMidColor#]
; Battery critical
IfCondition3=MeasureBatteryStatus = 2
IfTrueAction3=[!SetVariable #BatteryCriticalColor#]
