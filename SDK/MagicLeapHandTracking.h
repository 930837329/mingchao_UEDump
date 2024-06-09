
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: LiveLinkInterface

/// Enum /Script/MagicLeapHandTracking.EMagicLeapGestureTransformSpace
/// Size: 0x01 (1 bytes)
enum class EMagicLeapGestureTransformSpace : uint8_t
{
	EMagicLeapGestureTransformSpace__World                                           = 0,
	EMagicLeapGestureTransformSpace__Hand                                            = 1,
	EMagicLeapGestureTransformSpace__Tracking                                        = 2
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingGestureFilterLevel
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t
{
	EMagicLeapHandTrackingGestureFilterLevel__NoFilter                               = 0,
	EMagicLeapHandTrackingGestureFilterLevel__SlightRobustnessToFlicker              = 1,
	EMagicLeapHandTrackingGestureFilterLevel__MoreRobustnessToFlicker                = 2
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingKeypointFilterLevel
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t
{
	EMagicLeapHandTrackingKeypointFilterLevel__NoFilter                              = 0,
	EMagicLeapHandTrackingKeypointFilterLevel__SimpleSmoothing                       = 1,
	EMagicLeapHandTrackingKeypointFilterLevel__PredictiveSmoothing                   = 2
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingGesture
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingGesture : uint8_t
{
	EMagicLeapHandTrackingGesture__Finger                                            = 0,
	EMagicLeapHandTrackingGesture__Fist                                              = 1,
	EMagicLeapHandTrackingGesture__Pinch                                             = 2,
	EMagicLeapHandTrackingGesture__Thumb                                             = 3,
	EMagicLeapHandTrackingGesture__L                                                 = 4,
	EMagicLeapHandTrackingGesture__OpenHand                                          = 5,
	EMagicLeapHandTrackingGesture__OpenHandBack                                      = 5,
	EMagicLeapHandTrackingGesture__Ok                                                = 6,
	EMagicLeapHandTrackingGesture__C                                                 = 7,
	EMagicLeapHandTrackingGesture__NoPose                                            = 8,
	EMagicLeapHandTrackingGesture__NoHand                                            = 9
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingKeypoint
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingKeypoint : uint8_t
{
	EMagicLeapHandTrackingKeypoint__Thumb_Tip                                        = 0,
	EMagicLeapHandTrackingKeypoint__Thumb_IP                                         = 1,
	EMagicLeapHandTrackingKeypoint__Thumb_MCP                                        = 2,
	EMagicLeapHandTrackingKeypoint__Thumb_CMC                                        = 3,
	EMagicLeapHandTrackingKeypoint__Index_Tip                                        = 4,
	EMagicLeapHandTrackingKeypoint__Index_DIP                                        = 5,
	EMagicLeapHandTrackingKeypoint__Index_PIP                                        = 6,
	EMagicLeapHandTrackingKeypoint__Index_MCP                                        = 7,
	EMagicLeapHandTrackingKeypoint__Middle_Tip                                       = 8,
	EMagicLeapHandTrackingKeypoint__Middle_DIP                                       = 9,
	EMagicLeapHandTrackingKeypoint__Middle_PIP                                       = 10,
	EMagicLeapHandTrackingKeypoint__Middle_MCP                                       = 11,
	EMagicLeapHandTrackingKeypoint__Ring_Tip                                         = 12,
	EMagicLeapHandTrackingKeypoint__Ring_DIP                                         = 13,
	EMagicLeapHandTrackingKeypoint__Ring_PIP                                         = 14,
	EMagicLeapHandTrackingKeypoint__Ring_MCP                                         = 15,
	EMagicLeapHandTrackingKeypoint__Pinky_Tip                                        = 16,
	EMagicLeapHandTrackingKeypoint__Pinky_DIP                                        = 17,
	EMagicLeapHandTrackingKeypoint__Pinky_PIP                                        = 18,
	EMagicLeapHandTrackingKeypoint__Pinky_MCP                                        = 19,
	EMagicLeapHandTrackingKeypoint__Wrist_Center                                     = 20,
	EMagicLeapHandTrackingKeypoint__Wrist_Ulnar                                      = 21,
	EMagicLeapHandTrackingKeypoint__Wrist_Radial                                     = 22,
	EMagicLeapHandTrackingKeypoint__Hand_Center                                      = 23
};

/// Class /Script/MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{ 
public:
};

/// Class /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence);                       // [0x21efea0] Final|Native|Static|Public|BlueprintCallable 
	// bool SetConfiguration(TArray<EMagicLeapHandTrackingGesture>& StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled); // [0x21efd20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool IsHoldingControl(EControllerHand Hand);                                                                             // [0x21efca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// float GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture);                                        // [0x21efc20] Final|Native|Static|Public|BlueprintCallable 
	// bool GetMotionSourceForHandKeypoint(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, FName& OutMotionSource); // [0x21efb00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetMagicLeapHandTrackingLiveLinkSource(FLiveLinkSourceHandle& SourceHandle);                                        // [0x21efa20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetHandThumbTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Secondary);       // [0x21ef8c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool GetHandKeypointForMotionSource(FName MotionSource, EMagicLeapHandTrackingKeypoint& OutKeyPoint);                    // [0x21ef7d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetHandIndexFingerTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Pointer);   // [0x21ef670] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool GetHandCenterNormalized(EControllerHand Hand, FVector& HandCenterNormalized);                                       // [0x21ef5a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool GetHandCenter(EControllerHand Hand, FTransform& HandCenter);                                                        // [0x21ef480] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool GetGestureKeypointTransform(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Transform); // [0x21ef1e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool GetGestureKeypoints(EControllerHand Hand, TArray<FTransform>& Keypoints);                                           // [0x21ef390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetCurrentGestureConfidence(EControllerHand Hand, float& Confidence);                                               // [0x21ef100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetCurrentGesture(EControllerHand Hand, EMagicLeapHandTrackingGesture& Gesture);                                    // [0x21ef020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetConfiguration(TArray<EMagicLeapHandTrackingGesture>& ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel& KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel& GestureFilterLevel, bool& bTrackingEnabled); // [0x21eee80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

