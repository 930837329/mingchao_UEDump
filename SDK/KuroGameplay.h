
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: KuroCurve
/// dependency: KuroRenderingRuntimeBPPlugin
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: Niagara
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/KuroGameplay.ESignificanceGroup
/// Size: 0x01 (1 bytes)
enum class ESignificanceGroup : uint8_t
{
	ESignificanceGroup__Idle                                                         = 0,
	ESignificanceGroup__Low                                                          = 1,
	ESignificanceGroup__Middle                                                       = 2,
	ESignificanceGroup__High                                                         = 3,
	ESignificanceGroup__Critical                                                     = 4
};

/// Enum /Script/KuroGameplay.EActorCavernMode
/// Size: 0x01 (1 bytes)
enum class EActorCavernMode : uint8_t
{
	EActorCavernMode__ActorCavernMode_None                                           = 0,
	EActorCavernMode__ActorCavernMode_Outside                                        = 1,
	EActorCavernMode__ActorCavernMode_Inside                                         = 2,
	EActorCavernMode__ActorCavernMode_IntermediateZone                               = 3
};

/// Enum /Script/KuroGameplay.EDisableActorTickStrategy
/// Size: 0x01 (1 bytes)
enum class EDisableActorTickStrategy : uint8_t
{
	EDisableActorTickStrategy__DisableActorTickStrategy_None                         = 0,
	EDisableActorTickStrategy__DisableActorTickStrategy_DistanceOnly                 = 1,
	EDisableActorTickStrategy__DisableActorTickStrategy_NotRenderedOnly              = 2,
	EDisableActorTickStrategy__DisableActorTickStrategy_NotRenderedAndDistance       = 3,
	EDisableActorTickStrategy__DisableActorTickStrategy_MaxInterval                  = 4
};

/// Enum /Script/KuroGameplay.EGameBudgetAllocatorActorMode
/// Size: 0x01 (1 bytes)
enum class EGameBudgetAllocatorActorMode : uint8_t
{
	EGameBudgetAllocatorActorMode__GBA_ActorMode_Rendered                            = 0,
	EGameBudgetAllocatorActorMode__GBA_ActorMode_NotRendered                         = 1,
	EGameBudgetAllocatorActorMode__GBA_ActorMode_Fighting                            = 2,
	EGameBudgetAllocatorActorMode__GBA_ActorMode_Num                                 = 3
};

/// Enum /Script/KuroGameplay.EGameBudgetAllocatorGlobalMode
/// Size: 0x01 (1 bytes)
enum class EGameBudgetAllocatorGlobalMode : uint8_t
{
	EGameBudgetAllocatorGlobalMode__GBA_GlobalMode_Normal                            = 0,
	EGameBudgetAllocatorGlobalMode__GBA_GlobalMode_Fighting                          = 1,
	EGameBudgetAllocatorGlobalMode__GBA_GlobalMode_Cutscene                          = 2,
	EGameBudgetAllocatorGlobalMode__GBA_GlobalMode_Num                               = 3
};

/// Class /Script/KuroGameplay.EffectModelBase
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
class UEffectModelBase : public UPrimaryDataAsset
{ 
public:
	float                                              StartTime;                                                  // 0x0038   (0x0004)  
	float                                              LoopTime;                                                   // 0x003C   (0x0004)  
	float                                              EndTime;                                                    // 0x0040   (0x0004)  
	bool                                               AutoPlay;                                                   // 0x0044   (0x0001)  
	bool                                               AutoDestroy;                                                // 0x0045   (0x0001)  
	bool                                               IgnoreTimeDilation;                                         // 0x0046   (0x0001)  
	bool                                               UiScenePrimitive;                                           // 0x0047   (0x0001)  
	int32_t                                            ImportanceLevel;                                            // 0x0048   (0x0004)  
	float                                              DefaultManualTime;                                          // 0x004C   (0x0004)  
	float                                              DefaultManualSpeed;                                         // 0x0050   (0x0004)  
	bool                                               IgnoreDisable;                                              // 0x0054   (0x0001)  
	bool                                               DisableOnMobile;                                            // 0x0055   (0x0001)  
	bool                                               HideOnBurstSkill;                                           // 0x0056   (0x0001)  
	bool                                               NeedDisableWithActor;                                       // 0x0057   (0x0001)  
};

