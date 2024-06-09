
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ActorSequence
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: Foliage
/// dependency: KuroCurve
/// dependency: KuroPointCloud
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: Niagara
/// dependency: PhysicsCore
/// dependency: ProceduralMeshComponent
/// dependency: Renderer

/// Enum /Script/KuroRenderingRuntimeBPPlugin.EBillboardMode
/// Size: 0x01 (1 bytes)
enum class EBillboardMode : uint8_t
{
	EBillboardMode__Free                                                             = 0,
	EBillboardMode__UpWard                                                           = 1,
	EBillboardMode__Right                                                            = 2,
	EBillboardMode__Max                                                              = 3
};

/// Enum /Script/KuroRenderingRuntimeBPPlugin.EKuroClusteredStuffBlendMode
/// Size: 0x01 (1 bytes)
enum class EKuroClusteredStuffBlendMode : uint8_t
{
	EKuroClusteredStuffBlendMode__EAdd                                               = 0,
	EKuroClusteredStuffBlendMode__EOverlay                                           = 1,
	EKuroClusteredStuffBlendMode__EMax                                               = 2
};

/// Enum /Script/KuroRenderingRuntimeBPPlugin.EKuroDynamicCloudType
/// Size: 0x01 (1 bytes)
enum class EKuroDynamicCloudType : uint8_t
{
	Cloud_TianCheng                                                                  = 0,
	Cloud_YiLuoYuanXiang                                                             = 1,
	Cloud_WuGuangZhiSen                                                              = 2,
	Cloud_ZhongQuTaiDi                                                               = 3,
	Cloud_Area05                                                                     = 4,
	Cloud_Area06                                                                     = 5,
	Cloud_Area07                                                                     = 6,
	Cloud_Area08                                                                     = 7,
	Cloud_Area09                                                                     = 8,
	Cloud_Area10                                                                     = 9,
	Cloud_Area11                                                                     = 10,
	Cloud_WuYinQu01                                                                  = 11,
	Cloud_DengLuJieMian                                                              = 12,
	Cloud_WuYinQu02                                                                  = 13,
	Cloud_WuYinQu03                                                                  = 14,
	Cloud_WuYinQu04                                                                  = 15,
	Cloud_WuYinQu05                                                                  = 16,
	Cloud_WuYinQuInit                                                                = 17,
	Cloud_XuanWoYun                                                                  = 18,
	Cloud_MingChaoTianQi                                                             = 19,
	Cloud_YinTianYiXiang                                                             = 20,
	Cloud_HuangHunYiXiang                                                            = 21,
	Cloud_YeWanYiXiang                                                               = 22,
	Cloud_Special01                                                                  = 23,
	Cloud_Special02                                                                  = 24,
	Cloud_BeiLuoYe                                                                   = 25,
	Cloud_SuiGuang                                                                   = 26,
	Cloud_FuBen01                                                                    = 27,
	Cloud_FuBen02                                                                    = 28,
	Cloud_Max                                                                        = 29,
	Cloud_Max31                                                                      = 30
};

/// Enum /Script/KuroRenderingRuntimeBPPlugin.EKuroPPLensflareType
/// Size: 0x01 (1 bytes)
enum class EKuroPPLensflareType : uint8_t
{
	EKuroPPLensflareType1                                                            = 0,
	EKuroPPLensflareType2                                                            = 1,
	EKuroPPLensflareType3                                                            = 2,
	EKuroPPLensflareType4                                                            = 3,
	EKuroPPLensflareType5                                                            = 4,
	EKuroPPLensflareType6                                                            = 5,
	EKuroPPLensflareType7                                                            = 6,
	EKuroPPLensflareType8                                                            = 7,
	EKuroPPLensflareType9                                                            = 8,
	EKuroPPLensflareType10                                                           = 9,
	EKuroPPLensflareType11                                                           = 10,
	EKuroPPLensflareType12                                                           = 11,
	EKuroPPLensflareType13                                                           = 12,
	EKuroPPLensflareType14                                                           = 13,
	EKuroPPLensflareType15                                                           = 14,
	EKuroPPLensflareType16                                                           = 15,
	EKuroPPLensflareType_Max                                                         = 16,
	EKuroPPLensflareType_Max18                                                       = 17
};

/// Enum /Script/KuroRenderingRuntimeBPPlugin.EKuroThunderType
/// Size: 0x01 (1 bytes)
enum class EKuroThunderType : uint8_t
{
	EKuroThunderType1                                                                = 0,
	EKuroThunderType2                                                                = 1,
	EKuroThunderType3                                                                = 2,
	EKuroThunderType4                                                                = 3,
	EKuroThunderType5                                                                = 4,
	EKuroThunderType6                                                                = 5,
	EKuroThunderType7                                                                = 6,
	EKuroThunderType8                                                                = 7,
	EKuroThunderType9                                                                = 8,
	EKuroThunderType10                                                               = 9,
	EKuroThunderType11                                                               = 10,
	EKuroThunderType12                                                               = 11,
	EKuroThunderType13                                                               = 12,
	EKuroThunderType14                                                               = 13,
	EKuroThunderType15                                                               = 14,
	EKuroThunderType16                                                               = 15,
	EKuroThunderType_Max                                                             = 16,
	EKuroThunderType_Max18                                                           = 17
};

/// Enum /Script/KuroRenderingRuntimeBPPlugin.EKuroRainType
/// Size: 0x01 (1 bytes)
enum class EKuroRainType : uint8_t
{
	EKuroRainType1                                                                   = 0,
	EKuroRainType2                                                                   = 1,
	EKuroRainType3                                                                   = 2,
	EKuroRainType4                                                                   = 3,
	EKuroRainType5                                                                   = 4,
	EKuroRainType6                                                                   = 5,
	EKuroRainType7                                                                   = 6,
	EKuroRainType8                                                                   = 7,
	EKuroRainType9                                                                   = 8,
	EKuroRainType10                                                                  = 9,
	EKuroRainType11                                                                  = 10,
	EKuroRainType12                                                                  = 11,
	EKuroRainType13                                                                  = 12,
	EKuroRainType14                                                                  = 13,
	EKuroRainType15                                                                  = 14,
	EKuroRainType16                                                                  = 15
};

/// Enum /Script/KuroRenderingRuntimeBPPlugin.EKuroUI3DState
/// Size: 0x01 (1 bytes)
enum class EKuroUI3DState : uint8_t
{
	EKuroUI3DState__NotLoaded                                                        = 0,
	EKuroUI3DState__Loading                                                          = 1,
	EKuroUI3DState__Loaded                                                           = 2
};

/// Enum /Script/KuroRenderingRuntimeBPPlugin.EKuroSceneInteractionState
/// Size: 0x01 (1 bytes)
enum class EKuroSceneInteractionState : uint8_t
{
	EKuroSceneInteractionState__State1                                               = 0,
	EKuroSceneInteractionState__State2                                               = 1,
	EKuroSceneInteractionState__State3                                               = 2,
	EKuroSceneInteractionState__State4                                               = 3,
	EKuroSceneInteractionState__State5                                               = 4,
	EKuroSceneInteractionState__State6                                               = 5,
	EKuroSceneInteractionState__State7                                               = 6,
	EKuroSceneInteractionState__State8                                               = 7,
	EKuroSceneInteractionState__State9                                               = 8,
	EKuroSceneInteractionState__State10                                              = 9,
	EKuroSceneInteractionState__State11                                              = 10,
	EKuroSceneInteractionState__State12                                              = 11,
	EKuroSceneInteractionState__State13                                              = 12,
	EKuroSceneInteractionState__State14                                              = 13,
	EKuroSceneInteractionState__State15                                              = 14,
	EKuroSceneInteractionState__State16                                              = 15,
	EKuroSceneInteractionState__State17                                              = 16,
	EKuroSceneInteractionState__State18                                              = 17,
	EKuroSceneInteractionState__State19                                              = 18,
	EKuroSceneInteractionState__State20                                              = 19,
	EKuroSceneInteractionState__ConcealedState                                       = 20,
	EKuroSceneInteractionState__Error                                                = 21
};

/// Enum /Script/KuroRenderingRuntimeBPPlugin.EKuroUiSceneLoadingState
/// Size: 0x01 (1 bytes)
enum class EKuroUiSceneLoadingState : uint8_t
{
	EKuroUiSceneLoadingState__NotLoaded                                              = 0,
	EKuroUiSceneLoadingState__Loading                                                = 1,
	EKuroUiSceneLoadingState__LoadedNotVisible                                       = 2,
	EKuroUiSceneLoadingState__LoadedAndVisible                                       = 3
};

/// Enum /Script/KuroRenderingRuntimeBPPlugin.KuroFeatureLevel
/// Size: 0x01 (1 bytes)
enum class KuroFeatureLevel : uint8_t
{
	KuroFeatureLevel__ES3                                                            = 0,
	KuroFeatureLevel__SM5                                                            = 1
};

