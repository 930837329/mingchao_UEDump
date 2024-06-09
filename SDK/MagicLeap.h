
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HeadMountedDisplay
/// dependency: MRMesh

/// Enum /Script/MagicLeap.PurchaseType
/// Size: 0x01 (1 bytes)
enum class PurchaseType : uint8_t
{
	PurchaseType__Consumable                                                         = 0,
	PurchaseType__Nonconsumable                                                      = 1,
	PurchaseType__Undefined                                                          = 2
};

/// Enum /Script/MagicLeap.EFocusLostReason
/// Size: 0x01 (1 bytes)
enum class EFocusLostReason : uint8_t
{
	EFocusLostReason__EFocusLostReason_Invalid                                       = 0,
	EFocusLostReason__EFocusLostReason_System                                        = 1
};

/// Enum /Script/MagicLeap.EMagicLeapMeshLOD
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshLOD : uint8_t
{
	EMagicLeapMeshLOD__Minimum                                                       = 0,
	EMagicLeapMeshLOD__Medium                                                        = 1,
	EMagicLeapMeshLOD__Maximum                                                       = 2
};

/// Enum /Script/MagicLeap.EMagicLeapMeshState
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshState : uint8_t
{
	EMagicLeapMeshState__New                                                         = 0,
	EMagicLeapMeshState__Updated                                                     = 1,
	EMagicLeapMeshState__Deleted                                                     = 2,
	EMagicLeapMeshState__Unchanged                                                   = 3
};

/// Enum /Script/MagicLeap.EMagicLeapMeshVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshVertexColorMode : uint8_t
{
	EMagicLeapMeshVertexColorMode__None                                              = 0,
	EMagicLeapMeshVertexColorMode__Confidence                                        = 1,
	EMagicLeapMeshVertexColorMode__Block                                             = 2,
	EMagicLeapMeshVertexColorMode__LOD                                               = 3
};

/// Enum /Script/MagicLeap.EMagicLeapMeshType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshType : uint8_t
{
	EMagicLeapMeshType__Triangles                                                    = 0,
	EMagicLeapMeshType__PointCloud                                                   = 1
};

/// Enum /Script/MagicLeap.EMagicLeapRaycastResultState
/// Size: 0x01 (1 bytes)
enum class EMagicLeapRaycastResultState : uint8_t
{
	EMagicLeapRaycastResultState__RequestFailed                                      = 0,
	EMagicLeapRaycastResultState__NoCollision                                        = 1,
	EMagicLeapRaycastResultState__HitUnobserved                                      = 2,
	EMagicLeapRaycastResultState__HitObserved                                        = 3
};

