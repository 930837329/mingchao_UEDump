
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KuroCurve.KuroCurveLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroCurveLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool UseCurve_Vector2D(FKuroCurveVector2D& CurveVector2D);                                                               // [0x1096d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool UseCurve_Vector(FKuroCurveVector& CurveVector);                                                                     // [0x1096de0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool UseCurve_LinearColor(FKuroCurveLinearColor& CurveLinearColor);                                                      // [0x1096bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool UseCurve_Float(FKuroCurveFloat& CurveFloat);                                                                        // [0x1096ac0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FVector2D GetValue_Vector2D(FKuroCurveVector2D& CurveVector2D, float Time);                                              // [0x1096850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// FVector GetValue_Vector(FKuroCurveVector& CurveVector, float Time);                                                      // [0x1096980] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// FLinearColor GetValue_LinearColor(FKuroCurveLinearColor& CurveLinearColor, float Time);                                  // [0x10966d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// float GetValue_Float(FKuroCurveFloat& CurveFloat, float Time);                                                           // [0x1096560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/KuroCurve.KuroCurveVector
/// Size: 0x01A8 (424 bytes) (0x000000 - 0x0001A8) align 8 pad: 0x0000
struct FKuroCurveVector
{ 
	bool                                               bUseCurve : 1;                                              // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Constant;                                                   // 0x0004   (0x000C)  
	FRuntimeFloatCurve                                 Curve[3];                                                   // 0x0010   (0x0198)  
};

/// Struct /Script/KuroCurve.KuroCurveLinearColor
/// Size: 0x0220 (544 bytes) (0x000000 - 0x000220) align 8 pad: 0x0000
struct FKuroCurveLinearColor
{ 
	bool                                               bUseCurve : 1;                                              // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FLinearColor                                       Constant;                                                   // 0x0004   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FRuntimeCurveLinearColor                           Curve;                                                      // 0x0018   (0x0208)  
};

/// Struct /Script/KuroCurve.KuroCurveFloat
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FKuroCurveFloat
{ 
	bool                                               bUseCurve : 1;                                              // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Constant;                                                   // 0x0004   (0x0004)  
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)  
};

/// Struct /Script/KuroCurve.KuroCurveVector2D
/// Size: 0x0120 (288 bytes) (0x000000 - 0x000120) align 8 pad: 0x0000
struct FKuroCurveVector2D
{ 
	bool                                               bUseCurve : 1;                                              // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector2D                                          Constant;                                                   // 0x0004   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 Curve[2];                                                   // 0x0010   (0x0110)  
};

