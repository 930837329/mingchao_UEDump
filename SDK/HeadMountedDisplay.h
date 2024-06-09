
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

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x01 (1 bytes)
enum class EXRVisualType : uint8_t
{
	EXRVisualType__Controller                                                        = 0,
	EXRVisualType__Hand                                                              = 1
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x01 (1 bytes)
enum class EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm                                                              = 0,
	EHandKeypoint__Wrist                                                             = 1,
	EHandKeypoint__ThumbMetacarpal                                                   = 2,
	EHandKeypoint__ThumbProximal                                                     = 3,
	EHandKeypoint__ThumbDistal                                                       = 4,
	EHandKeypoint__ThumbTip                                                          = 5,
	EHandKeypoint__IndexMetacarpal                                                   = 6,
	EHandKeypoint__IndexProximal                                                     = 7,
	EHandKeypoint__IndexIntermediate                                                 = 8,
	EHandKeypoint__IndexDistal                                                       = 9,
	EHandKeypoint__IndexTip                                                          = 10,
	EHandKeypoint__MiddleMetacarpal                                                  = 11,
	EHandKeypoint__MiddleProximal                                                    = 12,
	EHandKeypoint__MiddleIntermediate                                                = 13,
	EHandKeypoint__MiddleDistal                                                      = 14,
	EHandKeypoint__MiddleTip                                                         = 15,
	EHandKeypoint__RingMetacarpal                                                    = 16,
	EHandKeypoint__RingProximal                                                      = 17,
	EHandKeypoint__RingIntermediate                                                  = 18,
	EHandKeypoint__RingDistal                                                        = 19,
	EHandKeypoint__RingTip                                                           = 20,
	EHandKeypoint__LittleMetacarpal                                                  = 21,
	EHandKeypoint__LittleProximal                                                    = 22,
	EHandKeypoint__LittleIntermediate                                                = 23,
	EHandKeypoint__LittleDistal                                                      = 24,
	EHandKeypoint__LittleTip                                                         = 25
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x01 (1 bytes)
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay                                         = 0,
	EXRTrackedDeviceType__Controller                                                 = 1,
	EXRTrackedDeviceType__TrackingReference                                          = 2,
	EXRTrackedDeviceType__Other                                                      = 3,
	EXRTrackedDeviceType__Invalid                                                    = 254,
	EXRTrackedDeviceType__Any                                                        = 255
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x01 (1 bytes)
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled                                                   = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed                                       = 1,
	ESpectatorScreenMode__Undistorted                                                = 2,
	ESpectatorScreenMode__Distorted                                                  = 3,
	ESpectatorScreenMode__SingleEye                                                  = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill                                     = 5,
	ESpectatorScreenMode__Texture                                                    = 6,
	ESpectatorScreenMode__TexturePlusEye                                             = 7
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x01 (1 bytes)
enum class EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags                                                          = 0,
	EXRSystemFlags__IsAR                                                             = 1,
	EXRSystemFlags__IsTablet                                                         = 2,
	EXRSystemFlags__IsHeadMounted                                                    = 4,
	EXRSystemFlags__SupportsHandTracking                                             = 8
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x01 (1 bytes)
enum class EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem                                      = 0,
	EXRDeviceConnectionResult__FeatureNotSupported                                   = 1,
	EXRDeviceConnectionResult__NoValidViewport                                       = 2,
	EXRDeviceConnectionResult__MiscFailure                                           = 3,
	EXRDeviceConnectionResult__Success                                               = 4
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x01 (1 bytes)
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x01 (1 bytes)
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor                                                        = 0,
	EHMDTrackingOrigin__Eye                                                          = 1,
	EHMDTrackingOrigin__Stage                                                        = 2,
	EHMDTrackingOrigin__Unbounded                                                    = 3
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x01 (1 bytes)
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x01 (1 bytes)
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x01 (1 bytes)
enum class ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None                                                   = 0,
	ESpatialInputGestureAxis__Manipulation                                           = 1,
	ESpatialInputGestureAxis__Navigation                                             = 2,
	ESpatialInputGestureAxis__NavigationRails                                        = 3
};

