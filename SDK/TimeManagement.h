
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/TimeManagement.EFrameNumberDisplayFormats
/// Size: 0x01 (1 bytes)
enum class EFrameNumberDisplayFormats : uint8_t
{
	EFrameNumberDisplayFormats__NonDropFrameTimecode                                 = 0,
	EFrameNumberDisplayFormats__DropFrameTimecode                                    = 1,
	EFrameNumberDisplayFormats__Seconds                                              = 2,
	EFrameNumberDisplayFormats__Frames                                               = 3,
	EFrameNumberDisplayFormats__MAX_Count                                            = 4
};

/// Enum /Script/TimeManagement.ETimedDataInputState
/// Size: 0x01 (1 bytes)
enum class ETimedDataInputState : uint8_t
{
	ETimedDataInputState__Connected                                                  = 0,
	ETimedDataInputState__Unresponsive                                               = 1,
	ETimedDataInputState__Disconnected                                               = 2
};

/// Enum /Script/TimeManagement.ETimedDataInputEvaluationType
/// Size: 0x01 (1 bytes)
enum class ETimedDataInputEvaluationType : uint8_t
{
	ETimedDataInputEvaluationType__None                                              = 0,
	ETimedDataInputEvaluationType__Timecode                                          = 1,
	ETimedDataInputEvaluationType__PlatformTime                                      = 2
};

/// Class /Script/TimeManagement.FixedFrameRateCustomTimeStep
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{ 
public:
	FFrameRate                                         FixedFrameRate;                                             // 0x0030   (0x0008)  
};

/// Class /Script/TimeManagement.GenlockedCustomTimeStep
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{ 
public:
};

/// Class /Script/TimeManagement.GenlockedTimecodeProvider
/// Size: 0x0028 (40 bytes) (0x000038 - 0x000060) align 8 pad: 0x0000
class UGenlockedTimecodeProvider : public UTimecodeProvider
{ 
public:
	bool                                               bUseGenlockToCount;                                         // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x27];                                      // 0x0039   (0x0027)  MISSED
};

/// Class /Script/TimeManagement.TimeManagementBlueprintLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// FFrameTime TransformTime(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& DestinationRate);                   // [0x390c480] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32_t B);                                                     // [0x390c3c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);                                            // [0x390c300] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// FFrameTime SnapFrameTimeToRate(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& SnapToRate);                  // [0x390c1b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, FFrameRate& FrameRate);                                        // [0x390c0d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32_t B);                                                     // [0x390c010] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool IsValid_MultipleOf(FFrameRate& InFrameRate, FFrameRate& OtherFramerate);                                            // [0x390bf10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool IsValid_Framerate(FFrameRate& InFrameRate);                                                                         // [0x390be70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FFrameRate GetTimecodeFrameRate();                                                                                       // [0x390be30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FTimecode GetTimecode();                                                                                                 // [0x390bdf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32_t B);                                                       // [0x390bd30] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// FString Conv_TimecodeToString(FTimecode& InTimecode, bool bForceSignDisplay);                                            // [0x390bc00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float Conv_QualifiedFrameTimeToSeconds(FQualifiedFrameTime& InFrameTime);                                                // [0x390bb50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float Conv_FrameRateToSeconds(FFrameRate& InFrameRate);                                                                  // [0x390bab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// int32_t Conv_FrameNumberToInteger(FFrameNumber& InFrameNumber);                                                          // [0x390ba20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32_t B);                                                          // [0x390b960] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);                                                 // [0x390b8a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TimeManagement.TimeSynchronizationSource
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UTimeSynchronizationSource : public UObject
{ 
public:
	bool                                               bUseForSynchronization;                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            FrameOffset;                                                // 0x0034   (0x0004)  
};

/// Struct /Script/TimeManagement.TimedDataInputEvaluationData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FTimedDataInputEvaluationData
{ 
	float                                              DistanceToNewestSampleSeconds;                              // 0x0000   (0x0004)  
	float                                              DistanceToOldestSampleSeconds;                              // 0x0004   (0x0004)  
};

/// Struct /Script/TimeManagement.TimedDataChannelSampleTime
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FTimedDataChannelSampleTime
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

