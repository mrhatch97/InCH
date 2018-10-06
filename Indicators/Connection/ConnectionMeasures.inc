; Determines whether the machine has an internet connection or not
[MeasureNetwork]
Measure=Plugin
Plugin=WebParser.dll
Url=http://www.msftncsi.com/ncsi.txt
RegExp="^(.*)$"
UpdateRate=30
ForceReload=1
StringIndex=1
FinishAction=[!EnableMeasure MeasureConnection]

; Has a value of 1 if uplink exists, else 0
[MeasureConnection]
Measure=Calc
Formula=1
Disabled=1
IfEqualValue=1
IfEqualAction=[!HideMeter MeterConnection][!EnableMeasureGroup MeasureWifi]
IfBelowValue=1
IfBelowAction=[!ShowMeter MeterConnection][!DisableMeasureGroup MeasureWifi]

;[MeasureWiFiQuality]
;Measure=Plugin
;Group=MeasureWiFi
;Plugin=WiFiStatus
;WiFiInfoType=Quality
;WiFiIntfID=#WiFiAdapterID#
;IfAboveValue=0
;IfAboveAction=[!ShowMeterGroup MeterWiFi]
;IfEqualValue=0
;IfEqualAction=[!HideMeterGroup MeterWiFi]
;
;[MeasureWiFiSSID]
;Measure=Plugin
;Group=MeasureWiFi
;Plugin=WiFiStatus
;WiFiInfoType=SSID
;WiFiIntfID=#WiFiAdapterID#

[MeasureWiFiQuality]
Measure=Calc
Group=MeasureWiFi
Formula=20
IfCondition=(MeasureWiFiQuality = 0)
IfTrueAction=[!HideMeterGroup MeterWiFi]
IfFalseAction=[!ShowMeterGroup MeterWiFi]
