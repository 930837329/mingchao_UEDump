
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

/// Enum /Script/KuroComponent.EAnimPerfTestSkelMeshLifeCycle
/// Size: 0x01 (1 bytes)
enum class EAnimPerfTestSkelMeshLifeCycle : uint8_t
{
	EAnimPerfTestSkelMeshLifeCycle__Transient                                        = 0,
	EAnimPerfTestSkelMeshLifeCycle__KeepInLevel                                      = 1
};

/// Enum /Script/KuroComponent.EAnimPerfTestBornFrom
/// Size: 0x01 (1 bytes)
enum class EAnimPerfTestBornFrom : uint8_t
{
	EAnimPerfTestBornFrom__PlayerStart                                               = 0,
	EAnimPerfTestBornFrom__Pawn                                                      = 1,
	EAnimPerfTestBornFrom__Owner                                                     = 2
};

/// Enum /Script/KuroComponent.EAnimPerfTestAnimSeqFilterMethod
/// Size: 0x01 (1 bytes)
enum class EAnimPerfTestAnimSeqFilterMethod : uint8_t
{
	EAnimPerfTestAnimSeqFilterMethod__Specific                                       = 0,
	EAnimPerfTestAnimSeqFilterMethod__Contains                                       = 1,
	EAnimPerfTestAnimSeqFilterMethod__StartsWith                                     = 2,
	EAnimPerfTestAnimSeqFilterMethod__EndsWith                                       = 3,
	EAnimPerfTestAnimSeqFilterMethod__EqualsTo                                       = 4
};

/// Enum /Script/KuroComponent.EAnimPerfTestRandomGenActorGroup
/// Size: 0x01 (1 bytes)
enum class EAnimPerfTestRandomGenActorGroup : uint8_t
{
	EAnimPerfTestRandomGenActorGroup__SpecificSkeletalMeshes                         = 0,
	EAnimPerfTestRandomGenActorGroup__AllSkeletalMeshes                              = 1
};

/// Enum /Script/KuroComponent.EAnimPerfTestActorsGenMethod
/// Size: 0x01 (1 bytes)
enum class EAnimPerfTestActorsGenMethod : uint8_t
{
	EAnimPerfTestActorsGenMethod__GenFromTemplate                                    = 0,
	EAnimPerfTestActorsGenMethod__GenRandomly                                        = 1,
	EAnimPerfTestActorsGenMethod__GenAll                                             = 2
};

/// Enum /Script/KuroComponent.EShapeType
/// Size: 0x01 (1 bytes)
enum class EShapeType : uint8_t
{
	EShapeType__Box                                                                  = 0,
	EShapeType__Sphere                                                               = 1,
	EShapeType__Sector                                                               = 2,
	EShapeType__Cylinder                                                             = 3
};

/// Enum /Script/KuroComponent.EKuroSceneItemStopRotateMethod
/// Size: 0x01 (1 bytes)
enum class EKuroSceneItemStopRotateMethod : uint8_t
{
	EKuroSceneItemStopRotateMethod__KeepCurrent                                      = 0,
	EKuroSceneItemStopRotateMethod__JumpToStart                                      = 1,
	EKuroSceneItemStopRotateMethod__JumpToEnd                                        = 2
};

