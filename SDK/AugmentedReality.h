
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MRMesh

/// Enum /Script/AugmentedReality.EARTrackingState
/// Size: 0x01 (1 bytes)
enum class EARTrackingState : uint8_t
{
	EARTrackingState__Unknown                                                        = 0,
	EARTrackingState__Tracking                                                       = 1,
	EARTrackingState__NotTracking                                                    = 2,
	EARTrackingState__StoppedTracking                                                = 3
};

/// Enum /Script/AugmentedReality.EGeoAnchorComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EGeoAnchorComponentDebugMode : uint8_t
{
	EGeoAnchorComponentDebugMode__None                                               = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData                                        = 1
};

/// Enum /Script/AugmentedReality.EPoseComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EPoseComponentDebugMode : uint8_t
{
	EPoseComponentDebugMode__None                                                    = 0,
	EPoseComponentDebugMode__ShowSkeleton                                            = 1
};

/// Enum /Script/AugmentedReality.EQRCodeComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EQRCodeComponentDebugMode : uint8_t
{
	EQRCodeComponentDebugMode__None                                                  = 0,
	EQRCodeComponentDebugMode__ShowQRCode                                            = 1
};

/// Enum /Script/AugmentedReality.EImageComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EImageComponentDebugMode : uint8_t
{
	EImageComponentDebugMode__None                                                   = 0,
	EImageComponentDebugMode__ShowDetectedImage                                      = 1
};

/// Enum /Script/AugmentedReality.EARFaceTransformMixing
/// Size: 0x01 (1 bytes)
enum class EARFaceTransformMixing : uint8_t
{
	EARFaceTransformMixing__ComponentOnly                                            = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation                         = 1,
	EARFaceTransformMixing__ComponentWithTracked                                     = 2,
	EARFaceTransformMixing__TrackingOnly                                             = 3
};

/// Enum /Script/AugmentedReality.EFaceComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EFaceComponentDebugMode : uint8_t
{
	EFaceComponentDebugMode__None                                                    = 0,
	EFaceComponentDebugMode__ShowEyeVectors                                          = 1,
	EFaceComponentDebugMode__ShowFaceMesh                                            = 2
};

/// Enum /Script/AugmentedReality.EPlaneComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EPlaneComponentDebugMode : uint8_t
{
	EPlaneComponentDebugMode__None                                                   = 0,
	EPlaneComponentDebugMode__ShowNetworkRole                                        = 1,
	EPlaneComponentDebugMode__ShowClassification                                     = 2
};

/// Enum /Script/AugmentedReality.EARSessionConfigFlags
/// Size: 0x01 (1 bytes)
enum class EARSessionConfigFlags : uint8_t
{
	EARSessionConfigFlags__None                                                      = 0,
	EARSessionConfigFlags__GenerateMeshData                                          = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe                                 = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData                              = 4,
	EARSessionConfigFlags__GenerateNavMeshForMeshData                                = 8,
	EARSessionConfigFlags__UseMeshDataForOcclusion                                   = 16
};

/// Enum /Script/AugmentedReality.EARServicePermissionRequestResult
/// Size: 0x01 (1 bytes)
enum class EARServicePermissionRequestResult : uint8_t
{
	EARServicePermissionRequestResult__Granted                                       = 0,
	EARServicePermissionRequestResult__Denied                                        = 1
};

/// Enum /Script/AugmentedReality.EARServiceInstallRequestResult
/// Size: 0x01 (1 bytes)
enum class EARServiceInstallRequestResult : uint8_t
{
	EARServiceInstallRequestResult__Installed                                        = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible                              = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation                         = 2,
	EARServiceInstallRequestResult__FatalError                                       = 3
};

/// Enum /Script/AugmentedReality.EARServiceAvailability
/// Size: 0x01 (1 bytes)
enum class EARServiceAvailability : uint8_t
{
	EARServiceAvailability__UnknownError                                             = 0,
	EARServiceAvailability__UnknownChecking                                          = 1,
	EARServiceAvailability__UnknownTimedOut                                          = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable                              = 3,
	EARServiceAvailability__SupportedNotInstalled                                    = 4,
	EARServiceAvailability__SupportedVersionTooOld                                   = 5,
	EARServiceAvailability__SupportedInstalled                                       = 6
};

/// Enum /Script/AugmentedReality.EARGeoTrackingAccuracy
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingAccuracy : uint8_t
{
	EARGeoTrackingAccuracy__Undetermined                                             = 0,
	EARGeoTrackingAccuracy__Low                                                      = 1,
	EARGeoTrackingAccuracy__Medium                                                   = 2,
	EARGeoTrackingAccuracy__High                                                     = 3
};

/// Enum /Script/AugmentedReality.EARGeoTrackingStateReason
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingStateReason : uint8_t
{
	EARGeoTrackingStateReason__None                                                  = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation                                = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions                               = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow                                   = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable                                 = 4,
	EARGeoTrackingStateReason__WaitingForLocation                                    = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded                                      = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed                              = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck                           = 8
};

/// Enum /Script/AugmentedReality.EARGeoTrackingState
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingState : uint8_t
{
	EARGeoTrackingState__Initializing                                                = 0,
	EARGeoTrackingState__Localized                                                   = 1,
	EARGeoTrackingState__Localizing                                                  = 2,
	EARGeoTrackingState__NotAvailable                                                = 3
};

/// Enum /Script/AugmentedReality.EARSceneReconstruction
/// Size: 0x01 (1 bytes)
enum class EARSceneReconstruction : uint8_t
{
	EARSceneReconstruction__None                                                     = 0,
	EARSceneReconstruction__MeshOnly                                                 = 1,
	EARSceneReconstruction__MeshWithClassification                                   = 2
};

/// Enum /Script/AugmentedReality.EARSessionTrackingFeature
/// Size: 0x01 (1 bytes)
enum class EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None                                                  = 0,
	EARSessionTrackingFeature__PoseDetection2D                                       = 1,
	EARSessionTrackingFeature__PersonSegmentation                                    = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth                           = 3,
	EARSessionTrackingFeature__SceneDepth                                            = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth                                    = 5
};

/// Enum /Script/AugmentedReality.EARFaceTrackingUpdate
/// Size: 0x01 (1 bytes)
enum class EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo                                              = 0,
	EARFaceTrackingUpdate__CurvesOnly                                                = 1
};

/// Enum /Script/AugmentedReality.EAREnvironmentCaptureProbeType
/// Size: 0x01 (1 bytes)
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None                                             = 0,
	EAREnvironmentCaptureProbeType__Manual                                           = 1,
	EAREnvironmentCaptureProbeType__Automatic                                        = 2
};

/// Enum /Script/AugmentedReality.EARFrameSyncMode
/// Size: 0x01 (1 bytes)
enum class EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage                                        = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage                                     = 1
};

/// Enum /Script/AugmentedReality.EARLightEstimationMode
/// Size: 0x01 (1 bytes)
enum class EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None                                                     = 0,
	EARLightEstimationMode__AmbientLightEstimate                                     = 1,
	EARLightEstimationMode__DirectionalLightEstimate                                 = 2
};

/// Enum /Script/AugmentedReality.EARPlaneDetectionMode
/// Size: 0x01 (1 bytes)
enum class EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None                                                      = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection                                  = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection                                    = 2
};

/// Enum /Script/AugmentedReality.EARSessionType
/// Size: 0x01 (1 bytes)
enum class EARSessionType : uint8_t
{
	EARSessionType__None                                                             = 0,
	EARSessionType__Orientation                                                      = 1,
	EARSessionType__World                                                            = 2,
	EARSessionType__Face                                                             = 3,
	EARSessionType__Image                                                            = 4,
	EARSessionType__ObjectScanning                                                   = 5,
	EARSessionType__PoseTracking                                                     = 6,
	EARSessionType__GeoTracking                                                      = 7
};

/// Enum /Script/AugmentedReality.EARWorldAlignment
/// Size: 0x01 (1 bytes)
enum class EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity                                                       = 0,
	EARWorldAlignment__GravityAndHeading                                             = 1,
	EARWorldAlignment__Camera                                                        = 2
};

/// Enum /Script/AugmentedReality.EARDepthAccuracy
/// Size: 0x01 (1 bytes)
enum class EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown                                                         = 0,
	EARDepthAccuracy__Approximate                                                    = 1,
	EARDepthAccuracy__Accurate                                                       = 2
};

