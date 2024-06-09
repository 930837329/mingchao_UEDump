
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
/// Size: 0x01 (1 bytes)
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
{
	EMagicLeapEyeTrackingCalibrationStatus__None                                     = 0,
	EMagicLeapEyeTrackingCalibrationStatus__Bad                                      = 1,
	EMagicLeapEyeTrackingCalibrationStatus__Good                                     = 2
};

/// Enum /Script/MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
/// Size: 0x01 (1 bytes)
enum class EMagicLeapEyeTrackingStatus : uint8_t
{
	EMagicLeapEyeTrackingStatus__NotConnected                                        = 0,
	EMagicLeapEyeTrackingStatus__Disabled                                            = 1,
	EMagicLeapEyeTrackingStatus__UserNotPresent                                      = 2,
	EMagicLeapEyeTrackingStatus__UserPresent                                         = 3,
	EMagicLeapEyeTrackingStatus__UserPresentAndWatchingWindow                        = 4
};

/// Class /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool GetEyeBlinkState(FMagicLeapEyeBlinkState& BlinkState);                                                              // [0x21e2210] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();                                                           // [0x21e21e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MagicLeapEyeTracker.MagicLeapEyeBlinkState
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 pad: 0x0000
struct FMagicLeapEyeBlinkState
{ 
	bool                                               LeftEyeBlinked;                                             // 0x0000   (0x0001)  
	bool                                               RightEyeBlinked;                                            // 0x0001   (0x0001)  
};

