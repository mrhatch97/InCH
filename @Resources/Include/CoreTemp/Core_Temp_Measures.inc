[MeasureTjMax]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=TjMax
CoreTempIndex=0
UpdateDivider=-1

[MeasureCore0]
Measure=Plugin
Group=Cores
DynamicVariables=1
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=0
MinValue=0
MaxValue=[MeasureTjMax]
;AverageSize=10
IfCondition=MeasureCore0 < ([MeasureCore0:MaxValue] / 2)
IfTrueAction=[!SetVariable Core0StatusColor #CoreNominalColor#]
IfCondition2=(MeasureCore0 >= ([MeasureCore0:MaxValue] / 2)) && (MeasureCore0 <= ([MeasureCore0:MaxValue] * 3 / 4))
IfTrueAction2=[!SetVariable Core0StatusColor #CoreMediumColor#]
IfCondition3=MeasureCore0 > ([MeasureCore0:MaxValue] * 3 / 4)
IfTrueAction3=[!SetVariable Core0StatusColor #CoreHighColor#]

[MeasureCore1]
Measure=Plugin
Group=Cores
DynamicVariables=1
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=1
MinValue=0
MaxValue=[MeasureTjMax]
;AverageSize=10
IfCondition=MeasureCore1 < ([MeasureCore1:MaxValue] / 2)
IfTrueAction=[!SetVariable Core1StatusColor #CoreNominalColor#]
IfCondition2=(MeasureCore1 >= ([MeasureCore1:MaxValue] / 2)) && (MeasureCore1 <= ([MeasureCore1:MaxValue] * 3 / 4))
IfTrueAction2=[!SetVariable Core1StatusColor #CoreMediumColor#]
IfCondition3=MeasureCore1 > ([MeasureCore1:MaxValue] * 3 / 4)
IfTrueAction3=[!SetVariable Core1StatusColor #CoreHighColor#]

[MeasureCore2]
Measure=Plugin
Group=Cores
DynamicVariables=1
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=2
MinValue=0
MaxValue=[MeasureTjMax]
;AverageSize=10
IfCondition=MeasureCore2 < ([MeasureCore2:MaxValue] / 2)
IfTrueAction=[!SetVariable Core2StatusColor #CoreNominalColor#]
IfCondition2=(MeasureCore2 >= ([MeasureCore2:MaxValue] / 2)) && (MeasureCore2 <= ([MeasureCore2:MaxValue] * 3 / 4))
IfTrueAction2=[!SetVariable Core2StatusColor #CoreMediumColor#]
IfCondition3=MeasureCore2 > ([MeasureCore2:MaxValue] * 3 / 4)
IfTrueAction3=[!SetVariable Core2StatusColor #CoreHighColor#]

[MeasureCore3]
Measure=Plugin
Group=Cores
DynamicVariables=1
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=3
MinValue=0
MaxValue=[MeasureTjMax]
;AverageSize=10
IfCondition=MeasureCore3 < ([MeasureCore3:MaxValue] / 2)
IfTrueAction=[!SetVariable Core3StatusColor #CoreNominalColor#]
IfCondition2=(MeasureCore3 >= ([MeasureCore3:MaxValue] / 2)) && (MeasureCore3 <= ([MeasureCore3:MaxValue] * 3 / 4))
IfTrueAction2=[!SetVariable Core3StatusColor #CoreMediumColor#]
IfCondition3=MeasureCore3 > ([MeasureCore3:MaxValue] * 3 / 4)
IfTrueAction3=[!SetVariable Core3StatusColor #CoreHighColor#]

[MeasureCPUFreq]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=CpuSpeed

[MeasureCPUVolt]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Vid
