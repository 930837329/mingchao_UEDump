
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/StreamlineBlueprint.UStreamlineDLSSGMode
/// Size: 0x01 (1 bytes)
enum class UStreamlineDLSSGMode : uint8_t
{
	UStreamlineDLSSGMode__Off                                                        = 0,
	UStreamlineDLSSGMode__On                                                         = 1
};

/// Enum /Script/StreamlineBlueprint.UStreamlineDLSSGSupport
/// Size: 0x01 (1 bytes)
enum class UStreamlineDLSSGSupport : uint8_t
{
	UStreamlineDLSSGSupport__Supported                                               = 0,
	UStreamlineDLSSGSupport__NotSupported                                            = 1,
	UStreamlineDLSSGSupport__NotSupportedIncompatibleHardware                        = 2,
	UStreamlineDLSSGSupport__NotSupportedDriverOutOfDate                             = 3,
	UStreamlineDLSSGSupport__NotSupportedOperatingSystemOutOfDate                    = 4,
	UStreamlineDLSSGSupport__NotSupportedByPlatformAtBuildTime                       = 5,
	UStreamlineDLSSGSupport__NotSupportedIncompatibleAPICaptureToolActive            = 6
};

/// Enum /Script/StreamlineBlueprint.UStreamlineReflexSupport
/// Size: 0x01 (1 bytes)
enum class UStreamlineReflexSupport : uint8_t
{
	UStreamlineReflexSupport__Supported                                              = 0,
	UStreamlineReflexSupport__NotSupported                                           = 1
};

/// Enum /Script/StreamlineBlueprint.UStreamlineReflexMode
/// Size: 0x01 (1 bytes)
enum class UStreamlineReflexMode : uint8_t
{
	UStreamlineReflexMode__Disabled                                                  = 0,
	UStreamlineReflexMode__Enabled                                                   = 1,
	UStreamlineReflexMode__EnabledPlusBoost                                          = 3
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryDLSSG
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{ 
public:
	// void SetDLSSGMode(UStreamlineDLSSGMode DLSSGMode);                                                                       // [0x1581a90] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// void SetDLSSGFrames(int32_t Frames);                                                                                     // [0x1581a10] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// UStreamlineDLSSGSupport QueryDLSSGSupport();                                                                             // [0x15819b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsDLSSGSupported();                                                                                                 // [0x1581950] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsDLSSGModeSupported(UStreamlineDLSSGMode DLSSGMode);                                                               // [0x15818d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// TArray<UStreamlineDLSSGMode> GetSupportedDLSSGModes();                                                                   // [0x1581850] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void GetDLSSGSupportedFramesRange(int32_t& MinFrames, int32_t& MaxFrames);                                               // [0x1581680] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// UStreamlineDLSSGMode GetDLSSGMode();                                                                                     // [0x1581650] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void GetDLSSGMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor);                       // [0x1581570] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// int32_t GetDLSSGFrames();                                                                                                // [0x1581540] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// UStreamlineDLSSGMode GetDefaultDLSSGMode();                                                                              // [0x1581760] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryReflex
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{ 
public:
	// void SetReflexMode(UStreamlineReflexMode Mode);                                                                          // [0x1581b00] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// UStreamlineReflexSupport QueryReflexSupport();                                                                           // [0x15819e0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsReflexSupported();                                                                                                // [0x1581980] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// float GetRenderLatencyInMs();                                                                                            // [0x1581820] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// UStreamlineReflexMode GetReflexMode();                                                                                   // [0x15817f0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// float GetGameToRenderLatencyInMs();                                                                                      // [0x15817c0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// float GetGameLatencyInMs();                                                                                              // [0x1581790] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// UStreamlineReflexMode GetDefaultReflexMode();                                                                            // [0x1026880] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

