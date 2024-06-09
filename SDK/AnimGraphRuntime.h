
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AnimGraphRuntime.ESphericalLimitType
/// Size: 0x01 (1 bytes)
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner                                                       = 0,
	ESphericalLimitType__Outer                                                       = 1
};

/// Enum /Script/AnimGraphRuntime.AnimPhysSimSpaceType
/// Size: 0x01 (1 bytes)
enum class AnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component                                                  = 0,
	AnimPhysSimSpaceType__Actor                                                      = 1,
	AnimPhysSimSpaceType__World                                                      = 2,
	AnimPhysSimSpaceType__RootRelative                                               = 3,
	AnimPhysSimSpaceType__BoneRelative                                               = 4
};

/// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
/// Size: 0x01 (1 bytes)
enum class AnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free                                               = 0,
	AnimPhysLinearConstraintType__Limited                                            = 1
};

/// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
/// Size: 0x01 (1 bytes)
enum class AnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular                                           = 0,
	AnimPhysAngularConstraintType__Cone                                              = 1
};

/// Enum /Script/AnimGraphRuntime.EBlendListTransitionType
/// Size: 0x01 (1 bytes)
enum class EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend                                          = 0,
	EBlendListTransitionType__Inertialization                                        = 1
};

/// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode
/// Size: 0x01 (1 bytes)
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone                                                     = 0,
	EDrivenDestinationMode__MorphTarget                                              = 1,
	EDrivenDestinationMode__MaterialParameter                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EDrivenBoneModificationMode
/// Size: 0x01 (1 bytes)
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput                                          = 0,
	EDrivenBoneModificationMode__ReplaceComponent                                    = 1,
	EDrivenBoneModificationMode__AddToRefPose                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EConstraintOffsetOption
/// Size: 0x01 (1 bytes)
enum class EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None                                                    = 0,
	EConstraintOffsetOption__Offset_RefPose                                          = 1
};

/// Enum /Script/AnimGraphRuntime.CopyBoneDeltaMode
/// Size: 0x01 (1 bytes)
enum class CopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate                                                    = 0,
	CopyBoneDeltaMode__Copy                                                          = 1
};

/// Enum /Script/AnimGraphRuntime.EInterpolationBlend
/// Size: 0x01 (1 bytes)
enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear                                                      = 0,
	EInterpolationBlend__Cubic                                                       = 1,
	EInterpolationBlend__Sinusoidal                                                  = 2,
	EInterpolationBlend__EaseInOutExponent2                                          = 3,
	EInterpolationBlend__EaseInOutExponent3                                          = 4,
	EInterpolationBlend__EaseInOutExponent4                                          = 5,
	EInterpolationBlend__EaseInOutExponent5                                          = 6
};

/// Enum /Script/AnimGraphRuntime.EBoneModificationMode
/// Size: 0x01 (1 bytes)
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                                                                       = 0,
	BMM_Replace                                                                      = 1,
	BMM_Additive                                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode
/// Size: 0x01 (1 bytes)
enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add                                                       = 0,
	EModifyCurveApplyMode__Scale                                                     = 1,
	EModifyCurveApplyMode__Blend                                                     = 2,
	EModifyCurveApplyMode__WeightedMovingAverage                                     = 3,
	EModifyCurveApplyMode__RemapCurve                                                = 4
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverOutput
/// Size: 0x01 (1 bytes)
enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses                                                    = 0,
	EPoseDriverOutput__DriveCurves                                                   = 1
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverSource
/// Size: 0x01 (1 bytes)
enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation                                                      = 0,
	EPoseDriverSource__Translation                                                   = 1
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverType
/// Size: 0x01 (1 bytes)
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist                                                   = 0,
	EPoseDriverType__SwingOnly                                                       = 1,
	EPoseDriverType__Translation                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode
/// Size: 0x01 (1 bytes)
enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot                                               = 0,
	ESnapshotSourceMode__SnapshotPin                                                 = 1
};

/// Enum /Script/AnimGraphRuntime.ERBFNodeSolveMode
/// Size: 0x01 (1 bytes)
enum class ERBFNodeSolveMode : uint8_t
{
	ERBFNodeSolveMode__Realtime                                                      = 0,
	ERBFNodeSolveMode__Precompute                                                    = 1
};

/// Enum /Script/AnimGraphRuntime.ERefPoseType
/// Size: 0x01 (1 bytes)
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                                                                   = 0,
	EIT_Additive                                                                     = 1
};

/// Enum /Script/AnimGraphRuntime.ESimulationSpace
/// Size: 0x01 (1 bytes)
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace                                                 = 0,
	ESimulationSpace__WorldSpace                                                     = 1,
	ESimulationSpace__BaseBoneSpace                                                  = 2
};

/// Enum /Script/AnimGraphRuntime.EScaleChainInitialLength
/// Size: 0x01 (1 bytes)
enum class EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue                                = 0,
	EScaleChainInitialLength__Distance                                               = 1,
	EScaleChainInitialLength__ChainLength                                            = 2
};

/// Enum /Script/AnimGraphRuntime.ESequenceEvalReinit
/// Size: 0x01 (1 bytes)
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset                                                     = 0,
	ESequenceEvalReinit__StartPosition                                               = 1,
	ESequenceEvalReinit__ExplicitTime                                                = 2
};

/// Enum /Script/AnimGraphRuntime.ESplineBoneAxis
/// Size: 0x01 (1 bytes)
enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None                                                            = 0,
	ESplineBoneAxis__X                                                               = 1,
	ESplineBoneAxis__Y                                                               = 2,
	ESplineBoneAxis__Z                                                               = 3
};

/// Enum /Script/AnimGraphRuntime.EWarpingVectorMode
/// Size: 0x01 (1 bytes)
enum class EWarpingVectorMode : uint8_t
{
	EWarpingVectorMode__ComponentSpaceVector                                         = 0,
	EWarpingVectorMode__ActorSpaceVector                                             = 1,
	EWarpingVectorMode__WorldSpaceVector                                             = 2,
	EWarpingVectorMode__IKFootRootLocalSpaceVector                                   = 3
};

/// Enum /Script/AnimGraphRuntime.EWarpingEvaluationMode
/// Size: 0x01 (1 bytes)
enum class EWarpingEvaluationMode : uint8_t
{
	EWarpingEvaluationMode__Manual                                                   = 0,
	EWarpingEvaluationMode__Graph                                                    = 1
};

/// Enum /Script/AnimGraphRuntime.ERotationComponent
/// Size: 0x01 (1 bytes)
enum class ERotationComponent : uint8_t
{
	ERotationComponent__EulerX                                                       = 0,
	ERotationComponent__EulerY                                                       = 1,
	ERotationComponent__EulerZ                                                       = 2,
	ERotationComponent__QuaternionAngle                                              = 3,
	ERotationComponent__SwingAngle                                                   = 4,
	ERotationComponent__TwistAngle                                                   = 5
};

/// Enum /Script/AnimGraphRuntime.EEasingFuncType
/// Size: 0x01 (1 bytes)
enum class EEasingFuncType : uint8_t
{
	EEasingFuncType__Linear                                                          = 0,
	EEasingFuncType__Sinusoidal                                                      = 1,
	EEasingFuncType__Cubic                                                           = 2,
	EEasingFuncType__QuadraticInOut                                                  = 3,
	EEasingFuncType__CubicInOut                                                      = 4,
	EEasingFuncType__HermiteCubic                                                    = 5,
	EEasingFuncType__QuarticInOut                                                    = 6,
	EEasingFuncType__QuinticInOut                                                    = 7,
	EEasingFuncType__CircularIn                                                      = 8,
	EEasingFuncType__CircularOut                                                     = 9,
	EEasingFuncType__CircularInOut                                                   = 10,
	EEasingFuncType__ExpIn                                                           = 11,
	EEasingFuncType__ExpOut                                                          = 12,
	EEasingFuncType__ExpInOut                                                        = 13,
	EEasingFuncType__CustomCurve                                                     = 14
};

