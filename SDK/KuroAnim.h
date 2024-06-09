
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: KuroGAS
/// dependency: LevelSequence

/// Enum /Script/KuroAnim.ECombineCurveMode
/// Size: 0x01 (1 bytes)
enum class ECombineCurveMode : uint8_t
{
	ECombineCurveMode__Replenish                                                     = 0,
	ECombineCurveMode__Accumulate                                                    = 1,
	ECombineCurveMode__Override                                                      = 2,
	ECombineCurveMode__CleanAndOverride                                              = 3
};

/// Enum /Script/KuroAnim.EEyeBlinkMode
/// Size: 0x01 (1 bytes)
enum class EEyeBlinkMode : uint8_t
{
	EEyeBlinkMode__Texture                                                           = 0,
	EEyeBlinkMode__Morph                                                             = 1
};

/// Enum /Script/KuroAnim.ECollisionType
/// Size: 0x01 (1 bytes)
enum class ECollisionType : uint8_t
{
	ECollisionType__None                                                             = 0,
	ECollisionType__Spherical                                                        = 1,
	ECollisionType__Cylinder                                                         = 2,
	ECollisionType__Capsule                                                          = 3,
	ECollisionType__Planar                                                           = 4
};

/// Enum /Script/KuroAnim.EClothType
/// Size: 0x01 (1 bytes)
enum class EClothType : uint8_t
{
	EClothType__Line                                                                 = 0,
	EClothType__Cloth                                                                = 1,
	EClothType__Dress                                                                = 2
};

/// Enum /Script/KuroAnim.EAdjustBoxType
/// Size: 0x01 (1 bytes)
enum class EAdjustBoxType : uint8_t
{
	EAdjustBoxType__OpenMode                                                         = 0,
	EAdjustBoxType__AlwaysVertical                                                   = 1
};

/// Enum /Script/KuroAnim.EAdjustCapsuleType
/// Size: 0x01 (1 bytes)
enum class EAdjustCapsuleType : uint8_t
{
	EAdjustCapsuleType__OpenMode                                                     = 0,
	EAdjustCapsuleType__ThreeDimension                                               = 1,
	EAdjustCapsuleType__AlwaysVertical                                               = 2
};

/// Enum /Script/KuroAnim.EStandTurnType
/// Size: 0x01 (1 bytes)
enum class EStandTurnType : uint8_t
{
	EStandTurnType__None                                                             = 0,
	EStandTurnType__Left                                                             = 1,
	EStandTurnType__Right                                                            = 2
};

/// Enum /Script/KuroAnim.EMoveDirection
/// Size: 0x01 (1 bytes)
enum class EMoveDirection : uint8_t
{
	EMoveDirection__Forward                                                          = 0,
	EMoveDirection__Backward                                                         = 1,
	EMoveDirection__Left                                                             = 2,
	EMoveDirection__Right                                                            = 3,
	EMoveDirection__Stop                                                             = 4
};

/// Enum /Script/KuroAnim.EExitClimbType
/// Size: 0x01 (1 bytes)
enum class EExitClimbType : uint8_t
{
	EExitClimbType__Leave                                                            = 0,
	EExitClimbType__Water                                                            = 1,
	EExitClimbType__Top                                                              = 2,
	EExitClimbType__Bottom                                                           = 3,
	EExitClimbType__Jump                                                             = 4,
	EExitClimbType__Unknown                                                          = 5,
	EExitClimbType__Sprint                                                           = 6,
	EExitClimbType__Vault                                                            = 7,
	EExitClimbType__SprintVaultFar                                                   = 8,
	EExitClimbType__SprintVaultNear                                                  = 9,
	EExitClimbType__BlockUp                                                          = 10
};

/// Enum /Script/KuroAnim.EEnterClimbType
/// Size: 0x01 (1 bytes)
enum class EEnterClimbType : uint8_t
{
	EEnterClimbType__Air                                                             = 0,
	EEnterClimbType__Water                                                           = 1,
	EEnterClimbType__Ground                                                          = 2,
	EEnterClimbType__Down                                                            = 3,
	EEnterClimbType__Skill                                                           = 4
};

/// Enum /Script/KuroAnim.EClimbStateType
/// Size: 0x01 (1 bytes)
enum class EClimbStateType : uint8_t
{
	EClimbStateType__None                                                            = 0,
	EClimbStateType__EnterClimb                                                      = 1,
	EClimbStateType__Climbing                                                        = 2,
	EClimbStateType__ExitClimb                                                       = 3
};

/// Enum /Script/KuroAnim.ECharViewDirectionStateType
/// Size: 0x01 (1 bytes)
enum class ECharViewDirectionStateType : uint8_t
{
	ECharViewDirectionStateType__LockDirection                                       = 0,
	ECharViewDirectionStateType__AimDirection                                        = 1,
	ECharViewDirectionStateType__FaceDirection                                       = 2
};

/// Enum /Script/KuroAnim.ECharMoveStateType
/// Size: 0x01 (1 bytes)
enum class ECharMoveStateType : uint8_t
{
	ECharMoveStateType__Other                                                        = 0,
	ECharMoveStateType__Stand                                                        = 1,
	ECharMoveStateType__Walk                                                         = 2,
	ECharMoveStateType__WalkStop                                                     = 3,
	ECharMoveStateType__Run                                                          = 4,
	ECharMoveStateType__RunStop                                                      = 5,
	ECharMoveStateType__Sprint                                                       = 6,
	ECharMoveStateType__SprintStop                                                   = 7,
	ECharMoveStateType__Dodge                                                        = 8,
	ECharMoveStateType__LandRoll                                                     = 9,
	ECharMoveStateType__KnockDown                                                    = 10,
	ECharMoveStateType__Parry                                                        = 11,
	ECharMoveStateType__SoftKnock                                                    = 12,
	ECharMoveStateType__HeavyKnock                                                   = 13,
	ECharMoveStateType__NormalClimb                                                  = 14,
	ECharMoveStateType__FastClimb                                                    = 15,
	ECharMoveStateType__Glide                                                        = 16,
	ECharMoveStateType__KnockUp                                                      = 17,
	ECharMoveStateType__FastSwim                                                     = 18,
	ECharMoveStateType__NormalSwim                                                   = 19,
	ECharMoveStateType__Swing                                                        = 20,
	ECharMoveStateType__Captured                                                     = 21,
	ECharMoveStateType__Slide                                                        = 22,
	ECharMoveStateType__Flying                                                       = 23,
	ECharMoveStateType__EnterClimb                                                   = 24,
	ECharMoveStateType__ExitClimb                                                    = 25,
	ECharMoveStateType__Ski                                                          = 26,
	ECharMoveStateType__StandUp                                                      = 27
};

/// Enum /Script/KuroAnim.ECharPositionStateType
/// Size: 0x01 (1 bytes)
enum class ECharPositionStateType : uint8_t
{
	ECharPositionStateType__Ground                                                   = 0,
	ECharPositionStateType__Climb                                                    = 1,
	ECharPositionStateType__Air                                                      = 2,
	ECharPositionStateType__Water                                                    = 3
};

/// Enum /Script/KuroAnim.SightLockTurnMode
/// Size: 0x01 (1 bytes)
enum class SightLockTurnMode : uint8_t
{
	SightLockTurnMode__ZFirst                                                        = 0,
	SightLockTurnMode__XFirst                                                        = 1
};

/// Enum /Script/KuroAnim.SightLockMode
/// Size: 0x01 (1 bytes)
enum class SightLockMode : uint8_t
{
	SightLockMode__None                                                              = 0,
	SightLockMode__SightBoneFirst                                                    = 1,
	SightLockMode__Ratio                                                             = 2,
	SightLockMode__Shooting                                                          = 3
};

/// Enum /Script/KuroAnim.EndBoneIKMode
/// Size: 0x01 (1 bytes)
enum class EndBoneIKMode : uint8_t
{
	EndBoneIKMode__None                                                              = 0,
	EndBoneIKMode__AxisModeLockX                                                     = 1,
	EndBoneIKMode__AxisModeLockY                                                     = 2,
	EndBoneIKMode__FullRotationMode                                                  = 3
};

/// Enum /Script/KuroAnim.KuroAnimIKMode
/// Size: 0x01 (1 bytes)
enum class KuroAnimIKMode : uint8_t
{
	KuroAnimIKMode__DeltaPositionMode                                                = 0,
	KuroAnimIKMode__LocalPositionMode                                                = 1,
	KuroAnimIKMode__DeltaPositionFromCurveMode                                       = 2
};

/// Enum /Script/KuroAnim.KuroHumanIKMode
/// Size: 0x01 (1 bytes)
enum class KuroHumanIKMode : uint8_t
{
	KuroHumanIKMode__None                                                            = 0,
	KuroHumanIKMode__GroundMode                                                      = 1,
	KuroHumanIKMode__ClimbMode                                                       = 2,
	KuroHumanIKMode__SlideMode                                                       = 3
};

/// Class /Script/KuroAnim.KuroAdjustableBoxComponent
/// Size: 0x0038 (56 bytes) (0x000508 - 0x000540) align 16 pad: 0x0000
class UKuroAdjustableBoxComponent : public UBoxComponent
{ 
public:
	TArray<FName>                                      BindSocketNames;                                            // 0x0508   (0x0010)  
	float                                              AddExtent;                                                  // 0x0518   (0x0004)  
	float                                              MinExtent;                                                  // 0x051C   (0x0004)  
	float                                              MaxExtent;                                                  // 0x0520   (0x0004)  
	TEnumAsByte<EAdjustBoxType>                        AdjustBoxType;                                              // 0x0524   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1B];                                      // 0x0525   (0x001B)  MISSED
};

