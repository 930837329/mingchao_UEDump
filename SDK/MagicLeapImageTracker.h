
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MagicLeapImageTracker.EMagicLeapImageTargetOrientation
/// Size: 0x01 (1 bytes)
enum class EMagicLeapImageTargetOrientation : uint8_t
{
	EMagicLeapImageTargetOrientation__ForwardAxisAsNormal                            = 0,
	EMagicLeapImageTargetOrientation__UpAxisAsNormal                                 = 1
};

/// Enum /Script/MagicLeapImageTracker.EMagicLeapImageTargetStatus
/// Size: 0x01 (1 bytes)
enum class EMagicLeapImageTargetStatus : uint8_t
{
	EMagicLeapImageTargetStatus__Tracked                                             = 0,
	EMagicLeapImageTargetStatus__Unreliable                                          = 1,
	EMagicLeapImageTargetStatus__NotTracked                                          = 2
};

/// Class /Script/MagicLeapImageTracker.MagicLeapImageTrackerComponent
/// Size: 0x0078 (120 bytes) (0x000218 - 0x000290) align 16 pad: 0x0000
class UMagicLeapImageTrackerComponent : public USceneComponent
{ 
public:
	class UTexture2D*                                  TargetImageTexture;                                         // 0x0218   (0x0008)  
	FString                                            Name;                                                       // 0x0220   (0x0010)  
	float                                              LongerDimension;                                            // 0x0230   (0x0004)  
	bool                                               bIsStationary;                                              // 0x0234   (0x0001)  
	bool                                               bUseUnreliablePose;                                         // 0x0235   (0x0001)  
	EMagicLeapImageTargetOrientation                   AxisOrientation;                                            // 0x0236   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0237   (0x0001)  MISSED
	SDK_UNDEFINED(16,1535) /* FMulticastInlineDelegate */ __um(OnSetImageTargetSucceeded);                         // 0x0238   (0x0010)  
	SDK_UNDEFINED(16,1536) /* FMulticastInlineDelegate */ __um(OnSetImageTargetFailed);                            // 0x0248   (0x0010)  
	SDK_UNDEFINED(16,1537) /* FMulticastInlineDelegate */ __um(OnImageTargetFound);                                // 0x0258   (0x0010)  
	SDK_UNDEFINED(16,1538) /* FMulticastInlineDelegate */ __um(OnImageTargetLost);                                 // 0x0268   (0x0010)  
	SDK_UNDEFINED(16,1539) /* FMulticastInlineDelegate */ __um(OnImageTargetUnreliableTracking);                   // 0x0278   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0288   (0x0008)  MISSED
	// bool SetTargetAsync(class UTexture2D* ImageTarget);                                                                      // [0x21f4040] Final|Native|Public|BlueprintCallable 
	// bool RemoveTargetAsync();                                                                                                // [0x21f3f90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets);                                                          // [0x21f3fc0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsImageTrackingEnabled();                                                                                           // [0x21f3f60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int32_t GetMaxSimultaneousTargets();                                                                                     // [0x21f3f30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void EnableImageTracking(bool bEnable);                                                                                  // [0x21f3eb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/MagicLeapImageTracker.MagicLeapImageTargetState
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FMagicLeapImageTargetState
{ 
	EMagicLeapImageTargetStatus                        TrackingStatus;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Location;                                                   // 0x0004   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0010   (0x000C)  
};

/// Struct /Script/MagicLeapImageTracker.MagicLeapImageTargetSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FMagicLeapImageTargetSettings
{ 
	class UTexture2D*                                  ImageTexture;                                               // 0x0000   (0x0008)  
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	float                                              LongerDimension;                                            // 0x0018   (0x0004)  
	bool                                               bIsStationary;                                              // 0x001C   (0x0001)  
	bool                                               bIsEnabled;                                                 // 0x001D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x001E   (0x0002)  MISSED
};