/// Class /Script/KuroGameplay.EffectModelLight
/// Size: 0x0678 (1656 bytes) (0x000058 - 0x0006D0) align 8 pad: 0x0000
class UEffectModelLight : public UEffectModelBase
{ 
public:
	FKuroCurveVector                                   Location;                                                   // 0x0058   (0x01A8)  
	FKuroCurveFloat                                    Intensity;                                                  // 0x0200   (0x0090)  
	FKuroCurveLinearColor                              Color;                                                      // 0x0290   (0x0220)  
	FKuroCurveFloat                                    Radius;                                                     // 0x04B0   (0x0090)  
	FKuroCurveFloat                                    FalloffExponent;                                            // 0x0540   (0x0090)  
	TEnumAsByte<ELightQualityType>                     LightQualityType;                                           // 0x05D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x05D1   (0x0003)  MISSED
	float                                              SourceRadius;                                               // 0x05D4   (0x0004)  
	float                                              SoftSourceRadius;                                           // 0x05D8   (0x0004)  
	float                                              SourceLength;                                               // 0x05DC   (0x0004)  
	FKuroCurveFloat                                    CharacterLightAlpha;                                        // 0x05E0   (0x0090)  
	float                                              CharacterFalloffExponent;                                   // 0x0670   (0x0004)  
	float                                              CharacterBlendAtten;                                        // 0x0674   (0x0004)  
	float                                              CharacterBlendIntensity;                                    // 0x0678   (0x0004)  
	TEnumAsByte<EToonLightType>                        ToonLightType;                                              // 0x067C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x067D   (0x0003)  MISSED
	int32_t                                            CharacterPriority;                                          // 0x0680   (0x0004)  
	float                                              CharacterIntensity;                                         // 0x0684   (0x0004)  
	FLinearColor                                       CharacterColor;                                             // 0x0688   (0x0010)  
	float                                              CharacterShadowIntensity;                                   // 0x0698   (0x0004)  
	float                                              CharacterRealTimeShadowIntensity;                           // 0x069C   (0x0004)  
	float                                              CharacterDesaturationIntensity;                             // 0x06A0   (0x0004)  
	float                                              CharacterHardIntensity;                                     // 0x06A4   (0x0004)  
	FLinearColor                                       CharacterHardColor;                                         // 0x06A8   (0x0010)  
	FLinearColor                                       CharacterHardShadowColor;                                   // 0x06B8   (0x0010)  
	float                                              CharacterHardBlend;                                         // 0x06C8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x06CC   (0x0004)  MISSED
};

/// Struct /Script/KuroGameplay.EffectModelNiagaraExtraState
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 pad: 0x0000
struct FEffectModelNiagaraExtraState
{ 
	SDK_UNDEFINED(80,649) /* TMap<FName, FKuroCurveFloat> */ __um(FloatParameters);                                // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,650) /* TMap<FName, FKuroCurveLinearColor> */ __um(ColorParameters);                          // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,651) /* TMap<FName, FKuroCurveVector> */ __um(VectorParameters);                              // 0x00A0   (0x0050)  
};

/// Class /Script/KuroGameplay.EffectModelNiagara
/// Size: 0x0608 (1544 bytes) (0x000058 - 0x000660) align 8 pad: 0x0000
class UEffectModelNiagara : public UEffectModelBase
{ 
public:
	FKuroCurveVector                                   Location;                                                   // 0x0058   (0x01A8)  
	FKuroCurveVector                                   Rotation;                                                   // 0x0200   (0x01A8)  
	FKuroCurveVector                                   Scale;                                                      // 0x03A8   (0x01A8)  
	class UNiagaraSystem*                              NiagaraRef;                                                 // 0x0550   (0x0008)  
	SDK_UNDEFINED(80,652) /* TMap<FName, FKuroCurveFloat> */ __um(FloatParameters);                                // 0x0558   (0x0050)  
	SDK_UNDEFINED(80,653) /* TMap<FName, FKuroCurveLinearColor> */ __um(ColorParameters);                          // 0x05A8   (0x0050)  
	SDK_UNDEFINED(80,654) /* TMap<FName, FKuroCurveVector> */ __um(VectorParameters);                              // 0x05F8   (0x0050)  
	bool                                               DeactivateOnStop;                                           // 0x0648   (0x0001)  
	bool                                               ReceiveDecal;                                               // 0x0649   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x064A   (0x0002)  MISSED
	int32_t                                            TranslucencySortPriority;                                   // 0x064C   (0x0004)  
	TArray<FEffectModelNiagaraExtraState>              ExtraStates;                                                // 0x0650   (0x0010)  
};