/// Class /Script/KuroAnim.KuroAdjustableCapsuleComponent
/// Size: 0x0040 (64 bytes) (0x000500 - 0x000540) align 16 pad: 0x0000
class UKuroAdjustableCapsuleComponent : public UCapsuleComponent
{ 
public:
	TArray<FName>                                      BindSocketNames;                                            // 0x0500   (0x0010)  
	float                                              AddRadius;                                                  // 0x0510   (0x0004)  
	float                                              MinRadius;                                                  // 0x0514   (0x0004)  
	float                                              MaxRadius;                                                  // 0x0518   (0x0004)  
	TEnumAsByte<EAdjustCapsuleType>                    AdjustCapsuleType;                                          // 0x051C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x23];                                      // 0x051D   (0x0023)  MISSED
};

/// Class /Script/KuroAnim.KuroAnimConfig
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UKuroAnimConfig : public UObject
{ 
public:
	float                                              DefaultFootOffset;                                          // 0x0030   (0x0004)  
	float                                              DefaultHighHeelsOffset;                                     // 0x0034   (0x0004)  
};

/// Class /Script/KuroAnim.KuroAnimInstance
/// Size: 0x00E8 (232 bytes) (0x000378 - 0x000460) align 16 pad: 0x0000
class UKuroAnimInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_3[0x68];                                      // 0x0378   (0x0068)  MISSED
	FVector2D                                          TurnLimitForBoneRotateAnimNode;                             // 0x03E0   (0x0008)  
	FVector2D                                          LookUpLimitForBoneRotateAnimNode;                           // 0x03E8   (0x0008)  
	bool                                               bRollBackToOriginForBoneRotateAnimNode;                     // 0x03F0   (0x0001)  
	bool                                               bStopForBoneRotateAnimNode;                                 // 0x03F1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x03F2   (0x0002)  MISSED
	float                                              TurnAngleForBoneRotateAnimNode;                             // 0x03F4   (0x0004)  
	float                                              LookUpAngleForBoneRotateAnimNode;                           // 0x03F8   (0x0004)  
	float                                              TurnOffsetForBoneRotateAnimNode;                            // 0x03FC   (0x0004)  
	float                                              LookUpOffsetForBoneRotateAnimNode;                          // 0x0400   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0404   (0x0004)  MISSED
	SDK_UNDEFINED(80,573) /* TMap<FName, UAnimSequence*> */ __um(ExtraRibbonAnims);                                // 0x0408   (0x0050)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0458   (0x0008)  MISSED
	// void UpdateSkillMoveInfo(float& DeltaTime, FRotator& RoleRotator, FVector& Speed, class ACharacter*& Character, float& RotatorMixed, FVector& Acceleration, FVector& RelativeAcceleration, FLeanAmount& LeanAmount, float& GroundLeanAmountLerpSpeed, FRotator& AimRotator, float& AimAngle, FVector2D& AimMoveMixed, float& RotatorSpeed, class AActor* SkillTarget, FVector& CachedActorLocation); // [0x108c860] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void UpdateRoleInfo(bool& StateGround, bool& StateGroundSprint, bool& StateGroundWalk, bool& StateGroundRun, bool& StateRunStop, bool& StateSprintStop, bool& StateWalkStop, bool& RunStop, bool& StateClimb, bool& StateAir, bool& StateAirGlide, bool& StateWater, bool& StateView, bool& StateAim, bool& StateFace); // [0x108c320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UpdateMoveInfoMixed(float& WalkRunMixed, float& DeltaTime, float& Slop, class UCurveFloat*& AngleToStepFrequency, class UCurveFloat*& AngleToStepLength, class UCurveFloat*& WalkCurve, class UCurveFloat*& RunCurve, float& SpeedSize, float& StepLengthMixed, float& AnimWalkSpeed, float& AnimRunSpeed, float& SprintSpeed, float& StandRate); // [0x108be90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UpdateIKInfoLocalValue(class ACharacter* Character, FRotator& MeshQuatInverse, FVector& MeshWorldLocation);         // [0x108ac40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void UpdateIKinfoInOtherState(class ACharacter*& Character, FVector& OverallOffsetLocation, FVector& LFootOffsetLocation, FVector& LFootNormalDirection, FVector& RFootOffsetLocation, FVector& RFootNormalDirection, FVector& LHandNormalDirection, FVector& RHandNormalDirection, float& HipLerpSpeed); // [0x108bb70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void UpdateIKInfoInGroundState(bool& HasWallForward, FVector& MeshWorldLocation, bool& IsMoving, float& DegMovementSlop, bool& bUpHill, bool& bDownHill, class ACharacter*& Character, class USkeletalMeshComponent*& Mesh, float& Speed, bool& HasMoveInput, float& RunWalkMix, FVector& OverallOffsetLocation, float& HipLerpSpeed, bool& bLFootNeedIK, FVector& LFootOffsetLocation, FVector& LFootNormalDirection, FHitResult& LFootHitResult, bool& bRFootNeedIK, FVector& RFootOffsetLocation, FVector& RFootNormalDirection, FHitResult& RFootHitResult, bool UseCurveFootLocation); // [0x108a3d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void UpdateIKinfoInClimbState(class UAnimInstance* AnimInstance, FVector& MeshWorldLocation, FRotator& QuatInverse, FVector& OverallOffsetLocation, float& ClimbIK, float& FastClimbDirection, bool& IsFastClimbState, class ACharacter*& Character, class USkeletalMeshComponent*& Mesh, float& HipLerpSpeed, float& Speed, bool& HasMoveInput, bool& IsClimbExitState, float& ClimbRadius, FVector& LFootOffsetRelativeLocation, FVector& LFootCachedLocation, FVector& LFootCachedNormal, FVector& LFootOffsetLocation, FVector& LFootNormalDirection, float& LFootPrevFrameAlpha, FVector& RFootOffsetRelativeLocation, FVector& RFootCachedLocation, FVector& RFootCachedNormal, FVector& RFootOffsetLocation, FVector& RFootNormalDirection, float& RFootPrevFrameAlpha, FVector& LHandOffsetRelativeLocation, FVector& LHandCachedLocation, FVector& LHandCachedNormal, FVector& LHandOffsetLocation, FVector& LHandNormalDirection, float& LHandPrevFrameAlpha, FVector& RHandOffsetRelativeLocation, FVector& RHandCachedLocation, FVector& RHandCachedNormal, FVector& RHandOffsetLocation, FVector& RHandNormalDirection, float& RHandPrevFrameAlpha); // [0x108ad70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void UpdateCharacterVar();                                                                                               // [0x108a3b0] Final|Native|Public|BlueprintCallable 
	// void UpdateCameraStateMoveInfo(FVector& Speed, class ACharacter*& Character, FRotator& RoleRotator, FVector& Acceleration, float& RotatorMixed, float& DeltaTime, FVector& RelativeAcceleration, FLeanAmount& LeanAmount, float& GroundLeanAmountLerpSpeed, FRotator& AimRotator, float& AimAngle); // [0x1089fe0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void UpdateBooleanVar();                                                                                                 // [0x1089fc0] Final|Native|Public|BlueprintCallable 
	// void UpdateBindRoleInfo();                                                                                               // [0x1089fa0] Final|Native|Public|BlueprintCallable 
	// void UpdateBattleIdle(float& BattleIdleTime, bool& bBattleIdle);                                                         // [0x1089ec0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UpdateAdditiveBlendInfo(class UAnimInstance* AnimInstance, bool& bUsingAdditiveBlend, bool& bUsingWholeBodyBlend, float& AdditiveBlendAlpha, FAdditiveBlendAlpha& Plevis, FAdditiveBlendAlpha& Spine, FAdditiveBlendAlpha& Head, FAdditiveBlendAlpha& ArmL, FAdditiveBlendAlpha& ArmR, FAdditiveBlendAlpha& Leg); // [0x1089b20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UpdateABP(float DeltaSeconds);                                                                                      // [0x1089a90] Native|Public|BlueprintCallable 
	// void UnRegisterActorAndResetInstance();                                                                                  // [0x1089a70] Final|Native|Public|BlueprintCallable 
	// void StartABP();                                                                                                         // [0x1089a50] Native|Public|BlueprintCallable 
	// void SetFootOffset(FVector& SkeletionAbsoluteLocation, FVector& IKDirection, float& BenchMarkDepth, float& RotationCorrectedDistance, class ACharacter*& Character, class USkeletalMeshComponent*& Mesh, bool& HasMoveInput, bool& bNeedIK, FVector& OffsetLocation, FVector& NormalDirection, FHitResult& OutHitResult); // [0x1089610] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetDebugTraceType(TEnumAsByte<EDrawDebugTrace> GroundTrace, TEnumAsByte<EDrawDebugTrace> ClimbTrace);               // [0x1089540] Final|Native|Public|BlueprintCallable 
	// void SetBoneRotateToLocationInfoStopEnd();                                                                               // [0x1089520] Final|Native|Public|BlueprintCallable 
	// void SetBoneRotateToLocationInfoStopBegin();                                                                             // [0x1089500] Final|Native|Public|BlueprintCallable 
	// void SetBoneRotateToLocationInfoRunTick(float TurnAngle, float LookUpAngle);                                             // [0x1089430] Final|Native|Public|BlueprintCallable 
	// void SetBoneRotateToLocationInfoRunEnd();                                                                                // [0x1089410] Final|Native|Public|BlueprintCallable 
	// void SetBoneRotateToLocationInfoRunBegin(float TurnAngle, float LookUpAngle, FVector2D TurnLimit, FVector2D LookUpLimit, float TurnOffset, float LookUpOffset); // [0x1089210] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void ResigterExtraRibbenOwnerAnimInstance(class UAnimInstance* AnimInstance);                                            // [0x1089180] Final|Native|Public|BlueprintCallable 
	// void RegisterActor(class ACharacter* Character);                                                                         // [0x10890f0] Final|Native|Public|BlueprintCallable 
	// void OnComponentStart();                                                                                                 // [0x25a7960] Event|Public|BlueprintEvent 
	// float IsContainExtraRibbonAnims();                                                                                       // [0x10890c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// FLeanAmount InterpLeanAmountTo(FLeanAmount& Current, FLeanAmount& Target, float DeltaTime, float InterpSpeed);           // [0x1088f20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void IKInfoLerpProcess(float& DeltaTime, float& HipLerpSpeed, FRotator& QuatInverse, FVector& OverallOffsetLocation, FVector& OverallOffsetLocationBeUsed, FVector& LFootOffsetRelativeLocation, FVector& LFootNormalRelativeDirection, FVector& LFootOffsetLocation, FVector& LFootNormalDirection, FVector& RFootOffsetRelativeLocation, FVector& RFootNormalRelativeDirection, FVector& RFootOffsetLocation, FVector& RFootNormalDirection, FVector& LHandOffsetRelativeLocation, FVector& LHandNormalRelativeDirection, FVector& LHandOffsetLocation, FVector& LHandNormalDirection, FVector& RHandOffsetRelativeLocation, FVector& RHandNormalRelativeDirection, FVector& RHandOffsetLocation, FVector& RHandNormalDirection); // [0x10887a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void GroundIKProcess(FVector& MeshWorldLocation, float& DegMovementSlop, class ACharacter*& Character, class USkeletalMeshComponent*& Mesh, bool& bUpHill, bool& bDownHill, float& Speed, bool& HasMoveInput, bool& bLFootNeedIK, FVector& LFootOffsetLocation, FVector& LFootNormalDirection, FHitResult& LFootHitResult, bool& bRFootNeedIK, FVector& RFootOffsetLocation, FVector& RFootNormalDirection, FHitResult& RFootHitResult, bool UseCurveFootLocation); // [0x1088110] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// FString GetDebugAnimNodeString();                                                                                        // [0x1088090] Final|Native|Public|BlueprintCallable 
	// void ClimbIKProcess(class UAnimInstance* AnimInstance, FVector& MeshWorldLocation, FRotator& QuatInverse, bool& IsClimbExitState, FVector& OverallOffsetLocation, float& ClimbIK, class ACharacter*& Character, class USkeletalMeshComponent*& Mesh, float& ClimbRadius, FVector& LFootOffsetRelativeLocation, FVector& LFootCachedLocation, FVector& LFootCachedNormal, FVector& LFootOffsetLocation, FVector& LFootNormalDirection, float& LFootPrevFrameAlpha, FVector& RFootOffsetRelativeLocation, FVector& RFootCachedLocation, FVector& RFootCachedNormal, FVector& RFootOffsetLocation, FVector& RFootNormalDirection, float& RFootPrevFrameAlpha, FVector& LHandOffsetRelativeLocation, FVector& LHandCachedLocation, FVector& LHandCachedNormal, FVector& LHandOffsetLocation, FVector& LHandNormalDirection, float& LHandPrevFrameAlpha, FVector& RHandOffsetRelativeLocation, FVector& RHandCachedLocation, FVector& RHandCachedNormal, FVector& RHandOffsetLocation, FVector& RHandNormalDirection, float& RHandPrevFrameAlpha); // [0x1087480] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void CalucateClimbOffset(class ACharacter*& Character, FVector& IKDirection, FVector& OffsetRelativeLocation, FVector& BoneLocation, float OffsetCorrection, float TraceRadius, FVector& MeshWorldLocation, FRotator& QuatInverse, FVector& CachedLocation, FVector& CachedNormal, float& IKCurveValue, float& ClimbRadius, float& PrevFrameAlpha, FVector& OutOffset, FVector& OutNormal, bool& bSuccess); // [0x1086f10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// float CalculateWalkRunMixed(int32_t& MoveState);                                                                         // [0x1086e70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float CalculateStepLengthMixed(class UCurveFloat*& AngleToStepLength, class UCurveFloat*& WalkCurve, class UCurveFloat*& RunCurve, float& Speed, float& Slop); // [0x1086c60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// float CalculateStandRate(class UCurveFloat*& AngleToStepFrequency, float& Slop, float& Speed, float& AnimWalkSpeed, float& AnimRunSpeed, float& SprintSpeed, float& StepLengthMix); // [0x10869e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void CalculateSpeedMixed(FRotator& RoleRotator, FRotator& AdditiveRotator, FVector& Speed, class ACharacter* Character, class UCurveFloat*& Curve, float& DeltaTime, float& CachedPercentFB, float& CachedPercentLR, FVeloctiyBlend& VelocityBlend); // [0x10866b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// FVector CalculateRelativeAcceleration(FVector& Speed, FVector& Acceleration, FRotator& RoleRotator, class ACharacter* Character); // [0x1086500] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FVector2D CalculateAimMixed(FVector& Speed, FRotator& RoleRotator, class ACharacter* Character);                         // [0x10863b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// void BindVarToCharacter(FVector& VelocityRef, FVector& ActorForwardVectorRef, FRotator& ActorRotationRef, FRotator& ControlRotationRef, FVector& CurrentAccelerationRef, bool& bMoveBlockRef); // [0x1086160] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void BindEnumToRoleAnimInstance(class UObject* Component);                                                               // [0x10860d0] Final|Native|Public|BlueprintCallable 
	// void BindComponentVarToAnimInstance(class UObject* Component, FString ComponentVarName, FString InstanceVarName);        // [0x1085f20] Final|Native|Public|BlueprintCallable 
	// void BindBooleanVarToTag(bool& BooleanVarRef, FGameplayTag Tag);                                                         // [0x1085e20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void BindBooleanVarToActorTag(bool& BooleanVarRef, FName Tag);                                                           // [0x1085d20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// float AngleConversion(float& Angle);                                                                                     // [0x1085c70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/KuroAnim.KuroAnimInstanceChar
