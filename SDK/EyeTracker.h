
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/EyeTracker.EEyeTrackerStatus
/// Size: 0x01 (1 bytes)
enum class EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected                                                  = 0,
	EEyeTrackerStatus__NotTracking                                                   = 1,
	EEyeTrackerStatus__Tracking                                                      = 2
};

/// Class /Script/EyeTracker.EyeTrackerFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void SetEyeTrackedPlayer(class APlayerController* PlayerController);                                                     // [0x291b6e0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsStereoGazeDataAvailable();                                                                                        // [0x291b6b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsEyeTrackerConnected();                                                                                            // [0x291b680] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);                                                          // [0x291b5e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetGazeData(FEyeTrackerGazeData& OutGazeData);                                                                      // [0x291b530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/EyeTracker.EyeTrackerStereoGazeData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 pad: 0x0000
struct FEyeTrackerStereoGazeData
{ 
	FVector                                            LeftEyeOrigin;                                              // 0x0000   (0x000C)  
	FVector                                            LeftEyeDirection;                                           // 0x000C   (0x000C)  
	FVector                                            RightEyeOrigin;                                             // 0x0018   (0x000C)  
	FVector                                            RightEyeDirection;                                          // 0x0024   (0x000C)  
	FVector                                            FixationPoint;                                              // 0x0030   (0x000C)  
	float                                              ConfidenceValue;                                            // 0x003C   (0x0004)  
};

/// Struct /Script/EyeTracker.EyeTrackerGazeData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 pad: 0x0000
struct FEyeTrackerGazeData
{ 
	FVector                                            GazeOrigin;                                                 // 0x0000   (0x000C)  
	FVector                                            GazeDirection;                                              // 0x000C   (0x000C)  
	FVector                                            FixationPoint;                                              // 0x0018   (0x000C)  
	float                                              ConfidenceValue;                                            // 0x0024   (0x0004)  
};

