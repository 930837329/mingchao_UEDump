
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/DLSSBlueprint.UDLSSMode
/// Size: 0x01 (1 bytes)
enum class UDLSSMode : uint8_t
{
	UDLSSMode__Off                                                                   = 0,
	UDLSSMode__Auto                                                                  = 1,
	UDLSSMode__UltraQuality                                                          = 2,
	UDLSSMode__Quality                                                               = 3,
	UDLSSMode__Balanced                                                              = 4,
	UDLSSMode__Performance                                                           = 5,
	UDLSSMode__UltraPerformance                                                      = 6
};

/// Enum /Script/DLSSBlueprint.UDLSSSupport
/// Size: 0x01 (1 bytes)
enum class UDLSSSupport : uint8_t
{
	UDLSSSupport__Supported                                                          = 0,
	UDLSSSupport__NotSupported                                                       = 1,
	UDLSSSupport__NotSupportedIncompatibleHardware                                   = 2,
	UDLSSSupport__NotSupportedDriverOutOfDate                                        = 3,
	UDLSSSupport__NotSupportedOperatingSystemOutOfDate                               = 4,
	UDLSSSupport__NotSupportedByPlatformAtBuildTime                                  = 5
};

/// Class /Script/DLSSBlueprint.DLSSLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UDLSSLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void SetDLSSSharpness(float Sharpness);                                                                                  // [0x156cc70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// void SetDLSSMode(UDLSSMode DLSSMode);                                                                                    // [0x156cc00] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// UDLSSSupport QueryDLSSSupport();                                                                                         // [0x156cbd0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsDLSSSupported();                                                                                                  // [0x156cba0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsDLSSModeSupported(UDLSSMode DLSSMode);                                                                            // [0x156cb20] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// TArray<UDLSSMode> GetSupportedDLSSModes();                                                                               // [0x156caa0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// float GetDLSSSharpness();                                                                                                // [0x156ca40] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);                               // [0x156c960] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness); // [0x156c6c0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// UDLSSMode GetDLSSMode();                                                                                                 // [0x156c690] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor);                        // [0x156c5b0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// UDLSSMode GetDefaultDLSSMode();                                                                                          // [0x156ca70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