/// Size: 0x00A0 (160 bytes) (0x000460 - 0x000500) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class UKuroAnimInstanceChar : public UKuroAnimInstance
{ 
public:
	class UAbpLogicParams*                             LogicParams;                                                // 0x0460   (0x0008)  
	class ABaseCharacter*                              BaseCharacter;                                              // 0x0468   (0x0008)  
	float                                              DeltaTime;                                                  // 0x0470   (0x0004)  
	int32_t                                            EntityID;                                                   // 0x0474   (0x0004)  
	bool                                               bIsAutonomousProxy;                                         // 0x0478   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0479   (0x0003)  MISSED
	FVector                                            Velocity;                                                   // 0x047C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0488   (0x0018)  MISSED
	FVector                                            Acceleration;                                               // 0x04A0   (0x000C)  
	FVector                                            ActorForward;                                               // 0x04AC   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x04B8   (0x0004)  MISSED
	float                                              OnJumpSpeed;                                                // 0x04BC   (0x0004)  
	bool                                               bStunned;                                                   // 0x04C0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x17];                                      // 0x04C1   (0x0017)  MISSED
	FRotator                                           LowerBodyRotator;                                           // 0x04D8   (0x000C)  
	FVector                                            LocationProxy;                                              // 0x04E4   (0x000C)  
	SightLockMode                                      SightLockMode;                                              // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x04F1   (0x0007)  MISSED
};
#pragma pack(pop)

/// Class /Script/KuroAnim.KuroAnimInstanceMonster
/// Size: 0x0008 (8 bytes) (0x0004F8 - 0x000500) align 16 pad: 0x0000
class UKuroAnimInstanceMonster : public UKuroAnimInstanceChar
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x04F8   (0x0008)  MISSED
};