/// Class /Script/KuroGameplay.EffectModelPostProcess
/// Size: 0x20B0 (8368 bytes) (0x000058 - 0x002108) align 8 pad: 0x0000
class UEffectModelPostProcess : public UEffectModelBase
{ 
public:
	FKuroCurveVector                                   Location;                                                   // 0x0058   (0x01A8)  
	bool                                               EnableVolume;                                               // 0x0200   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0201   (0x0003)  MISSED
	float                                              VolumeRadius;                                               // 0x0204   (0x0004)  
	float                                              VolumeHardness;                                             // 0x0208   (0x0004)  
	bool                                               UseVolumeHardnessCurve;                                     // 0x020C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x020D   (0x0003)  MISSED
	FKuroCurveFloat                                    VolumeHardnessCurve;                                        // 0x0210   (0x0090)  
	float                                              WeatherPriority;                                            // 0x02A0   (0x0004)  
	bool                                               bEnablePostprocessMaterial;                                 // 0x02A4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02A5   (0x0003)  MISSED
	class UMaterialInterface*                          PostprocessMaterial;                                        // 0x02A8   (0x0008)  
	SDK_UNDEFINED(80,655) /* TMap<FName, FKuroCurveFloat> */ __um(PostprocessMaterialFloatParameters);             // 0x02B0   (0x0050)  
	SDK_UNDEFINED(80,656) /* TMap<FName, FKuroCurveLinearColor> */ __um(PostprocessMaterialColorParameters);       // 0x0300   (0x0050)  
	bool                                               BlurIntensityOverride;                                      // 0x0350   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0351   (0x0007)  MISSED
	FKuroCurveFloat                                    BlurIntensity;                                              // 0x0358   (0x0090)  
	bool                                               UseWorldPosition;                                           // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x03E9   (0x0003)  MISSED
	FVector2D                                          ScreenPosition;                                             // 0x03EC   (0x0008)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x03F4   (0x0004)  MISSED
	FKuroCurveFloat                                    RadialBlurRadius;                                           // 0x03F8   (0x0090)  
	FKuroCurveFloat                                    RadialBlurHardness;                                         // 0x0488   (0x0090)  
	class UTexture*                                    RadialBlurMask;                                             // 0x0518   (0x0008)  
	FVector2D                                          RadialBlurMaskScale;                                        // 0x0520   (0x0008)  
	FKuroCurveLinearColor                              RadialBlurMaskScaleOffset;                                  // 0x0528   (0x0220)  
	bool                                               MainLightIntensityOverride;                                 // 0x0748   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x0749   (0x0007)  MISSED
	FKuroCurveFloat                                    MainLightIntensity;                                         // 0x0750   (0x0090)  
	bool                                               MainLightColorOverride;                                     // 0x07E0   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x07E1   (0x0007)  MISSED
	FKuroCurveLinearColor                              MainLightColor;                                             // 0x07E8   (0x0220)  
	bool                                               SkyLightIntensityOverride;                                  // 0x0A08   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x0A09   (0x0007)  MISSED
	FKuroCurveFloat                                    SkyLightIntensity;                                          // 0x0A10   (0x0090)  
	bool                                               SkyLightColorOverride;                                      // 0x0AA0   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x0AA1   (0x0007)  MISSED
	FKuroCurveLinearColor                              SkyLightColor;                                              // 0x0AA8   (0x0220)  
	bool                                               FogDensityOverride;                                         // 0x0CC8   (0x0001)  
	unsigned char                                      UnknownData10_6[0x7];                                       // 0x0CC9   (0x0007)  MISSED
	FKuroCurveFloat                                    FogDensity;                                                 // 0x0CD0   (0x0090)  
	FKuroCurveFloat                                    FogStartDistance;                                           // 0x0D60   (0x0090)  
	float                                              FogFalloff;                                                 // 0x0DF0   (0x0004)  
	bool                                               FogColorOverride;                                           // 0x0DF4   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x0DF5   (0x0003)  MISSED
	FKuroCurveLinearColor                              FogNearColor;                                               // 0x0DF8   (0x0220)  
	FKuroCurveLinearColor                              FogFarColor;                                                // 0x1018   (0x0220)  
	FKuroCurveFloat                                    FogNearColorDistance;                                       // 0x1238   (0x0090)  
	FKuroCurveFloat                                    FogFarColorDistance;                                        // 0x12C8   (0x0090)  
	float                                              FogColorRatio;                                              // 0x1358   (0x0004)  
	bool                                               KuroBloomIntensityOverride;                                 // 0x135C   (0x0001)  
	unsigned char                                      UnknownData12_6[0x3];                                       // 0x135D   (0x0003)  MISSED
	FKuroCurveFloat                                    KuroBloomIntensity;                                         // 0x1360   (0x0090)  
	bool                                               KuroThresholdOverride;                                      // 0x13F0   (0x0001)  
	unsigned char                                      UnknownData13_6[0x7];                                       // 0x13F1   (0x0007)  MISSED
	FKuroCurveFloat                                    KuroThreshold;                                              // 0x13F8   (0x0090)  
	bool                                               SceneFringeIntensityOverride;                               // 0x1488   (0x0001)  
	unsigned char                                      UnknownData14_6[0x7];                                       // 0x1489   (0x0007)  MISSED
	FKuroCurveFloat                                    SceneFringeIntensity;                                       // 0x1490   (0x0090)  
	bool                                               StartOffsetOverride;                                        // 0x1520   (0x0001)  
	unsigned char                                      UnknownData15_6[0x7];                                       // 0x1521   (0x0007)  MISSED
	FKuroCurveFloat                                    StartOffset;                                                // 0x1528   (0x0090)  
	bool                                               VignetteIntensityOverride;                                  // 0x15B8   (0x0001)  
	unsigned char                                      UnknownData16_6[0x7];                                       // 0x15B9   (0x0007)  MISSED
	FKuroCurveFloat                                    VignetteIntensity;                                          // 0x15C0   (0x0090)  
	bool                                               GrainJitterOverride;                                        // 0x1650   (0x0001)  
	unsigned char                                      UnknownData17_6[0x7];                                       // 0x1651   (0x0007)  MISSED
	FKuroCurveFloat                                    GrainJitter;                                                // 0x1658   (0x0090)  
	bool                                               GrainIntensityOverride;                                     // 0x16E8   (0x0001)  
	unsigned char                                      UnknownData18_6[0x7];                                       // 0x16E9   (0x0007)  MISSED
	FKuroCurveFloat                                    GrainIntensity;                                             // 0x16F0   (0x0090)  
	bool                                               LutIntensityOverride;                                       // 0x1780   (0x0001)  
	unsigned char                                      UnknownData19_6[0x7];                                       // 0x1781   (0x0007)  MISSED
	FKuroCurveFloat                                    LutIntensity;                                               // 0x1788   (0x0090)  
	bool                                               LutTextureOverride;                                         // 0x1818   (0x0001)  
	unsigned char                                      UnknownData20_6[0x7];                                       // 0x1819   (0x0007)  MISSED
	class UTexture2D*                                  LutTexture;                                                 // 0x1820   (0x0008)  
	bool                                               SceneColorTintOverride;                                     // 0x1828   (0x0001)  
	unsigned char                                      UnknownData21_6[0x7];                                       // 0x1829   (0x0007)  MISSED
	FKuroCurveLinearColor                              SceneColorTint;                                             // 0x1830   (0x0220)  
	bool                                               SceneColorDesaturateOverride;                               // 0x1A50   (0x0001)  
	unsigned char                                      UnknownData22_6[0x7];                                       // 0x1A51   (0x0007)  MISSED
	FKuroCurveFloat                                    SceneColorDesaturate;                                       // 0x1A58   (0x0090)  
	bool                                               BlackWhiteFlashIntensityOverride;                           // 0x1AE8   (0x0001)  
	unsigned char                                      UnknownData23_6[0x7];                                       // 0x1AE9   (0x0007)  MISSED
	FKuroCurveFloat                                    BlackWhiteFlashIntensity;                                   // 0x1AF0   (0x0090)  
	bool                                               BlackWhiteFlashFactorOverride;                              // 0x1B80   (0x0001)  
	unsigned char                                      UnknownData24_6[0x7];                                       // 0x1B81   (0x0007)  MISSED
	FKuroCurveFloat                                    BlackWhiteFlashFactor;                                      // 0x1B88   (0x0090)  
	bool                                               BlackWhiteFlashThresholdOverride;                           // 0x1C18   (0x0001)  
	unsigned char                                      UnknownData25_6[0x7];                                       // 0x1C19   (0x0007)  MISSED
	FKuroCurveFloat                                    BlackWhiteFlashThreshold;                                   // 0x1C20   (0x0090)  
	bool                                               BlackWhiteFlashBlackAreaColorOverride;                      // 0x1CB0   (0x0001)  
	unsigned char                                      UnknownData26_6[0x7];                                       // 0x1CB1   (0x0007)  MISSED
	FKuroCurveLinearColor                              BlackWhiteFlashBlackAreaColor;                              // 0x1CB8   (0x0220)  
	bool                                               BlackWhiteFlashWhiteAreaColorOverride;                      // 0x1ED8   (0x0001)  
	unsigned char                                      UnknownData27_6[0x7];                                       // 0x1ED9   (0x0007)  MISSED
	FKuroCurveLinearColor                              BlackWhiteFlashWhiteAreaColor;                              // 0x1EE0   (0x0220)  
	class UKuroWeatherDataAsset*                       WeatherDataAsset;                                           // 0x2100   (0x0008)  
};

