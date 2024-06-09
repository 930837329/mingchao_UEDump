
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/KuroMovement.ETriggerAreaType
/// Size: 0x01 (1 bytes)
enum class ETriggerAreaType : uint8_t
{
	ETriggerAreaType__Water                                                          = 0,
	ETriggerAreaType__Other                                                          = 1
};

/// Enum /Script/KuroMovement.ESprintVaultType
/// Size: 0x01 (1 bytes)
enum class ESprintVaultType : uint8_t
{
	ESprintVaultType__None                                                           = 0,
	ESprintVaultType__Short                                                          = 1,
	ESprintVaultType__Long                                                           = 2
};

/// Enum /Script/KuroMovement.EClimbingArriveType
/// Size: 0x01 (1 bytes)
enum class EClimbingArriveType : uint8_t
{
	EClimbingArriveType__None                                                        = 0,
	EClimbingArriveType__ClimbOnTop                                                  = 1,
	EClimbingArriveType__ClimbVault                                                  = 2,
	EClimbingArriveType__ClimbDownArrive                                             = 3,
	EClimbingArriveType__ClimbBlockUp                                                = 4
};

/// Enum /Script/KuroMovement.EKDMRecordType
/// Size: 0x01 (1 bytes)
enum class EKDMRecordType : uint8_t
{
	KDM_NONE                                                                         = 0,
	KDM_LOCATION                                                                     = 1,
	KDM_MOVEMENTMODE                                                                 = 2,
	KDM_CUSTOM_VECTOR_01                                                             = 4,
	KDM_CUSTOM_VECTOR_02                                                             = 8,
	KDM_ALL                                                                          = 15
};

/// Enum /Script/KuroMovement.EKDMDrawDebugType
/// Size: 0x01 (1 bytes)
enum class EKDMDrawDebugType : uint8_t
{
	EKDMDrawDebugType__OPEN                                                          = 0,
	EKDMDrawDebugType__CLOSE                                                         = 1,
	EKDMDrawDebugType__STOP                                                          = 2
};

/// Class /Script/KuroMovement.KuroClimbObject
/// Size: 0x01E0 (480 bytes) (0x000030 - 0x000210) align 16 pad: 0x0000
class UKuroClimbObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1E0];                                     // 0x0030   (0x01E0)  MISSED
	// TEnumAsByte<EClimbingArriveType> TryUpArrives(FVector InputDirect, float DebugDrawDuration, FTransform& OutTrans);       // [0xf54540] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool TryStartClimb(FTransform Trans, float DebugDrawDuration, FTransform& OutTrans);                                     // [0xf54360] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// TEnumAsByte<ESprintVaultType> TrySprintVault(float DebugDrawDuration, FTransform& OutTrans, float& OutLongOffset);       // [0xf541f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// TEnumAsByte<EClimbingArriveType> TryClimbingArrives(FVector InputDirect, float DebugDrawDuration, FTransform& OutTrans, bool NeedTryBlockUp); // [0xf54020] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SyncFromOther(class UKuroClimbObject* Other);                                                                       // [0xf53f90] Final|Native|Public|BlueprintCallable 
	// bool ProcessClimbing(FVector MoveSpeed, float DeltaTime, bool IsTryMove, float DebugDrawDuration, FTransform& OutTrans); // [0xf53a90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool NeedFollowHangOnStartingClimb();                                                                                    // [0xf536d0] Final|Native|Public|BlueprintCallable 
	// void InitUpArrives(TArray<FVector> InUpArriveMoveOffsets, TArray<float> InHeightMins, TArray<float> InHeightMaxs);       // [0xf53180] Final|Native|Public|BlueprintCallable 
	// void InitSprintVault(float InForwardBlockHeight, float InForwardBlockRadius, float InForwardBlockDistanceMin, float InForwardBlockDistanceMax, FVector InSprintVaultMoveOffset, float InHeightMin, float InHeightMax, float InSprintVaultLongNeedDistance, float InSprintVaultLongHeight, TEnumAsByte<ETraceTypeQuery> InBlockChannel, float SprintVaultLongMin, float SprintVaultLongMax, float SprintVaultBlockMaxAngle); // [0xf52d70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void InitClimbSafety(float InRadius, float InHalfHeight, float InMaxOffset);                                             // [0xf52c50] Final|Native|Public|BlueprintCallable 
	// void InitBlockUps(FVector InBlockUpOffset, float InBlockUpDetectRadius, float InBlockUpDetectDistance, float InBlockUpBackDistance, float InBlockUpBackMin, FVector InBlockUpFinalMove, float BlockUpVerticalRangeMin, float BlockUpVerticalRangeMax); // [0xf529a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void InitBase(class UShapeComponent* InShapeComp, TEnumAsByte<ECollisionChannel> InClimbChannel, TArray<FVector> BaseLocations, float InSphereRadius, float InActorToWallDist, float InDetectLength, float InSafetyHalfHeight, float InSafetyRadius); // [0xf526a0] Final|Native|Public|BlueprintCallable 
	// FVector GetSecondMoveOffset();                                                                                           // [0xf52640] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FVector GetSafetyLocation();                                                                                             // [0xf52600] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void ExitClimb();                                                                                                        // [0xf52520] Final|Native|Public|BlueprintCallable 
	// void ConfirmMove();                                                                                                      // [0xf52500] Final|Native|Public|BlueprintCallable 
	// bool ClimbBlock();                                                                                                       // [0xf524d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroMovement.KuroDebugMovementComponent