/// Struct /Script/KuroAnim.VeloctiyBlend
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FVeloctiyBlend
{ 
	float                                              Forward;                                                    // 0x0000   (0x0004)  
	float                                              Backward;                                                   // 0x0004   (0x0004)  
	float                                              Left;                                                       // 0x0008   (0x0004)  
	float                                              Right;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/KuroAnim.LeanAmount
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FLeanAmount
{ 
	float                                              ForwardAndBackward;                                         // 0x0000   (0x0004)  
	float                                              LeftAndRight;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/KuroAnim.AdditiveBlendAlpha
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FAdditiveBlendAlpha
{ 
	float                                              MeshSpaceAlpha;                                             // 0x0000   (0x0004)  
	float                                              AdditiveAlpha;                                              // 0x0004   (0x0004)  
	float                                              OverlayAlpha;                                               // 0x0008   (0x0004)  
};

/// Class /Script/KuroAnim.KuroAnimInstanceRole
/// Size: 0x02D8 (728 bytes) (0x0004F8 - 0x0007D0) align 16 pad: 0x0000
class UKuroAnimInstanceRole : public UKuroAnimInstanceChar
{ 
public:
	int32_t                                            PerformanceTypeCount;                                       // 0x04F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x04FC   (0x000C)  MISSED
	bool                                               bCanbeInterrupt;                                            // 0x0508   (0x0001)  
	bool                                               bMoveBlock;                                                 // 0x0509   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x050A   (0x0002)  MISSED
	float                                              TimeSeconds;                                                // 0x050C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0510   (0x0004)  MISSED
	bool                                               bIsNotNPC;                                                  // 0x0514   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0515   (0x0003)  MISSED
	int32_t                                            ChangeRoleCount;                                            // 0x0518   (0x0004)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x051C   (0x0001)  MISSED
	bool                                               bHasNPCTag;                                                 // 0x051D   (0x0001)  
	bool                                               bIsGoingToMove;                                             // 0x051E   (0x0001)  
	unsigned char                                      UnknownData05_6[0x5];                                       // 0x051F   (0x0005)  MISSED
	float                                              TurnMix;                                                    // 0x0524   (0x0004)  
	FVeloctiyBlend                                     SpeedMix;                                                   // 0x0528   (0x0010)  
	FVector2D                                          AimMoveMix;                                                 // 0x0538   (0x0008)  
	FVector                                            LocalAccel;                                                 // 0x0540   (0x000C)  
	FLeanAmount                                        LeanAmount;                                                 // 0x054C   (0x0008)  
	EMoveDirection                                     MoveDirection;                                              // 0x0554   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x0555   (0x0003)  MISSED
	float                                              GroundMovePlayRate;                                         // 0x0558   (0x0004)  
	float                                              WalkRunMix;                                                 // 0x055C   (0x0004)  
	float                                              StepSizeMix;                                                // 0x0560   (0x0004)  
	float                                              AimYaw;                                                     // 0x0564   (0x0004)  
	float                                              AimPitch;                                                   // 0x0568   (0x0004)  
	bool                                               bIsFightStand;                                              // 0x056C   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x056D   (0x0003)  MISSED
	FVector2D                                          MoveMix;                                                    // 0x0570   (0x0008)  
	float                                              CachePercentLR;                                             // 0x0578   (0x0004)  
	float                                              CachePercentFB;                                             // 0x057C   (0x0004)  
	EStandTurnType                                     StandTurnType;                                              // 0x0580   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x0581   (0x0003)  MISSED
	int32_t                                            LandSpeedIndex;                                             // 0x0584   (0x0004)  
	float                                              FallingSpeed;                                               // 0x0588   (0x0004)  
	float                                              ForecastLandWeight;                                         // 0x058C   (0x0004)  
	FVector                                            AirVelocity;                                                // 0x0590   (0x000C)  
	float                                              AirTargetYaw;                                               // 0x059C   (0x0004)  
	FVector                                            GlideMix;                                                   // 0x05A0   (0x000C)  
	float                                              SlideMix;                                                   // 0x05AC   (0x0004)  
	unsigned char                                      UnknownData09_6[0x18];                                      // 0x05B0   (0x0018)  MISSED
	FVector                                            AirSlideMix;                                                // 0x05C8   (0x000C)  
	FVector                                            HookRopeMix;                                                // 0x05D4   (0x000C)  
	bool                                               HookRopeSucceedSpeed;                                       // 0x05E0   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x05E1   (0x0003)  MISSED
	float                                              JumpMix;                                                    // 0x05E4   (0x0004)  
	FVector                                            SwimRootOffset;                                             // 0x05E8   (0x000C)  
	float                                              SwimAccelOffset;                                            // 0x05F4   (0x0004)  
	float                                              SwimAccelOffsetReal;                                        // 0x05F8   (0x0004)  
	float                                              SwimMix;                                                    // 0x05FC   (0x0004)  
	float                                              FastClimbMix;                                               // 0x0600   (0x0004)  
	float                                              ClimbBrakeMix;                                              // 0x0604   (0x0004)  
	bool                                               bIsClimbMoving;                                             // 0x0608   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x0609   (0x0003)  MISSED
	float                                              ClimbRadius;                                                // 0x060C   (0x0004)  
	int32_t                                            ClimbDirection;                                             // 0x0610   (0x0004)  
	int32_t                                            ValidClimbDirection;                                        // 0x0614   (0x0004)  
	KuroHumanIKMode                                    IKMode;                                                     // 0x0618   (0x0001)  
	bool                                               bIKNoLerp;                                                  // 0x0619   (0x0001)  
	unsigned char                                      UnknownData12_6[0x2];                                       // 0x061A   (0x0002)  MISSED
	FRotator                                           ComprehensiveRotator;                                       // 0x061C   (0x000C)  
	FVector                                            BeHitStandardizedDirect;                                    // 0x0628   (0x000C)  
	FVector                                            BeHitSocketLocation;                                        // 0x0634   (0x000C)  
	float                                              SightLockAlpha;                                             // 0x0640   (0x0004)  
	FVector                                            SightLockDirect;                                            // 0x0644   (0x000C)  
	bool                                               bInAimShotEnd;                                              // 0x0650   (0x0001)  
	unsigned char                                      UnknownData13_6[0x3];                                       // 0x0651   (0x0003)  MISSED
	float                                              AimYawMix;                                                  // 0x0654   (0x0004)  
	bool                                               bStateStop;                                                 // 0x0658   (0x0001)  
	bool                                               bStateSprintStop;                                           // 0x0659   (0x0001)  
	bool                                               bStateRunStop;                                              // 0x065A   (0x0001)  
	bool                                               bStateWalkStop;                                             // 0x065B   (0x0001)  
	bool                                               bStateGround;                                               // 0x065C   (0x0001)  
	bool                                               bStateGroundSprint;                                         // 0x065D   (0x0001)  
	bool                                               bStateGroundRun;                                            // 0x065E   (0x0001)  
	bool                                               bStateGroundWalk;                                           // 0x065F   (0x0001)  
	bool                                               bStateClimb;                                                // 0x0660   (0x0001)  
	bool                                               bStateAir;                                                  // 0x0661   (0x0001)  
	bool                                               bStateAirSlide;                                             // 0x0662   (0x0001)  
	bool                                               bStateAirGlide;                                             // 0x0663   (0x0001)  
	bool                                               bStateWater;                                                // 0x0664   (0x0001)  
	bool                                               bStateSkill;                                                // 0x0665   (0x0001)  
	bool                                               bStateLockDirection;                                        // 0x0666   (0x0001)  
	bool                                               bStateAimDirection;                                         // 0x0667   (0x0001)  
	bool                                               bStateFaceDirection;                                        // 0x0668   (0x0001)  
	bool                                               bStateBeHit;                                                // 0x0669   (0x0001)  
	bool                                               bStateHitPush;                                              // 0x066A   (0x0001)  
	bool                                               bStateBeHitFly;                                             // 0x066B   (0x0001)  
	bool                                               bStateDying;                                                // 0x066C   (0x0001)  
	bool                                               bStateDrown;                                                // 0x066D   (0x0001)  
	bool                                               bStateInBattle;                                             // 0x066E   (0x0001)  
	bool                                               bStateEnterBattle;                                          // 0x066F   (0x0001)  
	bool                                               bStateKeepSprint;                                           // 0x0670   (0x0001)  
	bool                                               bStateFastSwim;                                             // 0x0671   (0x0001)  
	bool                                               bStateSit;                                                  // 0x0672   (0x0001)  
	bool                                               bStateOverlapBaseAnim;                                      // 0x0673   (0x0001)  
	bool                                               bUseAdditive;                                               // 0x0674   (0x0001)  
	bool                                               bUseOverlapLayerAdditive;                                   // 0x0675   (0x0001)  
	bool                                               bStateLowerRightTurnBlending;                               // 0x0676   (0x0001)  
	bool                                               bStateLowerBlending;                                        // 0x0677   (0x0001)  
	bool                                               bStateWholeBodyBlend;                                       // 0x0678   (0x0001)  
	bool                                               bStateUseSpecialStateMachine;                               // 0x0679   (0x0001)  
	bool                                               bStateFastBlend;                                            // 0x067A   (0x0001)  
	unsigned char                                      UnknownData14_6[0x1];                                       // 0x067B   (0x0001)  MISSED
	float                                              LowerBlendAlpha;                                            // 0x067C   (0x0004)  
	FAdditiveBlendAlpha                                BlendAlphaPelvis;                                           // 0x0680   (0x000C)  
	FAdditiveBlendAlpha                                BlendAlphaSpine;                                            // 0x068C   (0x000C)  
	FAdditiveBlendAlpha                                BlendAlphaHead;                                             // 0x0698   (0x000C)  
	FAdditiveBlendAlpha                                BlendAlphaArmL;                                             // 0x06A4   (0x000C)  
	FAdditiveBlendAlpha                                BlendAlphaArmR;                                             // 0x06B0   (0x000C)  
	FAdditiveBlendAlpha                                BlendAlphaLeg;                                              // 0x06BC   (0x000C)  
	bool                                               bStateCast;                                                 // 0x06C8   (0x0001)  
	bool                                               bStateCastThrowing;                                         // 0x06C9   (0x0001)  
	bool                                               bStateCastSelecting;                                        // 0x06CA   (0x0001)  
	bool                                               bStateCastCasting;                                          // 0x06CB   (0x0001)  
	bool                                               bStateMoveShot;                                             // 0x06CC   (0x0001)  
	bool                                               bStateHoldShot;                                             // 0x06CD   (0x0001)  
	bool                                               bStateAiming;                                               // 0x06CE   (0x0001)  
	bool                                               bStateGeneralAiming;                                        // 0x06CF   (0x0001)  
	bool                                               bStateShotNotify;                                           // 0x06D0   (0x0001)  
	bool                                               bStateFixHook;                                              // 0x06D1   (0x0001)  
	bool                                               bStateAirNormalShot;                                        // 0x06D2   (0x0001)  
	bool                                               bStateAirNormalShotLeft;                                    // 0x06D3   (0x0001)  
	bool                                               bStateAirNormalShotRight;                                   // 0x06D4   (0x0001)  
	bool                                               bStateAirNormalShotFall;                                    // 0x06D5   (0x0001)  
	bool                                               bStateBurst;                                                // 0x06D6   (0x0001)  
	bool                                               bStateLimitForward;                                         // 0x06D7   (0x0001)  
	bool                                               bStateLimitBackward;                                        // 0x06D8   (0x0001)  
	bool                                               bLandRollWhenDying;                                         // 0x06D9   (0x0001)  
	bool                                               bCaught;                                                    // 0x06DA   (0x0001)  
	bool                                               bRagDollQuit;                                               // 0x06DB   (0x0001)  
	float                                              ExpresionAlpha;                                             // 0x06DC   (0x0004)  
	unsigned char                                      UnknownData15_6[0x8];                                       // 0x06E0   (0x0008)  MISSED
	bool                                               bEpresion;                                                  // 0x06E8   (0x0001)  
	unsigned char                                      UnknownData16_6[0x3];                                       // 0x06E9   (0x0003)  MISSED
	float                                              PerformanceCountDown;                                       // 0x06EC   (0x0004)  
	bool                                               bPerformance;                                               // 0x06F0   (0x0001)  
	unsigned char                                      UnknownData17_6[0x3];                                       // 0x06F1   (0x0003)  MISSED
	int32_t                                            PerformanceIndex;                                           // 0x06F4   (0x0004)  
	bool                                               bAllowPerformance;                                          // 0x06F8   (0x0001)  
	bool                                               bAcceptNewSkill;                                            // 0x06F9   (0x0001)  
	unsigned char                                      UnknownData18_6[0x6];                                       // 0x06FA   (0x0006)  MISSED
	bool                                               bStageMotionSki;                                            // 0x0700   (0x0001)  
	bool                                               bHugeItemPull;                                              // 0x0701   (0x0001)  
	bool                                               bHugeItemPullAngle;                                         // 0x0702   (0x0001)  
	unsigned char                                      UnknownData19_6[0x5];                                       // 0x0703   (0x0005)  MISSED
	SDK_UNDEFINED(80,574) /* TMap<FString, float> */   __um(SizeToCharHeightMap);                                  // 0x0708   (0x0050)  
	FVector2D                                          LandSpeedThresholds;                                        // 0x0758   (0x0008)  
	float                                              SpeedMixLerp;                                               // 0x0760   (0x0004)  
	float                                              GroundLeanLerp;                                             // 0x0764   (0x0004)  
	float                                              AnimWalkSpeed;                                              // 0x0768   (0x0004)  
	float                                              AnimRunSpeed;                                               // 0x076C   (0x0004)  
	float                                              AnimSprintSpeed;                                            // 0x0770   (0x0004)  
	float                                              AirLeanLerp;                                                // 0x0774   (0x0004)  
	float                                              JumpMixLerp;                                                // 0x0778   (0x0004)  
	float                                              SlideRotateLerp;                                            // 0x077C   (0x0004)  
	float                                              SlideRotateLerp2;                                           // 0x0780   (0x0004)  
	unsigned char                                      UnknownData20_6[0x4];                                       // 0x0784   (0x0004)  MISSED
	class UCurveFloat*                                 StandWalkStepCurve;                                         // 0x0788   (0x0008)  
	class UCurveFloat*                                 StandRunStepCurve;                                          // 0x0790   (0x0008)  
	class UCurveFloat*                                 ForecastLandCurve;                                          // 0x0798   (0x0008)  
	class UCurveFloat*                                 RelativeSpeedBlendCurve;                                    // 0x07A0   (0x0008)  
	class UCurveFloat*                                 AirLeanCurve;                                               // 0x07A8   (0x0008)  
	class UCurveFloat*                                 AngelToStepLengthCurve;                                     // 0x07B0   (0x0008)  
	class UCurveFloat*                                 AngleToStepFrequencyCurve;                                  // 0x07B8   (0x0008)  
	unsigned char                                      UnknownData21_7[0x10];                                      // 0x07C0   (0x0010)  MISSED
};

/// Struct /Script/KuroAnim.ClimbInfoStruct
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FClimbInfoStruct
{ 
	bool                                               IsClimbMoving;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector2D                                          ClimbInput;                                                 // 0x0004   (0x0008)  
	float                                              OnWallAngle;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/KuroAnim.ClimbStateStruct
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 pad: 0x0000
struct FClimbStateStruct
{ 
	EClimbStateType                                    ClimbState;                                                 // 0x0000   (0x0001)  
	EEnterClimbType                                    EnterClimbType;                                             // 0x0001   (0x0001)  
	EExitClimbType                                     ExitClimbType;                                              // 0x0002   (0x0001)  
};

/// Class /Script/KuroAnim.AbpLogicParams
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x000110) align 8 pad: 0x0000
class UAbpLogicParams : public UObject
{ 
public:
	bool                                               AcceptedNewBeHitRef;                                        // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            BeHitAnimRef;                                               // 0x0034   (0x0004)  
	bool                                               EnterFkRef;                                                 // 0x0038   (0x0001)  
	bool                                               DoubleHitInAirRef;                                          // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x003A   (0x0002)  MISSED
	FVector                                            BeHitDirectRef;                                             // 0x003C   (0x000C)  
	FVector                                            BeHitLocationRef;                                           // 0x0048   (0x000C)  
	FName                                              BeHitSocketNameRef;                                         // 0x0054   (0x000C)  
	ECharMoveStateType                                 CharMoveStateRef;                                           // 0x0060   (0x0001)  
	ECharPositionStateType                             CharPositionStateRef;                                       // 0x0061   (0x0001)  
	ECharViewDirectionStateType                        CharCameraStateRef;                                         // 0x0062   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x0063   (0x0001)  MISSED
	float                                              BattleIdleTimeRef;                                          // 0x0064   (0x0004)  
	float                                              DegMovementSlopeRef;                                        // 0x0068   (0x0004)  
	FVector                                            SightDirectRef;                                             // 0x006C   (0x000C)  
	bool                                               RagQuitStateRef;                                            // 0x0078   (0x0001)  
	bool                                               IsJumpRef;                                                  // 0x0079   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x007A   (0x0002)  MISSED
	FVector                                            AccelerationRef;                                            // 0x007C   (0x000C)  
	bool                                               IsMovingRef;                                                // 0x0088   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              SpeedRef;                                                   // 0x008C   (0x0004)  
	FVector                                            InputDirectRef;                                             // 0x0090   (0x000C)  
	FRotator                                           InputRotatorRef;                                            // 0x009C   (0x000C)  
	bool                                               IsFallingIntoWaterRef;                                      // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              GroundedTimeRef;                                            // 0x00AC   (0x0004)  
	bool                                               HasMoveInputRef;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FClimbInfoStruct                                   ClimbInfoRef;                                               // 0x00B4   (0x0010)  
	FClimbStateStruct                                  ClimbStateRef;                                              // 0x00C4   (0x0003)  
	unsigned char                                      UnknownData07_6[0x1];                                       // 0x00C7   (0x0001)  MISSED
	float                                              ClimbOnWallAngleRef;                                        // 0x00C8   (0x0004)  
	float                                              SprintSwimOffsetRef;                                        // 0x00CC   (0x0004)  
	float                                              SprintSwimOffsetLerpSpeedRef;                               // 0x00D0   (0x0004)  
	FVector                                            SlideForwardRef;                                            // 0x00D4   (0x000C)  
	bool                                               SlideSwitchThisFrameRef;                                    // 0x00E0   (0x0001)  
	bool                                               SlideStandModeRef;                                          // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x00E2   (0x0002)  MISSED
	float                                              JumpUpRateRef;                                              // 0x00E4   (0x0004)  
	bool                                               ForceExitStateStopRef;                                      // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	class AActor*                                      SkillTarget;                                                // 0x00F0   (0x0008)  
	float                                              LastActiveSkillTime;                                        // 0x00F8   (0x0004)  
	int32_t                                            SitDownDirect;                                              // 0x00FC   (0x0004)  
	int32_t                                            StandUpDirect;                                              // 0x0100   (0x0004)  
	bool                                               bSitDown;                                                   // 0x0104   (0x0001)  
	bool                                               bIsInPerformingPlot;                                        // 0x0105   (0x0001)  
	bool                                               bIsInSequence;                                              // 0x0106   (0x0001)  
	bool                                               bIsInSplineMove;                                            // 0x0107   (0x0001)  
	bool                                               bIsInUiCamera;                                              // 0x0108   (0x0001)  
	unsigned char                                      UnknownData10_7[0x7];                                       // 0x0109   (0x0007)  MISSED
};

/// Class /Script/KuroAnim.KuroAnimJsSubsystem
/// Size: 0x0068 (104 bytes) (0x000038 - 0x0000A0) align 8 pad: 0x0000
class UKuroAnimJsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0038   (0x0068)  MISSED
};

/// Class /Script/KuroAnim.KuroAnimLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroAnimLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void EndAnimNotifyStates(class UAnimInstance* AnimInstance);                                                             // [0x108e460] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroAnim.KuroAnimMathLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroAnimMathLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// FRotator Quat_FindBetween(FVector& v1, FVector& v2);                                                                     // [0x108e6e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FRotator LookRotation_UpFirst(FVector& Forward, FVector& Up);                                                            // [0x108e5e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FRotator LookRotation_ForwardFirst(FVector& Forward, FVector& Up);                                                       // [0x108e4e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/KuroAnim.KuroTrackRecorder
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x000110) align 8 pad: 0x0000
class UKuroTrackRecorder : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0030   (0x00E0)  MISSED
	// class AActor* GetShadow();                                                                                               // [0x108fa60] Final|Native|Public|BlueprintCallable 
	// FGuid GetMainGuid();                                                                                                     // [0x108fa30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/KuroAnim.KuroCameraRecorder