/// Enum /Script/AugmentedReality.EARDepthQuality
/// Size: 0x01 (1 bytes)
enum class EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown                                                          = 0,
	EARDepthQuality__Low                                                             = 1,
	EARDepthQuality__High                                                            = 2
};

/// Enum /Script/AugmentedReality.EARTextureType
/// Size: 0x01 (1 bytes)
enum class EARTextureType : uint8_t
{
	EARTextureType__Unknown                                                          = 0,
	EARTextureType__CameraImage                                                      = 1,
	EARTextureType__CameraDepth                                                      = 2,
	EARTextureType__EnvironmentCapture                                               = 3,
	EARTextureType__PersonSegmentationImage                                          = 4,
	EARTextureType__PersonSegmentationDepth                                          = 5,
	EARTextureType__SceneDepthMap                                                    = 6,
	EARTextureType__SceneDepthConfidenceMap                                          = 7
};

/// Enum /Script/AugmentedReality.EAREye
/// Size: 0x01 (1 bytes)
enum class EAREye : uint8_t
{
	EAREye__LeftEye                                                                  = 0,
	EAREye__RightEye                                                                 = 1
};

/// Enum /Script/AugmentedReality.EARFaceBlendShape
/// Size: 0x01 (1 bytes)
enum class EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft                                                  = 0,
	EARFaceBlendShape__EyeLookDownLeft                                               = 1,
	EARFaceBlendShape__EyeLookInLeft                                                 = 2,
	EARFaceBlendShape__EyeLookOutLeft                                                = 3,
	EARFaceBlendShape__EyeLookUpLeft                                                 = 4,
	EARFaceBlendShape__EyeSquintLeft                                                 = 5,
	EARFaceBlendShape__EyeWideLeft                                                   = 6,
	EARFaceBlendShape__EyeBlinkRight                                                 = 7,
	EARFaceBlendShape__EyeLookDownRight                                              = 8,
	EARFaceBlendShape__EyeLookInRight                                                = 9,
	EARFaceBlendShape__EyeLookOutRight                                               = 10,
	EARFaceBlendShape__EyeLookUpRight                                                = 11,
	EARFaceBlendShape__EyeSquintRight                                                = 12,
	EARFaceBlendShape__EyeWideRight                                                  = 13,
	EARFaceBlendShape__JawForward                                                    = 14,
	EARFaceBlendShape__JawLeft                                                       = 15,
	EARFaceBlendShape__JawRight                                                      = 16,
	EARFaceBlendShape__JawOpen                                                       = 17,
	EARFaceBlendShape__MouthClose                                                    = 18,
	EARFaceBlendShape__MouthFunnel                                                   = 19,
	EARFaceBlendShape__MouthPucker                                                   = 20,
	EARFaceBlendShape__MouthLeft                                                     = 21,
	EARFaceBlendShape__MouthRight                                                    = 22,
	EARFaceBlendShape__MouthSmileLeft                                                = 23,
	EARFaceBlendShape__MouthSmileRight                                               = 24,
	EARFaceBlendShape__MouthFrownLeft                                                = 25,
	EARFaceBlendShape__MouthFrownRight                                               = 26,
	EARFaceBlendShape__MouthDimpleLeft                                               = 27,
	EARFaceBlendShape__MouthDimpleRight                                              = 28,
	EARFaceBlendShape__MouthStretchLeft                                              = 29,
	EARFaceBlendShape__MouthStretchRight                                             = 30,
	EARFaceBlendShape__MouthRollLower                                                = 31,
	EARFaceBlendShape__MouthRollUpper                                                = 32,
	EARFaceBlendShape__MouthShrugLower                                               = 33,
	EARFaceBlendShape__MouthShrugUpper                                               = 34,
	EARFaceBlendShape__MouthPressLeft                                                = 35,
	EARFaceBlendShape__MouthPressRight                                               = 36,
	EARFaceBlendShape__MouthLowerDownLeft                                            = 37,
	EARFaceBlendShape__MouthLowerDownRight                                           = 38,
	EARFaceBlendShape__MouthUpperUpLeft                                              = 39,
	EARFaceBlendShape__MouthUpperUpRight                                             = 40,
	EARFaceBlendShape__BrowDownLeft                                                  = 41,
	EARFaceBlendShape__BrowDownRight                                                 = 42,
	EARFaceBlendShape__BrowInnerUp                                                   = 43,
	EARFaceBlendShape__BrowOuterUpLeft                                               = 44,
	EARFaceBlendShape__BrowOuterUpRight                                              = 45,
	EARFaceBlendShape__CheekPuff                                                     = 46,
	EARFaceBlendShape__CheekSquintLeft                                               = 47,
	EARFaceBlendShape__CheekSquintRight                                              = 48,
	EARFaceBlendShape__NoseSneerLeft                                                 = 49,
	EARFaceBlendShape__NoseSneerRight                                                = 50,
	EARFaceBlendShape__TongueOut                                                     = 51,
	EARFaceBlendShape__HeadYaw                                                       = 52,
	EARFaceBlendShape__HeadPitch                                                     = 53,
	EARFaceBlendShape__HeadRoll                                                      = 54,
	EARFaceBlendShape__LeftEyeYaw                                                    = 55,
	EARFaceBlendShape__LeftEyePitch                                                  = 56,
	EARFaceBlendShape__LeftEyeRoll                                                   = 57,
	EARFaceBlendShape__RightEyeYaw                                                   = 58,
	EARFaceBlendShape__RightEyePitch                                                 = 59,
	EARFaceBlendShape__RightEyeRoll                                                  = 60
};

/// Enum /Script/AugmentedReality.EARFaceTrackingDirection
/// Size: 0x01 (1 bytes)
enum class EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative                                           = 0,
	EARFaceTrackingDirection__FaceMirrored                                           = 1
};

/// Enum /Script/AugmentedReality.EARCandidateImageOrientation
/// Size: 0x01 (1 bytes)
enum class EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape                                          = 0,
	EARCandidateImageOrientation__Portrait                                           = 1
};

/// Enum /Script/AugmentedReality.EARAltitudeSource
/// Size: 0x01 (1 bytes)
enum class EARAltitudeSource : uint8_t
{
	EARAltitudeSource__Precise                                                       = 0,
	EARAltitudeSource__Coarse                                                        = 1,
	EARAltitudeSource__UserDefined                                                   = 2,
	EARAltitudeSource__Unknown                                                       = 3
};

/// Enum /Script/AugmentedReality.EARJointTransformSpace
/// Size: 0x01 (1 bytes)
enum class EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model                                                    = 0,
	EARJointTransformSpace__ParentJoint                                              = 1
};

/// Enum /Script/AugmentedReality.EARObjectClassification
/// Size: 0x01 (1 bytes)
enum class EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable                                           = 0,
	EARObjectClassification__Unknown                                                 = 1,
	EARObjectClassification__Wall                                                    = 2,
	EARObjectClassification__Ceiling                                                 = 3,
	EARObjectClassification__Floor                                                   = 4,
	EARObjectClassification__Table                                                   = 5,
	EARObjectClassification__Seat                                                    = 6,
	EARObjectClassification__Face                                                    = 7,
	EARObjectClassification__Image                                                   = 8,
	EARObjectClassification__World                                                   = 9,
	EARObjectClassification__SceneObject                                             = 10,
	EARObjectClassification__HandMesh                                                = 11,
	EARObjectClassification__Door                                                    = 12,
	EARObjectClassification__Window                                                  = 13
};

/// Enum /Script/AugmentedReality.EARPlaneOrientation
/// Size: 0x01 (1 bytes)
enum class EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal                                                  = 0,
	EARPlaneOrientation__Vertical                                                    = 1,
	EARPlaneOrientation__Diagonal                                                    = 2
};

/// Enum /Script/AugmentedReality.EARWorldMappingState
/// Size: 0x01 (1 bytes)
enum class EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable                                               = 0,
	EARWorldMappingState__StillMappingNotRelocalizable                               = 1,
	EARWorldMappingState__StillMappingRelocalizable                                  = 2,
	EARWorldMappingState__Mapped                                                     = 3
};

