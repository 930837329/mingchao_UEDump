
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/Foliage.EFoliageScaling
/// Size: 0x01 (1 bytes)
enum class EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform                                                         = 0,
	EFoliageScaling__Free                                                            = 1,
	EFoliageScaling__LockXY                                                          = 2,
	EFoliageScaling__LockXZ                                                          = 3,
	EFoliageScaling__LockYZ                                                          = 4
};

/// Enum /Script/Foliage.EVertexColorMaskChannel
/// Size: 0x01 (1 bytes)
enum class EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red                                                     = 0,
	EVertexColorMaskChannel__Green                                                   = 1,
	EVertexColorMaskChannel__Blue                                                    = 2,
	EVertexColorMaskChannel__Alpha                                                   = 3,
	EVertexColorMaskChannel__MAX_None                                                = 4
};

/// Enum /Script/Foliage.FoliageVertexColorMask
/// Size: 0x01 (1 bytes)
enum class FoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled                                                  = 0,
	FOLIAGEVERTEXCOLORMASK_Red                                                       = 1,
	FOLIAGEVERTEXCOLORMASK_Green                                                     = 2,
	FOLIAGEVERTEXCOLORMASK_Blue                                                      = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha                                                     = 4
};

/// Enum /Script/Foliage.ESimulationQuery
/// Size: 0x01 (1 bytes)
enum class ESimulationQuery : uint8_t
{
	ESimulationQuery__None                                                           = 0,
	ESimulationQuery__CollisionOverlap                                               = 1,
	ESimulationQuery__ShadeOverlap                                                   = 2,
	ESimulationQuery__AnyOverlap                                                     = 3
};