/// Size: 0x0008 (8 bytes) (0x000110 - 0x000118) align 8 pad: 0x0000
class UKuroCameraRecorder : public UKuroTrackRecorder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0110   (0x0008)  MISSED
};

/// Class /Script/KuroAnim.KuroCameraShake
/// Size: 0x0020 (32 bytes) (0x000190 - 0x0001B0) align 16 pad: 0x0000
class UKuroCameraShake : public UMatineeCameraShake
{ 
public:
	EAlphaBlendOption                                  BlendInMode;                                                // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	class UCurveFloat*                                 BlendInCustomCurve;                                         // 0x0198   (0x0008)  
	EAlphaBlendOption                                  BlendOutMode;                                               // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01A1   (0x0007)  MISSED
	class UCurveFloat*                                 BlendOutCustomCurve;                                        // 0x01A8   (0x0008)  
};

/// Class /Script/KuroAnim.KuroCharacterRecorder
/// Size: 0x0008 (8 bytes) (0x000110 - 0x000118) align 8 pad: 0x0000
class UKuroCharacterRecorder : public UKuroTrackRecorder
{ 
public:
	bool                                               bUseClone;                                                  // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0111   (0x0007)  MISSED
};

/// Class /Script/KuroAnim.KuroEffectRecorder
/// Size: 0x0000 (0 bytes) (0x000110 - 0x000110) align 8 pad: 0x0000
class UKuroEffectRecorder : public UKuroTrackRecorder
{ 
public:
};