/// Class /Script/KuroGameplay.GameBudgetAllocator
/// Size: 0x0400 (1024 bytes) (0x000030 - 0x000430) align 16 pad: 0x0000
class UGameBudgetAllocator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x400];                                     // 0x0030   (0x0400)  MISSED
	// void UpdateMinUpdateFIFOBudgetTime(float Time);                                                                          // [0xf09820] Final|Native|Public  
	// void TickOutside(float DeltaSeconds);                                                                                    // [0xf09090] Final|Native|Public  
	// void SetTickIntervalDetailConfig(FGameBudgetAllocatorGroupConfig& Config, EGameBudgetAllocatorGlobalMode GlobalMode, EGameBudgetAllocatorActorMode ActorMode, uint32_t MaxTickInterval, uint16_t TickReductionStartSize, uint16_t TickReductionIntervalSize); // [0xf08d80] Final|Native|Public|HasOutParms 
	// void SetMaximumFrameRate(uint32_t MaxFPS);                                                                               // [0xf089c0] Final|Native|Public  
	// void SetGroupConfig(FName GroupName, FGameBudgetAllocatorGroupConfig& Config);                                           // [0xf08800] Final|Native|Public|HasOutParms 
	// void SetGlobalMode(EGameBudgetAllocatorGlobalMode Mode);                                                                 // [0xf08780] Final|Native|Public  
	// void SetDefaultTickIntervalDetailConfig(FGameBudgetAllocatorGroupConfig& Config, uint32_t MaxTickInterval, uint16_t TickReductionStartSize, uint16_t TickReductionIntervalSize); // [0xf08530] Final|Native|Public|HasOutParms 
	// void SetCamera(class AActor* ActorActAsCamera);                                                                          // [0xf084a0] Final|Native|Public  
	// void AfterTickOutside(float DeltaSeconds);                                                                               // [0xf069b0] Final|Native|Public  
};