/// Size: 0x01A0 (416 bytes) (0x0004E0 - 0x000680) align 16 pad: 0x0000
class UKuroDebugMovementComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            DrawDebugCount;                                             // 0x04E0   (0x0004)  
	bool                                               bShowLog : 1;                                               // 0x04E4:0 (0x0001)  
	EKDMDrawDebugType                                  bDrawDebug;                                                 // 0x04E5   (0x0001)  
	unsigned char                                      UnknownData00_7[0x19A];                                     // 0x04E6   (0x019A)  MISSED
	// void UnResigter();                                                                                                       // [0xf546f0] Final|Native|Public|BlueprintCallable 
	// void SetDebug(bool bDebug, bool bDetial);                                                                                // [0xf53ec0] Final|Native|Public|BlueprintCallable 
	// void Resigter();                                                                                                         // [0xf53ea0] Final|Native|Public|BlueprintCallable 
	// void RecordModifyInfo(FString Context, FVector CustomVector, TEnumAsByte<EKDMRecordType> Type);                          // [0xf53ca0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// FString KuroDebugMovementBaseRecordToString(FBaseRecord Record);                                                         // [0xf53390] Final|Native|Static|Public|BlueprintCallable 
	// TArray<FSingleFrameDebugInfo> GetRecentRecords();                                                                        // [0xf525c0] Final|Native|Public|BlueprintCallable 
	// FString GetFrameCountInfo();                                                                                             // [0xf52540] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/KuroMovement.KuroMoveTrigger
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AKuroMoveTrigger : public AActor
{ 
public:
	ETriggerAreaType                                   AreaType;                                                   // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02A9   (0x0007)  MISSED
	// void OnEnterOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xf53860] Final|Native|Protected|HasOutParms 
	// void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xf53700] Final|Native|Protected 
};

/// Class /Script/KuroMovement.KuroMoveBoxTrigger
/// Size: 0x0008 (8 bytes) (0x0002B0 - 0x0002B8) align 8 pad: 0x0000
class AKuroMoveBoxTrigger : public AKuroMoveTrigger
{ 
public:
	class UBoxComponent*                               BoxCollision;                                               // 0x02B0   (0x0008)  
};

/// Class /Script/KuroMovement.KuroMoveBrushTrigger
/// Size: 0x0010 (16 bytes) (0x0002B0 - 0x0002C0) align 8 pad: 0x0000
class AKuroMoveBrushTrigger : public AKuroMoveTrigger
{ 
public:
	class ABrush*                                      Volume;                                                     // 0x02B0   (0x0008)  
	class USceneComponent*                             Root;                                                       // 0x02B8   (0x0008)  
};

/// Class /Script/KuroMovement.KuroMovementBPLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroMovementBPLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool KuroSoar(float DeltaSeconds, class UCharacterMovementComponent* CharMoveComp, float AirFriction, float Aerodynamics, FVector Gravity, FVector SoarPlaneNormal); // [0xf534e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/KuroMovement.OverlapActorRecord
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FOverlapActorRecord
{ 
	ETriggerAreaType                                   Area;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class AActor*                                      Actor;                                                      // 0x0008   (0x0008)  
	bool                                               EnterOverlap;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/KuroMovement.KuroMoveTriggerController
/// Size: 0x0020 (32 bytes) (0x0002A8 - 0x0002C8) align 8 pad: 0x0000
class AKuroMoveTriggerController : public AInfo
{ 
public:
	SDK_UNDEFINED(16,1464) /* FMulticastInlineDelegate */ __um(callback);                                          // 0x02A8   (0x0010)  
	TArray<FOverlapActorRecord>                        Records;                                                    // 0x02B8   (0x0010)  
	// void UnRegisterController();                                                                                             // [0xf546d0] Final|Native|Static|Public|BlueprintCallable 
	// void RegisterController(class AKuroMoveTriggerController* ControllerPtr);                                                // [0xf53e20] Final|Native|Static|Public|BlueprintCallable 
	// void InitAllTriggers();                                                                                                  // [0xf52680] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/KuroMovement.BaseRecord
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align 4 pad: 0x0000
struct FBaseRecord
{ 
	FVector                                            ActorLocation;                                              // 0x0000   (0x000C)  
	FRotator                                           ActorRotation;                                              // 0x000C   (0x000C)  
	FVector                                            MeshLocation;                                               // 0x0018   (0x000C)  
	FVector                                            CustomVector01;                                             // 0x0024   (0x000C)  
	FVector                                            CustomVector02;                                             // 0x0030   (0x000C)  
	TEnumAsByte<EMovementMode>                         MovementMode;                                               // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x003D   (0x0007)  MISSED
};

/// Struct /Script/KuroMovement.DebugModifyRecord
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FDebugModifyRecord
{ 
	FString                                            Context;                                                    // 0x0000   (0x0010)  
	FBaseRecord                                        Record;                                                     // 0x0010   (0x0044)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/KuroMovement.DebugTickGroupRecord
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FDebugTickGroupRecord
{ 
	FBaseRecord                                        Record;                                                     // 0x0000   (0x0044)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FDebugModifyRecord>                         ModifyRecords;                                              // 0x0048   (0x0010)  
};

/// Struct /Script/KuroMovement.SingleFrameDebugInfo
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 pad: 0x0000
struct FSingleFrameDebugInfo
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FDebugTickGroupRecord                              TickStartRecord;                                            // 0x0008   (0x0058)  
	FDebugTickGroupRecord                              PositionTickEnd;                                            // 0x0060   (0x0058)  
	SDK_UNDEFINED(80,1465) /* TMap<TEnumAsByte<ETickingGroup>, FDebugTickGroupRecord> */ __um(TickGroupDebugPositionInfo); // 0x00B8   (0x0050)  
};