/// Class /Script/KuroAnim.KuroMeshRecorder
/// Size: 0x0000 (0 bytes) (0x000110 - 0x000110) align 8 pad: 0x0000
class UKuroMeshRecorder : public UKuroTrackRecorder
{ 
public:
};

/// Class /Script/KuroAnim.KuroRecordCharacter
/// Size: 0x0040 (64 bytes) (0x0002A8 - 0x0002E8) align 8 pad: 0x0000
class AKuroRecordCharacter : public AActor
{ 
public:
	class USceneComponent*                             MainScene;                                                  // 0x02A8   (0x0008)  
	class USkeletalMeshComponent*                      SubMesh0;                                                   // 0x02B0   (0x0008)  
	class USkeletalMeshComponent*                      SubMesh1;                                                   // 0x02B8   (0x0008)  
	class USkeletalMeshComponent*                      SubMesh2;                                                   // 0x02C0   (0x0008)  
	class USkeletalMeshComponent*                      SubMesh3;                                                   // 0x02C8   (0x0008)  
	class USkeletalMeshComponent*                      SubMesh4;                                                   // 0x02D0   (0x0008)  
	class USkeletalMeshComponent*                      SubMesh5;                                                   // 0x02D8   (0x0008)  
	class USkeletalMeshComponent*                      SubMesh6;                                                   // 0x02E0   (0x0008)  
};