/// Class /Script/KuroGameplay.KuroAIController
/// Size: 0x0000 (0 bytes) (0x0003B8 - 0x0003B8) align 8 pad: 0x0000
class AKuroAIController : public AAIController
{ 
public:
};

/// Class /Script/KuroGameplay.KuroEffectLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroEffectLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// FVector2D UpdateEffectModelPostProcessSpec(class UEffectModelPostProcess* EffectModelPostProcess, class UKuroPostProcessComponent* PostProcessComponent, bool bForceUpdate, float Time, class APlayerController* Controller, class ACharacter* Character, class AActor* EffectActor, FVector2D LastScreenUV); // [0xf095b0] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// void UpdateEffectModelPostProcessMaterial(class UEffectModelPostProcess* EffectModelPostProcess, class UMaterialInstanceDynamic* DynMaterial, bool bForceUpdate, float Time); // [0xf09450] Final|Native|Static|Private|BlueprintCallable 
	// void UpdateEffectModelNiagaraSpec(class UEffectModelNiagara* EffectModelNiagara, class UNiagaraComponent* NiagaraComponent, bool bForceUpdate, float Time, int32_t ExtraState); // [0xf092b0] Final|Native|Static|Private|BlueprintCallable 
	// void UpdateEffectModelLightSpec(class UEffectModelLight* EffectModelLight, class UPointLightComponent* LightComponent, bool bForceUpdate, float Time, float DefaultMaxLightRadius); // [0xf09110] Final|Native|Static|Private|BlueprintCallable 
	// void SetOnSystemPausedDelegate(FDelegateProperty& Delegate);                                                             // [0xf08c50] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// void SetOnSystemFinishedDelegate(FDelegateProperty& Delegate);                                                           // [0xf08ba0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// bool SetNiagaraFrameDeltaTime(class UNiagaraComponent* NiagaraComponent, float DeltaTime);                               // [0xf08ad0] Final|Native|Static|Private|BlueprintCallable 
	// void RegisterOnSystemPaused(class UNiagaraComponent* NiagaraComponent);                                                  // [0xf08240] Final|Native|Static|Private|BlueprintCallable 
	// void RegisterOnSystemFinished(class UNiagaraComponent* NiagaraComponent);                                                // [0xf081c0] Final|Native|Static|Private|BlueprintCallable 
	// bool IsNiagaraComponentHasBound(class UNiagaraComponent* NiagaraComponent);                                              // [0xf07c30] Final|Native|Static|Private|BlueprintCallable 
	// void InitModelNiagaraSpec(class UNiagaraComponent* NiagaraComponent, bool bUIScene, bool bReceivesDecals, int32_t TranslucencySortPriority); // [0xf07ae0] Final|Native|Static|Private|BlueprintCallable 
	// EKuroNiagaraEffectRegularType GetNiagaraSystemEffectRegularType(class UNiagaraSystem* NiagaraSystem);                    // [0xf074b0] Final|Native|Static|Private|BlueprintCallable 
	// float GetNiagaraEffectRegularTypeScalabilitySettingsMaxDistance(EKuroNiagaraEffectRegularType EffectRegularType);        // [0xf07430] Final|Native|Static|Private|BlueprintCallable 
	// class USceneComponent* GetActorDefaultAttachComponent(class AActor* Actor);                                              // [0xf06e70] Final|Native|Static|Private|BlueprintCallable 
	// bool EqualWorld(class UWorld* World, class UWorld* Other);                                                               // [0xf06a50] Final|Native|Static|Private|BlueprintCallable 
	// class USceneComponent* AddSceneComponentWithTransform(class AActor* Actor, class UClass* Class, class USceneComponent* Parent, bool bDeferredFinish, FTransform Transform); // [0xf065a0] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// class USceneComponent* AddSceneComponent(class AActor* Actor, class UClass* Class, class USceneComponent* Parent, bool bDeferredFinish); // [0xf06450] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/KuroGameplay.KuroLevelPlayLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroLevelPlayLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void RegisterBaseItemInfo(class UClass* BaseItemClass, FString EntityIdName);                                            // [0xf080a0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetEntityIdByBaseItem(class AActor* Actor);                                                                      // [0xf07030] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroGameplay.KuroMultilBgProgressBar