/// Enum /Script/MagicLeap.CloudStatus
/// Size: 0x01 (1 bytes)
enum class CloudStatus : uint8_t
{
	CloudStatus__CloudStatus_NotDone                                                 = 0,
	CloudStatus__CloudStatus_Done                                                    = 1
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingMapEvent
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHeadTrackingMapEvent : uint8_t
{
	EMagicLeapHeadTrackingMapEvent__Lost                                             = 0,
	EMagicLeapHeadTrackingMapEvent__Recovered                                        = 1,
	EMagicLeapHeadTrackingMapEvent__RecoveryFailed                                   = 2,
	EMagicLeapHeadTrackingMapEvent__NewSession                                       = 3
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingMode
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHeadTrackingMode : uint8_t
{
	EMagicLeapHeadTrackingMode__PositionAndOrientation                               = 0,
	EMagicLeapHeadTrackingMode__Unavailable                                          = 1,
	EMagicLeapHeadTrackingMode__Unknown                                              = 2
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingError
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHeadTrackingError : uint8_t
{
	EMagicLeapHeadTrackingError__None                                                = 0,
	EMagicLeapHeadTrackingError__NotEnoughFeatures                                   = 1,
	EMagicLeapHeadTrackingError__LowLight                                            = 2,
	EMagicLeapHeadTrackingError__Unknown                                             = 3
};

/// Class /Script/MagicLeap.InAppPurchaseComponent
/// Size: 0x0078 (120 bytes) (0x0000C0 - 0x000138) align 8 pad: 0x0000
class UInAppPurchaseComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,1518) /* FMulticastInlineDelegate */ __um(InAppPurchaseLogMessage);                           // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,1519) /* FMulticastInlineDelegate */ __um(GetItemsDetailsSuccess);                            // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,1520) /* FMulticastInlineDelegate */ __um(GetItemsDetailsFailure);                            // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,1521) /* FMulticastInlineDelegate */ __um(PurchaseConfirmationSuccess);                       // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,1522) /* FMulticastInlineDelegate */ __um(PurchaseConfirmationFailure);                       // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,1523) /* FMulticastInlineDelegate */ __um(GetPurchaseHistorySuccess);                         // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,1524) /* FMulticastInlineDelegate */ __um(GetPurchaseHistoryFailure);                         // 0x0120   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0130   (0x0008)  MISSED
	// bool TryPurchaseItemAsync(FPurchaseItemDetails& ItemDetails);                                                            // [0x21d36f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool TryGetPurchaseHistoryAsync(int32_t InNumPages);                                                                     // [0x21d3650] Final|Native|Public|BlueprintCallable 
	// bool TryGetItemsDetailsAsync(TArray<FString>& ItemIDs);                                                                  // [0x21d3570] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void PurchaseConfirmationSuccess__DelegateSignature(FPurchaseConfirmation& PurchaseConfirmations);                       // [0x25a7960] MulticastDelegate|Public|Delegate|HasOutParms 
	// void PurchaseConfirmationFailure__DelegateSignature();                                                                   // [0x25a7960] MulticastDelegate|Public|Delegate 
	// void InAppPurchaseLogMessage__DelegateSignature(FString LogMessage);                                                     // [0x25a7960] MulticastDelegate|Public|Delegate 
	// void GetPurchaseHistorySuccess__DelegateSignature(TArray<FPurchaseConfirmation>& PurchaseHistory);                       // [0x25a7960] MulticastDelegate|Public|Delegate|HasOutParms 
	// void GetPurchaseHistoryFailure__DelegateSignature();                                                                     // [0x25a7960] MulticastDelegate|Public|Delegate 
	// void GetItemsDetailsSuccess__DelegateSignature(TArray<FPurchaseItemDetails>& ItemsDetails);                              // [0x25a7960] MulticastDelegate|Public|Delegate|HasOutParms 
	// void GetItemsDetailsFailure__DelegateSignature();                                                                        // [0x25a7960] MulticastDelegate|Public|Delegate 
};

/// Class /Script/MagicLeap.LuminApplicationLifecycleComponent
/// Size: 0x0050 (80 bytes) (0x000150 - 0x0001A0) align 8 pad: 0x0000
class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent
{ 
public:
	SDK_UNDEFINED(16,1525) /* FMulticastInlineDelegate */ __um(DeviceHasReactivatedDelegate);                      // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,1526) /* FMulticastInlineDelegate */ __um(DeviceWillEnterRealityModeDelegate);                // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,1527) /* FMulticastInlineDelegate */ __um(DeviceWillGoInStandbyDelegate);                     // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,1528) /* FMulticastInlineDelegate */ __um(FocusLostDelegate);                                 // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,1529) /* FMulticastInlineDelegate */ __um(FocusGainedDelegate);                               // 0x0190   (0x0010)  
};

/// Class /Script/MagicLeap.MagicLeapHeadTrackingNotificationsComponent
/// Size: 0x0090 (144 bytes) (0x000150 - 0x0001E0) align 8 pad: 0x0000
class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent
{ 
public:
	SDK_UNDEFINED(16,1530) /* FMulticastInlineDelegate */ __um(OnHeadTrackingLost);                                // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,1531) /* FMulticastInlineDelegate */ __um(OnHeadTrackingRecovered);                           // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,1532) /* FMulticastInlineDelegate */ __um(OnHeadTrackingRecoveryFailed);                      // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,1533) /* FMulticastInlineDelegate */ __um(OnHeadTrackingNewSessionStarted);                   // 0x0180   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0190   (0x0050)  MISSED
};

/// Class /Script/MagicLeap.MagicLeapHMDFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void SetStabilizationDepthActor(class AActor* InStabilizationDepthActor, bool bSetFocusActor);                           // [0x21d34b0] Final|Native|Static|Public|BlueprintCallable 
	// void SetFocusActor(class AActor* InFocusActor, bool bSetStabilizationActor);                                             // [0x21d33f0] Final|Native|Static|Public|BlueprintCallable 
	// void SetBaseRotation(FRotator& InBaseRotation);                                                                          // [0x21d3370] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetBasePosition(FVector& InBasePosition);                                                                           // [0x21d3370] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetBaseOrientation(FQuat& InBaseOrientation);                                                                       // [0x21d3370] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool SetAppReady();                                                                                                      // [0x1026880] Final|Native|Static|Public|BlueprintCallable 
	// bool IsRunningOnMagicLeapHMD();                                                                                          // [0x21d2d00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int32_t GetPlatformAPILevel();                                                                                           // [0xc03940] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int32_t GetMLSDKVersionRevision();                                                                                       // [0xc03940] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int32_t GetMLSDKVersionMinor();                                                                                          // [0xc03940] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int32_t GetMLSDKVersionMajor();                                                                                          // [0xc03940] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FString GetMLSDKVersion();                                                                                               // [0x1025690] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int32_t GetMinimumAPILevel();                                                                                            // [0x21d2ca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool GetHeadTrackingState(FMagicLeapHeadTrackingState& State);                                                           // [0x21d2c00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool GetHeadTrackingMapEvents(TSet<EMagicLeapHeadTrackingMapEvent>& MapEvents);                                          // [0x21d2ac0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// bool GetGraphicsClientPerformanceInfo(FMagicLeapGraphicsClientPerformanceInfo& PerformanceInfo);                         // [0x21d2a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MagicLeap.MagicLeapMeshTrackerComponent
/// Size: 0x0098 (152 bytes) (0x000218 - 0x0002B0) align 16 pad: 0x0000
class UMagicLeapMeshTrackerComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0218   (0x0008)  MISSED
	SDK_UNDEFINED(16,1534) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                              // 0x0220   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0230   (0x0001)  
	EMagicLeapMeshType                                 MeshType;                                                   // 0x0231   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0232   (0x0006)  MISSED
	class UBoxComponent*                               BoundingVolume;                                             // 0x0238   (0x0008)  
	EMagicLeapMeshLOD                                  LevelOfDetail;                                              // 0x0240   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0241   (0x0003)  MISSED
	float                                              PerimeterOfGapsToFill;                                      // 0x0244   (0x0004)  
	bool                                               Planarize;                                                  // 0x0248   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0249   (0x0003)  MISSED
	float                                              DisconnectedSectionArea;                                    // 0x024C   (0x0004)  
	bool                                               RequestNormals;                                             // 0x0250   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x0251   (0x0001)  
	EMagicLeapMeshVertexColorMode                      VertexColorMode;                                            // 0x0252   (0x0001)  
	unsigned char                                      UnknownData04_6[0x5];                                       // 0x0253   (0x0005)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0258   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0268   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0278   (0x0010)  
	bool                                               RemoveOverlappingTriangles;                                 // 0x0288   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0289   (0x0007)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x0290   (0x0008)  
	int32_t                                            BricksPerFrame;                                             // 0x0298   (0x0004)  
	unsigned char                                      UnknownData06_7[0x14];                                      // 0x029C   (0x0014)  MISSED
	// void SelectMeshBlocks(FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh);       // [0x21d3250] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// void OnMeshTrackerUpdated__DelegateSignature(FGuid ID, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x25a7960] MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 
	// int32_t GetNumQueuedBlockUpdates();                                                                                      // [0x21d2cd0] Final|Native|Public|BlueprintCallable 
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x21d2980] Final|Native|Public|BlueprintCallable 
	// void DisconnectBlockSelector();                                                                                          // [0x21d2960] Final|Native|Public|BlueprintCallable 
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x21d28d0] Final|Native|Public|BlueprintCallable 
	// void ConnectBlockSelector(TScriptInterface<Class> Selector);                                                             // [0x21d2830] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeap.MagicLeapSettings
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UMagicLeapSettings : public UObject
{ 
public:
	bool                                               bEnableZI;                                                  // 0x0030   (0x0001)  
	bool                                               bUseVulkanForZI;                                            // 0x0031   (0x0001)  
	bool                                               bUseMLAudioForZI;                                           // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0033   (0x0005)  MISSED
};

