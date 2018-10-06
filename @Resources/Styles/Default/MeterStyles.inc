[StyleSmallerText]
FontColor=#PrimaryColor#
FontFace=#MonoFont#
FontSize=10
StringStyle=Bold
SolidColor=0,0,0,1
AntiAlias=1

[StyleSmallText]
FontColor=#PrimaryColor#
FontFace=#MonoFont#
FontSize=12
StringStyle=Bold
SolidColor=0,0,0,1
AntiAlias=1

[StyleSmallTextNonData]
FontSize=11
FontFace=#PrimaryFont#
FontColor=#PrimaryColor#
SolidColor=0,0,0,1
AntiAlias=1

[StyleMediumText]
FontSize=16
FontFace=#MonoFont#
FontColor=#PrimaryColor#
StringStyle=Bold
SolidColor=0,0,0,1
AntiAlias=1

[StyleMediumTextNonData]
FontSize=16
FontFace=#PrimaryFont#
FontColor=#PrimaryColor#
SolidColor=0,0,0,1
AntiAlias=1

[StyleLargeText]
FontSize=30
FontFace=#SecondaryFont#
FontColor=#PrimaryColor#
StringStyle=Bold
SolidColor=0,0,0,1
AntiAlias=1

[MeterStyleGraph]
W=(#SkinWidth#-10)
H=#HistogramHeight#
X=#SkinPadding#
AntiAlias=1

[MeterStyleLine]
LineWidth=#LineGraphWidth#

[MeterStyleVisualizerBar]
W=#FFTWidth#
H=#FFTHeight#
X=0R
Y=0r
BarColor=#PrimaryColor#
SolidColor=#VisualizerBkg#
BarOrientation=Vertical

[MeterStyleRMSBar]
X=5R
Y=0r

Shape=Rectangle 0,0,#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend HiColor
Shape2=Rectangle 0,(1*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend HiColor
Shape3=Rectangle 0,(2*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend HiColor
Shape4=Rectangle 0,(3*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend MidColor
Shape5=Rectangle 0,(4*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend MidColor
Shape6=Rectangle 0,(5*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend MidColor
Shape7=Rectangle 0,(6*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend MidColor
Shape8=Rectangle 0,(7*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend MidColor
Shape9=Rectangle 0,(8*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend LoColor
Shape10=Rectangle 0,(9*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend LoColor
Shape11=Rectangle 0,(10*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend LoColor
Shape12=Rectangle 0,(11*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend LoColor
Shape13=Rectangle 0,(12*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend LoColor
Shape14=Rectangle 0,(13*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend LoColor
Shape15=Rectangle 0,(14*(#VisualizerCellHeight#+1)),#VisualizerWidth#,#VisualizerCellHeight#,#VisualizerCellRadius# | Extend LoColor

LoColor=Fill Color #LowColor# | StrokeWidth 0
MidColor=Fill Color #MidColor# | StrokeWidth 0
HiColor=Fill Color #HighColor# | StrokeWidth 0
DynamicVariables=1