/// Class /Script/HeadMountedDisplay.VRNotificationsComponent
/// Size: 0x0090 (144 bytes) (0x0000C0 - 0x000150) align 8 pad: 0x0000
class UVRNotificationsComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,1371) /* FMulticastInlineDelegate */ __um(HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate); // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,1372) /* FMulticastInlineDelegate */ __um(HMDTrackingInitializedDelegate);                    // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,1373) /* FMulticastInlineDelegate */ __um(HMDRecenteredDelegate);                             // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,1374) /* FMulticastInlineDelegate */ __um(HMDLostDelegate);                                   // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,1375) /* FMulticastInlineDelegate */ __um(HMDReconnectedDelegate);                            // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,1376) /* FMulticastInlineDelegate */ __um(HMDConnectCanceledDelegate);                        // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,1377) /* FMulticastInlineDelegate */ __um(HMDPutOnHeadDelegate);                              // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,1378) /* FMulticastInlineDelegate */ __um(HMDRemovedFromHeadDelegate);                        // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,1379) /* FMulticastInlineDelegate */ __um(VRControllerRecenteredDelegate);                    // 0x0140   (0x0010)  
};

/// Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void UpdateExternalTrackingHMDPosition(FTransform& ExternalTrackingTransform);                                           // [0x36736c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetXRTimedInputActionDelegate(FName& ActionName, FDelegateProperty& InDelegate);                                    // [0x3673590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetXRDisconnectDelegate(FDelegateProperty& InDisconnectedDelegate);                                                 // [0x36734e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);                                                 // [0x3673420] Final|Native|Static|Public|BlueprintCallable 
	// void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);                                                          // [0x3673330] Final|Native|Static|Public|BlueprintCallable 
	// void SetSpectatorScreenTexture(class UTexture* InTexture);                                                               // [0x3673210] Final|Native|Static|Public|BlueprintCallable 
	// void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // [0x3673000] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void SetSpectatorScreenMode(ESpectatorScreenMode Mode);                                                                  // [0x3672f90] Final|Native|Static|Public|BlueprintCallable 
	// void SetClippingPlanes(float Near, float Far);                                                                           // [0x3672ad0] Final|Native|Static|Public|BlueprintCallable 
	// void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);                               // [0x3672980] Final|Native|Static|Public|BlueprintCallable 
	// bool IsSpectatorScreenModeControllable();                                                                                // [0x3672950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsInLowPersistenceMode();                                                                                           // [0xbf7d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsHeadMountedDisplayEnabled();                                                                                      // [0x36725d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsHeadMountedDisplayConnected();                                                                                    // [0x36725a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsDeviceTracking(FXRDeviceId& XRDeviceId);                                                                          // [0x3672500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool HasValidTrackingPosition();                                                                                         // [0x36724b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int32_t GetXRSystemFlags();                                                                                              // [0x3672480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// float GetWorldToMetersScale(class UObject* WorldContext);                                                                // [0x36723f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);                                                                  // [0x3672290] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FString GetVersionString();                                                                                              // [0x3672370] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FTransform GetTrackingToWorldTransform(class UObject* WorldContext);                                                     // [0x36721d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index); // [0x3671df0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// TEnumAsByte<EHMDTrackingOrigin> GetTrackingOrigin();                                                                     // [0x3671db0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// float GetScreenPercentage();                                                                                             // [0x3671d80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // [0x3671b10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// float GetPixelDensity();                                                                                                 // [0x3671ae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);                                       // [0x3671910] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// int32_t GetNumOfTrackingSensors();                                                                                       // [0x36718e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void GetMotionControllerData(class UObject* WorldContext, EControllerHand Hand, FXRMotionControllerData& MotionControllerData); // [0x3671740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// TEnumAsByte<EHMDWornState> GetHMDWornState();                                                                            // [0x36715f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FName GetHMDDeviceName();                                                                                                // [0x36715b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void GetHMDData(class UObject* WorldContext, FXRHMDData& HMDData);                                                       // [0x36714d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetDeviceWorldPose(class UObject* WorldContext, FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position); // [0x36712a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void GetDevicePose(FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position); // [0x36710b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool GetControllerTransformForTime(class UObject* WorldContext, int32_t ControllerIndex, FName MotionSource, FTimespan Time, bool& bTimeWasUsed, FRotator& Orientation, FVector& Position, bool& bProvidedLinearVelocity, FVector& LinearVelocity, bool& bProvidedAngularVelocity, FVector& AngularVelocityRadPerSec); // [0x3670d20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// TArray<FXRDeviceId> EnumerateTrackedDevices(FName SystemId, EXRTrackedDeviceType DeviceType);                            // [0x3670bb0] Final|Native|Static|Public|BlueprintCallable 
	// void EnableLowPersistenceMode(bool bEnable);                                                                             // [0xfee950] Final|Native|Static|Public|BlueprintCallable 
	// bool EnableHMD(bool bEnable);                                                                                            // [0x3670860] Final|Native|Static|Public|BlueprintCallable 
	// void DisconnectRemoteXRDevice();                                                                                         // [0x3670840] Final|Native|Static|Public|BlueprintCallable 
	// TEnumAsByte<EXRDeviceConnectionResult> ConnectRemoteXRDevice(FString IpAddress, int32_t BitRate);                        // [0x36704b0] Final|Native|Static|Public|BlueprintCallable 
	// bool ConfigureGestures(FXRGestureConfig& GestureConfig);                                                                 // [0x3670410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void ClearXRTimedInputActionDelegate(FName& ActionPath);                                                                 // [0x3670380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CalibrateExternalTrackingToHMD(FTransform& ExternalTrackingTransform);                                              // [0x3670290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x00C0 (192 bytes) (0x0004E0 - 0x0005A0) align 16 pad: 0x0000
class UMotionControllerComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            PlayerIndex;                                                // 0x04E0   (0x0004)  
	EControllerHand                                    Hand;                                                       // 0x04E4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x04E5   (0x0003)  MISSED
	FName                                              MotionSource;                                               // 0x04E8   (0x000C)  
	bool                                               bDisableLowLatencyUpdate : 1;                               // 0x04F4:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x04F5   (0x0003)  MISSED
	ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x04F8   (0x0001)  
	bool                                               bDisplayDeviceModel;                                        // 0x04F9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x04FA   (0x0002)  MISSED
	FName                                              DisplayModelSource;                                         // 0x04FC   (0x000C)  
	class UStaticMesh*                                 CustomDisplayMesh;                                          // 0x0508   (0x0008)  
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                               // 0x0510   (0x0010)  
	unsigned char                                      UnknownData03_6[0x60];                                      // 0x0520   (0x0060)  MISSED
	class UPrimitiveComponent*                         DisplayComponent;                                           // 0x0580   (0x0008)  
	unsigned char                                      UnknownData04_7[0x18];                                      // 0x0588   (0x0018)  MISSED
	// void SetTrackingSource(EControllerHand NewSource);                                                                       // [0x36733a0] Final|Native|Public|BlueprintCallable 
	// void SetTrackingMotionSource(FName NewSource);                                                                           // [0x3673290] Final|Native|Public|BlueprintCallable 
	// void SetShowDeviceModel(bool bShowControllerModel);                                                                      // [0x3672f00] Final|Native|Public|BlueprintCallable 
	// void SetDisplayModelSource(FName NewDisplayModelSource);                                                                 // [0x3672c20] Final|Native|Public|BlueprintCallable 
	// void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);                                                            // [0x3672b90] Final|Native|Public|BlueprintCallable 
	// void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                        // [0x3672a40] Final|Native|Public|BlueprintCallable 
	// void OnMotionControllerUpdated();                                                                                        // [0x25a7960] Event|Protected|BlueprintEvent 
	// bool IsTracked();                                                                                                        // [0xc07f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EControllerHand GetTrackingSource();                                                                                     // [0x36721a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetParameterValue(FName InName, bool& bValueFound);                                                                // [0x36719e0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                     // [0x3671620] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);                                                         // [0x3672cc0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, FName SourceName);                                            // [0x3672870] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand Hand);                                        // [0x36727a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);                   // [0x3672710] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsMotionTrackedDeviceCountManagementNecessary();                                                                    // [0x36726e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsMotionSourceTracking(int32_t PlayerIndex, FName SourceName);                                                      // [0x3672600] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetMotionTrackingEnabledControllerCount();                                                                       // [0x36718b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int32_t GetMaximumMotionTrackedControllerCount();                                                                        // [0x3671710] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FName GetActiveTrackingSystemName();                                                                                     // [0x3670ce0] Final|Native|Static|Public|BlueprintCallable 
	// TArray<FName> EnumerateMotionSources();                                                                                  // [0x3670b30] Final|Native|Static|Public|BlueprintCallable 
	// bool EnableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);                                                // [0x3670a50] Final|Native|Static|Public|BlueprintCallable 
	// bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);                                            // [0x3670980] Final|Native|Static|Public|BlueprintCallable 
	// bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);                      // [0x36708f0] Final|Native|Static|Public|BlueprintCallable 
	// void DisableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);                                               // [0x3670770] Final|Native|Static|Public|BlueprintCallable 
	// void DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);                                           // [0x36706b0] Final|Native|Static|Public|BlueprintCallable 
	// void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);                                                   // [0x3670630] Final|Native|Static|Public|BlueprintCallable 
	// void DisableMotionTrackingOfAllControllers();                                                                            // [0x3670610] Final|Native|Static|Public|BlueprintCallable 
	// void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);                     // [0x3670590] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId); // [0x3670030] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform); // [0x366f9a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
