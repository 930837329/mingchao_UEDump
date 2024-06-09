
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: PhysicsCore

/// Enum /Script/Landscape.ELandscapeBlendMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend                                                               = 0,
	LSBM_AlphaBlend                                                                  = 1
};

/// Enum /Script/Landscape.ELandscapeSetupErrors
/// Size: 0x01 (1 bytes)
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                                                                         = 0,
	LSE_NoLandscapeInfo                                                              = 1,
	LSE_CollsionXY                                                                   = 2,
	LSE_NoLayerInfo                                                                  = 3
};

/// Enum /Script/Landscape.ELandscapeClearMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                                                                  = 1,
	Clear_Heightmap                                                                  = 2,
	Clear_All                                                                        = 3
};

/// Enum /Script/Landscape.ELandscapeGizmoType
/// Size: 0x01 (1 bytes)
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                                                                         = 0,
	LGT_Height                                                                       = 1,
	LGT_Weight                                                                       = 2
};

/// Enum /Script/Landscape.EGrassScaling
/// Size: 0x01 (1 bytes)
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform                                                           = 0,
	EGrassScaling__Free                                                              = 1,
	EGrassScaling__LockXY                                                            = 2
};

/// Enum /Script/Landscape.ESplineModulationColorMask
/// Size: 0x01 (1 bytes)
enum class ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red                                                  = 0,
	ESplineModulationColorMask__Green                                                = 1,
	ESplineModulationColorMask__Blue                                                 = 2,
	ESplineModulationColorMask__Alpha                                                = 3
};

/// Enum /Script/Landscape.ELandscapeLODFalloff
/// Size: 0x01 (1 bytes)
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear                                                     = 0,
	ELandscapeLODFalloff__SquareRoot                                                 = 1
};

/// Enum /Script/Landscape.ELandscapeLayerDisplayMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default                                              = 0,
	ELandscapeLayerDisplayMode__Alphabetical                                         = 1,
	ELandscapeLayerDisplayMode__UserSpecific                                         = 2
};

/// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
/// Size: 0x01 (1 bytes)
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None                                         = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers                                 = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly                                 = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist                        = 3
};

/// Enum /Script/Landscape.ELandscapeImportAlphamapType
/// Size: 0x01 (1 bytes)
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive                                           = 0,
	ELandscapeImportAlphamapType__Layered                                            = 1
};

/// Enum /Script/Landscape.LandscapeSplineMeshOrientation
/// Size: 0x01 (1 bytes)
enum class LandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                                                                         = 0,
	LSMO_YUp                                                                         = 1
};

/// Enum /Script/Landscape.ELandscapeLayerBlendType
/// Size: 0x01 (1 bytes)
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                                                                   = 0,
	LB_AlphaBlend                                                                    = 1,
	LB_HeightBlend                                                                   = 2,
	LB_AlphaHeightBlend                                                              = 3
};

/// Enum /Script/Landscape.ELandscapeCustomizedCoordType
/// Size: 0x01 (1 bytes)
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                                                                        = 0,
	LCCT_CustomUV0                                                                   = 1,
	LCCT_CustomUV1                                                                   = 2,
	LCCT_CustomUV2                                                                   = 3,
	LCCT_WeightMapUV                                                                 = 4
};

/// Enum /Script/Landscape.ETerrainCoordMappingType
/// Size: 0x01 (1 bytes)
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                                                                        = 0,
	TCMT_XY                                                                          = 1,
	TCMT_XZ                                                                          = 2,
	TCMT_YZ                                                                          = 3
};