/// Class /Script/MagicLeap.MagicLeapMeshBlockSelectorInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMagicLeapMeshBlockSelectorInterface : public UInterface
{ 
public:
	// void SelectMeshBlocks(FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh);       // [0x21d3130] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MagicLeap.MagicLeapRaycastComponent
/// Size: 0x0068 (104 bytes) (0x0000C0 - 0x000128) align 8 pad: 0x0000
class UMagicLeapRaycastComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x00C0   (0x0068)  MISSED
	// bool RequestRaycast(FMagicLeapRaycastQueryParams& RequestParams, FDelegateProperty& ResultDelegate);                     // [0x21d2fe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void RaycastResultDelegate__DelegateSignature(FMagicLeapRaycastHitResult HitResult);                                     // [0x25a7960] Public|Delegate      
};

/// Class /Script/MagicLeap.MagicLeapRaycastFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// FMagicLeapRaycastQueryParams MakeRaycastQueryParams(FVector Position, FVector Direction, FVector UpVector, int32_t Width, int32_t Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32_t UserData); // [0x21d2d30] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MagicLeap.PurchaseItemDetails
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FPurchaseItemDetails
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FString                                            Price;                                                      // 0x0010   (0x0010)  
	FString                                            Name;                                                       // 0x0020   (0x0010)  
	PurchaseType                                       Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0031   (0x000F)  MISSED
};