/// Size: 0x02E0 (736 bytes) (0x000128 - 0x000408) align 8 pad: 0x0000
class UKuroMultilBgProgressBar : public UWidget
{ 
public:
	FProgressBarStyle                                  WidgetStyle;                                                // 0x0128   (0x0248)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x0370   (0x0008)  
	class USlateBrushAsset*                            BackgroundImage;                                            // 0x0378   (0x0008)  
	class USlateBrushAsset*                            FillImageMiddle;                                            // 0x0380   (0x0008)  
	class USlateBrushAsset*                            FillImage;                                                  // 0x0388   (0x0008)  
	class USlateBrushAsset*                            MarqueeImage;                                               // 0x0390   (0x0008)  
	float                                              MiddlePercent;                                              // 0x0398   (0x0004)  
	float                                              Percent;                                                    // 0x039C   (0x0004)  
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                                // 0x03A0   (0x0001)  
	bool                                               bIsMarquee;                                                 // 0x03A1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x03A2   (0x0002)  MISSED
	FVector2D                                          BorderPadding;                                              // 0x03A4   (0x0008)  
	SDK_UNDEFINED(20,657) /* FDelegateProperty */      __um(PercentDelegate);                                      // 0x03AC   (0x0014)  
	SDK_UNDEFINED(20,658) /* FDelegateProperty */      __um(MiddlePercentDelegate);                                // 0x03C0   (0x0014)  
	FLinearColor                                       FillColorAndOpacity;                                        // 0x03D4   (0x0010)  
	SDK_UNDEFINED(20,659) /* FDelegateProperty */      __um(FillColorAndOpacityDelegate);                          // 0x03E4   (0x0014)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x03F8   (0x0010)  MISSED
	// void SetPercent(float InPercent);                                                                                        // [0xf08d00] Final|Native|Public|BlueprintCallable 
	// void SetMiddlePercent(float InPercent);                                                                                  // [0xf08a50] Final|Native|Public|BlueprintCallable 
	// void SetIsMarquee(bool InbIsMarquee);                                                                                    // [0xf08930] Final|Native|Public|BlueprintCallable 
	// void SetFillColorAndOpacity(FLinearColor InColor);                                                                       // [0xf086f0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/KuroGameplay.KuroResourceManager
/// Size: 0x0150 (336 bytes) (0x000030 - 0x000180) align 8 pad: 0x0000
class UKuroResourceManager : public UObject
{ 
public:
	SDK_UNDEFINED(20,660) /* FDelegateProperty */      __um(LoadResourceDelegate);                                 // 0x0030   (0x0014)  
	unsigned char                                      UnknownData00_7[0x13C];                                     // 0x0044   (0x013C)  MISSED
	// bool WaitComplete(int32_t HandleId, float Timeout);                                                                      // [0xf098a0] Final|Native|Public  
	// bool SyncLoad(int32_t HandleId);                                                                                         // [0xf08ff0] Final|Native|Public  
	// void Release(int32_t HandleId);                                                                                          // [0xf082c0] Final|Native|Public  
	// int32_t LoadAsyncWithId(FString Path, int32_t HandleId, int32_t Priority);                                               // [0xf07cc0] Final|Native|Public  
	// class UObject* GetLoadedAsset(FString Path);                                                                             // [0xf072b0] Final|Native|Public|Const 
	// class UObject* GetAsset(int32_t HandleId);                                                                               // [0xf06f00] Final|Native|Public  
};

/// Class /Script/KuroGameplay.KuroSequenceRuntimeFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroSequenceRuntimeFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool SectionContains(class UMovieSceneSection* Section, FFrameTime Frame);                                               // [0xf083d0] Final|Native|Static|Private|BlueprintCallable 
	// void ResetMovieSceneCompiledData(class UMovieSceneSequence* Sequence);                                                   // [0xf08350] Final|Native|Static|Private|BlueprintCallable 
	// void MuteTrackByTag(class UMovieSceneSequence* Sequence, FName Tag, bool bIsMuted);                                      // [0xf07ec0] Final|Native|Static|Private|BlueprintCallable 
	// bool HandleSeqTexStreaming(class ULevelSequence* LevelSequences, bool bStartForceStreamIn);                              // [0xf07a10] Final|Native|Static|Private|BlueprintCallable 
	// TArray<UMovieSceneTrack*> GetTracks(FSequencerBindingRuntimeProxy& InBinding);                                           // [0xf07930] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// int32_t GetStartFrame(class UMovieSceneSection* Section);                                                                // [0xf078a0] Final|Native|Static|Private|BlueprintCallable 
	// TArray<FSequencerBindingRuntimeProxy> GetSpawnables(class UMovieSceneSequence* Sequence);                                // [0xf077d0] Final|Native|Static|Private|BlueprintCallable 
	// TArray<UMovieSceneSection*> GetSections(class UMovieSceneTrack* Track);                                                  // [0xf07700] Final|Native|Static|Private|BlueprintCallable 
	// int32_t GetPlaybackStart(class UMovieSceneSequence* Sequence);                                                           // [0xf07670] Final|Native|Static|Private|BlueprintCallable 
	// int32_t GetPlaybackEnd(class UMovieSceneSequence* Sequence);                                                             // [0xf075e0] Final|Native|Static|Private|BlueprintCallable 
	// class UObject* GetObjectTemplate(FSequencerBindingRuntimeProxy& InBinding);                                              // [0xf07540] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// TArray<UMovieSceneTrack*> GetMasterTracks(class UMovieSceneSequence* Sequence);                                          // [0xf07360] Final|Native|Static|Private|BlueprintCallable 
	// FTransform GetFrameTransform(class UMovieSceneTrack* Track, FFrameTime Frame);                                           // [0xf071a0] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// float GetFadeAmountAt(class UMovieSceneFadeSection* Section, FFrameTime Frame);                                          // [0xf070c0] Final|Native|Static|Private|BlueprintCallable 
	// int32_t GetEndFrame(class UMovieSceneSection* Section);                                                                  // [0xf06fa0] Final|Native|Static|Private|BlueprintCallable 
	// TArray<UMovieSceneTrack*> FindTracksByType(FSequencerBindingRuntimeProxy& InBinding, class UClass* TrackType);           // [0xf06d40] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// TArray<UMovieSceneTrack*> FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);          // [0xf06c30] Final|Native|Static|Private|BlueprintCallable 
	// FSequencerBindingRuntimeProxy FindBindingById(class UMovieSceneSequence* Sequence, FGuid BindingID);                     // [0xf06b40] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
};