/// Enum /Script/Foliage.ESimulationOverlap
/// Size: 0x01 (1 bytes)
enum class ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap                                             = 0,
	ESimulationOverlap__ShadeOverlap                                                 = 1,
	ESimulationOverlap__None                                                         = 2
};

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x0040 (64 bytes) (0x000740 - 0x000780) align 16 pad: 0x0000
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
public:
	SDK_UNDEFINED(16,472) /* FMulticastInlineDelegate */ __um(OnInstanceTakePointDamage);                          // 0x0740   (0x0010)  
	SDK_UNDEFINED(16,473) /* FMulticastInlineDelegate */ __um(OnInstanceTakeRadialDamage);                         // 0x0750   (0x0010)  
	bool                                               bEnableDiscardOnLoad;                                       // 0x0760   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0761   (0x0003)  MISSED
	FGuid                                              GenerationGuid;                                             // 0x0764   (0x0010)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0774   (0x000C)  MISSED
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UFoliageStatistics : public UBlueprintFunctionLibrary
{ 
public:
	// int32_t FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius); // [0x38b6ce0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// int32_t FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FBox Box);          // [0x38b6ba0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/Foliage.FoliageVertexColorChannelMask
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FFoliageVertexColorChannelMask
{ 
	bool                                               UseMask : 1;                                                // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaskThreshold;                                              // 0x0004   (0x0004)  
	bool                                               InvertMask : 1;                                             // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Foliage.FoliageDensityFalloff
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FFoliageDensityFalloff
{ 
	bool                                               bUseFalloffCurve;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FRuntimeFloatCurve                                 FalloffCurve;                                               // 0x0008   (0x0088)  
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x0440 (1088 bytes) (0x000030 - 0x000470) align 8 pad: 0x0000
class UFoliageType : public UObject
{ 
public:
	FGuid                                              UpdateGuid;                                                 // 0x0030   (0x0010)  
	float                                              Density;                                                    // 0x0040   (0x0004)  
	float                                              DensityAdjustmentFactor;                                    // 0x0044   (0x0004)  
	float                                              Radius;                                                     // 0x0048   (0x0004)  
	bool                                               bSingleInstanceModeOverrideRadius;                          // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              SingleInstanceModeRadius;                                   // 0x0050   (0x0004)  
	EFoliageScaling                                    Scaling;                                                    // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0058   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x0060   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0068   (0x0008)  
	FFoliageVertexColorChannelMask                     VertexColorMaskByChannel[4];                                // 0x0070   (0x0030)  
	TEnumAsByte<FoliageVertexColorMask>                VertexColorMask;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	float                                              VertexColorMaskThreshold;                                   // 0x00A4   (0x0004)  
	bool                                               VertexColorMaskInvert : 1;                                  // 0x00A8:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	FFloatInterval                                     ZOffset;                                                    // 0x00AC   (0x0008)  
	bool                                               AlignToNormal : 1;                                          // 0x00B4:0 (0x0001)  
	bool                                               AverageNormal : 1;                                          // 0x00B4:1 (0x0001)  
	bool                                               AverageNormalSingleComponent : 1;                           // 0x00B4:2 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              AlignMaxAngle;                                              // 0x00B8   (0x0004)  
	bool                                               RandomYaw : 1;                                              // 0x00BC:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              RandomPitchAngle;                                           // 0x00C0   (0x0004)  
	FFloatInterval                                     GroundSlopeAngle;                                           // 0x00C4   (0x0008)  
	FFloatInterval                                     Height;                                                     // 0x00CC   (0x0008)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	TArray<FName>                                      LandscapeLayers;                                            // 0x00D8   (0x0010)  
	float                                              MinimumLayerWeight;                                         // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	TArray<FName>                                      ExclusionLandscapeLayers;                                   // 0x00F0   (0x0010)  
	float                                              MinimumExclusionLayerWeight;                                // 0x0100   (0x0004)  
	FName                                              LandscapeLayer;                                             // 0x0104   (0x000C)  
	bool                                               CollisionWithWorld : 1;                                     // 0x0110:0 (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	FVector                                            CollisionScale;                                             // 0x0114   (0x000C)  
	int32_t                                            AverageNormalSampleCount;                                   // 0x0120   (0x0004)  
	FBoxSphereBounds                                   MeshBounds;                                                 // 0x0124   (0x001C)  
	FVector                                            LowBoundOriginRadius;                                       // 0x0140   (0x000C)  
	TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x014C   (0x0001)  
	EKuroISMCullingType                                KuroFoliageCullType;                                        // 0x014D   (0x0001)  
	unsigned char                                      UnknownData09_6[0x1];                                       // 0x014E   (0x0001)  MISSED
	bool                                               bOverride_KuroFoliageSplitNode : 1;                         // 0x014F:0 (0x0001)  
	bool                                               bOverride_KuroMinVertsToSplitNode : 1;                      // 0x014F:1 (0x0001)  
	float                                              KuroFoliageSplitFactor;                                     // 0x0150   (0x0004)  
	float                                              KuroMinVertsToSplitNode;                                    // 0x0154   (0x0004)  
	FInt32Interval                                     CullDistance;                                               // 0x0158   (0x0008)  
	FPerPlatformFloat                                  FoliageDensityLow;                                          // 0x0160   (0x0004)  
	FPerPlatformFloat                                  FoliageDensityMiddle;                                       // 0x0164   (0x0004)  
	FPerPlatformFloat                                  FoliageDensityHigh;                                         // 0x0168   (0x0004)  
	bool                                               bEnableStaticLighting : 1;                                  // 0x016C:0 (0x0001)  
	bool                                               CastShadow : 1;                                             // 0x016C:1 (0x0001)  
	bool                                               bAffectDynamicIndirectLighting : 1;                         // 0x016C:2 (0x0001)  
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x016C:3 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x016C:4 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x016C:5 (0x0001)  
	unsigned char                                      UnknownData10_3[0x3];                                       // 0x016D   (0x0003)  MISSED
	bool                                               bCastContactShadow : 1;                                     // 0x0170:0 (0x0001)  
	unsigned char                                      UnknownData11_3[0x3];                                       // 0x0171   (0x0003)  MISSED
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x0174:0 (0x0001)  
	bool                                               bReceivesDecals : 1;                                        // 0x0174:1 (0x0001)  
	bool                                               bOverrideLightMapRes : 1;                                   // 0x0174:2 (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x0175   (0x0003)  MISSED
	int32_t                                            OverriddenLightMapRes;                                      // 0x0178   (0x0004)  
	ELightmapType                                      LightmapType;                                               // 0x017C   (0x0001)  
	unsigned char                                      UnknownData13_6[0x3];                                       // 0x017D   (0x0003)  MISSED
	bool                                               bUseAsOccluder : 1;                                         // 0x0180:0 (0x0001)  
	unsigned char                                      UnknownData14_5[0x7];                                       // 0x0181   (0x0007)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x0188   (0x0160)  
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                    // 0x02E8   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x02E9   (0x0001)  
	unsigned char                                      UnknownData15_6[0x2];                                       // 0x02EA   (0x0002)  MISSED
	bool                                               bRenderCustomDepth : 1;                                     // 0x02EC:0 (0x0001)  
	unsigned char                                      UnknownData16_5[0x3];                                       // 0x02ED   (0x0003)  MISSED
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData17_6[0x3];                                       // 0x02F1   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x02F4   (0x0004)  
	int32_t                                            TranslucencySortPriority;                                   // 0x02F8   (0x0004)  
	float                                              CollisionRadius;                                            // 0x02FC   (0x0004)  
	float                                              ShadeRadius;                                                // 0x0300   (0x0004)  
	int32_t                                            NumSteps;                                                   // 0x0304   (0x0004)  
	float                                              InitialSeedDensity;                                         // 0x0308   (0x0004)  
	float                                              AverageSpreadDistance;                                      // 0x030C   (0x0004)  
	float                                              SpreadVariance;                                             // 0x0310   (0x0004)  
	int32_t                                            SeedsPerStep;                                               // 0x0314   (0x0004)  
	int32_t                                            DistributionSeed;                                           // 0x0318   (0x0004)  
	float                                              MaxInitialSeedOffset;                                       // 0x031C   (0x0004)  
	bool                                               bCanGrowInShade;                                            // 0x0320   (0x0001)  
	bool                                               bSpawnsInShade;                                             // 0x0321   (0x0001)  
	unsigned char                                      UnknownData18_6[0x2];                                       // 0x0322   (0x0002)  MISSED
	float                                              MaxInitialAge;                                              // 0x0324   (0x0004)  
	float                                              MaxAge;                                                     // 0x0328   (0x0004)  
	float                                              OverlapPriority;                                            // 0x032C   (0x0004)  
	FFloatInterval                                     ProceduralScale;                                            // 0x0330   (0x0008)  
	FRuntimeFloatCurve                                 ScaleCurve;                                                 // 0x0338   (0x0088)  
	FFoliageDensityFalloff                             DensityFalloff;                                             // 0x03C0   (0x0090)  
	int32_t                                            ChangeCount;                                                // 0x0450   (0x0004)  
	bool                                               ReapplyDensity : 1;                                         // 0x0454:0 (0x0001)  
	bool                                               ReapplyRadius : 1;                                          // 0x0454:1 (0x0001)  
	bool                                               ReapplyAlignToNormal : 1;                                   // 0x0454:2 (0x0001)  
	bool                                               ReapplyRandomYaw : 1;                                       // 0x0454:3 (0x0001)  
	bool                                               ReapplyScaling : 1;                                         // 0x0454:4 (0x0001)  
	bool                                               ReapplyScaleX : 1;                                          // 0x0454:5 (0x0001)  
	bool                                               ReapplyScaleY : 1;                                          // 0x0454:6 (0x0001)  
	bool                                               ReapplyScaleZ : 1;                                          // 0x0454:7 (0x0001)  
	bool                                               ReapplyRandomPitchAngle : 1;                                // 0x0455:0 (0x0001)  
	bool                                               ReapplyGroundSlope : 1;                                     // 0x0455:1 (0x0001)  
	bool                                               ReapplyHeight : 1;                                          // 0x0455:2 (0x0001)  
	bool                                               ReapplyLandscapeLayers : 1;                                 // 0x0455:3 (0x0001)  
	bool                                               ReapplyZOffset : 1;                                         // 0x0455:4 (0x0001)  
	bool                                               ReapplyCollisionWithWorld : 1;                              // 0x0455:5 (0x0001)  
	bool                                               ReapplyVertexColorMask : 1;                                 // 0x0455:6 (0x0001)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x0455:7 (0x0001)  
	bool                                               bEnableDiscardOnLoad : 1;                                   // 0x0456:0 (0x0001)  
	unsigned char                                      UnknownData19_5[0x1];                                       // 0x0457   (0x0001)  MISSED
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x0458   (0x0010)  
	int32_t                                            VirtualTextureCullMips;                                     // 0x0468   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x046C   (0x0001)  
	unsigned char                                      UnknownData20_7[0x3];                                       // 0x046D   (0x0003)  MISSED
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x0018 (24 bytes) (0x000470 - 0x000488) align 8 pad: 0x0000
class UFoliageType_Actor : public UFoliageType
{ 
public:
	class UClass*                                      ActorClass;                                                 // 0x0470   (0x0008)  
	bool                                               bShouldAttachToBaseComponent;                               // 0x0478   (0x0001)  
	bool                                               bStaticMeshOnly;                                            // 0x0479   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x047A   (0x0006)  MISSED
	class UClass*                                      StaticMeshOnlyComponentClass;                               // 0x0480   (0x0008)  
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x0020 (32 bytes) (0x000470 - 0x000490) align 8 pad: 0x0000
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
public:
	class UStaticMesh*                                 Mesh;                                                       // 0x0470   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0478   (0x0010)  
	class UClass*                                      ComponentClass;                                             // 0x0488   (0x0008)  
};

/// Struct /Script/Foliage.PCGFoliageInstance
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FPCGFoliageInstance
{ 
	class UFoliageType*                                FoliageType;                                                // 0x0000   (0x0008)  
	TArray<int32_t>                                    IDs;                                                        // 0x0008   (0x0010)  
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x0060 (96 bytes) (0x0002A8 - 0x000308) align 8 pad: 0x0000
class AInstancedFoliageActor : public AISMPartitionActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x02A8   (0x0050)  MISSED
	TArray<FPCGFoliageInstance>                        PCGFoliageInstances;                                        // 0x02F8   (0x0010)  
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0060 (96 bytes) (0x0002B8 - 0x000318) align 8 pad: 0x0000
class AInteractiveFoliageActor : public AStaticMeshActor
{ 
public:
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x02B8   (0x0008)  
	FVector                                            TouchingActorEntryPosition;                                 // 0x02C0   (0x000C)  
	FVector                                            FoliageVelocity;                                            // 0x02CC   (0x000C)  
	FVector                                            FoliageForce;                                               // 0x02D8   (0x000C)  
	FVector                                            FoliagePosition;                                            // 0x02E4   (0x000C)  
	float                                              FoliageDamageImpulseScale;                                  // 0x02F0   (0x0004)  
	float                                              FoliageTouchImpulseScale;                                   // 0x02F4   (0x0004)  
	float                                              FoliageStiffness;                                           // 0x02F8   (0x0004)  
	float                                              FoliageStiffnessQuadratic;                                  // 0x02FC   (0x0004)  
	float                                              FoliageDamping;                                             // 0x0300   (0x0004)  
	float                                              MaxDamageImpulse;                                           // 0x0304   (0x0004)  
	float                                              MaxTouchImpulse;                                            // 0x0308   (0x0004)  
	float                                              MaxForce;                                                   // 0x030C   (0x0004)  
	float                                              Mass;                                                       // 0x0310   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0314   (0x0004)  MISSED
	// void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // [0x38b6970] Final|Native|Protected|HasOutParms 
};

/// Class /Script/Foliage.InteractiveFoliageComponent
/// Size: 0x0008 (8 bytes) (0x000588 - 0x000590) align 16 pad: 0x0000
class UInteractiveFoliageComponent : public UStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0588   (0x0008)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0098 (152 bytes) (0x0002E0 - 0x000378) align 8 pad: 0x0000
class AProceduralFoliageBlockingVolume : public AVolume
{ 
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                    // 0x02E0   (0x0008)  
	FFoliageDensityFalloff                             DensityFalloff;                                             // 0x02E8   (0x0090)  
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x0028 (40 bytes) (0x0000C0 - 0x0000E8) align 8 pad: 0x0000
class UProceduralFoliageComponent : public UActorComponent
{ 
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x00C0   (0x0008)  
	float                                              TileOverlap;                                                // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class AVolume*                                     SpawningVolume;                                             // 0x00D0   (0x0008)  
	FGuid                                              ProceduralGuid;                                             // 0x00D8   (0x0010)  
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FFoliageTypeObject
{ 
	class UObject*                                     FoliageTypeObject;                                          // 0x0000   (0x0008)  
	class UFoliageType*                                TypeInstance;                                               // 0x0008   (0x0008)  
	bool                                               bIsAsset;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	class UClass*                                      Type;                                                       // 0x0018   (0x0008)  
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 8 pad: 0x0000
class UProceduralFoliageSpawner : public UObject
{ 
public:
	int32_t                                            RandomSeed;                                                 // 0x0030   (0x0004)  
	float                                              TileSize;                                                   // 0x0034   (0x0004)  
	int32_t                                            NumUniqueTiles;                                             // 0x0038   (0x0004)  
	float                                              MinimumQuadTreeSize;                                        // 0x003C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED
	TArray<FFoliageTypeObject>                         FoliageTypes;                                               // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0058   (0x0018)  MISSED
	// void Simulate(int32_t NumSteps);                                                                                         // [0x38b6e40] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 pad: 0x0000
struct FProceduralFoliageInstance
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	float                                              AGE;                                                        // 0x001C   (0x0004)  
	FVector                                            Normal;                                                     // 0x0020   (0x000C)  
	float                                              Scale;                                                      // 0x002C   (0x0004)  
	class UFoliageType*                                Type;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0130 (304 bytes) (0x000030 - 0x000160) align 8 pad: 0x0000
class UProceduralFoliageTile : public UObject
{ 
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x0038   (0x00A0)  MISSED
	TArray<FProceduralFoliageInstance>                 InstancesArray;                                             // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x78];                                      // 0x00E8   (0x0078)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0008 (8 bytes) (0x0002E0 - 0x0002E8) align 8 pad: 0x0000
class AProceduralFoliageVolume : public AVolume
{ 
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                        // 0x02E0   (0x0008)  
};