/// Enum /Script/AugmentedReality.EARSessionStatus
/// Size: 0x01 (1 bytes)
enum class EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted                                                     = 0,
	EARSessionStatus__Running                                                        = 1,
	EARSessionStatus__NotSupported                                                   = 2,
	EARSessionStatus__FatalError                                                     = 3,
	EARSessionStatus__PermissionNotGranted                                           = 4,
	EARSessionStatus__UnsupportedConfiguration                                       = 5,
	EARSessionStatus__Other                                                          = 6
};

/// Enum /Script/AugmentedReality.EARTrackingQualityReason
/// Size: 0x01 (1 bytes)
enum class EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None                                                   = 0,
	EARTrackingQualityReason__Initializing                                           = 1,
	EARTrackingQualityReason__Relocalizing                                           = 2,
	EARTrackingQualityReason__ExcessiveMotion                                        = 3,
	EARTrackingQualityReason__InsufficientFeatures                                   = 4,
	EARTrackingQualityReason__InsufficientLight                                      = 5,
	EARTrackingQualityReason__BadState                                               = 6
};

/// Enum /Script/AugmentedReality.EARTrackingQuality
/// Size: 0x01 (1 bytes)
enum class EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking                                                  = 0,
	EARTrackingQuality__OrientationOnly                                              = 1,
	EARTrackingQuality__OrientationAndPosition                                       = 2
};

/// Enum /Script/AugmentedReality.EARLineTraceChannels
/// Size: 0x01 (1 bytes)
enum class EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None                                                       = 0,
	EARLineTraceChannels__FeaturePoint                                               = 1,
	EARLineTraceChannels__GroundPlane                                                = 2,
	EARLineTraceChannels__PlaneUsingExtent                                           = 4,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon                                  = 8
};

/// Enum /Script/AugmentedReality.EARCaptureType
/// Size: 0x01 (1 bytes)
enum class EARCaptureType : uint8_t
{
	EARCaptureType__Camera                                                           = 0,
	EARCaptureType__QRCode                                                           = 1,
	EARCaptureType__SpatialMapping                                                   = 2,
	EARCaptureType__SceneUnderstanding                                               = 3
};

/// Class /Script/AugmentedReality.AROriginActor
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class AAROriginActor : public AActor
{ 
public:
};

/// Struct /Script/AugmentedReality.ARVideoFormat
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FARVideoFormat
{ 
	int32_t                                            FPS;                                                        // 0x0000   (0x0004)  
	int32_t                                            Width;                                                      // 0x0004   (0x0004)  
	int32_t                                            Height;                                                     // 0x0008   (0x0004)  
};