/// Class /Script/Landscape.ControlPointMeshActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AControlPointMeshActor : public AActor
{ 
public:
	class UControlPointMeshComponent*                  ControlPointMeshComponent;                                  // 0x02A8   (0x0008)  
};

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x0008 (8 bytes) (0x000588 - 0x000590) align 16 pad: 0x0000
class UControlPointMeshComponent : public UStaticMeshComponent
{ 
public:
	float                                              VirtualTextureMainPassMaxDrawDistance;                      // 0x0588   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x058C   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeProxyMaterialOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FLandscapeProxyMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeProxyCustomLayerPhysicalMaterial
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FLandscapeProxyCustomLayerPhysicalMaterial
{ 
	FName                                              LayerName;                                                  // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0010   (0x0008)  
};

/// Class /Script/Landscape.LandscapeProxy
/// Size: 0x0398 (920 bytes) (0x0002A8 - 0x000640) align 8 pad: 0x0000
class ALandscapeProxy : public AActor
{ 
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                            // 0x02A8   (0x0008)  
	FGuid                                              LandscapeGuid;                                              // 0x02B0   (0x0010)  
	FIntPoint                                          LandscapeSectionOffset;                                     // 0x02C0   (0x0008)  
	int32_t                                            MaxLODLevel;                                                // 0x02C8   (0x0004)  
	float                                              LODDistanceFactor;                                          // 0x02CC   (0x0004)  
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                                 // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02D1   (0x0003)  MISSED
	float                                              ComponentScreenSizeToUseSubSections;                        // 0x02D4   (0x0004)  
	float                                              LOD0ScreenSize;                                             // 0x02D8   (0x0004)  
	float                                              LOD0DistributionSetting;                                    // 0x02DC   (0x0004)  
	float                                              LODDistributionSetting;                                     // 0x02E0   (0x0004)  
	float                                              TessellationComponentScreenSize;                            // 0x02E4   (0x0004)  
	bool                                               UseTessellationComponentScreenSizeFalloff;                  // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02E9   (0x0003)  MISSED
	float                                              TessellationComponentScreenSizeFalloff;                     // 0x02EC   (0x0004)  
	int32_t                                            OccluderGeometryLOD;                                        // 0x02F0   (0x0004)  
	int32_t                                            StaticLightingLOD;                                          // 0x02F4   (0x0004)  
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                        // 0x02F8   (0x0008)  
	float                                              StreamingDistanceMultiplier;                                // 0x0300   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0304   (0x0004)  MISSED
	class UMaterialInterface*                          LandscapeMaterial;                                          // 0x0308   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0310   (0x0020)  MISSED
	class UMaterialInterface*                          LandscapeHoleMaterial;                                      // 0x0330   (0x0008)  
	TArray<FLandscapeProxyMaterialOverride>            LandscapeMaterialsOverride;                                 // 0x0338   (0x0010)  
	TArray<FLandscapeProxyCustomLayerPhysicalMaterial> CustomLayerPhysicalMaterial;                                // 0x0348   (0x0010)  
	bool                                               bMeshHoles;                                                 // 0x0358   (0x0001)  
	char                                               MeshHolesMaxLod;                                            // 0x0359   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x035A   (0x0006)  MISSED
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x0360   (0x0010)  
	int32_t                                            VirtualTextureNumLods;                                      // 0x0370   (0x0004)  
	int32_t                                            VirtualTextureLodBias;                                      // 0x0374   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x0378   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0379   (0x0003)  MISSED
	float                                              NegativeZBoundsExtension;                                   // 0x037C   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x0380   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x0384   (0x0004)  MISSED
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                        // 0x0388   (0x0010)  
	class ULandscapeBatchComponent*                    LandscapeBatch;                                             // 0x0398   (0x0008)  
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                    // 0x03A0   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                    // 0x03B0   (0x0010)  
	unsigned char                                      UnknownData07_6[0x64];                                      // 0x03C0   (0x0064)  MISSED
	bool                                               bHasLandscapeGrass;                                         // 0x0424   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x0425   (0x0003)  MISSED
	float                                              StaticLightingResolution;                                   // 0x0428   (0x0004)  
	bool                                               CastShadow : 1;                                             // 0x042C:0 (0x0001)  
	bool                                               MobileCastShadow : 1;                                       // 0x042C:1 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x042C:2 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x042C:3 (0x0001)  
	unsigned char                                      UnknownData09_3[0x3];                                       // 0x042D   (0x0003)  MISSED
	bool                                               bCastFarShadow : 1;                                         // 0x0430:0 (0x0001)  
	bool                                               bCastFarShadowOnMobile : 1;                                 // 0x0430:1 (0x0001)  
	unsigned char                                      UnknownData10_3[0x3];                                       // 0x0431   (0x0003)  MISSED
	bool                                               bCastHiddenShadow : 1;                                      // 0x0434:0 (0x0001)  
	unsigned char                                      UnknownData11_3[0x3];                                       // 0x0435   (0x0003)  MISSED
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x0438:0 (0x0001)  
	unsigned char                                      UnknownData12_3[0x3];                                       // 0x0439   (0x0003)  MISSED
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x043C:0 (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x043D   (0x0001)  
	unsigned char                                      UnknownData13_6[0x2];                                       // 0x043E   (0x0002)  MISSED
	bool                                               bUseMaterialPositionOffsetInStaticLighting : 1;             // 0x0440:0 (0x0001)  
	bool                                               bRenderCustomDepth : 1;                                     // 0x0440:1 (0x0001)  
	unsigned char                                      UnknownData14_5[0x3];                                       // 0x0441   (0x0003)  MISSED
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x0444   (0x0001)  
	unsigned char                                      UnknownData15_6[0x3];                                       // 0x0445   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x0448   (0x0004)  
	float                                              LDMaxDrawDistance;                                          // 0x044C   (0x0004)  
	FLightmassPrimitiveSettings                        LightmassSettings;                                          // 0x0450   (0x0018)  
	int32_t                                            CollisionMipLevel;                                          // 0x0468   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x046C   (0x0004)  
	float                                              CollisionThickness;                                         // 0x0470   (0x0004)  
	unsigned char                                      UnknownData16_6[0x4];                                       // 0x0474   (0x0004)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x0478   (0x0160)  
	bool                                               bGenerateOverlapEvents : 1;                                 // 0x05D8:0 (0x0001)  
	bool                                               bBakeMaterialPositionOffsetIntoCollision : 1;               // 0x05D8:1 (0x0001)  
	unsigned char                                      UnknownData17_5[0x3];                                       // 0x05D9   (0x0003)  MISSED
	int32_t                                            ComponentSizeQuads;                                         // 0x05DC   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x05E0   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x05E4   (0x0004)  
	bool                                               bUsedForNavigation : 1;                                     // 0x05E8:0 (0x0001)  
	bool                                               bFillCollisionUnderLandscapeForNavmesh : 1;                 // 0x05E8:1 (0x0001)  
	unsigned char                                      UnknownData18_5[0x3];                                       // 0x05E9   (0x0003)  MISSED
	bool                                               bUseDynamicMaterialInstance;                                // 0x05EC   (0x0001)  
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                            // 0x05ED   (0x0001)  
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;               // 0x05EE   (0x0001)  
	bool                                               bHasLayersContent;                                          // 0x05EF   (0x0001)  
	SDK_UNDEFINED(80,1505) /* TMap<UTexture2D*, ULandscapeWeightmapUsage*> */ __um(WeightmapUsageMap);             // 0x05F0   (0x0050)  
	// void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);                                  // [0x3907b60] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UTexture* Value);                              // [0x3907a70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);                                         // [0x3907980] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // [0x3907860] Final|Native|Public|BlueprintCallable 
	// void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);                                         // [0xbf3a00] Final|Native|Public|BlueprintCallable 
	// void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName); // [0x39074c0] Final|Native|Public|BlueprintCallable 
	// void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);                        // [0x3907430] Native|Public|BlueprintCallable 
	// void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);                    // [0x39073a0] Native|Public|BlueprintCallable 
	// void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);                                     // [0x3907310] Native|Public|BlueprintCallable 
	// void ChangeLODDistanceFactor(float InLODDistanceFactor);                                                                 // [0x3907280] Native|Public|BlueprintCallable 
	// void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);                             // [0x39071f0] Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.Landscape
/// Size: 0x0000 (0 bytes) (0x000640 - 0x000640) align 8 pad: 0x0000
class ALandscape : public ALandscapeProxy
{ 
public:
};

/// Class /Script/Landscape.LandscapeBatchComponent
/// Size: 0x00D0 (208 bytes) (0x0004E0 - 0x0005B0) align 16 pad: 0x0000
class ULandscapeBatchComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x04E0   (0x0020)  MISSED
	TArray<class UMaterialInterface*>                  MaterialInterfaces;                                         // 0x0500   (0x0010)  
	TArray<class ULandscapeComponent*>                 OrdedComponents;                                            // 0x0510   (0x0010)  
	TArray<class UTexture2DArray*>                     WeightmapArrays;                                            // 0x0520   (0x0010)  
	TArray<uint32_t>                                   ComponentVertexStarts;                                      // 0x0530   (0x0010)  
	bool                                               IndirectMode;                                               // 0x0540   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0541   (0x0007)  MISSED
	TArray<char>                                       CompressedGeometryData;                                     // 0x0548   (0x0010)  
	unsigned char                                      UnknownData02_7[0x58];                                      // 0x0558   (0x0058)  MISSED
};

/// Class /Script/Landscape.LandscapeBlueprintBrushBase
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class ALandscapeBlueprintBrushBase : public AActor
{ 
public:
	// void RequestLandscapeUpdate();                                                                                           // [0x95a130] Final|Native|Public|BlueprintCallable 
	// class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, FName& InWeightmapLayerName); // [0x3905980] Native|Event|Public|HasOutParms|BlueprintEvent 
	// void Initialize(FTransform& InLandscapeTransform, FIntPoint& InLandscapeSize, FIntPoint& InLandscapeRenderTargetSize);   // [0x3905800] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// void GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets);                                              // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Landscape.LandscapeLODStreamingProxy
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class ULandscapeLODStreamingProxy : public UStreamableRenderAsset
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Struct /Script/Landscape.LandscapeComponentMaterialOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FLandscapeComponentMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.WeightmapLayerAllocationInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FWeightmapLayerAllocationInfo
{ 
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                  // 0x0000   (0x0008)  
	char                                               WeightmapTextureIndex;                                      // 0x0008   (0x0001)  
	char                                               WeightmapTextureChannel;                                    // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeComponent
/// Size: 0x0240 (576 bytes) (0x0004E0 - 0x000720) align 16 pad: 0x0000
class ULandscapeComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            SectionBaseX;                                               // 0x04E0   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x04E4   (0x0004)  
	int32_t                                            ComponentSizeQuads;                                         // 0x04E8   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x04EC   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x04F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x04F4   (0x0004)  MISSED
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x04F8   (0x0008)  
	class UMaterialInterface*                          OverrideHoleMaterial;                                       // 0x0500   (0x0008)  
	TArray<FLandscapeComponentMaterialOverride>        OverrideMaterials;                                          // 0x0508   (0x0010)  
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                          // 0x0518   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                   // 0x0528   (0x0010)  
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                    // 0x0538   (0x0010)  
	TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial;                // 0x0548   (0x0010)  
	class UTexture2D*                                  IndexmapTexture;                                            // 0x0558   (0x0008)  
	class UTexture2D*                                  IndexWeightsTexture;                                        // 0x0560   (0x0008)  
	class UTexture2D*                                  IndexWeightsTexture2;                                       // 0x0568   (0x0008)  
	class UTexture2D*                                  XYOffsetmapTexture;                                         // 0x0570   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0578   (0x0008)  MISSED
	FVector4                                           WeightmapScaleBias;                                         // 0x0580   (0x0010)  
	float                                              WeightmapSubsectionOffset;                                  // 0x0590   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0594   (0x000C)  MISSED
	FVector4                                           HeightmapScaleBias;                                         // 0x05A0   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x05B0   (0x001C)  
	SDK_UNDEFINED(28,1506) /* TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent*> */ __um(CollisionComponent); // 0x05CC   (0x001C)  
	class UTexture2D*                                  HeightmapTexture;                                           // 0x05E8   (0x0008)  
	TArray<FWeightmapLayerAllocationInfo>              WeightmapLayerAllocations;                                  // 0x05F0   (0x0010)  
	TArray<class UTexture2D*>                          WeightmapTextures;                                          // 0x0600   (0x0010)  
	class ULandscapeLODStreamingProxy*                 LODStreamingProxy;                                          // 0x0610   (0x0008)  
	FGuid                                              MapBuildDataId;                                             // 0x0618   (0x0010)  
	TArray<FGuid>                                      IrrelevantLights;                                           // 0x0628   (0x0010)  
	int32_t                                            CollisionMipLevel;                                          // 0x0638   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x063C   (0x0004)  
	float                                              NegativeZBoundsExtension;                                   // 0x0640   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x0644   (0x0004)  
	float                                              StaticLightingResolution;                                   // 0x0648   (0x0004)  
	int32_t                                            ForcedLOD;                                                  // 0x064C   (0x0004)  
	int32_t                                            LODBias;                                                    // 0x0650   (0x0004)  
	bool                                               bLimitMaxKuroFOVFactorForLODCalculation;                    // 0x0654   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0655   (0x0003)  MISSED
	FGuid                                              StateId;                                                    // 0x0658   (0x0010)  
	FGuid                                              BakedTextureMaterialGuid;                                   // 0x0668   (0x0010)  
	class UTexture2D*                                  GIBakedBaseColorTexture;                                    // 0x0678   (0x0008)  
	char                                               MobileBlendableLayerMask;                                   // 0x0680   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0681   (0x0007)  MISSED
	class UMaterialInterface*                          MobileMaterialInterface;                                    // 0x0688   (0x0008)  
	TArray<class UMaterialInterface*>                  MobileMaterialInterfaces;                                   // 0x0690   (0x0010)  
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                    // 0x06A0   (0x0010)  
	unsigned char                                      UnknownData05_7[0x70];                                      // 0x06B0   (0x0070)  MISSED
	// class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);                                             // [0x3905730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName);                            // [0x3905620] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// float EditorGetPaintLayerWeightAtLocation(FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);             // [0x3905540] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeGizmoActor
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class ALandscapeGizmoActor : public AActor
{ 
public:
};

/// Class /Script/Landscape.LandscapeGizmoActiveActor
/// Size: 0x0050 (80 bytes) (0x0002A8 - 0x0002F8) align 8 pad: 0x0000
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x02A8   (0x0050)  MISSED
};

/// Class /Script/Landscape.LandscapeGizmoRenderComponent
/// Size: 0x0000 (0 bytes) (0x0004E0 - 0x0004E0) align 16 pad: 0x0000
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{ 
public:
};

/// Struct /Script/Landscape.GrassVariety
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FGrassVariety
{ 
	class UStaticMesh*                                 GrassMesh;                                                  // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0008   (0x0010)  
	FPerPlatformFloat                                  GrassDensity;                                               // 0x0018   (0x0004)  
	bool                                               bUseGrid;                                                   // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              PlacementJitter;                                            // 0x0020   (0x0004)  
	FPerPlatformInt                                    StartCullDistance;                                          // 0x0024   (0x0004)  
	FPerPlatformInt                                    EndCullDistance;                                            // 0x0028   (0x0004)  
	int32_t                                            MinLOD;                                                     // 0x002C   (0x0004)  
	EGrassScaling                                      Scaling;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0034   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x003C   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0044   (0x0008)  
	bool                                               RandomRotation;                                             // 0x004C   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x004D   (0x0001)  
	bool                                               bUseLandscapeLightmap;                                      // 0x004E   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x004F   (0x0001)  
	bool                                               bReceivesDecals;                                            // 0x0050   (0x0001)  
	bool                                               bCastDynamicShadow;                                         // 0x0051   (0x0001)  
	bool                                               bKeepInstanceBufferCPUCopy;                                 // 0x0052   (0x0001)  
	unsigned char                                      UnknownData02_7[0x5];                                       // 0x0053   (0x0005)  MISSED
};

/// Class /Script/Landscape.LandscapeGrassType
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000068) align 8 pad: 0x0000
class ULandscapeGrassType : public UObject
{ 
public:
	TArray<FGrassVariety>                              GrassVarieties;                                             // 0x0030   (0x0010)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	class UStaticMesh*                                 GrassMesh;                                                  // 0x0048   (0x0008)  
	float                                              GrassDensity;                                               // 0x0050   (0x0004)  
	float                                              PlacementJitter;                                            // 0x0054   (0x0004)  
	int32_t                                            StartCullDistance;                                          // 0x0058   (0x0004)  
	int32_t                                            EndCullDistance;                                            // 0x005C   (0x0004)  
	bool                                               RandomRotation;                                             // 0x0060   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x0061   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x00E0 (224 bytes) (0x0004E0 - 0x0005C0) align 16 pad: 0x0000
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{ 
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                        // 0x04E0   (0x0010)  
	int32_t                                            SectionBaseX;                                               // 0x04F0   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x04F4   (0x0004)  
	int32_t                                            CollisionSizeQuads;                                         // 0x04F8   (0x0004)  
	float                                              CollisionScale;                                             // 0x04FC   (0x0004)  
	int32_t                                            SimpleCollisionSizeQuads;                                   // 0x0500   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0504   (0x0004)  MISSED
	TArray<char>                                       CollisionQuadFlags;                                         // 0x0508   (0x0010)  
	FGuid                                              HeightfieldGuid;                                            // 0x0518   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x0528   (0x001C)  
	SDK_UNDEFINED(28,1507) /* TLazyObjectPtr<ULandscapeComponent*> */ __um(RenderComponent);                       // 0x0544   (0x001C)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0560   (0x0010)  MISSED
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                    // 0x0570   (0x0010)  
	unsigned char                                      UnknownData02_7[0x40];                                      // 0x0580   (0x0040)  MISSED
	// class ULandscapeComponent* GetRenderComponent();                                                                         // [0x39057d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Landscape.LandscapeInfo
/// Size: 0x01E8 (488 bytes) (0x000030 - 0x000218) align 8 pad: 0x0000
class ULandscapeInfo : public UObject
{ 
public:
	SDK_UNDEFINED(28,1508) /* TLazyObjectPtr<ALandscape*> */ __um(LandscapeActor);                                 // 0x0030   (0x001C)  
	FGuid                                              LandscapeGuid;                                              // 0x004C   (0x0010)  
	int32_t                                            ComponentSizeQuads;                                         // 0x005C   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0060   (0x0004)  
	int32_t                                            ComponentNumSubsections;                                    // 0x0064   (0x0004)  
	FVector                                            DrawScale;                                                  // 0x0068   (0x000C)  
	unsigned char                                      UnknownData00_6[0xA4];                                      // 0x0074   (0x00A4)  MISSED
	TArray<class ALandscapeStreamingProxy*>            Proxies;                                                    // 0x0118   (0x0010)  
	unsigned char                                      UnknownData01_7[0xF0];                                      // 0x0128   (0x00F0)  MISSED
};

/// Class /Script/Landscape.LandscapeInfoMap
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000088) align 8 pad: 0x0000
class ULandscapeInfoMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class ULandscapeLayerInfoObject : public UObject
{ 
public:
	FName                                              LayerName;                                                  // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	class UPhysicalMaterial*                           PhysMaterial;                                               // 0x0040   (0x0008)  
	float                                              Hardness;                                                   // 0x0048   (0x0004)  
	FLinearColor                                       LayerUsageDebugColor;                                       // 0x004C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeMaterialTextureStreamingInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FLandscapeMaterialTextureStreamingInfo
{ 
	FName                                              TextureName;                                                // 0x0000   (0x000C)  
	float                                              TexelFactor;                                                // 0x000C   (0x0004)  
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x0018 (24 bytes) (0x0003D0 - 0x0003E8) align 8 pad: 0x0000
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
public:
	TArray<FLandscapeMaterialTextureStreamingInfo>     TextureStreamingInfo;                                       // 0x03D0   (0x0010)  
	bool                                               bIsLayerThumbnail : 1;                                      // 0x03E0:0 (0x0001)  
	bool                                               bDisableTessellation : 1;                                   // 0x03E0:1 (0x0001)  
	bool                                               bMobile : 1;                                                // 0x03E0:2 (0x0001)  
	bool                                               bEditorToolUsage : 1;                                       // 0x03E0:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x03E1   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x0020 (32 bytes) (0x0005C0 - 0x0005E0) align 16 pad: 0x0000
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{ 
public:
	FGuid                                              MeshGuid;                                                   // 0x05C0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x05D0   (0x0010)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class ALandscapeMeshProxyActor : public AActor
{ 
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                                // 0x02A8   (0x0008)  
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x0028 (40 bytes) (0x000588 - 0x0005B0) align 16 pad: 0x0000
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{ 
public:
	FGuid                                              LandscapeGuid;                                              // 0x0588   (0x0010)  
	TArray<FIntPoint>                                  ProxyComponentBases;                                        // 0x0598   (0x0010)  
	int8_t                                             ProxyLOD;                                                   // 0x05A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x05A9   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeSettings
/// Size: 0x0008 (8 bytes) (0x000048 - 0x000050) align 8 pad: 0x0000
class ULandscapeSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            MaxNumberOfLayers;                                          // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x0030 (48 bytes) (0x0004E0 - 0x000510) align 16 pad: 0x0000
class ULandscapeSplinesComponent : public UPrimitiveComponent
{ 
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                              // 0x04E0   (0x0010)  
	TArray<class ULandscapeSplineSegment*>             Segments;                                                   // 0x04F0   (0x0010)  
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                                // 0x0500   (0x0010)  
	// TArray<USplineMeshComponent*> GetSplineMeshComponents();                                                                 // [0x3909be0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Landscape.LandscapeSplineConnection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FLandscapeSplineConnection
{ 
	class ULandscapeSplineSegment*                     Segment;                                                    // 0x0000   (0x0008)  
	bool                                               End : 1;                                                    // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 4 pad: 0x0000
struct FLandscapeSplineInterpPoint
{ 
	FVector                                            Center;                                                     // 0x0000   (0x000C)  
	FVector                                            Left;                                                       // 0x000C   (0x000C)  
	FVector                                            Right;                                                      // 0x0018   (0x000C)  
	FVector                                            FalloffLeft;                                                // 0x0024   (0x000C)  
	FVector                                            FalloffRight;                                               // 0x0030   (0x000C)  
	FVector                                            LayerLeft;                                                  // 0x003C   (0x000C)  
	FVector                                            LayerRight;                                                 // 0x0048   (0x000C)  
	FVector                                            LayerFalloffLeft;                                           // 0x0054   (0x000C)  
	FVector                                            LayerFalloffRight;                                          // 0x0060   (0x000C)  
	float                                              StartEndFalloff;                                            // 0x006C   (0x0004)  
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x0080 (128 bytes) (0x000030 - 0x0000B0) align 8 pad: 0x0000
class ULandscapeSplineControlPoint : public UObject
{ 
public:
	FVector                                            Location;                                                   // 0x0030   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x003C   (0x000C)  
	float                                              Width;                                                      // 0x0048   (0x0004)  
	float                                              LayerWidthRatio;                                            // 0x004C   (0x0004)  
	float                                              SideFalloff;                                                // 0x0050   (0x0004)  
	float                                              LeftSideFalloffFactor;                                      // 0x0054   (0x0004)  
	float                                              RightSideFalloffFactor;                                     // 0x0058   (0x0004)  
	float                                              LeftSideLayerFalloffFactor;                                 // 0x005C   (0x0004)  
	float                                              RightSideLayerFalloffFactor;                                // 0x0060   (0x0004)  
	float                                              EndFalloff;                                                 // 0x0064   (0x0004)  
	TArray<FLandscapeSplineConnection>                 ConnectedSegments;                                          // 0x0068   (0x0010)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0078   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0088   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	class UControlPointMeshComponent*                  LocalMeshComponent;                                         // 0x00A8   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FLandscapeSplineSegmentConnection
{ 
	class ULandscapeSplineControlPoint*                ControlPoint;                                               // 0x0000   (0x0008)  
	float                                              TangentLen;                                                 // 0x0008   (0x0004)  
	FName                                              SocketName;                                                 // 0x000C   (0x000C)  
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x0088 (136 bytes) (0x000030 - 0x0000B8) align 8 pad: 0x0000
class ULandscapeSplineSegment : public UObject
{ 
public:
	FLandscapeSplineSegmentConnection                  Connections[2];                                             // 0x0030   (0x0030)  
	FInterpCurveVector                                 SplineInfo;                                                 // 0x0060   (0x0018)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0078   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0088   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                        // 0x00A8   (0x0010)  
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x0020 (32 bytes) (0x000640 - 0x000660) align 8 pad: 0x0000
class ALandscapeStreamingProxy : public ALandscapeProxy
{ 
public:
	SDK_UNDEFINED(28,1509) /* TLazyObjectPtr<ALandscape*> */ __um(LandscapeActor);                                 // 0x0640   (0x001C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x065C   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSubsystem
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class ULandscapeSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class ULandscapeWeightmapUsage : public UObject
{ 
public:
	class ULandscapeComponent*                         ChannelUsage[4];                                            // 0x0030   (0x0020)  
	FGuid                                              LayerGuid;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeDefineLayer
/// Size: 0x0020 (32 bytes) (0x000048 - 0x000068) align 8 pad: 0x0000
class UMaterialExpressionLandscapeDefineLayer : public UMaterialExpression
{ 
public:
	FGuid                                              ExpressionGUID;                                             // 0x0048   (0x0010)  
	TArray<FName>                                      LayerNames;                                                 // 0x0058   (0x0010)  
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FGrassInput
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class ULandscapeGrassType*                         GrassType;                                                  // 0x0010   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x0010 (16 bytes) (0x000048 - 0x000058) align 8 pad: 0x0000
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FGrassInput>                                GrassTypes;                                                 // 0x0048   (0x0010)  
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x005C (92 bytes) (0x000000 - 0x00005C) align 4 pad: 0x0000
struct FLayerBlendInput
{ 
	FName                                              LayerName;                                                  // 0x0000   (0x000C)  
	TEnumAsByte<ELandscapeLayerBlendType>              BlendType;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FExpressionInput                                   LayerInput;                                                 // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0020   (0x000C)  MISSED
	FExpressionInput                                   HeightInput;                                                // 0x002C   (0x0010)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x003C   (0x000C)  MISSED
	float                                              PreviewWeight;                                              // 0x0048   (0x0004)  
	FVector                                            ConstLayerInput;                                            // 0x004C   (0x000C)  
	float                                              ConstHeightInput;                                           // 0x0058   (0x0004)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x0020 (32 bytes) (0x000048 - 0x000068) align 8 pad: 0x0000
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{ 
public:
	TArray<FLayerBlendInput>                           Layers;                                                     // 0x0048   (0x0010)  
	FGuid                                              ExpressionGUID;                                             // 0x0058   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x0018 (24 bytes) (0x000048 - 0x000060) align 8 pad: 0x0000
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{ 
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                                // 0x0048   (0x0001)  
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                               // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	float                                              MappingScale;                                               // 0x004C   (0x0004)  
	float                                              MappingRotation;                                            // 0x0050   (0x0004)  
	float                                              MappingPanU;                                                // 0x0054   (0x0004)  
	float                                              MappingPanV;                                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerIndex
/// Size: 0x0010 (16 bytes) (0x000048 - 0x000058) align 8 pad: 0x0000
class UMaterialExpressionLandscapeLayerIndex : public UMaterialExpression
{ 
public:
	FGuid                                              ExpressionGUID;                                             // 0x0048   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerParams
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000098) align 8 pad: 0x0000
class UMaterialExpressionLandscapeLayerParams : public UMaterialExpression
{ 
public:
	FExpressionInput                                   BufferIndex;                                                // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0058   (0x000C)  MISSED
	FExpressionInput                                   LayerIndex;                                                 // 0x0064   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0074   (0x000C)  MISSED
	uint32_t                                           LayerCount;                                                 // 0x0080   (0x0004)  
	FGuid                                              ExpressionGUID;                                             // 0x0084   (0x0010)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSample
/// Size: 0x0020 (32 bytes) (0x000048 - 0x000068) align 8 pad: 0x0000
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{ 
public:
	FName                                              ParameterName;                                              // 0x0048   (0x000C)  
	float                                              PreviewWeight;                                              // 0x0054   (0x0004)  
	FGuid                                              ExpressionGUID;                                             // 0x0058   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0058 (88 bytes) (0x000048 - 0x0000A0) align 8 pad: 0x0000
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{ 
public:
	FExpressionInput                                   LayerUsed;                                                  // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0058   (0x000C)  MISSED
	FExpressionInput                                   LayerNotUsed;                                               // 0x0064   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0074   (0x000C)  MISSED
	FName                                              ParameterName;                                              // 0x0080   (0x000C)  
	bool                                               PreviewUsed : 1;                                            // 0x008C:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	FGuid                                              ExpressionGUID;                                             // 0x0090   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0068 (104 bytes) (0x000048 - 0x0000B0) align 8 pad: 0x0000
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Base;                                                       // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0058   (0x000C)  MISSED
	FExpressionInput                                   Layer;                                                      // 0x0064   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0074   (0x000C)  MISSED
	FName                                              ParameterName;                                              // 0x0080   (0x000C)  
	float                                              PreviewWeight;                                              // 0x008C   (0x0004)  
	FVector                                            ConstBase;                                                  // 0x0090   (0x000C)  
	FGuid                                              ExpressionGUID;                                             // 0x009C   (0x0010)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/Landscape.PhysicalMaterialInput
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FPhysicalMaterialInput
{ 
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0000   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
/// Size: 0x0010 (16 bytes) (0x000048 - 0x000058) align 8 pad: 0x0000
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FPhysicalMaterialInput>                     Inputs;                                                     // 0x0048   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeRetainNode
/// Size: 0x0030 (48 bytes) (0x000048 - 0x000078) align 8 pad: 0x0000
class UMaterialExpressionLandscapeRetainNode : public UMaterialExpression
{ 
public:
	FMaterialAttributesInput                           MaterialAttribute;                                          // 0x0048   (0x0014)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x005C   (0x000C)  MISSED
	FGuid                                              ExpressionGUID;                                             // 0x0068   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
/// Size: 0x0010 (16 bytes) (0x000048 - 0x000058) align 8 pad: 0x0000
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{ 
public:
	FGuid                                              ExpressionGUID;                                             // 0x0048   (0x0010)  
};

/// Struct /Script/Landscape.LandscapeLayerBrush
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FLandscapeLayerBrush
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayer
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FLandscapeLayer
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x000C)  
	bool                                               bVisible;                                                   // 0x001C   (0x0001)  
	bool                                               bLocked;                                                    // 0x001D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001E   (0x0002)  MISSED
	float                                              HeightmapAlpha;                                             // 0x0020   (0x0004)  
	float                                              WeightmapAlpha;                                             // 0x0024   (0x0004)  
	TEnumAsByte<ELandscapeBlendMode>                   BlendMode;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FLandscapeLayerBrush>                       Brushes;                                                    // 0x0030   (0x0010)  
	SDK_UNDEFINED(80,1510) /* TMap<ULandscapeLayerInfoObject*, bool> */ __um(WeightmapLayerAllocationBlend);       // 0x0040   (0x0050)  
};

/// Struct /Script/Landscape.HeightmapData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FHeightmapData
{ 
	class UTexture2D*                                  Texture;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.WeightmapData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FWeightmapData
{ 
	TArray<class UTexture2D*>                          Textures;                                                   // 0x0000   (0x0010)  
	TArray<FWeightmapLayerAllocationInfo>              LayerAllocations;                                           // 0x0010   (0x0010)  
	TArray<class ULandscapeWeightmapUsage*>            TextureUsages;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/Landscape.LandscapeLayerComponentData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FLandscapeLayerComponentData
{ 
	FHeightmapData                                     HeightmapData;                                              // 0x0000   (0x0008)  
	FWeightmapData                                     WeightmapData;                                              // 0x0008   (0x0030)  
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FLandscapeEditToolRenderData
{ 
	class UMaterialInterface*                          ToolMaterial;                                               // 0x0000   (0x0008)  
	class UMaterialInterface*                          GizmoMaterial;                                              // 0x0008   (0x0008)  
	int32_t                                            SelectedType;                                               // 0x0010   (0x0004)  
	int32_t                                            DebugChannelR;                                              // 0x0014   (0x0004)  
	int32_t                                            DebugChannelG;                                              // 0x0018   (0x0004)  
	int32_t                                            DebugChannelB;                                              // 0x001C   (0x0004)  
	class UTexture2D*                                  DataTexture;                                                // 0x0020   (0x0008)  
	class UTexture2D*                                  LayerContributionTexture;                                   // 0x0028   (0x0008)  
	class UTexture2D*                                  DirtyTexture;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/Landscape.GizmoSelectData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FGizmoSelectData
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/Landscape.LandscapeInfoLayerSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FLandscapeInfoLayerSettings
{ 
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                               // 0x0000   (0x0008)  
	FName                                              LayerName;                                                  // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeImportLayerInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FLandscapeImportLayerInfo
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayerStruct
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FLandscapeLayerStruct
{ 
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FLandscapeEditorLayerSettings
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FForeignWorldSplineData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignSplineSegmentData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FForeignSplineSegmentData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FForeignControlPointData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FLandscapeSplineMeshEntry
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                          // 0x0008   (0x0010)  
	bool                                               bCenterH : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FVector2D                                          CenterAdjust;                                               // 0x001C   (0x0008)  
	bool                                               bScaleToWidth : 1;                                          // 0x0024:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            Scale;                                                      // 0x0028   (0x000C)  
	TEnumAsByte<LandscapeSplineMeshOrientation>        Orientation;                                                // 0x0034   (0x0001)  
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                                // 0x0035   (0x0001)  
	TEnumAsByte<ESplineMeshAxis>                       UpAxis;                                                     // 0x0036   (0x0001)  
	unsigned char                                      UnknownData02_7[0x1];                                       // 0x0037   (0x0001)  MISSED
};