/// Size: 0x0030 (48 bytes) (0x000038 - 0x000068) align 8 pad: 0x0000
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1380) /* FMulticastInlineDelegate */ __um(OnModelLoaded);                                     // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1381) /* FMulticastInlineDelegate */ __um(OnLoadFailure);                                     // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	class UPrimitiveComponent*                         SpawnedComponent;                                           // 0x0060   (0x0008)  
	// class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, class UPrimitiveComponent*& NewComponent); // [0x366fd70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform, class UPrimitiveComponent*& NewComponent); // [0x366f770] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void ShowLoadingScreen();                                                                                                // [0x36736a0] Final|Native|Static|Public|BlueprintCallable 
	// void SetLoadingScreen(class UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // [0x3672d40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void HideLoadingScreen();                                                                                                // [0x36724e0] Final|Native|Static|Public|BlueprintCallable 
	// void ClearLoadingScreenSplashes();                                                                                       // [0x3670360] Final|Native|Static|Public|BlueprintCallable 
	// void AddLoadingScreenSplash(class UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd); // [0x366fb70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 pad: 0x0000
struct FXRMotionControllerData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x000C)  
	FGuid                                              ApplicationInstanceID;                                      // 0x0010   (0x0010)  
	EXRVisualType                                      DeviceVisualType;                                           // 0x0020   (0x0001)  
	EControllerHand                                    HandIndex;                                                  // 0x0021   (0x0001)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x0022   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0023   (0x0001)  MISSED
	FVector                                            GripPosition;                                               // 0x0024   (0x000C)  
	FQuat                                              GripRotation;                                               // 0x0030   (0x0010)  
	FVector                                            AimPosition;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FQuat                                              AimRotation;                                                // 0x0050   (0x0010)  
	TArray<FVector>                                    HandKeyPositions;                                           // 0x0060   (0x0010)  
	TArray<FQuat>                                      HandKeyRotations;                                           // 0x0070   (0x0010)  
	TArray<float>                                      HandKeyRadii;                                               // 0x0080   (0x0010)  
	bool                                               bIsGrasped;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData03_7[0xF];                                       // 0x0091   (0x000F)  MISSED
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FXRHMDData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x000C)  
	FGuid                                              ApplicationInstanceID;                                      // 0x0010   (0x0010)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Position;                                                   // 0x0024   (0x000C)  
	FQuat                                              Rotation;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FXRDeviceId
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x000C)  
	int32_t                                            DeviceID;                                                   // 0x000C   (0x0004)  
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 1 pad: 0x0000
struct FXRGestureConfig
{ 
	bool                                               bTap;                                                       // 0x0000   (0x0001)  
	bool                                               bHold;                                                      // 0x0001   (0x0001)  
	ESpatialInputGestureAxis                           AxisGesture;                                                // 0x0002   (0x0001)  
	bool                                               bNavigationAxisX;                                           // 0x0003   (0x0001)  
	bool                                               bNavigationAxisY;                                           // 0x0004   (0x0001)  
	bool                                               bNavigationAxisZ;                                           // 0x0005   (0x0001)  
};