/// Class /Script/AugmentedReality.ARSessionConfig
/// Size: 0x00E0 (224 bytes) (0x000038 - 0x000118) align 8 pad: 0x0000
class UARSessionConfig : public UDataAsset
{ 
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                       // 0x0038   (0x0001)  
	bool                                               bGenerateCollisionForMeshData;                              // 0x0039   (0x0001)  
	bool                                               bGenerateNavMeshForMeshData;                                // 0x003A   (0x0001)  
	bool                                               bUseMeshDataForOcclusion;                                   // 0x003B   (0x0001)  
	bool                                               bRenderMeshDataInWireframe;                                 // 0x003C   (0x0001)  
	bool                                               bTrackSceneObjects;                                         // 0x003D   (0x0001)  
	bool                                               bUsePersonSegmentationForOcclusion;                         // 0x003E   (0x0001)  
	bool                                               bUseSceneDepthForOcclusion;                                 // 0x003F   (0x0001)  
	bool                                               bUseAutomaticImageScaleEstimation;                          // 0x0040   (0x0001)  
	bool                                               bUseStandardOnboardingUX;                                   // 0x0041   (0x0001)  
	EARWorldAlignment                                  WorldAlignment;                                             // 0x0042   (0x0001)  
	EARSessionType                                     SessionType;                                                // 0x0043   (0x0001)  
	EARPlaneDetectionMode                              PlaneDetectionMode;                                         // 0x0044   (0x0001)  
	bool                                               bHorizontalPlaneDetection;                                  // 0x0045   (0x0001)  
	bool                                               bVerticalPlaneDetection;                                    // 0x0046   (0x0001)  
	bool                                               bEnableAutoFocus;                                           // 0x0047   (0x0001)  
	EARLightEstimationMode                             LightEstimationMode;                                        // 0x0048   (0x0001)  
	EARFrameSyncMode                                   FrameSyncMode;                                              // 0x0049   (0x0001)  
	bool                                               bEnableAutomaticCameraOverlay;                              // 0x004A   (0x0001)  
	bool                                               bEnableAutomaticCameraTracking;                             // 0x004B   (0x0001)  
	bool                                               bResetCameraTracking;                                       // 0x004C   (0x0001)  
	bool                                               bResetTrackedObjects;                                       // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004E   (0x0002)  MISSED
	TArray<class UARCandidateImage*>                   CandidateImages;                                            // 0x0050   (0x0010)  
	int32_t                                            MaxNumSimultaneousImagesTracked;                            // 0x0060   (0x0004)  
	EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                                // 0x0064   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	TArray<char>                                       WorldMapData;                                               // 0x0068   (0x0010)  
	TArray<class UARCandidateObject*>                  CandidateObjects;                                           // 0x0078   (0x0010)  
	FARVideoFormat                                     DesiredVideoFormat;                                         // 0x0088   (0x000C)  
	bool                                               bUseOptimalVideoFormat;                                     // 0x0094   (0x0001)  
	EARFaceTrackingDirection                           FaceTrackingDirection;                                      // 0x0095   (0x0001)  
	EARFaceTrackingUpdate                              FaceTrackingUpdate;                                         // 0x0096   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x0097   (0x0001)  MISSED
	int32_t                                            MaxNumberOfTrackedFaces;                                    // 0x0098   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	TArray<char>                                       SerializedARCandidateImageDatabase;                         // 0x00A0   (0x0010)  
	EARSessionTrackingFeature                          EnabledSessionTrackingFeature;                              // 0x00B0   (0x0001)  
	EARSceneReconstruction                             SceneReconstructionMethod;                                  // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x00B2   (0x0006)  MISSED
	class UClass*                                      PlaneComponentClass;                                        // 0x00B8   (0x0008)  
	class UClass*                                      PointComponentClass;                                        // 0x00C0   (0x0008)  
	class UClass*                                      FaceComponentClass;                                         // 0x00C8   (0x0008)  
	class UClass*                                      ImageComponentClass;                                        // 0x00D0   (0x0008)  
	class UClass*                                      QRCodeComponentClass;                                       // 0x00D8   (0x0008)  
	class UClass*                                      PoseComponentClass;                                         // 0x00E0   (0x0008)  
	class UClass*                                      EnvironmentProbeComponentClass;                             // 0x00E8   (0x0008)  
	class UClass*                                      ObjectComponentClass;                                       // 0x00F0   (0x0008)  
	class UClass*                                      MeshComponentClass;                                         // 0x00F8   (0x0008)  
	class UClass*                                      GeoAnchorComponentClass;                                    // 0x0100   (0x0008)  
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0108   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0110   (0x0008)  
	// bool ShouldResetTrackedObjects();                                                                                        // [0x365b1d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool ShouldResetCameraTracking();                                                                                        // [0x365b1a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool ShouldRenderCameraOverlay();                                                                                        // [0x365b170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool ShouldEnableCameraTracking();                                                                                       // [0x365b140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool ShouldEnableAutoFocus();                                                                                            // [0x365b110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void SetWorldMapData(TArray<char> WorldMapData);                                                                         // [0x365b020] Final|Native|Public|BlueprintCallable 
	// void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);                              // [0x365afa0] Final|Native|Public|BlueprintCallable 
	// void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);                                   // [0x365af20] Final|Native|Public|BlueprintCallable 
	// void SetResetTrackedObjects(bool bNewValue);                                                                             // [0x365ae90] Final|Native|Public|BlueprintCallable 
	// void SetResetCameraTracking(bool bNewValue);                                                                             // [0x365ae00] Final|Native|Public|BlueprintCallable 
	// void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);                                                              // [0x365ac90] Final|Native|Public|BlueprintCallable 
	// void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);                                                     // [0x365ac10] Final|Native|Public|BlueprintCallable 
	// void SetEnableAutoFocus(bool bNewValue);                                                                                 // [0x365aaf0] Final|Native|Public|BlueprintCallable 
	// void SetDesiredVideoFormat(FARVideoFormat NewFormat);                                                                    // [0x365aa50] Final|Native|Public|BlueprintCallable 
	// void SetCandidateObjectList(TArray<UARCandidateObject*>& InCandidateObjects);                                            // [0x365a9a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// TArray<char> GetWorldMapData();                                                                                          // [0x365a620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARWorldAlignment GetWorldAlignment();                                                                                   // [0x365a5f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARSessionType GetSessionType();                                                                                         // [0x365a590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARSceneReconstruction GetSceneReconstructionMethod();                                                                   // [0x365a560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARPlaneDetectionMode GetPlaneDetectionMode();                                                                           // [0x365a530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetMaxNumSimultaneousImagesTracked();                                                                            // [0x365a4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARLightEstimationMode GetLightEstimationMode();                                                                         // [0xf64d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARFrameSyncMode GetFrameSyncMode();                                                                                     // [0x365a3e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARFaceTrackingUpdate GetFaceTrackingUpdate();                                                                           // [0x365a3b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARFaceTrackingDirection GetFaceTrackingDirection();                                                                     // [0x365a380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();                                                         // [0x32c2e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARSessionTrackingFeature GetEnabledSessionTrackingFeature();                                                            // [0x365a350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FARVideoFormat GetDesiredVideoFormat();                                                                                  // [0x365a310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<UARCandidateObject*> GetCandidateObjectList();                                                                    // [0x365a240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<UARCandidateImage*> GetCandidateImageList();                                                                      // [0x365a1b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void AddCandidateObject(class UARCandidateObject* CandidateObject);                                                      // [0x3659bd0] Final|Native|Public|BlueprintCallable 
	// void AddCandidateImage(class UARCandidateImage* NewCandidateImage);                                                      // [0x3659b40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARLightEstimate
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UARLightEstimate : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARBasicLightEstimate
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UARBasicLightEstimate : public UARLightEstimate
{ 
public:
	float                                              AmbientIntensityLumens;                                     // 0x0030   (0x0004)  
	float                                              AmbientColorTemperatureKelvin;                              // 0x0034   (0x0004)  
	FLinearColor                                       AmbientColor;                                               // 0x0038   (0x0010)  
	// float GetAmbientIntensityLumens();                                                                                       // [0x365a180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetAmbientColorTemperatureKelvin();                                                                                // [0x365a150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FLinearColor GetAmbientColor();                                                                                          // [0x365a110] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARCandidateImage
/// Size: 0x0028 (40 bytes) (0x000038 - 0x000060) align 8 pad: 0x0000
class UARCandidateImage : public UDataAsset
{ 
public:
	class UTexture2D*                                  CandidateTexture;                                           // 0x0038   (0x0008)  
	FString                                            FriendlyName;                                               // 0x0040   (0x0010)  
	float                                              Width;                                                      // 0x0050   (0x0004)  
	float                                              Height;                                                     // 0x0054   (0x0004)  
	EARCandidateImageOrientation                       Orientation;                                                // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0059   (0x0007)  MISSED
	// float GetPhysicalWidth();                                                                                                // [0xc104e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetPhysicalHeight();                                                                                               // [0xc10630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARCandidateImageOrientation GetOrientation();                                                                           // [0x365f910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetFriendlyName();                                                                                               // [0x365f500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UTexture2D* GetCandidateTexture();                                                                                 // [0xc10500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARActor
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class AARActor : public AActor
{ 
public:
	// class UARComponent* AddARComponent(class UClass* InComponentClass, FGuid& NativeID);                                     // [0x364d220] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARBlueprintLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void UnpinComponent(class USceneComponent* ComponentToUnpin);                                                            // [0x36504d0] Final|Native|Static|Public|BlueprintCallable 
	// bool ToggleARCapture(bool bOnOff, EARCaptureType CaptureType);                                                           // [0x3650400] Final|Native|Static|Public|BlueprintCallable 
	// void StopARSession();                                                                                                    // [0x36503e0] Final|Native|Static|Public|BlueprintCallable 
	// void StartARSession(class UARSessionConfig* SessionConfig);                                                              // [0x3650360] Final|Native|Static|Public|BlueprintCallable 
	// void SetEnabledXRCamera(bool bOnOff);                                                                                    // [0x36502e0] Final|Native|Static|Public|BlueprintCallable 
	// void SetARWorldScale(float InWorldScale);                                                                                // [0x3650190] Final|Native|Static|Public|BlueprintCallable 
	// void SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection); // [0x3650000] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void SetAlignmentTransform(FTransform& InAlignmentTransform);                                                            // [0x3650210] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool SaveARPinToLocalStore(FName InSaveName, class UARPin* InPin);                                                       // [0x364ff20] Final|Native|Static|Public|BlueprintCallable 
	// FIntPoint ResizeXRCamera(FIntPoint& InSize);                                                                             // [0x364fe80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void RemovePin(class UARPin* PinToRemove);                                                                               // [0x364fe00] Final|Native|Static|Public|BlueprintCallable 
	// void RemoveARPinFromLocalStore(FName InSaveName);                                                                        // [0x364fd50] Final|Native|Static|Public|BlueprintCallable 
	// void RemoveAllARPinsFromLocalStore();                                                                                    // [0x364fde0] Final|Native|Static|Public|BlueprintCallable 
	// class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, FARTraceResult& TraceResult, FName DebugName); // [0x364fbb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin);                                      // [0x364fae0] Final|Native|Static|Public|BlueprintCallable 
	// class UARPin* PinComponent(class USceneComponent* ComponentToPin, FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, FName DebugName); // [0x364f920] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void PauseARSession();                                                                                                   // [0x364f900] Final|Native|Static|Public|BlueprintCallable 
	// TMap<FName, UARPin*> LoadARPinsFromLocalStore();                                                                         // [0x364f830] Final|Native|Static|Public|BlueprintCallable 
	// TArray<FARTraceResult> LineTraceTrackedObjects3D(FVector Start, FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // [0x364f420] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// TArray<FARTraceResult> LineTraceTrackedObjects(FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // [0x364f650] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// bool IsSessionTypeSupported(EARSessionType SessionType);                                                                 // [0x364f3a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);    // [0x364f2e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);       // [0x364f220] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsARSupported();                                                                                                    // [0x364f1f0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsARPinLocalStoreSupported();                                                                                       // [0x364f1c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsARPinLocalStoreReady();                                                                                           // [0x364f190] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// EARWorldMappingState GetWorldMappingStatus();                                                                            // [0x364f160] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// EARTrackingQualityReason GetTrackingQualityReason();                                                                     // [0x364f130] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// EARTrackingQuality GetTrackingQuality();                                                                                 // [0x364f100] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);                                             // [0x364ee30] Final|Native|Static|Public|BlueprintCallable 
	// class UARSessionConfig* GetSessionConfig();                                                                              // [0x364ee00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// TArray<FVector> GetPointCloud();                                                                                         // [0x364ed80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class UARTexture* GetPersonSegmentationImage();                                                                          // [0x364ed50] Final|Native|Static|Public|BlueprintCallable 
	// class UARTexture* GetPersonSegmentationDepthImage();                                                                     // [0x364ed20] Final|Native|Static|Public|BlueprintCallable 
	// bool GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff); // [0x364eb90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// int32_t GetNumberOfTrackedFacesSupported();                                                                              // [0x364eb60] Final|Native|Static|Public|BlueprintCallable 
	// class UARLightEstimate* GetCurrentLightEstimate();                                                                       // [0x364e6d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics);                                                      // [0x364e610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class UARTextureCameraImage* GetCameraImage();                                                                           // [0x364e5e0] Final|Native|Static|Public|BlueprintCallable 
	// class UARTextureCameraDepth* GetCameraDepth();                                                                           // [0x364e5b0] Final|Native|Static|Public|BlueprintCallable 
	// float GetARWorldScale();                                                                                                 // [0x364df90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class UARTexture* GetARTexture(EARTextureType TextureType);                                                              // [0x364df10] Final|Native|Static|Public|BlueprintCallable 
	// FARSessionStatus GetARSessionStatus();                                                                                   // [0x364de80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// TArray<UARTrackedPose*> GetAllTrackedPoses();                                                                            // [0x364e530] Final|Native|Static|Public|BlueprintCallable 
	// TArray<UARTrackedPoint*> GetAllTrackedPoints();                                                                          // [0x364e4b0] Final|Native|Static|Public|BlueprintCallable 
	// TArray<UARPlaneGeometry*> GetAllTrackedPlanes();                                                                         // [0x364e430] Final|Native|Static|Public|BlueprintCallable 
	// TArray<UARTrackedImage*> GetAllTrackedImages();                                                                          // [0x364e3b0] Final|Native|Static|Public|BlueprintCallable 
	// TArray<UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();                                             // [0x364e330] Final|Native|Static|Public|BlueprintCallable 
	// TArray<FARPose2D> GetAllTracked2DPoses();                                                                                // [0x364e1f0] Final|Native|Static|Public|BlueprintCallable 
	// TArray<UARPin*> GetAllPins();                                                                                            // [0x364e170] Final|Native|Static|Public|BlueprintCallable 
	// TArray<UARTrackedGeometry*> GetAllGeometriesByClass(class UClass* GeometryClass);                                        // [0x364e0a0] Final|Native|Static|Public|BlueprintCallable 
	// TArray<UARTrackedGeometry*> GetAllGeometries();                                                                          // [0x364e020] Final|Native|Static|Public|BlueprintCallable 
	// FTransform GetAlignmentTransform();                                                                                      // [0x364dfc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// TArray<UARTrackedPoint*> FindTrackedPointsByName(FString PointName);                                                     // [0x364dda0] Final|Native|Static|Public|BlueprintCallable 
	// void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds); // [0x364dc00] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds); // [0x364da60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void CalculateClosestIntersection(TArray<FVector>& StartPoints, TArray<FVector>& EndPoints, FVector& ClosestIntersection); // [0x364d900] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void CalculateAlignmentTransform(FTransform& TransformInFirstCoordinateSystem, FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform); // [0x364d710] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool AddTrackedPointWithName(FTransform& WorldTransform, FString PointName, bool bDeletePointsWithSameName);             // [0x364d590] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth); // [0x364d3f0] Final|Native|Static|Public|BlueprintCallable 
	// bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);                                                 // [0x364d310] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARTraceResultLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// class UARTrackedGeometry* GetTrackedGeometry(FARTraceResult& TraceResult);                                               // [0x364f000] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// EARLineTraceChannels GetTraceChannel(FARTraceResult& TraceResult);                                                       // [0x364ef00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FTransform GetLocalTransform(FARTraceResult& TraceResult);                                                               // [0x364ea40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FTransform GetLocalToWorldTransform(FARTraceResult& TraceResult);                                                        // [0x364e920] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FTransform GetLocalToTrackingTransform(FARTraceResult& TraceResult);                                                     // [0x364e800] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// float GetDistanceFromCamera(FARTraceResult& TraceResult);                                                                // [0x364e700] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
/// Size: 0x0030 (48 bytes) (0x000058 - 0x000088) align 8 pad: 0x0000
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,1287) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1288) /* FMulticastInlineDelegate */ __um(OnFailed);                                          // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0078   (0x0010)  MISSED
	// class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);                               // [0x364d190] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
/// Size: 0x0048 (72 bytes) (0x000058 - 0x0000A0) align 8 pad: 0x0000
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,1289) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1290) /* FMulticastInlineDelegate */ __um(OnFailed);                                          // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0078   (0x0028)  MISSED
	// class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, FVector Location, FVector Extent); // [0x364d060] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARComponent
/// Size: 0x0088 (136 bytes) (0x000218 - 0x0002A0) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class UARComponent : public USceneComponent
{ 
public:
	FGuid                                              NativeID;                                                   // 0x0218   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0228   (0x0030)  MISSED
	bool                                               bUseDefaultReplication;                                     // 0x0258   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0259   (0x0007)  MISSED
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0260   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0268   (0x0008)  
	class UMRMeshComponent*                            MRMeshComponent;                                            // 0x0270   (0x0008)  
	class UARTrackedGeometry*                          MyTrackedGeometry;                                          // 0x0278   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0280   (0x0018)  MISSED
	// void UpdateVisualization();                                                                                              // [0x3657aa0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// void SetNativeID(FGuid NativeID);                                                                                        // [0x3657630] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void ReceiveRemove();                                                                                                    // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnRep_Payload();                                                                                                    // [0x36569f0] Native|Protected     
	// class UMRMeshComponent* GetMRMesh();                                                                                     // [0x3656790] Final|Native|Public|BlueprintCallable|BlueprintPure 
};
#pragma pack(pop)

/// Struct /Script/AugmentedReality.ARSessionPayload
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FARSessionPayload
{ 
	int32_t                                            ConfigFlags;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0008   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARPlaneUpdatePayload
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 pad: 0x0000
struct FARPlaneUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	FVector                                            Center;                                                     // 0x0050   (0x000C)  
	FVector                                            Extents;                                                    // 0x005C   (0x000C)  
	TArray<FVector>                                    BoundaryVertices;                                           // 0x0068   (0x0010)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/AugmentedReality.ARPlaneComponent
/// Size: 0x0088 (136 bytes) (0x000298 - 0x000320) align 16 pad: 0x0000
class UARPlaneComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0298   (0x0008)  MISSED
	FARPlaneUpdatePayload                              ReplicatedPayload;                                          // 0x02A0   (0x0080)  
	// void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);                                                  // [0x3657810] Final|Native|Static|Public|BlueprintCallable 
	// void SetObjectClassificationDebugColors(TMap<EARObjectClassification, FLinearColor>& InColors);                          // [0x36576d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void ServerUpdatePayload(FARPlaneUpdatePayload NewPayload);                                                              // [0x36570b0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ReceiveUpdate(FARPlaneUpdatePayload& Payload);                                                                      // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void ReceiveAdd(FARPlaneUpdatePayload& Payload);                                                                         // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// TMap<EARObjectClassification, FLinearColor> GetObjectClassificationDebugColors();                                        // [0x36567b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AugmentedReality.ARPointUpdatePayload
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FARPointUpdatePayload
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Class /Script/AugmentedReality.ARPointComponent
/// Size: 0x0008 (8 bytes) (0x000298 - 0x0002A0) align 16 pad: 0x0000
class UARPointComponent : public UARComponent
{ 
public:
	FARPointUpdatePayload                              ReplicatedPayload;                                          // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0299   (0x0007)  MISSED
	// void ServerUpdatePayload(FARPointUpdatePayload NewPayload);                                                              // [0x3657200] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ReceiveUpdate(FARPointUpdatePayload& Payload);                                                                      // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void ReceiveAdd(FARPointUpdatePayload& Payload);                                                                         // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARFaceUpdatePayload
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FARFaceUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	FVector                                            LeftEyePosition;                                            // 0x0018   (0x000C)  
	FVector                                            RightEyePosition;                                           // 0x0024   (0x000C)  
	FVector                                            LookAtTarget;                                               // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AugmentedReality.ARFaceComponent
/// Size: 0x0068 (104 bytes) (0x000298 - 0x000300) align 16 pad: 0x0000
class UARFaceComponent : public UARComponent
{ 
public:
	EARFaceTransformMixing                             TransformSetting;                                           // 0x0298   (0x0001)  
	bool                                               bUpdateVertexNormal;                                        // 0x0299   (0x0001)  
	bool                                               bFaceOutOfScreen;                                           // 0x029A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x029B   (0x0005)  MISSED
	FARFaceUpdatePayload                               ReplicatedPayload;                                          // 0x02A0   (0x0040)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x02E0   (0x0020)  MISSED
	// void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);                                                    // [0x36574e0] Final|Native|Static|Public|BlueprintCallable 
	// void ServerUpdatePayload(FARFaceUpdatePayload NewPayload);                                                               // [0x3656c70] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ReceiveUpdate(FARFaceUpdatePayload& Payload);                                                                       // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void ReceiveAdd(FARFaceUpdatePayload& Payload);                                                                          // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARImageUpdatePayload
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 pad: 0x0000
struct FARImageUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	class UARCandidateImage*                           DetectedImage;                                              // 0x0050   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0058   (0x0008)  
};

/// Class /Script/AugmentedReality.ARImageComponent
/// Size: 0x0068 (104 bytes) (0x000298 - 0x000300) align 16 pad: 0x0000
class UARImageComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0298   (0x0008)  MISSED
	FARImageUpdatePayload                              ReplicatedPayload;                                          // 0x02A0   (0x0060)  
	// void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);                                                  // [0x36575c0] Final|Native|Static|Public|BlueprintCallable 
	// void ServerUpdatePayload(FARImageUpdatePayload NewPayload);                                                              // [0x3656e70] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ReceiveUpdate(FARImageUpdatePayload& Payload);                                                                      // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void ReceiveAdd(FARImageUpdatePayload& Payload);                                                                         // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARQRCodeUpdatePayload
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 pad: 0x0000
struct FARQRCodeUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	FVector                                            Extents;                                                    // 0x0050   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            QRCode;                                                     // 0x0060   (0x0010)  
};

/// Class /Script/AugmentedReality.ARQRCodeComponent
/// Size: 0x0078 (120 bytes) (0x000298 - 0x000310) align 16 pad: 0x0000
class UARQRCodeComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0298   (0x0008)  MISSED
	FARQRCodeUpdatePayload                             ReplicatedPayload;                                          // 0x02A0   (0x0070)  
	// void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);                                                // [0x36578f0] Final|Native|Static|Public|BlueprintCallable 
	// void ServerUpdatePayload(FARQRCodeUpdatePayload NewPayload);                                                             // [0x36573c0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ReceiveUpdate(FARQRCodeUpdatePayload& Payload);                                                                     // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void ReceiveAdd(FARQRCodeUpdatePayload& Payload);                                                                        // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARPoseUpdatePayload
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FARPoseUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0030   (0x0010)  
};