/// Class /Script/KuroGameplay.KuroStaticMeshLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroStaticMeshLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void MergeSimpleCollisions(class UStaticMeshComponent* TemplateComponent, TArray<FTransform>& LocalTransforms);          // [0xf07de0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/KuroGameplay.PerformanceStatisticsLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UPerformanceStatisticsLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void StatisticsFromRawDataFiles();                                                                                       // [0xf08fd0] Final|Native|Static|Public|BlueprintCallable 
	// void ReadSectionFromFile(FString& FilePath);                                                                             // [0xf08000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void ReadAllSectionsFromDirectory();                                                                                     // [0xf07fe0] Final|Native|Static|Public|BlueprintCallable 
	// void Export();                                                                                                           // [0xf06b20] Final|Native|Static|Public|BlueprintCallable 
	// void Clear();                                                                                                            // [0xf06a30] Final|Native|Static|Public|BlueprintCallable 
	// void AddStatistics(FName SectionName, int32_t FrameCount, FString Tag, int32_t MeasureMode, float Time, FString UserDefineMessage); // [0xf067a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/KuroGameplay.GameBudgetAllocatorGroupConfig
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 4 pad: 0x0000
struct FGameBudgetAllocatorGroupConfig
{ 
	FName                                              GroupName;                                                  // 0x0000   (0x000C)  
	ESignificanceGroup                                 SignificanceGroup;                                          // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	uint32_t                                           TickPriority;                                               // 0x0010   (0x0004)  
	EDisableActorTickStrategy                          DisableActorTickStrategy;                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	uint32_t                                           DisableActorTickDistance;                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData02_7[0x5C];                                      // 0x001C   (0x005C)  MISSED
};

