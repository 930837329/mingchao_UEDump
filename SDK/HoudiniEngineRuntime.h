
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Foliage
/// dependency: PhysicsCore

/// Enum /Script/HoudiniEngineRuntime.EHoudiniStaticMeshMethod
/// Size: 0x01 (1 bytes)
enum class EHoudiniStaticMeshMethod : uint8_t
{
	EHoudiniStaticMeshMethod__RawMesh                                                = 0,
	EHoudiniStaticMeshMethod__FMeshDescription                                       = 1,
	EHoudiniStaticMeshMethod__UHoudiniStaticMesh                                     = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniAssetStateResult
/// Size: 0x01 (1 bytes)
enum class EHoudiniAssetStateResult : uint8_t
{
	EHoudiniAssetStateResult__None                                                   = 0,
	EHoudiniAssetStateResult__Working                                                = 1,
	EHoudiniAssetStateResult__Success                                                = 2,
	EHoudiniAssetStateResult__FinishedWithError                                      = 3,
	EHoudiniAssetStateResult__FinishedWithFatalError                                 = 4,
	EHoudiniAssetStateResult__Aborted                                                = 5
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniAssetState
/// Size: 0x01 (1 bytes)
enum class EHoudiniAssetState : uint8_t
{
	EHoudiniAssetState__NeedInstantiation                                            = 0,
	EHoudiniAssetState__NewHDA                                                       = 1,
	EHoudiniAssetState__PreInstantiation                                             = 2,
	EHoudiniAssetState__Instantiating                                                = 3,
	EHoudiniAssetState__PreCook                                                      = 4,
	EHoudiniAssetState__Cooking                                                      = 5,
	EHoudiniAssetState__PostCook                                                     = 6,
	EHoudiniAssetState__PreProcess                                                   = 7,
	EHoudiniAssetState__Processing                                                   = 8,
	EHoudiniAssetState__None                                                         = 9,
	EHoudiniAssetState__NeedRebuild                                                  = 10,
	EHoudiniAssetState__NeedDelete                                                   = 11,
	EHoudiniAssetState__Deleting                                                     = 12,
	EHoudiniAssetState__ProcessTemplate                                              = 13
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniPCGSplineType
/// Size: 0x01 (1 bytes)
enum class EHoudiniPCGSplineType : uint8_t
{
	EHoudiniPCGSplineType__Default                                                   = 0,
	EHoudiniPCGSplineType__Water                                                     = 1,
	EHoudiniPCGSplineType__Foliage                                                   = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniPCGToolType
/// Size: 0x01 (1 bytes)
enum class EHoudiniPCGToolType : uint8_t
{
	EHoudiniPCGToolType__Default                                                     = 0,
	EHoudiniPCGToolType__Customized_BoundSelectorByFolder                            = 1
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniProxyRefineRequestResult
/// Size: 0x01 (1 bytes)
enum class EHoudiniProxyRefineRequestResult : uint8_t
{
	EHoudiniProxyRefineRequestResult__Invalid                                        = 0,
	EHoudiniProxyRefineRequestResult__None                                           = 1,
	EHoudiniProxyRefineRequestResult__PendingCooks                                   = 2,
	EHoudiniProxyRefineRequestResult__Refined                                        = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniProxyRefineResult
/// Size: 0x01 (1 bytes)
enum class EHoudiniProxyRefineResult : uint8_t
{
	EHoudiniProxyRefineResult__Invalid                                               = 0,
	EHoudiniProxyRefineResult__Failed                                                = 1,
	EHoudiniProxyRefineResult__Success                                               = 2,
	EHoudiniProxyRefineResult__Skipped                                               = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniLandscapeExportType
/// Size: 0x01 (1 bytes)
enum class EHoudiniLandscapeExportType : uint8_t
{
	EHoudiniLandscapeExportType__Heightfield                                         = 0,
	EHoudiniLandscapeExportType__Mesh                                                = 1,
	EHoudiniLandscapeExportType__Points                                              = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveBreakpointParameterization
/// Size: 0x01 (1 bytes)
enum class EHoudiniCurveBreakpointParameterization : uint8_t
{
	EHoudiniCurveBreakpointParameterization__Invalid                                 = -1,
	EHoudiniCurveBreakpointParameterization__Uniform                                 = 0,
	EHoudiniCurveBreakpointParameterization__Chord                                   = 1,
	EHoudiniCurveBreakpointParameterization__Centripetal                             = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveMethod
/// Size: 0x01 (1 bytes)
enum class EHoudiniCurveMethod : uint8_t
{
	EHoudiniCurveMethod__Invalid                                                     = -1,
	EHoudiniCurveMethod__CVs                                                         = 0,
	EHoudiniCurveMethod__Breakpoints                                                 = 1,
	EHoudiniCurveMethod__Freehand                                                    = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveType
/// Size: 0x01 (1 bytes)
enum class EHoudiniCurveType : uint8_t
{
	EHoudiniCurveType__Invalid                                                       = -1,
	EHoudiniCurveType__Polygon                                                       = 0,
	EHoudiniCurveType__Nurbs                                                         = 1,
	EHoudiniCurveType__Bezier                                                        = 2,
	EHoudiniCurveType__Points                                                        = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniOutputType
/// Size: 0x01 (1 bytes)
enum class EHoudiniOutputType : uint8_t
{
	EHoudiniOutputType__Invalid                                                      = 0,
	EHoudiniOutputType__Mesh                                                         = 1,
	EHoudiniOutputType__Instancer                                                    = 2,
	EHoudiniOutputType__Landscape                                                    = 3,
	EHoudiniOutputType__Curve                                                        = 4,
	EHoudiniOutputType__Skeletal                                                     = 5,
	EHoudiniOutputType__GeometryCollection                                           = 6
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniInputType
/// Size: 0x01 (1 bytes)
enum class EHoudiniInputType : uint8_t
{
	EHoudiniInputType__Invalid                                                       = 0,
	EHoudiniInputType__Geometry                                                      = 1,
	EHoudiniInputType__Curve                                                         = 2,
	EHoudiniInputType__Asset                                                         = 3,
	EHoudiniInputType__Landscape                                                     = 4,
	EHoudiniInputType__World                                                         = 5,
	EHoudiniInputType__Skeletal                                                      = 6,
	EHoudiniInputType__GeometryCollection                                            = 7
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniLandscapeOutputBakeType
/// Size: 0x01 (1 bytes)
enum class EHoudiniLandscapeOutputBakeType : uint8_t
{
	EHoudiniLandscapeOutputBakeType__Detachment                                      = 0,
	EHoudiniLandscapeOutputBakeType__BakeToImage                                     = 1,
	EHoudiniLandscapeOutputBakeType__BakeToWorld                                     = 2,
	EHoudiniLandscapeOutputBakeType__InValid                                         = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRampInterpolationType
/// Size: 0x01 (1 bytes)
enum class EHoudiniRampInterpolationType : uint8_t
{
	EHoudiniRampInterpolationType__InValid                                           = -1,
	EHoudiniRampInterpolationType__CONSTANT                                          = 0,
	EHoudiniRampInterpolationType__LINEAR                                            = 1,
	EHoudiniRampInterpolationType__CATMULL_ROM                                       = 2,
	EHoudiniRampInterpolationType__MONOTONE_CUBIC                                    = 3,
	EHoudiniRampInterpolationType__BEZIER                                            = 4,
	EHoudiniRampInterpolationType__BSPLINE                                           = 5,
	EHoudiniRampInterpolationType__HERMITE                                           = 6
};

/// Enum /Script/HoudiniEngineRuntime.EAttribOwner
/// Size: 0x01 (1 bytes)
enum class EAttribOwner : uint8_t
{
	EAttribOwner__Invalid                                                            = -1,
	EAttribOwner__Vertex                                                             = 0,
	EAttribOwner__Point                                                              = 1,
	EAttribOwner__Prim                                                               = 2,
	EAttribOwner__Detail                                                             = 3
};

/// Enum /Script/HoudiniEngineRuntime.EAttribStorageType
/// Size: 0x01 (1 bytes)
enum class EAttribStorageType : uint8_t
{
	EAttribStorageType__Invalid                                                      = -1,
	EAttribStorageType__INT                                                          = 0,
	EAttribStorageType__INT64                                                        = 1,
	EAttribStorageType__FLOAT                                                        = 2,
	EAttribStorageType__FLOAT64                                                      = 3,
	EAttribStorageType__STRING                                                       = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniInstancerType
/// Size: 0x01 (1 bytes)
enum class EHoudiniInstancerType : uint8_t
{
	EHoudiniInstancerType__Invalid                                                   = 0,
	EHoudiniInstancerType__ObjectInstancer                                           = 1,
	EHoudiniInstancerType__PackedPrimitive                                           = 2,
	EHoudiniInstancerType__AttributeInstancer                                        = 3,
	EHoudiniInstancerType__OldSchoolAttributeInstancer                               = 4,
	EHoudiniInstancerType__GeometryCollection                                        = 5
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniPartType
/// Size: 0x01 (1 bytes)
enum class EHoudiniPartType : uint8_t
{
	EHoudiniPartType__Invalid                                                        = 0,
	EHoudiniPartType__Mesh                                                           = 1,
	EHoudiniPartType__Instancer                                                      = 2,
	EHoudiniPartType__Curve                                                          = 3,
	EHoudiniPartType__Volume                                                         = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniGeoType
/// Size: 0x01 (1 bytes)
enum class EHoudiniGeoType : uint8_t
{
	EHoudiniGeoType__Invalid                                                         = 0,
	EHoudiniGeoType__Default                                                         = 1,
	EHoudiniGeoType__Intermediate                                                    = 2,
	EHoudiniGeoType__Input                                                           = 3,
	EHoudiniGeoType__Curve                                                           = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniHandleType
/// Size: 0x01 (1 bytes)
enum class EHoudiniHandleType : uint8_t
{
	EHoudiniHandleType__Xform                                                        = 0,
	EHoudiniHandleType__Bounder                                                      = 1,
	EHoudiniHandleType__Unsupported                                                  = 2
};

/// Enum /Script/HoudiniEngineRuntime.EXformParameter
/// Size: 0x01 (1 bytes)
enum class EXformParameter : uint8_t
{
	EXformParameter__TX                                                              = 0,
	EXformParameter__TY                                                              = 1,
	EXformParameter__TZ                                                              = 2,
	EXformParameter__RX                                                              = 3,
	EXformParameter__RY                                                              = 4,
	EXformParameter__RZ                                                              = 5,
	EXformParameter__SX                                                              = 6,
	EXformParameter__SY                                                              = 7,
	EXformParameter__SZ                                                              = 8,
	EXformParameter__COUNT                                                           = 9
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniInputObjectType
/// Size: 0x01 (1 bytes)
enum class EHoudiniInputObjectType : uint8_t
{
	EHoudiniInputObjectType__Invalid                                                 = 0,
	EHoudiniInputObjectType__Object                                                  = 1,
	EHoudiniInputObjectType__StaticMesh                                              = 2,
	EHoudiniInputObjectType__SkeletalMesh                                            = 3,
	EHoudiniInputObjectType__SceneComponent                                          = 4,
	EHoudiniInputObjectType__StaticMeshComponent                                     = 5,
	EHoudiniInputObjectType__InstancedStaticMeshComponent                            = 6,
	EHoudiniInputObjectType__SplineComponent                                         = 7,
	EHoudiniInputObjectType__HoudiniSplineComponent                                  = 8,
	EHoudiniInputObjectType__HoudiniAssetComponent                                   = 9,
	EHoudiniInputObjectType__Actor                                                   = 10,
	EHoudiniInputObjectType__Landscape                                               = 11,
	EHoudiniInputObjectType__Brush                                                   = 12,
	EHoudiniInputObjectType__CameraComponent                                         = 13,
	EHoudiniInputObjectType__DataTable                                               = 14,
	EHoudiniInputObjectType__HoudiniAssetActor                                       = 15,
	EHoudiniInputObjectType__FoliageType_InstancedStaticMesh                         = 16,
	EHoudiniInputObjectType__GeometryCollection                                      = 17,
	EHoudiniInputObjectType__GeometryCollectionComponent                             = 18,
	EHoudiniInputObjectType__GeometryCollectionActor_Deprecated                      = 19,
	EHoudiniInputObjectType__SkeletalMeshComponent                                   = 20,
	EHoudiniInputObjectType__Blueprint                                               = 21
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniXformType
/// Size: 0x01 (1 bytes)
enum class EHoudiniXformType : uint8_t
{
	EHoudiniXformType__None                                                          = 0,
	EHoudiniXformType__IntoThisObject                                                = 1,
	EHoudiniXformType__Auto                                                          = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveOutputType
/// Size: 0x01 (1 bytes)
enum class EHoudiniCurveOutputType : uint8_t
{
	EHoudiniCurveOutputType__UnrealSpline                                            = 0,
	EHoudiniCurveOutputType__HoudiniSpline                                           = 1
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniParameterType
/// Size: 0x01 (1 bytes)
enum class EHoudiniParameterType : uint8_t
{
	EHoudiniParameterType__Invalid                                                   = 0,
	EHoudiniParameterType__Button                                                    = 1,
	EHoudiniParameterType__ButtonStrip                                               = 2,
	EHoudiniParameterType__Color                                                     = 3,
	EHoudiniParameterType__ColorRamp                                                 = 4,
	EHoudiniParameterType__File                                                      = 5,
	EHoudiniParameterType__FileDir                                                   = 6,
	EHoudiniParameterType__FileGeo                                                   = 7,
	EHoudiniParameterType__FileImage                                                 = 8,
	EHoudiniParameterType__Float                                                     = 9,
	EHoudiniParameterType__FloatRamp                                                 = 10,
	EHoudiniParameterType__Folder                                                    = 11,
	EHoudiniParameterType__FolderList                                                = 12,
	EHoudiniParameterType__Input                                                     = 13,
	EHoudiniParameterType__Int                                                       = 14,
	EHoudiniParameterType__IntChoice                                                 = 15,
	EHoudiniParameterType__Label                                                     = 16,
	EHoudiniParameterType__MultiParm                                                 = 17,
	EHoudiniParameterType__Separator                                                 = 18,
	EHoudiniParameterType__String                                                    = 19,
	EHoudiniParameterType__StringChoice                                              = 20,
	EHoudiniParameterType__StringAssetRef                                            = 21,
	EHoudiniParameterType__Toggle                                                    = 22
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniFolderParameterType
/// Size: 0x01 (1 bytes)
enum class EHoudiniFolderParameterType : uint8_t
{
	EHoudiniFolderParameterType__Invalid                                             = 0,
	EHoudiniFolderParameterType__Collapsible                                         = 1,
	EHoudiniFolderParameterType__Simple                                              = 2,
	EHoudiniFolderParameterType__Tabs                                                = 3,
	EHoudiniFolderParameterType__Radio                                               = 4,
	EHoudiniFolderParameterType__Other                                               = 5
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniMultiParmModificationType
/// Size: 0x01 (1 bytes)
enum class EHoudiniMultiParmModificationType : uint8_t
{
	EHoudiniMultiParmModificationType__None                                          = 0,
	EHoudiniMultiParmModificationType__Inserted                                      = 1,
	EHoudiniMultiParmModificationType__Removed                                       = 2,
	EHoudiniMultiParmModificationType__Modified                                      = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRampPointConstructStatus
/// Size: 0x01 (1 bytes)
enum class EHoudiniRampPointConstructStatus : uint8_t
{
	EHoudiniRampPointConstructStatus__None                                           = 0,
	EHoudiniRampPointConstructStatus__INITIALIZED                                    = 1,
	EHoudiniRampPointConstructStatus__POSITION_INSERTED                              = 2,
	EHoudiniRampPointConstructStatus__VALUE_INSERTED                                 = 3,
	EHoudiniRampPointConstructStatus__INTERPTYPE_INSERTED                            = 4
};

/// Enum /Script/HoudiniEngineRuntime.EPDGWorkResultState
/// Size: 0x01 (1 bytes)
enum class EPDGWorkResultState : uint8_t
{
	EPDGWorkResultState__None                                                        = 0,
	EPDGWorkResultState__ToLoad                                                      = 1,
	EPDGWorkResultState__Loading                                                     = 2,
	EPDGWorkResultState__Loaded                                                      = 3,
	EPDGWorkResultState__ToDelete                                                    = 4,
	EPDGWorkResultState__Deleting                                                    = 5,
	EPDGWorkResultState__Deleted                                                     = 6,
	EPDGWorkResultState__NotLoaded                                                   = 7
};

/// Enum /Script/HoudiniEngineRuntime.EPDGNodeState
/// Size: 0x01 (1 bytes)
enum class EPDGNodeState : uint8_t
{
	EPDGNodeState__None                                                              = 0,
	EPDGNodeState__Dirtied                                                           = 1,
	EPDGNodeState__Dirtying                                                          = 2,
	EPDGNodeState__Cooking                                                           = 3,
	EPDGNodeState__Cook_Complete                                                     = 4,
	EPDGNodeState__Cook_Failed                                                       = 5
};

/// Enum /Script/HoudiniEngineRuntime.EPDGLinkState
/// Size: 0x01 (1 bytes)
enum class EPDGLinkState : uint8_t
{
	EPDGLinkState__Inactive                                                          = 0,
	EPDGLinkState__Linking                                                           = 1,
	EPDGLinkState__Linked                                                            = 2,
	EPDGLinkState__Error_Not_Linked                                                  = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniExecutableType
/// Size: 0x01 (1 bytes)
enum class EHoudiniExecutableType : uint8_t
{
	HRSHE_Houdini                                                                    = 0,
	HRSHE_HoudiniFX                                                                  = 1,
	HRSHE_HoudiniCore                                                                = 2,
	HRSHE_HoudiniIndie                                                               = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
/// Size: 0x01 (1 bytes)
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
	HRSRF_Always                                                                     = 0,
	HRSRF_OnlyIfMissing                                                              = 1,
	HRSRF_Never                                                                      = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
/// Size: 0x01 (1 bytes)
enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
	HRSST_InProcess                                                                  = 0,
	HRSST_Socket                                                                     = 1,
	HRSST_NamedPipe                                                                  = 2,
	HRSST_None                                                                       = 3
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAsset
/// Size: 0x0028 (40 bytes) (0x000030 - 0x000058) align 8 pad: 0x0000
class UHoudiniAsset : public UObject
{ 
public:
	FString                                            AssetFileName;                                              // 0x0030   (0x0010)  
	TArray<char>                                       AssetBytes;                                                 // 0x0040   (0x0010)  
	uint32_t                                           AssetBytesCount;                                            // 0x0050   (0x0004)  
	bool                                               bAssetLimitedCommercial;                                    // 0x0054   (0x0001)  
	bool                                               bAssetNonCommercial;                                        // 0x0055   (0x0001)  
	bool                                               bAssetExpanded;                                             // 0x0056   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0057   (0x0001)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AHoudiniAssetActor : public AActor
{ 
public:
	class UHoudiniAssetComponent*                      HoudiniAssetComponent;                                      // 0x02A8   (0x0008)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
/// Size: 0x01B0 (432 bytes) (0x000000 - 0x0001B0) align 8 pad: 0x0000
struct FHoudiniStaticMeshGenerationProperties
{ 
	bool                                               bGeneratedDoubleSidedGeometry : 1;                          // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UPhysicalMaterial*                           GeneratedPhysMaterial;                                      // 0x0008   (0x0008)  
	FBodyInstance                                      DefaultBodyInstance;                                        // 0x0010   (0x0160)  
	TEnumAsByte<ECollisionTraceFlag>                   GeneratedCollisionTraceFlag;                                // 0x0170   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0171   (0x0003)  MISSED
	int32_t                                            GeneratedLightMapResolution;                                // 0x0174   (0x0004)  
	FWalkableSlopeOverride                             GeneratedWalkableSlopeOverride;                             // 0x0178   (0x0010)  
	int32_t                                            GeneratedLightMapCoordinateIndex;                           // 0x0188   (0x0004)  
	bool                                               bGeneratedUseMaximumStreamingTexelRatio : 1;                // 0x018C:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x018D   (0x0003)  MISSED
	float                                              GeneratedStreamingDistanceMultiplier;                       // 0x0190   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0194   (0x0004)  MISSED
	class UFoliageType_InstancedStaticMesh*            GeneratedFoliageDefaultSettings;                            // 0x0198   (0x0008)  
	TArray<class UAssetUserData*>                      GeneratedAssetUserData;                                     // 0x01A0   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBakedOutput
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FHoudiniBakedOutput
{ 
	SDK_UNDEFINED(80,1382) /* TMap<FHoudiniBakedOutputObjectIdentifier, FHoudiniBakedOutputObject> */ __um(BakedOutputObjects); // 0x0000   (0x0050)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetComponent
/// Size: 0x0500 (1280 bytes) (0x0004E0 - 0x0009E0) align 16 pad: 0x0000
class UHoudiniAssetComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x04E0   (0x0008)  MISSED
	class UHoudiniAsset*                               HoudiniAsset;                                               // 0x04E8   (0x0008)  
	bool                                               bCookOnParameterChange;                                     // 0x04F0   (0x0001)  
	bool                                               bUploadTransformsToHoudiniEngine;                           // 0x04F1   (0x0001)  
	bool                                               bCookOnTransformChange;                                     // 0x04F2   (0x0001)  
	bool                                               bCookOnAssetInputCook;                                      // 0x04F3   (0x0001)  
	bool                                               bOutputless;                                                // 0x04F4   (0x0001)  
	bool                                               bOutputTemplateGeos;                                        // 0x04F5   (0x0001)  
	bool                                               bUseOutputNodes;                                            // 0x04F6   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x04F7   (0x0001)  MISSED
	FDirectoryPath                                     TemporaryCookFolder;                                        // 0x04F8   (0x0010)  
	FDirectoryPath                                     BakeFolder;                                                 // 0x0508   (0x0010)  
	EHoudiniStaticMeshMethod                           StaticMeshMethod;                                           // 0x0518   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0519   (0x0007)  MISSED
	FHoudiniStaticMeshGenerationProperties             StaticMeshGenerationProperties;                             // 0x0520   (0x01B0)  
	FMeshBuildSettings                                 StaticMeshBuildSettings;                                    // 0x06D0   (0x0030)  
	bool                                               bOverrideGlobalProxyStaticMeshSettings;                     // 0x0700   (0x0001)  
	bool                                               bEnableProxyStaticMeshOverride;                             // 0x0701   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementByTimerOverride;            // 0x0702   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x0703   (0x0001)  MISSED
	float                                              ProxyMeshAutoRefineTimeoutSecondsOverride;                  // 0x0704   (0x0004)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;     // 0x0708   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;      // 0x0709   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x070A   (0x0002)  MISSED
	int32_t                                            AssetId;                                                    // 0x070C   (0x0004)  
	TArray<int32_t>                                    NodeIdsToCook;                                              // 0x0710   (0x0010)  
	SDK_UNDEFINED(80,1383) /* TMap<int32_t, int32_t> */ __um(OutputNodeCookCounts);                                // 0x0720   (0x0050)  
	SDK_UNDEFINED(80,1384) /* TSet<UHoudiniAssetComponent*> */ __um(DownstreamHoudiniAssets);                      // 0x0770   (0x0050)  
	FGuid                                              ComponentGUID;                                              // 0x07C0   (0x0010)  
	FGuid                                              HapiGUID;                                                   // 0x07D0   (0x0010)  
	FString                                            HapiAssetName;                                              // 0x07E0   (0x0010)  
	EHoudiniAssetState                                 AssetState;                                                 // 0x07F0   (0x0001)  
	EHoudiniAssetState                                 DebugLastAssetState;                                        // 0x07F1   (0x0001)  
	EHoudiniAssetStateResult                           AssetStateResult;                                           // 0x07F2   (0x0001)  
	unsigned char                                      UnknownData05_6[0xD];                                       // 0x07F3   (0x000D)  MISSED
	FTransform                                         LastComponentTransform;                                     // 0x0800   (0x0030)  
	uint32_t                                           SubAssetIndex;                                              // 0x0830   (0x0004)  
	int32_t                                            AssetCookCount;                                             // 0x0834   (0x0004)  
	bool                                               bHasBeenLoaded;                                             // 0x0838   (0x0001)  
	bool                                               bHasBeenDuplicated;                                         // 0x0839   (0x0001)  
	bool                                               bPendingDelete;                                             // 0x083A   (0x0001)  
	bool                                               bRecookRequested;                                           // 0x083B   (0x0001)  
	bool                                               bRebuildRequested;                                          // 0x083C   (0x0001)  
	bool                                               bEnableCooking;                                             // 0x083D   (0x0001)  
	bool                                               bForceNeedUpdate;                                           // 0x083E   (0x0001)  
	bool                                               bLastCookSuccess;                                           // 0x083F   (0x0001)  
	bool                                               bParameterDefinitionUpdateNeeded;                           // 0x0840   (0x0001)  
	bool                                               bBlueprintStructureModified;                                // 0x0841   (0x0001)  
	bool                                               bBlueprintModified;                                         // 0x0842   (0x0001)  
	unsigned char                                      UnknownData06_6[0x5];                                       // 0x0843   (0x0005)  MISSED
	TArray<class UHoudiniParameter*>                   Parameters;                                                 // 0x0848   (0x0010)  
	TArray<class UHoudiniInput*>                       Inputs;                                                     // 0x0858   (0x0010)  
	TArray<class UHoudiniOutput*>                      Outputs;                                                    // 0x0868   (0x0010)  
	TArray<FHoudiniBakedOutput>                        BakedOutputs;                                               // 0x0878   (0x0010)  
	SDK_UNDEFINED(16,1385) /* TArray<TWeakObjectPtr<AActor*>> */ __um(UntrackedOutputs);                           // 0x0888   (0x0010)  
	TArray<class UHoudiniHandleComponent*>             HandleComponents;                                           // 0x0898   (0x0010)  
	bool                                               bHasComponentTransformChanged;                              // 0x08A8   (0x0001)  
	bool                                               bFullyLoaded;                                               // 0x08A9   (0x0001)  
	unsigned char                                      UnknownData07_6[0x6];                                       // 0x08AA   (0x0006)  MISSED
	class UHoudiniPDGAssetLink*                        PDGAssetLink;                                               // 0x08B0   (0x0008)  
	FTimerHandle                                       RefineMeshesTimer;                                          // 0x08B8   (0x0008)  
	unsigned char                                      UnknownData08_6[0x18];                                      // 0x08C0   (0x0018)  MISSED
	bool                                               bNoProxyMeshNextCookRequested;                              // 0x08D8   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x08D9   (0x0007)  MISSED
	SDK_UNDEFINED(80,1386) /* TMap<UObject*, int32_t> */ __um(InputPresets);                                       // 0x08E0   (0x0050)  
	bool                                               bBakeAfterNextCook;                                         // 0x0930   (0x0001)  
	unsigned char                                      UnknownData10_6[0x77];                                      // 0x0931   (0x0077)  MISSED
	bool                                               bCachedIsPreview;                                           // 0x09A8   (0x0001)  
	unsigned char                                      UnknownData11_6[0xF];                                       // 0x09A9   (0x000F)  MISSED
	double                                             LastTickTime;                                               // 0x09B8   (0x0008)  
	unsigned char                                      UnknownData12_6[0x18];                                      // 0x09C0   (0x0018)  MISSED
	EHoudiniPCGToolType                                PCGToolType;                                                // 0x09D8   (0x0001)  
	bool                                               bPCGToolGenerateMenuExpanded;                               // 0x09D9   (0x0001)  
	unsigned char                                      UnknownData13_7[0x6];                                       // 0x09DA   (0x0006)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
/// Size: 0x0100 (256 bytes) (0x0009E0 - 0x000AE0) align 16 pad: 0x0000
class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x09E0   (0x0048)  MISSED
	bool                                               FauxBPProperty;                                             // 0x0A28   (0x0001)  
	bool                                               bHoudiniAssetChanged;                                       // 0x0A29   (0x0001)  
	bool                                               bUpdatedFromTemplate;                                       // 0x0A2A   (0x0001)  
	bool                                               bIsInBlueprintEditor;                                       // 0x0A2B   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x0A2C   (0x0001)  
	bool                                               bHasRegisteredComponentTemplate;                            // 0x0A2D   (0x0001)  
	unsigned char                                      UnknownData01_6[0xA];                                       // 0x0A2E   (0x000A)  MISSED
	SDK_UNDEFINED(80,1387) /* TMap<FHoudiniOutputObjectIdentifier, FGuid> */ __um(CachedOutputNodes);              // 0x0A38   (0x0050)  
	SDK_UNDEFINED(80,1388) /* TMap<FGuid, FGuid> */    __um(CachedInputNodes);                                     // 0x0A88   (0x0050)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0AD8   (0x0008)  MISSED
	// void SetToggleValueAt(FString Name, bool Value, int32_t Index);                                                          // [0x15c6ac0] Final|Native|Public|BlueprintCallable 
	// void SetFloatParameter(FString Name, float Value, int32_t Index);                                                        // [0x15c6930] Final|Native|Public|BlueprintCallable 
	// bool HasParameter(FString Name);                                                                                         // [0x15c6830] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameter
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000088) align 8 pad: 0x0000
class UHoudiniAssetParameter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterButton
/// Size: 0x0000 (0 bytes) (0x000088 - 0x000088) align 8 pad: 0x0000
class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterChoice
/// Size: 0x0038 (56 bytes) (0x000088 - 0x0000C0) align 8 pad: 0x0000
class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0088   (0x0038)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterColor
/// Size: 0x0010 (16 bytes) (0x000088 - 0x000098) align 8 pad: 0x0000
class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFile
/// Size: 0x0028 (40 bytes) (0x000088 - 0x0000B0) align 8 pad: 0x0000
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0088   (0x0028)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFloat
/// Size: 0x0038 (56 bytes) (0x000088 - 0x0000C0) align 8 pad: 0x0000
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0088   (0x0038)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFolder
/// Size: 0x0000 (0 bytes) (0x000088 - 0x000088) align 8 pad: 0x0000
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFolderList
/// Size: 0x0000 (0 bytes) (0x000088 - 0x000088) align 8 pad: 0x0000
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterInt
/// Size: 0x0030 (48 bytes) (0x000088 - 0x0000B8) align 8 pad: 0x0000
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0088   (0x0030)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterLabel
/// Size: 0x0000 (0 bytes) (0x000088 - 0x000088) align 8 pad: 0x0000
class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
/// Size: 0x0008 (8 bytes) (0x000088 - 0x000090) align 8 pad: 0x0000
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterRamp
/// Size: 0x0018 (24 bytes) (0x000088 - 0x0000A0) align 8 pad: 0x0000
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0088   (0x0018)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterSeparator
/// Size: 0x0000 (0 bytes) (0x000088 - 0x000088) align 8 pad: 0x0000
class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterString
/// Size: 0x0010 (16 bytes) (0x000088 - 0x000098) align 8 pad: 0x0000
class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterToggle
/// Size: 0x0010 (16 bytes) (0x000088 - 0x000098) align 8 pad: 0x0000
class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000D0) align 8 pad: 0x0000
class UHoudiniAssetComponentMaterials_V1 : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0030   (0x00A0)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniHandleComponent_V1
/// Size: 0x0098 (152 bytes) (0x000218 - 0x0002B0) align 16 pad: 0x0000
class UHoudiniHandleComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0218   (0x0098)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniSplineComponent_V1
/// Size: 0x00F8 (248 bytes) (0x000218 - 0x000310) align 16 pad: 0x0000
class UHoudiniSplineComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xF8];                                      // 0x0218   (0x00F8)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetInput
/// Size: 0x0128 (296 bytes) (0x000088 - 0x0001B0) align 16 pad: 0x0000
class UHoudiniAssetInput : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x128];                                     // 0x0088   (0x0128)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetInstanceInput
/// Size: 0x00E8 (232 bytes) (0x000088 - 0x000170) align 16 pad: 0x0000
class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0xE8];                                      // 0x0088   (0x00E8)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetInstanceInputField
/// Size: 0x0160 (352 bytes) (0x000030 - 0x000190) align 16 pad: 0x0000
class UHoudiniAssetInstanceInputField : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x160];                                     // 0x0030   (0x0160)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetComponent_V1
/// Size: 0x0520 (1312 bytes) (0x0004E0 - 0x000A00) align 16 pad: 0x0000
class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
{ 
public:
	bool                                               bGeneratedDoubleSidedGeometry : 1;                          // 0x04E0:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x04E1   (0x0007)  MISSED
	class UPhysicalMaterial*                           GeneratedPhysMaterial;                                      // 0x04E8   (0x0008)  
	FBodyInstance                                      DefaultBodyInstance;                                        // 0x04F0   (0x0160)  
	TEnumAsByte<ECollisionTraceFlag>                   GeneratedCollisionTraceFlag;                                // 0x0650   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0651   (0x0003)  MISSED
	int32_t                                            GeneratedLightMapResolution;                                // 0x0654   (0x0004)  
	float                                              GeneratedDistanceFieldResolutionScale;                      // 0x0658   (0x0004)  
	FWalkableSlopeOverride                             GeneratedWalkableSlopeOverride;                             // 0x065C   (0x0010)  
	int32_t                                            GeneratedLightMapCoordinateIndex;                           // 0x066C   (0x0004)  
	bool                                               bGeneratedUseMaximumStreamingTexelRatio : 1;                // 0x0670:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0671   (0x0003)  MISSED
	float                                              GeneratedStreamingDistanceMultiplier;                       // 0x0674   (0x0004)  
	class UFoliageType_InstancedStaticMesh*            GeneratedFoliageDefaultSettings;                            // 0x0678   (0x0008)  
	TArray<class UAssetUserData*>                      GeneratedAssetUserData;                                     // 0x0680   (0x0010)  
	FText                                              BakeFolder;                                                 // 0x0690   (0x0018)  
	FText                                              TempCookFolder;                                             // 0x06A8   (0x0018)  
	unsigned char                                      UnknownData03_7[0x340];                                     // 0x06C0   (0x0340)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
/// Size: 0x0018 (24 bytes) (0x000218 - 0x000230) align 16 pad: 0x0000
class UHoudiniInstancedActorComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0218   (0x0018)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
/// Size: 0x0028 (40 bytes) (0x000218 - 0x000240) align 16 pad: 0x0000
class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0218   (0x0028)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UHoudiniEngineCopyPropertiesInterface : public UInterface
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniHandleParameter
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UHoudiniHandleParameter : public UObject
{ 
public:
	class UHoudiniParameter*                           AssetParameter;                                             // 0x0030   (0x0008)  
	int32_t                                            TupleIndex;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniHandleComponent
/// Size: 0x0038 (56 bytes) (0x000218 - 0x000250) align 16 pad: 0x0000
class UHoudiniHandleComponent : public USceneComponent
{ 
public:
	TArray<class UHoudiniHandleParameter*>             XformParms;                                                 // 0x0218   (0x0010)  
	class UHoudiniHandleParameter*                     RSTParm;                                                    // 0x0228   (0x0008)  
	class UHoudiniHandleParameter*                     RotOrderParm;                                               // 0x0230   (0x0008)  
	EHoudiniHandleType                                 HandleType;                                                 // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0239   (0x0007)  MISSED
	FString                                            HandleName;                                                 // 0x0240   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.KuroHDAMeshInputConfig
/// Size: 0x000E (14 bytes) (0x000000 - 0x00000E) align 1 pad: 0x0000
struct FKuroHDAMeshInputConfig
{ 
	bool                                               CombineMesh;                                                // 0x0000   (0x0001)  
	bool                                               UVS;                                                        // 0x0001   (0x0001)  
	bool                                               Normals;                                                    // 0x0002   (0x0001)  
	bool                                               Tangent;                                                    // 0x0003   (0x0001)  
	bool                                               Binomal;                                                    // 0x0004   (0x0001)  
	bool                                               VertexColor;                                                // 0x0005   (0x0001)  
	bool                                               SmoothingMask;                                              // 0x0006   (0x0001)  
	bool                                               Material;                                                   // 0x0007   (0x0001)  
	bool                                               Lightmap;                                                   // 0x0008   (0x0001)  
	bool                                               MeshName;                                                   // 0x0009   (0x0001)  
	bool                                               SourceFile;                                                 // 0x000A   (0x0001)  
	bool                                               Tags;                                                       // 0x000B   (0x0001)  
	bool                                               KuroAssetTags;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x000D   (0x0001)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInput
/// Size: 0x02B8 (696 bytes) (0x000030 - 0x0002E8) align 8 pad: 0x0000
class UHoudiniInput : public UObject
{ 
public:
	FString                                            Name;                                                       // 0x0030   (0x0010)  
	FString                                            Label;                                                      // 0x0040   (0x0010)  
	EHoudiniInputType                                  Type;                                                       // 0x0050   (0x0001)  
	EHoudiniInputType                                  PreviousType;                                               // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0052   (0x0002)  MISSED
	int32_t                                            AssetNodeId;                                                // 0x0054   (0x0004)  
	int32_t                                            InputNodeId;                                                // 0x0058   (0x0004)  
	int32_t                                            InputIndex;                                                 // 0x005C   (0x0004)  
	int32_t                                            ParmId;                                                     // 0x0060   (0x0004)  
	bool                                               bIsObjectPathParameter;                                     // 0x0064   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	TArray<int32_t>                                    CreatedDataNodeIds;                                         // 0x0068   (0x0010)  
	bool                                               bHasChanged;                                                // 0x0078   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x0079   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x007A   (0x0006)  MISSED
	FString                                            Help;                                                       // 0x0080   (0x0010)  
	EHoudiniXformType                                  KeepWorldTransform;                                         // 0x0090   (0x0001)  
	bool                                               bPackBeforeMerge;                                           // 0x0091   (0x0001)  
	bool                                               bImportAsReference;                                         // 0x0092   (0x0001)  
	bool                                               bImportAsReferenceRotScaleEnabled;                          // 0x0093   (0x0001)  
	bool                                               bImportAsReferenceBboxEnabled;                              // 0x0094   (0x0001)  
	bool                                               bImportAsReferenceMaterialEnabled;                          // 0x0095   (0x0001)  
	bool                                               bExportLODs;                                                // 0x0096   (0x0001)  
	bool                                               bExportSockets;                                             // 0x0097   (0x0001)  
	bool                                               bExportColliders;                                           // 0x0098   (0x0001)  
	bool                                               bCookOnCurveChanged;                                        // 0x0099   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x009A   (0x0006)  MISSED
	TArray<class UHoudiniInputObject*>                 GeometryInputObjects;                                       // 0x00A0   (0x0010)  
	bool                                               bStaticMeshChanged;                                         // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
	TArray<class UHoudiniInputObject*>                 AssetInputObjects;                                          // 0x00B8   (0x0010)  
	bool                                               bInputAssetConnectedInHoudini;                              // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
	TArray<class UHoudiniInputObject*>                 CurveInputObjects;                                          // 0x00D0   (0x0010)  
	float                                              DefaultCurveOffset;                                         // 0x00E0   (0x0004)  
	bool                                               bAddRotAndScaleAttributesOnCurves;                          // 0x00E4   (0x0001)  
	bool                                               bUseLegacyInputCurves;                                      // 0x00E5   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x00E6   (0x0002)  MISSED
	TArray<class UHoudiniInputObject*>                 LandscapeInputObjects;                                      // 0x00E8   (0x0010)  
	bool                                               bLandscapeHasExportTypeChanged;                             // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
	TArray<class UHoudiniInputObject*>                 WorldInputObjects;                                          // 0x0100   (0x0010)  
	TArray<class AActor*>                              WorldInputBoundSelectorObjects;                             // 0x0110   (0x0010)  
	bool                                               bIsWorldInputBoundSelector;                                 // 0x0120   (0x0001)  
	bool                                               bWorldInputBoundSelectorAutoUpdate;                         // 0x0121   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x0122   (0x0002)  MISSED
	float                                              UnrealSplineResolution;                                     // 0x0124   (0x0004)  
	TArray<class UHoudiniInputObject*>                 SkeletalInputObjects;                                       // 0x0128   (0x0010)  
	TArray<class UHoudiniInputObject*>                 GeometryCollectionInputObjects;                             // 0x0138   (0x0010)  
	SDK_UNDEFINED(80,1389) /* TSet<ULandscapeComponent*> */ __um(LandscapeSelectedComponents);                     // 0x0148   (0x0050)  
	SDK_UNDEFINED(80,1390) /* TSet<int32_t> */         __um(InputNodesPendingDelete);                              // 0x0198   (0x0050)  
	TArray<class UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;                                         // 0x01E8   (0x0010)  
	TArray<class UHoudiniInputObject*>                 LastUndoDeletedInputs;                                      // 0x01F8   (0x0010)  
	bool                                               bUpdateInputLandscape;                                      // 0x0208   (0x0001)  
	EHoudiniLandscapeExportType                        LandscapeExportType;                                        // 0x0209   (0x0001)  
	bool                                               bLandscapeExportSelectionOnly;                              // 0x020A   (0x0001)  
	bool                                               bLandscapeAutoSelectComponent;                              // 0x020B   (0x0001)  
	bool                                               bLandscapeExportMaterials;                                  // 0x020C   (0x0001)  
	bool                                               bLandscapeExportLighting;                                   // 0x020D   (0x0001)  
	bool                                               bLandscapeExportNormalizedUVs;                              // 0x020E   (0x0001)  
	bool                                               bLandscapeExportTileUVs;                                    // 0x020F   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x0210   (0x0001)  
	bool                                               bIsWorldInputSelectByFolder;                                // 0x0211   (0x0001)  
	bool                                               bIsOnlyInputStaticMesh;                                     // 0x0212   (0x0001)  
	unsigned char                                      UnknownData09_6[0x5];                                       // 0x0213   (0x0005)  MISSED
	TArray<class UObject*>                             WorldInputAssetSelectorObjects;                             // 0x0218   (0x0010)  
	TArray<FString>                                    WorldInputTagSelectorObjects;                               // 0x0228   (0x0010)  
	bool                                               bIsCustomStaticMeshInput;                                   // 0x0238   (0x0001)  
	FKuroHDAMeshInputConfig                            MeshInputConfig;                                            // 0x0239   (0x000E)  
	unsigned char                                      UnknownData10_6[0x1];                                       // 0x0247   (0x0001)  MISSED
	SDK_UNDEFINED(80,1391) /* TMap<AActor*, FString> */ __um(KuroSplineJsonStrings);                               // 0x0248   (0x0050)  
	TArray<FString>                                    SelectedFolderCache;                                        // 0x0298   (0x0010)  
	bool                                               bIsInputWhiteBox;                                           // 0x02A8   (0x0001)  
	bool                                               bIsInputStaticMesh;                                         // 0x02A9   (0x0001)  
	bool                                               bIsInputLandscape;                                          // 0x02AA   (0x0001)  
	bool                                               bIsInputSpline;                                             // 0x02AB   (0x0001)  
	unsigned char                                      UnknownData11_6[0x4];                                       // 0x02AC   (0x0004)  MISSED
	FString                                            WhiteBoxTag;                                                // 0x02B0   (0x0010)  
	FString                                            LandscapeTag;                                               // 0x02C0   (0x0010)  
	FString                                            SplineTag;                                                  // 0x02D0   (0x0010)  
	bool                                               OnlyInputHeightField;                                       // 0x02E0   (0x0001)  
	EHoudiniPCGSplineType                              InputSplineType;                                            // 0x02E1   (0x0001)  
	unsigned char                                      UnknownData12_7[0x6];                                       // 0x02E2   (0x0006)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputObject
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x000100) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class UHoudiniInputObject : public UObject
{ 
public:
	SDK_UNDEFINED(48,1392) /* TWeakObjectPtr<UObject*> */ __um(InputObject);                                       // 0x0030   (0x0030)  
	FTransform                                         Transform;                                                  // 0x0060   (0x0030)  
	EHoudiniInputObjectType                            Type;                                                       // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	int32_t                                            InputNodeId;                                                // 0x0094   (0x0004)  
	int32_t                                            InputObjectNodeId;                                          // 0x0098   (0x0004)  
	FGuid                                              Guid;                                                       // 0x009C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x2C];                                      // 0x00AC   (0x002C)  MISSED
	bool                                               bHasChanged;                                                // 0x00D8   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x00D9   (0x0001)  
	bool                                               bTransformChanged;                                          // 0x00DA   (0x0001)  
	bool                                               bImportAsReference;                                         // 0x00DB   (0x0001)  
	bool                                               bImportAsReferenceRotScaleEnabled;                          // 0x00DC   (0x0001)  
	bool                                               bImportAsReferenceBboxEnabled;                              // 0x00DD   (0x0001)  
	bool                                               bImportAsReferenceMaterialEnabled;                          // 0x00DE   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x00DF   (0x0001)  MISSED
	TArray<FString>                                    MaterialReferences;                                         // 0x00E0   (0x0010)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x00F1   (0x0007)  MISSED
};
#pragma pack(pop)

/// Class /Script/HoudiniEngineRuntime.HoudiniInputStaticMesh
/// Size: 0x0008 (8 bytes) (0x0000F8 - 0x000100) align 16 pad: 0x0000
class UHoudiniInputStaticMesh : public UHoudiniInputObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSkeletalMesh
/// Size: 0x0008 (8 bytes) (0x0000F8 - 0x000100) align 16 pad: 0x0000
class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputGeometryCollection
/// Size: 0x0008 (8 bytes) (0x0000F8 - 0x000100) align 16 pad: 0x0000
class UHoudiniInputGeometryCollection : public UHoudiniInputObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSceneComponent
/// Size: 0x0038 (56 bytes) (0x0000F8 - 0x000130) align 16 pad: 0x0000
class UHoudiniInputSceneComponent : public UHoudiniInputObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FTransform                                         ActorTransform;                                             // 0x0100   (0x0030)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputMeshComponent
/// Size: 0x0030 (48 bytes) (0x000130 - 0x000160) align 16 pad: 0x0000
class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{ 
public:
	SDK_UNDEFINED(48,1393) /* TWeakObjectPtr<UStaticMesh*> */ __um(StaticMesh);                                    // 0x0130   (0x0030)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
/// Size: 0x0010 (16 bytes) (0x000160 - 0x000170) align 16 pad: 0x0000
class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{ 
public:
	TArray<FTransform>                                 InstanceTransforms;                                         // 0x0160   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSplineComponent
/// Size: 0x0020 (32 bytes) (0x000130 - 0x000150) align 16 pad: 0x0000
class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{ 
public:
	int32_t                                            NumberOfSplineControlPoints;                                // 0x0130   (0x0004)  
	float                                              SplineLength;                                               // 0x0134   (0x0004)  
	float                                              SplineResolution;                                           // 0x0138   (0x0004)  
	bool                                               SplineClosed;                                               // 0x013C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x013D   (0x0003)  MISSED
	TArray<FTransform>                                 SplineControlPoints;                                        // 0x0140   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
/// Size: 0x0000 (0 bytes) (0x000130 - 0x000130) align 16 pad: 0x0000
class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputSceneComponent
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
/// Size: 0x0000 (0 bytes) (0x000130 - 0x000130) align 16 pad: 0x0000
class UHoudiniInputSkeletalMeshComponent : public UHoudiniInputSceneComponent
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
/// Size: 0x0018 (24 bytes) (0x0000F8 - 0x000110) align 16 pad: 0x0000
class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{ 
public:
	EHoudiniCurveType                                  CurveType;                                                  // 0x00F8   (0x0001)  
	EHoudiniCurveMethod                                CurveMethod;                                                // 0x00F9   (0x0001)  
	bool                                               Reversed;                                                   // 0x00FA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00FB   (0x0005)  MISSED
	class UHoudiniSplineComponent*                     CachedComponent;                                            // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputCameraComponent
/// Size: 0x0020 (32 bytes) (0x000130 - 0x000150) align 16 pad: 0x0000
class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{ 
public:
	float                                              FOV;                                                        // 0x0130   (0x0004)  
	float                                              AspectRatio;                                                // 0x0134   (0x0004)  
	bool                                               bIsOrthographic;                                            // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0139   (0x0003)  MISSED
	float                                              OrthoWidth;                                                 // 0x013C   (0x0004)  
	float                                              OrthoNearClipPlane;                                         // 0x0140   (0x0004)  
	float                                              OrthoFarClipPlane;                                          // 0x0144   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputHoudiniAsset
/// Size: 0x0008 (8 bytes) (0x0000F8 - 0x000100) align 16 pad: 0x0000
class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{ 
public:
	int32_t                                            AssetOutputIndex;                                           // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputActor
/// Size: 0x0068 (104 bytes) (0x0000F8 - 0x000160) align 16 pad: 0x0000
class UHoudiniInputActor : public UHoudiniInputObject
{ 
public:
	TArray<class UHoudiniInputSceneComponent*>         ActorComponents;                                            // 0x00F8   (0x0010)  
	SDK_UNDEFINED(80,1394) /* TSet<TWeakObjectPtr<UObject*>> */ __um(ActorSceneComponents);                        // 0x0108   (0x0050)  
	int32_t                                            LastUpdateNumComponentsAdded;                               // 0x0158   (0x0004)  
	int32_t                                            LastUpdateNumComponentsRemoved;                             // 0x015C   (0x0004)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputLandscape
/// Size: 0x0040 (64 bytes) (0x000160 - 0x0001A0) align 16 pad: 0x0000
class UHoudiniInputLandscape : public UHoudiniInputActor
{ 
public:
	FTransform                                         CachedInputLandscapeTraqnsform;                             // 0x0160   (0x0030)  
	int32_t                                            CachedNumLandscapeComponents;                               // 0x0190   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0194   (0x000C)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBrushInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 pad: 0x0000
struct FHoudiniBrushInfo
{ 
	SDK_UNDEFINED(8,1395) /* TWeakObjectPtr<ABrush*> */ __um(BrushActor);                                          // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         CachedTransform;                                            // 0x0010   (0x0030)  
	FVector                                            CachedOrigin;                                               // 0x0040   (0x000C)  
	FVector                                            CachedExtent;                                               // 0x004C   (0x000C)  
	TEnumAsByte<EBrushType>                            CachedBrushType;                                            // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	uint64_t                                           CachedSurfaceHash;                                          // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputBrush
/// Size: 0x0020 (32 bytes) (0x000160 - 0x000180) align 16 pad: 0x0000
class UHoudiniInputBrush : public UHoudiniInputActor
{ 
public:
	TArray<FHoudiniBrushInfo>                          BrushesInfo;                                                // 0x0160   (0x0010)  
	class UModel*                                      CombinedModel;                                              // 0x0170   (0x0008)  
	bool                                               bIgnoreInputObject;                                         // 0x0178   (0x0001)  
	TEnumAsByte<EBrushType>                            CachedInputBrushType;                                       // 0x0179   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x017A   (0x0006)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputDataTable
/// Size: 0x0008 (8 bytes) (0x0000F8 - 0x000100) align 16 pad: 0x0000
class UHoudiniInputDataTable : public UHoudiniInputObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
/// Size: 0x0000 (0 bytes) (0x000100 - 0x000100) align 16 pad: 0x0000
class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputBlueprint
/// Size: 0x0068 (104 bytes) (0x0000F8 - 0x000160) align 16 pad: 0x0000
class UHoudiniInputBlueprint : public UHoudiniInputObject
{ 
public:
	TArray<class UHoudiniInputSceneComponent*>         BPComponents;                                               // 0x00F8   (0x0010)  
	SDK_UNDEFINED(80,1396) /* TSet<TWeakObjectPtr<UObject*>> */ __um(BPSceneComponents);                           // 0x0108   (0x0050)  
	int32_t                                            LastUpdateNumComponentsAdded;                               // 0x0158   (0x0004)  
	int32_t                                            LastUpdateNumComponentsRemoved;                             // 0x015C   (0x0004)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInstancedActorComponent
/// Size: 0x0018 (24 bytes) (0x000218 - 0x000230) align 16 pad: 0x0000
class UHoudiniInstancedActorComponent : public USceneComponent
{ 
public:
	class UObject*                                     InstancedObject;                                            // 0x0218   (0x0008)  
	TArray<class AActor*>                              InstancedActors;                                            // 0x0220   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
/// Size: 0x0028 (40 bytes) (0x000218 - 0x000240) align 16 pad: 0x0000
class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{ 
public:
	TArray<class UStaticMeshComponent*>                Instances;                                                  // 0x0218   (0x0010)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0228   (0x0010)  
	class UStaticMesh*                                 InstancedMesh;                                              // 0x0238   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniLandscapePtr
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 8 pad: 0x0000
class UHoudiniLandscapePtr : public UObject
{ 
public:
	SDK_UNDEFINED(48,1397) /* TWeakObjectPtr<ALandscapeProxy*> */ __um(LandscapeSoftPtr);                          // 0x0030   (0x0030)  
	EHoudiniLandscapeOutputBakeType                    BakeType;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	FName                                              EditLayerName;                                              // 0x0064   (0x000C)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniLandscapeEditLayer
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 8 pad: 0x0000
class UHoudiniLandscapeEditLayer : public UObject
{ 
public:
	SDK_UNDEFINED(48,1398) /* TWeakObjectPtr<ALandscapeProxy*> */ __um(LandscapeSoftPtr);                          // 0x0030   (0x0030)  
	FString                                            LayerName;                                                  // 0x0060   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniMeshSocket
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 pad: 0x0000
struct FHoudiniMeshSocket
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGeoPartObject
/// Size: 0x0230 (560 bytes) (0x000000 - 0x000230) align 16 pad: 0x0000
struct FHoudiniGeoPartObject
{ 
	int32_t                                            AssetId;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            AssetName;                                                  // 0x0008   (0x0010)  
	int32_t                                            ObjectId;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ObjectName;                                                 // 0x0020   (0x0010)  
	int32_t                                            GeoId;                                                      // 0x0030   (0x0004)  
	int32_t                                            PartId;                                                     // 0x0034   (0x0004)  
	FString                                            PartName;                                                   // 0x0038   (0x0010)  
	bool                                               bHasCustomPartName;                                         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<FString>                                    SplitGroups;                                                // 0x0050   (0x0010)  
	FTransform                                         TransformMatrix;                                            // 0x0060   (0x0030)  
	FString                                            NodePath;                                                   // 0x0090   (0x0010)  
	EHoudiniPartType                                   Type;                                                       // 0x00A0   (0x0001)  
	EHoudiniInstancerType                              InstancerType;                                              // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x00A2   (0x0006)  MISSED
	FString                                            VolumeName;                                                 // 0x00A8   (0x0010)  
	bool                                               bHasEditLayers;                                             // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	FString                                            VolumeLayerName;                                            // 0x00C0   (0x0010)  
	int32_t                                            VolumeTileIndex;                                            // 0x00D0   (0x0004)  
	bool                                               bIsVisible;                                                 // 0x00D4   (0x0001)  
	bool                                               bIsEditable;                                                // 0x00D5   (0x0001)  
	bool                                               bIsTemplated;                                               // 0x00D6   (0x0001)  
	bool                                               bIsInstanced;                                               // 0x00D7   (0x0001)  
	bool                                               bHasGeoChanged;                                             // 0x00D8   (0x0001)  
	bool                                               bHasPartChanged;                                            // 0x00D9   (0x0001)  
	bool                                               bHasTransformChanged;                                       // 0x00DA   (0x0001)  
	bool                                               bHasMaterialsChanged;                                       // 0x00DB   (0x0001)  
	unsigned char                                      UnknownData05_6[0x144];                                     // 0x00DC   (0x0144)  MISSED
	TArray<FHoudiniMeshSocket>                         AllMeshSockets;                                             // 0x0220   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniOutput
/// Size: 0x0188 (392 bytes) (0x000030 - 0x0001B8) align 8 pad: 0x0000
class UHoudiniOutput : public UObject
{ 
public:
	EHoudiniOutputType                                 Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FHoudiniGeoPartObject>                      HoudiniGeoPartObjects;                                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,1399) /* TMap<FHoudiniOutputObjectIdentifier, FHoudiniOutputObject> */ __um(OutputObjects);   // 0x0048   (0x0050)  
	SDK_UNDEFINED(80,1400) /* TMap<FHoudiniOutputObjectIdentifier, FHoudiniInstancedOutput> */ __um(InstancedOutputs); // 0x0098   (0x0050)  
	SDK_UNDEFINED(80,1401) /* TMap<FString, UMaterialInterface*> */ __um(AssignementMaterials);                    // 0x00E8   (0x0050)  
	SDK_UNDEFINED(80,1402) /* TMap<FString, UMaterialInterface*> */ __um(ReplacementMaterials);                    // 0x0138   (0x0050)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0188   (0x0004)  MISSED
	bool                                               bLandscapeWorldComposition;                                 // 0x018C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x018D   (0x0003)  MISSED
	TArray<class AActor*>                              HoudiniCreatedSocketActors;                                 // 0x0190   (0x0010)  
	TArray<class AActor*>                              HoudiniAttachedSocketActors;                                // 0x01A0   (0x0010)  
	bool                                               bIsEditableNode;                                            // 0x01B0   (0x0001)  
	bool                                               bHasEditableNodeBuilt;                                      // 0x01B1   (0x0001)  
	bool                                               bIsUpdating;                                                // 0x01B2   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x01B3   (0x0001)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x01B4   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameter
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x000110) align 8 pad: 0x0000
class UHoudiniParameter : public UObject
{ 
public:
	FString                                            Name;                                                       // 0x0030   (0x0010)  
	FString                                            Label;                                                      // 0x0040   (0x0010)  
	EHoudiniParameterType                              ParmType;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	uint32_t                                           TupleSize;                                                  // 0x0054   (0x0004)  
	int32_t                                            NodeID;                                                     // 0x0058   (0x0004)  
	int32_t                                            ParmId;                                                     // 0x005C   (0x0004)  
	int32_t                                            ParentParmId;                                               // 0x0060   (0x0004)  
	int32_t                                            ChildIndex;                                                 // 0x0064   (0x0004)  
	bool                                               bIsVisible;                                                 // 0x0068   (0x0001)  
	bool                                               bIsParentFolderVisible;                                     // 0x0069   (0x0001)  
	bool                                               bIsDisabled;                                                // 0x006A   (0x0001)  
	bool                                               bHasChanged;                                                // 0x006B   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x006C   (0x0001)  
	bool                                               bIsDefault;                                                 // 0x006D   (0x0001)  
	bool                                               bIsSpare;                                                   // 0x006E   (0x0001)  
	bool                                               bJoinNext;                                                  // 0x006F   (0x0001)  
	bool                                               bIsChildOfMultiParm;                                        // 0x0070   (0x0001)  
	bool                                               bIsDirectChildOfMultiParm;                                  // 0x0071   (0x0001)  
	bool                                               bPendingRevertToDefault;                                    // 0x0072   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0073   (0x0005)  MISSED
	TArray<int32_t>                                    TuplePendingRevertToDefault;                                // 0x0078   (0x0010)  
	FString                                            Help;                                                       // 0x0088   (0x0010)  
	uint32_t                                           TagCount;                                                   // 0x0098   (0x0004)  
	int32_t                                            ValueIndex;                                                 // 0x009C   (0x0004)  
	bool                                               bHasExpression;                                             // 0x00A0   (0x0001)  
	bool                                               bShowExpression;                                            // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00A2   (0x0006)  MISSED
	FString                                            ParamExpression;                                            // 0x00A8   (0x0010)  
	SDK_UNDEFINED(80,1403) /* TMap<FString, FString> */ __um(Tags);                                                // 0x00B8   (0x0050)  
	bool                                               bAutoUpdate;                                                // 0x0108   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0109   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterButton
/// Size: 0x0000 (0 bytes) (0x000110 - 0x000110) align 8 pad: 0x0000
class UHoudiniParameterButton : public UHoudiniParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterButtonStrip
/// Size: 0x0028 (40 bytes) (0x000110 - 0x000138) align 8 pad: 0x0000
class UHoudiniParameterButtonStrip : public UHoudiniParameter
{ 
public:
	int32_t                                            Count;                                                      // 0x0110   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0114   (0x0004)  MISSED
	TArray<FString>                                    Labels;                                                     // 0x0118   (0x0010)  
	TArray<int32_t>                                    Values;                                                     // 0x0128   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterChoice
/// Size: 0x0070 (112 bytes) (0x000110 - 0x000180) align 8 pad: 0x0000
class UHoudiniParameterChoice : public UHoudiniParameter
{ 
public:
	int32_t                                            IntValue;                                                   // 0x0110   (0x0004)  
	int32_t                                            DefaultIntValue;                                            // 0x0114   (0x0004)  
	FString                                            StringValue;                                                // 0x0118   (0x0010)  
	FString                                            DefaultStringValue;                                         // 0x0128   (0x0010)  
	TArray<FString>                                    StringChoiceValues;                                         // 0x0138   (0x0010)  
	TArray<FString>                                    StringChoiceLabels;                                         // 0x0148   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0158   (0x0010)  MISSED
	bool                                               bIsChildOfRamp;                                             // 0x0168   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0169   (0x0007)  MISSED
	TArray<int32_t>                                    IntValuesArray;                                             // 0x0170   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterColor
/// Size: 0x0028 (40 bytes) (0x000110 - 0x000138) align 8 pad: 0x0000
class UHoudiniParameterColor : public UHoudiniParameter
{ 
public:
	FLinearColor                                       Color;                                                      // 0x0110   (0x0010)  
	FLinearColor                                       DefaultColor;                                               // 0x0120   (0x0010)  
	bool                                               bIsChildOfRamp;                                             // 0x0130   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0131   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFile
/// Size: 0x0038 (56 bytes) (0x000110 - 0x000148) align 8 pad: 0x0000
class UHoudiniParameterFile : public UHoudiniParameter
{ 
public:
	TArray<FString>                                    Values;                                                     // 0x0110   (0x0010)  
	TArray<FString>                                    DefaultValues;                                              // 0x0120   (0x0010)  
	FString                                            Filters;                                                    // 0x0130   (0x0010)  
	bool                                               bIsReadOnly;                                                // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0141   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFloat
/// Size: 0x0050 (80 bytes) (0x000110 - 0x000160) align 8 pad: 0x0000
class UHoudiniParameterFloat : public UHoudiniParameter
{ 
public:
	TArray<float>                                      Values;                                                     // 0x0110   (0x0010)  
	TArray<float>                                      DefaultValues;                                              // 0x0120   (0x0010)  
	FString                                            Unit;                                                       // 0x0130   (0x0010)  
	bool                                               bNoSwap;                                                    // 0x0140   (0x0001)  
	bool                                               bHasMin;                                                    // 0x0141   (0x0001)  
	bool                                               bHasMax;                                                    // 0x0142   (0x0001)  
	bool                                               bHasUIMin;                                                  // 0x0143   (0x0001)  
	bool                                               bHasUIMax;                                                  // 0x0144   (0x0001)  
	bool                                               bIsLogarithmic;                                             // 0x0145   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0146   (0x0002)  MISSED
	float                                              Min;                                                        // 0x0148   (0x0004)  
	float                                              Max;                                                        // 0x014C   (0x0004)  
	float                                              UIMin;                                                      // 0x0150   (0x0004)  
	float                                              UIMax;                                                      // 0x0154   (0x0004)  
	bool                                               bIsChildOfRamp;                                             // 0x0158   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0159   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFolder
/// Size: 0x0010 (16 bytes) (0x000110 - 0x000120) align 8 pad: 0x0000
class UHoudiniParameterFolder : public UHoudiniParameter
{ 
public:
	EHoudiniFolderParameterType                        FolderType;                                                 // 0x0110   (0x0001)  
	bool                                               bExpanded;                                                  // 0x0111   (0x0001)  
	bool                                               bChosen;                                                    // 0x0112   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0113   (0x0001)  MISSED
	int32_t                                            ChildCounter;                                               // 0x0114   (0x0004)  
	bool                                               bIsContentShown;                                            // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0119   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFolderList
/// Size: 0x0018 (24 bytes) (0x000110 - 0x000128) align 8 pad: 0x0000
class UHoudiniParameterFolderList : public UHoudiniParameter
{ 
public:
	bool                                               bIsTabMenu;                                                 // 0x0110   (0x0001)  
	bool                                               bIsTabsShown;                                               // 0x0111   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0112   (0x0006)  MISSED
	TArray<class UHoudiniParameterFolder*>             TabFolders;                                                 // 0x0118   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterInt
/// Size: 0x0048 (72 bytes) (0x000110 - 0x000158) align 8 pad: 0x0000
class UHoudiniParameterInt : public UHoudiniParameter
{ 
public:
	TArray<int32_t>                                    Values;                                                     // 0x0110   (0x0010)  
	TArray<int32_t>                                    DefaultValues;                                              // 0x0120   (0x0010)  
	FString                                            Unit;                                                       // 0x0130   (0x0010)  
	bool                                               bHasMin;                                                    // 0x0140   (0x0001)  
	bool                                               bHasMax;                                                    // 0x0141   (0x0001)  
	bool                                               bHasUIMin;                                                  // 0x0142   (0x0001)  
	bool                                               bHasUIMax;                                                  // 0x0143   (0x0001)  
	bool                                               bIsLogarithmic;                                             // 0x0144   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0145   (0x0003)  MISSED
	int32_t                                            Min;                                                        // 0x0148   (0x0004)  
	int32_t                                            Max;                                                        // 0x014C   (0x0004)  
	int32_t                                            UIMin;                                                      // 0x0150   (0x0004)  
	int32_t                                            UIMax;                                                      // 0x0154   (0x0004)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterLabel
/// Size: 0x0010 (16 bytes) (0x000110 - 0x000120) align 8 pad: 0x0000
class UHoudiniParameterLabel : public UHoudiniParameter
{ 
public:
	TArray<FString>                                    LabelStrings;                                               // 0x0110   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterMultiParm
/// Size: 0x0048 (72 bytes) (0x000110 - 0x000158) align 8 pad: 0x0000
class UHoudiniParameterMultiParm : public UHoudiniParameter
{ 
public:
	bool                                               bIsShown;                                                   // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0111   (0x0003)  MISSED
	int32_t                                            Value;                                                      // 0x0114   (0x0004)  
	FString                                            TemplateName;                                               // 0x0118   (0x0010)  
	int32_t                                            MultiparmValue;                                             // 0x0128   (0x0004)  
	uint32_t                                           MultiParmInstanceNum;                                       // 0x012C   (0x0004)  
	uint32_t                                           MultiParmInstanceLength;                                    // 0x0130   (0x0004)  
	uint32_t                                           MultiParmInstanceCount;                                     // 0x0134   (0x0004)  
	uint32_t                                           InstanceStartOffset;                                        // 0x0138   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	TArray<EHoudiniMultiParmModificationType>          MultiParmInstanceLastModifyArray;                           // 0x0140   (0x0010)  
	int32_t                                            DefaultInstanceCount;                                       // 0x0150   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterOperatorPath
/// Size: 0x0008 (8 bytes) (0x000110 - 0x000118) align 8 pad: 0x0000
class UHoudiniParameterOperatorPath : public UHoudiniParameter
{ 
public:
	SDK_UNDEFINED(8,1404) /* TWeakObjectPtr<UHoudiniInput*> */ __um(HoudiniInput);                                 // 0x0110   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
/// Size: 0x0028 (40 bytes) (0x000030 - 0x000058) align 8 pad: 0x0000
class UHoudiniParameterRampModificationEvent : public UObject
{ 
public:
	bool                                               bIsInsertEvent;                                             // 0x0030   (0x0001)  
	bool                                               bIsFloatRamp;                                               // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            DeleteInstanceIndex;                                        // 0x0034   (0x0004)  
	float                                              InsertPosition;                                             // 0x0038   (0x0004)  
	float                                              InsertFloat;                                                // 0x003C   (0x0004)  
	FLinearColor                                       InsertColor;                                                // 0x0040   (0x0010)  
	EHoudiniRampInterpolationType                      InsertInterpolation;                                        // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
/// Size: 0x0028 (40 bytes) (0x000030 - 0x000058) align 8 pad: 0x0000
class UHoudiniParameterRampFloatPoint : public UObject
{ 
public:
	float                                              Position;                                                   // 0x0030   (0x0004)  
	float                                              Value;                                                      // 0x0034   (0x0004)  
	EHoudiniRampInterpolationType                      Interpolation;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            InstanceIndex;                                              // 0x003C   (0x0004)  
	class UHoudiniParameterFloat*                      PositionParentParm;                                         // 0x0040   (0x0008)  
	class UHoudiniParameterFloat*                      ValueParentParm;                                            // 0x0048   (0x0008)  
	class UHoudiniParameterChoice*                     InterpolationParentParm;                                    // 0x0050   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampColorPoint
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000068) align 8 pad: 0x0000
class UHoudiniParameterRampColorPoint : public UObject
{ 
public:
	float                                              Position;                                                   // 0x0030   (0x0004)  
	FLinearColor                                       Value;                                                      // 0x0034   (0x0010)  
	EHoudiniRampInterpolationType                      Interpolation;                                              // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	int32_t                                            InstanceIndex;                                              // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	class UHoudiniParameterFloat*                      PositionParentParm;                                         // 0x0050   (0x0008)  
	class UHoudiniParameterColor*                      ValueParentParm;                                            // 0x0058   (0x0008)  
	class UHoudiniParameterChoice*                     InterpolationParentParm;                                    // 0x0060   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampFloat
/// Size: 0x0068 (104 bytes) (0x000158 - 0x0001C0) align 8 pad: 0x0000
class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{ 
public:
	TArray<class UHoudiniParameterRampFloatPoint*>     Points;                                                     // 0x0158   (0x0010)  
	TArray<class UHoudiniParameterRampFloatPoint*>     CachedPoints;                                               // 0x0168   (0x0010)  
	TArray<float>                                      DefaultPositions;                                           // 0x0178   (0x0010)  
	TArray<float>                                      DefaultValues;                                              // 0x0188   (0x0010)  
	TArray<int32_t>                                    DefaultChoices;                                             // 0x0198   (0x0010)  
	int32_t                                            NumDefaultPoints;                                           // 0x01A8   (0x0004)  
	bool                                               bCaching;                                                   // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01AD   (0x0003)  MISSED
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                      // 0x01B0   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampColor
/// Size: 0x0070 (112 bytes) (0x000158 - 0x0001C8) align 8 pad: 0x0000
class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{ 
public:
	TArray<class UHoudiniParameterRampColorPoint*>     Points;                                                     // 0x0158   (0x0010)  
	bool                                               bCaching;                                                   // 0x0168   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0169   (0x0007)  MISSED
	TArray<class UHoudiniParameterRampColorPoint*>     CachedPoints;                                               // 0x0170   (0x0010)  
	TArray<float>                                      DefaultPositions;                                           // 0x0180   (0x0010)  
	TArray<FLinearColor>                               DefaultValues;                                              // 0x0190   (0x0010)  
	TArray<int32_t>                                    DefaultChoices;                                             // 0x01A0   (0x0010)  
	int32_t                                            NumDefaultPoints;                                           // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                      // 0x01B8   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterSeparator
/// Size: 0x0000 (0 bytes) (0x000110 - 0x000110) align 8 pad: 0x0000
class UHoudiniParameterSeparator : public UHoudiniParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterString
/// Size: 0x0038 (56 bytes) (0x000110 - 0x000148) align 8 pad: 0x0000
class UHoudiniParameterString : public UHoudiniParameter
{ 
public:
	TArray<FString>                                    Values;                                                     // 0x0110   (0x0010)  
	TArray<FString>                                    DefaultValues;                                              // 0x0120   (0x0010)  
	TArray<class UObject*>                             ChosenAssets;                                               // 0x0130   (0x0010)  
	bool                                               bIsAssetRef;                                                // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0141   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterToggle
/// Size: 0x0020 (32 bytes) (0x000110 - 0x000130) align 8 pad: 0x0000
class UHoudiniParameterToggle : public UHoudiniParameter
{ 
public:
	TArray<int32_t>                                    Values;                                                     // 0x0110   (0x0010)  
	TArray<int32_t>                                    DefaultValues;                                              // 0x0120   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.OutputActorOwner
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FOutputActorOwner
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      OutputActor;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/HoudiniEngineRuntime.TOPWorkResultObject
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FTOPWorkResultObject
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            FilePath;                                                   // 0x0018   (0x0010)  
	EPDGWorkResultState                                State;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            WorkItemResultInfoIndex;                                    // 0x002C   (0x0004)  
	TArray<class UHoudiniOutput*>                      ResultOutputs;                                              // 0x0030   (0x0010)  
	bool                                               bAutoBakedSinceLastLoad;                                    // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	FOutputActorOwner                                  OutputActorOwner;                                           // 0x0048   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.TOPWorkResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FTOPWorkResult
{ 
	int32_t                                            WorkItemIndex;                                              // 0x0000   (0x0004)  
	int32_t                                            WorkItemID;                                                 // 0x0004   (0x0004)  
	TArray<FTOPWorkResultObject>                       ResultObjects;                                              // 0x0008   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.WorkItemTallyBase
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FWorkItemTallyBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.WorkItemTally
/// Size: 0x0230 (560 bytes) (0x000008 - 0x000238) align 8 pad: 0x0000
struct FWorkItemTally : FWorkItemTallyBase
{ 
	SDK_UNDEFINED(80,1405) /* TSet<int32_t> */         __um(AllWorkItems);                                         // 0x0008   (0x0050)  
	SDK_UNDEFINED(80,1406) /* TSet<int32_t> */         __um(WaitingWorkItems);                                     // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,1407) /* TSet<int32_t> */         __um(ScheduledWorkItems);                                   // 0x00A8   (0x0050)  
	SDK_UNDEFINED(80,1408) /* TSet<int32_t> */         __um(CookingWorkItems);                                     // 0x00F8   (0x0050)  
	SDK_UNDEFINED(80,1409) /* TSet<int32_t> */         __um(CookedWorkItems);                                      // 0x0148   (0x0050)  
	SDK_UNDEFINED(80,1410) /* TSet<int32_t> */         __um(ErroredWorkItems);                                     // 0x0198   (0x0050)  
	SDK_UNDEFINED(80,1411) /* TSet<int32_t> */         __um(CookCancelledWorkItems);                               // 0x01E8   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.AggregatedWorkItemTally
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FAggregatedWorkItemTally : FWorkItemTallyBase
{ 
	int32_t                                            TotalWorkItems;                                             // 0x0008   (0x0004)  
	int32_t                                            WaitingWorkItems;                                           // 0x000C   (0x0004)  
	int32_t                                            ScheduledWorkItems;                                         // 0x0010   (0x0004)  
	int32_t                                            CookingWorkItems;                                           // 0x0014   (0x0004)  
	int32_t                                            CookedWorkItems;                                            // 0x0018   (0x0004)  
	int32_t                                            ErroredWorkItems;                                           // 0x001C   (0x0004)  
	int32_t                                            CookCancelledWorkItems;                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.TOPNode
/// Size: 0x0400 (1024 bytes) (0x000030 - 0x000430) align 16 pad: 0x0000
class UTOPNode : public UObject
{ 
public:
	int32_t                                            NodeID;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            NodeName;                                                   // 0x0038   (0x0010)  
	FString                                            NodePath;                                                   // 0x0048   (0x0010)  
	FString                                            ParentName;                                                 // 0x0058   (0x0010)  
	class UObject*                                     WorkResultParent;                                           // 0x0068   (0x0008)  
	TArray<FTOPWorkResult>                             WorkResult;                                                 // 0x0070   (0x0010)  
	bool                                               bHidden;                                                    // 0x0080   (0x0001)  
	bool                                               bAutoLoad;                                                  // 0x0081   (0x0001)  
	EPDGNodeState                                      NodeState;                                                  // 0x0082   (0x0001)  
	bool                                               bCachedHaveNotLoadedWorkResults;                            // 0x0083   (0x0001)  
	bool                                               bCachedHaveLoadedWorkResults;                               // 0x0084   (0x0001)  
	bool                                               bHasChildNodes;                                             // 0x0085   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0086   (0x0002)  MISSED
	SDK_UNDEFINED(80,1412) /* TSet<FString> */         __um(ClearedLandscapeLayers);                               // 0x0088   (0x0050)  
	unsigned char                                      UnknownData02_6[0x88];                                      // 0x00D8   (0x0088)  MISSED
	bool                                               bShow;                                                      // 0x0160   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0161   (0x0007)  MISSED
	SDK_UNDEFINED(80,1413) /* TMap<FString, FHoudiniPDGWorkResultObjectBakedOutput> */ __um(BakedWorkResultObjectOutputs); // 0x0168   (0x0050)  
	FWorkItemTally                                     WorkItemTally;                                              // 0x01B8   (0x0238)  
	FAggregatedWorkItemTally                           AggregatedWorkItemTally;                                    // 0x03F0   (0x0028)  
	bool                                               bHasReceivedCookCompleteEvent;                              // 0x0418   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0419   (0x0007)  MISSED
	FOutputActorOwner                                  OutputActorOwner;                                           // 0x0420   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.TOPNetwork
/// Size: 0x0070 (112 bytes) (0x000030 - 0x0000A0) align 8 pad: 0x0000
class UTOPNetwork : public UObject
{ 
public:
	int32_t                                            NodeID;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            NodeName;                                                   // 0x0038   (0x0010)  
	FString                                            NodePath;                                                   // 0x0048   (0x0010)  
	TArray<class UTOPNode*>                            AllTOPNodes;                                                // 0x0058   (0x0010)  
	int32_t                                            SelectedTOPIndex;                                           // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            ParentName;                                                 // 0x0070   (0x0010)  
	bool                                               bShowResults;                                               // 0x0080   (0x0001)  
	bool                                               bAutoLoadResults;                                           // 0x0081   (0x0001)  
	unsigned char                                      UnknownData02_7[0x1E];                                      // 0x0082   (0x001E)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniPDGAssetLink
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000138) align 8 pad: 0x0000
class UHoudiniPDGAssetLink : public UObject
{ 
public:
	FString                                            AssetName;                                                  // 0x0030   (0x0010)  
	FString                                            AssetNodePath;                                              // 0x0040   (0x0010)  
	int32_t                                            AssetId;                                                    // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<class UTOPNetwork*>                         AllTOPNetworks;                                             // 0x0058   (0x0010)  
	int32_t                                            SelectedTOPNetworkIndex;                                    // 0x0068   (0x0004)  
	EPDGLinkState                                      LinkState;                                                  // 0x006C   (0x0001)  
	bool                                               bAutoCook;                                                  // 0x006D   (0x0001)  
	bool                                               bUseTOPNodeFilter;                                          // 0x006E   (0x0001)  
	bool                                               bUseTOPOutputFilter;                                        // 0x006F   (0x0001)  
	FString                                            TOPNodeFilter;                                              // 0x0070   (0x0010)  
	FString                                            TOPOutputFilter;                                            // 0x0080   (0x0010)  
	int32_t                                            NumWorkItems;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FAggregatedWorkItemTally                           WorkItemTally;                                              // 0x0098   (0x0028)  
	FString                                            OutputCachePath;                                            // 0x00C0   (0x0010)  
	bool                                               bNeedsUIRefresh;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
	class AActor*                                      OutputParentActor;                                          // 0x00D8   (0x0008)  
	FDirectoryPath                                     BakeFolder;                                                 // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData03_7[0x48];                                      // 0x00F0   (0x0048)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniRuntimeSettings
/// Size: 0x02D0 (720 bytes) (0x000030 - 0x000300) align 8 pad: 0x0000
class UHoudiniRuntimeSettings : public UObject
{ 
public:
	TEnumAsByte<EHoudiniRuntimeSettingsSessionType>    SessionType;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FString                                            ServerHost;                                                 // 0x0038   (0x0010)  
	int32_t                                            ServerPort;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FString                                            ServerPipeName;                                             // 0x0050   (0x0010)  
	bool                                               bStartAutomaticServer;                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              AutomaticServerTimeout;                                     // 0x0064   (0x0004)  
	bool                                               bSyncWithHoudiniCook;                                       // 0x0068   (0x0001)  
	bool                                               bCookUsingHoudiniTime;                                      // 0x0069   (0x0001)  
	bool                                               bSyncViewport;                                              // 0x006A   (0x0001)  
	bool                                               bSyncHoudiniViewport;                                       // 0x006B   (0x0001)  
	bool                                               bSyncUnrealViewport;                                        // 0x006C   (0x0001)  
	bool                                               bShowMultiAssetDialog;                                      // 0x006D   (0x0001)  
	bool                                               bPreferHdaMemoryCopyOverHdaSourceFile;                      // 0x006E   (0x0001)  
	bool                                               bPauseCookingOnStart;                                       // 0x006F   (0x0001)  
	bool                                               bDisplaySlateCookingNotifications;                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	FString                                            DefaultTemporaryCookFolder;                                 // 0x0078   (0x0010)  
	FString                                            DefaultBakeFolder;                                          // 0x0088   (0x0010)  
	bool                                               bEnableTheReferenceCountedInputSystem;                      // 0x0098   (0x0001)  
	bool                                               MarshallingLandscapesUseDefaultUnrealScaling;               // 0x0099   (0x0001)  
	bool                                               MarshallingLandscapesUseFullResolution;                     // 0x009A   (0x0001)  
	bool                                               MarshallingLandscapesForceMinMaxValues;                     // 0x009B   (0x0001)  
	float                                              MarshallingLandscapesForcedMinValue;                        // 0x009C   (0x0004)  
	float                                              MarshallingLandscapesForcedMaxValue;                        // 0x00A0   (0x0004)  
	bool                                               bAddRotAndScaleAttributesOnCurves;                          // 0x00A4   (0x0001)  
	bool                                               bUseLegacyInputCurves;                                      // 0x00A5   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x00A6   (0x0002)  MISSED
	float                                              MarshallingSplineResolution;                                // 0x00A8   (0x0004)  
	bool                                               bEnableProxyStaticMesh;                                     // 0x00AC   (0x0001)  
	bool                                               bShowDefaultMesh;                                           // 0x00AD   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementByTimer;                    // 0x00AE   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1];                                       // 0x00AF   (0x0001)  MISSED
	float                                              ProxyMeshAutoRefineTimeoutSeconds;                          // 0x00B0   (0x0004)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreSaveWorld;             // 0x00B4   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreBeginPIE;              // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x00B6   (0x0002)  MISSED
	bool                                               bDoubleSidedGeometry : 1;                                   // 0x00B8:0 (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	class UPhysicalMaterial*                           PhysMaterial;                                               // 0x00C0   (0x0008)  
	FBodyInstance                                      DefaultBodyInstance;                                        // 0x00C8   (0x0160)  
	TEnumAsByte<ECollisionTraceFlag>                   CollisionTraceFlag;                                         // 0x0228   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x0229   (0x0003)  MISSED
	int32_t                                            LightMapResolution;                                         // 0x022C   (0x0004)  
	float                                              LpvBiasMultiplier;                                          // 0x0230   (0x0004)  
	float                                              GeneratedDistanceFieldResolutionScale;                      // 0x0234   (0x0004)  
	FWalkableSlopeOverride                             WalkableSlopeOverride;                                      // 0x0238   (0x0010)  
	int32_t                                            LightMapCoordinateIndex;                                    // 0x0248   (0x0004)  
	bool                                               bUseMaximumStreamingTexelRatio : 1;                         // 0x024C:0 (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x024D   (0x0003)  MISSED
	float                                              StreamingDistanceMultiplier;                                // 0x0250   (0x0004)  
	unsigned char                                      UnknownData10_6[0x4];                                       // 0x0254   (0x0004)  MISSED
	class UFoliageType_InstancedStaticMesh*            FoliageDefaultSettings;                                     // 0x0258   (0x0008)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0260   (0x0010)  
	bool                                               bUseFullPrecisionUVs;                                       // 0x0270   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x0271   (0x0003)  MISSED
	int32_t                                            SrcLightmapIndex;                                           // 0x0274   (0x0004)  
	int32_t                                            DstLightmapIndex;                                           // 0x0278   (0x0004)  
	int32_t                                            MinLightmapResolution;                                      // 0x027C   (0x0004)  
	bool                                               bRemoveDegenerates;                                         // 0x0280   (0x0001)  
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  GenerateLightmapUVsFlag;                                    // 0x0281   (0x0001)  
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeNormalsFlag;                                       // 0x0282   (0x0001)  
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeTangentsFlag;                                      // 0x0283   (0x0001)  
	bool                                               bUseMikkTSpace;                                             // 0x0284   (0x0001)  
	bool                                               bBuildAdjacencyBuffer;                                      // 0x0285   (0x0001)  
	bool                                               bComputeWeightedNormals : 1;                                // 0x0286:0 (0x0001)  
	bool                                               bBuildReversedIndexBuffer : 1;                              // 0x0286:1 (0x0001)  
	bool                                               bUseHighPrecisionTangentBasis : 1;                          // 0x0286:2 (0x0001)  
	unsigned char                                      UnknownData12_5[0x1];                                       // 0x0287   (0x0001)  MISSED
	float                                              DistanceFieldResolutionScale;                               // 0x0288   (0x0004)  
	bool                                               bGenerateDistanceFieldAsIfTwoSided : 1;                     // 0x028C:0 (0x0001)  
	bool                                               bSupportFaceRemap : 1;                                      // 0x028C:1 (0x0001)  
	bool                                               bPDGAsyncCommandletImportEnabled;                           // 0x028D   (0x0001)  
	bool                                               bEnableBackwardCompatibility;                               // 0x028E   (0x0001)  
	bool                                               bAutomaticLegacyHDARebuild;                                 // 0x028F   (0x0001)  
	bool                                               bUseCustomHoudiniLocation;                                  // 0x0290   (0x0001)  
	unsigned char                                      UnknownData13_6[0x7];                                       // 0x0291   (0x0007)  MISSED
	FDirectoryPath                                     CustomHoudiniLocation;                                      // 0x0298   (0x0010)  
	TEnumAsByte<EHoudiniExecutableType>                HoudiniExecutable;                                          // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData14_6[0x3];                                       // 0x02A9   (0x0003)  MISSED
	int32_t                                            CookingThreadStackSize;                                     // 0x02AC   (0x0004)  
	FString                                            HoudiniEnvironmentFiles;                                    // 0x02B0   (0x0010)  
	FString                                            OtlSearchPath;                                              // 0x02C0   (0x0010)  
	FString                                            DsoSearchPath;                                              // 0x02D0   (0x0010)  
	FString                                            ImageDsoSearchPath;                                         // 0x02E0   (0x0010)  
	FString                                            AudioDsoSearchPath;                                         // 0x02F0   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniSplineComponent
/// Size: 0x02A8 (680 bytes) (0x000218 - 0x0004C0) align 16 pad: 0x0000
class UHoudiniSplineComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0218   (0x0008)  MISSED
	TArray<FTransform>                                 CurvePoints;                                                // 0x0220   (0x0010)  
	TArray<FVector>                                    DisplayPoints;                                              // 0x0230   (0x0010)  
	TArray<int32_t>                                    DisplayPointIndexDivider;                                   // 0x0240   (0x0010)  
	FString                                            HoudiniSplineName;                                          // 0x0250   (0x0010)  
	bool                                               bClosed;                                                    // 0x0260   (0x0001)  
	bool                                               bReversed;                                                  // 0x0261   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0262   (0x0002)  MISSED
	int32_t                                            CurveOrder;                                                 // 0x0264   (0x0004)  
	bool                                               bIsHoudiniSplineVisible;                                    // 0x0268   (0x0001)  
	EHoudiniCurveType                                  CurveType;                                                  // 0x0269   (0x0001)  
	EHoudiniCurveMethod                                CurveMethod;                                                // 0x026A   (0x0001)  
	EHoudiniCurveBreakpointParameterization            CurveBreakpointParameterization;                            // 0x026B   (0x0001)  
	bool                                               bIsOutputCurve;                                             // 0x026C   (0x0001)  
	bool                                               bCookOnCurveChanged;                                        // 0x026D   (0x0001)  
	bool                                               bIsLegacyInputCurve;                                        // 0x026E   (0x0001)  
	unsigned char                                      UnknownData02_6[0x231];                                     // 0x026F   (0x0231)  MISSED
	bool                                               bHasChanged;                                                // 0x04A0   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x04A1   (0x0001)  
	bool                                               bIsInputCurve;                                              // 0x04A2   (0x0001)  
	bool                                               bIsEditableOutputCurve;                                     // 0x04A3   (0x0001)  
	int32_t                                            NodeID;                                                     // 0x04A4   (0x0004)  
	FString                                            PartName;                                                   // 0x04A8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x04B8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniStaticMesh
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000D0) align 8 pad: 0x0000
class UHoudiniStaticMesh : public UObject
{ 
public:
	bool                                               bHasNormals;                                                // 0x0030   (0x0001)  
	bool                                               bHasTangents;                                               // 0x0031   (0x0001)  
	bool                                               bHasColors;                                                 // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0033   (0x0001)  MISSED
	uint32_t                                           NumUVLayers;                                                // 0x0034   (0x0004)  
	bool                                               bHasPerFaceMaterials;                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FVector>                                    VertexPositions;                                            // 0x0040   (0x0010)  
	TArray<FIntVector>                                 TriangleIndices;                                            // 0x0050   (0x0010)  
	TArray<FColor>                                     VertexInstanceColors;                                       // 0x0060   (0x0010)  
	TArray<FVector>                                    VertexInstanceNormals;                                      // 0x0070   (0x0010)  
	TArray<FVector>                                    VertexInstanceUTangents;                                    // 0x0080   (0x0010)  
	TArray<FVector>                                    VertexInstanceVTangents;                                    // 0x0090   (0x0010)  
	TArray<FVector2D>                                  VertexInstanceUVs;                                          // 0x00A0   (0x0010)  
	TArray<int32_t>                                    MaterialIDsPerTriangle;                                     // 0x00B0   (0x0010)  
	TArray<FStaticMaterial>                            StaticMaterials;                                            // 0x00C0   (0x0010)  
	// void SetVertexPosition(uint32_t InVertexIndex, FVector& InPosition);                                                     // [0x15d0cd0] Final|Native|Public|HasOutParms|HasDefaults 
	// void SetTriangleVertexVTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, FVector& InVTangent);               // [0x15d0bb0] Final|Native|Public|HasOutParms|HasDefaults 
	// void SetTriangleVertexUV(uint32_t InTriangleIndex, char InTriangleVertexIndex, char InUVLayer, FVector2D& InUV);         // [0x15d0a50] Final|Native|Public|HasOutParms|HasDefaults 
	// void SetTriangleVertexUTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, FVector& InUTangent);               // [0x15d0930] Final|Native|Public|HasOutParms|HasDefaults 
	// void SetTriangleVertexNormal(uint32_t InTriangleIndex, char InTriangleVertexIndex, FVector& InNormal);                   // [0x15d0810] Final|Native|Public|HasOutParms|HasDefaults 
	// void SetTriangleVertexIndices(uint32_t InTriangleIndex, FIntVector& InTriangleVertexIndices);                            // [0x15d0740] Final|Native|Public|HasOutParms|HasDefaults 
	// void SetTriangleVertexColor(uint32_t InTriangleIndex, char InTriangleVertexIndex, FColor& InColor);                      // [0x15d0620] Final|Native|Public|HasOutParms|HasDefaults 
	// void SetTriangleMaterialID(uint32_t InTriangleIndex, int32_t InMaterialID);                                              // [0x15d0550] Final|Native|Public  
	// void SetStaticMaterial(uint32_t InMaterialIndex, FStaticMaterial& InStaticMaterial);                                     // [0x15d0440] Final|Native|Public|HasOutParms 
	// void SetNumUVLayers(uint32_t InNumUVLayers);                                                                             // [0x15d03b0] Final|Native|Public  
	// void SetNumStaticMaterials(uint32_t InNumStaticMaterials);                                                               // [0x15d0320] Final|Native|Public  
	// void SetHasTangents(bool bInHasTangents);                                                                                // [0x15d0290] Final|Native|Public  
	// void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);                                                                // [0x15d0200] Final|Native|Public  
	// void SetHasNormals(bool bInHasNormals);                                                                                  // [0x15d0170] Final|Native|Public  
	// void SetHasColors(bool bInHasColors);                                                                                    // [0x15d00e0] Final|Native|Public  
	// void Optimize();                                                                                                         // [0x15d00c0] Final|Native|Public  
	// bool IsValid(bool bInSkipVertexIndicesCheck);                                                                            // [0x15d0020] Final|Native|Public|Const 
	// void Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials); // [0x15cfdb0] Final|Native|Public  
	// bool HasTangents();                                                                                                      // [0x15cfd90] Final|Native|Public|Const 
	// bool HasPerFaceMaterials();                                                                                              // [0x15cfd70] Final|Native|Public|Const 
	// bool HasNormals();                                                                                                       // [0xc10520] Final|Native|Public|Const 
	// bool HasColors();                                                                                                        // [0x15cfd50] Final|Native|Public|Const 
	// TArray<FVector> GetVertexPositions();                                                                                    // [0x15cfd20] Final|Native|Public|Const 
	// TArray<FVector> GetVertexInstanceVTangents();                                                                            // [0x15cfcf0] Final|Native|Public|Const 
	// TArray<FVector2D> GetVertexInstanceUVs();                                                                                // [0x15cfc60] Final|Native|Public|Const 
	// TArray<FVector> GetVertexInstanceUTangents();                                                                            // [0x15cfc30] Final|Native|Public|Const 
	// TArray<FVector> GetVertexInstanceNormals();                                                                              // [0x15cfc00] Final|Native|Public|Const 
	// TArray<FColor> GetVertexInstanceColors();                                                                                // [0x15cfb70] Final|Native|Public|Const 
	// TArray<FIntVector> GetTriangleIndices();                                                                                 // [0x15cfae0] Final|Native|Public|Const 
	// TArray<FStaticMaterial> GetStaticMaterials();                                                                            // [0x15cfa50] Final|Native|Public|Const 
	// uint32_t GetNumVertices();                                                                                               // [0x15cfa30] Final|Native|Public|Const 
	// uint32_t GetNumVertexInstances();                                                                                        // [0x15cfa10] Final|Native|Public|Const 
	// uint32_t GetNumUVLayers();                                                                                               // [0xc105c0] Final|Native|Public|Const 
	// uint32_t GetNumTriangles();                                                                                              // [0xc105e0] Final|Native|Public|Const 
	// uint32_t GetNumStaticMaterials();                                                                                        // [0xc392a0] Final|Native|Public|Const 
	// int32_t GetMaterialIndex(FName InMaterialSlotName);                                                                      // [0x15cf960] Final|Native|Public|Const 
	// TArray<int32_t> GetMaterialIDsPerTriangle();                                                                             // [0x15cf930] Final|Native|Public|Const 
	// class UMaterialInterface* GetMaterial(int32_t InMaterialIndex);                                                          // [0x15cf890] Final|Native|Public  
	// void CalculateTangents(bool bInComputeWeightedNormals);                                                                  // [0x15cf800] Final|Native|Public  
	// void CalculateNormals(bool bInComputeWeightedNormals);                                                                   // [0x15cf770] Final|Native|Public  
	// FBox CalcBounds();                                                                                                       // [0x15cf720] Final|Native|Public|HasDefaults|Const 
	// uint32_t AddStaticMaterial(FStaticMaterial& InStaticMaterial);                                                           // [0x15cf600] Final|Native|Public|HasOutParms 
};

/// Class /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent
/// Size: 0x0028 (40 bytes) (0x000508 - 0x000530) align 16 pad: 0x0000
class UHoudiniStaticMeshComponent : public UMeshComponent
{ 
public:
	class UHoudiniStaticMesh*                          Mesh;                                                       // 0x0508   (0x0008)  
	FBox                                               LocalBounds;                                                // 0x0510   (0x001C)  
	bool                                               bHoudiniIconVisible;                                        // 0x052C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x052D   (0x0003)  MISSED
	// void SetMesh(class UHoudiniStaticMesh* InMesh);                                                                          // [0x15d11e0] Final|Native|Public  
	// void SetHoudiniIconVisible(bool bInHoudiniIconVisible);                                                                  // [0x15d1150] Final|Native|Public  
	// void NotifyMeshUpdated();                                                                                                // [0x15d1130] Final|Native|Public  
	// bool IsHoudiniIconVisible();                                                                                             // [0x15d1110] Final|Native|Public|Const 
	// class UHoudiniStaticMesh* GetMesh();                                                                                     // [0x15d10f0] Final|Native|Public  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetStateEvents
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UHoudiniAssetStateEvents : public UInterface
{ 
public:
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
/// Size: 0x00B8 (184 bytes) (0x000068 - 0x000120) align 8 pad: 0x0000
struct FHoudiniAssetBlueprintInstanceData : FActorComponentInstanceData
{ 
	class UHoudiniAsset*                               HoudiniAsset;                                               // 0x0068   (0x0008)  
	int32_t                                            AssetId;                                                    // 0x0070   (0x0004)  
	EHoudiniAssetState                                 AssetState;                                                 // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	uint32_t                                           SubAssetIndex;                                              // 0x0078   (0x0004)  
	uint32_t                                           AssetCookCount;                                             // 0x007C   (0x0004)  
	bool                                               bHasBeenLoaded;                                             // 0x0080   (0x0001)  
	bool                                               bHasBeenDuplicated;                                         // 0x0081   (0x0001)  
	bool                                               bPendingDelete;                                             // 0x0082   (0x0001)  
	bool                                               bRecookRequested;                                           // 0x0083   (0x0001)  
	bool                                               bRebuildRequested;                                          // 0x0084   (0x0001)  
	bool                                               bEnableCooking;                                             // 0x0085   (0x0001)  
	bool                                               bForceNeedUpdate;                                           // 0x0086   (0x0001)  
	bool                                               bLastCookSuccess;                                           // 0x0087   (0x0001)  
	FGuid                                              ComponentGUID;                                              // 0x0088   (0x0010)  
	FGuid                                              HapiGUID;                                                   // 0x0098   (0x0010)  
	bool                                               bRegisteredComponentTemplate;                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FString                                            SourceName;                                                 // 0x00B0   (0x0010)  
	SDK_UNDEFINED(80,1414) /* TMap<FHoudiniOutputObjectIdentifier, FHoudiniAssetBlueprintOutput> */ __um(Outputs); // 0x00C0   (0x0050)  
	TArray<class UHoudiniInput*>                       Inputs;                                                     // 0x0110   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FHoudiniOutputObjectIdentifier
{ 
	int32_t                                            ObjectId;                                                   // 0x0000   (0x0004)  
	int32_t                                            GeoId;                                                      // 0x0004   (0x0004)  
	int32_t                                            PartId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            SplitIdentifier;                                            // 0x0010   (0x0010)  
	FString                                            PartName;                                                   // 0x0020   (0x0010)  
	int32_t                                            PrimitiveIndex;                                             // 0x0030   (0x0004)  
	int32_t                                            PointIndex;                                                 // 0x0034   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniCurveOutputProperties
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FHoudiniCurveOutputProperties
{ 
	EHoudiniCurveOutputType                            CurveOutputType;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            NumPoints;                                                  // 0x0004   (0x0004)  
	bool                                               bClosed;                                                    // 0x0008   (0x0001)  
	EHoudiniCurveType                                  CurveType;                                                  // 0x0009   (0x0001)  
	EHoudiniCurveMethod                                CurveMethod;                                                // 0x000A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1];                                       // 0x000B   (0x0001)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniOutputObject
/// Size: 0x00F8 (248 bytes) (0x000000 - 0x0000F8) align 8 pad: 0x0000
struct FHoudiniOutputObject
{ 
	class UObject*                                     OutputObject;                                               // 0x0000   (0x0008)  
	class UObject*                                     OutputComponent;                                            // 0x0008   (0x0008)  
	class UObject*                                     ProxyObject;                                                // 0x0010   (0x0008)  
	class UObject*                                     ProxyComponent;                                             // 0x0018   (0x0008)  
	bool                                               bProxyIsCurrent;                                            // 0x0020   (0x0001)  
	bool                                               bIsImplicit;                                                // 0x0021   (0x0001)  
	bool                                               bIsGeometryCollectionPiece;                                 // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0023   (0x0005)  MISSED
	FString                                            GeometryCollectionPieceName;                                // 0x0028   (0x0010)  
	FString                                            BakeName;                                                   // 0x0038   (0x0010)  
	FHoudiniCurveOutputProperties                      CurveOutputProperty;                                        // 0x0048   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(80,1415) /* TMap<FString, FString> */ __um(CachedAttributes);                                    // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,1416) /* TMap<FString, FString> */ __um(CachedTokens);                                        // 0x00A8   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
/// Size: 0x0100 (256 bytes) (0x000000 - 0x000100) align 8 pad: 0x0000
struct FHoudiniAssetBlueprintOutput
{ 
	int32_t                                            OutputIndex;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FHoudiniOutputObject                               OutputObject;                                               // 0x0008   (0x00F8)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGenericAttribute
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FHoudiniGenericAttribute
{ 
	FString                                            AttributeName;                                              // 0x0000   (0x0010)  
	EAttribStorageType                                 AttributeType;                                              // 0x0010   (0x0001)  
	EAttribOwner                                       AttributeOwner;                                             // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0012   (0x0002)  MISSED
	int32_t                                            AttributeCount;                                             // 0x0014   (0x0004)  
	int32_t                                            AttributeTupleSize;                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<double>                                     DoubleValues;                                               // 0x0020   (0x0010)  
	TArray<int64_t>                                    IntValues;                                                  // 0x0030   (0x0010)  
	TArray<FString>                                    StringValues;                                               // 0x0040   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGenericAttributeChangedProperty
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 pad: 0x0000
struct FHoudiniGenericAttributeChangedProperty
{ 
	class UObject*                                     Object;                                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x90];                                      // 0x0008   (0x0090)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniCurveInfo
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FHoudiniCurveInfo
{ 
	unsigned char                                      UnknownData00_2[0x1C];                                      // 0x0000   (0x001C)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniVolumeInfo
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 pad: 0x0000
struct FHoudiniVolumeInfo
{ 
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniPartInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FHoudiniPartInfo
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGeoInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FHoudiniGeoInfo
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniObjectInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FHoudiniObjectInfo
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FHoudiniBakedOutputObjectIdentifier
{ 
	int32_t                                            PartId;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            SplitIdentifier;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBakedOutputObject
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 pad: 0x0000
struct FHoudiniBakedOutputObject
{ 
	FString                                            Actor;                                                      // 0x0000   (0x0010)  
	FString                                            Blueprint;                                                  // 0x0010   (0x0010)  
	FName                                              ActorBakeName;                                              // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            BakedObject;                                                // 0x0030   (0x0010)  
	FString                                            BakedComponent;                                             // 0x0040   (0x0010)  
	TArray<FString>                                    InstancedActors;                                            // 0x0050   (0x0010)  
	TArray<FString>                                    InstancedComponents;                                        // 0x0060   (0x0010)  
	SDK_UNDEFINED(80,1417) /* TMap<FName, FString> */  __um(LandscapeLayers);                                      // 0x0070   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniInstancedOutput
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FHoudiniInstancedOutput
{ 
	SDK_UNDEFINED(48,1418) /* TWeakObjectPtr<UObject*> */ __um(OriginalObject);                                    // 0x0000   (0x0030)  
	int32_t                                            OriginalObjectIndex;                                        // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FTransform>                                 OriginalTransforms;                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1419) /* TArray<TWeakObjectPtr<UObject*>> */ __um(VariationObjects);                          // 0x0048   (0x0010)  
	TArray<FTransform>                                 VariationTransformOffsets;                                  // 0x0058   (0x0010)  
	TArray<int32_t>                                    TransformVariationIndices;                                  // 0x0068   (0x0010)  
	TArray<int32_t>                                    OriginalInstanceIndices;                                    // 0x0078   (0x0010)  
	bool                                               bChanged;                                                   // 0x0088   (0x0001)  
	bool                                               bStale;                                                     // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x008A   (0x0006)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FHoudiniPDGWorkResultObjectBakedOutput
{ 
	TArray<FHoudiniBakedOutput>                        BakedOutputs;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
/// Size: 0x0030 (48 bytes) (0x000068 - 0x000098) align 8 pad: 0x0000
struct FHoudiniSplineComponentInstanceData : FActorComponentInstanceData
{ 
	TArray<FTransform>                                 CurvePoints;                                                // 0x0068   (0x0010)  
	TArray<FVector>                                    DisplayPoints;                                              // 0x0078   (0x0010)  
	TArray<int32_t>                                    DisplayPointIndexDivider;                                   // 0x0088   (0x0010)  
};