/// Enum /Script/KuroRenderingRuntimeBPPlugin.BP_EWorldType
/// Size: 0x01 (1 bytes)
enum class BP_EWorldType : uint8_t
{
	BP_EWorldType__None                                                              = 0,
	BP_EWorldType__Game                                                              = 1,
	BP_EWorldType__Editor                                                            = 2,
	BP_EWorldType__PIE                                                               = 3,
	BP_EWorldType__EditorPreview                                                     = 4,
	BP_EWorldType__GamePreview                                                       = 5,
	BP_EWorldType__GameRPC                                                           = 6,
	BP_EWorldType__Inactive                                                          = 7
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.InteractiveLeaves
/// Size: 0x01B8 (440 bytes) (0x0002A8 - 0x000460) align 16 pad: 0x0000
class AInteractiveLeaves : public AActor
{ 
public:
	class UInstancedStaticMeshComponent*               IsmComponent;                                               // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        StaticComponent;                                            // 0x02B0   (0x0008)  
	class UInteractiveLeavesConfigData*                Config;                                                     // 0x02B8   (0x0008)  
	class UKuroPointCloudCache*                        PointCache;                                                 // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x198];                                     // 0x02C8   (0x0198)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.InteractiveLeavesConfigData
/// Size: 0x00C8 (200 bytes) (0x000038 - 0x000100) align 8 pad: 0x0000
class UInteractiveLeavesConfigData : public UPrimaryDataAsset
{ 
public:
	class UKuroPointCloudCache*                        PointCache;                                                 // 0x0038   (0x0008)  
	class UStaticMesh*                                 InstanceMesh;                                               // 0x0040   (0x0008)  
	class UMaterialInterface*                          InstanceMaterial;                                           // 0x0048   (0x0008)  
	class UStaticMesh*                                 WholeMesh;                                                  // 0x0050   (0x0008)  
	class UMaterialInterface*                          WholeMaterial;                                              // 0x0058   (0x0008)  
	float                                              PlayerRadius;                                               // 0x0060   (0x0004)  
	float                                              ReviveRadius;                                               // 0x0064   (0x0004)  
	float                                              LifeTime;                                                   // 0x0068   (0x0004)  
	float                                              InitialAgeRandom;                                           // 0x006C   (0x0004)  
	float                                              DisappearTime;                                              // 0x0070   (0x0004)  
	float                                              ReviveTime;                                                 // 0x0074   (0x0004)  
	float                                              Drag;                                                       // 0x0078   (0x0004)  
	float                                              PlayerForceSize;                                            // 0x007C   (0x0004)  
	float                                              PlayerForceExp;                                             // 0x0080   (0x0004)  
	float                                              InitVelocitySizeMin;                                        // 0x0084   (0x0004)  
	float                                              InitVelocitySizeMax;                                        // 0x0088   (0x0004)  
	float                                              InitFloatVelocitySizeMin;                                   // 0x008C   (0x0004)  
	float                                              InitFloatVelocitySizeMax;                                   // 0x0090   (0x0004)  
	FVector                                            ConstForce;                                                 // 0x0094   (0x000C)  
	FKuroPointKdTree                                   SpatialTree;                                                // 0x00A0   (0x0058)  
	int32_t                                            PointNumCached;                                             // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroAnimNotify
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UKuroAnimNotify : public UAnimNotify
{ 
public:
	int32_t                                            exportIndex;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
	// bool K2_ValidateAssets();                                                                                                // [0x25a7960] Event|Public|BlueprintEvent 
	// bool K2_PostChangeProperty(FName PropertyName);                                                                          // [0x25a7960] Event|Public|BlueprintEvent 
	// bool K2_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);                              // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroAnimNotifyState
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UKuroAnimNotifyState : public UAnimNotifyState
{ 
public:
	int32_t                                            exportIndex;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
	// bool K2_ValidateAssets();                                                                                                // [0x25a7960] Event|Public|BlueprintEvent 
	// bool K2_PostChangeProperty(FName PropertyName);                                                                          // [0x25a7960] Event|Public|BlueprintEvent 
	// bool K2_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);    // [0x25a7960] Event|Public|BlueprintEvent 
	// bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);                           // [0x25a7960] Event|Public|BlueprintEvent 
	// bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);    // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroBezierMeshComponent
/// Size: 0x00C0 (192 bytes) (0x000570 - 0x000630) align 16 pad: 0x0000
class UKuroBezierMeshComponent : public UProceduralMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0570   (0x00C0)  MISSED
	// void UpdateMesh(int32_t Section);                                                                                        // [0xfcb1a0] Final|Native|Public|BlueprintCallable 
	// void Setup(int32_t Width, float InUnitLength);                                                                           // [0xfcb0a0] Final|Native|Public|BlueprintCallable 
	// void SetKeyPoint(int32_t Index, float X, float Y, float Z);                                                              // [0xfc8240] Final|Native|Public|BlueprintCallable 
	// TArray<FVector> GetPointsArray();                                                                                        // [0xfc5690] Final|Native|Public|BlueprintCallable 
	// int32_t GetMeshWidth();                                                                                                  // [0xfc5230] Final|Native|Public|BlueprintCallable 
	// TArray<int32_t> GetMeshTriangles();                                                                                      // [0xfc5170] Final|Native|Public|BlueprintCallable 
	// TArray<FVector> GetMeshPoints();                                                                                         // [0xfc50b0] Final|Native|Public|BlueprintCallable 
	// int32_t GetMeshHeight();                                                                                                 // [0xfc5090] Final|Native|Public|BlueprintCallable 
	// int32_t GetLayerNum();                                                                                                   // [0xfc4f90] Final|Native|Public|BlueprintCallable 
	// void Dissipate(float SubLayersNum);                                                                                      // [0xfc43a0] Final|Native|Public|BlueprintCallable 
	// void ClearData();                                                                                                        // [0xfc4380] Final|Native|Public|BlueprintCallable 
	// void AddLayer(float ALPHA);                                                                                              // [0xfc40e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroBillboardComponent
/// Size: 0x0010 (16 bytes) (0x0000C0 - 0x0000D0) align 8 pad: 0x0000
class UKuroBillboardComponent : public UActorComponent
{ 
public:
	bool                                               IsUpdateEveryFrame;                                         // 0x00C0   (0x0001)  
	EBillboardMode                                     OrientAxis;                                                 // 0x00C1   (0x0001)  
	bool                                               IsFixSize;                                                  // 0x00C2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00C3   (0x0001)  MISSED
	float                                              ScaleSize;                                                  // 0x00C4   (0x0004)  
	float                                              MaxDistance;                                                // 0x00C8   (0x0004)  
	float                                              MinSize;                                                    // 0x00CC   (0x0004)  
	// void Update();                                                                                                           // [0xfcb170] Final|Native|Public|BlueprintCallable|Const 
	// void Initialize();                                                                                                       // [0xfc6150] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroChangeMaterialsTextures
/// Size: 0x0030 (48 bytes) (0x000038 - 0x000068) align 8 pad: 0x0000
class UKuroChangeMaterialsTextures : public UPrimaryDataAsset
{ 
public:
	FString                                            SkeletalMeshName;                                           // 0x0038   (0x0010)  
	FName                                              ParameterName;                                              // 0x0048   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(16,613) /* TArray<TWeakObjectPtr<UTexture2D*>> */ __um(Textures);                                // 0x0058   (0x0010)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroChangeSkeletalMaterialsComponent
/// Size: 0x0010 (16 bytes) (0x0000C0 - 0x0000D0) align 8 pad: 0x0000
class UKuroChangeSkeletalMaterialsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00C0   (0x0010)  MISSED
	// void ChangeMaterialsWithTextures(class USkeletalMeshComponent* SkeletalMeshComponent, FName ParameterName, TArray<TWeakObjectPtr<UTexture2D*>>& Textures); // [0xfc4210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void ChangeMaterialsWithDataAsset(class UKuroChangeMaterialsTextures* DataAsset);                                        // [0xfc4180] Final|Native|Public|BlueprintCallable 
	// void CancelChangeMaterials();                                                                                            // [0xfc4160] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroCharMaterialControllerFloatGroup
/// Size: 0x01B0 (432 bytes) (0x000000 - 0x0001B0) align 8 pad: 0x0000
struct FKuroCharMaterialControllerFloatGroup
{ 
	FKuroCurveFloat                                    Start;                                                      // 0x0000   (0x0090)  
	FKuroCurveFloat                                    Loop;                                                       // 0x0090   (0x0090)  
	FKuroCurveFloat                                    End;                                                        // 0x0120   (0x0090)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroCharMaterialControllerColorGroup
/// Size: 0x0660 (1632 bytes) (0x000000 - 0x000660) align 8 pad: 0x0000
struct FKuroCharMaterialControllerColorGroup
{ 
	FKuroCurveLinearColor                              Start;                                                      // 0x0000   (0x0220)  
	FKuroCurveLinearColor                              Loop;                                                       // 0x0220   (0x0220)  
	FKuroCurveLinearColor                              End;                                                        // 0x0440   (0x0220)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroCharacterMaterialControllerCache
/// Size: 0x6970 (26992 bytes) (0x000030 - 0x0069A0) align 8 pad: 0x0000
class UKuroCharacterMaterialControllerCache : public UObject
{ 
public:
	FKuroCharMaterialControllerFloatGroup              Rotation;                                                   // 0x0030   (0x01B0)  
	FKuroCharMaterialControllerColorGroup              TextureScaleAndOffset;                                      // 0x01E0   (0x0660)  
	FKuroCharMaterialControllerColorGroup              TextureSpeed;                                               // 0x0840   (0x0660)  
	FKuroCharMaterialControllerColorGroup              TextureColorTint;                                           // 0x0EA0   (0x0660)  
	FKuroCharMaterialControllerFloatGroup              TextureStrength;                                            // 0x1500   (0x01B0)  
	FKuroCharMaterialControllerFloatGroup              TextureLowerLimit;                                          // 0x16B0   (0x01B0)  
	FKuroCharMaterialControllerFloatGroup              TextureUpperLimit;                                          // 0x1860   (0x01B0)  
	TArray<FKuroCharMaterialControllerFloatGroup>      FloatParameters;                                            // 0x1A10   (0x0010)  
	TArray<FKuroCharMaterialControllerColorGroup>      ColorParameters;                                            // 0x1A20   (0x0010)  
	FKuroCharMaterialControllerFloatGroup              RimRange;                                                   // 0x1A30   (0x01B0)  
	FKuroCharMaterialControllerColorGroup              RimColor;                                                   // 0x1BE0   (0x0660)  
	FKuroCharMaterialControllerFloatGroup              OutlineWidth;                                               // 0x2240   (0x01B0)  
	FKuroCharMaterialControllerColorGroup              OutlineColor;                                               // 0x23F0   (0x0660)  
	FKuroCharMaterialControllerFloatGroup              DissolveProgress;                                           // 0x2A50   (0x01B0)  
	FKuroCharMaterialControllerFloatGroup              DissolveColorIntensity;                                     // 0x2C00   (0x01B0)  
	FKuroCharMaterialControllerColorGroup              DissolveColor;                                              // 0x2DB0   (0x0660)  
	FKuroCharMaterialControllerFloatGroup              DissolveSmooth;                                             // 0x3410   (0x01B0)  
	FKuroCharMaterialControllerColorGroup              BaseColorTint;                                              // 0x35C0   (0x0660)  
	FKuroCharMaterialControllerColorGroup              MainTexColorTint;                                           // 0x3C20   (0x0660)  
	FKuroCharMaterialControllerColorGroup              EmissionColor;                                              // 0x4280   (0x0660)  
	FKuroCharMaterialControllerFloatGroup              EmissionIntensity;                                          // 0x48E0   (0x01B0)  
	FKuroCharMaterialControllerColorGroup              BaseRefine;                                                 // 0x4A90   (0x0660)  
	FKuroCharMaterialControllerColorGroup              MotionColorStart;                                           // 0x50F0   (0x0660)  
	FKuroCharMaterialControllerColorGroup              MotionColorEnd;                                             // 0x5750   (0x0660)  
	FKuroCharMaterialControllerFloatGroup              MotionNoiseSpeed;                                           // 0x5DB0   (0x01B0)  
	FKuroCharMaterialControllerFloatGroup              StripMaskProportion;                                        // 0x5F60   (0x01B0)  
	FKuroCharMaterialControllerFloatGroup              StripMaskVScale;                                            // 0x6110   (0x01B0)  
	FKuroCharMaterialControllerFloatGroup              StripMaskVSpeed;                                            // 0x62C0   (0x01B0)  
	FKuroCharMaterialControllerFloatGroup              DitherValue;                                                // 0x6470   (0x01B0)  
	TArray<FKuroCharMaterialControllerFloatGroup>      CustomFloatParameters;                                      // 0x6620   (0x0010)  
	TArray<FKuroCharMaterialControllerColorGroup>      CustomColorParameters;                                      // 0x6630   (0x0010)  
	FKuroCharMaterialControllerFloatGroup              HairDisplaceProgress;                                       // 0x6640   (0x01B0)  
	FKuroCharMaterialControllerFloatGroup              HairDisplaceContrast;                                       // 0x67F0   (0x01B0)  
	// void SetTextureUpperLimit(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                          // [0xfcae60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetTextureStrength(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                            // [0xfcac20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetTextureSpeed(FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End);             // [0xfca950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetTextureScaleAndOffset(FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End);    // [0xfca680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetTextureLowerLimit(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                          // [0xfca440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetTextureColorTint(FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End);         // [0xfca170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetStripMaskVSpeed(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                            // [0xfc9f30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetStripMaskVScale(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                            // [0xfc9cf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetStripMaskProportion(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                        // [0xfc9ab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetRotation(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                                   // [0xfc9870] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetRimRange(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                                   // [0xfc9630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetRimColor(FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End);                 // [0xfc9360] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetOutlineWidth(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                               // [0xfc9120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetOutlineColor(FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End);             // [0xfc8e50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetMotionNoiseSpeed(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                           // [0xfc8c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetMotionColorStart(FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End);         // [0xfc8940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetMotionColorEnd(FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End);           // [0xfc8670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetMainTexColorTint(FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End);         // [0xfc83a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetHairDisplaceProgress(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                       // [0xfc8000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetHairDisplaceContrast(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                       // [0xfc7dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetEmissionIntensity(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                          // [0xfc7b80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetEmissionColor(FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End);            // [0xfc78b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetDitherValue(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                                // [0xfc7670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetDissolveSmooth(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                             // [0xfc7430] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetDissolveProgress(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                           // [0xfc71f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetDissolveColorIntensity(FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End);                     // [0xfc6fb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetDissolveColor(FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End);            // [0xfc6ce0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetCustomFloatParametersValue(TArray<FKuroCurveFloat> Start, TArray<FKuroCurveFloat> Loop, TArray<FKuroCurveFloat> End); // [0xfc6920] Final|Native|Public|BlueprintCallable 
	// void SetCustomColorParametersValue(TArray<FKuroCurveLinearColor> Start, TArray<FKuroCurveLinearColor> Loop, TArray<FKuroCurveLinearColor> End); // [0xfc6710] Final|Native|Public|BlueprintCallable 
	// void SetBaseRefine(FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End);               // [0xfc6440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetBaseColorTint(FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End);            // [0xfc6170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// float GetTextureUpperLimit(float Factor, int32_t Type);                                                                  // [0xfc6080] Final|Native|Public|BlueprintCallable 
	// float GetTextureStrength(float Factor, int32_t Type);                                                                    // [0xfc5fb0] Final|Native|Public|BlueprintCallable 
	// FLinearColor GetTextureSpeed(float Factor, int32_t Type);                                                                // [0xfc5ed0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FLinearColor GetTextureScaleAndOffset(float Factor, int32_t Type);                                                       // [0xfc5df0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// float GetTextureLowerLimit(float Factor, int32_t Type);                                                                  // [0xfc5d20] Final|Native|Public|BlueprintCallable 
	// FLinearColor GetTextureColorTint(float Factor, int32_t Type);                                                            // [0xfc5c40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// float GetStripMaskVSpeed(float Factor, int32_t Type);                                                                    // [0xfc5b70] Final|Native|Public|BlueprintCallable 
	// float GetStripMaskVScale(float Factor, int32_t Type);                                                                    // [0xfc5aa0] Final|Native|Public|BlueprintCallable 
	// float GetStripMaskProportion(float Factor, int32_t Type);                                                                // [0xfc59d0] Final|Native|Public|BlueprintCallable 
	// float GetRotation(float Factor, int32_t Type);                                                                           // [0xfc5900] Final|Native|Public|BlueprintCallable 
	// float GetRimRange(float Factor, int32_t Type);                                                                           // [0xfc5830] Final|Native|Public|BlueprintCallable 
	// FLinearColor GetRimColor(float Factor, int32_t Type);                                                                    // [0xfc5750] Final|Native|Public|HasDefaults|BlueprintCallable 
	// float GetOutlineWidth(float Factor, int32_t Type);                                                                       // [0xfc55c0] Final|Native|Public|BlueprintCallable 
	// FLinearColor GetOutlineColor(float Factor, int32_t Type);                                                                // [0xfc54e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// float GetMotionNoiseSpeed(float Factor, int32_t Type);                                                                   // [0xfc5410] Final|Native|Public|BlueprintCallable 
	// FLinearColor GetMotionColorStart(float Factor, int32_t Type);                                                            // [0xfc5330] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FLinearColor GetMotionColorEnd(float Factor, int32_t Type);                                                              // [0xfc5250] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FLinearColor GetMainTexColorTint(float Factor, int32_t Type);                                                            // [0xfc4fb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// float GetHairDisplaceProgress(float Factor, int32_t Type);                                                               // [0xfc4ec0] Final|Native|Public|BlueprintCallable 
	// float GetHairDisplaceContrast(float Factor, int32_t Type);                                                               // [0xfc4df0] Final|Native|Public|BlueprintCallable 
	// float GetEmissionIntensity(float Factor, int32_t Type);                                                                  // [0xfc4d20] Final|Native|Public|BlueprintCallable 
	// FLinearColor GetEmissionColor(float Factor, int32_t Type);                                                               // [0xfc4c40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// float GetDitherValue(float Factor, int32_t Type);                                                                        // [0xfc4b70] Final|Native|Public|BlueprintCallable 
	// float GetDissolveSmooth(float Factor, int32_t Type);                                                                     // [0xfc4aa0] Final|Native|Public|BlueprintCallable 
	// float GetDissolveProgress(float Factor, int32_t Type);                                                                   // [0xfc49d0] Final|Native|Public|BlueprintCallable 
	// float GetDissolveColorIntensity(float Factor, int32_t Type);                                                             // [0xfc4900] Final|Native|Public|BlueprintCallable 
	// FLinearColor GetDissolveColor(float Factor, int32_t Type);                                                               // [0xfc4820] Final|Native|Public|HasDefaults|BlueprintCallable 
	// float GetCustomFloatParametersValue(float Factor, int32_t Type, int32_t Index);                                          // [0xfc4700] Final|Native|Public|BlueprintCallable 
	// FLinearColor GetCustomColorParametersValue(float Factor, int32_t Type, int32_t Index);                                   // [0xfc45e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FLinearColor GetBaseRefine(float Factor, int32_t Type);                                                                  // [0xfc4500] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FLinearColor GetBaseColorTint(float Factor, int32_t Type);                                                               // [0xfc4420] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroEditorTickActor
/// Size: 0x0010 (16 bytes) (0x0002A8 - 0x0002B8) align 8 pad: 0x0000
class AKuroEditorTickActor : public AActor
{ 
public:
	bool                                               bEditorTickBySelected;                                      // 0x02A8   (0x0001)  
	bool                                               bSetActorComponentTickEnabledByFocus;                       // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x02AA   (0x0002)  MISSED
	int32_t                                            KuroEditorTickActorId;                                      // 0x02AC   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x02B0   (0x0008)  MISSED
	// void EditorTick(float DeltaSeconds);                                                                                     // [0x25a7960] Event|Public|BlueprintEvent 
	// void EditorSetActorComponentsTickEnabled(bool bValue);                                                                   // [0xfcf0a0] Final|Native|Public|BlueprintCallable|Const 
	// void EditorInit();                                                                                                       // [0x25a7960] Event|Public|BlueprintEvent 
	// void EditorFocusOut();                                                                                                   // [0x25a7960] Event|Public|BlueprintEvent 
	// void EditorFocusIn();                                                                                                    // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroEditorTickActorSubsystem
/// Size: 0x0028 (40 bytes) (0x000038 - 0x000060) align 8 pad: 0x0000
class UKuroEditorTickActorSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0038   (0x0028)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroEffectActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AKuroEffectActor : public AActor
{ 
public:
	bool                                               bEditorTickBySelected;                                      // 0x02A8   (0x0001)  
	bool                                               bSetActorComponentTickEnabledByFocus;                       // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x02AA   (0x0006)  MISSED
	// void EditorTick(float DeltaSeconds);                                                                                     // [0x25a7960] Event|Public|BlueprintEvent 
	// void EditorSetActorComponentsTickEnabled(bool bValue);                                                                   // [0xfcf0a0] Final|Native|Public|BlueprintCallable|Const 
	// void EditorInit();                                                                                                       // [0x25a7960] Event|Public|BlueprintEvent 
	// void EditorFocusOut();                                                                                                   // [0x25a7960] Event|Public|BlueprintEvent 
	// void EditorFocusIn();                                                                                                    // [0x25a7960] Event|Public|BlueprintEvent 
	// void DoHiddenInGame(bool bValue);                                                                                        // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroEffectMakerAN
/// Size: 0x0038 (56 bytes) (0x000048 - 0x000080) align 8 pad: 0x0000
class UKuroEffectMakerAN : public UKuroAnimNotify
{ 
public:
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0048   (0x0004)  MISSED
	FVector                                            Location;                                                   // 0x004C   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0058   (0x000C)  
	FVector                                            Scale;                                                      // 0x0064   (0x000C)  
	bool                                               Attached;                                                   // 0x0070   (0x0001)  
	bool                                               AttachLocationOnly;                                         // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0072   (0x0002)  MISSED
	FName                                              SocketName;                                                 // 0x0074   (0x000C)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroEffectMakerANS
/// Size: 0x0038 (56 bytes) (0x000048 - 0x000080) align 8 pad: 0x0000
class UKuroEffectMakerANS : public UKuroAnimNotifyState
{ 
public:
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0048   (0x0004)  MISSED
	FVector                                            Location;                                                   // 0x004C   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0058   (0x000C)  
	FVector                                            Scale;                                                      // 0x0064   (0x000C)  
	bool                                               Attached;                                                   // 0x0070   (0x0001)  
	bool                                               AttachLocationOnly;                                         // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0072   (0x0002)  MISSED
	FName                                              SocketName;                                                 // 0x0074   (0x000C)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroFloatingStaticMesh
/// Size: 0x0078 (120 bytes) (0x0002A8 - 0x000320) align 8 pad: 0x0000
class AKuroFloatingStaticMesh : public AActor
{ 
public:
	class AKuroFloatingStaticMesh*                     BindingActor;                                               // 0x02A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x02B0   (0x0020)  MISSED
	FVector                                            Movement;                                                   // 0x02D0   (0x000C)  
	float                                              Frequency;                                                  // 0x02DC   (0x0004)  
	FVector                                            RotateCenter;                                               // 0x02E0   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x02EC   (0x000C)  
	class UStaticMesh*                                 StaticMesh;                                                 // 0x02F8   (0x0008)  
	float                                              TickFactorScale;                                            // 0x0300   (0x0004)  
	unsigned char                                      UnknownData01_7[0x1C];                                      // 0x0304   (0x001C)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.ClusteredStuffDataAsset
/// Size: 0x0138 (312 bytes) (0x000038 - 0x000170) align 16 pad: 0x0000
class UClusteredStuffDataAsset : public UPrimaryDataAsset
{ 
public:
	class UNiagaraSystem*                              NiagaraSystem;                                              // 0x0038   (0x0008)  
	SDK_UNDEFINED(80,614) /* TMap<FName, float> */     __um(FloatParameters);                                      // 0x0040   (0x0050)  
	SDK_UNDEFINED(80,615) /* TMap<FName, FLinearColor> */ __um(ColorParameters);                                   // 0x0090   (0x0050)  
	SDK_UNDEFINED(80,616) /* TMap<FName, FVector> */   __um(VectorParameters);                                     // 0x00E0   (0x0050)  
	FVector                                            Scale;                                                      // 0x0130   (0x000C)  
	bool                                               bUseWorldPosition : 1;                                      // 0x013C:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x013D   (0x0003)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0140   (0x0030)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.MainLightSetting
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 pad: 0x0000
struct FMainLightSetting
{ 
	bool                                               bOverride_MainLightIntensity : 1;                           // 0x0000:0 (0x0001)  
	bool                                               bOverride_MainLightTint : 1;                                // 0x0000:1 (0x0001)  
	bool                                               bOverride_MainLightTemperature : 1;                         // 0x0000:2 (0x0001)  
	bool                                               bOverride_MainLightSpecularIntensity : 1;                   // 0x0000:3 (0x0001)  
	bool                                               bOverride_ShadowTintIntensity : 1;                          // 0x0000:4 (0x0001)  
	bool                                               bOverride_ShadowTintColor : 1;                              // 0x0000:5 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MainLightIntensity;                                         // 0x0004   (0x0004)  
	FLinearColor                                       MainLightTint;                                              // 0x0008   (0x0010)  
	float                                              MainLightTemperature;                                       // 0x0018   (0x0004)  
	float                                              MainLightSpecularIntensity;                                 // 0x001C   (0x0004)  
	float                                              ShadowTintIntensity;                                        // 0x0020   (0x0004)  
	FLinearColor                                       ShadowTintColor;                                            // 0x0024   (0x0010)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.SkyLightSetting
/// Size: 0x0120 (288 bytes) (0x000000 - 0x000120) align 16 pad: 0x0000
struct FSkyLightSetting
{ 
	bool                                               bOverride_SkyLightColor : 1;                                // 0x0000:0 (0x0001)  
	bool                                               bOverride_SkyLightIntensity : 1;                            // 0x0000:1 (0x0001)  
	bool                                               bOverride_SkyLightSpecularIntensity : 1;                    // 0x0000:2 (0x0001)  
	bool                                               bOverride_KuroSkyLightCubemap : 1;                          // 0x0000:3 (0x0001)  
	bool                                               bOverride_KuroSkyLightTranslucent : 1;                      // 0x0000:4 (0x0001)  
	bool                                               bOverride_KuroInteriorSkyLightIntensity : 1;                // 0x0000:5 (0x0001)  
	bool                                               bOverride_KuroInteriorSkyLightColor : 1;                    // 0x0000:6 (0x0001)  
	bool                                               bOverride_AOColor : 1;                                      // 0x0000:7 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FLinearColor                                       SkyLightColor;                                              // 0x0004   (0x0010)  
	float                                              SkyLightIntensity;                                          // 0x0014   (0x0004)  
	float                                              SkyLightSpecularIntensity;                                  // 0x0018   (0x0004)  
	float                                              KuroSkyLightTranslucent;                                    // 0x001C   (0x0004)  
	float                                              KuroInteriorSkyLightIntensity;                              // 0x0020   (0x0004)  
	FLinearColor                                       KuroInteriorSkyLightColor;                                  // 0x0024   (0x0010)  
	FLinearColor                                       AOColor;                                                    // 0x0034   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UTextureCube*                                KuroSkyLightCubemap;                                        // 0x0048   (0x0008)  
	FVector                                            KuroSkyLightSH1;                                            // 0x0050   (0x000C)  
	FVector                                            KuroSkyLightSH2;                                            // 0x005C   (0x000C)  
	FVector                                            KuroSkyLightSH3;                                            // 0x0068   (0x000C)  
	FVector                                            KuroSkyLightSH4;                                            // 0x0074   (0x000C)  
	FVector                                            KuroSkyLightSH5;                                            // 0x0080   (0x000C)  
	FVector                                            KuroSkyLightSH6;                                            // 0x008C   (0x000C)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0098   (0x0048)  MISSED
	bool                                               bUseGradientColorTint;                                      // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00E1   (0x0003)  MISSED
	FLinearColor                                       SkyColor;                                                   // 0x00E4   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x00F4   (0x0010)  MISSED
	FLinearColor                                       GroudColor;                                                 // 0x0104   (0x0010)  
	unsigned char                                      UnknownData05_7[0xC];                                       // 0x0114   (0x000C)  MISSED
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.ShadowTintSetting
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FShadowTintSetting
{ 
	bool                                               bOverride_ShadowTintOffset : 1;                             // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ShadowTintOffset;                                           // 0x0004   (0x0004)  
	bool                                               bOverride_ShadowTintLutRamp : 1;                            // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UTexture2D*                                  ShadowTintLutRamp;                                          // 0x0010   (0x0008)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.CharacterSetting
/// Size: 0x0054 (84 bytes) (0x000000 - 0x000054) align 4 pad: 0x0000
struct FCharacterSetting
{ 
	bool                                               bOverride_CustomCharacterLightingIntensity : 1;             // 0x0000:0 (0x0001)  
	bool                                               bOverride_LightHorizontalAngle : 1;                         // 0x0000:1 (0x0001)  
	bool                                               bOverride_CharacterDirectionMixIntensity : 1;               // 0x0000:2 (0x0001)  
	bool                                               bOverride_MixCharacterLightingIntensity : 1;                // 0x0000:3 (0x0001)  
	bool                                               bOverride_CharacterAmbientColor : 1;                        // 0x0000:4 (0x0001)  
	bool                                               bOverride_CharacterMainLightColor : 1;                      // 0x0000:5 (0x0001)  
	bool                                               bOverride_CharacterSkinShadowColorIntensity : 1;            // 0x0000:6 (0x0001)  
	bool                                               bOverride_CharacterSSSIntensity : 1;                        // 0x0000:7 (0x0001)  
	bool                                               bOverride_CharacterRimColor : 1;                            // 0x0001:0 (0x0001)  
	bool                                               bOverride_GlobalShadowIntensity : 1;                        // 0x0001:1 (0x0001)  
	bool                                               bOverride_UseNewCharacterRim : 1;                           // 0x0001:2 (0x0001)  
	bool                                               bOverride_GlobalBossShadowIntensity : 1;                    // 0x0001:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CustomCharacterLightingIntensity;                           // 0x0004   (0x0004)  
	float                                              CharacterDirectionMixIntensity;                             // 0x0008   (0x0004)  
	float                                              LightHorizontalAngle;                                       // 0x000C   (0x0004)  
	float                                              MixCharacterLightingIntensity;                              // 0x0010   (0x0004)  
	FLinearColor                                       CharacterMainLightColor;                                    // 0x0014   (0x0010)  
	FLinearColor                                       CharacterAmbientColor;                                      // 0x0024   (0x0010)  
	float                                              CharacterSSSIntensity;                                      // 0x0034   (0x0004)  
	FLinearColor                                       CharacterRimColor;                                          // 0x0038   (0x0010)  
	float                                              GlobalShadowIntensity;                                      // 0x0048   (0x0004)  
	float                                              UseNewCharacterRim;                                         // 0x004C   (0x0004)  
	float                                              GlobalBossShadowIntensity;                                  // 0x0050   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroHeightFogSetting
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 pad: 0x0000
struct FKuroHeightFogSetting
{ 
	bool                                               bOverride_DirectionalInscatteringAmount : 1;                // 0x0000:0 (0x0001)  
	bool                                               bOverride_DirectionalInscatteringExponent : 1;              // 0x0000:1 (0x0001)  
	bool                                               bOverride_DirectionalInscatteringStartDistance : 1;         // 0x0000:2 (0x0001)  
	bool                                               bOverride_DirectionalInscatteringColor : 1;                 // 0x0000:3 (0x0001)  
	bool                                               bOverride_Fog1Density : 1;                                  // 0x0000:4 (0x0001)  
	bool                                               bOverride_Fog1HeightOffset : 1;                             // 0x0000:5 (0x0001)  
	bool                                               bOverride_Fog1Falloff : 1;                                  // 0x0000:6 (0x0001)  
	bool                                               bOverride_Fog1FalloffFarSky : 1;                            // 0x0000:7 (0x0001)  
	bool                                               bOverride_StartDistance : 1;                                // 0x0001:0 (0x0001)  
	bool                                               bOverride_MaxOpacity : 1;                                   // 0x0001:1 (0x0001)  
	bool                                               bOverride_FogNearColor : 1;                                 // 0x0001:2 (0x0001)  
	bool                                               bOverride_FogFarColor : 1;                                  // 0x0001:3 (0x0001)  
	bool                                               bOverride_FogBaseColor : 1;                                 // 0x0001:4 (0x0001)  
	bool                                               bOverride_FogNearColorDistance : 1;                         // 0x0001:5 (0x0001)  
	bool                                               bOverride_FogFarColorDistance : 1;                          // 0x0001:6 (0x0001)  
	bool                                               bOverride_FogNearFarColorRatio : 1;                         // 0x0001:7 (0x0001)  
	bool                                               bOverride_FogMixDistance : 1;                               // 0x0002:0 (0x0001)  
	bool                                               bOverride_FogMixWidth : 1;                                  // 0x0002:1 (0x0001)  
	bool                                               bOverride_LowPoint1 : 1;                                    // 0x0002:2 (0x0001)  
	bool                                               bOverride_HighPoint1 : 1;                                   // 0x0002:3 (0x0001)  
	bool                                               bOverride_LowFalloff1 : 1;                                  // 0x0002:4 (0x0001)  
	bool                                               bOverride_LowSkyFalloff1 : 1;                               // 0x0002:5 (0x0001)  
	bool                                               bOverride_LowHighOffset1 : 1;                               // 0x0002:6 (0x0001)  
	bool                                               bOverride_CloudOceanHeight : 1;                             // 0x0002:7 (0x0001)  
	bool                                               bOverride_CloudOpacity : 1;                                 // 0x0003:0 (0x0001)  
	bool                                               bOverride_CloudOceanMaterial : 1;                           // 0x0003:1 (0x0001)  
	float                                              DirectionalInscatteringAmount;                              // 0x0004   (0x0004)  
	float                                              DirectionalInscatteringExponent;                            // 0x0008   (0x0004)  
	float                                              DirectionalInscatteringStartDistance;                       // 0x000C   (0x0004)  
	FLinearColor                                       DirectionalInscatteringColor;                               // 0x0010   (0x0010)  
	float                                              Fog1Density;                                                // 0x0020   (0x0004)  
	float                                              Fog1HeightOffset;                                           // 0x0024   (0x0004)  
	float                                              Fog1Falloff;                                                // 0x0028   (0x0004)  
	float                                              Fog1FalloffFarSky;                                          // 0x002C   (0x0004)  
	float                                              StartDistance;                                              // 0x0030   (0x0004)  
	float                                              MaxOpacity;                                                 // 0x0034   (0x0004)  
	FLinearColor                                       FogNearColor;                                               // 0x0038   (0x0010)  
	FLinearColor                                       FogFarColor;                                                // 0x0048   (0x0010)  
	FLinearColor                                       FogBaseColor;                                               // 0x0058   (0x0010)  
	float                                              FogNearColorDistance;                                       // 0x0068   (0x0004)  
	float                                              FogFarColorDistance;                                        // 0x006C   (0x0004)  
	float                                              FogNearFarColorRatio;                                       // 0x0070   (0x0004)  
	float                                              FogMixDistance;                                             // 0x0074   (0x0004)  
	float                                              FogMixWidth;                                                // 0x0078   (0x0004)  
	float                                              LowPoint1;                                                  // 0x007C   (0x0004)  
	float                                              HighPoint1;                                                 // 0x0080   (0x0004)  
	float                                              LowFalloff1;                                                // 0x0084   (0x0004)  
	float                                              LowSkyFalloff1;                                             // 0x0088   (0x0004)  
	float                                              LowHighOffset1;                                             // 0x008C   (0x0004)  
	float                                              CloudOceanHeight;                                           // 0x0090   (0x0004)  
	float                                              CloudOpacity;                                               // 0x0094   (0x0004)  
	class UMaterialInterface*                          CloudOceanMaterial;                                         // 0x0098   (0x0008)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroTreeSetting
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 pad: 0x0000
struct FKuroTreeSetting
{ 
	bool                                               bOverride_LineRadius : 1;                                   // 0x0000:0 (0x0001)  
	bool                                               bOverride_DistanceRatio : 1;                                // 0x0000:1 (0x0001)  
	bool                                               bOverride_LinePower : 1;                                    // 0x0000:2 (0x0001)  
	bool                                               bOverride_NearColor : 1;                                    // 0x0000:3 (0x0001)  
	bool                                               bOverride_FarColor : 1;                                     // 0x0000:4 (0x0001)  
	bool                                               bOverride_NearFarDistance : 1;                              // 0x0000:5 (0x0001)  
	bool                                               bOverride_Saturation : 1;                                   // 0x0000:6 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LineRadius;                                                 // 0x0004   (0x0004)  
	float                                              DistanceRatio;                                              // 0x0008   (0x0004)  
	float                                              LinePower;                                                  // 0x000C   (0x0004)  
	FLinearColor                                       NearColor;                                                  // 0x0010   (0x0010)  
	FLinearColor                                       FarColor;                                                   // 0x0020   (0x0010)  
	float                                              NearFarDistance;                                            // 0x0030   (0x0004)  
	float                                              Saturation;                                                 // 0x0034   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.VolumetricFogSetting
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FVolumetricFogSetting
{ 
	bool                                               bOverride_LocalLightScatteringMultiplier : 1;               // 0x0000:0 (0x0001)  
	bool                                               bOverride_VolumetricScatteringIntensity : 1;                // 0x0000:1 (0x0001)  
	bool                                               bOverride_ExtinctionScale : 1;                              // 0x0000:2 (0x0001)  
	bool                                               bOverride_ScatteringDistribution : 1;                       // 0x0000:3 (0x0001)  
	bool                                               bOverride_VolumetricFogAlbedo : 1;                          // 0x0000:4 (0x0001)  
	bool                                               bOverride_VolumetricFogEmssive : 1;                         // 0x0000:5 (0x0001)  
	bool                                               bOverride_ViewDistance : 1;                                 // 0x0000:6 (0x0001)  
	bool                                               bEnableVolumetriFog : 1;                                    // 0x0000:7 (0x0001)  
	bool                                               bCastVolumetricShadow : 1;                                  // 0x0001:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              VolumetricDensity;                                          // 0x0004   (0x0004)  
	float                                              VolumetricScatteringIntensity;                              // 0x0008   (0x0004)  
	FLinearColor                                       VolumetricFogAlbedo;                                        // 0x000C   (0x0010)  
	float                                              LocalLightScatteringMultiplier;                             // 0x001C   (0x0004)  
	float                                              ExtinctionScale;                                            // 0x0020   (0x0004)  
	float                                              ScatteringDistribution;                                     // 0x0024   (0x0004)  
	float                                              ViewDistance;                                               // 0x0028   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.SkyAtmosphereSetting
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FSkyAtmosphereSetting
{ 
	bool                                               bOverride_LightShaftBloomScale : 1;                         // 0x0000:0 (0x0001)  
	bool                                               bOverride_LightShaftBloomThreshold : 1;                     // 0x0000:1 (0x0001)  
	bool                                               bOverride_LightShaftBloomMaxBrightness : 1;                 // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LightShaftBloomScale;                                       // 0x0004   (0x0004)  
	float                                              LightShaftBloomThreshold;                                   // 0x0008   (0x0004)  
	float                                              LightShaftBloomMaxBrightness;                               // 0x000C   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroSkyboxSetting
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 pad: 0x0000
struct FKuroSkyboxSetting
{ 
	bool                                               bOverride_ZenithColor : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bOverride_NadirColor : 1;                                   // 0x0000:1 (0x0001)  
	bool                                               bOverride_NadirFalloff : 1;                                 // 0x0000:2 (0x0001)  
	bool                                               bOverride_NadirFalloff_Mobile : 1;                          // 0x0000:3 (0x0001)  
	bool                                               bOverride_HorizonColor : 1;                                 // 0x0000:4 (0x0001)  
	bool                                               bOverride_HorizonFalloff : 1;                               // 0x0000:5 (0x0001)  
	bool                                               bOverride_SunDiscColor : 1;                                 // 0x0000:6 (0x0001)  
	bool                                               bOverride_SunScatterColor : 1;                              // 0x0000:7 (0x0001)  
	bool                                               bOverride_SunSize : 1;                                      // 0x0001:0 (0x0001)  
	bool                                               bOverride_SunScatterSize : 1;                               // 0x0001:1 (0x0001)  
	bool                                               bOverride_MoonTexture : 1;                                  // 0x0001:2 (0x0001)  
	bool                                               bOverride_MoonPhase : 1;                                    // 0x0001:3 (0x0001)  
	bool                                               bOverride_MoonDiscColor : 1;                                // 0x0001:4 (0x0001)  
	bool                                               bOverride_MoonScatterColor : 1;                             // 0x0001:5 (0x0001)  
	bool                                               bOverride_MoonSize : 1;                                     // 0x0001:6 (0x0001)  
	bool                                               bOverride_MoonScatterSize : 1;                              // 0x0001:7 (0x0001)  
	bool                                               bOverride_ExtremeWeatherWeight : 1;                         // 0x0002:0 (0x0001)  
	bool                                               bOverride_ST_TopColor : 1;                                  // 0x0002:1 (0x0001)  
	bool                                               bOverride_ST_DomeColorTint : 1;                             // 0x0002:2 (0x0001)  
	bool                                               bOverride_ST_TopWidth : 1;                                  // 0x0002:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	FLinearColor                                       ZenithColor;                                                // 0x0004   (0x0010)  
	FLinearColor                                       NadirColor;                                                 // 0x0014   (0x0010)  
	float                                              NadirFalloff;                                               // 0x0024   (0x0004)  
	float                                              NadirFalloff_Mobile;                                        // 0x0028   (0x0004)  
	FLinearColor                                       HorizonColor;                                               // 0x002C   (0x0010)  
	float                                              HorizonFalloff;                                             // 0x003C   (0x0004)  
	FLinearColor                                       SunDiscColor;                                               // 0x0040   (0x0010)  
	FLinearColor                                       SunScatterColor;                                            // 0x0050   (0x0010)  
	float                                              SunSize;                                                    // 0x0060   (0x0004)  
	float                                              SunScatterSize;                                             // 0x0064   (0x0004)  
	FLinearColor                                       MoonDiscColor;                                              // 0x0068   (0x0010)  
	class UTexture2D*                                  MoonTexture;                                                // 0x0078   (0x0008)  
	float                                              MoonPhase;                                                  // 0x0080   (0x0004)  
	FLinearColor                                       MoonScatterColor;                                           // 0x0084   (0x0010)  
	float                                              MoonSize;                                                   // 0x0094   (0x0004)  
	float                                              MoonScatterSize;                                            // 0x0098   (0x0004)  
	float                                              ExtremeWeatherWeight;                                       // 0x009C   (0x0004)  
	FLinearColor                                       ST_TopColor;                                                // 0x00A0   (0x0010)  
	FLinearColor                                       ST_DomeColorTint;                                           // 0x00B0   (0x0010)  
	float                                              ST_TopWidth;                                                // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.SunSetting
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FSunSetting
{ 
	bool                                               bOverride_SunColor : 1;                                     // 0x0000:0 (0x0001)  
	bool                                               bOverride_SunDiskIntensity : 1;                             // 0x0000:1 (0x0001)  
	bool                                               bOverride_SunRadius : 1;                                    // 0x0000:2 (0x0001)  
	bool                                               bOverride_SunHardness : 1;                                  // 0x0000:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FLinearColor                                       SunColor;                                                   // 0x0004   (0x0010)  
	float                                              SunDiskIntensity;                                           // 0x0014   (0x0004)  
	float                                              SunRadius;                                                  // 0x0018   (0x0004)  
	float                                              SunHardness;                                                // 0x001C   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroLensFlareSetting
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FKuroLensFlareSetting
{ 
	bool                                               bOverride_LensFlareConfigData : 1;                          // 0x0000:0 (0x0001)  
	bool                                               bOverride_LensFlareTint : 1;                                // 0x0000:1 (0x0001)  
	bool                                               bOverride_LensFlareRampIndex : 1;                           // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class USunLensFlareConfig*                         LensFlareConfigData;                                        // 0x0008   (0x0008)  
	FLinearColor                                       LensFlareTint;                                              // 0x0010   (0x0010)  
	int32_t                                            LensFlareRampIndex;                                         // 0x0020   (0x0004)  
	bool                                               bOverride_PPLensflareType : 1;                              // 0x0024:0 (0x0001)  
	TEnumAsByte<EKuroPPLensflareType>                  PPLensflareType;                                            // 0x0025   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.WindSetting
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 pad: 0x0000
struct FWindSetting
{ 
	bool                                               bOverride_WindDirection : 1;                                // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              WindDirection;                                              // 0x0004   (0x0004)  
	bool                                               bOverride_WindSpeed : 1;                                    // 0x0008:0 (0x0001)  
	bool                                               bOverride_SoundPower : 1;                                   // 0x0008:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              WindSpeed;                                                  // 0x000C   (0x0004)  
	bool                                               bOverride_WindPower : 1;                                    // 0x0010:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              WindPower;                                                  // 0x0014   (0x0004)  
	bool                                               bOverride_SkyWind : 1;                                      // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FVector2D                                          SkyWind;                                                    // 0x001C   (0x0008)  
	float                                              SoundPower;                                                 // 0x0024   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.MoonSetting
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FMoonSetting
{ 
	bool                                               bOverride_MoonAlpha : 1;                                    // 0x0000:0 (0x0001)  
	bool                                               bOverride_MoonSize : 1;                                     // 0x0000:1 (0x0001)  
	bool                                               bOverride_MoonColor : 1;                                    // 0x0000:2 (0x0001)  
	bool                                               bOverride_MoonBrightness : 1;                               // 0x0000:3 (0x0001)  
	bool                                               bOverride_MoonShine : 1;                                    // 0x0000:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MoonAlpha;                                                  // 0x0004   (0x0004)  
	float                                              MoonSize;                                                   // 0x0008   (0x0004)  
	FLinearColor                                       MoonColor;                                                  // 0x000C   (0x0010)  
	float                                              MoonBrightness;                                             // 0x001C   (0x0004)  
	float                                              MoonShine;                                                  // 0x0020   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.StarSetting
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FStarSetting
{ 
	bool                                               bOverride_StarFieldColor : 1;                               // 0x0000:0 (0x0001)  
	bool                                               bOverride_StarSize : 1;                                     // 0x0000:1 (0x0001)  
	bool                                               bOverride_StarSpeed : 1;                                    // 0x0000:2 (0x0001)  
	bool                                               bOverride_StarSwitch : 1;                                   // 0x0000:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FLinearColor                                       StarFieldColor;                                             // 0x0004   (0x0010)  
	float                                              StarSize;                                                   // 0x0014   (0x0004)  
	float                                              StarSpeed;                                                  // 0x0018   (0x0004)  
	float                                              StarSwitch;                                                 // 0x001C   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroCloudBillboardSetting
/// Size: 0x00D8 (216 bytes) (0x000000 - 0x0000D8) align 8 pad: 0x0000
struct FKuroCloudBillboardSetting
{ 
	bool                                               bOverride_CloudShapeTexture : 1;                            // 0x0000:0 (0x0001)  
	bool                                               bOverride_CloudUneventTexture : 1;                          // 0x0000:1 (0x0001)  
	bool                                               bOverride_CloudDetailTexture : 1;                           // 0x0000:2 (0x0001)  
	bool                                               bOverride_CloudFill : 1;                                    // 0x0000:3 (0x0001)  
	bool                                               bOverride_CloudFillValueMax : 1;                            // 0x0000:4 (0x0001)  
	bool                                               bOverride_CloudFillValueMin : 1;                            // 0x0000:5 (0x0001)  
	bool                                               bOverride_CloudSize : 1;                                    // 0x0000:6 (0x0001)  
	bool                                               bOverride_CloudSizeRatioX : 1;                              // 0x0000:7 (0x0001)  
	bool                                               bOverride_CloudSizeRatioY : 1;                              // 0x0001:0 (0x0001)  
	bool                                               bOverride_ContrastMax : 1;                                  // 0x0001:1 (0x0001)  
	bool                                               bOverride_ContrastMin : 1;                                  // 0x0001:2 (0x0001)  
	bool                                               bOverride_ContrastUnevenPow : 1;                            // 0x0001:3 (0x0001)  
	bool                                               bOverride_ContrastUnevenSize : 1;                           // 0x0001:4 (0x0001)  
	bool                                               bOverride_DetailSize : 1;                                   // 0x0001:5 (0x0001)  
	bool                                               bOverride_DetailStr : 1;                                    // 0x0001:6 (0x0001)  
	bool                                               bOverride_DetailStrFewCloud : 1;                            // 0x0001:7 (0x0001)  
	bool                                               bOverride_CloudColorOverall : 1;                            // 0x0002:0 (0x0001)  
	bool                                               bOverride_CloudColor : 1;                                   // 0x0002:1 (0x0001)  
	bool                                               bOverride_LightColorSunNear : 1;                            // 0x0002:2 (0x0001)  
	bool                                               bOverride_LightEmissive : 1;                                // 0x0002:3 (0x0001)  
	bool                                               bOverride_LightRadius : 1;                                  // 0x0002:4 (0x0001)  
	bool                                               bOverride_LightUVOffset : 1;                                // 0x0002:5 (0x0001)  
	bool                                               bOverride_RimColor : 1;                                     // 0x0002:6 (0x0001)  
	bool                                               bOverride_RimContrast : 1;                                  // 0x0002:7 (0x0001)  
	bool                                               bOverride_SunEdgePow : 1;                                   // 0x0003:0 (0x0001)  
	bool                                               bOverride_SkyColorOverAll : 1;                              // 0x0003:1 (0x0001)  
	bool                                               bOverride_SkyColorPow : 1;                                  // 0x0003:2 (0x0001)  
	bool                                               bOverride_SunGlowColor : 1;                                 // 0x0003:3 (0x0001)  
	bool                                               bOverride_SunGlowEmissive : 1;                              // 0x0003:4 (0x0001)  
	bool                                               bOverride_SunGlowRadius : 1;                                // 0x0003:5 (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UTexture2D*                                  CloudShapeTexture;                                          // 0x0008   (0x0008)  
	class UTexture2D*                                  CloudUneventTexture;                                        // 0x0010   (0x0008)  
	class UTexture2D*                                  CloudDetailTexture;                                         // 0x0018   (0x0008)  
	float                                              CloudFill;                                                  // 0x0020   (0x0004)  
	float                                              CloudFillValueMax;                                          // 0x0024   (0x0004)  
	float                                              CloudFillValueMin;                                          // 0x0028   (0x0004)  
	float                                              CloudSize;                                                  // 0x002C   (0x0004)  
	float                                              CloudSizeRatioX;                                            // 0x0030   (0x0004)  
	float                                              CloudSizeRatioY;                                            // 0x0034   (0x0004)  
	float                                              ContrastMax;                                                // 0x0038   (0x0004)  
	float                                              ContrastMin;                                                // 0x003C   (0x0004)  
	float                                              ContrastUnevenPow;                                          // 0x0040   (0x0004)  
	float                                              ContrastUnevenSize;                                         // 0x0044   (0x0004)  
	float                                              DetailSize;                                                 // 0x0048   (0x0004)  
	float                                              DetailStr;                                                  // 0x004C   (0x0004)  
	float                                              DetailStrFewCloud;                                          // 0x0050   (0x0004)  
	FLinearColor                                       CloudColorOverall;                                          // 0x0054   (0x0010)  
	FLinearColor                                       CloudColor;                                                 // 0x0064   (0x0010)  
	FLinearColor                                       LightColorSunNear;                                          // 0x0074   (0x0010)  
	float                                              LightEmissive;                                              // 0x0084   (0x0004)  
	float                                              LightRadius;                                                // 0x0088   (0x0004)  
	float                                              LightUVOffset;                                              // 0x008C   (0x0004)  
	FLinearColor                                       RimColor;                                                   // 0x0090   (0x0010)  
	float                                              RimContrast;                                                // 0x00A0   (0x0004)  
	float                                              SunEdgePow;                                                 // 0x00A4   (0x0004)  
	FLinearColor                                       SkyColorOverAll;                                            // 0x00A8   (0x0010)  
	float                                              SkyColorPow;                                                // 0x00B8   (0x0004)  
	FLinearColor                                       SunGlowColor;                                               // 0x00BC   (0x0010)  
	float                                              SunGlowEmissive;                                            // 0x00CC   (0x0004)  
	float                                              SunGlowRadius;                                              // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroCloudCardSetting
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 4 pad: 0x0000
struct FKuroCloudCardSetting
{ 
	bool                                               bOverride_AtmoLightScale : 1;                               // 0x0000:0 (0x0001)  
	bool                                               bOverride_Contrast : 1;                                     // 0x0000:1 (0x0001)  
	bool                                               bOverride_DarkBrightness : 1;                               // 0x0000:2 (0x0001)  
	bool                                               bOverride_Exp : 1;                                          // 0x0000:3 (0x0001)  
	bool                                               bOverride_HorizonFalloff : 1;                               // 0x0000:4 (0x0001)  
	bool                                               bOverride_HorizonMax : 1;                                   // 0x0000:5 (0x0001)  
	bool                                               bOverride_HorizonMin : 1;                                   // 0x0000:6 (0x0001)  
	bool                                               bOverride_HorizonOffset : 1;                                // 0x0000:7 (0x0001)  
	bool                                               bOverride_LightBrightness : 1;                              // 0x0001:0 (0x0001)  
	bool                                               bOverride_LitOffset : 1;                                    // 0x0001:1 (0x0001)  
	bool                                               bOverride_Translucency : 1;                                 // 0x0001:2 (0x0001)  
	bool                                               bOverride_BaseColor : 1;                                    // 0x0001:3 (0x0001)  
	bool                                               bOverride_DarkColor : 1;                                    // 0x0001:4 (0x0001)  
	bool                                               bOverride_Emissive : 1;                                     // 0x0001:5 (0x0001)  
	bool                                               bOverride_LightColor : 1;                                   // 0x0001:6 (0x0001)  
	bool                                               bOverride_Offset : 1;                                       // 0x0001:7 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              AtmoLightScale;                                             // 0x0004   (0x0004)  
	float                                              Contrast;                                                   // 0x0008   (0x0004)  
	float                                              DarkBrightness;                                             // 0x000C   (0x0004)  
	float                                              Exp;                                                        // 0x0010   (0x0004)  
	float                                              HorizonFalloff;                                             // 0x0014   (0x0004)  
	float                                              HorizonMax;                                                 // 0x0018   (0x0004)  
	float                                              HorizonMin;                                                 // 0x001C   (0x0004)  
	float                                              HorizonOffset;                                              // 0x0020   (0x0004)  
	float                                              LightBrightness;                                            // 0x0024   (0x0004)  
	float                                              LitOffset;                                                  // 0x0028   (0x0004)  
	float                                              Translucency;                                               // 0x002C   (0x0004)  
	FLinearColor                                       BaseColor;                                                  // 0x0030   (0x0010)  
	FLinearColor                                       DarkColor;                                                  // 0x0040   (0x0010)  
	FLinearColor                                       Emissive;                                                   // 0x0050   (0x0010)  
	FLinearColor                                       LightColor;                                                 // 0x0060   (0x0010)  
	FLinearColor                                       Offset;                                                     // 0x0070   (0x0010)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroMilkyWaySetting
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 pad: 0x0000
struct FKuroMilkyWaySetting
{ 
	bool                                               bOverride_MilkWayTexture : 1;                               // 0x0000:0 (0x0001)  
	bool                                               bOverride_MilkWayStarTexture : 1;                           // 0x0000:1 (0x0001)  
	bool                                               bOverride_DisortionTexture : 1;                             // 0x0000:2 (0x0001)  
	bool                                               bOverride_MilkyWayTint : 1;                                 // 0x0000:3 (0x0001)  
	bool                                               bOverride_MilkyWayBrightness : 1;                           // 0x0000:4 (0x0001)  
	bool                                               bOverride_MilkyWayUV : 1;                                   // 0x0000:5 (0x0001)  
	bool                                               bOverride_StarTint : 1;                                     // 0x0000:6 (0x0001)  
	bool                                               bOverride_StarBrightness : 1;                               // 0x0000:7 (0x0001)  
	bool                                               bOverride_StarUV : 1;                                       // 0x0001:0 (0x0001)  
	bool                                               bOverride_DisortionStrength : 1;                            // 0x0001:1 (0x0001)  
	bool                                               bOverride_DisortionUV : 1;                                  // 0x0001:2 (0x0001)  
	bool                                               bOverride_MilkyWayPosition : 1;                             // 0x0001:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	class UTexture2D*                                  MilkWayTexture;                                             // 0x0008   (0x0008)  
	class UTexture2D*                                  MilkWayStarTexture;                                         // 0x0010   (0x0008)  
	class UTexture2D*                                  DisortionTexture;                                           // 0x0018   (0x0008)  
	FLinearColor                                       MilkyWayTint;                                               // 0x0020   (0x0010)  
	float                                              MilkyWayBrightness;                                         // 0x0030   (0x0004)  
	FLinearColor                                       MilkyWayUV;                                                 // 0x0034   (0x0010)  
	FLinearColor                                       StarTint;                                                   // 0x0044   (0x0010)  
	float                                              StarBrightness;                                             // 0x0054   (0x0004)  
	FLinearColor                                       StarUV;                                                     // 0x0058   (0x0010)  
	float                                              DisortionStrength;                                          // 0x0068   (0x0004)  
	FLinearColor                                       DisortionUV;                                                // 0x006C   (0x0010)  
	FVector                                            MilkyWayPosition;                                           // 0x007C   (0x000C)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.GIMiscSetting
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 16 pad: 0x0000
struct FGIMiscSetting
{ 
	bool                                               bOverride_ThunderType : 1;                                  // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	TEnumAsByte<EKuroThunderType>                      ThunderType;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	bool                                               bOverride_ThunderGenerateChanceScale : 1;                   // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ThunderGenerateChanceScale;                                 // 0x000C   (0x0004)  
	bool                                               bOverride_ThunderAttackChance : 1;                          // 0x0010:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              ThunderAttackChance;                                        // 0x0014   (0x0004)  
	bool                                               bOverride_ThunderLightBrightness : 1;                       // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              ThunderLightBrightness;                                     // 0x001C   (0x0004)  
	bool                                               bOverride_ThunderCloudBrightness : 1;                       // 0x0020:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              ThunderCloudBrightness;                                     // 0x0024   (0x0004)  
	bool                                               bOverride_RainType : 1;                                     // 0x0028:0 (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	TEnumAsByte<EKuroRainType>                         RainType;                                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	bool                                               bOverride_RainDensity : 1;                                  // 0x0030:0 (0x0001)  
	bool                                               bOverride_RainFogDensity : 1;                               // 0x0030:1 (0x0001)  
	bool                                               bOverride_SnowDensity : 1;                                  // 0x0030:2 (0x0001)  
	bool                                               bOverride_RoughnessDensity : 1;                             // 0x0030:3 (0x0001)  
	bool                                               bOverride_MixRoughness : 1;                                 // 0x0030:4 (0x0001)  
	bool                                               bOverride_MixRoughness_Mobile : 1;                          // 0x0030:5 (0x0001)  
	bool                                               bOverride_OverrideRainDensity : 1;                          // 0x0030:6 (0x0001)  
	bool                                               bOverride_RainDensityValueOverride : 1;                     // 0x0030:7 (0x0001)  
	bool                                               bOverride_OverrideSnowDensity : 1;                          // 0x0031:0 (0x0001)  
	bool                                               bOverride_SnowDensityValueOverride : 1;                     // 0x0031:1 (0x0001)  
	bool                                               bOverride_RainSnowColor : 1;                                // 0x0031:2 (0x0001)  
	bool                                               bOverride_RainSnowEmissive : 1;                             // 0x0031:3 (0x0001)  
	bool                                               bOverride_OverrideRainSnowColor : 1;                        // 0x0031:4 (0x0001)  
	bool                                               bOverride_EffectGravity : 1;                                // 0x0031:5 (0x0001)  
	bool                                               bOverride_OverrideGravity : 1;                              // 0x0031:6 (0x0001)  
	bool                                               bOverride_GravityValueOverride : 1;                         // 0x0031:7 (0x0001)  
	bool                                               bOverride_LightFunctionIntensity : 1;                       // 0x0032:0 (0x0001)  
	bool                                               bOverride_LightFunctionMapUVScaleBias : 1;                  // 0x0032:1 (0x0001)  
	bool                                               bOverride_LightFunctionSpeed : 1;                           // 0x0032:2 (0x0001)  
	bool                                               bOverride_LightFunctionTexture : 1;                         // 0x0032:3 (0x0001)  
	bool                                               bOverride_KuroDynamicCloudType : 1;                         // 0x0032:4 (0x0001)  
	bool                                               bOverride_SequenceCloudTimeControl : 1;                     // 0x0032:5 (0x0001)  
	bool                                               bOverride_SequenceGlobalTimeControl : 1;                    // 0x0032:6 (0x0001)  
	bool                                               bOverride_MaterialDynamicReflectionTexture : 1;             // 0x0032:7 (0x0001)  
	bool                                               bOverride_FogVisibilityCulling : 1;                         // 0x0033:0 (0x0001)  
	float                                              RainDensity;                                                // 0x0034   (0x0004)  
	float                                              RainFogDensity;                                             // 0x0038   (0x0004)  
	float                                              SnowDensity;                                                // 0x003C   (0x0004)  
	float                                              RoughnessDensity;                                           // 0x0040   (0x0004)  
	float                                              MixRoughness;                                               // 0x0044   (0x0004)  
	float                                              MixRoughness_Mobile;                                        // 0x0048   (0x0004)  
	float                                              OverrideRainDensity;                                        // 0x004C   (0x0004)  
	float                                              RainDensityValueOverride;                                   // 0x0050   (0x0004)  
	float                                              OverrideSnowDensity;                                        // 0x0054   (0x0004)  
	float                                              SnowDensityValueOverride;                                   // 0x0058   (0x0004)  
	float                                              OverrideRainSnowColor;                                      // 0x005C   (0x0004)  
	FLinearColor                                       RainSnowColor;                                              // 0x0060   (0x0010)  
	float                                              RainSnowEmissive;                                           // 0x0070   (0x0004)  
	float                                              EffectGravity;                                              // 0x0074   (0x0004)  
	float                                              OverrideGravity;                                            // 0x0078   (0x0004)  
	float                                              GravityValueOverride;                                       // 0x007C   (0x0004)  
	float                                              LightFunctionIntensity;                                     // 0x0080   (0x0004)  
	unsigned char                                      UnknownData08_6[0xC];                                       // 0x0084   (0x000C)  MISSED
	FVector4                                           LightFunctionMapUVScaleBias;                                // 0x0090   (0x0010)  
	float                                              LightFunctionSpeed;                                         // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	class UTexture2D*                                  LightFunctionTexture;                                       // 0x00A8   (0x0008)  
	TEnumAsByte<EKuroDynamicCloudType>                 KuroDynamicCloudType;                                       // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              SequenceCloudTimeControl;                                   // 0x00B4   (0x0004)  
	float                                              SequenceGlobalTimeControl;                                  // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData11_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	class UTextureCube*                                MaterialDynamicReflectionTexture;                           // 0x00C0   (0x0008)  
	bool                                               bEnableGlobalGIQualityLow : 1;                              // 0x00C8:0 (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              FogVisibilityCulling;                                       // 0x00CC   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.GIClusteredStuffSetting
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FGIClusteredStuffSetting
{ 
	bool                                               bOverride_ClusteredStuffAssets : 1;                         // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	EKuroClusteredStuffBlendMode                       BlendMode;                                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	TArray<class UClusteredStuffDataAsset*>            ClusteredStuffAssets;                                       // 0x0008   (0x0010)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroGIMPCSetting
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 pad: 0x0000
struct FKuroGIMPCSetting
{ 
	bool                                               bOverride_FloatParameters : 1;                              // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(80,617) /* TMap<FName, float> */     __um(FloatParameters);                                      // 0x0008   (0x0050)  
	bool                                               bOverride_ColorParameters : 1;                              // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	SDK_UNDEFINED(80,618) /* TMap<FName, FLinearColor> */ __um(ColorParameters);                                   // 0x0060   (0x0050)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroPostProcessSetting
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FKuroPostProcessSetting
{ 
	bool                                               bOverride_KuroBloomIntensity : 1;                           // 0x0000:0 (0x0001)  
	bool                                               bOverride_KuroBloomThreshold : 1;                           // 0x0000:1 (0x0001)  
	bool                                               bOverride_KuroBloomStreakIntensity : 1;                     // 0x0000:2 (0x0001)  
	bool                                               bOverride_KuroBloomStreakThreshold : 1;                     // 0x0000:3 (0x0001)  
	bool                                               bOverride_KuroBloomStreakLength : 1;                        // 0x0000:4 (0x0001)  
	bool                                               bOverride_KuroBloomStreakMipLevel : 1;                      // 0x0000:5 (0x0001)  
	bool                                               bOverride_KuroBloomStreakRatio : 1;                         // 0x0000:6 (0x0001)  
	bool                                               bOverride_KuroBloomStreakOrientation : 1;                   // 0x0000:7 (0x0001)  
	bool                                               bOverride_ColorGradingIntensity : 1;                        // 0x0001:0 (0x0001)  
	bool                                               bOverride_ColorGradingLUT : 1;                              // 0x0001:1 (0x0001)  
	bool                                               bOverride_AutoExposureDayBias : 1;                          // 0x0001:2 (0x0001)  
	bool                                               bOverride_AutoExposureNightBias : 1;                        // 0x0001:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              KuroBloomIntensity;                                         // 0x0004   (0x0004)  
	float                                              KuroBloomThreshold;                                         // 0x0008   (0x0004)  
	float                                              KuroBloomStreakIntensity;                                   // 0x000C   (0x0004)  
	float                                              KuroBloomStreakThreshold;                                   // 0x0010   (0x0004)  
	float                                              KuroBloomStreakLength;                                      // 0x0014   (0x0004)  
	float                                              KuroBloomStreakMipLevel;                                    // 0x0018   (0x0004)  
	float                                              KuroBloomStreakRatio;                                       // 0x001C   (0x0004)  
	float                                              KuroBloomStreakOrientation;                                 // 0x0020   (0x0004)  
	float                                              ColorGradingIntensity;                                      // 0x0024   (0x0004)  
	class UTexture*                                    ColorGradingLUT;                                            // 0x0028   (0x0008)  
	float                                              AutoExposureDayBias;                                        // 0x0030   (0x0004)  
	float                                              AutoExposureNightBias;                                      // 0x0034   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroGISetting
/// Size: 0x0B40 (2880 bytes) (0x000000 - 0x000B40) align 16 pad: 0x0000
struct FKuroGISetting
{ 
	FMainLightSetting                                  MainLightSetting;                                           // 0x0000   (0x0034)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0034   (0x000C)  MISSED
	FSkyLightSetting                                   SkyLightSetting;                                            // 0x0040   (0x0120)  
	FShadowTintSetting                                 ShadowTintSetting;                                          // 0x0160   (0x0018)  
	FCharacterSetting                                  CharacterSetting;                                           // 0x0178   (0x0054)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01CC   (0x0004)  MISSED
	FKuroHeightFogSetting                              KuroFogSetting;                                             // 0x01D0   (0x00A0)  
	FKuroTreeSetting                                   KuroTreeSetting;                                            // 0x0270   (0x0038)  
	FVolumetricFogSetting                              VolumetricFogSetting;                                       // 0x02A8   (0x002C)  
	FSkyAtmosphereSetting                              SkyAtmosphereSetting;                                       // 0x02D4   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02E4   (0x0004)  MISSED
	FKuroSkyboxSetting                                 KuroSkybox;                                                 // 0x02E8   (0x00C8)  
	FSunSetting                                        SunSetting;                                                 // 0x03B0   (0x0020)  
	FKuroLensFlareSetting                              LensFlareSetting;                                           // 0x03D0   (0x0028)  
	FWindSetting                                       WindSetting;                                                // 0x03F8   (0x0028)  
	FMoonSetting                                       MoonSetting;                                                // 0x0420   (0x0024)  
	FStarSetting                                       StarSetting;                                                // 0x0444   (0x0020)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0464   (0x0004)  MISSED
	FKuroCloudBillboardSetting                         CloudBillboardSetting1;                                     // 0x0468   (0x00D8)  
	FKuroCloudBillboardSetting                         CloudBillboardSetting2;                                     // 0x0540   (0x00D8)  
	FKuroCloudCardSetting                              CloudCardSetting;                                           // 0x0618   (0x0080)  
	FKuroMilkyWaySetting                               MilkyWaySetting;                                            // 0x0698   (0x0088)  
	FGIMiscSetting                                     MiscSetting;                                                // 0x0720   (0x00D0)  
	FGIClusteredStuffSetting                           ClusteredStuffSetting;                                      // 0x07F0   (0x0018)  
	FKuroGIMPCSetting                                  GIMPCSetting;                                               // 0x0808   (0x00B0)  
	FKuroPostProcessSetting                            KuroPostProcess;                                            // 0x08B8   (0x0038)  
	unsigned char                                      UnknownData04_7[0x250];                                     // 0x08F0   (0x0250)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroWeatherDataAsset
/// Size: 0x0B58 (2904 bytes) (0x000038 - 0x000B90) align 16 pad: 0x0000
class UKuroWeatherDataAsset : public UDataAsset
{ 
public:
	bool                                               UseOnlyOverrideProperty;                                    // 0x0038   (0x0001)  
	bool                                               UseFixedTime;                                               // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003A   (0x0002)  MISSED
	float                                              FixedTime;                                                  // 0x003C   (0x0004)  
	bool                                               UseFixedSunAngle;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              FixedSunHorizonAngle;                                       // 0x0044   (0x0004)  
	float                                              FixedSunVerticalAngle;                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FKuroGISetting                                     GISetting;                                                  // 0x0050   (0x0B40)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroTODEntryData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FKuroTODEntryData
{ 
	FVector2D                                          StartEndTime;                                               // 0x0000   (0x0008)  
	int32_t                                            DataIndex;                                                  // 0x0008   (0x0004)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroTODData
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
class UKuroTODData : public UDataAsset
{ 
public:
	TArray<FKuroTODEntryData>                          EntryDatas;                                                 // 0x0038   (0x0010)  
	TArray<class UKuroWeatherDataAsset*>               TODConfigs;                                                 // 0x0048   (0x0010)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroLandscapeParametersData
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UKuroLandscapeParametersData : public UDataAsset
{ 
public:
	TArray<float>                                      Parameters;                                                 // 0x0038   (0x0010)  
	// bool SetLandscapeMaterialLayerParameters(class UWorld* World);                                                           // [0xfcf130] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroPPLensflareData
/// Size: 0x0030 (48 bytes) (0x000038 - 0x000068) align 8 pad: 0x0000
class UKuroPPLensflareData : public UPrimaryDataAsset
{ 
public:
	FName                                              ConfigName;                                                 // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FKuroLensflareSettings                             Settings;                                                   // 0x0048   (0x0020)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroGISettings
/// Size: 0x0070 (112 bytes) (0x000048 - 0x0000B8) align 8 pad: 0x0000
class UKuroGISettings : public UDeveloperSettings
{ 
public:
	TArray<FName>                                      ThunderProfileNames;                                        // 0x0048   (0x0010)  
	TArray<FName>                                      RainProfileNames;                                           // 0x0058   (0x0010)  
	TArray<FSoftObjectPath>                            LensflareDatas;                                             // 0x0068   (0x0010)  
	SDK_UNDEFINED(48,619) /* TWeakObjectPtr<UKuroLandscapeParametersData*> */ __um(LandscapeParametersData);       // 0x0078   (0x0030)  
	TArray<class UKuroPPLensflareData*>                LensflareDatasLoaded;                                       // 0x00A8   (0x0010)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.MaterialStackElement
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FMaterialStackElement
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroPostprocessMaterialManager
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FKuroPostprocessMaterialManager
{ 
	TArray<FMaterialStackElement>                      MaterialStack;                                              // 0x0000   (0x0010)  
	class UPostProcessComponent*                       PostprocessComponentDisableRadialBlur;                      // 0x0010   (0x0008)  
	class UPostProcessComponent*                       PostProcessComponent;                                       // 0x0018   (0x0008)  
	class UKuroGISystem*                               ParentGISystem;                                             // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroSceneEffectActorManager
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FKuroSceneEffectActorManager
{ 
	TArray<class AKuroSceneEffectActor*>               SceneEffectActorsHiding;                                    // 0x0000   (0x0010)  
	TArray<class AKuroSceneEffectActor*>               SceneEffectActorsShowing;                                   // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroGISystem
/// Size: 0x0468 (1128 bytes) (0x000038 - 0x0004A0) align 16 pad: 0x0000
class UKuroGISystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x218];                                     // 0x0038   (0x0218)  MISSED
	SDK_UNDEFINED(80,620) /* TMap<FName, UObject*> */  __um(WeatherData);                                          // 0x0250   (0x0050)  
	unsigned char                                      UnknownData01_6[0x138];                                     // 0x02A0   (0x0138)  MISSED
	class UKuroWorldPartitionPreviewManager*           WorldPartitionPreviewManager;                               // 0x03D8   (0x0008)  
	FKuroPostprocessMaterialManager                    PostprocessMaterialManager;                                 // 0x03E0   (0x0030)  
	FKuroSceneEffectActorManager                       SceneEffectActorManager;                                    // 0x0410   (0x0028)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0438   (0x0050)  MISSED
	class UKuroRainManager*                            RainManager;                                                // 0x0488   (0x0008)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x0490   (0x0010)  MISSED
	// bool Start3DUISceneRendering(FString InLevelName);                                                                       // [0xfd27a0] Final|Native|Public|BlueprintCallable 
	// bool IsUISceneRendering();                                                                                               // [0xfd2430] Final|Native|Public|BlueprintCallable 
	// bool IsLastTickGIActor(class AKuroGlobalGI* Actor);                                                                      // [0xfd2390] Final|Native|Public|BlueprintCallable 
	// EKuroUI3DState GetUISceneRenderingState();                                                                               // [0xfd2360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class AKuroGlobalGI* GetKuroGlobalGIActor();                                                                             // [0xfd2330] Final|Native|Public|BlueprintCallable 
	// class UKuroGISystem* GetKuroGISystem(class UWorld* InWorld);                                                             // [0xfd22a0] Final|Native|Static|Public|BlueprintCallable 
	// bool End3DUISceneRendering();                                                                                            // [0xfd2220] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroGlobalColorSplitTextures
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UKuroGlobalColorSplitTextures : public UDataAsset
{ 
public:
	SDK_UNDEFINED(16,621) /* TArray<TWeakObjectPtr<UTexture2D*>> */ __um(Textures);                                // 0x0038   (0x0010)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroGlobalColorMapComponent
/// Size: 0x0050 (80 bytes) (0x0000C0 - 0x000110) align 16 pad: 0x0000
class UKuroGlobalColorMapComponent : public UActorComponent
{ 
public:
	class UKuroGlobalColorSplitTextures*               GlobalColorSplitTextures;                                   // 0x00C0   (0x0008)  
	int32_t                                            SideCellNum;                                                // 0x00C8   (0x0004)  
	int32_t                                            SizePerCell;                                                // 0x00CC   (0x0004)  
	FVector2D                                          StartWorldPosition;                                         // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x00D8   (0x0038)  MISSED
	// void UpdateColorMap(class UObject* WorldContextObject, FVector ViewLocation);                                            // [0xfd2c70] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroGlobalGI
/// Size: 0x1FE8 (8168 bytes) (0x0002A8 - 0x002290) align 16 pad: 0x0000
class AKuroGlobalGI : public AActor
{ 
public:
	bool                                               TickInEditor;                                               // 0x02A8   (0x0001)  
	bool                                               IsPersistentLevelGI;                                        // 0x02A9   (0x0001)  
	bool                                               bPostProcessVolumeChanged;                                  // 0x02AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x02AB   (0x0001)  MISSED
	float                                              TickDeltaTime;                                              // 0x02AC   (0x0004)  
	FVector                                            ViewLocation;                                               // 0x02B0   (0x000C)  
	float                                              SunHorizonAngle;                                            // 0x02BC   (0x0004)  
	float                                              SunVerticalAngle;                                           // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x02C4   (0x000C)  MISSED
	FKuroGISetting                                     LerpGISetting;                                              // 0x02D0   (0x0B40)  
	FKuroGISetting                                     TempGISetting;                                              // 0x0E10   (0x0B40)  
	FPostProcessSettings                               LerpPostProcessSetting;                                     // 0x1950   (0x0600)  
	float                                              CurTimeAfterLerp;                                           // 0x1F50   (0x0004)  
	float                                              LerpSunHorizonAngle;                                        // 0x1F54   (0x0004)  
	float                                              LerpSunVerticalAngle;                                       // 0x1F58   (0x0004)  
	float                                              GlobalWindSpeed;                                            // 0x1F5C   (0x0004)  
	float                                              GlobalWindPower;                                            // 0x1F60   (0x0004)  
	FVector                                            GlobalWindForwardDrection;                                  // 0x1F64   (0x000C)  
	FVector                                            WindTextureOffset;                                          // 0x1F70   (0x000C)  
	bool                                               bIsDayTime;                                                 // 0x1F7C   (0x0001)  
	bool                                               bDayNightEmssiveFactor;                                     // 0x1F7D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x1F7E   (0x0002)  MISSED
	float                                              DayNightEmssiveSmoothFactor;                                // 0x1F80   (0x0004)  
	float                                              TODNightLightLoadingTime;                                   // 0x1F84   (0x0004)  
	float                                              TODDayLightLoadingTime;                                     // 0x1F88   (0x0004)  
	float                                              RainDensityStepSpeed;                                       // 0x1F8C   (0x0004)  
	float                                              FinalRainDensityValue;                                      // 0x1F90   (0x0004)  
	float                                              FinalSnowDensityValue;                                      // 0x1F94   (0x0004)  
	float                                              RainGravityStepSpeed;                                       // 0x1F98   (0x0004)  
	float                                              FinalRainGravityValue;                                      // 0x1F9C   (0x0004)  
	float                                              RainWindPowerStepSpeed;                                     // 0x1FA0   (0x0004)  
	float                                              CharLightHorizontal;                                        // 0x1FA4   (0x0004)  
	FRotator                                           AtmosphereSunRotation;                                      // 0x1FA8   (0x000C)  
	FVector                                            AtmosphereSunForward;                                       // 0x1FB4   (0x000C)  
	FRotator                                           AtmosphereMoonRotation;                                     // 0x1FC0   (0x000C)  
	FVector                                            AtmosphereMoonForward;                                      // 0x1FCC   (0x000C)  
	float                                              UpdatePostProcessDataThreshold;                             // 0x1FD8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x1FDC   (0x0004)  MISSED
	class UTextureCube*                                KuroSkyLightCubemap1;                                       // 0x1FE0   (0x0008)  
	class UTextureCube*                                KuroSkyLightCubemap2;                                       // 0x1FE8   (0x0008)  
	class UTextureCube*                                KuroSkyLightCubemap3;                                       // 0x1FF0   (0x0008)  
	float                                              KuroCubemapBlend12;                                         // 0x1FF8   (0x0004)  
	float                                              KuroCubemapBlend23;                                         // 0x1FFC   (0x0004)  
	int32_t                                            KuroGlobalGIIndex;                                          // 0x2000   (0x0004)  
	int32_t                                            GIID;                                                       // 0x2004   (0x0004)  
	bool                                               IsKuroInit;                                                 // 0x2008   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x2009   (0x0007)  MISSED
	class UMaterialParameterCollection*                GIMPC;                                                      // 0x2010   (0x0008)  
	unsigned char                                      UnknownData05_6[0x20];                                      // 0x2018   (0x0020)  MISSED
	FKuroCurveFloat                                    FogTime;                                                    // 0x2038   (0x0090)  
	SDK_UNDEFINED(80,622) /* TMap<UClusteredStuffDataAsset*, AKuroRuntimeTransientActor*> */ __um(ClusteredStuffTransientActors); // 0x20C8   (0x0050)  
	SDK_UNDEFINED(80,623) /* TSet<UClusteredStuffDataAsset*> */ __um(ClusteredStuffActive);                        // 0x2118   (0x0050)  
	TArray<class UClusteredStuffDataAsset*>            AdditionalClusteredStuff;                                   // 0x2168   (0x0010)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x2178   (0x0008)  MISSED
	class USunLensFlareConfig*                         DefaultSunLensflareConfig;                                  // 0x2180   (0x0008)  
	class UMaterialInstanceDynamic*                    StarsMat;                                                   // 0x2188   (0x0008)  
	class UMaterialInstanceDynamic*                    MilkyWayMat;                                                // 0x2190   (0x0008)  
	class UMaterialInstanceDynamic*                    SkyBoxMat;                                                  // 0x2198   (0x0008)  
	bool                                               bPlayerInCave;                                              // 0x21A0   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x21A1   (0x0003)  MISSED
	float                                              FinalRoughnessDensity;                                      // 0x21A4   (0x0004)  
	unsigned char                                      UnknownData08_6[0x10];                                      // 0x21A8   (0x0010)  MISSED
	class UKuroTODData*                                TODDataAsset;                                               // 0x21B8   (0x0008)  
	SDK_UNDEFINED(8,624) /* TWeakObjectPtr<UKuroGISystem*> */ __um(CachedGISystem);                                // 0x21C0   (0x0008)  
	unsigned char                                      UnknownData09_6[0x18];                                      // 0x21C8   (0x0018)  MISSED
	class UTexture*                                    LightFunctionMap_Texture;                                   // 0x21E0   (0x0008)  
	unsigned char                                      UnknownData10_7[0xA8];                                      // 0x21E8   (0x00A8)  MISSED
	// void UpdateTODData(class UObject* WorldContextObject, FVector WorldPosition, float TimeSecnod);                          // [0xfd2f80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void UpdatePostProcessSettingData(class UObject* WorldContextObject, float CurTime, bool bSkipLerpData);                 // [0xfd2e60] Final|Native|Public|BlueprintCallable 
	// void UpdateLightDirection(class UObject* WorldContextObject, class UDirectionalLightComponent* AtmoSunLight, class UDirectionalLightComponent* AtmoMoonLight); // [0xfd2d50] Final|Native|Public|BlueprintCallable 
	// void UpdateCharLightHorizontal(class UObject* WorldContextObject, FRotator& SceneLightRot, class UMaterialParameterCollection* Collection, bool bDebugCharLightHorizontal, float DebugCharLightHorizontal, float DebugCharLightVertical); // [0xfd2a50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void UpdateAndApplyWind(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection);              // [0xfd2980] Final|Native|Public|BlueprintCallable 
	// void UpdateAndApplyWeather(class AKuroRainActor* RainActor, class AKuroRainActor* SnowActor, class UTexture2D* HeightTexture); // [0xfd2870] Final|Native|Public|BlueprintCallable 
	// void SetupSceneRain(class UKuroSceneRainEmitterConfig* FrontRainConfig, class UKuroSceneRainEmitterConfig* BackRainConfig); // [0xfd26d0] Final|Native|Public|BlueprintCallable 
	// void SetSunLensflareEnabled(bool bEnable);                                                                               // [0xfd25c0] Final|Native|Public|BlueprintCallable 
	// void SetGITime(float Time);                                                                                              // [0xfd24b0] Final|Native|Public|BlueprintCallable 
	// void OnKuroTickEditor(float DeltaTime);                                                                                  // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnKuroTick(float DeltaTime);                                                                                        // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnKuroStartUiScene(FString InName, class ULevel* InUILevel);                                                        // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnKuroStartUI(FString InName, class ULevel* InUILevel);                                                             // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnKuroSetRuntimeTime(float CurrentTime);                                                                            // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnKuroRuntimeDestroy();                                                                                             // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnKuroInit();                                                                                                       // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnKuroEndUiScene();                                                                                                 // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnKuroEndUI();                                                                                                      // [0x25a7960] Event|Public|BlueprintEvent 
	// bool K2_IsInPersistentLevel();                                                                                           // [0xfd2460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetGITime();                                                                                                       // [0xfd2280] Final|Native|Public|BlueprintCallable 
	// class UKuroGISystem* GetCachedGISystem();                                                                                // [0xfd2250] Final|Native|Public|BlueprintCallable 
	// void CalLightDirectionWithLimit(float Time, float LightAngleLimit, FRotator& LightRotation);                             // [0xfd1f60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// float CalcTODTimeFactor(float StartTime, float EndTime, float CurrTime);                                                 // [0xfd2080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void ApplyStarsParameters(class UMaterialInstance* StarMaterial, class UStaticMeshComponent* StarMeshComponent);         // [0xfd1e90] Final|Native|Public|BlueprintCallable 
	// void ApplySkyEffectsParameters(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection);       // [0xfd1dc0] Final|Native|Public|BlueprintCallable|Const 
	// void ApplySkyBoxSetting(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, class UMaterialInstance* SkyBoxMaterial, class UStaticMeshComponent* SkyBoxMeshComponent); // [0xfd1c60] Final|Native|Public|BlueprintCallable 
	// void ApplySceneRain();                                                                                                   // [0x95a130] Final|Native|Public|BlueprintCallable 
	// void ApplyMilkyWayParameters(class UMaterialInstance* MilkyWayMaterial, class UStaticMeshComponent* MilkyWayMeshComponent); // [0xfd1b90] Final|Native|Public|BlueprintCallable 
	// void ApplyLightShaft(class UDirectionalLightComponent* SceneLight);                                                      // [0xfd1b00] Final|Native|Public|BlueprintCallable|Const 
	// void ApplyLightParameters(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, class UDirectionalLightComponent* SceneLight); // [0xfd19f0] Final|Native|Public|BlueprintCallable|Const 
	// void ApplyLightFunctionSetting(class UMaterialInstanceDynamic* DynamicMaterial, class UTexture* DefaultLightFucntionTexture); // [0xfd1920] Final|Native|Public|BlueprintCallable 
	// void ApplyLensflare(float DeltaTime, FVector& SunForward, class UMaterialParameterCollection* Collection);               // [0xfd1800] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void ApplyKuroSkyLight(class USkyLightComponent* SkyLight, float TimeOfDay, float DefaultShadowSupplement, float DefaultReflectionAddIntensity); // [0xfd16a0] Final|Native|Public|BlueprintCallable 
	// void ApplyGlobalShaderParameters(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection);     // [0xfd15d0] Final|Native|Public|BlueprintCallable|Const 
	// void ApplyGlobalGIRenderQuality(class UMaterialInstanceDynamic* DynamicMaterial);                                        // [0xfd1540] Final|Native|Public|BlueprintCallable 
	// void ApplyGIMPC();                                                                                                       // [0xfd1520] Final|Native|Public|BlueprintCallable 
	// void ApplyFog(class UObject* WorldContextObject, class UExponentialHeightFogComponent* HeightFog, class UMaterialParameterCollection* Collection, float WorldZOffset, class UStaticMeshComponent* CloudOcean); // [0xfd1370] Final|Native|Public|BlueprintCallable|Const 
	// void ApplyClusteredStuff();                                                                                              // [0xfd1350] Final|Native|Public|BlueprintCallable 
	// void ApplyCloudCardSetting(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection);           // [0xfd1280] Final|Native|Public|BlueprintCallable|Const 
	// void ApplyAndUpdateDayNightDataLayer(float TimeOfDay, float TODLightLoadingWait);                                        // [0xfd11b0] Final|Native|Public|BlueprintCallable 
	// void Apply3DUISceneSkyLight(class USkyLightComponent* SkyLight);                                                         // [0xfd1120] Final|Native|Public|BlueprintCallable 
	// void ApplayShadowTintRampOffset(class USkyLightComponent* SkyLight);                                                     // [0xfd1090] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroHeightMapSettings
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UKuroHeightMapSettings : public UPrimaryDataAsset
{ 
public:
	class UKuroSplitTextureStreamerSettings*           StreamerSettings;                                           // 0x0038   (0x0008)  
	float                                              ShotHeight;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroGlobalHeightMapComponent
/// Size: 0x0080 (128 bytes) (0x0000C0 - 0x000140) align 16 pad: 0x0000
class UKuroGlobalHeightMapComponent : public UActorComponent
{ 
public:
	class UKuroHeightMapSettings*                      HeightMapSettings;                                          // 0x00C0   (0x0008)  
	int32_t                                            LoadNumPerSidePc;                                           // 0x00C8   (0x0004)  
	int32_t                                            LoadNumPerSideMobile;                                       // 0x00CC   (0x0004)  
	TArray<class UObject*>                             LoadedTextures;                                             // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x00E0   (0x0060)  MISSED
	// void Update();                                                                                                           // [0xfd2850] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroGPUParticleActor
/// Size: 0x0010 (16 bytes) (0x0002A8 - 0x0002B8) align 8 pad: 0x0000
class AKuroGPUParticleActor : public AActor
{ 
public:
	int32_t                                            KuroIndex;                                                  // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02AC   (0x0004)  MISSED
	class UKuroGPUParticleComponent*                   GPUParticleComponent;                                       // 0x02B0   (0x0008)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroGPUParticleComponent
/// Size: 0x00E8 (232 bytes) (0x000588 - 0x000670) align 16 pad: 0x0000
class UKuroGPUParticleComponent : public UStaticMeshComponent
{ 
public:
	class UKuroGPUParticleDA*                          GPUParticleDataAsset;                                       // 0x0588   (0x0008)  
	bool                                               ClickReplay;                                                // 0x0590   (0x0001)  
	bool                                               StopAtFinalFrame;                                           // 0x0591   (0x0001)  
	bool                                               AutoUpdate;                                                 // 0x0592   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0593   (0x0001)  MISSED
	int32_t                                            SimulateFramerate;                                          // 0x0594   (0x0004)  
	bool                                               Loop;                                                       // 0x0598   (0x0001)  
	bool                                               Reverse;                                                    // 0x0599   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x059A   (0x0002)  MISSED
	float                                              LoopIntervalTime;                                           // 0x059C   (0x0004)  
	int32_t                                            SkipFrameCount;                                             // 0x05A0   (0x0004)  
	float                                              StartWaitTime;                                              // 0x05A4   (0x0004)  
	bool                                               UseCustomTimeScaleCurve;                                    // 0x05A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x05A9   (0x0007)  MISSED
	FKuroCurveFloat                                    CustomTimeScaleCurve;                                       // 0x05B0   (0x0090)  
	unsigned char                                      UnknownData03_7[0x30];                                      // 0x0640   (0x0030)  MISSED
	// void SetupParticle(float DeltaTime);                                                                                     // [0xfd2650] Final|Native|Public|BlueprintCallable 
	// void SetGPUData(class UKuroGPUParticleDA* TargetData);                                                                   // [0xfd2530] Final|Native|Public|BlueprintCallable 
	// void ResetParticle();                                                                                                    // [0xfd2490] Final|Native|Public|BlueprintCallable 
	// void DoTick(float DeltaTime);                                                                                            // [0xfd21a0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroGPUParticleMeshInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FKuroGPUParticleMeshInfo
{ 
	int32_t                                            StartFrame;                                                 // 0x0000   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x0004   (0x0004)  
	FVector                                            BoundsCenter;                                               // 0x0008   (0x000C)  
	FVector                                            BoundsSize;                                                 // 0x0014   (0x000C)  
	class UStaticMesh*                                 Mesh;                                                       // 0x0020   (0x0008)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroGPUParticleDA
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000078) align 8 pad: 0x0000
class UKuroGPUParticleDA : public UDataAsset
{ 
public:
	FString                                            JsonDataPath;                                               // 0x0038   (0x0010)  
	class UMaterialInstance*                           GPUParticleMaterial;                                        // 0x0048   (0x0008)  
	int32_t                                            StartFrame;                                                 // 0x0050   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x0054   (0x0004)  
	float                                              ColorIntensity;                                             // 0x0058   (0x0004)  
	float                                              VelocityScale;                                              // 0x005C   (0x0004)  
	float                                              AspectRatio;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	TArray<FKuroGPUParticleMeshInfo>                   AllParticleInfos;                                           // 0x0068   (0x0010)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroGPUParticleSubsystem
/// Size: 0x0030 (48 bytes) (0x000038 - 0x000068) align 8 pad: 0x0000
class UKuroGPUParticleSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0038   (0x0030)  MISSED
	// class UKuroGPUParticleSubsystem* GetKuroGPUParticleSystem(class UWorld* InWorld);                                        // [0xfd6140] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroHaloComponent
/// Size: 0x0028 (40 bytes) (0x000588 - 0x0005B0) align 16 pad: 0x0000
class UKuroHaloComponent : public UStaticMeshComponent
{ 
public:
	SDK_UNDEFINED(16,625) /* FMulticastInlineDelegate */ __um(OnParameterChangedEvent);                            // 0x0588   (0x0010)  
	float                                              HaloMinDrawDistance;                                        // 0x0598   (0x0004)  
	float                                              HaloMaxDrawDistance;                                        // 0x059C   (0x0004)  
	float                                              HaloMinDrawFadeRange;                                       // 0x05A0   (0x0004)  
	float                                              HaloMaxDrawFadeRange;                                       // 0x05A4   (0x0004)  
	float                                              LightRadius;                                                // 0x05A8   (0x0004)  
	float                                              BoxExtent;                                                  // 0x05AC   (0x0004)  
	// void SetRadius(float Radius);                                                                                            // [0xfd84a0] Final|Native|Public|BlueprintCallable 
	// float GetLightRadius();                                                                                                  // [0xfd6280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroLensFlare
/// Size: 0x0048 (72 bytes) (0x0000C0 - 0x000108) align 8 pad: 0x0000
class UKuroLensFlare : public UActorComponent
{ 
public:
	TArray<FVector>                                    Vertices;                                                   // 0x00C0   (0x0010)  
	TArray<int32_t>                                    Triangles;                                                  // 0x00D0   (0x0010)  
	TArray<FVector2D>                                  UVS;                                                        // 0x00E0   (0x0010)  
	TArray<FLinearColor>                               VertexColor;                                                // 0x00F0   (0x0010)  
	class UProceduralMeshComponent*                    MeshComponent;                                              // 0x0100   (0x0008)  
	// void SetVertsProperties(FVector2D ViewportScale, int32_t PrimityIndex, FVector2D UVCenter, FVector2D UVSize, FVector2D LensFlareScale, float LensFlareOffset, float LensFlareRotation, FLinearColor LensFlareTint, FVector2D LensFlareScreenPosition, FVector2D LensFlareDirection); // [0xfd8730] Final|Native|Public|HasDefaults|BlueprintCallable 
	// bool IsViewportEnable();                                                                                                 // [0xfd6c80] Final|Native|Public|BlueprintCallable 
	// bool IsInit();                                                                                                           // [0xfd6b20] Final|Native|Public|BlueprintCallable 
	// void InitVecticesData(int32_t LensImageLengths);                                                                         // [0xfd6920] Final|Native|Public|BlueprintCallable 
	// void Init(class UProceduralMeshComponent* InputMeshComponent);                                                           // [0xfd6890] Final|Native|Public|BlueprintCallable 
	// FVector2D GetViewportSize();                                                                                             // [0xfd6750] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroLevelSequenceActor
/// Size: 0x0010 (16 bytes) (0x000330 - 0x000340) align 8 pad: 0x0000
class AKuroLevelSequenceActor : public ALevelSequenceActor
{ 
public:
	FName                                              Key;                                                        // 0x0330   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x033C   (0x0004)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroLevelSequenceSubsystem
/// Size: 0x0070 (112 bytes) (0x000038 - 0x0000A8) align 8 pad: 0x0000
class UKuroLevelSequenceSubsystem : public UWorldSubsystem
{ 
public:
	SDK_UNDEFINED(16,626) /* FMulticastInlineDelegate */ __um(OnLevelSequenceRegister);                            // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,627) /* FMulticastInlineDelegate */ __um(OnLevelSequenceUnRegister);                          // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0058   (0x0050)  MISSED
	// class AKuroLevelSequenceActor* GetLevelSequence(FName& Key);                                                             // [0xfd61d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void GetAllLevelSequences(TArray<AKuroLevelSequenceActor*>& InAllLevelSequences);                                        // [0xfd5cd0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroDynamicMaterialCache
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FKuroDynamicMaterialCache
{ 
	TArray<FName>                                      KeyWord;                                                    // 0x0000   (0x0010)  
	class UMaterialInstance*                           OriginalVariationMaterialInstance;                          // 0x0010   (0x0008)  
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                            // 0x0018   (0x0008)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroMaterialVariationRuntimeInfo
/// Size: 0x0250 (592 bytes) (0x000000 - 0x000250) align 8 pad: 0x0000
struct FKuroMaterialVariationRuntimeInfo
{ 
	TArray<FName>                                      ActiveKeyword;                                              // 0x0000   (0x0010)  
	class UKuroMaterialVariationCollection*            MaterialVariationData;                                      // 0x0010   (0x0008)  
	TArray<FKuroDynamicMaterialCache>                  DynamicMaterialCache;                                       // 0x0018   (0x0010)  
	SDK_UNDEFINED(80,628) /* TMap<FName, float> */     __um(FloatPropertyCache);                                   // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,629) /* TMap<FName, FLinearColor> */ __um(LinearColorPropertyCache);                          // 0x0078   (0x0050)  
	SDK_UNDEFINED(80,630) /* TMap<FName, UTexture*> */ __um(TexturePropertyCache);                                 // 0x00C8   (0x0050)  
	SDK_UNDEFINED(80,631) /* TMap<FName, float> */     __um(OriginalFloatPropertyCache);                           // 0x0118   (0x0050)  
	SDK_UNDEFINED(80,632) /* TMap<FName, FLinearColor> */ __um(OriginalLinearColorPropertyCache);                  // 0x0168   (0x0050)  
	SDK_UNDEFINED(80,633) /* TMap<FName, UTexture*> */ __um(OriginalTexturePropertyCache);                         // 0x01B8   (0x0050)  
	class UMaterialInterface*                          CurrentUseMaterial;                                         // 0x0208   (0x0008)  
	class UMaterialInterface*                          CurrentReplaceMaterial;                                     // 0x0210   (0x0008)  
	class USkeletalMeshComponent*                      SkelComp;                                                   // 0x0218   (0x0008)  
	class UStaticMeshComponent*                        StaticComp;                                                 // 0x0220   (0x0008)  
	int32_t                                            MaterialSlotIndex;                                          // 0x0228   (0x0004)  
	unsigned char                                      UnknownData00_7[0x24];                                      // 0x022C   (0x0024)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroMaterialVariationComponent
/// Size: 0x0028 (40 bytes) (0x0000C0 - 0x0000E8) align 8 pad: 0x0000
class UKuroMaterialVariationComponent : public UActorComponent
{ 
public:
	bool                                               bIsInitSuccess;                                             // 0x00C0   (0x0001)  
	bool                                               bIsSkeletalMeshType;                                        // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00C2   (0x0006)  MISSED
	class UStaticMeshComponent*                        ParentStaticMeshComp;                                       // 0x00C8   (0x0008)  
	class USkeletalMeshComponent*                      ParentSkeletalMeshComp;                                     // 0x00D0   (0x0008)  
	TArray<FKuroMaterialVariationRuntimeInfo>          AllRuntimeMaterialInfo;                                     // 0x00D8   (0x0010)  
	// void SetMaterialTextureAll(FName PropertyName, class UTexture* InValue);                                                 // [0xfd8290] Final|Native|Public|BlueprintCallable 
	// void SetMaterialTexture(FName PropertyName, class UTexture* InValue, int32_t MaterialIndex);                             // [0xfd8160] Final|Native|Public|BlueprintCallable 
	// void SetMaterialLinearColorAll(FName PropertyName, FLinearColor InValue);                                                // [0xfd7c80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetMaterialLinearColor(FName PropertyName, FLinearColor InValue, int32_t MaterialIndex);                            // [0xfd7b50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetMaterialFloatAll(FName PropertyName, float InValue);                                                             // [0xfd7a60] Final|Native|Public|BlueprintCallable 
	// void SetMaterialFloat(FName PropertyName, float InValue, int32_t MaterialIndex);                                         // [0xfd7930] Final|Native|Public|BlueprintCallable 
	// void SetKeywordStateAll(FName KeyWord, bool InIsEnable);                                                                 // [0xfd7840] Final|Native|Public|BlueprintCallable 
	// void SetKeywordState(FName KeyWord, bool InIsEnable, int32_t MaterialIndex);                                             // [0xfd7710] Final|Native|Public|BlueprintCallable 
	// void RevertMaterialTextureAll(FName PropertyName);                                                                       // [0xfd7230] Final|Native|Public|BlueprintCallable 
	// void RevertMaterialTexture(FName PropertyName, int32_t MaterialIndex);                                                   // [0xfd7150] Final|Native|Public|BlueprintCallable 
	// void RevertMaterialLinearColorAll(FName PropertyName);                                                                   // [0xfd70b0] Final|Native|Public|BlueprintCallable 
	// void RevertMaterialLinearColor(FName PropertyName, int32_t MaterialIndex);                                               // [0xfd6fd0] Final|Native|Public|BlueprintCallable 
	// void RevertMaterialFloatAll(FName PropertyName);                                                                         // [0xfd6f30] Final|Native|Public|BlueprintCallable 
	// void RevertMaterialFloat(FName PropertyName, int32_t MaterialIndex);                                                     // [0xfd6e50] Final|Native|Public|BlueprintCallable 
	// void RevertMaterial(int32_t MaterialIndex);                                                                              // [0xfd6dc0] Final|Native|Public|BlueprintCallable 
	// void ReplaceMaterial(class UMaterialInterface* MatToReplace, int32_t MaterialIndex);                                     // [0xfd6cf0] Final|Native|Public|BlueprintCallable 
	// bool IsMaterialVariationDataValid(class UMeshComponent* CheckMeshComponent, TArray<UKuroMaterialVariationCollection*> CheckCollection); // [0xfd6b50] Final|Native|Public|BlueprintCallable 
	// bool IsComponentValid();                                                                                                 // [0xfd6af0] Final|Native|Public|BlueprintCallable 
	// bool InitWithStaticMeshComponent(class UStaticMeshComponent* InStaticMeshComponent);                                     // [0xfd6a50] Final|Native|Public|BlueprintCallable 
	// bool InitWithSkeletalMeshComponent(class USkeletalMeshComponent* InSkeletalMeshComponent);                               // [0xfd69b0] Final|Native|Public|BlueprintCallable 
	// class UTexture* GetMaterialTexture(FName PropertyName, int32_t MaterialIndex);                                           // [0xfd64a0] Final|Native|Public|BlueprintCallable 
	// FLinearColor GetMaterialLinearColor(FName PropertyName, int32_t MaterialIndex);                                          // [0xfd63a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// float GetMaterialFloat(FName PropertyName, int32_t MaterialIndex);                                                       // [0xfd62a0] Final|Native|Public|BlueprintCallable 
	// bool GetKeywordState(FName PropertyName, int32_t MaterialIndex);                                                         // [0xfd6050] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroPlayerPrefsSystem
/// Size: 0x0008 (8 bytes) (0x000038 - 0x000040) align 8 pad: 0x0000
class UKuroPlayerPrefsSystem : public UWorldSubsystem
{ 
public:
	class UKuroSaveGame*                               KuroSaveGame;                                               // 0x0038   (0x0008)  
	// void SetString(FString Key, FString Value);                                                                              // [0xfd85b0] Final|Native|Public|BlueprintCallable 
	// void SetInt(FString Key, int32_t Value);                                                                                 // [0xfd75e0] Final|Native|Public|BlueprintCallable 
	// void SetFloat(FString Key, float Value);                                                                                 // [0xfd74a0] Final|Native|Public|BlueprintCallable 
	// void Save();                                                                                                             // [0xfd72d0] Final|Native|Public|BlueprintCallable 
	// bool HasKey(FString Key);                                                                                                // [0xfd6790] Final|Native|Public|BlueprintCallable 
	// FString GetString(FString Key, FString DefaultValue);                                                                    // [0xfd6590] Final|Native|Public|BlueprintCallable 
	// int32_t GetInt(FString Key, int32_t DefaultValue);                                                                       // [0xfd5ef0] Final|Native|Public|BlueprintCallable 
	// float GetFloat(FString Key, float DefaultValue);                                                                         // [0xfd5da0] Final|Native|Public|BlueprintCallable 
	// void DeleteKey(FString Key);                                                                                             // [0xfd5be0] Final|Native|Public|BlueprintCallable 
	// void DeleteAll();                                                                                                        // [0xfd5bc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroPostProcessComponent
/// Size: 0x0B88 (2952 bytes) (0x000838 - 0x0013C0) align 16 pad: 0x0000
class UKuroPostProcessComponent : public UPostProcessComponent
{ 
public:
	class UKuroWeatherDataAsset*                       WeatherDataAsset;                                           // 0x0838   (0x0008)  
	class UKuroTODData*                                PPTODDataAsset;                                             // 0x0840   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0848   (0x0008)  MISSED
	FKuroGISetting                                     GISetting;                                                  // 0x0850   (0x0B40)  
	class AVolume*                                     ReferencedVolumeActor;                                      // 0x1390   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x1398   (0x0028)  MISSED
	// void SetWeatherDataAsset(class UKuroWeatherDataAsset* InWeatherDataAsset);                                               // [0xfd8ab0] Final|Native|Public|BlueprintCallable 
	// void SetReferencedVolumeActor(class AVolume* InReferencedVolumeActor);                                                   // [0xfd8520] Final|Native|Public|BlueprintCallable 
	// void SetPPTODDataAsset(class UKuroTODData* InPPTODDataAsset);                                                            // [0xfd8410] Final|Native|Public|BlueprintCallable 
	// void PostModify();                                                                                                       // [0xfd6cd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroPostProcessVolume
/// Size: 0x0B78 (2936 bytes) (0x000908 - 0x001480) align 16 pad: 0x0000
class AKuroPostProcessVolume : public APostProcessVolume
{ 
public:
	class UKuroWeatherDataAsset*                       WeatherDataAsset;                                           // 0x0908   (0x0008)  
	class UKuroTODData*                                PPTODDataAsset;                                             // 0x0910   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0918   (0x0008)  MISSED
	FKuroGISetting                                     GISetting;                                                  // 0x0920   (0x0B40)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x1460   (0x0020)  MISSED
	// void SetWeatherDataAsset(class UKuroWeatherDataAsset* InWeatherDataAsset);                                               // [0xfd8a20] Final|Native|Public|BlueprintCallable 
	// void SetPPTODDataAsset(class UKuroTODData* InPPTODDataAsset);                                                            // [0xfd8380] Final|Native|Public|BlueprintCallable 
	// void PostModify();                                                                                                       // [0xfd6cb0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroRainMaterialFloatParameter
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 pad: 0x0000
struct FKuroRainMaterialFloatParameter
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FKuroCurveFloat                                    Value;                                                      // 0x0010   (0x0090)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroRainMaterialColorParameter
/// Size: 0x0230 (560 bytes) (0x000000 - 0x000230) align 8 pad: 0x0000
struct FKuroRainMaterialColorParameter
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FKuroCurveLinearColor                              Value;                                                      // 0x0010   (0x0220)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroRainSettings
/// Size: 0x02D0 (720 bytes) (0x000038 - 0x000308) align 8 pad: 0x0000
class UKuroRainSettings : public UPrimaryDataAsset
{ 
public:
	FVector                                            RainBoxSize;                                                // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UStaticMesh*                                 RainMesh;                                                   // 0x0048   (0x0008)  
	FIntVector                                         BoxCountPositive;                                           // 0x0050   (0x000C)  
	FIntVector                                         BoxCountNegative;                                           // 0x005C   (0x000C)  
	float                                              CameraOffsetSize;                                           // 0x0068   (0x0004)  
	float                                              ScaleCameraOffsetY;                                         // 0x006C   (0x0004)  
	FKuroCurveFloat                                    GravityWeightCurve;                                         // 0x0070   (0x0090)  
	FKuroCurveFloat                                    WindWeightCurve;                                            // 0x0100   (0x0090)  
	bool                                               RainDropSizeUseSpeed;                                       // 0x0190   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	FKuroCurveVector2D                                 RaindropSizeCurve;                                          // 0x0198   (0x0120)  
	class UMaterialInterface*                          Material;                                                   // 0x02B8   (0x0008)  
	TArray<FKuroRainMaterialFloatParameter>            MaterialFloatParameters_Density;                            // 0x02C0   (0x0010)  
	TArray<FKuroRainMaterialColorParameter>            MaterialColorParameters_Density;                            // 0x02D0   (0x0010)  
	TArray<FKuroRainMaterialFloatParameter>            MaterialFloatParameters_Speed;                              // 0x02E0   (0x0010)  
	TArray<FKuroRainMaterialColorParameter>            MaterialColorParameters_Speed;                              // 0x02F0   (0x0010)  
	int32_t                                            FramesIntervalUpdateParameters;                             // 0x0300   (0x0004)  
	int32_t                                            FramesIntervalFixRainBoxes;                                 // 0x0304   (0x0004)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroRainActor
/// Size: 0x0190 (400 bytes) (0x0002A8 - 0x000438) align 8 pad: 0x0000
class AKuroRainActor : public AActor
{ 
public:
	class UKuroRainSettings*                           Settings;                                                   // 0x02A8   (0x0008)  
	float                                              BasicGravity;                                               // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xD4];                                      // 0x02B4   (0x00D4)  MISSED
	class UInstancedStaticMeshComponent*               MeshComp;                                                   // 0x0388   (0x0008)  
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                            // 0x0390   (0x0008)  
	SDK_UNDEFINED(80,634) /* TMap<FName, float> */     __um(MaterialParameterOverrideFloat);                       // 0x0398   (0x0050)  
	SDK_UNDEFINED(80,635) /* TMap<FName, FLinearColor> */ __um(MaterialParameterOverrideColor);                    // 0x03E8   (0x0050)  
	// void Update(float DeltaSeconds);                                                                                         // [0xfd8b60] Final|Native|Public|BlueprintCallable 
	// void SetupRainConfig();                                                                                                  // [0xfd8b40] Final|Native|Public|BlueprintCallable 
	// void SetMaterialParameterOverrideFloat(FName Name, float Value);                                                         // [0xfd7f60] Final|Native|Public|BlueprintCallable 
	// void SetMaterialParameterOverrideColor(FName Name, FLinearColor Value);                                                  // [0xfd7d70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetCurrentRain(float InDensity, float InGravity, float InWindX, float InWindY, float InWindZ);                      // [0xfd72f0] Final|Native|Public|BlueprintCallable 
	// bool GetIsInit();                                                                                                        // [0xfd6030] Final|Native|Public|BlueprintCallable 
	// class UMaterialInstanceDynamic* GetDynamicMaterial();                                                                    // [0xfd5d80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroRainActorV2
/// Size: 0x0008 (8 bytes) (0x0002B8 - 0x0002C0) align 8 pad: 0x0000
class AKuroRainActorV2 : public AKuroEditorTickActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02B8   (0x0008)  MISSED
	// void SetCameraFrustum(class UKuroRainComponent* Comp);                                                                   // [0xfe4f30] Final|Native|Public|BlueprintCallable 
	// void RemoveRainComponent(class UKuroRainComponent* Comp);                                                                // [0xfe43c0] Final|Native|Public|BlueprintCallable 
	// void GetPlayerOrEditorCameraLocation(FVector& OutLocation);                                                              // [0xfe1170] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void EnableRain();                                                                                                       // [0x25a7960] Event|Public|BlueprintEvent 
	// void DisableRain();                                                                                                      // [0x25a7960] Event|Public|BlueprintEvent 
	// class UKuroRainComponent* AddRainComponent(class UClass* ClassType);                                                     // [0xfdc970] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroRainComponent
/// Size: 0x0018 (24 bytes) (0x000218 - 0x000230) align 16 pad: 0x0000
class UKuroRainComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0218   (0x0008)  MISSED
	bool                                               bAutoPlay;                                                  // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0221   (0x000F)  MISSED
	// void Stop();                                                                                                             // [0xfe7cb0] Final|Native|Public|BlueprintCallable 
	// void Start();                                                                                                            // [0xfe7c90] Final|Native|Public|BlueprintCallable 
	// void SetWindProcessor(int32_t ProcessorID, FVector& WindVelocity);                                                       // [0xfe5eb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetVectorFieldForceProcessor_VectorField(int32_t ProcessorID, class UVectorFieldStatic* InVectorField);             // [0xfe7090] Final|Native|Public|BlueprintCallable 
	// void SetVectorFieldForceProcessor_Others(int32_t ProcessorID, FVector InPosScale, FVector InMoveSpeed, float InForceSize); // [0xfe6ee0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetupRainEmitters();                                                                                                // [0x25a7960] Event|Public|BlueprintEvent 
	// void Setup(TArray<UStaticMesh*>& Meshes, TArray<UMaterialInterface*>& Materials);                                        // [0xfe7590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetTimeDilation(float Dilation);                                                                                    // [0xfe6bc0] Final|Native|Public|BlueprintCallable 
	// void SetRandomSpawnerRuntime(int32_t SpawnerID, FVector SpawnCenter, float SpawnRate, FVector VelocityMin, FVector VelocityMax); // [0xfe65d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetRandomSpawnerBasic(int32_t SpawnerID, float SpawnInnerRadius, float SpawnOuterRadius, float LifeTimeMin, float LifeTimeMax, float ScaleMin, float ScaleMax, float BaseMassMin, float BaseMassMax); // [0xfe62b0] Final|Native|Public|BlueprintCallable 
	// void SetLinearForceProcessor(int32_t ProcessorID, FVector& Force);                                                       // [0xfe5eb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetLifeTimeDilation(float Dilation);                                                                                // [0xfe5e20] Final|Native|Public|BlueprintCallable 
	// void SetDragProcessor(int32_t ProcessorID, float DragSize);                                                              // [0xfe54c0] Final|Native|Public|BlueprintCallable 
	// void SetCycleBoxProcessor(int32_t ProcessorID, FVector Min, FVector Max);                                                // [0xfe5370] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetCustomRandomSetProcessor(int32_t ProcessorID, float Value, int32_t Index);                                       // [0xfe5250] Final|Native|Public|BlueprintCallable 
	// void SetCustomRandomByVelocityProcessor(int32_t ProcessorID, FKuroCurveFloat& Curve, int32_t Index);                     // [0xfe5080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetCustomRandomByNormalizedAgeProcessor(int32_t ProcessorID, FKuroCurveFloat& Curve, int32_t Index);                // [0xfe5080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetArraySpawnerRuntime(int32_t SpawnerID, FVector SpawnCenter, float SpawnRate, FVector VelocityMin, FVector VelocityMax); // [0xfe4ac0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetArraySpawnerBasic(int32_t SpawnerID, int32_t ArraySize, float ArrayLength, float SpawnTimeWiggle, float SpawnPositionWiggle, float LifeTimeMin, float LifeTimeMax, float ScaleMin, float ScaleMax, float BaseMassMin, float BaseMassMax); // [0xfe4710] Final|Native|Public|BlueprintCallable 
	// void PreSolveRainParticles(float DeltaSeconds);                                                                          // [0x25a7960] Event|Public|BlueprintEvent 
	// void Init();                                                                                                             // [0xfe3050] Final|Native|Public|BlueprintCallable 
	// FVector GetWindProcessor_WindVelocity(int32_t ProcessorID);                                                              // [0xfdff00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector GetLinearForceProcessor_Force(int32_t ProcessorID);                                                              // [0xfdff00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// bool GetIsPlaying();                                                                                                     // [0xfe0860] Final|Native|Public|BlueprintCallable 
	// int32_t GetEmitterDataNum();                                                                                             // [0xfe01d0] Final|Native|Public|BlueprintCallable 
	// float GetDragProcessor_DragSize(int32_t ProcessorID);                                                                    // [0xfe0120] Final|Native|Public|BlueprintCallable 
	// FVector GetCycleBoxProcessor_Min(int32_t ProcessorID);                                                                   // [0xfdff00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector GetCycleBoxProcessor_Max(int32_t ProcessorID);                                                                   // [0xfdfe40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// int32_t AddWindProcessor(FVector& WindVelocity);                                                                         // [0xfdcfd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// int32_t AddVectorFieldForceProcessor(class UVectorFieldStatic* InVectorField, FVector InPosScale, FVector InMoveSpeed, float InForceSize); // [0xfdcb40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// int32_t AddRandomSpawner(int32_t RenderIndex);                                                                           // [0xfdca10] Final|Native|Public|BlueprintCallable 
	// int32_t AddLinearForceProcessor(FVector& Force);                                                                         // [0xfdc780] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// int32_t AddDragProcessor(float DragSize);                                                                                // [0xfdc6b0] Final|Native|Public|BlueprintCallable 
	// int32_t AddCycleBoxProcessor(FVector Min, FVector Max, bool bKillOnZ);                                                   // [0xfdc510] Final|Native|Public|HasDefaults|BlueprintCallable 
	// int32_t AddCustomRandomSetProcessor(float Value, int32_t Index);                                                         // [0xfdc3f0] Final|Native|Public|BlueprintCallable 
	// int32_t AddCustomRandomByVelocityProcessor(FKuroCurveFloat& Curve, int32_t Index);                                       // [0xfdc1d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// int32_t AddCustomRandomByNormalizedAgeProcessor(FKuroCurveFloat& Curve, int32_t Index);                                  // [0xfdbfb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// int32_t AddArraySpawner(int32_t RenderIndex);                                                                            // [0xfdbe70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroRainManager
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000F0) align 8 pad: 0x0000
class UKuroRainManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0030   (0x00C0)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroRenderingAsyncTaskSystem
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000090) align 8 pad: 0x0000
class UKuroRenderingAsyncTaskSystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0038   (0x0058)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroRenderingRuntimeBPPluginBPLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroRenderingRuntimeBPPluginBPLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void WpPEnterCaveOrRoom(class UObject* WorldContextObject, FName& EncloseDataLayer, FName& EnCloseSubDataLayer);         // [0xfe8d40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void WpLeaveCaveOrRoom(class UObject* WorldContextObject, FName& EncloseDataLayer, FName& EnCloseSubDataLayer);          // [0xfe8c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void WpEnterCaveOrRoom(class UObject* WorldContextObject, FName& EncloseDataLayer, FName& EnCloseSubDataLayer, float InAdjustValue, ECaveOrRoomLoadType LoadType, bool bUseCustomCoef); // [0xfe8a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void WpCancelAdjustLoadRange(class UObject* WorldContextObject);                                                         // [0xfe8990] Final|Native|Static|Public|BlueprintCallable 
	// void WpBeginLeaveCaveOrRoom(class UObject* WorldContextObject, FName& EncloseDataLayer, FName& EnCloseSubDataLayer);     // [0xfe8860] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void WpBeginEnterCaveOrRoom(class UObject* WorldContextObject, FName& EncloseDataLayer, FName& EnCloseSubDataLayer);     // [0xfe8730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void WpBeginAdjustLoadRange(class UObject* WorldContextObject, float InAdjustValue, ECaveOrRoomLoadType InLoadType, bool bUseCustomCoef); // [0xfe85e0] Final|Native|Static|Public|BlueprintCallable 
	// void UpdateOrAddCurveFloatValue(class UCurveFloat* Curve, float InTime, float InValue);                                  // [0xfe84e0] Final|Native|Static|Public|BlueprintCallable 
	// void UpdateOrAddCurveColorValue(class UCurveLinearColor* Curve, float InTime, FLinearColor InValue);                     // [0xfe83d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void UpdateFoliageDataLayer(class UObject* WorldContextObject, int32_t InMobileLevel);                                   // [0xfe8310] Final|Native|Static|Public|BlueprintCallable 
	// void UpdateEffectTransformLocation(bool ForceUpdate, class USceneComponent* SceneComponent, FKuroCurveVector& LocationCurve, float Time); // [0xfe8150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void UpdateEffectTransform(bool ForceUpdate, class USceneComponent* SceneComponent, FKuroCurveVector& LocationCurve, FKuroCurveVector& RotationCurve, FKuroCurveVector& ScaleCurve, float Time); // [0xfe7e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FLinearColor UnpackVector2DToLinearColorRGB(FVector2D& Vector2D);                                                        // [0xfe7dd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void UnFreezeWorldLevelStreaming(class UObject* WorldContextObject);                                                     // [0xfe7d50] Final|Native|Static|Public|BlueprintCallable 
	// void StopSomeWeatherBeforeTeleport(class UObject* WorldContextObject);                                                   // [0xfe7cd0] Final|Native|Static|Public|BlueprintCallable 
	// class AActor* SpawnTransientActor(class UObject* WorldContextObject, FName& Name, FName& FolderPath);                    // [0xfe7b50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class AActor* SpawnActorFromClass(class UObject* WorldContextObject, class UClass* ActorClass, FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class APawn* Instigator, bool bTemporaryEditorActor); // [0xfe78d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SortStringArray(TArray<FString>& InStringArray, TEnumAsByte<ESearchCase> SearchCase, bool Descending);              // [0xfe7770] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetWorldPartitionStreamingEnable(class UObject* WorldContextObject, bool bStreamingEnable);                         // [0xfe74d0] Final|Native|Static|Public|BlueprintCallable 
	// void SetWorldPartitionDataLayerState(class UObject* WorldContextObject, FName DataLayerName, bool IsActivate);           // [0xfe73b0] Final|Native|Static|Public|BlueprintCallable 
	// void SetVectorParameterValueRef(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, FName ParameterName, FLinearColor& RefLinearColor); // [0xfe7250] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetUsingInCaveOrIndoorShadow(class UDirectionalLightComponent* LightComp, bool IsUsing, float MobileCSMDistanceOld, float MobileCSMDistanceNew); // [0xfe6d80] Final|Native|Static|Public|BlueprintCallable 
	// void SetupVolumeSize(class AVolume* Volume, FBox& Bounds);                                                               // [0xfe76b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetTransformLocationInArray(TArray<FTransform>& TransformArray, int32_t Index, FVector& Location);                  // [0xfe6c50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetSunLensflareEnabled(class UObject* WorldContextObject, bool bEnabled);                                           // [0xfe6b00] Final|Native|Static|Public|BlueprintCallable 
	// void SetString(class UObject* WorldContextObject, FString Key, FString Value);                                           // [0xfe6960] Final|Native|Static|Public|BlueprintCallable 
	// void SetSceneRenderingState(class UObject* WorldContextObject, bool bSceneVisible);                                      // [0xfe68a0] Final|Native|Static|Public|BlueprintCallable 
	// void SetSceneKuroMainPlayerLocation(class UObject* WorldContextObject, int32_t PlayerIndex);                             // [0xfe67e0] Final|Native|Static|Public|BlueprintCallable 
	// void SetObjectFlags(class UObject* Object, int32_t Flags);                                                               // [0xfe61f0] Final|Native|Static|Public|BlueprintCallable 
	// void SetNiagaraSplineComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USplineComponent* SplineComponent); // [0xfe60d0] Final|Native|Static|Public|BlueprintCallable 
	// void SetNiagaraSkeletalMeshComponentWithoutWarning(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent); // [0xfe5fb0] Final|Native|Static|Public|BlueprintCallable 
	// bool SetLevelEditorCameraLocation(class UObject* WorldContextObject, FVector Position);                                  // [0xfe5d40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void SetIsUsingInCaveOrIndoorShadow(class UObject* WorldContextObject, bool IsUsing, float MobileCSMDistanceInCave, float MobileCSMDistanceOutCave); // [0xfe5be0] Final|Native|Static|Public|BlueprintCallable 
	// void SetIntsDataToRenderTarget(class UTextureRenderTarget2D* TextureRenderTarget, TArray<int32_t> WriteData);            // [0xfe5ac0] Final|Native|Static|Public|BlueprintCallable 
	// void SetInt(class UObject* WorldContextObject, FString Key, int32_t Value);                                              // [0xfe5960] Final|Native|Static|Public|BlueprintCallable 
	// bool SetGlobalGITime(class UObject* WorldContextObject, float Time);                                                     // [0xfe5890] Final|Native|Static|Public|BlueprintCallable 
	// void SetGITransientActorAttachment(class UObject* WorldContextObject, FName IdName, bool bAttachToPlayer, bool bAttachToEditorCamera); // [0xfe5720] Final|Native|Static|Public|BlueprintCallable 
	// void SetFloat(class UObject* WorldContextObject, FString Key, float Value);                                              // [0xfe55b0] Final|Native|Static|Public|BlueprintCallable 
	// void SetCVarInt32(FString CVarKey, int32_t Value);                                                                       // [0xfe4e00] Final|Native|Static|Public|BlueprintCallable 
	// void SetCVarFloat(FString CVarKey, float Value);                                                                         // [0xfe4cd0] Final|Native|Static|Public|BlueprintCallable 
	// void SetClusteredStuffVisible(class UObject* WorldContextObject, bool Visible);                                          // [0xfe4fc0] Final|Native|Static|Public|BlueprintCallable 
	// void SetActorUISceneRendering(class AActor* Actor, bool IsUISceneRendering);                                             // [0xfe4650] Final|Native|Static|Public|BlueprintCallable 
	// void Save(class UObject* WorldContextObject);                                                                            // [0xfe45d0] Final|Native|Static|Public|BlueprintCallable 
	// FLinearColor RGB2HSP(FLinearColor rgb);                                                                                  // [0xfe4190] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void ResumeSomeWeatherAfterTeleport(class UObject* WorldContextObject);                                                  // [0xfe4550] Final|Native|Static|Public|BlueprintCallable 
	// void ResetParticleSystem(class UParticleSystemComponent* ParticleSystemComponent);                                       // [0xfe44d0] Final|Native|Static|Public|BlueprintCallable 
	// void RerunConstructionScripts(class AActor* Actor);                                                                      // [0xfe4450] Final|Native|Static|Public|BlueprintCallable 
	// void RemovePostprocessMaterial(class UObject* WorldContextObject, int32_t Handle);                                       // [0xfe4300] Final|Native|Static|Public|BlueprintCallable 
	// void RemoveAdditionalClusteredStuff(class UObject* WorldContextObject, class UClusteredStuffDataAsset* Asset);           // [0xfe4240] Final|Native|Static|Public|BlueprintCallable 
	// void ReleaseGetSceneColorShotBefore();                                                                                   // [0xfe4220] Final|Native|Static|Public|BlueprintCallable 
	// bool ProjectWorldToScreenWithLevelEditorViewPortFloatRef(class UObject* WorldContextObject, FVector& WorldPosition, float& ResultX, float& ResultY, float& ResultZ, float& ResultW); // [0xfe3f50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool ProjectWorldToScreenWithLevelEditorViewPort(class UObject* WorldContextObject, FVector& WorldPosition, FVector4& Result); // [0xfe3e10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// FVector2D PackLinearColorRGBToVector2D(FLinearColor& Color);                                                             // [0xfe3d70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void MoveCurveFloatValueToOtherTime(class UCurveFloat* Curve, float SrcTime, float TargetTime);                          // [0xfe3c70] Final|Native|Static|Public|BlueprintCallable 
	// void MoveCurveColorValueToOtherTime(class UCurveLinearColor* Curve, float SrcTime, float TargetTime);                    // [0xfe3b70] Final|Native|Static|Public|BlueprintCallable 
	// void MessageNotify_EditorOnly(FText Message, FName Tile);                                                                // [0xfe3a30] Final|Native|Static|Public|BlueprintCallable 
	// bool MaterialHasParameter_EditorOnly(class UMaterialInterface* MaterialInterface, FString ParameterName);                // [0xfe3950] Final|Native|Static|Public|BlueprintCallable 
	// class UActorSequencePlayer* MakeSequencePlayer(class UActorSequenceComponent* SequenceComponent, FMovieSceneSequencePlaybackSettings& PlaybackSettings); // [0xfe3850] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void KuroMarkPackageDirty(class UObject* Object);                                                                        // [0xfe37d0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsWpPlayerInCaveOrRoom(class UObject* WorldContextObject);                                                          // [0xfe3740] Final|Native|Static|Public|BlueprintCallable 
	// bool IsWorldPartitionWorld(class UObject* WorldContextObject);                                                           // [0xfe36b0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsWorldPartitionDataLayerEnable(class UObject* WorldContextObject, FName DataLayerName);                            // [0xfe35d0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsUsingParallaxCorrect();                                                                                           // [0xfe35a0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsUsingNotSeparateCache();                                                                                          // [0xfe3570] Final|Native|Static|Public|BlueprintCallable 
	// bool IsPostprocessMaterialActive(class UObject* WorldContextObject, int32_t Handle);                                     // [0xfe34a0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsPositionInCaveOrRoom(class UObject* WorldContextObject, FVector& InPoisition);                                    // [0xfe33d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool IsParticleComplete(class UParticleSystemComponent* ParticleSystemComponent);                                        // [0xfe3340] Final|Native|Static|Public|BlueprintCallable 
	// bool IsNiagaraComplete(class UNiagaraComponent* NiagaraComponent);                                                       // [0xfe32b0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsEditorOnlyActor(class AActor* Actor);                                                                             // [0xfe3220] Final|Native|Static|Public|BlueprintCallable 
	// bool IsDistanceCull(class UObject* WorldContextObject, class UNiagaraEffectType* EffectType, FVector& Location);         // [0xfe3100] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool IsCurrentPlatformPC(class AActor* Actor);                                                                           // [0xfe3070] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FLinearColor HSP2RGB(FLinearColor hsp);                                                                                  // [0xfe2dd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// bool HasKey(class UObject* WorldContextObject, FString Key);                                                             // [0xfe2f20] Final|Native|Static|Public|BlueprintCallable 
	// void HasAnyObjectFlags(class UObject* Object, int32_t Flags);                                                            // [0xfe2e60] Final|Native|Static|Public|BlueprintCallable 
	// void HasAllObjectFlags(class UObject* Object, int32_t Flags);                                                            // [0xfe2e60] Final|Native|Static|Public|BlueprintCallable 
	// void GetWpWorldBound(class UObject* WorldContextObject, FVector& BoundMin, FVector& BoundMax);                           // [0xfe2cb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// BP_EWorldType GetWorldType(class UObject* WorldContextObject);                                                           // [0xfe2c20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class AWorldSettings* GetWorldSetting(class UObject* WorldContextObject);                                                // [0xfe2b90] Final|Native|Static|Public|BlueprintCallable 
	// void GetWorldPartitionDataLayerNameByLabel(class UObject* WorldContextObject, FName& InDataLayerLabel, FName& OutDataLayerNamme); // [0xfe2a60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// TArray<FString> GetWorldPartitionAllDataLayerNames(class UObject* WorldContextObject);                                   // [0xfe2940] Final|Native|Static|Public|BlueprintCallable 
	// class UWorldPartition* GetWorldPartition(class UObject* WorldContextObject);                                             // [0xfe28b0] Final|Native|Static|Public|BlueprintCallable 
	// KuroFeatureLevel GetWorldFeatureLevel(class UObject* WorldContextObject);                                                // [0xfe2820] Final|Native|Static|Public|BlueprintCallable 
	// class UWorld* GetWorld(class UObject* WorldContextObject);                                                               // [0xfe2790] Final|Native|Static|Public|BlueprintCallable 
	// class UObject* GetWeatherDataRef(class UObject* WorldContextObject, FName Identifier);                                   // [0xfe26a0] Final|Native|Static|Public|BlueprintCallable 
	// void GetVectorParameterValueRefRGBA(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, FName ParameterName, float& RefLinearColorR, float& RefLinearColorG, float& RefLinearColorB, float& RefLinearColorA); // [0xfe2440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetVectorParameterValueRef(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, FName ParameterName, FLinearColor& RefLinearColor); // [0xfe22e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class UWorldSubsystem* GetSubsystem(class UObject* WorldContextObject, class UClass* WorldSubsystemClass);               // [0xfe2210] Final|Native|Static|Public|BlueprintCallable 
	// FString GetString(class UObject* WorldContextObject, FString Key, FString DefaultValue);                                 // [0xfe2020] Final|Native|Static|Public|BlueprintCallable 
	// bool GetStreamingCells(class UObject* WorldContextObject, FWorldPartitionStreamingQuerySource& QuerySource, TArray<FWorldPartitionRuntimeSpatialHashCell>& OutCells); // [0xfe1e80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetSpaceStateByPosition(class UObject* WorldContextObject, FVector& InPoisition, ECaveOrRoom& OutSpaceType, FString& OutEnClosetDataLayer, FString& OutEnCloseSubDataLayer); // [0xfe1c90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// FString GetSkeletalMaterialSlotName(class USkeletalMesh* Skel, int32_t MaterialIndex);                                   // [0xfe1b80] Final|Native|Static|Public|BlueprintCallable 
	// class UMaterialInterface* GetSkeletalMaterialInterface(class USkeletalMesh* Skel, int32_t MaterialIndex);                // [0xfe1ab0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetSkeletalMaterialCount(class USkeletalMesh* Skel);                                                             // [0xfe1a20] Final|Native|Static|Public|BlueprintCallable 
	// class AActor* GetSceneInteractionLevelActor(class ULevel* InLevel);                                                      // [0xfe1990] Final|Native|Static|Public|BlueprintCallable 
	// void GetSceneColorShotNow();                                                                                             // [0xfe1970] Final|Native|Static|Public|BlueprintCallable 
	// void GetSceneColorContainLGUIShotNow();                                                                                  // [0xfe1950] Final|Native|Static|Public|BlueprintCallable 
	// FString GetRHIVendorName();                                                                                              // [0xfe18d0] Final|Native|Static|Public|BlueprintCallable 
	// FString GetRHIName();                                                                                                    // [0xfe1850] Final|Native|Static|Public|BlueprintCallable 
	// FString GetRHIDriverVersion();                                                                                           // [0xfe17d0] Final|Native|Static|Public|BlueprintCallable 
	// FString GetRHIDeviceName();                                                                                              // [0xfe1750] Final|Native|Static|Public|BlueprintCallable 
	// bool GetPostProcessGIDataNames(class UObject* WorldContextObject, FVector WorldPosition, TArray<FString>& OutDANames);   // [0xfe15f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool GetPostProcessGIDataDebugNames(class UObject* WorldContextObject, TArray<FName>& OutDANames);                       // [0xfe1500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetPostProcessGIDataDebugInfo(class UObject* WorldContextObject, FVector WorldPosition, TArray<FPostprocessGIDebugInfo>& OutDAResult, TArray<FPostprocessGIDebugInfo>& OutOverrideResult); // [0xfe1200] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// int32_t GetPhysicalGBRam();                                                                                              // [0xfe1140] Final|Native|Static|Public|BlueprintCallable 
	// void GetPcLightCullParameters(class ULightComponent* LightComponent, float& LightMinDistance, float& LightMaxDistance, float& LightMinFade, float& LightMaxFade); // [0xfe0f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// int32_t GetOverlappingBoxCountForAllFoliageActors(class UObject* WorldContextObject, class UFoliageType* FoliageType, FBox& Box, int32_t Max); // [0xfe0e10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// int32_t GetObjectMaskedFlags(class UObject* Object, int32_t Mask);                                                       // [0xfe0d40] Final|Native|Static|Public|BlueprintCallable 
	// void GetNiagaraParticleCount(class UNiagaraComponent* NiagaraComponent, int32_t& ActiveEmitters, int32_t& ActiveParticles); // [0xfe0c20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetLevelEditorViewPortSize(class UObject* WorldContextObject, FVector2D& viewPortSize);                             // [0xfe0b50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool GetLevelEditorCameraLocationAndForward(class UObject* WorldContextObject, FVector& Position, FRotator& Rotation);   // [0xfe0a20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// TArray<AActor*> GetLevelActors(class ULevel* InLevel);                                                                   // [0xfe0950] Final|Native|Static|Public|BlueprintCallable 
	// class ULevel* GetLevel(class UWorld* World);                                                                             // [0xfe08c0] Final|Native|Static|Public|BlueprintCallable 
	// class UKuroLandscapeParametersData* GetKuroLandscapeParametersDataAsset();                                               // [0xfe0890] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetInt(class UObject* WorldContextObject, FString Key, int32_t DefaultValue);                                    // [0xfe06f0] Final|Native|Static|Public|BlueprintCallable 
	// class AActor* GetGlobalGIActor(class UObject* WorldContextObject);                                                       // [0xfe0660] Final|Native|Static|Public|BlueprintCallable 
	// class AActor* GetGITransientActor(class UObject* WorldContextObject, FName IdName);                                      // [0xfe04f0] Final|Native|Static|Public|BlueprintCallable 
	// FVector2D GetGameViewportSize();                                                                                         // [0xfe0620] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// FVector2D GetGameResolution();                                                                                           // [0xfe05e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// float GetFloatGromGroup(FKuroCharMaterialControllerFloatGroup& Target, float Factor, int32_t Type);                      // [0xfe0380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// float GetFloat(class UObject* WorldContextObject, FString Key, float DefaultValue);                                      // [0xfe0200] Final|Native|Static|Public|BlueprintCallable 
	// FString GetDeviceProfileDeviceType();                                                                                    // [0xfe00a0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetDeviceProfileDeviceScore();                                                                                   // [0xfe0070] Final|Native|Static|Public|BlueprintCallable 
	// FString GetDeviceProfileBaseProfileName();                                                                               // [0xfdfff0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetDeviceHardwareLevel();                                                                                        // [0xfdffc0] Final|Native|Static|Public|BlueprintCallable 
	// float GetCVarFloat(FString CVarKey);                                                                                     // [0xfdf560] Final|Native|Static|Public|BlueprintCallable 
	// class UPhysicalMaterial* GetComponentPhysicalMaterial(class UPrimitiveComponent* Component);                             // [0xfdfdb0] Final|Native|Static|Public|BlueprintCallable 
	// FLinearColor GetColorFromGroup(FKuroCharMaterialControllerColorGroup& Target, float Factor, int32_t Type);               // [0xfdfc20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// int32_t GetCharacterSectionMaterialIndex(class USkeletalMesh* SkeletalMesh, int32_t SectionIndex);                       // [0xfdfb50] Final|Native|Static|Public|BlueprintCallable 
	// TArray<int32_t> GetCharacterSectionInfo(class USkeletalMesh* Mesh, int32_t SectionIndex);                                // [0xfdfa40] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetCharacterSectionCount(class USkeletalMesh* Mesh);                                                             // [0xfdf9b0] Final|Native|Static|Public|BlueprintCallable 
	// bool GetCaveOrRoomState(class UObject* WorldContextObject, FString& EnClosetDataLayer, FString& EnCloseSubDataLayer, ECaveOrRoomLoadType& OutLoadType, float& OutLoadCoef); // [0xfdf7c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetCacheCameraInfo(class APlayerCameraManager* Owner, FMinimalViewInfo& Inout);                                     // [0xfdf650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FQuat GetBoneDirection(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                             // [0xfdf470] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// TArray<FAssetData> GetAssetsByPath(FName PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets);                   // [0xfdf210] Final|Native|Static|Public|BlueprintCallable 
	// FVector2D GetAndroidRawResolution();                                                                                     // [0xfdf1d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// float GetAndAddCurveFloatSampleTask(int64_t LastFrameHandle, FKuroCurveFloat& Curve, float Time, float Default, int64_t& OutHandle); // [0xfdefb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetActorsInLevel(class ULevel* InLevel, class UClass* ActorClass, TArray<AActor*>& OutActors);                      // [0xfdee90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class AActor* GetActorOfClass(class UObject* WorldContextObject, class UClass* ActorClass);                              // [0xfdedc0] Final|Native|Static|Public|BlueprintCallable 
	// void GetActorLocationRefXYZ(class AActor* Actor, float& X, float& Y, float& Z);                                          // [0xfdec50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetActorLocationRef(class AActor* Actor, FVector& RefLocation);                                                     // [0xfdeb90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void GetActorForwardVectorRefXYZ(class AActor* Actor, float& X, float& Y, float& Z);                                     // [0xfdea20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetActorForwardVectorRef(class AActor* Actor, FVector& RefForwardVector);                                           // [0xfde960] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void FreezeWorldLevelStreaming(class UObject* WorldContextObject);                                                       // [0xfde8e0] Final|Native|Static|Public|BlueprintCallable 
	// void DestroyGITransientActor(class UObject* WorldContextObject, FName IdName);                                           // [0xfde800] Final|Native|Static|Public|BlueprintCallable 
	// void DeleteKey(class UObject* WorldContextObject, FString Key);                                                          // [0xfde6e0] Final|Native|Static|Public|BlueprintCallable 
	// void DeleteAll(class UObject* WorldContextObject);                                                                       // [0xfde660] Final|Native|Static|Public|BlueprintCallable 
	// class AActor* CreateGITransientActor(class UObject* WorldContextObject, FName IdName, bool bAttachToPlayer, bool bAttachToEditorCamera, FName EditorFolderPath); // [0xfde4a0] Final|Native|Static|Public|BlueprintCallable 
	// void CopyKuroCharLinearColorGroup(FKuroCharMaterialControllerColorGroup& Target, FKuroCurveLinearColor& Start, FKuroCurveLinearColor& Loop, FKuroCurveLinearColor& End); // [0xfde130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CopyKuroCharFloatParameter(FKuroCharMaterialControllerFloatParameter& Target, FName& ParameterName, FKuroCurveFloat& ParameterValue); // [0xfddf40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CopyKuroCharFloatGroupArray(TArray<FKuroCharMaterialControllerFloatGroup> Target, TArray<FKuroCurveFloat> Start, TArray<FKuroCurveFloat> Loop, TArray<FKuroCurveFloat> End); // [0xfdda20] Final|Native|Static|Public|BlueprintCallable 
	// void CopyKuroCharFloatGroup(FKuroCharMaterialControllerFloatGroup& Target, FKuroCurveFloat& Start, FKuroCurveFloat& Loop, FKuroCurveFloat& End); // [0xfdd750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CopyKuroCharColorParameter(FKuroCharMaterialControllerColorParameter& Target, FName& ParameterName, FKuroCurveLinearColor& ParameterValue); // [0xfdd550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CopyKuroCharColorGroupArray(TArray<FKuroCharMaterialControllerColorGroup> Target, TArray<FKuroCurveLinearColor> Start, TArray<FKuroCurveLinearColor> Loop, TArray<FKuroCurveLinearColor> End); // [0xfdd210] Final|Native|Static|Public|BlueprintCallable 
	// void ClipboardPaste_EditorOnly(FString& Dest);                                                                           // [0xfdd170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void ClipboardCopy_EditorOnly(FString str);                                                                              // [0xf75540] Final|Native|Static|Public|BlueprintCallable 
	// void ClearObjectFlags(class UObject* Object, int32_t Flags);                                                             // [0xfdd0b0] Final|Native|Static|Public|BlueprintCallable 
	// bool AddWeatherDataType(class UObject* WorldContextObject, FName Identifier, class UClass* ClassType);                   // [0xfdcea0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t AddPostprocessMaterial(class UObject* WorldContextObject, class UMaterialInterface* Material, float Priority);   // [0xfdc860] Final|Native|Static|Public|BlueprintCallable 
	// void AddAdditionalClusteredStuff(class UObject* WorldContextObject, class UClusteredStuffDataAsset* Asset);              // [0xfdbdb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroRuntimeTransientActor
/// Size: 0x0010 (16 bytes) (0x0002A8 - 0x0002B8) align 8 pad: 0x0000
class AKuroRuntimeTransientActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x02A8   (0x0010)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroSaveGame
/// Size: 0x00F0 (240 bytes) (0x000030 - 0x000120) align 8 pad: 0x0000
class UKuroSaveGame : public USaveGame
{ 
public:
	SDK_UNDEFINED(80,636) /* TMap<FString, int32_t> */ __um(IntMap);                                               // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,637) /* TMap<FString, float> */   __um(FloatMap);                                             // 0x0080   (0x0050)  
	SDK_UNDEFINED(80,638) /* TMap<FString, FString> */ __um(StringMap);                                            // 0x00D0   (0x0050)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroSceneEffectActor
/// Size: 0x0008 (8 bytes) (0x0002B0 - 0x0002B8) align 8 pad: 0x0000
class AKuroSceneEffectActor : public AKuroEffectActor
{ 
public:
	bool                                               bIsSceneEffectHidden;                                       // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02B1   (0x0007)  MISSED
	// void OnReceiveShowSceneEffectActor();                                                                                    // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnReceiveHideSceneEffectActor();                                                                                    // [0x25a7960] Event|Protected|BlueprintEvent 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroSceneInteractionActor
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class AKuroSceneInteractionActor : public AActor
{ 
public:
	// void OnSetState(EKuroSceneInteractionState TargetState, bool NeedTransition);                                            // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroSceneInteractionInfo
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000078) align 8 pad: 0x0000
class UKuroSceneInteractionInfo : public UObject
{ 
public:
	FVector                                            Location;                                                   // 0x0030   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x003C   (0x000C)  
	FString                                            LevelName;                                                  // 0x0048   (0x0010)  
	int32_t                                            HandleId;                                                   // 0x0058   (0x0004)  
	EKuroSceneInteractionState                         CurrentState;                                               // 0x005C   (0x0001)  
	bool                                               LoadingLevelComplete;                                       // 0x005D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x005E   (0x0002)  MISSED
	class AKuroSceneInteractionActor*                  InteractionActor;                                           // 0x0060   (0x0008)  
	class ULevelStreamingDynamic*                      LevelStreaming;                                             // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0070   (0x0008)  MISSED
	// void OnLevelShown();                                                                                                     // [0xfece90] Final|Native|Private 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroSceneInteractionActorSystem
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000098) align 8 pad: 0x0000
class UKuroSceneInteractionActorSystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0038   (0x0010)  MISSED
	SDK_UNDEFINED(80,639) /* TMap<int32_t, UKuroSceneInteractionInfo*> */ __um(AllSceneInteractionInfos);          // 0x0048   (0x0050)  
	// bool SwitchToState(int32_t HandleId, EKuroSceneInteractionState TargetState, bool NeedTransition);                       // [0xfed420] Final|Native|Public|BlueprintCallable 
	// void SetSequenceWithTargetLevelActor(class ALevelSequenceActor* LevelSequenceActor, class ULevelSequence* InSequence, class AActor* TargetLevelActor); // [0xfed1d0] Final|Native|Public|BlueprintCallable 
	// EKuroSceneInteractionState GetCurrentState(int32_t HandleId);                                                            // [0xfec420] Final|Native|Public|BlueprintCallable 
	// bool DestroySceneInteractionLevel(int32_t HandleId);                                                                     // [0xfec350] Final|Native|Public|BlueprintCallable 
	// int32_t CreateSceneInteractionLevel(FString InLevelName, EKuroSceneInteractionState InitState, FVector Location, FRotator Rotation); // [0xfec1a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void BindActorToLevelSequenceActor(class AActor* ActorToBind, class ALevelSequenceActor* LevelSequenceActor, FString BindingName); // [0xfec070] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroRainActorSpawnProperties
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FKuroRainActorSpawnProperties
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
	float                                              SpawnRate;                                                  // 0x0010   (0x0004)  
	float                                              SpawnInnerRadius;                                           // 0x0014   (0x0004)  
	float                                              SpawnOuterRadius;                                           // 0x0018   (0x0004)  
	float                                              LifeTimeMin;                                                // 0x001C   (0x0004)  
	float                                              LifeTimeMax;                                                // 0x0020   (0x0004)  
	FVector                                            VelocityMin;                                                // 0x0024   (0x000C)  
	FVector                                            VelocityMax;                                                // 0x0030   (0x000C)  
	float                                              ScaleMin;                                                   // 0x003C   (0x0004)  
	float                                              ScaleMax;                                                   // 0x0040   (0x0004)  
	float                                              BaseMass;                                                   // 0x0044   (0x0004)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroSceneRainEmitterConfig
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000090) align 8 pad: 0x0000
class UKuroSceneRainEmitterConfig : public UPrimaryDataAsset
{ 
public:
	TArray<FKuroRainActorSpawnProperties>              SpawnProperties;                                            // 0x0038   (0x0010)  
	FVector                                            CycleBoxExtent;                                             // 0x0048   (0x000C)  
	float                                              DragSize;                                                   // 0x0054   (0x0004)  
	float                                              Gravity;                                                    // 0x0058   (0x0004)  
	FVector                                            WindSize;                                                   // 0x005C   (0x000C)  
	class UVectorFieldStatic*                          VectorField;                                                // 0x0068   (0x0008)  
	FVector                                            VectorFieldPosScale;                                        // 0x0070   (0x000C)  
	FVector                                            VectorFieldMoveSpeed;                                       // 0x007C   (0x000C)  
	float                                              VectorFieldForceSize;                                       // 0x0088   (0x0004)  
	float                                              CenterBiasByWind;                                           // 0x008C   (0x0004)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroSceneRainActor
/// Size: 0x01C0 (448 bytes) (0x0002B0 - 0x000470) align 16 pad: 0x0000
class AKuroSceneRainActor : public AKuroEffectActor
{ 
public:
	class UKuroSceneRainEmitterConfig*                 RainConfig_Front;                                           // 0x02B0   (0x0008)  
	class UKuroSceneRainEmitterConfig*                 RainConfig_Back;                                            // 0x02B8   (0x0008)  
	class UKuroRainComponent*                          RainComponent_Front;                                        // 0x02C0   (0x0008)  
	class UKuroRainComponent*                          RainComponent_Back;                                         // 0x02C8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x1A0];                                     // 0x02D0   (0x01A0)  MISSED
	// void StopRain();                                                                                                         // [0xfed400] Final|Native|Public|BlueprintCallable 
	// void StartRain();                                                                                                        // [0xfed2e0] Final|Native|Public|BlueprintCallable 
	// void SetCurrentRain(float InDensity, float InGravity, FVector InWindSpeed);                                              // [0xfed020] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroSplitTextureStreamerSettings
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
class UKuroSplitTextureStreamerSettings : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(16,640) /* TArray<TWeakObjectPtr<UTexture2D*>> */ __um(SplitTextureReferences);                  // 0x0038   (0x0010)  
	int32_t                                            SideCellNum;                                                // 0x0048   (0x0004)  
	int32_t                                            SizePerCell;                                                // 0x004C   (0x0004)  
	FVector2D                                          StartWorldPosition;                                         // 0x0050   (0x0008)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.SplitTextureStreamerDebugActor
/// Size: 0x0070 (112 bytes) (0x0002A8 - 0x000318) align 8 pad: 0x0000
class ASplitTextureStreamerDebugActor : public AActor
{ 
public:
	class USceneComponent*                             SceneComponent;                                             // 0x02A8   (0x0008)  
	class UKuroSplitTextureStreamerSettings*           StreamerSettings;                                           // 0x02B0   (0x0008)  
	int32_t                                            LoadNumPerSide;                                             // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02BC   (0x0004)  MISSED
	TArray<class UObject*>                             LoadedTextures;                                             // 0x02C0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x02D0   (0x0048)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.SunLensFlareConfig
/// Size: 0x0030 (48 bytes) (0x000038 - 0x000068) align 8 pad: 0x0000
class USunLensFlareConfig : public UPrimaryDataAsset
{ 
public:
	class UStaticMesh*                                 StaticMeshGhost;                                            // 0x0038   (0x0008)  
	class UMaterialInterface*                          MaterialGhost;                                              // 0x0040   (0x0008)  
	class UStaticMesh*                                 StaticMeshHalo;                                             // 0x0048   (0x0008)  
	class UMaterialInterface*                          MaterialHalo;                                               // 0x0050   (0x0008)  
	class UStaticMesh*                                 StaticMeshGlare;                                            // 0x0058   (0x0008)  
	class UMaterialInterface*                          MaterialGlare;                                              // 0x0060   (0x0008)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroSuperFarFogLayer
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FKuroSuperFarFogLayer
{ 
	float                                              Distance;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0008   (0x0008)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0010   (0x0010)  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroSuperFarFogConfig
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
class UKuroSuperFarFogConfig : public UPrimaryDataAsset
{ 
public:
	TArray<FKuroSuperFarFogLayer>                      Layers;                                                     // 0x0038   (0x0010)  
	float                                              MinDistance;                                                // 0x0048   (0x0004)  
	float                                              MaxDistance;                                                // 0x004C   (0x0004)  
	float                                              MobileDistanceScale;                                        // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroSuperFarFog
/// Size: 0x0020 (32 bytes) (0x0002A8 - 0x0002C8) align 8 pad: 0x0000
class AKuroSuperFarFog : public AActor
{ 
public:
	class UStaticMeshComponent*                        FogMeshComponent;                                           // 0x02A8   (0x0008)  
	class UKuroSuperFarFogConfig*                      Config;                                                     // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x02B8   (0x0010)  MISSED
	// void Update(float DeltaSeconds);                                                                                         // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroTrailDrawerComponent
/// Size: 0x0008 (8 bytes) (0x000218 - 0x000220) align 16 pad: 0x0000
class UKuroTrailDrawerComponent : public USceneComponent
{ 
public:
	int32_t                                            KuroIndex;                                                  // 0x0218   (0x0004)  
	float                                              ShouldTick;                                                 // 0x021C   (0x0004)  
	// void OnDrawerTick(float DeltaTime);                                                                                      // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnDrawerEnd(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                             // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnDrawerBegin();                                                                                                    // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroTrailSensorComponent
/// Size: 0x0018 (24 bytes) (0x000218 - 0x000230) align 16 pad: 0x0000
class UKuroTrailSensorComponent : public USceneComponent
{ 
public:
	float                                              TickTimeInterval;                                           // 0x0218   (0x0004)  
	int32_t                                            KuroIndex;                                                  // 0x021C   (0x0004)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0220   (0x0010)  MISSED
	// void OnSensorTick(float DeltaTime);                                                                                      // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnSensorEnd(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                             // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnSensorBegin();                                                                                                    // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroTrailSystem
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000088) align 8 pad: 0x0000
class UKuroTrailSystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	bool                                               bTickEnabled : 1;                                           // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x47];                                      // 0x0041   (0x0047)  MISSED
	// TArray<UKuroTrailDrawerComponent*> GetTrailDrawerInRadius(FVector InWorldPosition, float Radius);                        // [0xfec660] Final|Native|Public|HasDefaults|BlueprintCallable 
	// class UKuroTrailSystem* GetKuroTrailSystem(class UWorld* InWorld);                                                       // [0xfec540] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroUiSceneRootActor
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class AKuroUiSceneRootActor : public AActor
{ 
public:
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroUiSceneInfo
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000080) align 8 pad: 0x0000
class UKuroUiSceneInfo : public UObject
{ 
public:
	FVector                                            Location;                                                   // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            LevelName;                                                  // 0x0040   (0x0010)  
	FString                                            OptionalLevelName;                                          // 0x0050   (0x0010)  
	bool                                               IsLoaded;                                                   // 0x0060   (0x0001)  
	bool                                               IsVisible;                                                  // 0x0061   (0x0001)  
	EKuroUiSceneLoadingState                           CurrentState;                                               // 0x0062   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0063   (0x0005)  MISSED
	class AKuroUiSceneRootActor*                       RootActor;                                                  // 0x0068   (0x0008)  
	class ULevelStreamingDynamic*                      LevelStreaming;                                             // 0x0070   (0x0008)  
	class UWorld*                                      World;                                                      // 0x0078   (0x0008)  
	// void SetLevelVisible(bool InIsVisible);                                                                                  // [0xfed140] Final|Native|Public  
	// void OnLevelVisible();                                                                                                   // [0xfeceb0] Final|Native|Public  
	// void OnLevelLoad();                                                                                                      // [0xfece70] Final|Native|Public  
	// void OnLevelInVisible();                                                                                                 // [0xfece50] Final|Native|Public  
	// void Init(class ULevelStreamingDynamic* InLevelStreaming, FString& InLevelName, FString& OptionalName, FVector& InLocation, class UWorld* InWorld); // [0xfecb70] Final|Native|Public|HasOutParms|HasDefaults 
	// void Destroy();                                                                                                          // [0xfec330] Final|Native|Public  
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroUiSceneSystem
/// Size: 0x00C0 (192 bytes) (0x000038 - 0x0000F8) align 8 pad: 0x0000
class UKuroUiSceneSystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	SDK_UNDEFINED(20,641) /* FDelegateProperty */      __um(OnKuroUiSceneLoadComplete);                            // 0x0040   (0x0014)  
	SDK_UNDEFINED(20,642) /* FDelegateProperty */      __um(OnKuroUiSceneUnLoadComplete);                          // 0x0054   (0x0014)  
	SDK_UNDEFINED(20,643) /* FDelegateProperty */      __um(OnKuroUiSceneVisibleComplete);                         // 0x0068   (0x0014)  
	SDK_UNDEFINED(20,644) /* FDelegateProperty */      __um(OnKuroUiSceneInVisibleComplete);                       // 0x007C   (0x0014)  
	SDK_UNDEFINED(80,645) /* TMap<FString, UKuroUiSceneInfo*> */ __um(AllStreamingLevelInfo);                      // 0x0090   (0x0050)  
	FString                                            CurrentShowScenePath;                                       // 0x00E0   (0x0010)  
	int32_t                                            LevelLoadingCount;                                          // 0x00F0   (0x0004)  
	int32_t                                            LastGlobalGiActorId;                                        // 0x00F4   (0x0004)  
	// bool UnloadUiScene(FString ScenePath);                                                                                   // [0xfed530] Final|Native|Public|BlueprintCallable 
	// bool StartUiSceneRendering(FString ScenePath);                                                                           // [0xfed300] Final|Native|Public|BlueprintCallable 
	// void PreloadUiScene(FString ScenePath, FVector WorldPositionOffset);                                                     // [0xfeced0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void InvokeSceneVisible(FString ScenePath);                                                                              // [0xfecd60] Final|Native|Public|BlueprintCallable 
	// FVector GetUiSceneWorldPositionOffset(FString ScenePath);                                                                // [0xfeca60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// TMap<FString, EKuroUiSceneLoadingState> GetUiSceneStates();                                                              // [0xfec990] Final|Native|Public|BlueprintCallable 
	// class AKuroUiSceneRootActor* GetUiSceneRootActor(FString ScenePath);                                                     // [0xfec890] Final|Native|Public|BlueprintCallable 
	// EKuroUiSceneLoadingState GetUiSceneLoadingState(FString ScenePath);                                                      // [0xfec790] Final|Native|Public|BlueprintCallable 
	// class UKuroUiSceneSystem* GetKuroUiSceneSystem(class UWorld* InWorld);                                                   // [0xfec5d0] Final|Native|Static|Public|BlueprintCallable 
	// FString GetCurrentUiSceneRenderingSceneName();                                                                           // [0xfec4c0] Final|Native|Public|BlueprintCallable 
	// bool EndUiSceneRendering();                                                                                              // [0xfec3f0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroLandscapeInfo
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 4 pad: 0x0000
struct FKuroLandscapeInfo
{ 
	int32_t                                            TotalTileNumber;                                            // 0x0000   (0x0004)  
	int32_t                                            TotalComponentNumber;                                       // 0x0004   (0x0004)  
	int32_t                                            TotalSectionNumber;                                         // 0x0008   (0x0004)  
	int32_t                                            TileRow;                                                    // 0x000C   (0x0004)  
	int32_t                                            TileCol;                                                    // 0x0010   (0x0004)  
	int32_t                                            ComponentNumberPerTile;                                     // 0x0014   (0x0004)  
	int32_t                                            SectionNumberPerComponent;                                  // 0x0018   (0x0004)  
	FIntPoint                                          PerSectionResolution;                                       // 0x001C   (0x0008)  
	FIntPoint                                          PerComponentResolution;                                     // 0x0024   (0x0008)  
	FIntPoint                                          PerTileResolution;                                          // 0x002C   (0x0008)  
	FIntPoint                                          TotalResolution;                                            // 0x0034   (0x0008)  
	FBox                                               Bounds;                                                     // 0x003C   (0x001C)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroStreamingLevelInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 pad: 0x0000
struct FKuroStreamingLevelInfo
{ 
	FName                                              PackageName;                                                // 0x0000   (0x000C)  
	FName                                              LayerName;                                                  // 0x000C   (0x000C)  
	bool                                               bEnableDistance;                                            // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            ShowDistance;                                               // 0x001C   (0x0004)  
	bool                                               bTileBaseOnLandscape;                                       // 0x0020   (0x0001)  
	bool                                               bIsTile;                                                    // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0022   (0x0002)  MISSED
	FIntPoint                                          TileXY;                                                     // 0x0024   (0x0008)  
	bool                                               bUseHLOD;                                                   // 0x002C   (0x0001)  
	bool                                               bBakeShadow;                                                // 0x002D   (0x0001)  
	bool                                               bDynamicShadow;                                             // 0x002E   (0x0001)  
	unsigned char                                      UnknownData02_7[0x1];                                       // 0x002F   (0x0001)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroWorldInfo
/// Size: 0x0070 (112 bytes) (0x0002A8 - 0x000318) align 8 pad: 0x0000
class AKuroWorldInfo : public AInfo
{ 
public:
	FKuroLandscapeInfo                                 M_LandscapeInfo;                                            // 0x02A8   (0x0058)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0300   (0x0008)  MISSED
	TArray<FKuroStreamingLevelInfo>                    M_StreamingLevelInfoList;                                   // 0x0308   (0x0010)  
	// int32_t GetSLInfo(FName& PackageName, FKuroStreamingLevelInfo& LandscapeInfo);                                           // [0xfee840] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void GetLandscapeInfo(FKuroLandscapeInfo& LandscapeInfo);                                                                // [0xfee7a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// class AKuroWorldInfo* BP_GetInstance(class UObject* WorldContextObject, bool AutoCreate);                                // [0xfee5a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroWorldPartitionPreviewManager
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroWorldPartitionPreviewManager : public UObject
{ 
public:
	// void SetPreviewMobile(bool PreviewMobile);                                                                               // [0xfee950] Final|Native|Public|BlueprintCallable 
	// void RemovePreviewActorType(class UClass* Class);                                                                        // [0xbf3a00] Final|Native|Public|BlueprintCallable 
	// void AddPreviewActorType(class UClass* Class);                                                                           // [0xbf3a00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.KuroWuYinQuActorBase
/// Size: 0x0010 (16 bytes) (0x0002A8 - 0x0002B8) align 8 pad: 0x0000
class AKuroWuYinQuActorBase : public AActor
{ 
public:
	FName                                              Key;                                                        // 0x02A8   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02B4   (0x0004)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.LensflareSamplerActor
/// Size: 0x0048 (72 bytes) (0x0002A8 - 0x0002F0) align 8 pad: 0x0000
class ALensflareSamplerActor : public AActor
{ 
public:
	float                                              VisibleRadius;                                              // 0x02A8   (0x0004)  
	float                                              OccludeRadius;                                              // 0x02AC   (0x0004)  
	float                                              BrightnessThreshold;                                        // 0x02B0   (0x0004)  
	float                                              BrightnessThresholdRange;                                   // 0x02B4   (0x0004)  
	class USunLensFlareConfig*                         Config;                                                     // 0x02B8   (0x0008)  
	int32_t                                            CurrentSceneSampleIndex;                                    // 0x02C0   (0x0004)  
	float                                              CurrentDistanceFactor;                                      // 0x02C4   (0x0004)  
	class USceneComponent*                             SceneComponent;                                             // 0x02C8   (0x0008)  
	class UStaticMeshComponent*                        LensflareGhostComponent;                                    // 0x02D0   (0x0008)  
	class UStaticMeshComponent*                        LensflareGlareComponent;                                    // 0x02D8   (0x0008)  
	class UStaticMeshComponent*                        LensflareHaloComponent;                                     // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x02E8   (0x0008)  MISSED
};

/// Class /Script/KuroRenderingRuntimeBPPlugin.ThunderGenerator
/// Size: 0x0238 (568 bytes) (0x0002A8 - 0x0004E0) align 8 pad: 0x0000
class AThunderGenerator : public AActor
{ 
public:
	float                                              PointLightHeight;                                           // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02AC   (0x0004)  MISSED
	class UKuroWeatherDataAsset*                       WeatherDataAsset;                                           // 0x02B0   (0x0008)  
	float                                              TraceHeightMin;                                             // 0x02B8   (0x0004)  
	float                                              TraceHeightMax;                                             // 0x02BC   (0x0004)  
	float                                              DistributionFactor;                                         // 0x02C0   (0x0004)  
	float                                              GenerateIntervalMin;                                        // 0x02C4   (0x0004)  
	float                                              GenerateIntervalMax;                                        // 0x02C8   (0x0004)  
	float                                              GenerateChance;                                             // 0x02CC   (0x0004)  
	float                                              ThunderPlayInnerRange;                                      // 0x02D0   (0x0004)  
	float                                              ThunderPlayRange;                                           // 0x02D4   (0x0004)  
	FKuroCurveFloat                                    PointLightCurve;                                            // 0x02D8   (0x0090)  
	FKuroCurveFloat                                    PointLightRadiusCurve;                                      // 0x0368   (0x0090)  
	FKuroCurveFloat                                    PostProcessCurve;                                           // 0x03F8   (0x0090)  
	class UNiagaraSystem*                              NiagaraSystem;                                              // 0x0488   (0x0008)  
	class UNiagaraComponent*                           NiagaraComponent;                                           // 0x0490   (0x0008)  
	class UPointLightComponent*                        PointLightComponent;                                        // 0x0498   (0x0008)  
	class UKuroPostProcessComponent*                   KuroPostProcessComponent;                                   // 0x04A0   (0x0008)  
	class AKuroGlobalGI*                               CachedGlobalGI;                                             // 0x04A8   (0x0008)  
	float                                              ThunderAge;                                                 // 0x04B0   (0x0004)  
	float                                              AttackAge;                                                  // 0x04B4   (0x0004)  
	bool                                               bThunderActive;                                             // 0x04B8   (0x0001)  
	TEnumAsByte<EKuroThunderType>                      CurrentThunderType;                                         // 0x04B9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x04BA   (0x0002)  MISSED
	float                                              ThunderAttackChance;                                        // 0x04BC   (0x0004)  
	float                                              ThunderCloudIntensity;                                      // 0x04C0   (0x0004)  
	float                                              ThunderPostProcessIntensity;                                // 0x04C4   (0x0004)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x04C8   (0x0018)  MISSED
	// void SpawnThunderInWorld(class UObject* WorldContextObject, FVector Location, bool bAttack);                             // [0xfeeaa0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void SpawnThunder(FVector HitLocation, bool bAttack);                                                                    // [0xfee9c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void OnUpdateThunderEffect(float DeltaSeconds);                                                                          // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnThunderTypeChanged();                                                                                             // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnReceiveThunderAttack(FVector Location, bool bAttack);                                                             // [0x25a7960] Event|Protected|HasDefaults|BlueprintEvent 
	// void EnableThunder();                                                                                                    // [0x25a7960] Event|Public|BlueprintEvent 
	// void DisableThunder();                                                                                                   // [0x25a7960] Event|Public|BlueprintEvent 
	// bool CalculateThunderPosition(FTransform& CameraTransform, FVector& OutPosition);                                        // [0xfee670] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroCharMaterialControllerColorParameter
/// Size: 0x0230 (560 bytes) (0x000000 - 0x000230) align 8 pad: 0x0000
struct FKuroCharMaterialControllerColorParameter
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FKuroCurveLinearColor                              ParameterValue;                                             // 0x0010   (0x0220)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroCharMaterialControllerFloatParameter
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 pad: 0x0000
struct FKuroCharMaterialControllerFloatParameter
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FKuroCurveFloat                                    ParameterValue;                                             // 0x0010   (0x0090)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.PostprocessGIDebugInfo
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 pad: 0x0000
struct FPostprocessGIDebugInfo
{ 
	SDK_UNDEFINED(8,646) /* TWeakObjectPtr<AActor*> */ __um(OwnerActor);                                           // 0x0000   (0x0008)  
	FString                                            OwnerActorName;                                             // 0x0008   (0x0010)  
	FName                                              ActorFolderPath;                                            // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            ActorLabel;                                                 // 0x0028   (0x0010)  
	bool                                               IsVolume;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            ComponentName;                                              // 0x0040   (0x0010)  
	int32_t                                            Priority;                                                   // 0x0050   (0x0004)  
	int32_t                                            WorldPriority;                                              // 0x0054   (0x0004)  
	float                                              LocalBlendWeight;                                           // 0x0058   (0x0004)  
	float                                              BlendWeight;                                                // 0x005C   (0x0004)  
	bool                                               IsUnbound;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	FString                                            WeatherDAPath;                                              // 0x0068   (0x0010)  
	SDK_UNDEFINED(8,647) /* TWeakObjectPtr<UKuroWeatherDataAsset*> */ __um(WeatherDAData);                         // 0x0078   (0x0008)  
	FString                                            TodDAPath;                                                  // 0x0080   (0x0010)  
	SDK_UNDEFINED(8,648) /* TWeakObjectPtr<UKuroTODData*> */ __um(TodDAData);                                      // 0x0090   (0x0008)  
	TArray<FString>                                    OverridedProperties;                                        // 0x0098   (0x0010)  
	FString                                            PostProcessMaterialPath;                                    // 0x00A8   (0x0010)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroCloudTopData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 pad: 0x0000
struct FKuroCloudTopData
{ 
	FVector                                            Rotator;                                                    // 0x0000   (0x000C)  
	FVector                                            Offset;                                                     // 0x000C   (0x000C)  
	int32_t                                            TextureIdx;                                                 // 0x0018   (0x0004)  
	float                                              Scale;                                                      // 0x001C   (0x0004)  
	float                                              AlphaControl;                                               // 0x0020   (0x0004)  
	float                                              AlphaMax;                                                   // 0x0024   (0x0004)  
	float                                              AlphaMin;                                                   // 0x0028   (0x0004)  
	float                                              Brightness;                                                 // 0x002C   (0x0004)  
	float                                              FadeOutTime;                                                // 0x0030   (0x0004)  
	float                                              FadeInTime;                                                 // 0x0034   (0x0004)  
	float                                              FullStayTime;                                               // 0x0038   (0x0004)  
	float                                              DisappearTime;                                              // 0x003C   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroCloudCircleData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 4 pad: 0x0000
struct FKuroCloudCircleData
{ 
	float                                              Distance;                                                   // 0x0000   (0x0004)  
	FVector                                            Rotator;                                                    // 0x0004   (0x000C)  
	int32_t                                            TextureIdx;                                                 // 0x0010   (0x0004)  
	float                                              HorizontalOffset;                                           // 0x0014   (0x0004)  
	float                                              Scale;                                                      // 0x0018   (0x0004)  
	FVector                                            Offset;                                                     // 0x001C   (0x000C)  
	float                                              AlphaControl;                                               // 0x0028   (0x0004)  
	float                                              AlphaMax;                                                   // 0x002C   (0x0004)  
	float                                              AlphaMin;                                                   // 0x0030   (0x0004)  
	float                                              Brightness;                                                 // 0x0034   (0x0004)  
	float                                              FadeOutTime;                                                // 0x0038   (0x0004)  
	float                                              FadeInTime;                                                 // 0x003C   (0x0004)  
	float                                              FullStayTime;                                               // 0x0040   (0x0004)  
	float                                              DisappearTime;                                              // 0x0044   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroCloudLayerSetting
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 16 pad: 0x0000
struct FKuroCloudLayerSetting
{ 
	bool                                               bOverride_CloudsDensity : 1;                                // 0x0000:0 (0x0001)  
	bool                                               bOverride_CloudsBlend : 1;                                  // 0x0000:1 (0x0001)  
	bool                                               bOverride_CloudsBloom : 1;                                  // 0x0000:2 (0x0001)  
	bool                                               bOverride_UVScale : 1;                                      // 0x0000:3 (0x0001)  
	bool                                               bOverride_WindForceScale : 1;                               // 0x0000:4 (0x0001)  
	bool                                               bOverride_BaseLayerSize : 1;                                // 0x0000:5 (0x0001)  
	bool                                               bOverride_SecondLayerSize : 1;                              // 0x0000:6 (0x0001)  
	bool                                               bOverride_CloudLayer1 : 1;                                  // 0x0000:7 (0x0001)  
	bool                                               bOverride_CloudLayer2 : 1;                                  // 0x0001:0 (0x0001)  
	bool                                               bOverride_CloudsHardness : 1;                               // 0x0001:1 (0x0001)  
	bool                                               bOverride_CloudsTranslucent : 1;                            // 0x0001:2 (0x0001)  
	bool                                               bOverride_CloudsVertexDensity : 1;                          // 0x0001:3 (0x0001)  
	bool                                               bOverride_CloudsFluffy : 1;                                 // 0x0001:4 (0x0001)  
	bool                                               bOverride_CloudsDistotion : 1;                              // 0x0001:5 (0x0001)  
	bool                                               bOverride_CloudsScattering : 1;                             // 0x0001:6 (0x0001)  
	bool                                               bOverride_CloudsAmbient : 1;                                // 0x0001:7 (0x0001)  
	bool                                               bOverride_CloudsShadowSize : 1;                             // 0x0002:0 (0x0001)  
	bool                                               bOverride_CloudsShadowSoft : 1;                             // 0x0002:1 (0x0001)  
	bool                                               bOverride_CloudsUpperBrightness : 1;                        // 0x0002:2 (0x0001)  
	bool                                               bOverride_CloudsLowerBrightness : 1;                        // 0x0002:3 (0x0001)  
	bool                                               bOverride_CloudsUpperColor : 1;                             // 0x0002:4 (0x0001)  
	bool                                               bOverride_CloudsLowerColor : 1;                             // 0x0002:5 (0x0001)  
	bool                                               bOverride_CloudsBackgroundColor : 1;                        // 0x0002:6 (0x0001)  
	bool                                               bOverride_CloudsBackground : 1;                             // 0x0002:7 (0x0001)  
	bool                                               bOverride_CloudsHorizonAlpha : 1;                           // 0x0003:0 (0x0001)  
	bool                                               bOverride_WindDynamic : 1;                                  // 0x0003:1 (0x0001)  
	bool                                               bOverride_WindDispersing : 1;                               // 0x0003:2 (0x0001)  
	bool                                               bOverride_SecondLayerAlpha : 1;                             // 0x0003:3 (0x0001)  
	bool                                               bOverride_SecondLayerColor : 1;                             // 0x0003:4 (0x0001)  
	bool                                               bOverride_SecondLayerScale : 1;                             // 0x0003:5 (0x0001)  
	bool                                               bOverride_SecondLayerHardness : 1;                          // 0x0003:6 (0x0001)  
	bool                                               bOverride_SecondLayerWind : 1;                              // 0x0003:7 (0x0001)  
	float                                              CloudsDensity;                                              // 0x0004   (0x0004)  
	float                                              CloudsBlend;                                                // 0x0008   (0x0004)  
	float                                              CloudsBloom;                                                // 0x000C   (0x0004)  
	float                                              UVScale;                                                    // 0x0010   (0x0004)  
	float                                              WindForceScale;                                             // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FVector4                                           BaseLayerSize;                                              // 0x0020   (0x0010)  
	FVector4                                           SecondLayerSize;                                            // 0x0030   (0x0010)  
	class UTexture2D*                                  CloudLayer1;                                                // 0x0040   (0x0008)  
	class UTexture2D*                                  CloudLayer2;                                                // 0x0048   (0x0008)  
	float                                              CloudsHardness;                                             // 0x0050   (0x0004)  
	float                                              CloudsTranslucent;                                          // 0x0054   (0x0004)  
	float                                              CloudsVertexDensity;                                        // 0x0058   (0x0004)  
	float                                              CloudsFluffy;                                               // 0x005C   (0x0004)  
	float                                              CloudsDistotion;                                            // 0x0060   (0x0004)  
	float                                              CloudsScattering;                                           // 0x0064   (0x0004)  
	float                                              CloudsAmbient;                                              // 0x0068   (0x0004)  
	float                                              CloudsShadowSize;                                           // 0x006C   (0x0004)  
	float                                              CloudsShadowSoft;                                           // 0x0070   (0x0004)  
	float                                              CloudsUpperBrightness;                                      // 0x0074   (0x0004)  
	float                                              CloudsLowerBrightness;                                      // 0x0078   (0x0004)  
	FLinearColor                                       CloudsUpperColor;                                           // 0x007C   (0x0010)  
	FLinearColor                                       CloudsLowerColor;                                           // 0x008C   (0x0010)  
	FLinearColor                                       CloudsBackgroundColor;                                      // 0x009C   (0x0010)  
	float                                              CloudsBackground;                                           // 0x00AC   (0x0004)  
	float                                              CloudsHorizonAlpha;                                         // 0x00B0   (0x0004)  
	float                                              WindDynamic;                                                // 0x00B4   (0x0004)  
	float                                              WindDispersing;                                             // 0x00B8   (0x0004)  
	float                                              SecondLayerAlpha;                                           // 0x00BC   (0x0004)  
	float                                              SecondLayerColor;                                           // 0x00C0   (0x0004)  
	float                                              SecondLayerScale;                                           // 0x00C4   (0x0004)  
	float                                              SecondLayerHardness;                                        // 0x00C8   (0x0004)  
	float                                              SecondLayerWind;                                            // 0x00CC   (0x0004)  
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroSplitTextureStreamer
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FKuroSplitTextureStreamer
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UKuroSplitTextureStreamerSettings*           Settings;                                                   // 0x0008   (0x0008)  
	TArray<class UObject*>                             StreamedTextures;                                           // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0020   (0x0018)  MISSED
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroSunLensflareManager
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 pad: 0x0000
struct FKuroSunLensflareManager
{ 
	unsigned char                                      UnknownData00_7[0x70];                                      // 0x0000   (0x0070)  MISSED
	class UWorld*                                      CachedWorld;                                                // 0x0070   (0x0008)  
	class UKuroGISystem*                               CachedGISystem;                                             // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Struct /Script/KuroRenderingRuntimeBPPlugin.KuroSunLensflareInfo
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FKuroSunLensflareInfo
{ 
	class USunLensFlareConfig*                         LensFlareConfig;                                            // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0008   (0x0018)  MISSED
	class AActor*                                      LensFlareActor;                                             // 0x0020   (0x0008)  
	class UStaticMeshComponent*                        HaloComponent;                                              // 0x0028   (0x0008)  
	class UStaticMeshComponent*                        GhostComponent;                                             // 0x0030   (0x0008)  
	class UStaticMeshComponent*                        GlareComponent;                                             // 0x0038   (0x0008)  
	class UMaterialInstanceDynamic*                    HaloMaterialDynamic;                                        // 0x0040   (0x0008)  
	class UMaterialInstanceDynamic*                    GhostMaterialDynamic;                                       // 0x0048   (0x0008)  
	class UMaterialInstanceDynamic*                    GlareMaterialDynamic;                                       // 0x0050   (0x0008)  
};