/// Enum /Script/AnimGraphRuntime.ERBFNormalizeMethod
/// Size: 0x01 (1 bytes)
enum class ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne                                       = 0,
	ERBFNormalizeMethod__AlwaysNormalize                                             = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian                                       = 2,
	ERBFNormalizeMethod__NoNormalization                                             = 3
};

/// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod
/// Size: 0x01 (1 bytes)
enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean                                                    = 0,
	ERBFDistanceMethod__Quaternion                                                   = 1,
	ERBFDistanceMethod__SwingAngle                                                   = 2,
	ERBFDistanceMethod__TwistAngle                                                   = 3,
	ERBFDistanceMethod__DefaultMethod                                                = 4
};

/// Enum /Script/AnimGraphRuntime.ERBFFunctionType
/// Size: 0x01 (1 bytes)
enum class ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian                                                       = 0,
	ERBFFunctionType__Exponential                                                    = 1,
	ERBFFunctionType__Linear                                                         = 2,
	ERBFFunctionType__Cubic                                                          = 3,
	ERBFFunctionType__Quintic                                                        = 4,
	ERBFFunctionType__DefaultFunction                                                = 5
};

/// Enum /Script/AnimGraphRuntime.ERBFSolverType
/// Size: 0x01 (1 bytes)
enum class ERBFSolverType : uint8_t
{
	ERBFSolverType__Additive                                                         = 0,
	ERBFSolverType__Interpolative                                                    = 1
};

