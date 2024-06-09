
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
/// Size: 0x01 (1 bytes)
enum class EMagicLeapLightEstimationCamera : uint8_t
{
	EMagicLeapLightEstimationCamera__Left                                            = 0,
	EMagicLeapLightEstimationCamera__Right                                           = 1,
	EMagicLeapLightEstimationCamera__FarLeft                                         = 2,
	EMagicLeapLightEstimationCamera__FarRight                                        = 3
};

/// Class /Script/MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
/// Size: 0x0010 (16 bytes) (0x0000C0 - 0x0000D0) align 8 pad: 0x0000
class UMagicLeapLightingTrackingComponent : public UActorComponent
{ 
public:
	bool                                               UseGlobalAmbience;                                          // 0x00C0   (0x0001)  
	bool                                               UseColorTemp;                                               // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x00C2   (0x000E)  MISSED
};

/// Class /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool IsTrackerValid();                                                                                                   // [0x21fe100] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool GetColorTemperatureState(FMagicLeapLightEstimationColorTemperatureState& ColorTemperatureState);                    // [0x21fe070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetAmbientGlobalState(FMagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState);                             // [0x21fdfc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void DestroyTracker();                                                                                                   // [0x21fdfa0] Final|Native|Static|Public|BlueprintCallable 
	// bool CreateTracker();                                                                                                    // [0x21fdf70] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FMagicLeapLightEstimationColorTemperatureState
{ 
	float                                              ColorTemperatureKelvin;                                     // 0x0000   (0x0004)  
	FLinearColor                                       AmbientColor;                                               // 0x0004   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FTimespan                                          Timestamp;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FMagicLeapLightEstimationAmbientGlobalState
{ 
	TArray<float>                                      AmbientIntensityNits;                                       // 0x0000   (0x0010)  
	FTimespan                                          Timestamp;                                                  // 0x0010   (0x0008)  
};

