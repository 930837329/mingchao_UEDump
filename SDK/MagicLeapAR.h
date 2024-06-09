
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AugmentedReality
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapImageTracker
/// dependency: MagicLeapPlanes
/// dependency: MRMesh

/// Enum /Script/MagicLeapAR.ELuminARLineTraceChannel
/// Size: 0x01 (1 bytes)
enum class ELuminARLineTraceChannel : uint8_t
{
	ELuminARLineTraceChannel__None                                                   = 0,
	ELuminARLineTraceChannel__FeaturePoint                                           = 1,
	ELuminARLineTraceChannel__InfinitePlane                                          = 2,
	ELuminARLineTraceChannel__PlaneUsingExtent                                       = 4,
	ELuminARLineTraceChannel__PlaneUsingBoundaryPolygon                              = 8,
	ELuminARLineTraceChannel__FeaturePointWithSurfaceNormal                          = 16
};

/// Enum /Script/MagicLeapAR.ELuminARTrackingState
/// Size: 0x01 (1 bytes)
enum class ELuminARTrackingState : uint8_t
{
	ELuminARTrackingState__Tracking                                                  = 0,
	ELuminARTrackingState__NotTracking                                               = 1,
	ELuminARTrackingState__StoppedTracking                                           = 2
};

/// Class /Script/MagicLeapAR.LuminARSessionFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void StartLuminARSession(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class ULuminARSessionConfig* Configuration); // [0x21d7bc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapAR.LuminARFrameFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool LuminARLineTrace(class UObject* WorldContextObject, FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult>& OutHitResults); // [0x21d7900] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// ELuminARTrackingState GetTrackingState();                                                                                // [0x21d78b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// class ULuminARCandidateImage* AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, EMagicLeapImageTargetOrientation InAxisOrientation); // [0x21d7510] Final|Native|Static|Public|BlueprintCallable 
	// class ULuminARCandidateImage* AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary); // [0x21d72d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapAR.LuminAROrigin
/// Size: 0x00C0 (192 bytes) (0x0002A8 - 0x000368) align 8 pad: 0x0000
class ALuminAROrigin : public AAROriginActor
{ 
public:
	class UMRMeshComponent*                            MRMeshComponent;                                            // 0x02A8   (0x0008)  
	class UMaterialInterface*                          PlaneSurfaceMaterial;                                       // 0x02B0   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData00_7[0xA8];                                      // 0x02C0   (0x00A8)  MISSED
};

/// Class /Script/MagicLeapAR.LuminARSessionConfig
/// Size: 0x0098 (152 bytes) (0x000118 - 0x0001B0) align 16 pad: 0x0000
class ULuminARSessionConfig : public UARSessionConfig
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0118   (0x0008)  MISSED
	FMagicLeapPlanesQuery                              PlanesQuery;                                                // 0x0120   (0x0060)  
	int32_t                                            MaxPlaneQueryResults;                                       // 0x0180   (0x0004)  
	int32_t                                            MinPlaneArea;                                               // 0x0184   (0x0004)  
	bool                                               bArbitraryOrientationPlaneDetection;                        // 0x0188   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0189   (0x0003)  MISSED
	FVector                                            PlaneSearchExtents;                                         // 0x018C   (0x000C)  
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneQueryFlags;                                            // 0x0198   (0x0010)  
	bool                                               bDiscardZeroExtentPlanes;                                   // 0x01A8   (0x0001)  
	bool                                               bDefaultUseUnreliablePose;                                  // 0x01A9   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x01AA   (0x0006)  MISSED
};

/// Class /Script/MagicLeapAR.LuminARLightEstimate
/// Size: 0x0010 (16 bytes) (0x000048 - 0x000058) align 8 pad: 0x0000
class ULuminARLightEstimate : public UARBasicLightEstimate
{ 
public:
	TArray<float>                                      AmbientIntensityNits;                                       // 0x0048   (0x0010)  
	// TArray<float> GetAmbientIntensityNits();                                                                                 // [0x21d77b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MagicLeapAR.LuminARCandidateImage
/// Size: 0x0008 (8 bytes) (0x000060 - 0x000068) align 8 pad: 0x0000
class ULuminARCandidateImage : public UARCandidateImage
{ 
public:
	bool                                               bUseUnreliablePose;                                         // 0x0060   (0x0001)  
	bool                                               bImageIsStationary;                                         // 0x0061   (0x0001)  
	EMagicLeapImageTargetOrientation                   AxisOrientation;                                            // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0063   (0x0005)  MISSED
	// bool GetUseUnreliablePose();                                                                                             // [0x21d78e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetImageIsStationary();                                                                                             // [0x21d7890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EMagicLeapImageTargetOrientation GetAxisOrientation();                                                                   // [0x21d7870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