/// Class /Script/AnimGraphRuntime.AnimSequencerInstance
/// Size: 0x0008 (8 bytes) (0x000378 - 0x000380) align 16 pad: 0x0000
class UAnimSequencerInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0378   (0x0008)  MISSED
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{ 
public:
	FName                                              NotifyName;                                                 // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{ 
public:
	FName                                              NotifyName;                                                 // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/AnimGraphRuntime.KismetAnimationLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void K2_TwoBoneIK(FVector& RootPos, FVector& JointPos, FVector& EndPos, FVector& JointTarget, FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // [0x3a0a000] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// void K2_StartProfilingTimer();                                                                                           // [0x3a09fe0] Final|Native|Static|Public|BlueprintCallable 
	// FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // [0x3a09d00] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);                                     // [0x3a09be0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FTransform K2_LookAt(FTransform& CurrentTransform, FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree); // [0x3a09940] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// float K2_EndProfilingTimer(bool bLog, FString LogPrefix);                                                                // [0x3a09850] Final|Native|Static|Public|BlueprintCallable 
	// float K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // [0x3a09540] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FVector K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, FName SocketOrBoneNameFrom, FName SocketOrBoneNameTo); // [0x3a093f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, FName SocketOrBoneName, FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, FRuntimeFloatCurve& CustomCurve); // [0x3a08f60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // [0x3a08d40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000030 - 0x0000B0) align 8 pad: 0x0000
class UPlayMontageCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,459) /* FMulticastInlineDelegate */ __um(OnCompleted);                                        // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,460) /* FMulticastInlineDelegate */ __um(OnBlendOut);                                         // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,461) /* FMulticastInlineDelegate */ __um(OnInterrupted);                                      // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,462) /* FMulticastInlineDelegate */ __um(OnNotifyBegin);                                      // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,463) /* FMulticastInlineDelegate */ __um(OnNotifyEnd);                                        // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0080   (0x0030)  MISSED
	// void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                   // [0x3a0a5e0] Final|Native|Protected|HasOutParms 
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                 // [0x3a0a4e0] Final|Native|Protected|HasOutParms 
	// void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);                                                     // [0x3a0a410] Final|Native|Protected 
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x3a0a340] Final|Native|Protected 
	// class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0x3a08ba0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.SequencerAnimationSupport
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class USequencerAnimationSupport : public UInterface
{ 
public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
/// Size: 0x00C0 (192 bytes) (0x000010 - 0x0000D0) align 8 pad: 0x0000
struct FAnimNode_SkeletalControlBase : FAnimNode_Base
{ 
	FComponentSpacePoseLink                            ComponentPose;                                              // 0x0010   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0020   (0x0004)  
	float                                              ActualAlpha;                                                // 0x0024   (0x0004)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0028   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	float                                              ALPHA;                                                      // 0x002C   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0030   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0038   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0080   (0x000C)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x008C   (0x0030)  
	unsigned char                                      UnknownData01_7[0x14];                                      // 0x00BC   (0x0014)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
/// Size: 0x02C0 (704 bytes) (0x000810 - 0x000AD0) align 16 pad: 0x0000
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x2C0];                                     // 0x0810   (0x02C0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer
/// Size: 0x00B0 (176 bytes) (0x000048 - 0x0000F8) align 8 pad: 0x0000
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase
{ 
	float                                              X;                                                          // 0x0048   (0x0004)  
	float                                              Y;                                                          // 0x004C   (0x0004)  
	float                                              Z;                                                          // 0x0050   (0x0004)  
	float                                              PlayRate;                                                   // 0x0054   (0x0004)  
	bool                                               bLoop;                                                      // 0x0058   (0x0001)  
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                        // 0x0059   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x005A   (0x0002)  MISSED
	float                                              StartPosition;                                              // 0x005C   (0x0004)  
	class UBlendSpaceBase*                             BlendSpace;                                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0068   (0x0088)  MISSED
	class UBlendSpaceBase*                             PreviousBlendSpace;                                         // 0x00F0   (0x0008)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
/// Size: 0x00E8 (232 bytes) (0x0000F8 - 0x0001E0) align 16 pad: 0x0000
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{ 
	unsigned char                                      UnknownData00_3[0x68];                                      // 0x00F8   (0x0068)  MISSED
	FPoseLink                                          BasePose;                                                   // 0x0160   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0170   (0x0004)  
	FName                                              SourceSocketName;                                           // 0x0174   (0x000C)  
	FName                                              PivotSocketName;                                            // 0x0180   (0x000C)  
	FVector                                            LookAtLocation;                                             // 0x018C   (0x000C)  
	FVector                                            SocketAxis;                                                 // 0x0198   (0x000C)  
	float                                              ALPHA;                                                      // 0x01A4   (0x0004)  
	unsigned char                                      UnknownData01_7[0x38];                                      // 0x01A8   (0x0038)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimPhysConstraintSetup
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 4 pad: 0x0000
struct FAnimPhysConstraintSetup
{ 
	AnimPhysLinearConstraintType                       LinearXLimitType;                                           // 0x0000   (0x0001)  
	AnimPhysLinearConstraintType                       LinearYLimitType;                                           // 0x0001   (0x0001)  
	AnimPhysLinearConstraintType                       LinearZLimitType;                                           // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	FVector                                            LinearAxesMin;                                              // 0x0004   (0x000C)  
	FVector                                            LinearAxesMax;                                              // 0x0010   (0x000C)  
	AnimPhysAngularConstraintType                      AngularConstraintType;                                      // 0x001C   (0x0001)  
	AnimPhysTwistAxis                                  TwistAxis;                                                  // 0x001D   (0x0001)  
	AnimPhysTwistAxis                                  AngularTargetAxis;                                          // 0x001E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x001F   (0x0001)  MISSED
	float                                              ConeAngle;                                                  // 0x0020   (0x0004)  
	FVector                                            AngularLimitsMin;                                           // 0x0024   (0x000C)  
	FVector                                            AngularLimitsMax;                                           // 0x0030   (0x000C)  
	FVector                                            AngularTarget;                                              // 0x003C   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimPhysSphericalLimit
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 pad: 0x0000
struct FAnimPhysSphericalLimit
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0014)  
	FVector                                            SphereLocalOffset;                                          // 0x0014   (0x000C)  
	float                                              LimitRadius;                                                // 0x0020   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimPhysPlanarLimit
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 pad: 0x0000
struct FAnimPhysPlanarLimit
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FTransform                                         PlaneTransform;                                             // 0x0020   (0x0030)  
};

/// Struct /Script/AnimGraphRuntime.RotationRetargetingInfo
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align 16 pad: 0x0000
struct FRotationRetargetingInfo
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0001   (0x000F)  MISSED
	FTransform                                         Source;                                                     // 0x0010   (0x0030)  
	FTransform                                         Target;                                                     // 0x0040   (0x0030)  
	ERotationComponent                                 RotationComponent;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	FVector                                            TwistAxis;                                                  // 0x0074   (0x000C)  
	bool                                               bUseAbsoluteAngle;                                          // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              SourceMinimum;                                              // 0x0084   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0088   (0x0004)  
	float                                              TargetMinimum;                                              // 0x008C   (0x0004)  
	float                                              TargetMaximum;                                              // 0x0090   (0x0004)  
	EEasingFuncType                                    EasingType;                                                 // 0x0094   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	FRuntimeFloatCurve                                 CustomCurve;                                                // 0x0098   (0x0088)  
	bool                                               bFlipEasing;                                                // 0x0120   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0121   (0x0003)  MISSED
	float                                              EasingWeight;                                               // 0x0124   (0x0004)  
	bool                                               bClamp;                                                     // 0x0128   (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AnimDynamics
/// Size: 0x0380 (896 bytes) (0x0000D0 - 0x000450) align 16 pad: 0x0000
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{ 
	float                                              LinearDampingOverride;                                      // 0x00D0   (0x0004)  
	float                                              AngularDampingOverride;                                     // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x00D8   (0x0068)  MISSED
	FBoneReference                                     RelativeSpaceBone;                                          // 0x0140   (0x0014)  
	FBoneReference                                     BoundBone;                                                  // 0x0154   (0x0014)  
	FBoneReference                                     ChainEnd;                                                   // 0x0168   (0x0014)  
	FVector                                            BoxExtents;                                                 // 0x017C   (0x000C)  
	FVector                                            LocalJointOffset;                                           // 0x0188   (0x000C)  
	float                                              GravityScale;                                               // 0x0194   (0x0004)  
	FVector                                            GravityOverride;                                            // 0x0198   (0x000C)  
	float                                              LinearSpringConstant;                                       // 0x01A4   (0x0004)  
	float                                              AngularSpringConstant;                                      // 0x01A8   (0x0004)  
	float                                              WindScale;                                                  // 0x01AC   (0x0004)  
	FVector                                            ComponentLinearAccScale;                                    // 0x01B0   (0x000C)  
	FVector                                            ComponentLinearVelScale;                                    // 0x01BC   (0x000C)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x01C8   (0x000C)  
	float                                              AngularBiasOverride;                                        // 0x01D4   (0x0004)  
	int32_t                                            NumSolverIterationsPreUpdate;                               // 0x01D8   (0x0004)  
	int32_t                                            NumSolverIterationsPostUpdate;                              // 0x01DC   (0x0004)  
	FAnimPhysConstraintSetup                           ConstraintSetup;                                            // 0x01E0   (0x0048)  
	TArray<FAnimPhysSphericalLimit>                    SphericalLimits;                                            // 0x0228   (0x0010)  
	float                                              SphereCollisionRadius;                                      // 0x0238   (0x0004)  
	FVector                                            ExternalForce;                                              // 0x023C   (0x000C)  
	TArray<FAnimPhysPlanarLimit>                       PlanarLimits;                                               // 0x0248   (0x0010)  
	AnimPhysCollisionType                              CollisionType;                                              // 0x0258   (0x0001)  
	AnimPhysSimSpaceType                               SimulationSpace;                                            // 0x0259   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x025A   (0x0002)  MISSED
	bool                                               bUseSphericalLimits : 1;                                    // 0x025C:0 (0x0001)  
	bool                                               bUsePlanarLimit : 1;                                        // 0x025C:1 (0x0001)  
	bool                                               bDoUpdate : 1;                                              // 0x025C:2 (0x0001)  
	bool                                               bDoEval : 1;                                                // 0x025C:3 (0x0001)  
	bool                                               bOverrideLinearDamping : 1;                                 // 0x025C:4 (0x0001)  
	bool                                               bOverrideAngularBias : 1;                                   // 0x025C:5 (0x0001)  
	bool                                               bOverrideAngularDamping : 1;                                // 0x025C:6 (0x0001)  
	bool                                               bEnableWind : 1;                                            // 0x025C:7 (0x0001)  
	unsigned char                                      UnknownBit02 : 1;                                           // 0x025D:0 (0x0001)  MISSED
	bool                                               bUseGravityOverride : 1;                                    // 0x025D:1 (0x0001)  
	bool                                               bLinearSpring : 1;                                          // 0x025D:2 (0x0001)  
	bool                                               bAngularSpring : 1;                                         // 0x025D:3 (0x0001)  
	bool                                               bChain : 1;                                                 // 0x025D:4 (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x025E   (0x0002)  MISSED
	FRotationRetargetingInfo                           RetargetingSettings;                                        // 0x0260   (0x0130)  
	unsigned char                                      UnknownData04_7[0xC0];                                      // 0x0390   (0x00C0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
/// Size: 0x00C0 (192 bytes) (0x000010 - 0x0000D0) align 8 pad: 0x0000
struct FAnimNode_ApplyAdditive : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)  
	float                                              ALPHA;                                                      // 0x0030   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0034   (0x0008)  
	int32_t                                            LODThreshold;                                               // 0x003C   (0x0004)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0040   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0088   (0x000C)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0094   (0x0030)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x00C8   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x00CA   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AngularRangeLimit
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FAngularRangeLimit
{ 
	FVector                                            LimitMin;                                                   // 0x0000   (0x000C)  
	FVector                                            LimitMax;                                                   // 0x000C   (0x000C)  
	FBoneReference                                     Bone;                                                       // 0x0018   (0x0014)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyLimits
/// Size: 0x0020 (32 bytes) (0x0000D0 - 0x0000F0) align 8 pad: 0x0000
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase
{ 
	TArray<FAngularRangeLimit>                         AngularRangeLimits;                                         // 0x00D0   (0x0010)  
	TArray<FVector>                                    AngularOffsets;                                             // 0x00E0   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.BlendBoneByChannelEntry
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FBlendBoneByChannelEntry
{ 
	FBoneReference                                     SourceBone;                                                 // 0x0000   (0x0014)  
	FBoneReference                                     TargetBone;                                                 // 0x0014   (0x0014)  
	bool                                               bBlendTranslation;                                          // 0x0028   (0x0001)  
	bool                                               bBlendRotation;                                             // 0x0029   (0x0001)  
	bool                                               bBlendScale;                                                // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x002B   (0x0001)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
/// Size: 0x0058 (88 bytes) (0x000010 - 0x000068) align 8 pad: 0x0000
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base
{ 
	FPoseLink                                          A;                                                          // 0x0010   (0x0010)  
	FPoseLink                                          B;                                                          // 0x0020   (0x0010)  
	TArray<FBlendBoneByChannelEntry>                   BoneDefinitions;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              ALPHA;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0058   (0x0008)  
	TEnumAsByte<EBoneControlSpace>                     TransformsSpace;                                            // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListBase
/// Size: 0x0098 (152 bytes) (0x000010 - 0x0000A8) align 8 pad: 0x0000
struct FAnimNode_BlendListBase : FAnimNode_Base
{ 
	TArray<FPoseLink>                                  BlendPose;                                                  // 0x0010   (0x0010)  
	TArray<float>                                      BlendTime;                                                  // 0x0020   (0x0010)  
	EBlendListTransitionType                           TransitionType;                                             // 0x0030   (0x0001)  
	EAlphaBlendOption                                  BlendType;                                                  // 0x0031   (0x0001)  
	bool                                               bResetChildOnActivation;                                    // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0033   (0x0005)  MISSED
	class UCurveFloat*                                 CustomBlendCurve;                                           // 0x0038   (0x0008)  
	class UBlendProfile*                               BlendProfile;                                               // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x0048   (0x0060)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByBool
/// Size: 0x0008 (8 bytes) (0x0000A8 - 0x0000B0) align 8 pad: 0x0000
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase
{ 
	bool                                               bActiveValue;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum
/// Size: 0x0018 (24 bytes) (0x0000A8 - 0x0000C0) align 8 pad: 0x0000
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{ 
	TArray<int32_t>                                    EnumToPoseIndex;                                            // 0x00A8   (0x0010)  
	char                                               ActiveEnumValue;                                            // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByInt
/// Size: 0x0008 (8 bytes) (0x0000A8 - 0x0000B0) align 8 pad: 0x0000
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase
{ 
	int32_t                                            ActiveChildIndex;                                           // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
/// Size: 0x0008 (8 bytes) (0x0000F8 - 0x000100) align 8 pad: 0x0000
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{ 
	float                                              NormalizedTime;                                             // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
/// Size: 0x0060 (96 bytes) (0x0000D0 - 0x000130) align 8 pad: 0x0000
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00D0   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UCurveFloat*                                 DrivingCurve;                                               // 0x00E8   (0x0008)  
	float                                              Multiplier;                                                 // 0x00F0   (0x0004)  
	float                                              RangeMin;                                                   // 0x00F4   (0x0004)  
	float                                              RangeMax;                                                   // 0x00F8   (0x0004)  
	float                                              RemappedMin;                                                // 0x00FC   (0x0004)  
	float                                              RemappedMax;                                                // 0x0100   (0x0004)  
	FName                                              ParameterName;                                              // 0x0104   (0x000C)  
	FBoneReference                                     TargetBone;                                                 // 0x0110   (0x0014)  
	EDrivenDestinationMode                             DestinationMode;                                            // 0x0124   (0x0001)  
	EDrivenBoneModificationMode                        ModificationMode;                                           // 0x0125   (0x0001)  
	TEnumAsByte<EComponentType>                        SourceComponent;                                            // 0x0126   (0x0001)  
	bool                                               bUseRange : 1;                                              // 0x0127:0 (0x0001)  
	bool                                               bAffectTargetTranslationX : 1;                              // 0x0127:1 (0x0001)  
	bool                                               bAffectTargetTranslationY : 1;                              // 0x0127:2 (0x0001)  
	bool                                               bAffectTargetTranslationZ : 1;                              // 0x0127:3 (0x0001)  
	bool                                               bAffectTargetRotationX : 1;                                 // 0x0127:4 (0x0001)  
	bool                                               bAffectTargetRotationY : 1;                                 // 0x0127:5 (0x0001)  
	bool                                               bAffectTargetRotationZ : 1;                                 // 0x0127:6 (0x0001)  
	bool                                               bAffectTargetScaleX : 1;                                    // 0x0127:7 (0x0001)  
	bool                                               bAffectTargetScaleY : 1;                                    // 0x0128:0 (0x0001)  
	bool                                               bAffectTargetScaleZ : 1;                                    // 0x0128:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SocketReference
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 pad: 0x0000
struct FSocketReference
{ 
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0000   (0x0030)  MISSED
	FName                                              SocketName;                                                 // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_7[0x14];                                      // 0x003C   (0x0014)  MISSED
};

/// Struct /Script/AnimGraphRuntime.BoneSocketTarget
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 pad: 0x0000
struct FBoneSocketTarget
{ 
	bool                                               bUseSocket;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FBoneReference                                     BoneReference;                                              // 0x0004   (0x0014)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FSocketReference                                   SocketReference;                                            // 0x0020   (0x0050)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CCDIK
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0001A0) align 16 pad: 0x0000
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{ 
	FVector                                            EffectorLocation;                                           // 0x00D0   (0x000C)  
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                      // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x00E0   (0x0070)  
	FBoneReference                                     TipBone;                                                    // 0x0150   (0x0014)  
	FBoneReference                                     RootBone;                                                   // 0x0164   (0x0014)  
	float                                              Precision;                                                  // 0x0178   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x017C   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x0180   (0x0001)  
	bool                                               bEnableRotationLimit;                                       // 0x0181   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0182   (0x0006)  MISSED
	TArray<float>                                      RotationLimitPerJoints;                                     // 0x0188   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0198   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.Constraint
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FConstraint
{ 
	FBoneReference                                     TargetBone;                                                 // 0x0000   (0x0014)  
	EConstraintOffsetOption                            OffsetOption;                                               // 0x0014   (0x0001)  
	ETransformConstraintType                           TransformType;                                              // 0x0015   (0x0001)  
	FFilterOptionPerAxis                               PerAxis;                                                    // 0x0016   (0x0003)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Constraint
/// Size: 0x0048 (72 bytes) (0x0000D0 - 0x000118) align 8 pad: 0x0000
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00D0   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FConstraint>                                ConstraintSetup;                                            // 0x00E8   (0x0010)  
	TArray<float>                                      ConstraintWeights;                                          // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0108   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBone
/// Size: 0x0030 (48 bytes) (0x0000D0 - 0x000100) align 8 pad: 0x0000
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00D0   (0x0014)  
	FBoneReference                                     TargetBone;                                                 // 0x00E4   (0x0014)  
	bool                                               bCopyTranslation;                                           // 0x00F8   (0x0001)  
	bool                                               bCopyRotation;                                              // 0x00F9   (0x0001)  
	bool                                               bCopyScale;                                                 // 0x00FA   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     ControlSpace;                                               // 0x00FB   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
/// Size: 0x0038 (56 bytes) (0x0000D0 - 0x000108) align 8 pad: 0x0000
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00D0   (0x0014)  
	FBoneReference                                     TargetBone;                                                 // 0x00E4   (0x0014)  
	bool                                               bCopyTranslation;                                           // 0x00F8   (0x0001)  
	bool                                               bCopyRotation;                                              // 0x00F9   (0x0001)  
	bool                                               bCopyScale;                                                 // 0x00FA   (0x0001)  
	CopyBoneDeltaMode                                  CopyMode;                                                   // 0x00FB   (0x0001)  
	float                                              TranslationMultiplier;                                      // 0x00FC   (0x0004)  
	float                                              RotationMultiplier;                                         // 0x0100   (0x0004)  
	float                                              ScaleMultiplier;                                            // 0x0104   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
/// Size: 0x01C8 (456 bytes) (0x000010 - 0x0001D8) align 8 pad: 0x0000
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base
{ 
	SDK_UNDEFINED(8,464) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(SourceMeshComponent);                  // 0x0010   (0x0008)  
	bool                                               bUseAttachedParent : 1;                                     // 0x0018:0 (0x0001)  
	bool                                               bCopyCurves : 1;                                            // 0x0018:1 (0x0001)  
	bool                                               bCopyCustomAttributes;                                      // 0x0019   (0x0001)  
	bool                                               bUseMeshPose : 1;                                           // 0x001A:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x001B   (0x0001)  MISSED
	FName                                              RootBoneToCopy;                                             // 0x001C   (0x000C)  
	unsigned char                                      UnknownData01_7[0x1B0];                                     // 0x0028   (0x01B0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CurveFace
/// Size: 0x01B0 (432 bytes) (0x000010 - 0x0001C0) align 8 pad: 0x0000
struct FAnimNode_CurveFace : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	bool                                               UseA;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              BlendTimeA;                                                 // 0x0024   (0x0004)  
	float                                              BlendTimeB;                                                 // 0x0028   (0x0004)  
	bool                                               EnableAutoBlink;                                            // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              DefaultBlinkTime;                                           // 0x0030   (0x0004)  
	float                                              DefaultBlinkNoiseTime;                                      // 0x0034   (0x0004)  
	FName                                              AutoBlinkCurveName;                                         // 0x0038   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FRuntimeFloatCurve                                 AutoBlinkCurve;                                             // 0x0048   (0x0088)  
	bool                                               EnableAutoPupil;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              DefaultPupilTime;                                           // 0x00D4   (0x0004)  
	float                                              DefaultPupilNoiseTime;                                      // 0x00D8   (0x0004)  
	float                                              DefaultAutoPupilDis;                                        // 0x00DC   (0x0004)  
	TArray<FName>                                      PupilArray;                                                 // 0x00E0   (0x0010)  
	float                                              Temp_BlendTime;                                             // 0x00F0   (0x0004)  
	float                                              Temp_BlendAlpha;                                            // 0x00F4   (0x0004)  
	float                                              Temp_AutoBlinkTime;                                         // 0x00F8   (0x0004)  
	float                                              Temp_AutoPupilTime;                                         // 0x00FC   (0x0004)  
	SDK_UNDEFINED(80,465) /* TMap<FName, float> */     __um(AutoPupilMap);                                         // 0x0100   (0x0050)  
	SDK_UNDEFINED(80,466) /* TMap<FName, float> */     __um(NamedCurveValues);                                     // 0x0150   (0x0050)  
	TArray<FNamedCurveValue>                           NamedCurveValuesA;                                          // 0x01A0   (0x0010)  
	TArray<FNamedCurveValue>                           NamedCurveValuesB;                                          // 0x01B0   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CurveFix
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000030) align 8 pad: 0x0000
struct FAnimNode_CurveFix : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	TArray<FAntiCurveMap>                              AntiCurveMap;                                               // 0x0020   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CurveSource
/// Size: 0x0030 (48 bytes) (0x000010 - 0x000040) align 8 pad: 0x0000
struct FAnimNode_CurveSource : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	FName                                              SourceBinding;                                              // 0x0020   (0x000C)  
	float                                              ALPHA;                                                      // 0x002C   (0x0004)  
	SDK_UNDEFINED(16,467) /* TScriptInterface<Class> */ __um(CurveSource);                                         // 0x0030   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Fabrik
/// Size: 0x00E0 (224 bytes) (0x0000D0 - 0x0001B0) align 16 pad: 0x0000
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{ 
	FTransform                                         EffectorTransform;                                          // 0x00D0   (0x0030)  
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x0100   (0x0070)  
	FBoneReference                                     TipBone;                                                    // 0x0170   (0x0014)  
	FBoneReference                                     RootBone;                                                   // 0x0184   (0x0014)  
	float                                              Precision;                                                  // 0x0198   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x019C   (0x0004)  
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                     // 0x01A0   (0x0001)  
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                     // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x01A2   (0x000E)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
/// Size: 0x0068 (104 bytes) (0x0000D0 - 0x000138) align 8 pad: 0x0000
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     RightHandFK;                                                // 0x00D0   (0x0014)  
	FBoneReference                                     LeftHandFK;                                                 // 0x00E4   (0x0014)  
	FBoneReference                                     RightHandIK;                                                // 0x00F8   (0x0014)  
	FBoneReference                                     LeftHandIK;                                                 // 0x010C   (0x0014)  
	TArray<FBoneReference>                             IKBonesToMove;                                              // 0x0120   (0x0010)  
	float                                              HandFKWeight;                                               // 0x0130   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0134   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
/// Size: 0x00B0 (176 bytes) (0x000010 - 0x0000C0) align 8 pad: 0x0000
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base
{ 
	FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)  
	TArray<FPoseLink>                                  BlendPoses;                                                 // 0x0020   (0x0010)  
	TArray<FInputBlendPose>                            LayerSetup;                                                 // 0x0030   (0x0010)  
	TArray<float>                                      BlendWeights;                                               // 0x0040   (0x0010)  
	bool                                               bMeshSpaceRotationBlend;                                    // 0x0050   (0x0001)  
	bool                                               bMeshSpaceScaleBlend;                                       // 0x0051   (0x0001)  
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                           // 0x0052   (0x0001)  
	bool                                               bBlendRootMotionBasedOnRootBone;                            // 0x0053   (0x0001)  
	bool                                               bForceUpdateLinkedPose;                                     // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<FPerBoneBlendWeight>                        PerBoneBlendWeights;                                        // 0x0060   (0x0010)  
	FGuid                                              SkeletonGuid;                                               // 0x0070   (0x0010)  
	FGuid                                              VirtualBoneGuid;                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x0090   (0x0030)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKDefinition
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 pad: 0x0000
struct FAnimLegIKDefinition
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x0014)  
	FBoneReference                                     FKFootBone;                                                 // 0x0014   (0x0014)  
	int32_t                                            NumBonesInLimb;                                             // 0x0028   (0x0004)  
	float                                              MinRotationAngle;                                           // 0x002C   (0x0004)  
	TEnumAsByte<EAxis>                                 FootBoneForwardAxis;                                        // 0x0030   (0x0001)  
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                          // 0x0031   (0x0001)  
	bool                                               bEnableRotationLimit;                                       // 0x0032   (0x0001)  
	bool                                               bEnableKneeTwistCorrection;                                 // 0x0033   (0x0001)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LegIK
/// Size: 0x0030 (48 bytes) (0x0000D0 - 0x000100) align 8 pad: 0x0000
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase
{ 
	float                                              ReachPrecision;                                             // 0x00D0   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00D4   (0x0004)  
	TArray<FAnimLegIKDefinition>                       LegsDefinition;                                             // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00E8   (0x0018)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 pad: 0x0000
struct FAnimLegIKData
{ 
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0000   (0x00A0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.IKChain
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FIKChain
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/AnimGraphRuntime.IKChainLink
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 pad: 0x0000
struct FIKChainLink
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LookAt
/// Size: 0x0100 (256 bytes) (0x0000D0 - 0x0001D0) align 16 pad: 0x0000
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00D0   (0x0014)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00E4   (0x000C)  MISSED
	FBoneSocketTarget                                  LookAtTarget;                                               // 0x00F0   (0x0070)  
	FVector                                            LookAtLocation;                                             // 0x0160   (0x000C)  
	FAxis                                              LookAt_Axis;                                                // 0x016C   (0x0010)  
	bool                                               bUseLookUpAxis;                                             // 0x017C   (0x0001)  
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                          // 0x017D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x017E   (0x0002)  MISSED
	FAxis                                              LookUp_Axis;                                                // 0x0180   (0x0010)  
	float                                              LookAtClamp;                                                // 0x0190   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0194   (0x0004)  
	float                                              InterpolationTriggerThreashold;                             // 0x0198   (0x0004)  
	unsigned char                                      UnknownData02_7[0x34];                                      // 0x019C   (0x0034)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
/// Size: 0x0028 (40 bytes) (0x000010 - 0x000038) align 8 pad: 0x0000
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)  
	bool                                               bMeshSpaceAdditive;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyBone
/// Size: 0x0040 (64 bytes) (0x0000D0 - 0x000110) align 8 pad: 0x0000
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00D0   (0x0014)  
	FVector                                            Translation;                                                // 0x00E4   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x00F0   (0x000C)  
	FVector                                            Scale;                                                      // 0x00FC   (0x000C)  
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                            // 0x0108   (0x0001)  
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                               // 0x0109   (0x0001)  
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                  // 0x010A   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                           // 0x010B   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                              // 0x010C   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                                 // 0x010D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x010E   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyCurve
/// Size: 0x0048 (72 bytes) (0x000010 - 0x000058) align 8 pad: 0x0000
struct FAnimNode_ModifyCurve : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	TArray<float>                                      CurveValues;                                                // 0x0020   (0x0010)  
	TArray<FName>                                      CurveNames;                                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              ALPHA;                                                      // 0x0050   (0x0004)  
	EModifyCurveApplyMode                              ApplyMode;                                                  // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.MorphTargetModifierConfig
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FMorphTargetModifierConfig
{ 
	EMorphTargetModMethod                              MorphTargetModMethod;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FMorphTargetModWeightCurve>                 ModWeightCurves;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MorphTargetModifier
/// Size: 0x0050 (80 bytes) (0x000010 - 0x000060) align 8 pad: 0x0000
struct FAnimNode_MorphTargetModifier : FAnimNode_Base
{ 
	FComponentSpacePoseLink                            ComponentPose;                                              // 0x0010   (0x0010)  
	FBoneReference                                     DriverBone;                                                 // 0x0020   (0x0014)  
	FPerPlatformInt                                    MinModLOD;                                                  // 0x0034   (0x0004)  
	FPerPlatformInt                                    MaxModLOD;                                                  // 0x0038   (0x0004)  
	float                                              MaxDistance;                                                // 0x003C   (0x0004)  
	TArray<FMorphTargetModifierConfig>                 ModifierConfigs;                                            // 0x0040   (0x0010)  
	class UWorld*                                      WorldContext;                                               // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
/// Size: 0x0040 (64 bytes) (0x000010 - 0x000050) align 8 pad: 0x0000
struct FAnimNode_MultiWayBlend : FAnimNode_Base
{ 
	TArray<FPoseLink>                                  Poses;                                                      // 0x0010   (0x0010)  
	TArray<float>                                      DesiredAlphas;                                              // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0040   (0x0008)  
	bool                                               bAdditiveNode;                                              // 0x0048   (0x0001)  
	bool                                               bNormalizeAlpha;                                            // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ObserveBone
/// Size: 0x0040 (64 bytes) (0x0000D0 - 0x000110) align 8 pad: 0x0000
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToObserve;                                              // 0x00D0   (0x0014)  
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                               // 0x00E4   (0x0001)  
	bool                                               bRelativeToRefPose;                                         // 0x00E5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00E6   (0x0002)  MISSED
	FVector                                            Translation;                                                // 0x00E8   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x00F4   (0x000C)  
	FVector                                            Scale;                                                      // 0x0100   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseHandler
/// Size: 0x0060 (96 bytes) (0x000048 - 0x0000A8) align 8 pad: 0x0000
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
{ 
	class UPoseAsset*                                  PoseAsset;                                                  // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0050   (0x0058)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
/// Size: 0x0020 (32 bytes) (0x0000A8 - 0x0000C8) align 8 pad: 0x0000
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{ 
	FPoseLink                                          SourcePose;                                                 // 0x00A8   (0x0010)  
	EAlphaBlendOption                                  BlendOption;                                                // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	class UCurveFloat*                                 CustomCurve;                                                // 0x00C0   (0x0008)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseByName
/// Size: 0x0020 (32 bytes) (0x0000A8 - 0x0000C8) align 8 pad: 0x0000
struct FAnimNode_PoseByName : FAnimNode_PoseHandler
{ 
	FName                                              PoseName;                                                   // 0x00A8   (0x000C)  
	float                                              PoseWeight;                                                 // 0x00B4   (0x0004)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTransform
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FPoseDriverTransform
{ 
	FVector                                            TargetTranslation;                                          // 0x0000   (0x000C)  
	FRotator                                           TargetRotation;                                             // 0x000C   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTarget
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 pad: 0x0000
struct FPoseDriverTarget
{ 
	TArray<FPoseDriverTransform>                       BoneTransforms;                                             // 0x0000   (0x0010)  
	FRotator                                           TargetRotation;                                             // 0x0010   (0x000C)  
	float                                              TargetScale;                                                // 0x001C   (0x0004)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x0020   (0x0001)  
	ERBFFunctionType                                   FunctionType;                                               // 0x0021   (0x0001)  
	bool                                               bApplyCustomCurve;                                          // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0023   (0x0005)  MISSED
	FRichCurve                                         CustomCurve;                                                // 0x0028   (0x0080)  
	FName                                              DrivenName;                                                 // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B4   (0x0008)  MISSED
	bool                                               bIsHidden;                                                  // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x00BD   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RBFParams
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FRBFParams
{ 
	int32_t                                            TargetDimensions;                                           // 0x0000   (0x0004)  
	ERBFSolverType                                     SolverType;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x0008   (0x0004)  
	bool                                               bAutomaticRadius;                                           // 0x000C   (0x0001)  
	ERBFFunctionType                                   Function;                                                   // 0x000D   (0x0001)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x000E   (0x0001)  
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                  // 0x000F   (0x0001)  
	float                                              WeightThreshold;                                            // 0x0010   (0x0004)  
	ERBFNormalizeMethod                                NormalizeMethod;                                            // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FVector                                            MedianReference;                                            // 0x0018   (0x000C)  
	float                                              MedianMin;                                                  // 0x0024   (0x0004)  
	float                                              MedianMax;                                                  // 0x0028   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseDriver
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x000160) align 8 pad: 0x0000
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler
{ 
	FPoseLink                                          SourcePose;                                                 // 0x00A8   (0x0010)  
	TArray<FBoneReference>                             SourceBones;                                                // 0x00B8   (0x0010)  
	TArray<FBoneReference>                             OnlyDriveBones;                                             // 0x00C8   (0x0010)  
	TArray<FPoseDriverTarget>                          PoseTargets;                                                // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x00E8   (0x0030)  MISSED
	FBoneReference                                     EvalSpaceBone;                                              // 0x0118   (0x0014)  
	FRBFParams                                         RBFParams;                                                  // 0x012C   (0x002C)  
	EPoseDriverSource                                  DriveSource;                                                // 0x0158   (0x0001)  
	EPoseDriverOutput                                  DriveOutput;                                                // 0x0159   (0x0001)  
	bool                                               bOnlyDriveSelectedBones : 1;                                // 0x015A:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x015B   (0x0001)  MISSED
	int32_t                                            LODThreshold;                                               // 0x015C   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
/// Size: 0x00A0 (160 bytes) (0x000010 - 0x0000B0) align 8 pad: 0x0000
struct FAnimNode_PoseSnapshot : FAnimNode_Base
{ 
	FName                                              SnapshotName;                                               // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FPoseSnapshot                                      Snapshot;                                                   // 0x0020   (0x0040)  
	ESnapshotSourceMode                                Mode;                                                       // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_7[0x4F];                                      // 0x0061   (0x004F)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FRandomPlayerSequenceEntry
{ 
	class UAnimSequence*                               Sequence;                                                   // 0x0000   (0x0008)  
	float                                              ChanceToPlay;                                               // 0x0008   (0x0004)  
	int32_t                                            MinLoopCount;                                               // 0x000C   (0x0004)  
	int32_t                                            MaxLoopCount;                                               // 0x0010   (0x0004)  
	float                                              MinPlayRate;                                                // 0x0014   (0x0004)  
	float                                              MaxPlayRate;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FAlphaBlend                                        BlendIn;                                                    // 0x0020   (0x0030)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RandomPlayer
/// Size: 0x0068 (104 bytes) (0x000010 - 0x000078) align 8 pad: 0x0000
struct FAnimNode_RandomPlayer : FAnimNode_Base
{ 
	TArray<FRandomPlayerSequenceEntry>                 Entries;                                                    // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0020   (0x0050)  MISSED
	bool                                               bShuffleMode;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RBF
/// Size: 0x0140 (320 bytes) (0x000010 - 0x000150) align 16 pad: 0x0000
struct FAnimNode_RBF : FAnimNode_Base
{ 
	FComponentSpacePoseLink                            ComponentPose;                                              // 0x0010   (0x0010)  
	ERBFNodeSolveMode                                  SolveMode;                                                  // 0x0020   (0x0001)  
	bool                                               bEnableNode;                                                // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0022   (0x0002)  MISSED
	FPerPlatformInt                                    MaxLOD;                                                     // 0x0024   (0x0004)  
	unsigned char                                      UnknownData01_6[0x100];                                     // 0x0028   (0x0100)  MISSED
	class URBFPrecomputations*                         PrecomputationCaches;                                       // 0x0128   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0130   (0x0020)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RefPose
/// Size: 0x0008 (8 bytes) (0x000010 - 0x000018) align 8 pad: 0x0000
struct FAnimNode_RefPose : FAnimNode_Base
{ 
	TEnumAsByte<ERefPoseType>                          RefPoseType;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ResetRoot
/// Size: 0x0010 (16 bytes) (0x0000D0 - 0x0000E0) align 8 pad: 0x0000
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SimSpaceSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 pad: 0x0000
struct FSimSpaceSettings
{ 
	float                                              MasterAlpha;                                                // 0x0000   (0x0004)  
	float                                              VelocityScaleZ;                                             // 0x0004   (0x0004)  
	float                                              MaxLinearVelocity;                                          // 0x0008   (0x0004)  
	float                                              MaxAngularVelocity;                                         // 0x000C   (0x0004)  
	float                                              MaxLinearAcceleration;                                      // 0x0010   (0x0004)  
	float                                              MaxAngularAcceleration;                                     // 0x0014   (0x0004)  
	float                                              ExternalLinearDrag;                                         // 0x0018   (0x0004)  
	FVector                                            ExternalLinearDragV;                                        // 0x001C   (0x000C)  
	FVector                                            ExternalLinearVelocity;                                     // 0x0028   (0x000C)  
	FVector                                            ExternalAngularVelocity;                                    // 0x0034   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RigidBody
/// Size: 0x0630 (1584 bytes) (0x0000D0 - 0x000700) align 16 pad: 0x0000
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{ 
	class UPhysicsAsset*                               OverridePhysicsAsset;                                       // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x00D8   (0x00A0)  MISSED
	FVector                                            OverrideWorldGravity;                                       // 0x0178   (0x000C)  
	FVector                                            ExternalForce;                                              // 0x0184   (0x000C)  
	FVector                                            ComponentLinearAccScale;                                    // 0x0190   (0x000C)  
	FVector                                            ComponentLinearVelScale;                                    // 0x019C   (0x000C)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x01A8   (0x000C)  
	FSimSpaceSettings                                  SimSpaceSettings;                                           // 0x01B4   (0x0040)  
	float                                              CachedBoundsScale;                                          // 0x01F4   (0x0004)  
	FBoneReference                                     BaseBoneRef;                                                // 0x01F8   (0x0014)  
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                             // 0x020C   (0x0001)  
	ESimulationSpace                                   SimulationSpace;                                            // 0x020D   (0x0001)  
	bool                                               bForceDisableCollisionBetweenConstraintBodies;              // 0x020E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x020F   (0x0001)  MISSED
	bool                                               bEnableWorldGeometry : 1;                                   // 0x0210:0 (0x0001)  
	bool                                               bOverrideWorldGravity : 1;                                  // 0x0210:1 (0x0001)  
	bool                                               bTransferBoneVelocities : 1;                                // 0x0210:2 (0x0001)  
	bool                                               bFreezeIncomingPoseOnStart : 1;                             // 0x0210:3 (0x0001)  
	bool                                               bClampLinearTranslationLimitToRefPose : 1;                  // 0x0210:4 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0211   (0x0003)  MISSED
	float                                              WorldSpaceMinimumScale;                                     // 0x0214   (0x0004)  
	float                                              EvaluationResetTime;                                        // 0x0218   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4E4];                                     // 0x021C   (0x04E4)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotateRootBone
/// Size: 0x0090 (144 bytes) (0x000010 - 0x0000A0) align 8 pad: 0x0000
struct FAnimNode_RotateRootBone : FAnimNode_Base
{ 
	FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)  
	float                                              Pitch;                                                      // 0x0020   (0x0004)  
	float                                              Yaw;                                                        // 0x0024   (0x0004)  
	FInputScaleBiasClamp                               PitchScaleBiasClamp;                                        // 0x0028   (0x0030)  
	FInputScaleBiasClamp                               YawScaleBiasClamp;                                          // 0x0058   (0x0030)  
	FRotator                                           MeshToComponent;                                            // 0x0088   (0x000C)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0094   (0x000C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
/// Size: 0x0030 (48 bytes) (0x0000D0 - 0x000100) align 8 pad: 0x0000
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     TargetBone;                                                 // 0x00D0   (0x0014)  
	FBoneReference                                     SourceBone;                                                 // 0x00E4   (0x0014)  
	float                                              Multiplier;                                                 // 0x00F8   (0x0004)  
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                        // 0x00FC   (0x0001)  
	bool                                               bIsAdditive;                                                // 0x00FD   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x00FE   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
/// Size: 0x00B0 (176 bytes) (0x0000F8 - 0x0001A8) align 8 pad: 0x0000
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{ 
	FPoseLink                                          BasePose;                                                   // 0x00F8   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0108   (0x0004)  
	float                                              ALPHA;                                                      // 0x010C   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0110   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0118   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0160   (0x000C)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x016C   (0x0030)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x019C   (0x0004)  MISSED
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x01A0   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x01A2   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
/// Size: 0x0070 (112 bytes) (0x000010 - 0x000080) align 8 pad: 0x0000
struct FAnimNode_ScaleChainLength : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	float                                              DefaultChainLength;                                         // 0x0020   (0x0004)  
	FBoneReference                                     ChainStartBone;                                             // 0x0024   (0x0014)  
	FBoneReference                                     ChainEndBone;                                               // 0x0038   (0x0014)  
	FVector                                            TargetLocation;                                             // 0x004C   (0x000C)  
	float                                              ALPHA;                                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0060   (0x0008)  
	EScaleChainInitialLength                           ChainInitialLength;                                         // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_7[0x17];                                      // 0x0069   (0x0017)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator
/// Size: 0x0018 (24 bytes) (0x000048 - 0x000060) align 8 pad: 0x0000
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase
{ 
	class UAnimSequenceBase*                           Sequence;                                                   // 0x0048   (0x0008)  
	float                                              ExplicitTime;                                               // 0x0050   (0x0004)  
	bool                                               bForceLoop;                                                 // 0x0054   (0x0001)  
	bool                                               bShouldLoop;                                                // 0x0055   (0x0001)  
	bool                                               bTeleportToExplicitTime;                                    // 0x0056   (0x0001)  
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                   // 0x0057   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0058   (0x0004)  MISSED
	float                                              StartPosition;                                              // 0x005C   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Slot
/// Size: 0x0050 (80 bytes) (0x000010 - 0x000060) align 8 pad: 0x0000
struct FAnimNode_Slot : FAnimNode_Base
{ 
	FPoseLink                                          Source;                                                     // 0x0010   (0x0010)  
	FName                                              SlotName;                                                   // 0x0020   (0x000C)  
	bool                                               bAlwaysUpdateSourcePose;                                    // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x33];                                      // 0x002D   (0x0033)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SplineIK
/// Size: 0x01B0 (432 bytes) (0x0000D0 - 0x000280) align 8 pad: 0x0000
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     StartBone;                                                  // 0x00D0   (0x0014)  
	FBoneReference                                     EndBone;                                                    // 0x00E4   (0x0014)  
	ESplineBoneAxis                                    BoneAxis;                                                   // 0x00F8   (0x0001)  
	bool                                               bAutoCalculateSpline;                                       // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00FA   (0x0002)  MISSED
	int32_t                                            PointCount;                                                 // 0x00FC   (0x0004)  
	TArray<FTransform>                                 ControlPoints;                                              // 0x0100   (0x0010)  
	float                                              Roll;                                                       // 0x0110   (0x0004)  
	float                                              TwistStart;                                                 // 0x0114   (0x0004)  
	float                                              TwistEnd;                                                   // 0x0118   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	FAlphaBlend                                        TwistBlend;                                                 // 0x0120   (0x0030)  
	float                                              Stretch;                                                    // 0x0150   (0x0004)  
	float                                              Offset;                                                     // 0x0154   (0x0004)  
	unsigned char                                      UnknownData02_7[0x128];                                     // 0x0158   (0x0128)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SplineIKCachedBoneData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FSplineIKCachedBoneData
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0014)  
	int32_t                                            RefSkeletonIndex;                                           // 0x0014   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SpringBone
/// Size: 0x0068 (104 bytes) (0x0000D0 - 0x000138) align 8 pad: 0x0000
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SpringBone;                                                 // 0x00D0   (0x0014)  
	float                                              MaxDisplacement;                                            // 0x00E4   (0x0004)  
	float                                              SpringStiffness;                                            // 0x00E8   (0x0004)  
	float                                              SpringDamping;                                              // 0x00EC   (0x0004)  
	float                                              ErrorResetThresh;                                           // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x00F4   (0x003C)  MISSED
	bool                                               bLimitDisplacement : 1;                                     // 0x0130:0 (0x0001)  
	bool                                               bTranslateX : 1;                                            // 0x0130:1 (0x0001)  
	bool                                               bTranslateY : 1;                                            // 0x0130:2 (0x0001)  
	bool                                               bTranslateZ : 1;                                            // 0x0130:3 (0x0001)  
	bool                                               bRotateX : 1;                                               // 0x0130:4 (0x0001)  
	bool                                               bRotateY : 1;                                               // 0x0130:5 (0x0001)  
	bool                                               bRotateZ : 1;                                               // 0x0130:6 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0131   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_StateResult
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
struct FAnimNode_StateResult : FAnimNode_Root
{ 
};

/// Struct /Script/AnimGraphRuntime.RotationLimit
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FRotationLimit
{ 
	FVector                                            LimitMin;                                                   // 0x0000   (0x000C)  
	FVector                                            LimitMax;                                                   // 0x000C   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Trail
/// Size: 0x01A0 (416 bytes) (0x0000D0 - 0x000270) align 16 pad: 0x0000
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x00D0   (0x0030)  MISSED
	FBoneReference                                     TrailBone;                                                  // 0x0100   (0x0014)  
	int32_t                                            ChainLength;                                                // 0x0114   (0x0004)  
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                              // 0x0118   (0x0001)  
	bool                                               bInvertChainBoneAxis : 1;                                   // 0x0119:0 (0x0001)  
	bool                                               bLimitStretch : 1;                                          // 0x0119:1 (0x0001)  
	bool                                               bLimitRotation : 1;                                         // 0x0119:2 (0x0001)  
	bool                                               bUsePlanarLimit : 1;                                        // 0x0119:3 (0x0001)  
	bool                                               bActorSpaceFakeVel : 1;                                     // 0x0119:4 (0x0001)  
	bool                                               bReorientParentToChild : 1;                                 // 0x0119:5 (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x011A   (0x0002)  MISSED
	float                                              MaxDeltaTime;                                               // 0x011C   (0x0004)  
	float                                              RelaxationSpeedScale;                                       // 0x0120   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0124   (0x0004)  MISSED
	FRuntimeFloatCurve                                 TrailRelaxationSpeed;                                       // 0x0128   (0x0088)  
	FInputScaleBiasClamp                               RelaxationSpeedScaleInputProcessor;                         // 0x01B0   (0x0030)  
	TArray<FRotationLimit>                             RotationLimits;                                             // 0x01E0   (0x0010)  
	TArray<FVector>                                    RotationOffsets;                                            // 0x01F0   (0x0010)  
	TArray<FAnimPhysPlanarLimit>                       PlanarLimits;                                               // 0x0200   (0x0010)  
	float                                              StretchLimit;                                               // 0x0210   (0x0004)  
	FVector                                            FakeVelocity;                                               // 0x0214   (0x000C)  
	FBoneReference                                     BaseJoint;                                                  // 0x0220   (0x0014)  
	float                                              LastBoneRotationAnimAlphaBlend;                             // 0x0234   (0x0004)  
	unsigned char                                      UnknownData03_7[0x38];                                      // 0x0238   (0x0038)  MISSED
};

/// Struct /Script/AnimGraphRuntime.ReferenceBoneFrame
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FReferenceBoneFrame
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0014)  
	FAxis                                              Axis;                                                       // 0x0014   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
/// Size: 0x0080 (128 bytes) (0x0000D0 - 0x000150) align 8 pad: 0x0000
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{ 
	FReferenceBoneFrame                                BaseFrame;                                                  // 0x00D0   (0x0024)  
	FReferenceBoneFrame                                TwistFrame;                                                 // 0x00F4   (0x0024)  
	FAxis                                              TwistPlaneNormalAxis;                                       // 0x0118   (0x0010)  
	float                                              RangeMax;                                                   // 0x0128   (0x0004)  
	float                                              RemappedMin;                                                // 0x012C   (0x0004)  
	float                                              RemappedMax;                                                // 0x0130   (0x0004)  
	FAnimCurveParam                                    Curve;                                                      // 0x0134   (0x0010)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0144   (0x000C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
/// Size: 0x0140 (320 bytes) (0x0000D0 - 0x000210) align 16 pad: 0x0000
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     IKBone;                                                     // 0x00D0   (0x0014)  
	float                                              StartStretchRatio;                                          // 0x00E4   (0x0004)  
	float                                              MaxStretchScale;                                            // 0x00E8   (0x0004)  
	FVector                                            EffectorLocation;                                           // 0x00EC   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x0100   (0x0070)  
	FVector                                            JointTargetLocation;                                        // 0x0170   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x017C   (0x0004)  MISSED
	FBoneSocketTarget                                  JointTarget;                                                // 0x0180   (0x0070)  
	FAxis                                              TwistAxis;                                                  // 0x01F0   (0x0010)  
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                      // 0x0200   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                   // 0x0201   (0x0001)  
	bool                                               bAllowStretching : 1;                                       // 0x0202:0 (0x0001)  
	bool                                               bTakeRotationFromEffectorSpace : 1;                         // 0x0202:1 (0x0001)  
	bool                                               bMaintainEffectorRelRot : 1;                                // 0x0202:2 (0x0001)  
	bool                                               bAllowTwist : 1;                                            // 0x0202:3 (0x0001)  
	unsigned char                                      UnknownData02_7[0xD];                                       // 0x0203   (0x000D)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
/// Size: 0x00B8 (184 bytes) (0x000010 - 0x0000C8) align 8 pad: 0x0000
struct FAnimNode_TwoWayBlend : FAnimNode_Base
{ 
	FPoseLink                                          A;                                                          // 0x0010   (0x0010)  
	FPoseLink                                          B;                                                          // 0x0020   (0x0010)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0030   (0x0001)  
	bool                                               bAlphaBoolEnabled : 1;                                      // 0x0031:0 (0x0001)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0031:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0031:2 (0x0001)  MISSED
	bool                                               bResetChildOnActivation : 1;                                // 0x0031:3 (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              ALPHA;                                                      // 0x0034   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0038   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0040   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0088   (0x000C)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0094   (0x0030)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.IKFootPelvisPullDownSolver
/// Size: 0x004C (76 bytes) (0x000000 - 0x00004C) align 4 pad: 0x0000
struct FIKFootPelvisPullDownSolver
{ 
	FVectorRK4SpringInterpolator                       PelvisAdjustmentInterp;                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x0008   (0x0034)  MISSED
	float                                              PelvisAdjustmentInterpAlpha;                                // 0x003C   (0x0004)  
	float                                              PelvisAdjustmentMaxDistance;                                // 0x0040   (0x0004)  
	float                                              PelvisAdjustmentErrorTolerance;                             // 0x0044   (0x0004)  
	int32_t                                            PelvisAdjustmentMaxIter;                                    // 0x0048   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.WarpingVectorValue
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FWarpingVectorValue
{ 
	EWarpingVectorMode                                 Mode;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Value;                                                      // 0x0004   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.PositionHistory
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FPositionHistory
{ 
	TArray<FVector>                                    Positions;                                                  // 0x0000   (0x0010)  
	float                                              Range;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x1C];                                      // 0x0014   (0x001C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RBFEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FRBFEntry
{ 
	TArray<float>                                      Values;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.RBFTarget
/// Size: 0x0090 (144 bytes) (0x000010 - 0x0000A0) align 8 pad: 0x0000
struct FRBFTarget : FRBFEntry
{ 
	float                                              ScaleFactor;                                                // 0x0010   (0x0004)  
	bool                                               bApplyCustomCurve;                                          // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRichCurve                                         CustomCurve;                                                // 0x0018   (0x0080)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x0098   (0x0001)  
	ERBFFunctionType                                   FunctionType;                                               // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x009A   (0x0006)  MISSED
};