/// Class /Script/KuroAnim.KuroRecordEffect
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class AKuroRecordEffect : public AActor
{ 
public:
	// void Stop();                                                                                                             // [0x108faa0] Final|Native|Public|BlueprintCallable 
	// void Play();                                                                                                             // [0x108fa80] Final|Native|Public|BlueprintCallable 
	// void OnStop();                                                                                                           // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnPlay();                                                                                                           // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/KuroAnim.KuroRecorderLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroRecorderLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void CopyLevelSequence(class ULevelSequence* SourceSequence, class ULevelSequence* TargetSequence, float TimeOffset, TMap<FName, FGuid> RetargetAttached, TSet<UClass*> IgnoreClasses); // [0x108f6e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/KuroAnim.BranchBlendFilter
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FBranchBlendFilter
{ 
	FBoneReference                                     BoneConfig;                                                 // 0x0000   (0x0014)  
	int32_t                                            BlendDepth;                                                 // 0x0014   (0x0004)  
};

/// Struct /Script/KuroAnim.MaskLayer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FMaskLayer
{ 
	TArray<FBranchBlendFilter>                         MaskLayer;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/KuroAnim.AnimNode_AdditiveBoneBlend
/// Size: 0x01B0 (432 bytes) (0x000010 - 0x0001C0) align 8 pad: 0x0000
struct FAnimNode_AdditiveBoneBlend : FAnimNode_Base
{ 
	FPoseLink                                          BaseLayer;                                                  // 0x0010   (0x0010)  
	FPoseLink                                          OverlayLayer;                                               // 0x0020   (0x0010)  
	FPoseLink                                          AdditiveBasePose;                                           // 0x0030   (0x0010)  
	TArray<FAdditiveBlendAlpha>                        AdditiveBlendAlpha;                                         // 0x0040   (0x0010)  
	bool                                               bMeshSpaceAdd;                                              // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	TArray<FMaskLayer>                                 LayerSetup;                                                 // 0x0058   (0x0010)  
	float                                              ALPHA;                                                      // 0x0068   (0x0004)  
	float                                              ChestBlendDepth;                                            // 0x006C   (0x0004)  
	bool                                               bDebug;                                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<FBoneReference>                             SupperotBoneConfigs;                                        // 0x0078   (0x0010)  
	SDK_UNDEFINED(80,575) /* TMap<FName, int32_t> */   __um(SpecialCurves);                                        // 0x0088   (0x0050)  
	unsigned char                                      UnknownData02_7[0xE8];                                      // 0x00D8   (0x00E8)  MISSED
};

/// Struct /Script/KuroAnim.AnimNode_BoneRotateToLocation
/// Size: 0x0050 (80 bytes) (0x0000D0 - 0x000120) align 8 pad: 0x0000
struct FAnimNode_BoneRotateToLocation : FAnimNode_SkeletalControlBase
{ 
	FName                                              BoneName;                                                   // 0x00D0   (0x000C)  
	float                                              TurnAngle;                                                  // 0x00DC   (0x0004)  
	float                                              LookUpAngle;                                                // 0x00E0   (0x0004)  
	FVector                                            ForwardLocation;                                            // 0x00E4   (0x000C)  
	FVector2D                                          TurnLimit;                                                  // 0x00F0   (0x0008)  
	FVector2D                                          LookUpLimit;                                                // 0x00F8   (0x0008)  
	float                                              LookUpOffset;                                               // 0x0100   (0x0004)  
	float                                              TurnUpOffset;                                               // 0x0104   (0x0004)  
	bool                                               bRollBackToOrigin;                                          // 0x0108   (0x0001)  
	bool                                               bStopRoll;                                                  // 0x0109   (0x0001)  
	bool                                               bDebug;                                                     // 0x010A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x15];                                      // 0x010B   (0x0015)  MISSED
};

/// Struct /Script/KuroAnim.AnimNode_CombineCurves
/// Size: 0x0050 (80 bytes) (0x000010 - 0x000060) align 8 pad: 0x0000
struct FAnimNode_CombineCurves : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	FPoseLink                                          CurveAnim;                                                  // 0x0020   (0x0010)  
	ECombineCurveMode                                  CombineMode;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              ALPHA;                                                      // 0x0034   (0x0004)  
	FName                                              CleanAlphaCurveName;                                        // 0x0038   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FName>                                      CleanCurves;                                                // 0x0048   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/KuroAnim.AnimNode_ExtraFollowAnims
/// Size: 0x0A00 (2560 bytes) (0x000010 - 0x000A10) align 16 pad: 0x0000
struct FAnimNode_ExtraFollowAnims : FAnimNode_Base
{ 
	unsigned char                                      UnknownData00_1[0xA00];                                     // 0x0010   (0x0A00)  MISSED
};

/// Struct /Script/KuroAnim.AnimNode_EyeBlink
/// Size: 0x0078 (120 bytes) (0x000010 - 0x000088) align 8 pad: 0x0000
struct FAnimNode_EyeBlink : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	FPoseLink                                          CurveAnim;                                                  // 0x0020   (0x0010)  
	EEyeBlinkMode                                      BlinkMode;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              TexEyeOpenId;                                               // 0x0034   (0x0004)  
	float                                              TexEyeCloseId;                                              // 0x0038   (0x0004)  
	float                                              ALPHA;                                                      // 0x003C   (0x0004)  
	float                                              TexEyeCloseThreshold;                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	class USkeletalMeshComponent*                      TexFaceMeshComp;                                            // 0x0048   (0x0008)  
	FName                                              TexMatSlotName;                                             // 0x0050   (0x000C)  
	FName                                              TexFaceSwitchKey;                                           // 0x005C   (0x000C)  
	FName                                              TexTargetCurveName;                                         // 0x0068   (0x000C)  
	unsigned char                                      UnknownData02_7[0x14];                                      // 0x0074   (0x0014)  MISSED
};

/// Struct /Script/KuroAnim.BoneBlock
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FBoneBlock
{ 
	TArray<FName>                                      Groups;                                                     // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,576) /* TMap<int32_t, float> */   __um(Link);                                                 // 0x0010   (0x0050)  
};

/// Struct /Script/KuroAnim.SpecialBoneShakeData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FSpecialBoneShakeData
{ 
	TArray<FName>                                      Groups;                                                     // 0x0000   (0x0010)  
	float                                              Influence;                                                  // 0x0010   (0x0004)  
	float                                              ShakeTime;                                                  // 0x0014   (0x0004)  
};

/// Struct /Script/KuroAnim.SkeletonGroup
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FSkeletonGroup
{ 
	TArray<FBoneBlock>                                 Blocks;                                                     // 0x0000   (0x0010)  
	TArray<FSpecialBoneShakeData>                      SpeicalBoneShakeData;                                       // 0x0010   (0x0010)  
};

/// Struct /Script/KuroAnim.HitBones
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FHitBones
{ 
	TArray<FName>                                      Bones;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/KuroAnim.AnimNode_Feedback
/// Size: 0x0190 (400 bytes) (0x0000D0 - 0x000260) align 8 pad: 0x0000
struct FAnimNode_Feedback : FAnimNode_SkeletalControlBase
{ 
	FSkeletonGroup                                     SkeletonBlockInfo;                                          // 0x00D0   (0x0020)  
	float                                              DeltaTime;                                                  // 0x00F0   (0x0004)  
	float                                              UnitTime;                                                   // 0x00F4   (0x0004)  
	bool                                               Hit;                                                        // 0x00F8   (0x0001)  
	bool                                               NotEffectToChild;                                           // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00FA   (0x0002)  MISSED
	float                                              ShakeRate;                                                  // 0x00FC   (0x0004)  
	FHitBones                                          HitBoneNames;                                               // 0x0100   (0x0010)  
	class UCurveFloat*                                 Curve;                                                      // 0x0110   (0x0008)  
	bool                                               bDebug;                                                     // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_7[0x147];                                     // 0x0119   (0x0147)  MISSED
};

/// Struct /Script/KuroAnim.AnimNode_FeedbackRotate
/// Size: 0x0238 (568 bytes) (0x0000D0 - 0x000308) align 8 pad: 0x0000
struct FAnimNode_FeedbackRotate : FAnimNode_SkeletalControlBase
{ 
	TArray<FBoneReference>                             BeginBones;                                                 // 0x00D0   (0x0010)  
	TArray<FBoneReference>                             EndBones;                                                   // 0x00E0   (0x0010)  
	TArray<FBoneReference>                             WeakenBones;                                                // 0x00F0   (0x0010)  
	FBoneReference                                     RootBone;                                                   // 0x0100   (0x0014)  
	float                                              MaxTurnAngle;                                               // 0x0114   (0x0004)  
	float                                              Weaken;                                                     // 0x0118   (0x0004)  
	float                                              RecoveryWeaken;                                             // 0x011C   (0x0004)  
	float                                              MinDistance;                                                // 0x0120   (0x0004)  
	float                                              MaxDistance;                                                // 0x0124   (0x0004)  
	float                                              AnimChangeOptizimeParameter;                                // 0x0128   (0x0004)  
	bool                                               NewHit;                                                     // 0x012C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x012D   (0x0003)  MISSED
	FVector                                            HitPos;                                                     // 0x0130   (0x000C)  
	FVector                                            HitVector;                                                  // 0x013C   (0x000C)  
	float                                              FeedbackTimeLength;                                         // 0x0148   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	class UCurveFloat*                                 Curve;                                                      // 0x0150   (0x0008)  
	unsigned char                                      UnknownData02_7[0x1B0];                                     // 0x0158   (0x01B0)  MISSED
};

/// Struct /Script/KuroAnim.AnimNode_FollowAnims
/// Size: 0x0118 (280 bytes) (0x000010 - 0x000128) align 8 pad: 0x0000
struct FAnimNode_FollowAnims : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,577) /* TMap<FString, UAnimSequenceBase*> */ __um(AnimMap);                                   // 0x0020   (0x0050)  
	SDK_UNDEFINED(80,578) /* TSet<FName> */            __um(Slots);                                                // 0x0070   (0x0050)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x00C0   (0x0068)  MISSED
};

/// Struct /Script/KuroAnim.AnimNode_HumanTwoBoneIK
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0001C0) align 16 pad: 0x0000
struct FAnimNode_HumanTwoBoneIK : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     IKBone;                                                     // 0x00D0   (0x0014)  
	KuroAnimIKMode                                     bMode;                                                      // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E5   (0x0003)  MISSED
	FName                                              BaseAngleCurveName;                                         // 0x00E8   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FString                                            LocationCurveName;                                          // 0x00F8   (0x0010)  
	FVector                                            IKLocalPos;                                                 // 0x0108   (0x000C)  
	float                                              LowerLimit[2];                                              // 0x0114   (0x0008)  
	FVector                                            OffsetOrTargetPosition;                                     // 0x011C   (0x000C)  
	EndBoneIKMode                                      bEndBoneMode;                                               // 0x0128   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0129   (0x0003)  MISSED
	FVector                                            EndBoneBaseAxis;                                            // 0x012C   (0x000C)  
	FVector                                            EndBoneTargetAxis;                                          // 0x0138   (0x000C)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x0144   (0x000C)  MISSED
	FQuat                                              EndBoneTargetRotation;                                      // 0x0150   (0x0010)  
	float                                              EndBoneLimit[6];                                            // 0x0160   (0x0018)  
	unsigned char                                      UnknownData04_7[0x48];                                      // 0x0178   (0x0048)  MISSED
};

/// Struct /Script/KuroAnim.KuroHumanIKPart
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FKuroHumanIKPart
{ 
	FBoneReference                                     IKBone;                                                     // 0x0000   (0x0014)  
	bool                                               bUseCurve;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FName                                              BaseAngleCurveName;                                         // 0x0018   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            LocationCurveName;                                          // 0x0028   (0x0010)  
	FName                                              AlphaCurveName;                                             // 0x0038   (0x000C)  
	float                                              MaxIkDist;                                                  // 0x0044   (0x0004)  
	float                                              LowerLimits[2];                                             // 0x0048   (0x0008)  
	float                                              EndBoneLimits[6];                                           // 0x0050   (0x0018)  
	EndBoneIKMode                                      EndBoneIKMode;                                              // 0x0068   (0x0001)  
	bool                                               DebugPrint;                                                 // 0x0069   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x006A   (0x0006)  MISSED
};

/// Struct /Script/KuroAnim.AnimNode_KuroHumanIK
/// Size: 0x0130 (304 bytes) (0x0000D0 - 0x000200) align 16 pad: 0x0000
struct FAnimNode_KuroHumanIK : FAnimNode_SkeletalControlBase
{ 
	TArray<FKuroHumanIKPart>                           FootParts;                                                  // 0x00D0   (0x0010)  
	TArray<FKuroHumanIKPart>                           HandParts;                                                  // 0x00E0   (0x0010)  
	KuroHumanIKMode                                    Mode;                                                       // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              CapsuleRadius;                                              // 0x00F4   (0x0004)  
	bool                                               bIsMoving;                                                  // 0x00F8   (0x0001)  
	bool                                               bIsComplexIk;                                               // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00FA   (0x0002)  MISSED
	float                                              DeltaSeconds;                                               // 0x00FC   (0x0004)  
	bool                                               bForbiddenCurvePosition;                                    // 0x0100   (0x0001)  
	bool                                               bNoLerp;                                                    // 0x0101   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0102   (0x0002)  MISSED
	float                                              GroundDepth;                                                // 0x0104   (0x0004)  
	float                                              MaxIKFootDetectDepth;                                       // 0x0108   (0x0004)  
	float                                              MovingSpeed;                                                // 0x010C   (0x0004)  
	float                                              WalkRunMix;                                                 // 0x0110   (0x0004)  
	float                                              DegMovementSlop;                                            // 0x0114   (0x0004)  
	float                                              ClimbRadius;                                                // 0x0118   (0x0004)  
	FVector                                            SlideForward;                                               // 0x011C   (0x000C)  
	float                                              SlideRadius;                                                // 0x0128   (0x0004)  
	bool                                               bStandSlide;                                                // 0x012C   (0x0001)  
	bool                                               bDrawDebug;                                                 // 0x012D   (0x0001)  
	unsigned char                                      UnknownData03_7[0xD2];                                      // 0x012E   (0x00D2)  MISSED
};