/// Struct /Script/KuroGameplay.GameBudgetAllocatorTickDetailConfig
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FGameBudgetAllocatorTickDetailConfig
{ 
	uint32_t                                           MaxTickInterval;                                            // 0x0000   (0x0004)  
	uint16_t                                           TickReductionStartSize;                                     // 0x0004   (0x0002)  
	uint16_t                                           TickReductionIntervalSize;                                  // 0x0006   (0x0002)  
};

/// Struct /Script/KuroGameplay.GameBudgetAllocatorAfterTickFunction
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
struct FGameBudgetAllocatorAfterTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/KuroGameplay.GameBudgetAllocatorTickFunction
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
struct FGameBudgetAllocatorTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/KuroGameplay.KuroProgressBarStyle
/// Size: 0x0240 (576 bytes) (0x000008 - 0x000248) align 8 pad: 0x0000
struct FKuroProgressBarStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        BackgroundImage;                                            // 0x0008   (0x0090)  
	FSlateBrush                                        FillImageMiddle;                                            // 0x0098   (0x0090)  
	FSlateBrush                                        FillImage;                                                  // 0x0128   (0x0090)  
	FSlateBrush                                        MarqueeImage;                                               // 0x01B8   (0x0090)  
};

/// Struct /Script/KuroGameplay.SequencerBindingRuntimeProxy
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FSequencerBindingRuntimeProxy
{ 
	FGuid                                              BindingID;                                                  // 0x0000   (0x0010)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/KuroGameplay.PerformanceStatisticsTagTreeNodeSerialize
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FPerformanceStatisticsTagTreeNodeSerialize
{ 
	FName                                              Tag;                                                        // 0x0000   (0x000C)  
	float                                              AverageTime;                                                // 0x000C   (0x0004)  
	float                                              MaxTime;                                                    // 0x0010   (0x0004)  
	int32_t                                            Mode;                                                       // 0x0014   (0x0004)  
	FString                                            UserDefineMessage;                                          // 0x0018   (0x0010)  
};

/// Struct /Script/KuroGameplay.PerformanceStatisticsTagTreeSerialize
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FPerformanceStatisticsTagTreeSerialize
{ 
	FPerformanceStatisticsTagTreeNodeSerialize         NodeSerialize;                                              // 0x0000   (0x0028)  
	TArray<FPerformanceStatisticsTagTreeNodeSerialize> ChildTags;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/KuroGameplay.PerformanceStatisticsUnitRecord
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FPerformanceStatisticsUnitRecord
{ 
	int32_t                                            FrameCount;                                                 // 0x0000   (0x0004)  
	FName                                              Tag;                                                        // 0x0004   (0x000C)  
	int32_t                                            Mode;                                                       // 0x0010   (0x0004)  
	float                                              Time;                                                       // 0x0014   (0x0004)  
	FString                                            UserDefineMessage;                                          // 0x0018   (0x0010)  
};

/// Struct /Script/KuroGameplay.PerformanceStatisticsSectionRecordSerialize
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FPerformanceStatisticsSectionRecordSerialize
{ 
	FName                                              SectionName;                                                // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FPerformanceStatisticsUnitRecord>           UnitRecordValues;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/KuroGameplay.PerformanceStatisticsSectionsSerialize
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FPerformanceStatisticsSectionsSerialize
{ 
	TArray<FPerformanceStatisticsSectionRecordSerialize> SectionRecords;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/KuroGameplay.PerformanceStatisticsTagNode
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 pad: 0x0000
struct FPerformanceStatisticsTagNode
{ 
	FName                                              Tag;                                                        // 0x0000   (0x000C)  
	int32_t                                            RecordFramesCount;                                          // 0x000C   (0x0004)  
	float                                              TotalTime;                                                  // 0x0010   (0x0004)  
	float                                              AverageTime;                                                // 0x0014   (0x0004)  
	float                                              MaxTime;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x6C];                                      // 0x001C   (0x006C)  MISSED
};

/// Struct /Script/KuroGameplay.PerformanceStatisticsTagNodeForSerialize
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FPerformanceStatisticsTagNodeForSerialize
{ 
	FName                                              Tag;                                                        // 0x0000   (0x000C)  
	int32_t                                            RecordFramesCount;                                          // 0x000C   (0x0004)  
	float                                              TotalTime;                                                  // 0x0010   (0x0004)  
	float                                              AverageTime;                                                // 0x0014   (0x0004)  
	float                                              MaxTime;                                                    // 0x0018   (0x0004)  
};