/// Class /Script/AugmentedReality.ARPoseComponent
/// Size: 0x0048 (72 bytes) (0x000298 - 0x0002E0) align 16 pad: 0x0000
class UARPoseComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0298   (0x0008)  MISSED
	FARPoseUpdatePayload                               ReplicatedPayload;                                          // 0x02A0   (0x0040)  
	// void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);                                                    // [0x3657880] Final|Native|Static|Public|BlueprintCallable 
	// void ServerUpdatePayload(FARPoseUpdatePayload NewPayload);                                                               // [0x36572b0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ReceiveUpdate(FARPoseUpdatePayload& Payload);                                                                       // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void ReceiveAdd(FARPoseUpdatePayload& Payload);                                                                          // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.AREnvironmentProbeUpdatePayload
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 pad: 0x0000
struct FAREnvironmentProbeUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)  
};

/// Class /Script/AugmentedReality.AREnvironmentProbeComponent
/// Size: 0x0038 (56 bytes) (0x000298 - 0x0002D0) align 16 pad: 0x0000
class UAREnvironmentProbeComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0298   (0x0008)  MISSED
	FAREnvironmentProbeUpdatePayload                   ReplicatedPayload;                                          // 0x02A0   (0x0030)  
	// void ServerUpdatePayload(FAREnvironmentProbeUpdatePayload NewPayload);                                                   // [0x3656b90] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ReceiveUpdate(FAREnvironmentProbeUpdatePayload& Payload);                                                           // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void ReceiveAdd(FAREnvironmentProbeUpdatePayload& Payload);                                                              // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARObjectUpdatePayload
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 pad: 0x0000
struct FARObjectUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0030)  
};

/// Class /Script/AugmentedReality.ARObjectComponent
/// Size: 0x0038 (56 bytes) (0x000298 - 0x0002D0) align 16 pad: 0x0000
class UARObjectComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0298   (0x0008)  MISSED
	FARObjectUpdatePayload                             ReplicatedPayload;                                          // 0x02A0   (0x0030)  
	// void ServerUpdatePayload(FARObjectUpdatePayload NewPayload);                                                             // [0x3656b90] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ReceiveUpdate(FARObjectUpdatePayload& Payload);                                                                     // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void ReceiveAdd(FARObjectUpdatePayload& Payload);                                                                        // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARMeshUpdatePayload
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 pad: 0x0000
struct FARMeshUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0051   (0x000F)  MISSED
};

/// Class /Script/AugmentedReality.ARMeshComponent
/// Size: 0x0068 (104 bytes) (0x000298 - 0x000300) align 16 pad: 0x0000
class UARMeshComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0298   (0x0008)  MISSED
	FARMeshUpdatePayload                               ReplicatedPayload;                                          // 0x02A0   (0x0060)  
	// void ServerUpdatePayload(FARMeshUpdatePayload NewPayload);                                                               // [0x3656fa0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ReceiveUpdate(FARMeshUpdatePayload& Payload);                                                                       // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void ReceiveAdd(FARMeshUpdatePayload& Payload);                                                                          // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARGeoAnchorUpdatePayload
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 pad: 0x0000
struct FARGeoAnchorUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0030)  
	float                                              Longitude;                                                  // 0x0050   (0x0004)  
	float                                              Latitude;                                                   // 0x0054   (0x0004)  
	float                                              AltitudeMeters;                                             // 0x0058   (0x0004)  
	EARAltitudeSource                                  AltitudeSource;                                             // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	FString                                            AnchorName;                                                 // 0x0060   (0x0010)  
};

/// Class /Script/AugmentedReality.ARGeoAnchorComponent
/// Size: 0x0078 (120 bytes) (0x000298 - 0x000310) align 16 pad: 0x0000
class UARGeoAnchorComponent : public UARComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0298   (0x0008)  MISSED
	FARGeoAnchorUpdatePayload                          ReplicatedPayload;                                          // 0x02A0   (0x0070)  
	// void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);                                          // [0x3657550] Final|Native|Static|Public|BlueprintCallable 
	// void ServerUpdatePayload(FARGeoAnchorUpdatePayload NewPayload);                                                          // [0x3656d40] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// void ReceiveUpdate(FARGeoAnchorUpdatePayload& Payload);                                                                  // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void ReceiveAdd(FARGeoAnchorUpdatePayload& Payload);                                                                     // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARDependencyHandler
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UARDependencyHandler : public UObject
{ 
public:
	// void StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo); // [0x3657960] Native|Public|BlueprintCallable 
	// void RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult); // [0x3656a10] Native|Public|HasOutParms|BlueprintCallable 
	// void InstallARService(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult); // [0x36568a0] Native|Public|HasOutParms|BlueprintCallable 
	// class UARDependencyHandler* GetARDependencyHandler();                                                                    // [0x3656630] Final|Native|Static|Public|BlueprintCallable 
	// void CheckARServiceAvailability(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability); // [0x3656350] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGeoTrackingSupport
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UARGeoTrackingSupport : public UObject
{ 
public:
	// class UARGeoTrackingSupport* GetGeoTrackingSupport();                                                                    // [0x3656760] Final|Native|Static|Public|BlueprintCallable 
	// EARGeoTrackingStateReason GetGeoTrackingStateReason();                                                                   // [0x3633540] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARGeoTrackingState GetGeoTrackingState();                                                                               // [0x1779ea0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARGeoTrackingAccuracy GetGeoTrackingAccuracy();                                                                         // [0x3656730] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, FString OptionalAnchorName); // [0x3656190] Native|Public|BlueprintCallable 
	// bool AddGeoAnchorAtLocation(float Longitude, float Latitude, FString OptionalAnchorName);                                // [0x3656010] Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
/// Size: 0x0050 (80 bytes) (0x000058 - 0x0000A8) align 8 pad: 0x0000
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,1291) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1292) /* FMulticastInlineDelegate */ __um(OnFailed);                                          // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0078   (0x0030)  MISSED
	// void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error);                               // [0x25a7960] MulticastDelegate|Public|Delegate 
	// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude); // [0x3656530] Final|Native|Static|Public|BlueprintCallable 
	// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(class UObject* WorldContextObject); // [0x36564a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
/// Size: 0x0050 (80 bytes) (0x000058 - 0x0000A8) align 8 pad: 0x0000
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,1293) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1294) /* FMulticastInlineDelegate */ __um(OnFailed);                                          // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0078   (0x0030)  MISSED
	// void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error);          // [0x25a7960] MulticastDelegate|Public|Delegate 
	// class UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, FVector& WorldPosition); // [0x3656660] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARLifeCycleComponent
/// Size: 0x0038 (56 bytes) (0x000218 - 0x000250) align 16 pad: 0x0000
class UARLifeCycleComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,1295) /* FMulticastInlineDelegate */ __um(OnARActorSpawnedDelegate);                          // 0x0218   (0x0010)  
	SDK_UNDEFINED(16,1296) /* FMulticastInlineDelegate */ __um(OnARActorToBeDestroyedDelegate);                    // 0x0228   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0238   (0x0018)  MISSED
	// void ServerSpawnARActor(class UClass* ComponentClass, FGuid NativeID);                                                   // [0x365a770] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate 
	// void ServerDestroyARActor(class AARActor* Actor);                                                                        // [0x365a660] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor);                                     // [0x25a7960] MulticastDelegate|Public|Delegate 
	// void InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, FGuid NativeID, class AARActor* SpawnedActor); // [0x25a7960] MulticastDelegate|Public|Delegate|HasDefaults 
};