/// Class /Script/KuroComponent.KuroAnimPerfTestComponent
/// Size: 0x00B0 (176 bytes) (0x0000C0 - 0x000170) align 8 pad: 0x0000
class UKuroAnimPerfTestComponent : public UActorComponent
{ 
public:
	int32_t                                            NumSkeletalMeshActorsToGenerate;                            // 0x00C0   (0x0004)  
	EAnimPerfTestBornFrom                              BornFrom;                                                   // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
	SDK_UNDEFINED(48,607) /* TWeakObjectPtr<APlayerStart*> */ __um(SkelMeshActorBirthplace);                       // 0x00C8   (0x0030)  
	EAnimPerfTestActorsGenMethod                       GenMethod;                                                  // 0x00F8   (0x0001)  
	EAnimPerfTestSkelMeshLifeCycle                     LifeCycle;                                                  // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00FA   (0x0002)  MISSED
	float                                              SkelMeshActorInterval;                                      // 0x00FC   (0x0004)  
	int32_t                                            SkelMeshLOD;                                                // 0x0100   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	class USkeletalMesh*                               SkelMeshTemplate;                                           // 0x0108   (0x0008)  
	class UAnimationAsset*                             AnimTemplate;                                               // 0x0110   (0x0008)  
	EAnimPerfTestRandomGenActorGroup                   ActorsRandGenGroup;                                         // 0x0118   (0x0001)  
	EAnimPerfTestAnimSeqFilterMethod                   AnimSeqFilterMethod;                                        // 0x0119   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x011A   (0x0006)  MISSED
	TArray<FString>                                    AnimSeqFilter;                                              // 0x0120   (0x0010)  
	TArray<class USkeletalMesh*>                       RandSkelMeshTemplates;                                      // 0x0130   (0x0010)  
	TArray<class UAnimSequence*>                       RandSkelMeshAniSeqs;                                        // 0x0140   (0x0010)  
	TArray<class AActor*>                              GeneratedSkelMeshActors;                                    // 0x0150   (0x0010)  
	unsigned char                                      UnknownData04_7[0x10];                                      // 0x0160   (0x0010)  MISSED
	// void GenerateSkeletalMeshActors();                                                                                       // [0x10a3dd0] Final|Native|Public|BlueprintCallable 
	// void DestroySkeletalMeshActors();                                                                                        // [0x10a3ca0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroComponent.KuroChainComponent
/// Size: 0x0108 (264 bytes) (0x000508 - 0x000610) align 16 pad: 0x0000
class UKuroChainComponent : public UMeshComponent
{ 
public:
	class UStaticMesh*                                 ChainMesh;                                                  // 0x0508   (0x0008)  
	FVector                                            Scale;                                                      // 0x0510   (0x000C)  
	int32_t                                            Segments;                                                   // 0x051C   (0x0004)  
	FVector                                            AdditiveRotation;                                           // 0x0520   (0x000C)  
	float                                              ChainLength;                                                // 0x052C   (0x0004)  
	FVector                                            EndPoint;                                                   // 0x0530   (0x000C)  
	bool                                               AttachStart;                                                // 0x053C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x053D   (0x0003)  MISSED
	FComponentReference                                AttachStartTo;                                              // 0x0540   (0x0030)  
	FName                                              AttachStartToSocket;                                        // 0x0570   (0x000C)  
	bool                                               AttachEnd;                                                  // 0x057C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x057D   (0x0003)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x0580   (0x0030)  
	FName                                              AttachEndToSocket;                                          // 0x05B0   (0x000C)  
	float                                              Gravity;                                                    // 0x05BC   (0x0004)  
	int32_t                                            Stiffness;                                                  // 0x05C0   (0x0004)  
	bool                                               SelfCollision;                                              // 0x05C4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x05C5   (0x0003)  MISSED
	float                                              SelfCollisionWidth;                                         // 0x05C8   (0x0004)  
	float                                              SelfCollisionThreshold;                                     // 0x05CC   (0x0004)  
	int32_t                                            FrameSkip;                                                  // 0x05D0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x05D4   (0x0004)  MISSED
	class UInstancedStaticMeshComponent*               InstanceComponent;                                          // 0x05D8   (0x0008)  
	unsigned char                                      UnknownData04_7[0x30];                                      // 0x05E0   (0x0030)  MISSED
	// void InitChain();                                                                                                        // [0x10a4010] Native|Protected|BlueprintCallable 
};

/// Class /Script/KuroComponent.KuroCharacterAnimationComponent
/// Size: 0x00E0 (224 bytes) (0x0000C0 - 0x0001A0) align 16 pad: 0x0000
class UKuroCharacterAnimationComponent : public UActorComponent
{ 
public:
	float                                              BufferTimeLength;                                           // 0x00C0   (0x0004)  
	float                                              BufferNowTime;                                              // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData00_7[0xD8];                                      // 0x00C8   (0x00D8)  MISSED
	// void StopModelBuffer();                                                                                                  // [0x10a4900] Final|Native|Public|BlueprintCallable 
	// void ResetModelQuat();                                                                                                   // [0x10a4180] Final|Native|Public|BlueprintCallable 
	// void GetTransformOffsetInWorld(FTransform Child, FTransform Parent);                                                     // [0x10a3ea0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void AddModelQuat(FQuat Quat, bool LockCenter);                                                                          // [0x10a38c0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/KuroComponent.KuroRegionShapeComponent
/// Size: 0x0008 (8 bytes) (0x000218 - 0x000220) align 16 pad: 0x0000
class UKuroRegionShapeComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0218   (0x0008)  MISSED
};

/// Class /Script/KuroComponent.KuroRegionBoxComponent
/// Size: 0x0010 (16 bytes) (0x000220 - 0x000230) align 16 pad: 0x0000
class UKuroRegionBoxComponent : public UKuroRegionShapeComponent
{ 
public:
	FVector                                            BoxExtent;                                                  // 0x0220   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x022C   (0x0004)  MISSED
};

/// Class /Script/KuroComponent.KuroRegionCylinderComponent
/// Size: 0x0010 (16 bytes) (0x000220 - 0x000230) align 16 pad: 0x0000
class UKuroRegionCylinderComponent : public UKuroRegionShapeComponent
{ 
public:
	float                                              Radius;                                                     // 0x0220   (0x0004)  
	float                                              HalfHeight;                                                 // 0x0224   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0228   (0x0008)  MISSED
};

/// Class /Script/KuroComponent.KuroRegionDetectComponent
/// Size: 0x0100 (256 bytes) (0x0000C0 - 0x0001C0) align 8 pad: 0x0000
class UKuroRegionDetectComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(80,608) /* TMap<FString, UKuroRegionShapeComponent*> */ __um(RegionMap);                         // 0x00C0   (0x0050)  
	SDK_UNDEFINED(80,609) /* TMap<FString, UKuroRegionEventBinder*> */ __um(RegionEventMap);                       // 0x0110   (0x0050)  
	SDK_UNDEFINED(16,610) /* TArray<TWeakObjectPtr<AActor*>> */ __um(EventTargets);                                // 0x0160   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0170   (0x0050)  MISSED
	// void SetEventTargets(TArray<AActor*> DetectTargets);                                                                     // [0x10a42c0] Final|Native|Public|BlueprintCallable 
	// void SetEventTarget(class AActor* DetectTarget);                                                                         // [0x10a4230] Final|Native|Public|BlueprintCallable 
	// void SetDebugMode(bool IsOpen);                                                                                          // [0x10a41a0] Final|Native|Public|BlueprintCallable 
	// class UKuroRegionEventBinder* GetRegionEvent(FString RegionName);                                                        // [0x10a3df0] Final|Native|Public|BlueprintCallable 
	// bool Detect(FVector& Point, FString RegionName);                                                                         // [0x10a3cc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/KuroComponent.KuroRegionEventBinder
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UKuroRegionEventBinder : public UObject
{ 
public:
	FString                                            RegionName;                                                 // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,611) /* FMulticastInlineDelegate */ __um(callback);                                           // 0x0040   (0x0010)  
};

/// Class /Script/KuroComponent.KuroRegionSectorComponent
/// Size: 0x0010 (16 bytes) (0x000220 - 0x000230) align 16 pad: 0x0000
class UKuroRegionSectorComponent : public UKuroRegionShapeComponent
{ 
public:
	float                                              Radius;                                                     // 0x0220   (0x0004)  
	float                                              Angle;                                                      // 0x0224   (0x0004)  
	float                                              HalfHeight;                                                 // 0x0228   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x022C   (0x0004)  MISSED
};

/// Class /Script/KuroComponent.KuroRegionSphereComponent
/// Size: 0x0010 (16 bytes) (0x000220 - 0x000230) align 16 pad: 0x0000
class UKuroRegionSphereComponent : public UKuroRegionShapeComponent
{ 
public:
	float                                              Radius;                                                     // 0x0220   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0224   (0x000C)  MISSED
};

/// Class /Script/KuroComponent.KuroSceneItemGuidePathComponent
/// Size: 0x0058 (88 bytes) (0x0000C0 - 0x000118) align 8 pad: 0x0000
class UKuroSceneItemGuidePathComponent : public UActorComponent
{ 
public:
	bool                                               HasFinishTag;                                               // 0x00C0   (0x0001)  
	bool                                               HasActiveTag;                                               // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00C2   (0x0006)  MISSED
	class UNiagaraComponent*                           NiagaraComponent;                                           // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x00D0   (0x0048)  MISSED
	// void StartTick(FLinearColor Normal, FLinearColor ChangeCoefficient, FLinearColor Finish, FName ParameterName, float TotalCountDown, float CurCountDown); // [0x10a4700] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/KuroComponent.KuroSceneItemMoveComponent
/// Size: 0x00E8 (232 bytes) (0x0000C0 - 0x0001A8) align 8 pad: 0x0000
class UKuroSceneItemMoveComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	SDK_UNDEFINED(16,612) /* FMulticastInlineDelegate */ __um(OnStopCallback);                                     // 0x00C8   (0x0010)  
	TArray<float>                                      SplineSpeeds;                                               // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_7[0xC0];                                      // 0x00E8   (0x00C0)  MISSED
	// bool StopRotate(EKuroSceneItemStopRotateMethod StopMethod);                                                              // [0x10a4920] Final|Native|Public  
	// bool StartRotate();                                                                                                      // [0x10a46d0] Final|Native|Public  
	// void StartMoveWithSpline(class USplineComponent* SplineComponent, bool Repeat, bool Cycle, bool KeepLookAt, TArray<float> Speeds); // [0x10a44d0] Final|Native|Public|BlueprintCallable 
	// void SetTickingRotateEnable(bool bEnabled);                                                                              // [0x10a4440] Final|Native|Public  
	// void SetTickingMoveEnable(bool bEnabled);                                                                                // [0x10a43b0] Final|Native|Public  
	// void OnStopMoveToFirstPoint();                                                                                           // [0x10a4160] Final|Native|Private 
	// bool IsRotating();                                                                                                       // [0x10a4130] Final|Native|Public|Const 
	// bool IsMoving();                                                                                                         // [0x10a4100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool InitRotationData(class AActor* TargetActor, bool IsLoop);                                                           // [0x10a4030] Final|Native|Public  
	// bool AddRotationStep(FRotator& BeginRotation, FRotator& EndRotation, float TimeSec, float CdSec, class UCurveFloat* RotateCurve); // [0x10a3ac0] Final|Native|Public|HasOutParms|HasDefaults 
	// void AddMoveTarget(FVector Loc, float MoveTime, float WaitTime);                                                         // [0x10a39a0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/KuroComponent.KuroSplineChainComponent
/// Size: 0x0030 (48 bytes) (0x000610 - 0x000640) align 16 pad: 0x0000
class UKuroSplineChainComponent : public UKuroChainComponent
{ 
public:
	float                                              SplineMaxLength;                                            // 0x0610   (0x0004)  
	float                                              MeshMinScale;                                               // 0x0614   (0x0004)  
	float                                              MeshMaxScale;                                               // 0x0618   (0x0004)  
	float                                              MeshXYScaleRatio;                                           // 0x061C   (0x0004)  
	float                                              SegmentLengthMinScale;                                      // 0x0620   (0x0004)  
	float                                              SegmentLengthMaxScale;                                      // 0x0624   (0x0004)  
	class USplineComponent*                            SplineComponent;                                            // 0x0628   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0630   (0x0010)  MISSED
	// void UpdateSplineChainIndex();                                                                                           // [0x10a49b0] Native|Protected|BlueprintCallable 
};