/// Struct /Script/MagicLeap.PurchaseConfirmation
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FPurchaseConfirmation
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FString                                            PackageName;                                                // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0020   (0x0028)  MISSED
	PurchaseType                                       Type;                                                       // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/MagicLeap.MagicLeapMeshBlockRequest
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FMagicLeapMeshBlockRequest
{ 
	FGuid                                              BlockID;                                                    // 0x0000   (0x0010)  
	EMagicLeapMeshLOD                                  LevelOfDetail;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MagicLeap.MagicLeapMeshBlockInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FMagicLeapMeshBlockInfo
{ 
	FGuid                                              BlockID;                                                    // 0x0000   (0x0010)  
	FVector                                            BlockPosition;                                              // 0x0010   (0x000C)  
	FRotator                                           BlockOrientation;                                           // 0x001C   (0x000C)  
	FVector                                            BlockDimensions;                                            // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FTimespan                                          Timestamp;                                                  // 0x0038   (0x0008)  
	EMagicLeapMeshState                                BlockState;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/MagicLeap.MagicLeapTrackingMeshInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FMagicLeapTrackingMeshInfo
{ 
	FTimespan                                          Timestamp;                                                  // 0x0000   (0x0008)  
	TArray<FMagicLeapMeshBlockInfo>                    BlockData;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/MagicLeap.MagicLeapRaycastHitResult
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FMagicLeapRaycastHitResult
{ 
	EMagicLeapRaycastResultState                       HitState;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            HitPoint;                                                   // 0x0004   (0x000C)  
	FVector                                            Normal;                                                     // 0x0010   (0x000C)  
	float                                              Confidence;                                                 // 0x001C   (0x0004)  
	int32_t                                            UserData;                                                   // 0x0020   (0x0004)  
};

/// Struct /Script/MagicLeap.MagicLeapRaycastQueryParams
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 pad: 0x0000
struct FMagicLeapRaycastQueryParams
{ 
	FVector                                            Position;                                                   // 0x0000   (0x000C)  
	FVector                                            Direction;                                                  // 0x000C   (0x000C)  
	FVector                                            UpVector;                                                   // 0x0018   (0x000C)  
	int32_t                                            Width;                                                      // 0x0024   (0x0004)  
	int32_t                                            Height;                                                     // 0x0028   (0x0004)  
	float                                              HorizontalFovDegrees;                                       // 0x002C   (0x0004)  
	bool                                               CollideWithUnobserved;                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            UserData;                                                   // 0x0034   (0x0004)  
};

/// Struct /Script/MagicLeap.MagicLeapGraphicsClientPerformanceInfo
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FMagicLeapGraphicsClientPerformanceInfo
{ 
	float                                              FrameStartCPUCompAcquireCPUTimeMs;                          // 0x0000   (0x0004)  
	float                                              FrameStartCPUFrameEndGPUTimeMs;                             // 0x0004   (0x0004)  
	float                                              FrameStartCPUFrameStartCPUTimeMs;                           // 0x0008   (0x0004)  
	float                                              FrameDurationCPUTimeMs;                                     // 0x000C   (0x0004)  
	float                                              FrameDurationGPUTimeMs;                                     // 0x0010   (0x0004)  
	float                                              FrameInternalDurationCPUTimeMs;                             // 0x0014   (0x0004)  
	float                                              FrameInternalDurationGPUTimeMs;                             // 0x0018   (0x0004)  
};

/// Struct /Script/MagicLeap.MagicLeapHeadTrackingState
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FMagicLeapHeadTrackingState
{ 
	EMagicLeapHeadTrackingMode                         Mode;                                                       // 0x0000   (0x0001)  
	EMagicLeapHeadTrackingError                        Error;                                                      // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              Confidence;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/MagicLeap.MagicLeapResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FMagicLeapResult
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            AdditionalInfo;                                             // 0x0008   (0x0010)  
};