/// Struct /Script/KuroAnim.AnimNode_MountBuffer
/// Size: 0x0100 (256 bytes) (0x0000D0 - 0x0001D0) align 16 pad: 0x0000
struct FAnimNode_MountBuffer : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     MountBone;                                                  // 0x00D0   (0x0014)  
	float                                              PowerIntensity;                                             // 0x00E4   (0x0004)  
	float                                              AirResistance;                                              // 0x00E8   (0x0004)  
	float                                              MetaDeltaTime;                                              // 0x00EC   (0x0004)  
	float                                              InertanceIntensity;                                         // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xDC];                                      // 0x00F4   (0x00DC)  MISSED
};

/// Struct /Script/KuroAnim.AnimNode_MultiBonesIK
/// Size: 0x0078 (120 bytes) (0x0000D0 - 0x000148) align 8 pad: 0x0000
struct FAnimNode_MultiBonesIK : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     IKBone;                                                     // 0x00D0   (0x0014)  
	FVector                                            IKBonePos;                                                  // 0x00E4   (0x000C)  
	FBoneReference                                     BeginBone;                                                  // 0x00F0   (0x0014)  
	FBoneReference                                     EndBone;                                                    // 0x0104   (0x0014)  
	KuroAnimIKMode                                     bMode;                                                      // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0119   (0x0003)  MISSED
	FVector                                            OffsetOrTargetPosition;                                     // 0x011C   (0x000C)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0128   (0x0020)  MISSED
};

/// Struct /Script/KuroAnim.PhyClothLine
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FPhyClothLine
{ 
	FBoneReference                                     RootBone;                                                   // 0x0000   (0x0014)  
	float                                              Thickness;                                                  // 0x0014   (0x0004)  
	int32_t                                            Generate;                                                   // 0x0018   (0x0004)  
};

/// Struct /Script/KuroAnim.PhyClothConfig
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FPhyClothConfig
{ 
	float                                              SpringStiffness;                                            // 0x0000   (0x0004)  
	float                                              AngleSpringStiffness;                                       // 0x0004   (0x0004)  
	float                                              Damping;                                                    // 0x0008   (0x0004)  
	FVector                                            Gravity;                                                    // 0x000C   (0x000C)  
	float                                              Mass;                                                       // 0x0018   (0x0004)  
	float                                              LimitScale;                                                 // 0x001C   (0x0004)  
	float                                              LimitDegree;                                                // 0x0020   (0x0004)  
	float                                              StrengthRateForSideLink;                                    // 0x0024   (0x0004)  
	float                                              StrengthRateForInverseLink;                                 // 0x0028   (0x0004)  
};

/// Struct /Script/KuroAnim.PhyClothCollision
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 pad: 0x0000
struct FPhyClothCollision
{ 
	ECollisionType                                     Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FBoneReference                                     BindBone;                                                   // 0x0004   (0x0014)  
	FVector                                            CenterPos;                                                  // 0x0018   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0024   (0x000C)  
	FVector2D                                          Size;                                                       // 0x0030   (0x0008)  
};

/// Struct /Script/KuroAnim.PhyClothGroup
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FPhyClothGroup
{ 
	TArray<FPhyClothLine>                              RootBones;                                                  // 0x0000   (0x0010)  
	EClothType                                         Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FBoneReference>                             ExceptBones;                                                // 0x0018   (0x0010)  
	TArray<FBoneReference>                             HelperLinkBones;                                            // 0x0028   (0x0010)  
	FPhyClothConfig                                    Config;                                                     // 0x0038   (0x002C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	TArray<FPhyClothCollision>                         Collisions;                                                 // 0x0068   (0x0010)  
	FVector                                            CenterLineStart;                                            // 0x0078   (0x000C)  
	FVector                                            CenterLineDirect;                                           // 0x0084   (0x000C)  
};

/// Struct /Script/KuroAnim.AnimNode_PhyCloth
/// Size: 0x0370 (880 bytes) (0x0000D0 - 0x000440) align 16 pad: 0x0000
struct FAnimNode_PhyCloth : FAnimNode_SkeletalControlBase
{ 
	TArray<FPhyClothGroup>                             ClothGroups;                                                // 0x00D0   (0x0010)  
	bool                                               OpenCollateralRotation;                                     // 0x00E0   (0x0001)  
	bool                                               MultiThread;                                                // 0x00E1   (0x0001)  
	bool                                               Transport;                                                  // 0x00E2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00E3   (0x0001)  MISSED
	float                                              TransportThreadHold;                                        // 0x00E4   (0x0004)  
	int32_t                                            MinIterTimes;                                               // 0x00E8   (0x0004)  
	int32_t                                            MaxIterTimes;                                               // 0x00EC   (0x0004)  
	float                                              MaxDeltaTime;                                               // 0x00F0   (0x0004)  
	FVector                                            WindSpeed;                                                  // 0x00F4   (0x000C)  
	float                                              AirDrag;                                                    // 0x0100   (0x0004)  
	float                                              DisturbPeriodic;                                            // 0x0104   (0x0004)  
	float                                              DisturbStrMul;                                              // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	class UCurveFloat*                                 DisturbStr;                                                 // 0x0110   (0x0008)  
	class UCurveFloat*                                 DisturbSplit;                                               // 0x0118   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0120   (0x0010)  MISSED
	FName                                              OriginAlphaCurveName;                                       // 0x0130   (0x000C)  
	unsigned char                                      UnknownData03_7[0x304];                                     // 0x013C   (0x0304)  MISSED
};

/// Struct /Script/KuroAnim.AnimNode_SightLock
/// Size: 0x00E8 (232 bytes) (0x0000D0 - 0x0001B8) align 8 pad: 0x0000
struct FAnimNode_SightLock : FAnimNode_SkeletalControlBase
{ 
	int32_t                                            Increment;                                                  // 0x00D0   (0x0004)  
	SightLockMode                                      Mode;                                                       // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
	FVector                                            SightDirectInSightBone;                                     // 0x00D8   (0x000C)  
	FVector                                            UpAxisInSightBone;                                          // 0x00E4   (0x000C)  
	FVector                                            SightBoneBaseEuler;                                         // 0x00F0   (0x000C)  
	float                                              AssistRatio;                                                // 0x00FC   (0x0004)  
	float                                              SightBoneLimit[4];                                          // 0x0100   (0x0010)  
	float                                              AssistLimit;                                                // 0x0110   (0x0004)  
	FVector                                            TargetDirect;                                               // 0x0114   (0x000C)  
	FName                                              SightBoneName;                                              // 0x0120   (0x000C)  
	FName                                              BeginBoneName;                                              // 0x012C   (0x000C)  
	FName                                              EndBoneName;                                                // 0x0138   (0x000C)  
	unsigned char                                      UnknownData01_7[0x74];                                      // 0x0144   (0x0074)  MISSED
};

/// Struct /Script/KuroAnim.AnimNode_SlotBlend
/// Size: 0x0048 (72 bytes) (0x000010 - 0x000058) align 8 pad: 0x0000
struct FAnimNode_SlotBlend : FAnimNode_Base
{ 
	FPoseLink                                          A;                                                          // 0x0010   (0x0010)  
	FPoseLink                                          B;                                                          // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
	bool                                               bResetChildOnActivation : 1;                                // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FName                                              SlotName;                                                   // 0x0044   (0x000C)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Struct /Script/KuroAnim.StatureConfig
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FStatureConfig
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0014)  
	FVector                                            Scale;                                                      // 0x0014   (0x000C)  
};

/// Struct /Script/KuroAnim.AnimNode_StatureScale
/// Size: 0x0070 (112 bytes) (0x000010 - 0x000080) align 8 pad: 0x0000
struct FAnimNode_StatureScale : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	TArray<FStatureConfig>                             StatureConfigs;                                             // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Struct /Script/KuroAnim.SuiguangTailBoneConfig
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FSuiguangTailBoneConfig
{ 
	FName                                              BoneName;                                                   // 0x0000   (0x000C)  
	float                                              TurnAngle;                                                  // 0x000C   (0x0004)  
	float                                              LookUpAngle;                                                // 0x0010   (0x0004)  
	FVector2D                                          TurnLimit;                                                  // 0x0014   (0x0008)  
	FVector2D                                          LookUpLimit;                                                // 0x001C   (0x0008)  
	float                                              LookUpOffset;                                               // 0x0024   (0x0004)  
	float                                              TurnUpOffset;                                               // 0x0028   (0x0004)  
};

/// Struct /Script/KuroAnim.AnimNode_SuiguangTailRotate
/// Size: 0x0038 (56 bytes) (0x0000D0 - 0x000108) align 8 pad: 0x0000
struct FAnimNode_SuiguangTailRotate : FAnimNode_SkeletalControlBase
{ 
	FVector                                            TargetLocation;                                             // 0x00D0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FSuiguangTailBoneConfig>                    SuiguangTailBoneConfig;                                     // 0x00E0   (0x0010)  
	bool                                               bRollBackToOrigin;                                          // 0x00F0   (0x0001)  
	bool                                               bStopRoll;                                                  // 0x00F1   (0x0001)  
	bool                                               bDebug;                                                     // 0x00F2   (0x0001)  
	unsigned char                                      UnknownData01_7[0x15];                                      // 0x00F3   (0x0015)  MISSED
};