/// Class /Script/AugmentedReality.ARPin
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000F0) align 16 pad: 0x0000
class UARPin : public UObject
{ 
public:
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0030   (0x0008)  
	class USceneComponent*                             PinnedComponent;                                            // 0x0038   (0x0008)  
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0030)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x0070   (0x0030)  
	EARTrackingState                                   TrackingState;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x27];                                      // 0x00A1   (0x0027)  MISSED
	SDK_UNDEFINED(16,1297) /* FMulticastInlineDelegate */ __um(OnARTrackingStateChanged);                          // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,1298) /* FMulticastInlineDelegate */ __um(OnARTransformUpdated);                              // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00E8   (0x0008)  MISSED
	// EARTrackingState GetTrackingState();                                                                                     // [0xfd2360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UARTrackedGeometry* GetTrackedGeometry();                                                                          // [0x365a5c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class USceneComponent* GetPinnedComponent();                                                                             // [0x365a500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FTransform GetLocalToWorldTransform();                                                                                   // [0x365a470] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FTransform GetLocalToTrackingTransform();                                                                                // [0x365a410] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FName GetDebugName();                                                                                                    // [0x365a2d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void DebugDraw(class UWorld* World, FLinearColor& Color, float Scale, float PersistForSeconds);                          // [0x3659f80] Native|Public|HasOutParms|HasDefaults|Const 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameMode
/// Size: 0x0068 (104 bytes) (0x000398 - 0x000400) align 8 pad: 0x0000
class AARSharedWorldGameMode : public AGameMode
{ 
public:
	int32_t                                            BufferSizePerChunk;                                         // 0x0398   (0x0004)  
	unsigned char                                      UnknownData00_7[0x64];                                      // 0x039C   (0x0064)  MISSED
	// void SetPreviewImageData(TArray<char> imageData);                                                                        // [0x365ad10] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// void SetARWorldSharingIsReady();                                                                                         // [0x365a980] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// void SetARSharedWorldData(TArray<char> ARWorldData);                                                                     // [0x365a890] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// class AARSharedWorldGameState* GetARSharedWorldGameState();                                                              // [0x365a0e0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameState
/// Size: 0x0038 (56 bytes) (0x000320 - 0x000358) align 8 pad: 0x0000
class AARSharedWorldGameState : public AGameState
{ 
public:
	TArray<char>                                       PreviewImageData;                                           // 0x0320   (0x0010)  
	TArray<char>                                       ARWorldData;                                                // 0x0330   (0x0010)  
	int32_t                                            PreviewImageBytesTotal;                                     // 0x0340   (0x0004)  
	int32_t                                            ARWorldBytesTotal;                                          // 0x0344   (0x0004)  
	int32_t                                            PreviewImageBytesDelivered;                                 // 0x0348   (0x0004)  
	int32_t                                            ARWorldBytesDelivered;                                      // 0x034C   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0350   (0x0008)  MISSED
	// void K2_OnARWorldMapIsReady();                                                                                           // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARSharedWorldPlayerController
/// Size: 0x0008 (8 bytes) (0x000618 - 0x000620) align 8 pad: 0x0000
class AARSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0618   (0x0008)  MISSED
	// void ServerMarkReadyForReceiving();                                                                                      // [0x365a720] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// void ClientUpdatePreviewImageData(int32_t Offset, TArray<char> Buffer);                                                  // [0x3659e70] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	// void ClientUpdateARWorldData(int32_t Offset, TArray<char> Buffer);                                                       // [0x3659d60] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	// void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);                                           // [0x3659c60] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
};

/// Class /Script/AugmentedReality.ARSkyLight
/// Size: 0x0010 (16 bytes) (0x0002B8 - 0x0002C8) align 8 pad: 0x0000
class AARSkyLight : public ASkyLight
{ 
public:
	class UAREnvironmentCaptureProbe*                  CaptureProbe;                                               // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x02C0   (0x0008)  MISSED
	// void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);                                       // [0x365ab80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARTexture
/// Size: 0x0020 (32 bytes) (0x0000F0 - 0x000110) align 8 pad: 0x0000
class UARTexture : public UTexture
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x00F4   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x00F8   (0x0010)  
	FVector2D                                          Size;                                                       // 0x0108   (0x0008)  
};

/// Class /Script/AugmentedReality.ARTextureCameraImage
/// Size: 0x0000 (0 bytes) (0x000110 - 0x000110) align 8 pad: 0x0000
class UARTextureCameraImage : public UARTexture
{ 
public:
};

/// Class /Script/AugmentedReality.ARTextureCameraDepth
/// Size: 0x0008 (8 bytes) (0x000110 - 0x000118) align 8 pad: 0x0000
class UARTextureCameraDepth : public UARTexture
{ 
public:
	EARDepthQuality                                    DepthQuality;                                               // 0x0110   (0x0001)  
	EARDepthAccuracy                                   DepthAccuracy;                                              // 0x0111   (0x0001)  
	bool                                               bIsTemporallySmoothed;                                      // 0x0112   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0113   (0x0005)  MISSED
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
/// Size: 0x0020 (32 bytes) (0x000148 - 0x000168) align 8 pad: 0x0000
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0149   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x014C   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x0150   (0x0010)  
	FVector2D                                          Size;                                                       // 0x0160   (0x0008)  
};

/// Class /Script/AugmentedReality.ARTraceResultDummy
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UARTraceResultDummy : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARTrackedGeometry
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x000100) align 16 pad: 0x0000
class UARTrackedGeometry : public UObject
{ 
public:
	FGuid                                              UniqueId;                                                   // 0x0030   (0x0010)  
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0030)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x0070   (0x0030)  
	EARTrackingState                                   TrackingState;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00A1   (0x000F)  MISSED
	class UMRMeshComponent*                            UnderlyingMesh;                                             // 0x00B0   (0x0008)  
	EARObjectClassification                            ObjectClassification;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x00B9   (0x0017)  MISSED
	int32_t                                            LastUpdateFrameNumber;                                      // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FName                                              DebugName;                                                  // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData03_7[0x14];                                      // 0x00EC   (0x0014)  MISSED
	// bool IsTracked();                                                                                                        // [0x365fa70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UMRMeshComponent* GetUnderlyingMesh();                                                                             // [0x365f980] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// EARTrackingState GetTrackingState();                                                                                     // [0xfd2360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARObjectClassification GetObjectClassification();                                                                       // [0x365f740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetName();                                                                                                       // [0x365f700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FTransform GetLocalToWorldTransform();                                                                                   // [0x365f680] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FTransform GetLocalToTrackingTransform();                                                                                // [0x365a410] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// float GetLastUpdateTimestamp();                                                                                          // [0x365f590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetLastUpdateFrameNumber();                                                                                      // [0x365f560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FName GetDebugName();                                                                                                    // [0xf52640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARPlaneGeometry
/// Size: 0x0040 (64 bytes) (0x000100 - 0x000140) align 16 pad: 0x0000
class UARPlaneGeometry : public UARTrackedGeometry
{ 
public:
	EARPlaneOrientation                                Orientation;                                                // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	FVector                                            Center;                                                     // 0x0104   (0x000C)  
	FVector                                            Extent;                                                     // 0x0110   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	TArray<FVector>                                    BoundaryPolygon;                                            // 0x0120   (0x0010)  
	class UARPlaneGeometry*                            SubsumedBy;                                                 // 0x0130   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0138   (0x0008)  MISSED
	// class UARPlaneGeometry* GetSubsumedBy();                                                                                 // [0x365f930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARPlaneOrientation GetOrientation();                                                                                    // [0xbf2dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVector GetExtent();                                                                                                     // [0x365f4d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FVector GetCenter();                                                                                                     // [0x365f3f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// TArray<FVector> GetBoundaryPolygonInLocalSpace();                                                                        // [0x365f2d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedPoint
/// Size: 0x0000 (0 bytes) (0x000100 - 0x000100) align 16 pad: 0x0000
class UARTrackedPoint : public UARTrackedGeometry
{ 
public:
};

/// Class /Script/AugmentedReality.ARTrackedImage
/// Size: 0x0010 (16 bytes) (0x000100 - 0x000110) align 16 pad: 0x0000
class UARTrackedImage : public UARTrackedGeometry
{ 
public:
	class UARCandidateImage*                           DetectedImage;                                              // 0x0100   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0108   (0x0008)  
	// FVector2D GetEstimateSize();                                                                                             // [0x365f450] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// class UARCandidateImage* GetDetectedImage();                                                                             // [0xbe1000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedQRCode
/// Size: 0x0020 (32 bytes) (0x000110 - 0x000130) align 16 pad: 0x0000
class UARTrackedQRCode : public UARTrackedImage
{ 
public:
	FString                                            QRCode;                                                     // 0x0110   (0x0010)  
	int32_t                                            Version;                                                    // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0124   (0x000C)  MISSED
};

/// Class /Script/AugmentedReality.ARFaceGeometry
/// Size: 0x00F0 (240 bytes) (0x000100 - 0x0001F0) align 16 pad: 0x0000
class UARFaceGeometry : public UARTrackedGeometry
{ 
public:
	FVector                                            LookAtTarget;                                               // 0x0100   (0x000C)  
	bool                                               bIsTracked;                                                 // 0x010C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	SDK_UNDEFINED(80,1299) /* TMap<EARFaceBlendShape, float> */ __um(BlendShapes);                                 // 0x0110   (0x0050)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0160   (0x0030)  MISSED
	FTransform                                         LeftEyeTransform;                                           // 0x0190   (0x0030)  
	FTransform                                         RightEyeTransform;                                          // 0x01C0   (0x0030)  
	// FTransform GetWorldSpaceEyeTransform(EAREye Eye);                                                                        // [0x365f9b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FTransform GetLocalSpaceEyeTransform(EAREye Eye);                                                                        // [0x365f5e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// float GetBlendShapeValue(EARFaceBlendShape BlendShape);                                                                  // [0x365f0f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TMap<EARFaceBlendShape, float> GetBlendShapes();                                                                         // [0x365f180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbe
/// Size: 0x0020 (32 bytes) (0x000100 - 0x000120) align 16 pad: 0x0000
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{ 
public:
	FVector                                            Extent;                                                     // 0x0100   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                  // 0x0110   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0118   (0x0008)  MISSED
	// FVector GetExtent();                                                                                                     // [0x365f490] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();                                                 // [0x365f420] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARTrackedObject
/// Size: 0x0010 (16 bytes) (0x000100 - 0x000110) align 16 pad: 0x0000
class UARTrackedObject : public UARTrackedGeometry
{ 
public:
	class UARCandidateObject*                          DetectedObject;                                             // 0x0100   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0108   (0x0008)  MISSED
	// class UARCandidateObject* GetDetectedObject();                                                                           // [0xbe1000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AugmentedReality.ARSkeletonDefinition
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FARSkeletonDefinition
{ 
	int32_t                                            NumJoints;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      JointNames;                                                 // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARPose3D
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FARPose3D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
	EARJointTransformSpace                             JointTransformSpace;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AugmentedReality.ARTrackedPose
/// Size: 0x0050 (80 bytes) (0x000100 - 0x000150) align 16 pad: 0x0000
class UARTrackedPose : public UARTrackedGeometry
{ 
public:
	FARPose3D                                          TrackedPose;                                                // 0x0100   (0x0050)  
	// FARPose3D GetTrackedPoseData();                                                                                          // [0x365f950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARMeshGeometry
/// Size: 0x0000 (0 bytes) (0x000100 - 0x000100) align 16 pad: 0x0000
class UARMeshGeometry : public UARTrackedGeometry
{ 
public:
	// bool GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff); // [0x365f760] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGeoAnchor
/// Size: 0x0010 (16 bytes) (0x000100 - 0x000110) align 16 pad: 0x0000
class UARGeoAnchor : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0100   (0x0010)  MISSED
	// float GetLongitude();                                                                                                    // [0x365f6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetLatitude();                                                                                                     // [0x365f5c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EARAltitudeSource GetAltitudeSource();                                                                                   // [0x365f0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetAltitudeMeters();                                                                                               // [0x365f0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackableNotifyComponent
/// Size: 0x0150 (336 bytes) (0x0000C0 - 0x000210) align 8 pad: 0x0000
class UARTrackableNotifyComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,1300) /* FMulticastInlineDelegate */ __um(OnAddTrackedGeometry);                              // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,1301) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedGeometry);                           // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,1302) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedGeometry);                           // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,1303) /* FMulticastInlineDelegate */ __um(OnAddTrackedPlane);                                 // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,1304) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedPlane);                              // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,1305) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedPlane);                              // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,1306) /* FMulticastInlineDelegate */ __um(OnAddTrackedPoint);                                 // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,1307) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedPoint);                              // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,1308) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedPoint);                              // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,1309) /* FMulticastInlineDelegate */ __um(OnAddTrackedImage);                                 // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,1310) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedImage);                              // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,1311) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedImage);                              // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,1312) /* FMulticastInlineDelegate */ __um(OnAddTrackedFace);                                  // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,1313) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedFace);                               // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,1314) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedFace);                               // 0x01A0   (0x0010)  
	SDK_UNDEFINED(16,1315) /* FMulticastInlineDelegate */ __um(OnAddTrackedEnvProbe);                              // 0x01B0   (0x0010)  
	SDK_UNDEFINED(16,1316) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedEnvProbe);                           // 0x01C0   (0x0010)  
	SDK_UNDEFINED(16,1317) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedEnvProbe);                           // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,1318) /* FMulticastInlineDelegate */ __um(OnAddTrackedObject);                                // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,1319) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedObject);                             // 0x01F0   (0x0010)  
	SDK_UNDEFINED(16,1320) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedObject);                             // 0x0200   (0x0010)  
};

/// Class /Script/AugmentedReality.ARTypesDummyClass
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UARTypesDummyClass : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARCandidateObject
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000078) align 8 pad: 0x0000
class UARCandidateObject : public UDataAsset
{ 
public:
	TArray<char>                                       CandidateObjectData;                                        // 0x0038   (0x0010)  
	FString                                            FriendlyName;                                               // 0x0048   (0x0010)  
	FBox                                               BoundingBox;                                                // 0x0058   (0x001C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
	// void SetFriendlyName(FString NewName);                                                                                   // [0x365fbf0] Final|Native|Public|BlueprintCallable 
	// void SetCandidateObjectData(TArray<char>& InCandidateObject);                                                            // [0x365fb40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetBoundingBox(FBox& InBoundingBox);                                                                                // [0x365faa0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// FString GetFriendlyName();                                                                                               // [0x365f530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<char> GetCandidateObjectData();                                                                                   // [0x365f3c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FBox GetBoundingBox();                                                                                                   // [0x365f390] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AugmentedReality.TrackedGeometryGroup
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FTrackedGeometryGroup
{ 
	class AARActor*                                    ARActor;                                                    // 0x0000   (0x0008)  
	class UARComponent*                                ARComponent;                                                // 0x0008   (0x0008)  
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARSharedWorldReplicationState
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FARSharedWorldReplicationState
{ 
	int32_t                                            PreviewImageOffset;                                         // 0x0000   (0x0004)  
	int32_t                                            ARWorldOffset;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AugmentedReality.ARTraceResult
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 pad: 0x0000
struct FARTraceResult
{ 
	float                                              DistanceFromCamera;                                         // 0x0000   (0x0004)  
	EARLineTraceChannels                               TraceChannel;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0005   (0x000B)  MISSED
	FTransform                                         LocalTransform;                                             // 0x0010   (0x0030)  
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Struct /Script/AugmentedReality.ARCameraIntrinsics
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FARCameraIntrinsics
{ 
	FIntPoint                                          ImageResolution;                                            // 0x0000   (0x0008)  
	FVector2D                                          FocalLength;                                                // 0x0008   (0x0008)  
	FVector2D                                          PrincipalPoint;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARPose2D
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FARPose2D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FVector2D>                                  JointLocations;                                             // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARSessionStatus
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FARSessionStatus
{ 
	FString                                            AdditionalInfo;                                             // 0x0000   (0x0010)  
	EARSessionStatus                                   Status;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

