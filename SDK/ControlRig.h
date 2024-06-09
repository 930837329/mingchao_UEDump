
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: RigVM

/// Enum /Script/ControlRig.EControlRigComponentMapDirection
/// Size: 0x01 (1 bytes)
enum class EControlRigComponentMapDirection : uint8_t
{
	EControlRigComponentMapDirection__Input                                          = 0,
	EControlRigComponentMapDirection__Output                                         = 1
};

/// Enum /Script/ControlRig.EControlRigComponentSpace
/// Size: 0x01 (1 bytes)
enum class EControlRigComponentSpace : uint8_t
{
	EControlRigComponentSpace__WorldSpace                                            = 0,
	EControlRigComponentSpace__ActorSpace                                            = 1,
	EControlRigComponentSpace__ComponentSpace                                        = 2,
	EControlRigComponentSpace__RigSpace                                              = 3,
	EControlRigComponentSpace__LocalSpace                                            = 4,
	EControlRigComponentSpace__Max                                                   = 5
};

/// Enum /Script/ControlRig.ERigExecutionType
/// Size: 0x01 (1 bytes)
enum class ERigExecutionType : uint8_t
{
	ERigExecutionType__Runtime                                                       = 0,
	ERigExecutionType__Editing                                                       = 1,
	ERigExecutionType__Max                                                           = 2
};

/// Enum /Script/ControlRig.EBoneGetterSetterMode
/// Size: 0x01 (1 bytes)
enum class EBoneGetterSetterMode : uint8_t
{
	EBoneGetterSetterMode__LocalSpace                                                = 0,
	EBoneGetterSetterMode__GlobalSpace                                               = 1,
	EBoneGetterSetterMode__Max                                                       = 2
};

/// Enum /Script/ControlRig.ETransformGetterType
/// Size: 0x01 (1 bytes)
enum class ETransformGetterType : uint8_t
{
	ETransformGetterType__Initial                                                    = 0,
	ETransformGetterType__Current                                                    = 1,
	ETransformGetterType__Max                                                        = 2
};

/// Enum /Script/ControlRig.EControlRigClampSpatialMode
/// Size: 0x01 (1 bytes)
enum class EControlRigClampSpatialMode : uint8_t
{
	EControlRigClampSpatialMode__Plane                                               = 0,
	EControlRigClampSpatialMode__Cylinder                                            = 1,
	EControlRigClampSpatialMode__Sphere                                              = 2
};

/// Enum /Script/ControlRig.ETransformSpaceMode
/// Size: 0x01 (1 bytes)
enum class ETransformSpaceMode : uint8_t
{
	ETransformSpaceMode__LocalSpace                                                  = 0,
	ETransformSpaceMode__GlobalSpace                                                 = 1,
	ETransformSpaceMode__BaseSpace                                                   = 2,
	ETransformSpaceMode__BaseJoint                                                   = 3,
	ETransformSpaceMode__Max                                                         = 4
};

/// Enum /Script/ControlRig.EControlRigDrawSettings
/// Size: 0x01 (1 bytes)
enum class EControlRigDrawSettings : uint8_t
{
	EControlRigDrawSettings__Points                                                  = 0,
	EControlRigDrawSettings__Lines                                                   = 1,
	EControlRigDrawSettings__LineStrip                                               = 2,
	EControlRigDrawSettings__DynamicMesh                                             = 3
};

/// Enum /Script/ControlRig.EControlRigDrawHierarchyMode
/// Size: 0x01 (1 bytes)
enum class EControlRigDrawHierarchyMode : uint8_t
{
	EControlRigDrawHierarchyMode__Axes                                               = 0,
	EControlRigDrawHierarchyMode__Max                                                = 1
};

/// Enum /Script/ControlRig.EControlRigAnimEasingType
/// Size: 0x01 (1 bytes)
enum class EControlRigAnimEasingType : uint8_t
{
	EControlRigAnimEasingType__Linear                                                = 0,
	EControlRigAnimEasingType__QuadraticEaseIn                                       = 1,
	EControlRigAnimEasingType__QuadraticEaseOut                                      = 2,
	EControlRigAnimEasingType__QuadraticEaseInOut                                    = 3,
	EControlRigAnimEasingType__CubicEaseIn                                           = 4,
	EControlRigAnimEasingType__CubicEaseOut                                          = 5,
	EControlRigAnimEasingType__CubicEaseInOut                                        = 6,
	EControlRigAnimEasingType__QuarticEaseIn                                         = 7,
	EControlRigAnimEasingType__QuarticEaseOut                                        = 8,
	EControlRigAnimEasingType__QuarticEaseInOut                                      = 9,
	EControlRigAnimEasingType__QuinticEaseIn                                         = 10,
	EControlRigAnimEasingType__QuinticEaseOut                                        = 11,
	EControlRigAnimEasingType__QuinticEaseInOut                                      = 12,
	EControlRigAnimEasingType__SineEaseIn                                            = 13,
	EControlRigAnimEasingType__SineEaseOut                                           = 14,
	EControlRigAnimEasingType__SineEaseInOut                                         = 15,
	EControlRigAnimEasingType__CircularEaseIn                                        = 16,
	EControlRigAnimEasingType__CircularEaseOut                                       = 17,
	EControlRigAnimEasingType__CircularEaseInOut                                     = 18,
	EControlRigAnimEasingType__ExponentialEaseIn                                     = 19,
	EControlRigAnimEasingType__ExponentialEaseOut                                    = 20,
	EControlRigAnimEasingType__ExponentialEaseInOut                                  = 21,
	EControlRigAnimEasingType__ElasticEaseIn                                         = 22,
	EControlRigAnimEasingType__ElasticEaseOut                                        = 23,
	EControlRigAnimEasingType__ElasticEaseInOut                                      = 24,
	EControlRigAnimEasingType__BackEaseIn                                            = 25,
	EControlRigAnimEasingType__BackEaseOut                                           = 26,
	EControlRigAnimEasingType__BackEaseInOut                                         = 27,
	EControlRigAnimEasingType__BounceEaseIn                                          = 28,
	EControlRigAnimEasingType__BounceEaseOut                                         = 29,
	EControlRigAnimEasingType__BounceEaseInOut                                       = 30
};

/// Enum /Script/ControlRig.EControlRigRotationOrder
/// Size: 0x01 (1 bytes)
enum class EControlRigRotationOrder : uint8_t
{
	EControlRigRotationOrder__XYZ                                                    = 0,
	EControlRigRotationOrder__XZY                                                    = 1,
	EControlRigRotationOrder__YXZ                                                    = 2,
	EControlRigRotationOrder__YZX                                                    = 3,
	EControlRigRotationOrder__ZXY                                                    = 4,
	EControlRigRotationOrder__ZYX                                                    = 5
};

/// Enum /Script/ControlRig.ECRSimPointIntegrateType
/// Size: 0x01 (1 bytes)
enum class ECRSimPointIntegrateType : uint8_t
{
	ECRSimPointIntegrateType__Verlet                                                 = 0,
	ECRSimPointIntegrateType__SemiExplicitEuler                                      = 1
};

/// Enum /Script/ControlRig.ECRSimConstraintType
/// Size: 0x01 (1 bytes)
enum class ECRSimConstraintType : uint8_t
{
	ECRSimConstraintType__Distance                                                   = 0,
	ECRSimConstraintType__DistanceFromA                                              = 1,
	ECRSimConstraintType__DistanceFromB                                              = 2,
	ECRSimConstraintType__Plane                                                      = 3
};

/// Enum /Script/ControlRig.ECRSimPointForceType
/// Size: 0x01 (1 bytes)
enum class ECRSimPointForceType : uint8_t
{
	ECRSimPointForceType__Direction                                                  = 0
};

/// Enum /Script/ControlRig.ECRSimSoftCollisionType
/// Size: 0x01 (1 bytes)
enum class ECRSimSoftCollisionType : uint8_t
{
	ECRSimSoftCollisionType__Plane                                                   = 0,
	ECRSimSoftCollisionType__Sphere                                                  = 1,
	ECRSimSoftCollisionType__Cone                                                    = 2
};

/// Enum /Script/ControlRig.EControlRigFKRigExecuteMode
/// Size: 0x01 (1 bytes)
enum class EControlRigFKRigExecuteMode : uint8_t
{
	EControlRigFKRigExecuteMode__Replace                                             = 0,
	EControlRigFKRigExecuteMode__Additive                                            = 1,
	EControlRigFKRigExecuteMode__Max                                                 = 2
};

/// Enum /Script/ControlRig.ERigBoneType
/// Size: 0x01 (1 bytes)
enum class ERigBoneType : uint8_t
{
	ERigBoneType__Imported                                                           = 0,
	ERigBoneType__User                                                               = 1
};

/// Enum /Script/ControlRig.ERigControlAxis
/// Size: 0x01 (1 bytes)
enum class ERigControlAxis : uint8_t
{
	ERigControlAxis__X                                                               = 0,
	ERigControlAxis__Y                                                               = 1,
	ERigControlAxis__Z                                                               = 2
};

/// Enum /Script/ControlRig.ERigControlValueType
/// Size: 0x01 (1 bytes)
enum class ERigControlValueType : uint8_t
{
	ERigControlValueType__Initial                                                    = 0,
	ERigControlValueType__Current                                                    = 1,
	ERigControlValueType__Minimum                                                    = 2,
	ERigControlValueType__Maximum                                                    = 3
};

/// Enum /Script/ControlRig.ERigControlType
/// Size: 0x01 (1 bytes)
enum class ERigControlType : uint8_t
{
	ERigControlType__Bool                                                            = 0,
	ERigControlType__Float                                                           = 1,
	ERigControlType__Integer                                                         = 2,
	ERigControlType__Vector2D                                                        = 3,
	ERigControlType__Position                                                        = 4,
	ERigControlType__Scale                                                           = 5,
	ERigControlType__Rotator                                                         = 6,
	ERigControlType__Transform                                                       = 7,
	ERigControlType__TransformNoScale                                                = 8,
	ERigControlType__EulerTransform                                                  = 9
};

/// Enum /Script/ControlRig.ERigHierarchyImportMode
/// Size: 0x01 (1 bytes)
enum class ERigHierarchyImportMode : uint8_t
{
	ERigHierarchyImportMode__Append                                                  = 0,
	ERigHierarchyImportMode__Replace                                                 = 1,
	ERigHierarchyImportMode__ReplaceLocalTransform                                   = 2,
	ERigHierarchyImportMode__ReplaceGlobalTransform                                  = 3,
	ERigHierarchyImportMode__Max                                                     = 4
};

/// Enum /Script/ControlRig.EControlRigSetKey
/// Size: 0x01 (1 bytes)
enum class EControlRigSetKey : uint8_t
{
	EControlRigSetKey__DoNotCare                                                     = 0,
	EControlRigSetKey__Always                                                        = 1,
	EControlRigSetKey__Never                                                         = 2
};

/// Enum /Script/ControlRig.ERigEvent
/// Size: 0x01 (1 bytes)
enum class ERigEvent : uint8_t
{
	ERigEvent__None                                                                  = 0,
	ERigEvent__RequestAutoKey                                                        = 1,
	ERigEvent__Max                                                                   = 2
};

/// Enum /Script/ControlRig.ERigElementType
/// Size: 0x01 (1 bytes)
enum class ERigElementType : uint8_t
{
	ERigElementType__None                                                            = 0,
	ERigElementType__Bone                                                            = 1,
	ERigElementType__Space                                                           = 2,
	ERigElementType__Control                                                         = 4,
	ERigElementType__Curve                                                           = 8,
	ERigElementType__All                                                             = 15
};

/// Enum /Script/ControlRig.ERigSpaceType
/// Size: 0x01 (1 bytes)
enum class ERigSpaceType : uint8_t
{
	ERigSpaceType__Global                                                            = 0,
	ERigSpaceType__Bone                                                              = 1,
	ERigSpaceType__Control                                                           = 2,
	ERigSpaceType__Space                                                             = 3
};

/// Enum /Script/ControlRig.EAimMode
/// Size: 0x01 (1 bytes)
enum class EAimMode : uint8_t
{
	EAimMode__AimAtTarget                                                            = 0,
	EAimMode__OrientToTarget                                                         = 1
};

/// Enum /Script/ControlRig.EApplyTransformMode
/// Size: 0x01 (1 bytes)
enum class EApplyTransformMode : uint8_t
{
	EApplyTransformMode__Override                                                    = 0,
	EApplyTransformMode__Additive                                                    = 1,
	EApplyTransformMode__Max                                                         = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugPointMode
/// Size: 0x01 (1 bytes)
enum class ERigUnitDebugPointMode : uint8_t
{
	ERigUnitDebugPointMode__Point                                                    = 0,
	ERigUnitDebugPointMode__Vector                                                   = 1,
	ERigUnitDebugPointMode__Max                                                      = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugTransformMode
/// Size: 0x01 (1 bytes)
enum class ERigUnitDebugTransformMode : uint8_t
{
	ERigUnitDebugTransformMode__Point                                                = 0,
	ERigUnitDebugTransformMode__Axes                                                 = 1,
	ERigUnitDebugTransformMode__Box                                                  = 2,
	ERigUnitDebugTransformMode__Max                                                  = 3
};

/// Enum /Script/ControlRig.EControlRigCurveAlignment
/// Size: 0x01 (1 bytes)
enum class EControlRigCurveAlignment : uint8_t
{
	EControlRigCurveAlignment__Front                                                 = 0,
	EControlRigCurveAlignment__Stretched                                             = 1
};

/// Enum /Script/ControlRig.EControlRigVectorKind
/// Size: 0x01 (1 bytes)
enum class EControlRigVectorKind : uint8_t
{
	EControlRigVectorKind__Direction                                                 = 0,
	EControlRigVectorKind__Location                                                  = 1
};

/// Enum /Script/ControlRig.ERBFVectorDistanceType
/// Size: 0x01 (1 bytes)
enum class ERBFVectorDistanceType : uint8_t
{
	ERBFVectorDistanceType__Euclidean                                                = 0,
	ERBFVectorDistanceType__Manhattan                                                = 1,
	ERBFVectorDistanceType__ArcLength                                                = 2
};

/// Enum /Script/ControlRig.ERBFQuatDistanceType
/// Size: 0x01 (1 bytes)
enum class ERBFQuatDistanceType : uint8_t
{
	ERBFQuatDistanceType__Euclidean                                                  = 0,
	ERBFQuatDistanceType__ArcLength                                                  = 1,
	ERBFQuatDistanceType__SwingAngle                                                 = 2,
	ERBFQuatDistanceType__TwistAngle                                                 = 3
};

/// Enum /Script/ControlRig.ERBFKernelType
/// Size: 0x01 (1 bytes)
enum class ERBFKernelType : uint8_t
{
	ERBFKernelType__Gaussian                                                         = 0,
	ERBFKernelType__Exponential                                                      = 1,
	ERBFKernelType__Linear                                                           = 2,
	ERBFKernelType__Cubic                                                            = 3,
	ERBFKernelType__Quintic                                                          = 4
};

/// Enum /Script/ControlRig.EControlRigModifyBoneMode
/// Size: 0x01 (1 bytes)
enum class EControlRigModifyBoneMode : uint8_t
{
	EControlRigModifyBoneMode__OverrideLocal                                         = 0,
	EControlRigModifyBoneMode__OverrideGlobal                                        = 1,
	EControlRigModifyBoneMode__AdditiveLocal                                         = 2,
	EControlRigModifyBoneMode__AdditiveGlobal                                        = 3,
	EControlRigModifyBoneMode__Max                                                   = 4
};

/// Enum /Script/ControlRig.ERigUnitVisualDebugPointMode
/// Size: 0x01 (1 bytes)
enum class ERigUnitVisualDebugPointMode : uint8_t
{
	ERigUnitVisualDebugPointMode__Point                                              = 0,
	ERigUnitVisualDebugPointMode__Vector                                             = 1,
	ERigUnitVisualDebugPointMode__Max                                                = 2
};

/// Enum /Script/ControlRig.EControlRigState
/// Size: 0x01 (1 bytes)
enum class EControlRigState : uint8_t
{
	EControlRigState__Init                                                           = 0,
	EControlRigState__Update                                                         = 1,
	EControlRigState__Invalid                                                        = 2
};

/// Struct /Script/ControlRig.RigElement
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FRigElement
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FName                                              Name;                                                       // 0x0008   (0x000C)  
	int32_t                                            Index;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigBone
/// Size: 0x00C8 (200 bytes) (0x000018 - 0x0000E0) align 16 pad: 0x0000
struct FRigBone : FRigElement
{ 
	FName                                              ParentName;                                                 // 0x0018   (0x000C)  
	int32_t                                            ParentIndex;                                                // 0x0024   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0030   (0x0030)  
	FTransform                                         GlobalTransform;                                            // 0x0060   (0x0030)  
	FTransform                                         LocalTransform;                                             // 0x0090   (0x0030)  
	TArray<int32_t>                                    Dependents;                                                 // 0x00C0   (0x0010)  
	ERigBoneType                                       Type;                                                       // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigBoneHierarchy
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 pad: 0x0000
struct FRigBoneHierarchy
{ 
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0000   (0x0020)  MISSED
	TArray<FRigBone>                                   Bones;                                                      // 0x0020   (0x0010)  
	SDK_UNDEFINED(80,1331) /* TMap<FName, int32_t> */  __um(NameToIndexMapping);                                   // 0x0030   (0x0050)  
	TArray<FName>                                      Selection;                                                  // 0x0080   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigSpace
/// Size: 0x0078 (120 bytes) (0x000018 - 0x000090) align 16 pad: 0x0000
struct FRigSpace : FRigElement
{ 
	ERigSpaceType                                      SpaceType;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              ParentName;                                                 // 0x001C   (0x000C)  
	int32_t                                            ParentIndex;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0030   (0x0030)  
	FTransform                                         LocalTransform;                                             // 0x0060   (0x0030)  
};

/// Struct /Script/ControlRig.RigSpaceHierarchy
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FRigSpaceHierarchy
{ 
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0000   (0x0020)  MISSED
	TArray<FRigSpace>                                  Spaces;                                                     // 0x0020   (0x0010)  
	SDK_UNDEFINED(80,1332) /* TMap<FName, int32_t> */  __um(NameToIndexMapping);                                   // 0x0030   (0x0050)  
	TArray<FName>                                      Selection;                                                  // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigControlValueStorage
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align 4 pad: 0x0000
struct FRigControlValueStorage
{ 
	float                                              Float00;                                                    // 0x0000   (0x0004)  
	float                                              Float01;                                                    // 0x0004   (0x0004)  
	float                                              Float02;                                                    // 0x0008   (0x0004)  
	float                                              Float03;                                                    // 0x000C   (0x0004)  
	float                                              Float10;                                                    // 0x0010   (0x0004)  
	float                                              Float11;                                                    // 0x0014   (0x0004)  
	float                                              Float12;                                                    // 0x0018   (0x0004)  
	float                                              Float13;                                                    // 0x001C   (0x0004)  
	float                                              Float20;                                                    // 0x0020   (0x0004)  
	float                                              Float21;                                                    // 0x0024   (0x0004)  
	float                                              Float22;                                                    // 0x0028   (0x0004)  
	float                                              Float23;                                                    // 0x002C   (0x0004)  
	float                                              Float30;                                                    // 0x0030   (0x0004)  
	float                                              Float31;                                                    // 0x0034   (0x0004)  
	float                                              Float32;                                                    // 0x0038   (0x0004)  
	float                                              Float33;                                                    // 0x003C   (0x0004)  
	bool                                               bValid;                                                     // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0041   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigControlValue
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 pad: 0x0000
struct FRigControlValue
{ 
	FRigControlValueStorage                            FloatStorage;                                               // 0x0000   (0x0044)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0044   (0x000C)  MISSED
	FTransform                                         Storage;                                                    // 0x0050   (0x0030)  
};

/// Struct /Script/ControlRig.RigControl
/// Size: 0x02E8 (744 bytes) (0x000018 - 0x000300) align 16 pad: 0x0000
struct FRigControl : FRigElement
{ 
	ERigControlType                                    ControlType;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              DisplayName;                                                // 0x001C   (0x000C)  
	FName                                              ParentName;                                                 // 0x0028   (0x000C)  
	int32_t                                            ParentIndex;                                                // 0x0034   (0x0004)  
	FName                                              SpaceName;                                                  // 0x0038   (0x000C)  
	int32_t                                            SpaceIndex;                                                 // 0x0044   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x0050   (0x0030)  
	FRigControlValue                                   InitialValue;                                               // 0x0080   (0x0080)  
	FRigControlValue                                   Value;                                                      // 0x0100   (0x0080)  
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0180   (0x0001)  
	bool                                               bIsCurve;                                                   // 0x0181   (0x0001)  
	bool                                               bAnimatable;                                                // 0x0182   (0x0001)  
	bool                                               bLimitTranslation;                                          // 0x0183   (0x0001)  
	bool                                               bLimitRotation;                                             // 0x0184   (0x0001)  
	bool                                               bLimitScale;                                                // 0x0185   (0x0001)  
	bool                                               bDrawLimits;                                                // 0x0186   (0x0001)  
	unsigned char                                      UnknownData02_6[0x9];                                       // 0x0187   (0x0009)  MISSED
	FRigControlValue                                   MinimumValue;                                               // 0x0190   (0x0080)  
	FRigControlValue                                   MaximumValue;                                               // 0x0210   (0x0080)  
	bool                                               bGizmoEnabled;                                              // 0x0290   (0x0001)  
	bool                                               bGizmoVisible;                                              // 0x0291   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0292   (0x0002)  MISSED
	FName                                              GizmoName;                                                  // 0x0294   (0x000C)  
	FTransform                                         GizmoTransform;                                             // 0x02A0   (0x0030)  
	FLinearColor                                       GizmoColor;                                                 // 0x02D0   (0x0010)  
	TArray<int32_t>                                    Dependents;                                                 // 0x02E0   (0x0010)  
	bool                                               bIsTransientControl;                                        // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x02F1   (0x0007)  MISSED
	class UEnum*                                       ControlEnum;                                                // 0x02F8   (0x0008)  
};

/// Struct /Script/ControlRig.RigControlHierarchy
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 pad: 0x0000
struct FRigControlHierarchy
{ 
	unsigned char                                      UnknownData00_7[0x98];                                      // 0x0000   (0x0098)  MISSED
	TArray<FRigControl>                                Controls;                                                   // 0x0098   (0x0010)  
	SDK_UNDEFINED(80,1333) /* TMap<FName, int32_t> */  __um(NameToIndexMapping);                                   // 0x00A8   (0x0050)  
	TArray<FName>                                      Selection;                                                  // 0x00F8   (0x0010)  
};

/// Struct /Script/ControlRig.RigCurve
/// Size: 0x0008 (8 bytes) (0x000018 - 0x000020) align 8 pad: 0x0000
struct FRigCurve : FRigElement
{ 
	float                                              Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigCurveContainer
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 pad: 0x0000
struct FRigCurveContainer
{ 
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0000   (0x0020)  MISSED
	TArray<FRigCurve>                                  Curves;                                                     // 0x0020   (0x0010)  
	SDK_UNDEFINED(80,1334) /* TMap<FName, int32_t> */  __um(NameToIndexMapping);                                   // 0x0030   (0x0050)  
	TArray<FName>                                      Selection;                                                  // 0x0080   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigHierarchyContainer
/// Size: 0x0368 (872 bytes) (0x000000 - 0x000368) align 8 pad: 0x0000
struct FRigHierarchyContainer
{ 
	FRigBoneHierarchy                                  BoneHierarchy;                                              // 0x0000   (0x0098)  
	FRigSpaceHierarchy                                 SpaceHierarchy;                                             // 0x0098   (0x0090)  
	FRigControlHierarchy                               ControlHierarchy;                                           // 0x0128   (0x0108)  
	FRigCurveContainer                                 CurveContainer;                                             // 0x0230   (0x0098)  
	int32_t                                            Version;                                                    // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x9C];                                      // 0x02CC   (0x009C)  MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawInstruction
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 pad: 0x0000
struct FControlRigDrawInstruction
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	TEnumAsByte<EControlRigDrawSettings>               PrimitiveType;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	TArray<FVector>                                    Positions;                                                  // 0x0010   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0020   (0x0010)  
	float                                              Thickness;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0030)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x0070   (0x0030)  MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawContainer
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FControlRigDrawContainer
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FControlRigDrawInstruction>                 Instructions;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigElementKey
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FRigElementKey
{ 
	ERigElementType                                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x000C)  
};

/// Struct /Script/ControlRig.RigInfluenceEntry
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FRigInfluenceEntry
{ 
	FRigElementKey                                     Source;                                                     // 0x0000   (0x0010)  
	TArray<FRigElementKey>                             AffectedList;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigInfluenceMap
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FRigInfluenceMap
{ 
	FName                                              EventName;                                                  // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRigInfluenceEntry>                         Entries;                                                    // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,1335) /* TMap<FRigElementKey, int32_t> */ __um(KeyToIndex);                                   // 0x0020   (0x0050)  
};

/// Struct /Script/ControlRig.RigInfluenceMapPerEvent
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FRigInfluenceMapPerEvent
{ 
	TArray<FRigInfluenceMap>                           Maps;                                                       // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,1336) /* TMap<FName, int32_t> */  __um(EventToIndex);                                         // 0x0010   (0x0050)  
};

/// Class /Script/ControlRig.ControlRig
/// Size: 0x0630 (1584 bytes) (0x000030 - 0x000660) align 8 pad: 0x0000
class UControlRig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x1D];                                      // 0x0030   (0x001D)  MISSED
	ERigExecutionType                                  ExecutionType;                                              // 0x004D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x004E   (0x0002)  MISSED
	class URigVM*                                      VM;                                                         // 0x0050   (0x0008)  
	FRigHierarchyContainer                             Hierarchy;                                                  // 0x0058   (0x0368)  
	SDK_UNDEFINED(48,1337) /* TWeakObjectPtr<UControlRigGizmoLibrary*> */ __um(GizmoLibrary);                      // 0x03C0   (0x0030)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x03F0   (0x0010)  MISSED
	SDK_UNDEFINED(80,1338) /* TMap<FName, FCachedPropertyPath> */ __um(InputProperties);                           // 0x0400   (0x0050)  
	SDK_UNDEFINED(80,1339) /* TMap<FName, FCachedPropertyPath> */ __um(OutputProperties);                          // 0x0450   (0x0050)  
	FControlRigDrawContainer                           DrawContainer;                                              // 0x04A0   (0x0018)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x04B8   (0x0018)  MISSED
	class UAnimationDataSourceRegistry*                DataSourceRegistry;                                         // 0x04D0   (0x0008)  
	TArray<FName>                                      EventQueue;                                                 // 0x04D8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x78];                                      // 0x04E8   (0x0078)  MISSED
	FRigInfluenceMapPerEvent                           Influences;                                                 // 0x0560   (0x0060)  
	class UControlRig*                                 InteractionRig;                                             // 0x05C0   (0x0008)  
	class UClass*                                      InteractionRigClass;                                        // 0x05C8   (0x0008)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x05D0   (0x0010)  
	unsigned char                                      UnknownData05_7[0x80];                                      // 0x05E0   (0x0080)  MISSED
	// void SetInteractionRigClass(class UClass* InInteractionRigClass);                                                        // [0x1f7af70] Final|Native|Public|BlueprintCallable 
	// void SetInteractionRig(class UControlRig* InInteractionRig);                                                             // [0x1f7aee0] Final|Native|Public|BlueprintCallable 
	// class UClass* GetInteractionRigClass();                                                                                  // [0x1f79a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UControlRig* GetInteractionRig();                                                                                  // [0x1f79a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.AdditiveControlRig
/// Size: 0x0010 (16 bytes) (0x000660 - 0x000670) align 8 pad: 0x0000
class UAdditiveControlRig : public UControlRig
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0660   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigAnimInstance
/// Size: 0x0008 (8 bytes) (0x000378 - 0x000380) align 16 pad: 0x0000
class UControlRigAnimInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0378   (0x0008)  MISSED
};

/// Class /Script/ControlRig.ControlRigBlueprintGeneratedClass
/// Size: 0x0000 (0 bytes) (0x000338 - 0x000338) align 8 pad: 0x0000
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
};

/// Struct /Script/ControlRig.ControlRigComponentMappedElement
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 pad: 0x0000
struct FControlRigComponentMappedElement
{ 
	FComponentReference                                ComponentReference;                                         // 0x0000   (0x0030)  
	int32_t                                            TransformIndex;                                             // 0x0030   (0x0004)  
	FName                                              TransformName;                                              // 0x0034   (0x000C)  
	ERigElementType                                    ElementType;                                                // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	FName                                              ElementName;                                                // 0x0044   (0x000C)  
	EControlRigComponentMapDirection                   Direction;                                                  // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0051   (0x000F)  MISSED
	FTransform                                         Offset;                                                     // 0x0060   (0x0030)  
	float                                              Weight;                                                     // 0x0090   (0x0004)  
	EControlRigComponentSpace                          Space;                                                      // 0x0094   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x0098   (0x0008)  
	int32_t                                            ElementIndex;                                               // 0x00A0   (0x0004)  
	int32_t                                            SubIndex;                                                   // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/ControlRig.ControlRigComponent
/// Size: 0x0100 (256 bytes) (0x0004E0 - 0x0005E0) align 16 pad: 0x0000
class UControlRigComponent : public UPrimitiveComponent
{ 
public:
	class UClass*                                      ControlRigClass;                                            // 0x04E0   (0x0008)  
	SDK_UNDEFINED(16,1340) /* FMulticastInlineDelegate */ __um(OnPostInitializeDelegate);                          // 0x04E8   (0x0010)  
	SDK_UNDEFINED(16,1341) /* FMulticastInlineDelegate */ __um(OnPreSetupDelegate);                                // 0x04F8   (0x0010)  
	SDK_UNDEFINED(16,1342) /* FMulticastInlineDelegate */ __um(OnPostSetupDelegate);                               // 0x0508   (0x0010)  
	SDK_UNDEFINED(16,1343) /* FMulticastInlineDelegate */ __um(OnPreUpdateDelegate);                               // 0x0518   (0x0010)  
	SDK_UNDEFINED(16,1344) /* FMulticastInlineDelegate */ __um(OnPostUpdateDelegate);                              // 0x0528   (0x0010)  
	TArray<FControlRigComponentMappedElement>          MappedElements;                                             // 0x0538   (0x0010)  
	bool                                               bResetTransformBeforeTick;                                  // 0x0548   (0x0001)  
	bool                                               bResetInitialsBeforeSetup;                                  // 0x0549   (0x0001)  
	bool                                               bUpdateRigOnTick;                                           // 0x054A   (0x0001)  
	bool                                               bUpdateInEditor;                                            // 0x054B   (0x0001)  
	bool                                               bDrawBones;                                                 // 0x054C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x054D   (0x0003)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x0550   (0x0008)  
	unsigned char                                      UnknownData01_7[0x88];                                      // 0x0558   (0x0088)  MISSED
	// void Update(float DeltaTime);                                                                                            // [0x1f7b0f0] Final|Native|Public|BlueprintCallable 
	// void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0x1f7b000] Final|Native|Public|BlueprintCallable 
	// void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);            // [0x1f7ad60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren); // [0x1f7aba0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetControlVector2D(FName ControlName, FVector2D Value);                                                             // [0x1f7aac0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);                          // [0x1f7a940] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);                                 // [0x1f7a800] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);                              // [0x1f7a6c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);                              // [0x1f7a580] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);                   // [0x1f7a400] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetControlInt(FName ControlName, int32_t Value);                                                                    // [0x1f7a320] Final|Native|Public|BlueprintCallable 
	// void SetControlFloat(FName ControlName, float Value);                                                                    // [0x1f7a230] Final|Native|Public|BlueprintCallable 
	// void SetControlBool(FName ControlName, bool Value);                                                                      // [0x1f7a140] Final|Native|Public|BlueprintCallable 
	// void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // [0x1f79f30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);                                      // [0x1f79ea0] Final|Native|Public|BlueprintCallable 
	// void OnPreUpdate(class UControlRigComponent* Component);                                                                 // [0x1f79e10] Native|Event|Public|BlueprintEvent 
	// void OnPreSetup(class UControlRigComponent* Component);                                                                  // [0x1f79d80] Native|Event|Public|BlueprintEvent 
	// void OnPostUpdate(class UControlRigComponent* Component);                                                                // [0x1f79cf0] Native|Event|Public|BlueprintEvent 
	// void OnPostSetup(class UControlRigComponent* Component);                                                                 // [0x1f79c60] Native|Event|Public|BlueprintEvent 
	// void OnPostInitialize(class UControlRigComponent* Component);                                                            // [0x1f79bd0] Native|Event|Public|BlueprintEvent 
	// void Initialize();                                                                                                       // [0x1f79bb0] Final|Native|Public|BlueprintCallable 
	// FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                          // [0x1f79a80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                   // [0x1f79910] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                     // [0x1f797e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// TArray<FName> GetElementNames(ERigElementType ElementType);                                                              // [0x1f79700] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// FVector2D GetControlVector2D(FName ControlName);                                                                         // [0x1f79640] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);                                      // [0x1f79510] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);                                             // [0x1f79400] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);                                          // [0x1f792f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// class UControlRig* GetControlRig();                                                                                      // [0x1f792c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);                                          // [0x1f791b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);                                         // [0x1f79080] Final|Native|Public|HasDefaults|BlueprintCallable 
	// int32_t GetControlInt(FName ControlName);                                                                                // [0x1f78fd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// float GetControlFloat(FName ControlName);                                                                                // [0x1f78f20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// bool GetControlBool(FName ControlName);                                                                                  // [0x1f78e70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                            // [0x1f78d40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// float GetAbsoluteTime();                                                                                                 // [0x1f78d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool DoesElementExist(FName Name, ERigElementType ElementType);                                                          // [0x1f78c10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// void ClearMappedElements();                                                                                              // [0x1f78bf0] Final|Native|Public|BlueprintCallable 
	// void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves); // [0x1f78a40] Final|Native|Public|BlueprintCallable 
	// void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0x1f78950] Final|Native|Public|BlueprintCallable 
	// void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);                                        // [0x1f78860] Final|Native|Public|BlueprintCallable 
	// void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);                                 // [0x1f787d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigControlActor
/// Size: 0x0098 (152 bytes) (0x0002A8 - 0x000340) align 8 pad: 0x0000
class AControlRigControlActor : public AActor
{ 
public:
	class AActor*                                      ActorToTrack;                                               // 0x02A8   (0x0008)  
	class UClass*                                      ControlRigClass;                                            // 0x02B0   (0x0008)  
	bool                                               bRefreshOnTick;                                             // 0x02B8   (0x0001)  
	bool                                               bIsSelectable;                                              // 0x02B9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x02BA   (0x0006)  MISSED
	class UMaterialInterface*                          MaterialOverride;                                           // 0x02C0   (0x0008)  
	FString                                            ColorParameter;                                             // 0x02C8   (0x0010)  
	bool                                               bCastShadows;                                               // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02D9   (0x0007)  MISSED
	class USceneComponent*                             ActorRootComponent;                                         // 0x02E0   (0x0008)  
	class UControlRig*                                 ControlRig;                                                 // 0x02E8   (0x0008)  
	TArray<FName>                                      ControlNames;                                               // 0x02F0   (0x0010)  
	TArray<FTransform>                                 GizmoTransforms;                                            // 0x0300   (0x0010)  
	TArray<class UStaticMeshComponent*>                Components;                                                 // 0x0310   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            Materials;                                                  // 0x0320   (0x0010)  
	FName                                              ColorParameterName;                                         // 0x0330   (0x000C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x033C   (0x0004)  MISSED
	// void Refresh();                                                                                                          // [0x1f806e0] Final|Native|Public|BlueprintCallable 
	// void Clear();                                                                                                            // [0x1f805d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigGizmoActor
/// Size: 0x0030 (48 bytes) (0x0002A8 - 0x0002D8) align 8 pad: 0x0000
class AControlRigGizmoActor : public AActor
{ 
public:
	class USceneComponent*                             ActorRootComponent;                                         // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x02B0   (0x0008)  
	uint32_t                                           ControlRigIndex;                                            // 0x02B8   (0x0004)  
	FName                                              ControlName;                                                // 0x02BC   (0x000C)  
	FName                                              ColorParameterName;                                         // 0x02C8   (0x000C)  
	bool                                               bEnabled : 1;                                               // 0x02D4:0 (0x0001)  
	bool                                               bSelected : 1;                                              // 0x02D4:1 (0x0001)  
	bool                                               bSelectable : 1;                                            // 0x02D4:2 (0x0001)  
	bool                                               bHovered : 1;                                               // 0x02D4:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x02D5   (0x0003)  MISSED
	// void SetSelected(bool bInSelected);                                                                                      // [0x1f80990] Native|Public|BlueprintCallable 
	// void SetSelectable(bool bInSelectable);                                                                                  // [0x1f80900] Native|Public|BlueprintCallable 
	// void SetHovered(bool bInHovered);                                                                                        // [0x1f80870] Native|Public|BlueprintCallable 
	// void SetGlobalTransform(FTransform& InTransform);                                                                        // [0x1f80790] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetEnabled(bool bInEnabled);                                                                                        // [0x1f80700] Native|Public|BlueprintCallable 
	// void OnTransformChanged(FTransform& NewTransform);                                                                       // [0x25a7960] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// void OnSelectionChanged(bool bIsSelected);                                                                               // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnManipulatingChanged(bool bIsManipulating);                                                                        // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnHoveredChanged(bool bIsSelected);                                                                                 // [0x25a7960] Event|Public|BlueprintEvent 
	// void OnEnabledChanged(bool bIsEnabled);                                                                                  // [0x25a7960] Event|Public|BlueprintEvent 
	// bool IsSelectedInEditor();                                                                                               // [0x1f806b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsHovered();                                                                                                        // [0x1f80680] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsEnabled();                                                                                                        // [0x1f80650] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FTransform GetGlobalTransform();                                                                                         // [0x1f805f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ControlRig.ControlRigGizmoDefinition
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 pad: 0x0000
struct FControlRigGizmoDefinition
{ 
	FName                                              GizmoName;                                                  // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(48,1345) /* TWeakObjectPtr<UStaticMesh*> */ __um(StaticMesh);                                    // 0x0010   (0x0030)  
	FTransform                                         Transform;                                                  // 0x0040   (0x0030)  
};

/// Class /Script/ControlRig.ControlRigGizmoLibrary
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x000100) align 16 pad: 0x0000
class UControlRigGizmoLibrary : public UObject
{ 
public:
	FControlRigGizmoDefinition                         DefaultGizmo;                                               // 0x0030   (0x0070)  
	SDK_UNDEFINED(48,1346) /* TWeakObjectPtr<UMaterial*> */ __um(DefaultMaterial);                                 // 0x00A0   (0x0030)  
	FName                                              MaterialColorParameter;                                     // 0x00D0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FControlRigGizmoDefinition>                 Gizmos;                                                     // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00F0   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigLayerInstance
/// Size: 0x0008 (8 bytes) (0x000378 - 0x000380) align 16 pad: 0x0000
class UControlRigLayerInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0378   (0x0008)  MISSED
};

/// Class /Script/ControlRig.ControlRigValidationPass
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UControlRigValidationPass : public UObject
{ 
public:
};

/// Struct /Script/ControlRig.CachedRigElement
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FCachedRigElement
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x0010)  
	uint16_t                                           Index;                                                      // 0x0010   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0012   (0x0002)  MISSED
	int32_t                                            ContainerVersion;                                           // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigPoseElement
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 pad: 0x0000
struct FRigPoseElement
{ 
	FCachedRigElement                                  Index;                                                      // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         GlobalTransform;                                            // 0x0020   (0x0030)  
	FTransform                                         LocalTransform;                                             // 0x0050   (0x0030)  
	float                                              CurveValue;                                                 // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigPose
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FRigPose
{ 
	TArray<FRigPoseElement>                            Elements;                                                   // 0x0000   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigNumericalValidationPass
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 8 pad: 0x0000
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{ 
public:
	bool                                               bCheckControls;                                             // 0x0030   (0x0001)  
	bool                                               bCheckBones;                                                // 0x0031   (0x0001)  
	bool                                               bCheckCurves;                                               // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0033   (0x0001)  MISSED
	float                                              TranslationPrecision;                                       // 0x0034   (0x0004)  
	float                                              RotationPrecision;                                          // 0x0038   (0x0004)  
	float                                              ScalePrecision;                                             // 0x003C   (0x0004)  
	float                                              CurvePrecision;                                             // 0x0040   (0x0004)  
	FName                                              EventNameA;                                                 // 0x0044   (0x000C)  
	FName                                              EventNameB;                                                 // 0x0050   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FRigPose                                           Pose;                                                       // 0x0060   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigObjectHolder
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UControlRigObjectHolder : public UObject
{ 
public:
	TArray<class UObject*>                             Objects;                                                    // 0x0030   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigSequence
/// Size: 0x0068 (104 bytes) (0x000220 - 0x000288) align 8 pad: 0x0000
class UControlRigSequence : public ULevelSequence
{ 
public:
	SDK_UNDEFINED(48,1347) /* TWeakObjectPtr<UAnimSequence*> */ __um(LastExportedToAnimationSequence);             // 0x0220   (0x0030)  
	SDK_UNDEFINED(48,1348) /* TWeakObjectPtr<USkeletalMesh*> */ __um(LastExportedUsingSkeletalMesh);               // 0x0250   (0x0030)  
	float                                              LastExportedFrameRate;                                      // 0x0280   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0284   (0x0004)  MISSED
};

/// Class /Script/ControlRig.ControlRigSequencerAnimInstance
/// Size: 0x0010 (16 bytes) (0x000380 - 0x000390) align 16 pad: 0x0000
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0380   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigSettings
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UControlRigSettings : public UDeveloperSettings
{ 
public:
};

/// Class /Script/ControlRig.ControlRigValidator
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 8 pad: 0x0000
class UControlRigValidator : public UObject
{ 
public:
	TArray<class UControlRigValidationPass*>           Passes;                                                     // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0040   (0x0030)  MISSED
};

/// Class /Script/ControlRig.FKControlRig
/// Size: 0x0018 (24 bytes) (0x000660 - 0x000678) align 8 pad: 0x0000
class UFKControlRig : public UControlRig
{ 
public:
	TArray<bool>                                       IsControlActive;                                            // 0x0660   (0x0010)  
	EControlRigFKRigExecuteMode                        ApplyMode;                                                  // 0x0670   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0671   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.EnumParameterNameAndCurve
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 pad: 0x0000
struct FEnumParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMovieSceneByteChannel                             ParameterCurve;                                             // 0x0010   (0x0098)  
};

/// Struct /Script/ControlRig.IntegerParameterNameAndCurve
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 pad: 0x0000
struct FIntegerParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMovieSceneIntegerChannel                          ParameterCurve;                                             // 0x0010   (0x0090)  
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterSection
/// Size: 0x01A8 (424 bytes) (0x000150 - 0x0002F8) align 8 pad: 0x0000
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{ 
public:
	class UControlRig*                                 ControlRig;                                                 // 0x0150   (0x0008)  
	TArray<bool>                                       ControlsMask;                                               // 0x0158   (0x0010)  
	FMovieSceneTransformMask                           TransformMask;                                              // 0x0168   (0x0004)  
	bool                                               bAdditive;                                                  // 0x016C   (0x0001)  
	bool                                               bApplyBoneFilter;                                           // 0x016D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x016E   (0x0002)  MISSED
	FInputBlendPose                                    BoneFilter;                                                 // 0x0170   (0x0010)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0180   (0x00A0)  
	SDK_UNDEFINED(80,1349) /* TMap<FName, FChannelMapInfo> */ __um(ControlChannelMap);                             // 0x0220   (0x0050)  
	TArray<FEnumParameterNameAndCurve>                 EnumParameterNamesAndCurves;                                // 0x0270   (0x0010)  
	TArray<FIntegerParameterNameAndCurve>              IntegerParameterNamesAndCurves;                             // 0x0280   (0x0010)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x0290   (0x0068)  MISSED
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
/// Size: 0x0040 (64 bytes) (0x000080 - 0x0000C0) align 8 pad: 0x0000
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0080   (0x0010)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x0090   (0x0008)  
	class UMovieSceneSection*                          SectionToKey;                                               // 0x0098   (0x0008)  
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x00A0   (0x0010)  
	FName                                              TrackName;                                                  // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.ConstraintNodeData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 pad: 0x0000
struct FConstraintNodeData
{ 
	FTransform                                         RelativeParent;                                             // 0x0000   (0x0030)  
	FConstraintOffset                                  ConstraintOffset;                                           // 0x0030   (0x0060)  
	FName                                              LinkedNode;                                                 // 0x0090   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	TArray<FTransformConstraint>                       Constraints;                                                // 0x00A0   (0x0010)  
};

/// Struct /Script/ControlRig.AnimationHierarchy
/// Size: 0x0010 (16 bytes) (0x000078 - 0x000088) align 8 pad: 0x0000
struct FAnimationHierarchy : FNodeHierarchyWithUserData
{ 
	TArray<FConstraintNodeData>                        UserData;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigIOSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 pad: 0x0000
struct FControlRigIOSettings
{ 
	bool                                               bUpdatePose;                                                // 0x0000   (0x0001)  
	bool                                               bUpdateCurves;                                              // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.AnimNode_ControlRigBase
/// Size: 0x0118 (280 bytes) (0x000058 - 0x000170) align 8 pad: 0x0000
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty
{ 
	FPoseLink                                          Source;                                                     // 0x0058   (0x0010)  
	SDK_UNDEFINED(80,1350) /* TMap<FName, uint16_t> */ __um(ControlRigBoneMapping);                                // 0x0068   (0x0050)  
	SDK_UNDEFINED(80,1351) /* TMap<FName, uint16_t> */ __um(ControlRigCurveMapping);                               // 0x00B8   (0x0050)  
	SDK_UNDEFINED(80,1352) /* TMap<FName, uint16_t> */ __um(InputToCurveMappingUIDs);                              // 0x0108   (0x0050)  
	SDK_UNDEFINED(8,1353) /* TWeakObjectPtr<UNodeMappingContainer*> */ __um(NodeMappingContainer);                 // 0x0158   (0x0008)  
	FControlRigIOSettings                              InputSettings;                                              // 0x0160   (0x0002)  
	FControlRigIOSettings                              OutputSettings;                                             // 0x0162   (0x0002)  
	bool                                               bExecute;                                                   // 0x0164   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0165   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig
/// Size: 0x0200 (512 bytes) (0x000170 - 0x000370) align 8 pad: 0x0000
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase
{ 
	class UClass*                                      ControlRigClass;                                            // 0x0170   (0x0008)  
	class UControlRig*                                 ControlRig;                                                 // 0x0178   (0x0008)  
	float                                              ALPHA;                                                      // 0x0180   (0x0004)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0184   (0x0001)  
	bool                                               bAlphaBoolEnabled : 1;                                      // 0x0185:0 (0x0001)  
	bool                                               bSetRefPoseFromSkeleton : 1;                                // 0x0185:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0186   (0x0002)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0188   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0190   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x01D8   (0x000C)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x01E4   (0x0030)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0214   (0x0004)  MISSED
	SDK_UNDEFINED(80,1354) /* TMap<FName, FName> */    __um(InputMapping);                                         // 0x0218   (0x0050)  
	SDK_UNDEFINED(80,1355) /* TMap<FName, FName> */    __um(OutputMapping);                                        // 0x0268   (0x0050)  
	unsigned char                                      UnknownData02_6[0xB0];                                      // 0x02B8   (0x00B0)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0368   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x036C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig_ExternalSource
/// Size: 0x0008 (8 bytes) (0x000170 - 0x000178) align 8 pad: 0x0000
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase
{ 
	SDK_UNDEFINED(8,1356) /* TWeakObjectPtr<UControlRig*> */ __um(ControlRig);                                     // 0x0170   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigAnimInstanceProxy
/// Size: 0x00A0 (160 bytes) (0x000810 - 0x0008B0) align 16 pad: 0x0000
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0810   (0x00A0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigComponentMappedCurve
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FControlRigComponentMappedCurve
{ 
	FName                                              Source;                                                     // 0x0000   (0x000C)  
	FName                                              Target;                                                     // 0x000C   (0x000C)  
};

/// Struct /Script/ControlRig.ControlRigComponentMappedBone
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FControlRigComponentMappedBone
{ 
	FName                                              Source;                                                     // 0x0000   (0x000C)  
	FName                                              Target;                                                     // 0x000C   (0x000C)  
};

/// Struct /Script/ControlRig.ControlRigComponentMappedComponent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FControlRigComponentMappedComponent
{ 
	class USceneComponent*                             Component;                                                  // 0x0000   (0x0008)  
	FName                                              ElementName;                                                // 0x0008   (0x000C)  
	ERigElementType                                    ElementType;                                                // 0x0014   (0x0001)  
	EControlRigComponentMapDirection                   Direction;                                                  // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/ControlRig.ControlRigExecuteContext
/// Size: 0x0008 (8 bytes) (0x000060 - 0x000068) align 8 pad: 0x0000
struct FControlRigExecuteContext : FRigVMExecuteContext
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawInterface
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FControlRigDrawInterface : FControlRigDrawContainer
{ 
};

/// Struct /Script/ControlRig.GizmoActorCreationParam
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align 16 pad: 0x0000
struct FGizmoActorCreationParam
{ 
	unsigned char                                      UnknownData00_2[0x130];                                     // 0x0000   (0x0130)  MISSED
};

/// Struct /Script/ControlRig.ControlRigLayerInstanceProxy
/// Size: 0x00A0 (160 bytes) (0x000810 - 0x0008B0) align 16 pad: 0x0000
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0810   (0x00A0)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRigInputPose
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000030) align 8 pad: 0x0000
struct FAnimNode_ControlRigInputPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.CRFourPointBezier
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 pad: 0x0000
struct FCRFourPointBezier
{ 
	FVector                                            A;                                                          // 0x0000   (0x000C)  
	FVector                                            B;                                                          // 0x000C   (0x000C)  
	FVector                                            C;                                                          // 0x0018   (0x000C)  
	FVector                                            D;                                                          // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReference
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FControlRigSequenceObjectReference
{ 
	class UClass*                                      ControlRigClass;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferences
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FControlRigSequenceObjectReferences
{ 
	TArray<FControlRigSequenceObjectReference>         Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FControlRigSequenceObjectReferenceMap
{ 
	TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)  
	TArray<FControlRigSequenceObjectReferences>        References;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSequencerAnimInstanceProxy
/// Size: 0x02D0 (720 bytes) (0x000AD0 - 0x000DA0) align 16 pad: 0x0000
struct FControlRigSequencerAnimInstanceProxy : FAnimSequencerInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x2D0];                                     // 0x0AD0   (0x02D0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigSettingsPerPinBool
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FControlRigSettingsPerPinBool
{ 
	SDK_UNDEFINED(80,1357) /* TMap<FString, bool> */   __um(Values);                                               // 0x0000   (0x0050)  
};

/// Struct /Script/ControlRig.ControlRigValidationContext
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FControlRigValidationContext
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/ControlRig.CRSimContainer
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FCRSimContainer
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              TimeStep;                                                   // 0x0008   (0x0004)  
	float                                              AccumulatedTime;                                            // 0x000C   (0x0004)  
	float                                              TimeLeftForStep;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.CRSimLinearSpring
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FCRSimLinearSpring
{ 
	int32_t                                            SubjectA;                                                   // 0x0000   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0004   (0x0004)  
	float                                              Coefficient;                                                // 0x0008   (0x0004)  
	float                                              Equilibrium;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.CRSimPoint
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 pad: 0x0000
struct FCRSimPoint
{ 
	float                                              Mass;                                                       // 0x0000   (0x0004)  
	float                                              Size;                                                       // 0x0004   (0x0004)  
	float                                              LinearDamping;                                              // 0x0008   (0x0004)  
	float                                              InheritMotion;                                              // 0x000C   (0x0004)  
	FVector                                            Position;                                                   // 0x0010   (0x000C)  
	FVector                                            LinearVelocity;                                             // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.CRSimPointConstraint
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FCRSimPointConstraint
{ 
	ECRSimConstraintType                               Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            SubjectA;                                                   // 0x0004   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0008   (0x0004)  
	FVector                                            DataA;                                                      // 0x000C   (0x000C)  
	FVector                                            DataB;                                                      // 0x0018   (0x000C)  
};

/// Struct /Script/ControlRig.CRSimPointForce
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FCRSimPointForce
{ 
	ECRSimPointForceType                               ForceType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Vector;                                                     // 0x0004   (0x000C)  
	float                                              Coefficient;                                                // 0x0010   (0x0004)  
	bool                                               bNormalize;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.CRSimSoftCollision
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 pad: 0x0000
struct FCRSimSoftCollision
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	ECRSimSoftCollisionType                            ShapeType;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MinimumDistance;                                            // 0x0034   (0x0004)  
	float                                              MaximumDistance;                                            // 0x0038   (0x0004)  
	EControlRigAnimEasingType                          FalloffType;                                                // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              Coefficient;                                                // 0x0040   (0x0004)  
	bool                                               bInverted;                                                  // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_7[0xB];                                       // 0x0045   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.CRSimPointContainer
/// Size: 0x0060 (96 bytes) (0x000018 - 0x000078) align 8 pad: 0x0000
struct FCRSimPointContainer : FCRSimContainer
{ 
	TArray<FCRSimPoint>                                Points;                                                     // 0x0018   (0x0010)  
	TArray<FCRSimLinearSpring>                         Springs;                                                    // 0x0028   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0038   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0048   (0x0010)  
	TArray<FCRSimPointConstraint>                      Constraints;                                                // 0x0058   (0x0010)  
	TArray<FCRSimPoint>                                PreviousStep;                                               // 0x0068   (0x0010)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigInstanceData
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D8) align 8 pad: 0x0000
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
{ 
	bool                                               bAdditive;                                                  // 0x0008   (0x0001)  
	bool                                               bApplyBoneFilter;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FInputBlendPose                                    BoneFilter;                                                 // 0x0010   (0x0010)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0020   (0x00A0)  
	FMovieSceneEvaluationOperand                       Operand;                                                    // 0x00C0   (0x0014)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.ChannelMapInfo
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FChannelMapInfo
{ 
	int32_t                                            ControlIndex;                                               // 0x0000   (0x0004)  
	int32_t                                            TotalChannelIndex;                                          // 0x0004   (0x0004)  
	int32_t                                            ChannelIndex;                                               // 0x0008   (0x0004)  
	int32_t                                            ParentControlIndex;                                         // 0x000C   (0x0004)  
	FName                                              ChannelTypeName;                                            // 0x0010   (0x000C)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigParameterTemplate
/// Size: 0x0020 (32 bytes) (0x000080 - 0x0000A0) align 8 pad: 0x0000
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
{ 
	TArray<FEnumParameterNameAndCurve>                 Enums;                                                      // 0x0080   (0x0010)  
	TArray<FIntegerParameterNameAndCurve>              Integers;                                                   // 0x0090   (0x0010)  
};

/// Struct /Script/ControlRig.RigHierarchyRef
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FRigHierarchyRef
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/ControlRig.RigMirrorSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FRigMirrorSettings
{ 
	TEnumAsByte<EAxis>                                 MirrorAxis;                                                 // 0x0000   (0x0001)  
	TEnumAsByte<EAxis>                                 AxisToFlip;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            OldName;                                                    // 0x0008   (0x0010)  
	FString                                            NewName;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContent
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FRigHierarchyCopyPasteContent
{ 
	TArray<ERigElementType>                            Types;                                                      // 0x0000   (0x0010)  
	TArray<FString>                                    Contents;                                                   // 0x0010   (0x0010)  
	TArray<FTransform>                                 LocalTransforms;                                            // 0x0020   (0x0010)  
	TArray<FTransform>                                 GlobalTransforms;                                           // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigEventContext
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FRigEventContext
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/ControlRig.RigElementKeyCollection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FRigElementKeyCollection
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.RigControlModifiedContext
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FRigControlModifiedContext
{ 
	unsigned char                                      UnknownData00_2[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/ControlRig.RigInfluenceEntryModifier
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FRigInfluenceEntryModifier
{ 
	TArray<FRigElementKey>                             AffectedList;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit : FRigVMStruct
{ 
};

/// Struct /Script/ControlRig.RigUnitMutable
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 8 pad: 0x0000
struct FRigUnitMutable : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0068)  
};

/// Struct /Script/ControlRig.RigUnit_SimBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_SimBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorRange
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000048) align 8 pad: 0x0000
struct FRigUnit_AccumulateVectorRange : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Minimum;                                                    // 0x0014   (0x000C)  
	FVector                                            Maximum;                                                    // 0x0020   (0x000C)  
	FVector                                            AccumulatedMinimum;                                         // 0x002C   (0x000C)  
	FVector                                            AccumulatedMaximum;                                         // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatRange
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_AccumulateFloatRange : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              AccumulatedMinimum;                                         // 0x0014   (0x0004)  
	float                                              AccumulatedMaximum;                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformLerp
/// Size: 0x00D8 (216 bytes) (0x000008 - 0x0000E0) align 16 pad: 0x0000
struct FRigUnit_AccumulateTransformLerp : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         TargetValue;                                                // 0x0010   (0x0030)  
	FTransform                                         InitialValue;                                               // 0x0040   (0x0030)  
	float                                              Blend;                                                      // 0x0070   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0074   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x0075   (0x000B)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0030)  
	FTransform                                         AccumulatedValue;                                           // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatLerp
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000060) align 16 pad: 0x0000
struct FRigUnit_AccumulateQuatLerp : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              TargetValue;                                                // 0x0010   (0x0010)  
	FQuat                                              InitialValue;                                               // 0x0020   (0x0010)  
	float                                              Blend;                                                      // 0x0030   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x0035   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0010)  
	FQuat                                              AccumulatedValue;                                           // 0x0050   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorLerp
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 8 pad: 0x0000
struct FRigUnit_AccumulateVectorLerp : FRigUnit_SimBase
{ 
	FVector                                            TargetValue;                                                // 0x0008   (0x000C)  
	FVector                                            InitialValue;                                               // 0x0014   (0x000C)  
	float                                              Blend;                                                      // 0x0020   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x000C)  
	FVector                                            AccumulatedValue;                                           // 0x0034   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatLerp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_AccumulateFloatLerp : FRigUnit_SimBase
{ 
	float                                              TargetValue;                                                // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	float                                              Blend;                                                      // 0x0010   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformMul
/// Size: 0x00D8 (216 bytes) (0x000008 - 0x0000E0) align 16 pad: 0x0000
struct FRigUnit_AccumulateTransformMul : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Multiplier;                                                 // 0x0010   (0x0030)  
	FTransform                                         InitialValue;                                               // 0x0040   (0x0030)  
	bool                                               bFlipOrder;                                                 // 0x0070   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0072   (0x000E)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0030)  
	FTransform                                         AccumulatedValue;                                           // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatMul
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000060) align 16 pad: 0x0000
struct FRigUnit_AccumulateQuatMul : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Multiplier;                                                 // 0x0010   (0x0010)  
	FQuat                                              InitialValue;                                               // 0x0020   (0x0010)  
	bool                                               bFlipOrder;                                                 // 0x0030   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0032   (0x000E)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0010)  
	FQuat                                              AccumulatedValue;                                           // 0x0050   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorMul
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 8 pad: 0x0000
struct FRigUnit_AccumulateVectorMul : FRigUnit_SimBase
{ 
	FVector                                            Multiplier;                                                 // 0x0008   (0x000C)  
	FVector                                            InitialValue;                                               // 0x0014   (0x000C)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
	FVector                                            AccumulatedValue;                                           // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatMul
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_AccumulateFloatMul : FRigUnit_SimBase
{ 
	float                                              Multiplier;                                                 // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorAdd
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 8 pad: 0x0000
struct FRigUnit_AccumulateVectorAdd : FRigUnit_SimBase
{ 
	FVector                                            Increment;                                                  // 0x0008   (0x000C)  
	FVector                                            InitialValue;                                               // 0x0014   (0x000C)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
	FVector                                            AccumulatedValue;                                           // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatAdd
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_AccumulateFloatAdd : FRigUnit_SimBase
{ 
	float                                              Increment;                                                  // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AddBoneTransform
/// Size: 0x0060 (96 bytes) (0x000070 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_AddBoneTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	bool                                               bPostMultiply;                                              // 0x00B4   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00B6   (0x0002)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00B8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBaseMutable
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_AimItem_Target
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 pad: 0x0000
struct FRigUnit_AimItem_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	FVector                                            Axis;                                                       // 0x0004   (0x000C)  
	FVector                                            Target;                                                     // 0x0010   (0x000C)  
	EControlRigVectorKind                              Kind;                                                       // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FRigElementKey                                     Space;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AimBone_DebugSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_AimBone_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AimItem
/// Size: 0x0110 (272 bytes) (0x000070 - 0x000180) align 16 pad: 0x0000
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0070   (0x0010)  
	FRigUnit_AimItem_Target                            Primary;                                                    // 0x0080   (0x0030)  
	FRigUnit_AimItem_Target                            Secondary;                                                  // 0x00B0   (0x0030)  
	float                                              Weight;                                                     // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00E4   (0x000C)  MISSED
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00F0   (0x0040)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0130   (0x0018)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0148   (0x0018)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0160   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0178   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimBone_Target
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FRigUnit_AimBone_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	FVector                                            Axis;                                                       // 0x0004   (0x000C)  
	FVector                                            Target;                                                     // 0x0010   (0x000C)  
	EControlRigVectorKind                              Kind;                                                       // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FName                                              Space;                                                      // 0x0020   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_AimBone
/// Size: 0x0100 (256 bytes) (0x000070 - 0x000170) align 16 pad: 0x0000
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              Bone;                                                       // 0x0070   (0x000C)  
	FRigUnit_AimBone_Target                            Primary;                                                    // 0x007C   (0x002C)  
	FRigUnit_AimBone_Target                            Secondary;                                                  // 0x00A8   (0x002C)  
	float                                              Weight;                                                     // 0x00D4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00E0   (0x0040)  
	FCachedRigElement                                  CachedBoneIndex;                                            // 0x0120   (0x0018)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0138   (0x0018)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0150   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_HighlevelBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AimBoneMath
/// Size: 0x0148 (328 bytes) (0x000008 - 0x000150) align 16 pad: 0x0000
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         InputTransform;                                             // 0x0010   (0x0030)  
	FRigUnit_AimItem_Target                            Primary;                                                    // 0x0040   (0x0030)  
	FRigUnit_AimItem_Target                            Secondary;                                                  // 0x0070   (0x0030)  
	float                                              Weight;                                                     // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00A4   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x00B0   (0x0030)  
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00E0   (0x0040)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0120   (0x0018)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0138   (0x0018)  
};

/// Struct /Script/ControlRig.AimTarget
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 pad: 0x0000
struct FAimTarget
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FVector                                            AlignVector;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorkData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_AimConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint
/// Size: 0x0058 (88 bytes) (0x000070 - 0x0000C8) align 8 pad: 0x0000
struct FRigUnit_AimConstraint : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0070   (0x000C)  
	EAimMode                                           AimMode;                                                    // 0x007C   (0x0001)  
	EAimMode                                           UpMode;                                                     // 0x007D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x007E   (0x0002)  MISSED
	FVector                                            AimVector;                                                  // 0x0080   (0x000C)  
	FVector                                            UpVector;                                                   // 0x008C   (0x000C)  
	TArray<FAimTarget>                                 AimTargets;                                                 // 0x0098   (0x0010)  
	TArray<FAimTarget>                                 UpTargets;                                                  // 0x00A8   (0x0010)  
	FRigUnit_AimConstraint_WorkData                    WorkData;                                                   // 0x00B8   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterpVector
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000088) align 8 pad: 0x0000
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Scale;                                                      // 0x0014   (0x0004)  
	float                                              Bias;                                                       // 0x0018   (0x0004)  
	bool                                               bMapRange;                                                  // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x0020   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0028   (0x0008)  
	bool                                               bClampResult;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x0034   (0x0004)  
	float                                              ClampMax;                                                   // 0x0038   (0x0004)  
	bool                                               bInterpResult;                                              // 0x003C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x0040   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x0044   (0x0004)  
	FVector                                            Result;                                                     // 0x0048   (0x000C)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0054   (0x0030)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterp
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000078) align 8 pad: 0x0000
struct FRigUnit_AlphaInterp : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Scale;                                                      // 0x000C   (0x0004)  
	float                                              Bias;                                                       // 0x0010   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x0018   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0020   (0x0008)  
	bool                                               bClampResult;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x002C   (0x0004)  
	float                                              ClampMax;                                                   // 0x0030   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x0038   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x003C   (0x0004)  
	float                                              Result;                                                     // 0x0040   (0x0004)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0044   (0x0030)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_AnimBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AnimEasing
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_AnimEasing : FRigUnit_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	EControlRigAnimEasingType                          Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SourceMinimum;                                              // 0x0010   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0014   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0018   (0x0004)  
	float                                              TargetMaximum;                                              // 0x001C   (0x0004)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimEasingType
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_AnimEasingType : FRigUnit_AnimBase
{ 
	EControlRigAnimEasingType                          Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimEvalRichCurve
/// Size: 0x00A8 (168 bytes) (0x000008 - 0x0000B0) align 8 pad: 0x0000
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0010   (0x0088)  
	float                                              SourceMinimum;                                              // 0x0098   (0x0004)  
	float                                              SourceMaximum;                                              // 0x009C   (0x0004)  
	float                                              TargetMinimum;                                              // 0x00A0   (0x0004)  
	float                                              TargetMaximum;                                              // 0x00A4   (0x0004)  
	float                                              Result;                                                     // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimRichCurve
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000090) align 8 pad: 0x0000
struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase
{ 
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)  
};

/// Struct /Script/ControlRig.RigUnit_ApplyFK
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000100) align 16 pad: 0x0000
struct FRigUnit_ApplyFK : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	FTransformFilter                                   Filter;                                                     // 0x00B0   (0x0009)  
	EApplyTransformMode                                ApplyTransformMode;                                         // 0x00B9   (0x0001)  
	ETransformSpaceMode                                ApplyTransformSpace;                                        // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00BB   (0x0005)  MISSED
	FTransform                                         BaseTransform;                                              // 0x00C0   (0x0030)  
	FName                                              BaseJoint;                                                  // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BeginExecution
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 8 pad: 0x0000
struct FRigUnit_BeginExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0068)  
};

/// Struct /Script/ControlRig.BlendTarget
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FBlendTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	float                                              Weight;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BlendTransform
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000080) align 16 pad: 0x0000
struct FRigUnit_BlendTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Source;                                                     // 0x0010   (0x0030)  
	TArray<FBlendTarget>                               Targets;                                                    // 0x0040   (0x0010)  
	FTransform                                         Result;                                                     // 0x0050   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_Harmonics_TargetItem
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FRigUnit_Harmonics_TargetItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x0010)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_BoneHarmonics_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	FVector                                            WaveTime;                                                   // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemHarmonics
/// Size: 0x0080 (128 bytes) (0x000070 - 0x0000F0) align 8 pad: 0x0000
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_Harmonics_TargetItem>              Targets;                                                    // 0x0070   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x0080   (0x000C)  
	FVector                                            WaveFrequency;                                              // 0x008C   (0x000C)  
	FVector                                            WaveAmplitude;                                              // 0x0098   (0x000C)  
	FVector                                            WaveOffset;                                                 // 0x00A4   (0x000C)  
	FVector                                            WaveNoise;                                                  // 0x00B0   (0x000C)  
	EControlRigAnimEasingType                          WaveEase;                                                   // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x00C0   (0x0004)  
	float                                              WaveMaximum;                                                // 0x00C4   (0x0004)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x00D0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FRigUnit_BoneHarmonics_BoneTarget
{ 
	FName                                              Bone;                                                       // 0x0000   (0x000C)  
	float                                              Ratio;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics
/// Size: 0x0080 (128 bytes) (0x000070 - 0x0000F0) align 8 pad: 0x0000
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_BoneHarmonics_BoneTarget>          Bones;                                                      // 0x0070   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x0080   (0x000C)  
	FVector                                            WaveFrequency;                                              // 0x008C   (0x000C)  
	FVector                                            WaveAmplitude;                                              // 0x0098   (0x000C)  
	FVector                                            WaveOffset;                                                 // 0x00A4   (0x000C)  
	FVector                                            WaveNoise;                                                  // 0x00B0   (0x000C)  
	EControlRigAnimEasingType                          WaveEase;                                                   // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x00C0   (0x0004)  
	float                                              WaveMaximum;                                                // 0x00C4   (0x0004)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x00C8   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00CA   (0x0006)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x00D0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ControlName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_ControlName : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SpaceName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_SpaceName : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BoneName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_BoneName : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Item
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_Item : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FRigUnit_CCDIK_RotationLimitPerItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x0010)  
	float                                              Limit;                                                      // 0x0010   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_WorkData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FRigUnit_CCDIK_WorkData
{ 
	TArray<FCCDIKChainLink>                            Chain;                                                      // 0x0000   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)  
	TArray<int32_t>                                    RotationLimitIndex;                                         // 0x0020   (0x0010)  
	TArray<float>                                      RotationLimitsPerItem;                                      // 0x0030   (0x0010)  
	FCachedRigElement                                  CachedEffector;                                             // 0x0040   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIKPerItem
/// Size: 0x00D0 (208 bytes) (0x000070 - 0x000140) align 16 pad: 0x0000
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0070   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00B8   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimitPerItem>        RotationLimits;                                             // 0x00C8   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x00E0   (0x0058)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimit
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FRigUnit_CCDIK_RotationLimit
{ 
	FName                                              Bone;                                                       // 0x0000   (0x000C)  
	float                                              Limit;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK
/// Size: 0x00E0 (224 bytes) (0x000070 - 0x000150) align 16 pad: 0x0000
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0070   (0x000C)  
	FName                                              EffectorBone;                                               // 0x007C   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0088   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x0090   (0x0030)  
	float                                              Precision;                                                  // 0x00C0   (0x0004)  
	float                                              Weight;                                                     // 0x00C4   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00C8   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00CD   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimit>               RotationLimits;                                             // 0x00D8   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x00F0   (0x0058)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 pad: 0x0000
struct FRigUnit_ChainHarmonics_Reach
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            ReachTarget;                                                // 0x0004   (0x000C)  
	FVector                                            ReachAxis;                                                  // 0x0010   (0x000C)  
	float                                              ReachMinimum;                                               // 0x001C   (0x0004)  
	float                                              ReachMaximum;                                               // 0x0020   (0x0004)  
	EControlRigAnimEasingType                          ReachEase;                                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 pad: 0x0000
struct FRigUnit_ChainHarmonics_Wave
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            WaveFrequency;                                              // 0x0004   (0x000C)  
	FVector                                            WaveAmplitude;                                              // 0x0010   (0x000C)  
	FVector                                            WaveOffset;                                                 // 0x001C   (0x000C)  
	FVector                                            WaveNoise;                                                  // 0x0028   (0x000C)  
	float                                              WaveMinimum;                                                // 0x0034   (0x0004)  
	float                                              WaveMaximum;                                                // 0x0038   (0x0004)  
	EControlRigAnimEasingType                          WaveEase;                                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 pad: 0x0000
struct FRigUnit_ChainHarmonics_Pendulum
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              PendulumStiffness;                                          // 0x0004   (0x0004)  
	FVector                                            PendulumGravity;                                            // 0x0008   (0x000C)  
	float                                              PendulumBlend;                                              // 0x0014   (0x0004)  
	float                                              PendulumDrag;                                               // 0x0018   (0x0004)  
	float                                              PendulumMinimum;                                            // 0x001C   (0x0004)  
	float                                              PendulumMaximum;                                            // 0x0020   (0x0004)  
	EControlRigAnimEasingType                          PendulumEase;                                               // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            UnwindAxis;                                                 // 0x0028   (0x000C)  
	float                                              UnwindMinimum;                                              // 0x0034   (0x0004)  
	float                                              UnwindMaximum;                                              // 0x0038   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FRigUnit_ChainHarmonics_WorkData
{ 
	FVector                                            Time;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FCachedRigElement>                          Items;                                                      // 0x0010   (0x0010)  
	TArray<float>                                      Ratio;                                                      // 0x0020   (0x0010)  
	TArray<FVector>                                    LocalTip;                                                   // 0x0030   (0x0010)  
	TArray<FVector>                                    PendulumTip;                                                // 0x0040   (0x0010)  
	TArray<FVector>                                    PendulumPosition;                                           // 0x0050   (0x0010)  
	TArray<FVector>                                    PendulumVelocity;                                           // 0x0060   (0x0010)  
	TArray<FVector>                                    HierarchyLine;                                              // 0x0070   (0x0010)  
	TArray<FVector>                                    VelocityLines;                                              // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
/// Size: 0x0210 (528 bytes) (0x000070 - 0x000280) align 16 pad: 0x0000
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     ChainRoot;                                                  // 0x0070   (0x0010)  
	FVector                                            Speed;                                                      // 0x0080   (0x000C)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x008C   (0x0028)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x00B4   (0x0040)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x00F8   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x0180   (0x003C)  
	bool                                               bDrawDebug;                                                 // 0x01BC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01BD   (0x0003)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x01C0   (0x0030)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x01F0   (0x0090)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics
/// Size: 0x0210 (528 bytes) (0x000070 - 0x000280) align 16 pad: 0x0000
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              ChainRoot;                                                  // 0x0070   (0x000C)  
	FVector                                            Speed;                                                      // 0x007C   (0x000C)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x0088   (0x0028)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x00B0   (0x0040)  
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x00F0   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x0178   (0x003C)  
	bool                                               bDrawDebug;                                                 // 0x01B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x01B5   (0x000B)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x01C0   (0x0030)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x01F0   (0x0090)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionBaseMutable
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionLoop
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000108) align 8 pad: 0x0000
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0070   (0x0010)  
	FRigElementKey                                     Item;                                                       // 0x0080   (0x0010)  
	int32_t                                            Index;                                                      // 0x0090   (0x0004)  
	int32_t                                            Count;                                                      // 0x0094   (0x0004)  
	float                                              Ratio;                                                      // 0x0098   (0x0004)  
	bool                                               Continue;                                                   // 0x009C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x009D   (0x0003)  MISSED
	FControlRigExecuteContext                          Completed;                                                  // 0x00A0   (0x0068)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_CollectionBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionItemAtIndex
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	int32_t                                            Index;                                                      // 0x0018   (0x0004)  
	FRigElementKey                                     Item;                                                       // 0x001C   (0x0010)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionCount
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionReverse
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	FRigElementKeyCollection                           Reversed;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionDifference
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionIntersection
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionUnion
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionItems
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItems
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000060) align 8 pad: 0x0000
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0008   (0x0010)  
	FName                                              Old;                                                        // 0x0018   (0x000C)  
	FName                                              New;                                                        // 0x0024   (0x000C)  
	bool                                               RemoveInvalidItems;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0038   (0x0010)  
	FRigElementKeyCollection                           CachedCollection;                                           // 0x0048   (0x0010)  
	int32_t                                            CachedHierarchyHash;                                        // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildren
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000048) align 8 pad: 0x0000
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x0010)  
	bool                                               bIncludeParent;                                             // 0x0018   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0019   (0x0001)  
	ERigElementType                                    TypeToSearch;                                               // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x001B   (0x0005)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0020   (0x0010)  
	FRigElementKeyCollection                           CachedCollection;                                           // 0x0030   (0x0010)  
	int32_t                                            CachedHierarchyHash;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearch
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 8 pad: 0x0000
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase
{ 
	FName                                              PartialName;                                                // 0x0008   (0x000C)  
	ERigElementType                                    TypeToSearch;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
	FRigElementKeyCollection                           CachedCollection;                                           // 0x0028   (0x0010)  
	int32_t                                            CachedHierarchyHash;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionChain
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000058) align 8 pad: 0x0000
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     FirstItem;                                                  // 0x0008   (0x0010)  
	FRigElementKey                                     LastItem;                                                   // 0x0018   (0x0010)  
	bool                                               Reverse;                                                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0030   (0x0010)  
	FRigElementKeyCollection                           CachedCollection;                                           // 0x0040   (0x0010)  
	int32_t                                            CachedHierarchyHash;                                        // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control
/// Size: 0x00C8 (200 bytes) (0x000008 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_Control : FRigUnit
{ 
	FEulerTransform                                    Transform;                                                  // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Base;                                                       // 0x0030   (0x0030)  
	FTransform                                         InitTransform;                                              // 0x0060   (0x0030)  
	FTransform                                         Result;                                                     // 0x0090   (0x0030)  
	FTransformFilter                                   Filter;                                                     // 0x00C0   (0x0009)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control_StaticMesh
/// Size: 0x0030 (48 bytes) (0x0000D0 - 0x000100) align 16 pad: 0x0000
struct FRigUnit_Control_StaticMesh : FRigUnit_Control
{ 
	FTransform                                         MeshTransform;                                              // 0x00D0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ToSwingAndTwist
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000050) align 16 pad: 0x0000
struct FRigUnit_ToSwingAndTwist : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Swing;                                                      // 0x0030   (0x0010)  
	FQuat                                              Twist;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternionToVector
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_ConvertQuaternionToVector : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotationToVector
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_ConvertRotationToVector : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x000C)  
	FVector                                            Result;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToRotation
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_ConvertVectorToRotation : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x000C)  
	FRotator                                           Result;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternion
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_ConvertQuaternion : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FRotator                                           Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotation
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_ConvertRotation : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorRotation
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation
{ 
};

/// Struct /Script/ControlRig.RigUnit_ConvertEulerTransform
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000060) align 16 pad: 0x0000
struct FRigUnit_ConvertEulerTransform : FRigUnit
{ 
	FEulerTransform                                    Input;                                                      // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertTransform
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 16 pad: 0x0000
struct FRigUnit_ConvertTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Input;                                                      // 0x0010   (0x0030)  
	FEulerTransform                                    Result;                                                     // 0x0040   (0x0024)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBaseMutable
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
struct FRigUnit_DebugBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_DebugBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBezierItemSpace
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x000110) align 16 pad: 0x0000
struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0070   (0x0030)  
	float                                              MinimumU;                                                   // 0x00A0   (0x0004)  
	float                                              MaximumU;                                                   // 0x00A4   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x00A8   (0x0010)  
	float                                              Thickness;                                                  // 0x00B8   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00BC   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00C0   (0x0010)  
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBezier
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x000110) align 16 pad: 0x0000
struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0070   (0x0030)  
	float                                              MinimumU;                                                   // 0x00A0   (0x0004)  
	float                                              MaximumU;                                                   // 0x00A4   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x00A8   (0x0010)  
	float                                              Thickness;                                                  // 0x00B8   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00BC   (0x0004)  
	FName                                              Space;                                                      // 0x00C0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugHierarchy
/// Size: 0x0060 (96 bytes) (0x000070 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable
{ 
	float                                              Scale;                                                      // 0x0070   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0074   (0x0010)  
	float                                              Thickness;                                                  // 0x0084   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0088   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0090   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00C1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineItemSpace
/// Size: 0x0080 (128 bytes) (0x000070 - 0x0000F0) align 16 pad: 0x0000
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x0070   (0x000C)  
	FVector                                            B;                                                          // 0x007C   (0x000C)  
	FLinearColor                                       Color;                                                      // 0x0088   (0x0010)  
	float                                              Thickness;                                                  // 0x0098   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x009C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00B0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00E1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLine
/// Size: 0x0080 (128 bytes) (0x000070 - 0x0000F0) align 16 pad: 0x0000
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x0070   (0x000C)  
	FVector                                            B;                                                          // 0x007C   (0x000C)  
	FLinearColor                                       Color;                                                      // 0x0088   (0x0010)  
	float                                              Thickness;                                                  // 0x0098   (0x0004)  
	FName                                              Space;                                                      // 0x009C   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00B0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00E1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStripItemSpace
/// Size: 0x0080 (128 bytes) (0x000070 - 0x0000F0) align 16 pad: 0x0000
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0070   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0080   (0x0010)  
	float                                              Thickness;                                                  // 0x0090   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0094   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00A4   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00B0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00E1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStrip
/// Size: 0x0070 (112 bytes) (0x000070 - 0x0000E0) align 16 pad: 0x0000
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0070   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0080   (0x0010)  
	float                                              Thickness;                                                  // 0x0090   (0x0004)  
	FName                                              Space;                                                      // 0x0094   (0x000C)  
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPointMutable
/// Size: 0x0080 (128 bytes) (0x000070 - 0x0000F0) align 16 pad: 0x0000
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable
{ 
	FVector                                            Vector;                                                     // 0x0070   (0x000C)  
	ERigUnitDebugPointMode                             Mode;                                                       // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0080   (0x0010)  
	float                                              Scale;                                                      // 0x0090   (0x0004)  
	float                                              Thickness;                                                  // 0x0094   (0x0004)  
	FName                                              Space;                                                      // 0x0098   (0x000C)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00A4   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00B0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x00E1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPoint
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000080) align 16 pad: 0x0000
struct FRigUnit_DebugPoint : FRigUnit_DebugBase
{ 
	FVector                                            Vector;                                                     // 0x0008   (0x000C)  
	ERigUnitDebugPointMode                             Mode;                                                       // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0018   (0x0010)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	float                                              Thickness;                                                  // 0x002C   (0x0004)  
	FName                                              Space;                                                      // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0040   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArcItemSpace
/// Size: 0x00B0 (176 bytes) (0x000070 - 0x000120) align 16 pad: 0x0000
struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x00B4   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x00B8   (0x0004)  
	float                                              Thickness;                                                  // 0x00BC   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00C0   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00C4   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00E0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0111   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArc
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x000110) align 16 pad: 0x0000
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x00B4   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x00B8   (0x0004)  
	float                                              Thickness;                                                  // 0x00BC   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00C0   (0x0004)  
	FName                                              Space;                                                      // 0x00C4   (0x000C)  
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangleItemSpace
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x000110) align 16 pad: 0x0000
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangle
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x000110) align 16 pad: 0x0000
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	FName                                              Space;                                                      // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_DebugTransformArrayMutable_WorkData
{ 
	TArray<FTransform>                                 DrawTransforms;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000100) align 16 pad: 0x0000
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0070   (0x0010)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0084   (0x0010)  
	float                                              Thickness;                                                  // 0x0094   (0x0004)  
	float                                              Scale;                                                      // 0x0098   (0x0004)  
	FName                                              Space;                                                      // 0x009C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00B0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
	FRigUnit_DebugTransformArrayMutable_WorkData       WorkData;                                                   // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutableItemSpace
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x000110) align 16 pad: 0x0000
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x00A4   (0x0010)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	float                                              Scale;                                                      // 0x00B8   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00BC   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutable
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x000110) align 16 pad: 0x0000
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x00A4   (0x0010)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	float                                              Scale;                                                      // 0x00B8   (0x0004)  
	FName                                              Space;                                                      // 0x00BC   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransform
/// Size: 0x00A8 (168 bytes) (0x000008 - 0x0000B0) align 16 pad: 0x0000
struct FRigUnit_DebugTransform : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0044   (0x0010)  
	float                                              Thickness;                                                  // 0x0054   (0x0004)  
	float                                              Scale;                                                      // 0x0058   (0x0004)  
	FName                                              Space;                                                      // 0x005C   (0x000C)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0070   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData03_7[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousTransform
/// Size: 0x00C8 (200 bytes) (0x000008 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	FTransform                                         Delta;                                                      // 0x0040   (0x0030)  
	FTransform                                         PreviousValue;                                              // 0x0070   (0x0030)  
	FTransform                                         Cache;                                                      // 0x00A0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousQuat
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000050) align 16 pad: 0x0000
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FQuat                                              Delta;                                                      // 0x0020   (0x0010)  
	FQuat                                              PreviousValue;                                              // 0x0030   (0x0010)  
	FQuat                                              Cache;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousVector
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Delta;                                                      // 0x0014   (0x000C)  
	FVector                                            PreviousValue;                                              // 0x0020   (0x000C)  
	FVector                                            Cache;                                                      // 0x002C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousFloat
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Delta;                                                      // 0x000C   (0x0004)  
	float                                              PreviousValue;                                              // 0x0010   (0x0004)  
	float                                              Cache;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_Rotation
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 pad: 0x0000
struct FRigUnit_DistributeRotation_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FRigUnit_DistributeRotation_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	TArray<int32_t>                                    ItemRotationA;                                              // 0x0010   (0x0010)  
	TArray<int32_t>                                    ItemRotationB;                                              // 0x0020   (0x0010)  
	TArray<float>                                      ItemRotationT;                                              // 0x0030   (0x0010)  
	TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForCollection
/// Size: 0x0078 (120 bytes) (0x000070 - 0x0000E8) align 8 pad: 0x0000
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0070   (0x0010)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0080   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0094   (0x0004)  
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0098   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation
/// Size: 0x0088 (136 bytes) (0x000070 - 0x0000F8) align 8 pad: 0x0000
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0070   (0x000C)  
	FName                                              EndBone;                                                    // 0x007C   (0x000C)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0088   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x009C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x00A8   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetTransform
/// Size: 0x0040 (64 bytes) (0x000070 - 0x0000B0) align 16 pad: 0x0000
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetThickness
/// Size: 0x0010 (16 bytes) (0x000070 - 0x000080) align 8 pad: 0x0000
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0070   (0x000C)  
	float                                              Thickness;                                                  // 0x007C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetColor
/// Size: 0x0020 (32 bytes) (0x000070 - 0x000090) align 8 pad: 0x0000
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0070   (0x000C)  
	FLinearColor                                       Color;                                                      // 0x007C   (0x0010)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerGetInstruction
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000060) align 16 pad: 0x0000
struct FRigUnit_DrawContainerGetInstruction : FRigUnit
{ 
	FName                                              InstructionName;                                            // 0x0008   (0x000C)  
	FLinearColor                                       Color;                                                      // 0x0014   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0024   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_FABRIK_WorkData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_FABRIK_WorkData
{ 
	TArray<FFABRIKChainLink>                           Chain;                                                      // 0x0000   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)  
	FCachedRigElement                                  CachedEffector;                                             // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_FABRIKPerItem
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000100) align 16 pad: 0x0000
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0070   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x00BC   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x00C0   (0x0038)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIK
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x000110) align 16 pad: 0x0000
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0070   (0x000C)  
	FName                                              EffectorBone;                                               // 0x007C   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0088   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x0090   (0x0030)  
	float                                              Precision;                                                  // 0x00C0   (0x0004)  
	float                                              Weight;                                                     // 0x00C4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x00CC   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x00D0   (0x0038)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 pad: 0x0000
struct FRigUnit_FitChainToCurve_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 pad: 0x0000
struct FRigUnit_FitChainToCurve_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       CurveColor;                                                 // 0x0008   (0x0010)  
	FLinearColor                                       SegmentsColor;                                              // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 pad: 0x0000
struct FRigUnit_FitChainToCurve_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVector>                                    ItemPositions;                                              // 0x0008   (0x0010)  
	TArray<float>                                      ItemSegments;                                               // 0x0018   (0x0010)  
	TArray<FVector>                                    CurvePositions;                                             // 0x0028   (0x0010)  
	TArray<float>                                      CurveSegments;                                              // 0x0038   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0048   (0x0010)  
	TArray<int32_t>                                    ItemRotationA;                                              // 0x0058   (0x0010)  
	TArray<int32_t>                                    ItemRotationB;                                              // 0x0068   (0x0010)  
	TArray<float>                                      ItemRotationT;                                              // 0x0078   (0x0010)  
	TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurvePerItem
/// Size: 0x01A0 (416 bytes) (0x000070 - 0x000210) align 16 pad: 0x0000
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0070   (0x0010)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0080   (0x0030)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x00B4   (0x0004)  
	float                                              Maximum;                                                    // 0x00B8   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x00BC   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x00C0   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00CC   (0x000C)  
	FVector                                            PoleVectorPosition;                                         // 0x00D8   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x00E8   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x00FC   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0100   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0101   (0x000F)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0110   (0x0060)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0170   (0x0098)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0208   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve
/// Size: 0x01A0 (416 bytes) (0x000070 - 0x000210) align 16 pad: 0x0000
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0070   (0x000C)  
	FName                                              EndBone;                                                    // 0x007C   (0x000C)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0088   (0x0030)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x00BC   (0x0004)  
	float                                              Maximum;                                                    // 0x00C0   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x00C4   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x00C8   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00D4   (0x000C)  
	FVector                                            PoleVectorPosition;                                         // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x00F0   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0104   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0108   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0110   (0x0060)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0170   (0x0098)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0208   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MapRange_Float
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MapRange_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              MinIn;                                                      // 0x000C   (0x0004)  
	float                                              MaxIn;                                                      // 0x0010   (0x0004)  
	float                                              MinOut;                                                     // 0x0014   (0x0004)  
	float                                              MaxOut;                                                     // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_Clamp_Float
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_Clamp_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Min;                                                        // 0x000C   (0x0004)  
	float                                              Max;                                                        // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryFloatOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_BinaryFloatOp : FRigUnit
{ 
	float                                              Argument0;                                                  // 0x0008   (0x0004)  
	float                                              Argument1;                                                  // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Divide_FloatFloat
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_FloatFloat
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_FloatFloat
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Multiply_FloatFloat
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_ForLoopCount
/// Size: 0x0078 (120 bytes) (0x000070 - 0x0000E8) align 8 pad: 0x0000
struct FRigUnit_ForLoopCount : FRigUnitMutable
{ 
	int32_t                                            Count;                                                      // 0x0070   (0x0004)  
	int32_t                                            Index;                                                      // 0x0074   (0x0004)  
	float                                              Ratio;                                                      // 0x0078   (0x0004)  
	bool                                               Continue;                                                   // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	FControlRigExecuteContext                          Completed;                                                  // 0x0080   (0x0068)  
};

/// Struct /Script/ControlRig.RigUnit_GetBoneTransform
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 16 pad: 0x0000
struct FRigUnit_GetBoneTransform : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0015   (0x000B)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0050   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlInitialTransform
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 16 pad: 0x0000
struct FRigUnit_GetControlInitialTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0015   (0x000B)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0050   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlTransform
/// Size: 0x00C8 (200 bytes) (0x000008 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_GetControlTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0015   (0x000B)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FTransform                                         Minimum;                                                    // 0x0050   (0x0030)  
	FTransform                                         Maximum;                                                    // 0x0080   (0x0030)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x00B0   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlRotator
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000058) align 8 pad: 0x0000
struct FRigUnit_GetControlRotator : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRotator                                           Rotator;                                                    // 0x0018   (0x000C)  
	FRotator                                           Minimum;                                                    // 0x0024   (0x000C)  
	FRotator                                           Maximum;                                                    // 0x0030   (0x000C)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x003C   (0x0018)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000058) align 8 pad: 0x0000
struct FRigUnit_GetControlVector : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FVector                                            Vector;                                                     // 0x0018   (0x000C)  
	FVector                                            Minimum;                                                    // 0x0024   (0x000C)  
	FVector                                            Maximum;                                                    // 0x0030   (0x000C)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x003C   (0x0018)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector2D
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000048) align 8 pad: 0x0000
struct FRigUnit_GetControlVector2D : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x000C)  
	FVector2D                                          Vector;                                                     // 0x0014   (0x0008)  
	FVector2D                                          Minimum;                                                    // 0x001C   (0x0008)  
	FVector2D                                          Maximum;                                                    // 0x0024   (0x0008)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x002C   (0x0018)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlInteger
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_GetControlInteger : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x000C)  
	int32_t                                            IntegerValue;                                               // 0x0014   (0x0004)  
	int32_t                                            Minimum;                                                    // 0x0018   (0x0004)  
	int32_t                                            Maximum;                                                    // 0x001C   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlFloat
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_GetControlFloat : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x000C)  
	float                                              FloatValue;                                                 // 0x0014   (0x0004)  
	float                                              Minimum;                                                    // 0x0018   (0x0004)  
	float                                              Maximum;                                                    // 0x001C   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlBool
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_GetControlBool : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x000C)  
	bool                                               BoolValue;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0018   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetCurveValue
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_GetCurveValue : FRigUnit
{ 
	FName                                              Curve;                                                      // 0x0008   (0x000C)  
	float                                              Value;                                                      // 0x0014   (0x0004)  
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0018   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetDeltaTime
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase
{ 
	float                                              Result;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetInitialBoneTransform
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 16 pad: 0x0000
struct FRigUnit_GetInitialBoneTransform : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0015   (0x000B)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0050   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetJointTransform
/// Size: 0x0080 (128 bytes) (0x000070 - 0x0000F0) align 16 pad: 0x0000
struct FRigUnit_GetJointTransform : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0070   (0x000C)  
	ETransformGetterType                               Type;                                                       // 0x007C   (0x0001)  
	ETransformSpaceMode                                TransformSpace;                                             // 0x007D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x007E   (0x0002)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0080   (0x0030)  
	FName                                              BaseJoint;                                                  // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	FTransform                                         Output;                                                     // 0x00C0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000080) align 16 pad: 0x0000
struct FRigUnit_GetRelativeBoneTransform : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x000C)  
	FName                                              Space;                                                      // 0x0014   (0x000C)  
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0050   (0x0018)  
	FCachedRigElement                                  CachedSpace;                                                // 0x0068   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransformForItem
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000090) align 16 pad: 0x0000
struct FRigUnit_GetRelativeTransformForItem : FRigUnit
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x0010)  
	bool                                               bChildInitial;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FRigElementKey                                     Parent;                                                     // 0x001C   (0x0010)  
	bool                                               bParentInitial;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	FTransform                                         RelativeTransform;                                          // 0x0030   (0x0030)  
	FCachedRigElement                                  CachedChild;                                                // 0x0060   (0x0018)  
	FCachedRigElement                                  CachedParent;                                               // 0x0078   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetSpaceTransform
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 16 pad: 0x0000
struct FRigUnit_GetSpaceTransform : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x000C)  
	EBoneGetterSetterMode                              SpaceType;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0015   (0x000B)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x0050   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetTransform
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 16 pad: 0x0000
struct FRigUnit_GetTransform : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0010)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0018   (0x0001)  
	bool                                               bInitial;                                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x001A   (0x0006)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedIndex;                                                // 0x0050   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetWorldTime
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_GetWorldTime : FRigUnit_AnimBase
{ 
	float                                              Year;                                                       // 0x0008   (0x0004)  
	float                                              Month;                                                      // 0x000C   (0x0004)  
	float                                              Day;                                                        // 0x0010   (0x0004)  
	float                                              WeekDay;                                                    // 0x0014   (0x0004)  
	float                                              Hours;                                                      // 0x0018   (0x0004)  
	float                                              Minutes;                                                    // 0x001C   (0x0004)  
	float                                              Seconds;                                                    // 0x0020   (0x0004)  
	float                                              OverallSeconds;                                             // 0x0024   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_HierarchyBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblings
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000058) align 8 pad: 0x0000
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0010)  
	bool                                               bIncludeItem;                                               // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	FRigElementKeyCollection                           Siblings;                                                   // 0x0020   (0x0010)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0030   (0x0018)  
	FRigElementKeyCollection                           CachedSiblings;                                             // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetChildren
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000058) align 8 pad: 0x0000
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x0010)  
	bool                                               bIncludeParent;                                             // 0x0018   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x001A   (0x0006)  MISSED
	FRigElementKeyCollection                           Children;                                                   // 0x0020   (0x0010)  
	FCachedRigElement                                  CachedParent;                                               // 0x0030   (0x0018)  
	FRigElementKeyCollection                           CachedChildren;                                             // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParents
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000058) align 8 pad: 0x0000
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x0010)  
	bool                                               bIncludeChild;                                              // 0x0018   (0x0001)  
	bool                                               bReverse;                                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x001A   (0x0006)  MISSED
	FRigElementKeyCollection                           Parents;                                                    // 0x0020   (0x0010)  
	FCachedRigElement                                  CachedChild;                                                // 0x0030   (0x0018)  
	FRigElementKeyCollection                           CachedParents;                                              // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParent
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000058) align 8 pad: 0x0000
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x0010)  
	FRigElementKey                                     Parent;                                                     // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedChild;                                                // 0x0028   (0x0018)  
	FCachedRigElement                                  CachedParent;                                               // 0x0040   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_InverseExecution
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 8 pad: 0x0000
struct FRigUnit_InverseExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0068)  
};

/// Struct /Script/ControlRig.RigUnit_IsInteracting
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_IsInteracting : FRigUnit
{ 
	bool                                               bIsInteracting;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_ItemBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_ItemReplace
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 8 pad: 0x0000
struct FRigUnit_ItemReplace : FRigUnit_ItemBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0010)  
	FName                                              Old;                                                        // 0x0018   (0x000C)  
	FName                                              New;                                                        // 0x0024   (0x000C)  
	FRigElementKey                                     Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ItemExists
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_ItemExists : FRigUnit_ItemBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0010)  
	bool                                               Exists;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x001C   (0x0018)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemBaseMutable
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
struct FRigUnit_ItemBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_KalmanTransform
/// Size: 0x0098 (152 bytes) (0x000008 - 0x0000A0) align 16 pad: 0x0000
struct FRigUnit_KalmanTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	int32_t                                            BufferSize;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0044   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0050   (0x0030)  
	TArray<FTransform>                                 Buffer;                                                     // 0x0080   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0094   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_KalmanVector
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 8 pad: 0x0000
struct FRigUnit_KalmanVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	int32_t                                            BufferSize;                                                 // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FVector>                                    Buffer;                                                     // 0x0028   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_KalmanFloat
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_KalmanFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0018   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_MathBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_MathBoolBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNotEquals
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolEquals
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBinaryOp
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolOr
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNand
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolAnd
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolUnaryOp
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	bool                                               Result;                                                     // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNot
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstant
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstFalse
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstTrue
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_MathColorBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorLerp
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 8 pad: 0x0000
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	float                                              T;                                                          // 0x0028   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x002C   (0x0010)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathColorBinaryOp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	FLinearColor                                       Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathColorMul
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_MathColorMul : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorSub
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorAdd
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorFromFloat
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x000C   (0x0010)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_MathFloatBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLawOfCosine
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              C;                                                          // 0x0010   (0x0004)  
	float                                              AlphaAngle;                                                 // 0x0014   (0x0004)  
	float                                              BetaAngle;                                                  // 0x0018   (0x0004)  
	float                                              GammaAngle;                                                 // 0x001C   (0x0004)  
	bool                                               bValid;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatUnaryOp
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAtan
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAcos
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAsin
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatTan
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCos
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSin
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRad
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDeg
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSelectBool
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              IfTrue;                                                     // 0x000C   (0x0004)  
	float                                              IfFalse;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyEqual
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Tolerance;                                                  // 0x0010   (0x0004)  
	bool                                               Result;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyZero
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Tolerance;                                                  // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLessEqual
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreaterEqual
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLess
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreater
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNotEquals
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatEquals
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRemap
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SourceMinimum;                                              // 0x000C   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0010   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0014   (0x0004)  
	float                                              TargetMaximum;                                              // 0x0018   (0x0004)  
	bool                                               bClamp;                                                     // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLerp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              T;                                                          // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatClamp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSign
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatToInt
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRound
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatRound : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCeil
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatFloor
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAbs
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNegate
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSqrt
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBinaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatPow
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMax
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMin
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMod
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDiv
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMul
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSub
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAdd
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstant
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstTwoPi
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstHalfPi
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstPi
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_MathIntBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntLessEqual
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntGreaterEqual
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntLess
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntLess : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntGreater
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntGreater : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntNotEquals
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntEquals
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntEquals : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntClamp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntClamp : FRigUnit_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Minimum;                                                    // 0x000C   (0x0004)  
	int32_t                                            Maximum;                                                    // 0x0010   (0x0004)  
	int32_t                                            Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntUnaryOp
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntSign
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathIntSign : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntToFloat
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathIntToFloat : FRigUnit_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntAbs
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathIntAbs : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntNegate
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathIntNegate : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntBinaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	int32_t                                            Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntPow
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntPow : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMax
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntMax : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMin
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntMin : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMod
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntMod : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntDiv
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntDiv : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMul
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntMul : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntSub
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntSub : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntAdd
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathIntAdd : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotationOrder
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase
{ 
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_MathQuaternionBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSwingTwist
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000050) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Swing;                                                      // 0x0030   (0x0010)  
	FQuat                                              Twist;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionGetAxis
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0010   (0x0010)  
	TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotateVector
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0010   (0x0010)  
	FVector                                            Vector;                                                     // 0x0020   (0x000C)  
	FVector                                            Result;                                                     // 0x002C   (0x000C)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnaryOp
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnit
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionDot
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	float                                              Result;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSelectBool
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FQuat                                              IfTrue;                                                     // 0x0010   (0x0010)  
	FQuat                                              IfFalse;                                                    // 0x0020   (0x0010)  
	FQuat                                              Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionNotEquals
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	bool                                               Result;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0031   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionEquals
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	bool                                               Result;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0031   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSlerp
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000050) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	float                                              T;                                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionInverse
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBinaryOp
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	FQuat                                              Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionMul
/// Size: 0x0000 (0 bytes) (0x000040 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToRotator
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FRotator                                           Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToEuler
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionScale
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	float                                              Scale;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToAxisAndAngle
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FVector                                            Axis;                                                       // 0x0020   (0x000C)  
	float                                              Angle;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromTwoVectors
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromRotator
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase
{ 
	FRotator                                           Rotator;                                                    // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromEuler
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase
{ 
	FVector                                            Euler;                                                      // 0x0008   (0x000C)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0015   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x000C)  
	float                                              Angle;                                                      // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_MathRBFInterpolateBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateVectorWorkData
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorBase
/// Size: 0x00A8 (168 bytes) (0x000008 - 0x0000B0) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase
{ 
	FVector                                            Input;                                                      // 0x0008   (0x000C)  
	ERBFVectorDistanceType                             DistanceFunction;                                           // 0x0014   (0x0001)  
	ERBFKernelType                                     SmoothingFunction;                                          // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	float                                              SmoothingRadius;                                            // 0x0018   (0x0004)  
	bool                                               bNormalizeOutput;                                           // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FRigUnit_MathRBFInterpolateVectorWorkData          WorkData;                                                   // 0x0020   (0x0090)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorXform_Target
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FMathRBFInterpolateVectorXform_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorXform
/// Size: 0x0040 (64 bytes) (0x0000B0 - 0x0000F0) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorXform_Target>      Targets;                                                    // 0x00B0   (0x0010)  
	FTransform                                         Output;                                                     // 0x00C0   (0x0030)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorQuat_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 pad: 0x0000
struct FMathRBFInterpolateVectorQuat_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorQuat
/// Size: 0x0020 (32 bytes) (0x0000B0 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorQuat_Target>       Targets;                                                    // 0x00B0   (0x0010)  
	FQuat                                              Output;                                                     // 0x00C0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorColor_Target
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FMathRBFInterpolateVectorColor_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	FLinearColor                                       Value;                                                      // 0x000C   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorColor
/// Size: 0x0020 (32 bytes) (0x0000B0 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorColor_Target>      Targets;                                                    // 0x00B0   (0x0010)  
	FLinearColor                                       Output;                                                     // 0x00C0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorVector_Target
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FMathRBFInterpolateVectorVector_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	FVector                                            Value;                                                      // 0x000C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorVector
/// Size: 0x0020 (32 bytes) (0x0000B0 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorVector_Target>     Targets;                                                    // 0x00B0   (0x0010)  
	FVector                                            Output;                                                     // 0x00C0   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorFloat_Target
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FMathRBFInterpolateVectorFloat_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	float                                              Value;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorFloat
/// Size: 0x0020 (32 bytes) (0x0000B0 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorFloat_Target>      Targets;                                                    // 0x00B0   (0x0010)  
	float                                              Output;                                                     // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x00C4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateQuatWorkData
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatBase
/// Size: 0x00C8 (200 bytes) (0x000008 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	ERBFQuatDistanceType                               DistanceFunction;                                           // 0x0020   (0x0001)  
	ERBFKernelType                                     SmoothingFunction;                                          // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0022   (0x0002)  MISSED
	float                                              SmoothingAngle;                                             // 0x0024   (0x0004)  
	bool                                               bNormalizeOutput;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FVector                                            TwistAxis;                                                  // 0x002C   (0x000C)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FRigUnit_MathRBFInterpolateQuatWorkData            WorkData;                                                   // 0x0040   (0x0090)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatXform_Target
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FMathRBFInterpolateQuatXform_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatXform
/// Size: 0x0040 (64 bytes) (0x0000D0 - 0x000110) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatXform_Target>        Targets;                                                    // 0x00D0   (0x0010)  
	FTransform                                         Output;                                                     // 0x00E0   (0x0030)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatQuat_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 pad: 0x0000
struct FMathRBFInterpolateQuatQuat_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatQuat
/// Size: 0x0020 (32 bytes) (0x0000D0 - 0x0000F0) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatQuat_Target>         Targets;                                                    // 0x00D0   (0x0010)  
	FQuat                                              Output;                                                     // 0x00E0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatColor_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 pad: 0x0000
struct FMathRBFInterpolateQuatColor_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	FLinearColor                                       Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatColor
/// Size: 0x0020 (32 bytes) (0x0000D0 - 0x0000F0) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatColor_Target>        Targets;                                                    // 0x00D0   (0x0010)  
	FLinearColor                                       Output;                                                     // 0x00E0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatVector_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 pad: 0x0000
struct FMathRBFInterpolateQuatVector_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	FVector                                            Value;                                                      // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatVector
/// Size: 0x0020 (32 bytes) (0x0000D0 - 0x0000F0) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatVector_Target>       Targets;                                                    // 0x00D0   (0x0010)  
	FVector                                            Output;                                                     // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatFloat_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 pad: 0x0000
struct FMathRBFInterpolateQuatFloat_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatFloat
/// Size: 0x0020 (32 bytes) (0x0000D0 - 0x0000F0) align 16 pad: 0x0000
struct FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatFloat_Target>        Targets;                                                    // 0x00D0   (0x0010)  
	float                                              Output;                                                     // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x00E4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_MathTransformBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformClampSpatially
/// Size: 0x00C8 (200 bytes) (0x000008 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0040   (0x0001)  
	TEnumAsByte<EControlRigClampSpatialMode>           Type;                                                       // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0044   (0x0004)  
	float                                              Maximum;                                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Space;                                                      // 0x0050   (0x0030)  
	bool                                               bDrawDebug;                                                 // 0x0080   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0084   (0x0010)  
	float                                              DebugThickness;                                             // 0x0094   (0x0004)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0098   (0x0008)  MISSED
	FTransform                                         Result;                                                     // 0x00A0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromSRT
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000090) align 16 pad: 0x0000
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Rotation;                                                   // 0x0014   (0x000C)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Scale;                                                      // 0x0024   (0x000C)  
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
	FEulerTransform                                    EulerTransform;                                             // 0x0060   (0x0024)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformTransformVector
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000060) align 16 pad: 0x0000
struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FVector                                            Location;                                                   // 0x0040   (0x000C)  
	FVector                                            Result;                                                     // 0x004C   (0x000C)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformRotateVector
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000060) align 16 pad: 0x0000
struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FVector                                            Direction;                                                  // 0x0040   (0x000C)  
	FVector                                            Result;                                                     // 0x004C   (0x000C)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformSelectBool
/// Size: 0x0098 (152 bytes) (0x000008 - 0x0000A0) align 16 pad: 0x0000
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FTransform                                         IfTrue;                                                     // 0x0010   (0x0030)  
	FTransform                                         IfFalse;                                                    // 0x0040   (0x0030)  
	FTransform                                         Result;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformLerp
/// Size: 0x00A8 (168 bytes) (0x000008 - 0x0000B0) align 16 pad: 0x0000
struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0030)  
	FTransform                                         B;                                                          // 0x0040   (0x0030)  
	float                                              T;                                                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformUnaryOp
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 16 pad: 0x0000
struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	FTransform                                         Result;                                                     // 0x0040   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformInverse
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 16 pad: 0x0000
struct FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeAbsolute
/// Size: 0x0098 (152 bytes) (0x000008 - 0x0000A0) align 16 pad: 0x0000
struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Local;                                                      // 0x0010   (0x0030)  
	FTransform                                         Parent;                                                     // 0x0040   (0x0030)  
	FTransform                                         Global;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeRelative
/// Size: 0x0098 (152 bytes) (0x000008 - 0x0000A0) align 16 pad: 0x0000
struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Global;                                                     // 0x0010   (0x0030)  
	FTransform                                         Parent;                                                     // 0x0040   (0x0030)  
	FTransform                                         Local;                                                      // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBinaryOp
/// Size: 0x0098 (152 bytes) (0x000008 - 0x0000A0) align 16 pad: 0x0000
struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0030)  
	FTransform                                         B;                                                          // 0x0040   (0x0030)  
	FTransform                                         Result;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMul
/// Size: 0x0000 (0 bytes) (0x0000A0 - 0x0000A0) align 16 pad: 0x0000
struct FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformToEulerTransform
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 16 pad: 0x0000
struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	FEulerTransform                                    Result;                                                     // 0x0040   (0x0024)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromEulerTransform
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000060) align 16 pad: 0x0000
struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase
{ 
	FEulerTransform                                    EulerTransform;                                             // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_MathVectorBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntersectPlane
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000048) align 8 pad: 0x0000
struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase
{ 
	FVector                                            Start;                                                      // 0x0008   (0x000C)  
	FVector                                            Direction;                                                  // 0x0014   (0x000C)  
	FVector                                            PlanePoint;                                                 // 0x0020   (0x000C)  
	FVector                                            PlaneNormal;                                                // 0x002C   (0x000C)  
	FVector                                            Result;                                                     // 0x0038   (0x000C)  
	float                                              Distance;                                                   // 0x0044   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampSpatially
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000080) align 16 pad: 0x0000
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0014   (0x0001)  
	TEnumAsByte<EControlRigClampSpatialMode>           Type;                                                       // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0018   (0x0004)  
	float                                              Maximum;                                                    // 0x001C   (0x0004)  
	FTransform                                         Space;                                                      // 0x0020   (0x0030)  
	bool                                               bDrawDebug;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0054   (0x0010)  
	float                                              DebugThickness;                                             // 0x0064   (0x0004)  
	FVector                                            Result;                                                     // 0x0068   (0x000C)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0074   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMakeBezierFourPoint
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0008   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBezierFourPoint
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000058) align 8 pad: 0x0000
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0008   (0x0030)  
	float                                              T;                                                          // 0x0038   (0x0004)  
	FVector                                            Result;                                                     // 0x003C   (0x000C)  
	FVector                                            Tangent;                                                    // 0x0048   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorOrthogonal
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorParallel
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAngle
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMirror
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Normal;                                                     // 0x0014   (0x000C)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampLength
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              MinimumLength;                                              // 0x0014   (0x0004)  
	float                                              MaximumLength;                                              // 0x0018   (0x0004)  
	FVector                                            Result;                                                     // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSetLength
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Length;                                                     // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnaryOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Result;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnit
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDot
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBinaryOp
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCross
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDistance
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLength
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLengthSquared
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRad
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDeg
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSelectBool
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FVector                                            IfTrue;                                                     // 0x000C   (0x000C)  
	FVector                                            IfFalse;                                                    // 0x0018   (0x000C)  
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyEqual
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Tolerance;                                                  // 0x0020   (0x0004)  
	bool                                               Result;                                                     // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyZero
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Tolerance;                                                  // 0x0014   (0x0004)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNotEquals
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorEquals
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRemap
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000058) align 8 pad: 0x0000
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            SourceMinimum;                                              // 0x0014   (0x000C)  
	FVector                                            SourceMaximum;                                              // 0x0020   (0x000C)  
	FVector                                            TargetMinimum;                                              // 0x002C   (0x000C)  
	FVector                                            TargetMaximum;                                              // 0x0038   (0x000C)  
	bool                                               bClamp;                                                     // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0048   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLerp
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              T;                                                          // 0x0020   (0x0004)  
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClamp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Minimum;                                                    // 0x0014   (0x000C)  
	FVector                                            Maximum;                                                    // 0x0020   (0x000C)  
	FVector                                            Result;                                                     // 0x002C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSign
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRound
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCeil
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFloor
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAbs
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNegate
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMax
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMin
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMod
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDiv
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorScale
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Factor;                                                     // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMul
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSub
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAdd
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFromFloat
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	FVector                                            Result;                                                     // 0x000C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_ModifyBoneTransforms_PerBone
{ 
	FName                                              Bone;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_WorkData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_ModifyTransforms_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData
{ 
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms
/// Size: 0x0030 (48 bytes) (0x000070 - 0x0000A0) align 8 pad: 0x0000
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyBoneTransforms_PerBone>      BoneToModify;                                               // 0x0070   (0x0010)  
	float                                              Weight;                                                     // 0x0080   (0x0004)  
	float                                              WeightMinimum;                                              // 0x0084   (0x0004)  
	float                                              WeightMaximum;                                              // 0x0088   (0x0004)  
	EControlRigModifyBoneMode                          Mode;                                                       // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	FRigUnit_ModifyBoneTransforms_WorkData             WorkData;                                                   // 0x0090   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_ModifyTransforms_PerItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x0010)  
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms
/// Size: 0x0030 (48 bytes) (0x000070 - 0x0000A0) align 8 pad: 0x0000
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyTransforms_PerItem>          ItemToModify;                                               // 0x0070   (0x0010)  
	float                                              Weight;                                                     // 0x0080   (0x0004)  
	float                                              WeightMinimum;                                              // 0x0084   (0x0004)  
	float                                              WeightMaximum;                                              // 0x0088   (0x0004)  
	EControlRigModifyBoneMode                          Mode;                                                       // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	FRigUnit_ModifyTransforms_WorkData                 WorkData;                                                   // 0x0090   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FRigUnit_MultiFABRIK_EndEffector
{ 
	FName                                              Bone;                                                       // 0x0000   (0x000C)  
	FVector                                            Location;                                                   // 0x000C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FRigUnit_MultiFABRIK_WorkData
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000100) align 8 pad: 0x0000
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              RootBone;                                                   // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FRigUnit_MultiFABRIK_EndEffector>           Effectors;                                                  // 0x0080   (0x0010)  
	float                                              Precision;                                                  // 0x0090   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x0098   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	FRigUnit_MultiFABRIK_WorkData                      WorkData;                                                   // 0x00A0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_NameBase
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRigUnit_NameBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_Contains
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_Contains : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x000C)  
	FName                                              Search;                                                     // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_StartsWith
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_StartsWith : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x000C)  
	FName                                              Start;                                                      // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_EndsWith
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_EndsWith : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x000C)  
	FName                                              Ending;                                                     // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_NameReplace
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_NameReplace : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x000C)  
	FName                                              Old;                                                        // 0x0014   (0x000C)  
	FName                                              New;                                                        // 0x0020   (0x000C)  
	FName                                              Result;                                                     // 0x002C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_NameTruncate
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_NameTruncate : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x000C)  
	int32_t                                            Count;                                                      // 0x0014   (0x0004)  
	bool                                               FromEnd;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              Remainder;                                                  // 0x001C   (0x000C)  
	FName                                              Chopped;                                                    // 0x0028   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_NameConcat
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_NameConcat : FRigUnit_NameBase
{ 
	FName                                              A;                                                          // 0x0008   (0x000C)  
	FName                                              B;                                                          // 0x0014   (0x000C)  
	FName                                              Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_NoiseVector
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000050) align 8 pad: 0x0000
struct FRigUnit_NoiseVector : FRigUnit_MathBase
{ 
	FVector                                            Position;                                                   // 0x0008   (0x000C)  
	FVector                                            Speed;                                                      // 0x0014   (0x000C)  
	FVector                                            Frequency;                                                  // 0x0020   (0x000C)  
	float                                              Minimum;                                                    // 0x002C   (0x0004)  
	float                                              Maximum;                                                    // 0x0030   (0x0004)  
	FVector                                            Result;                                                     // 0x0034   (0x000C)  
	FVector                                            Time;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_NoiseFloat
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_NoiseFloat : FRigUnit_MathBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Speed;                                                      // 0x000C   (0x0004)  
	float                                              Frequency;                                                  // 0x0010   (0x0004)  
	float                                              Minimum;                                                    // 0x0014   (0x0004)  
	float                                              Maximum;                                                    // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
	float                                              Time;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_OffsetTransformForItem
/// Size: 0x0060 (96 bytes) (0x000070 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0070   (0x0010)  
	FTransform                                         OffsetTransform;                                            // 0x0080   (0x0030)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x00B8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraint
/// Size: 0x0110 (272 bytes) (0x000070 - 0x000180) align 16 pad: 0x0000
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable
{ 
	FRigElementKey                                     Subject;                                                    // 0x0070   (0x0010)  
	int32_t                                            ParentIndex;                                                // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FRigElementKeyCollection                           Parents;                                                    // 0x0088   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0098   (0x0008)  MISSED
	FTransform                                         InitialGlobalTransform;                                     // 0x00A0   (0x0030)  
	float                                              Weight;                                                     // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x00E0   (0x0030)  
	bool                                               Switched;                                                   // 0x0110   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0111   (0x0003)  MISSED
	FCachedRigElement                                  CachedSubject;                                              // 0x0114   (0x0018)  
	FCachedRigElement                                  CachedParent;                                               // 0x012C   (0x0018)  
	unsigned char                                      UnknownData04_6[0xC];                                       // 0x0144   (0x000C)  MISSED
	FTransform                                         RelativeOffset;                                             // 0x0150   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_SimBaseMutable
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
struct FRigUnit_SimBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FRigUnit_PointSimulation_BoneTarget
{ 
	FName                                              Bone;                                                       // 0x0000   (0x000C)  
	int32_t                                            TranslationPoint;                                           // 0x000C   (0x0004)  
	int32_t                                            PrimaryAimPoint;                                            // 0x0010   (0x0004)  
	int32_t                                            SecondaryAimPoint;                                          // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 pad: 0x0000
struct FRigUnit_PointSimulation_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	float                                              CollisionScale;                                             // 0x0008   (0x0004)  
	bool                                               bDrawPointsAsSpheres;                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_WorkData
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 pad: 0x0000
struct FRigUnit_PointSimulation_WorkData
{ 
	FCRSimPointContainer                               Simulation;                                                 // 0x0000   (0x0078)  
	TArray<FCachedRigElement>                          BoneIndices;                                                // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation
/// Size: 0x0190 (400 bytes) (0x000070 - 0x000200) align 16 pad: 0x0000
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable
{ 
	TArray<FCRSimPoint>                                Points;                                                     // 0x0070   (0x0010)  
	TArray<FCRSimLinearSpring>                         Links;                                                      // 0x0080   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0090   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x00A0   (0x0010)  
	float                                              SimulatedStepsPerSecond;                                    // 0x00B0   (0x0004)  
	ECRSimPointIntegrateType                           IntegratorType;                                             // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              VerletBlend;                                                // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<FRigUnit_PointSimulation_BoneTarget>        BoneTargets;                                                // 0x00C0   (0x0010)  
	bool                                               bLimitLocalPosition;                                        // 0x00D0   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00D2   (0x0002)  MISSED
	FVector                                            PrimaryAimAxis;                                             // 0x00D4   (0x000C)  
	FVector                                            SecondaryAimAxis;                                           // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FRigUnit_PointSimulation_DebugSettings             DebugSettings;                                              // 0x00F0   (0x0050)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0140   (0x0030)  
	FRigUnit_PointSimulation_WorkData                  WorkData;                                                   // 0x0170   (0x0088)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PrepareForExecution
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 8 pad: 0x0000
struct FRigUnit_PrepareForExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0068)  
};

/// Struct /Script/ControlRig.RigUnit_EndProfilingTimer
/// Size: 0x0020 (32 bytes) (0x000070 - 0x000090) align 8 pad: 0x0000
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable
{ 
	int32_t                                            NumberOfMeasurements;                                       // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FString                                            Prefix;                                                     // 0x0078   (0x0010)  
	float                                              AccumulatedTime;                                            // 0x0088   (0x0004)  
	int32_t                                            MeasurementsLeft;                                           // 0x008C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_StartProfilingTimer
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
struct FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_ProjectTransformToNewParent
/// Size: 0x00C8 (200 bytes) (0x000008 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_ProjectTransformToNewParent : FRigUnit
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x0010)  
	bool                                               bChildInitial;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FRigElementKey                                     OldParent;                                                  // 0x001C   (0x0010)  
	bool                                               bOldParentInitial;                                          // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	FRigElementKey                                     NewParent;                                                  // 0x0030   (0x0010)  
	bool                                               bNewParentInitial;                                          // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0041   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0050   (0x0030)  
	FCachedRigElement                                  CachedChild;                                                // 0x0080   (0x0018)  
	FCachedRigElement                                  CachedOldParent;                                            // 0x0098   (0x0018)  
	FCachedRigElement                                  CachedNewParent;                                            // 0x00B0   (0x0018)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PropagateTransform
/// Size: 0x0030 (48 bytes) (0x000070 - 0x0000A0) align 8 pad: 0x0000
struct FRigUnit_PropagateTransform : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0070   (0x0010)  
	bool                                               bRecomputeGlobal;                                           // 0x0080   (0x0001)  
	bool                                               bApplyToChildren;                                           // 0x0081   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0082   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0083   (0x0001)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0084   (0x0018)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAngle
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_QuaternionToAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Argument;                                                   // 0x0020   (0x0010)  
	float                                              Angle;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x000C)  
	float                                              Angle;                                                      // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0010)  
	FVector                                            Axis;                                                       // 0x0020   (0x000C)  
	float                                              Angle;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_UnaryQuaternionOp
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_UnaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0010)  
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_InverseQuaterion
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_BinaryQuaternionOp
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_BinaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument0;                                                  // 0x0010   (0x0010)  
	FQuat                                              Argument1;                                                  // 0x0020   (0x0010)  
	FQuat                                              Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MultiplyQuaternion
/// Size: 0x0000 (0 bytes) (0x000040 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_RandomVector
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FRigUnit_RandomVector : FRigUnit_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Duration;                                                   // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	FVector                                            LastResult;                                                 // 0x0024   (0x000C)  
	int32_t                                            LastSeed;                                                   // 0x0030   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0034   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_RandomFloat
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_RandomFloat : FRigUnit_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Duration;                                                   // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              LastResult;                                                 // 0x001C   (0x0004)  
	int32_t                                            LastSeed;                                                   // 0x0020   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0024   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SendEvent
/// Size: 0x0020 (32 bytes) (0x000070 - 0x000090) align 8 pad: 0x0000
struct FRigUnit_SendEvent : FRigUnitMutable
{ 
	ERigEvent                                          Event;                                                      // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	FRigElementKey                                     Item;                                                       // 0x0074   (0x0010)  
	float                                              OffsetInSeconds;                                            // 0x0084   (0x0004)  
	bool                                               bEnable;                                                    // 0x0088   (0x0001)  
	bool                                               bOnlyDuringInteraction;                                     // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x008A   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SequenceExecution
/// Size: 0x0208 (520 bytes) (0x000008 - 0x000210) align 8 pad: 0x0000
struct FRigUnit_SequenceExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0068)  
	FControlRigExecuteContext                          A;                                                          // 0x0070   (0x0068)  
	FControlRigExecuteContext                          B;                                                          // 0x00D8   (0x0068)  
	FControlRigExecuteContext                          C;                                                          // 0x0140   (0x0068)  
	FControlRigExecuteContext                          D;                                                          // 0x01A8   (0x0068)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneInitialTransform
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000100) align 16 pad: 0x0000
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	FTransform                                         Result;                                                     // 0x00B0   (0x0030)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00E0   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00E2   (0x0002)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00E4   (0x0018)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneRotation
/// Size: 0x0050 (80 bytes) (0x000070 - 0x0000C0) align 16 pad: 0x0000
struct FRigUnit_SetBoneRotation : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FQuat                                              Rotation;                                                   // 0x0080   (0x0010)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0094   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0098   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x009C   (0x0018)  
	unsigned char                                      UnknownData03_7[0xC];                                       // 0x00B4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTransform
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x000110) align 16 pad: 0x0000
struct FRigUnit_SetBoneTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	FTransform                                         Result;                                                     // 0x00B0   (0x0030)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00E1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x00E4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00EC   (0x0018)  
	unsigned char                                      UnknownData03_7[0xC];                                       // 0x0104   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTranslation
/// Size: 0x0040 (64 bytes) (0x000070 - 0x0000B0) align 8 pad: 0x0000
struct FRigUnit_SetBoneTranslation : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0070   (0x000C)  
	FVector                                            Translation;                                                // 0x007C   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x008C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0094   (0x0018)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlColor
/// Size: 0x0038 (56 bytes) (0x000070 - 0x0000A8) align 8 pad: 0x0000
struct FRigUnit_SetControlColor : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0070   (0x000C)  
	FLinearColor                                       Color;                                                      // 0x007C   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x008C   (0x0018)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlOffset
/// Size: 0x0060 (96 bytes) (0x000070 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_SetControlOffset : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Offset;                                                     // 0x0080   (0x0030)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x00B4   (0x0018)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlTransform
/// Size: 0x0060 (96 bytes) (0x000070 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_SetControlTransform : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0070   (0x000C)  
	float                                              Weight;                                                     // 0x007C   (0x0004)  
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x00B4   (0x0018)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FRigUnit_SetMultiControlRotator_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x000C)  
	FRotator                                           Rotator;                                                    // 0x000C   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator
/// Size: 0x0028 (40 bytes) (0x000070 - 0x000098) align 8 pad: 0x0000
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlRotator_Entry>      Entries;                                                    // 0x0070   (0x0010)  
	float                                              Weight;                                                     // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlRotator
/// Size: 0x0038 (56 bytes) (0x000070 - 0x0000A8) align 8 pad: 0x0000
struct FRigUnit_SetControlRotator : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0070   (0x000C)  
	float                                              Weight;                                                     // 0x007C   (0x0004)  
	FRotator                                           Rotator;                                                    // 0x0080   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0090   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector
/// Size: 0x0038 (56 bytes) (0x000070 - 0x0000A8) align 8 pad: 0x0000
struct FRigUnit_SetControlVector : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0070   (0x000C)  
	float                                              Weight;                                                     // 0x007C   (0x0004)  
	FVector                                            Vector;                                                     // 0x0080   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0090   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FRigUnit_SetMultiControlVector2D_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x000C)  
	FVector2D                                          Vector;                                                     // 0x000C   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D
/// Size: 0x0028 (40 bytes) (0x000070 - 0x000098) align 8 pad: 0x0000
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlVector2D_Entry>     Entries;                                                    // 0x0070   (0x0010)  
	float                                              Weight;                                                     // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector2D
/// Size: 0x0030 (48 bytes) (0x000070 - 0x0000A0) align 8 pad: 0x0000
struct FRigUnit_SetControlVector2D : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0070   (0x000C)  
	float                                              Weight;                                                     // 0x007C   (0x0004)  
	FVector2D                                          Vector;                                                     // 0x0080   (0x0008)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0088   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FRigUnit_SetMultiControlInteger_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x000C)  
	int32_t                                            IntegerValue;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger
/// Size: 0x0028 (40 bytes) (0x000070 - 0x000098) align 8 pad: 0x0000
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlInteger_Entry>      Entries;                                                    // 0x0070   (0x0010)  
	float                                              Weight;                                                     // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlInteger
/// Size: 0x0030 (48 bytes) (0x000070 - 0x0000A0) align 8 pad: 0x0000
struct FRigUnit_SetControlInteger : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0070   (0x000C)  
	int32_t                                            Weight;                                                     // 0x007C   (0x0004)  
	int32_t                                            IntegerValue;                                               // 0x0080   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0084   (0x0018)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FRigUnit_SetMultiControlFloat_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x000C)  
	float                                              FloatValue;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat
/// Size: 0x0028 (40 bytes) (0x000070 - 0x000098) align 8 pad: 0x0000
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlFloat_Entry>        Entries;                                                    // 0x0070   (0x0010)  
	float                                              Weight;                                                     // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlFloat
/// Size: 0x0030 (48 bytes) (0x000070 - 0x0000A0) align 8 pad: 0x0000
struct FRigUnit_SetControlFloat : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0070   (0x000C)  
	float                                              Weight;                                                     // 0x007C   (0x0004)  
	float                                              FloatValue;                                                 // 0x0080   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0084   (0x0018)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool_Entry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FRigUnit_SetMultiControlBool_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x000C)  
	bool                                               BoolValue;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool
/// Size: 0x0020 (32 bytes) (0x000070 - 0x000090) align 8 pad: 0x0000
struct FRigUnit_SetMultiControlBool : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlBool_Entry>         Entries;                                                    // 0x0070   (0x0010)  
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlBool
/// Size: 0x0028 (40 bytes) (0x000070 - 0x000098) align 8 pad: 0x0000
struct FRigUnit_SetControlBool : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0070   (0x000C)  
	bool                                               BoolValue;                                                  // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0080   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVisibility
/// Size: 0x0038 (56 bytes) (0x000070 - 0x0000A8) align 8 pad: 0x0000
struct FRigUnit_SetControlVisibility : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0070   (0x0010)  
	FString                                            Pattern;                                                    // 0x0080   (0x0010)  
	bool                                               bVisible;                                                   // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0098   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetCurveValue
/// Size: 0x0028 (40 bytes) (0x000070 - 0x000098) align 8 pad: 0x0000
struct FRigUnit_SetCurveValue : FRigUnitMutable
{ 
	FName                                              Curve;                                                      // 0x0070   (0x000C)  
	float                                              Value;                                                      // 0x007C   (0x0004)  
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0080   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000100) align 16 pad: 0x0000
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0070   (0x000C)  
	FName                                              Space;                                                      // 0x007C   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0088   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0090   (0x0030)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00C8   (0x0018)  
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00E0   (0x0018)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTransformForItem
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x000110) align 16 pad: 0x0000
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0070   (0x0010)  
	FRigElementKey                                     Parent;                                                     // 0x0080   (0x0010)  
	bool                                               bParentInitial;                                             // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0091   (0x000F)  MISSED
	FTransform                                         RelativeTransform;                                          // 0x00A0   (0x0030)  
	float                                              Weight;                                                     // 0x00D0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
	FCachedRigElement                                  CachedChild;                                                // 0x00D8   (0x0018)  
	FCachedRigElement                                  CachedParent;                                               // 0x00F0   (0x0018)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceInitialTransform
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000100) align 16 pad: 0x0000
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable
{ 
	FName                                              SpaceName;                                                  // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	FTransform                                         Result;                                                     // 0x00B0   (0x0030)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00E1   (0x0003)  MISSED
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00E4   (0x0018)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceTransform
/// Size: 0x0060 (96 bytes) (0x000070 - 0x0000D0) align 16 pad: 0x0000
struct FRigUnit_SetSpaceTransform : FRigUnitMutable
{ 
	FName                                              Space;                                                      // 0x0070   (0x000C)  
	float                                              Weight;                                                     // 0x007C   (0x0004)  
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	EBoneGetterSetterMode                              SpaceType;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00B4   (0x0018)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetScale
/// Size: 0x0040 (64 bytes) (0x000070 - 0x0000B0) align 8 pad: 0x0000
struct FRigUnit_SetScale : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0070   (0x0010)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	FVector                                            Scale;                                                      // 0x0084   (0x000C)  
	float                                              Weight;                                                     // 0x0090   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0098   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetRotation
/// Size: 0x0050 (80 bytes) (0x000070 - 0x0000C0) align 16 pad: 0x0000
struct FRigUnit_SetRotation : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0070   (0x0010)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0081   (0x000F)  MISSED
	FQuat                                              Rotation;                                                   // 0x0090   (0x0010)  
	float                                              Weight;                                                     // 0x00A0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00A5   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x00A8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetTranslation
/// Size: 0x0040 (64 bytes) (0x000070 - 0x0000B0) align 8 pad: 0x0000
struct FRigUnit_SetTranslation : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0070   (0x0010)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	FVector                                            Translation;                                                // 0x0084   (0x000C)  
	float                                              Weight;                                                     // 0x0090   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0098   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetTransform
/// Size: 0x0070 (112 bytes) (0x000070 - 0x0000E0) align 16 pad: 0x0000
struct FRigUnit_SetTransform : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0070   (0x0010)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0080   (0x0001)  
	bool                                               bInitial;                                                   // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0082   (0x000E)  MISSED
	FTransform                                         Transform;                                                  // 0x0090   (0x0030)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x00C8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChain_WorkData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FRigUnit_SlideChain_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      ItemSegments;                                               // 0x0008   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0018   (0x0010)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)  
	TArray<FTransform>                                 BlendedTransforms;                                          // 0x0038   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChainPerItem
/// Size: 0x0060 (96 bytes) (0x000070 - 0x0000D0) align 8 pad: 0x0000
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0070   (0x0010)  
	float                                              SlideAmount;                                                // 0x0080   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0088   (0x0048)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChain
/// Size: 0x0068 (104 bytes) (0x000070 - 0x0000D8) align 8 pad: 0x0000
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0070   (0x000C)  
	FName                                              EndBone;                                                    // 0x007C   (0x000C)  
	float                                              SlideAmount;                                                // 0x0088   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0090   (0x0048)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_DebugSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 pad: 0x0000
struct FRigUnit_SpringIK_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_WorkData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 pad: 0x0000
struct FRigUnit_SpringIK_WorkData
{ 
	TArray<FCachedRigElement>                          BoneIndices;                                                // 0x0000   (0x0010)  
	FCachedRigElement                                  CachedPoleVector;                                           // 0x0010   (0x0018)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)  
	FCRSimPointContainer                               Simulation;                                                 // 0x0038   (0x0078)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK
/// Size: 0x0170 (368 bytes) (0x000070 - 0x0001E0) align 16 pad: 0x0000
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0070   (0x000C)  
	FName                                              EndBone;                                                    // 0x007C   (0x000C)  
	float                                              HierarchyStrength;                                          // 0x0088   (0x0004)  
	float                                              EffectorStrength;                                           // 0x008C   (0x0004)  
	float                                              EffectorRatio;                                              // 0x0090   (0x0004)  
	float                                              RootStrength;                                               // 0x0094   (0x0004)  
	float                                              RootRatio;                                                  // 0x0098   (0x0004)  
	float                                              Damping;                                                    // 0x009C   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x00A0   (0x000C)  
	bool                                               bFlipPolePlane;                                             // 0x00AC   (0x0001)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AE   (0x0002)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x00B0   (0x000C)  
	FVector                                            PrimaryAxis;                                                // 0x00BC   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00C8   (0x000C)  
	bool                                               bLiveSimulation;                                            // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x00D8   (0x0004)  
	bool                                               bLimitLocalPosition;                                        // 0x00DC   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00DD   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00DE   (0x0002)  MISSED
	FRigUnit_SpringIK_DebugSettings                    DebugSettings;                                              // 0x00E0   (0x0050)  
	FRigUnit_SpringIK_WorkData                         WorkData;                                                   // 0x0130   (0x00B0)  
};

/// Struct /Script/ControlRig.RigUnit_SecondsToFrames
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_SecondsToFrames : FRigUnit_AnimBase
{ 
	float                                              Seconds;                                                    // 0x0008   (0x0004)  
	float                                              Frames;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_FramesToSeconds
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FRigUnit_FramesToSeconds : FRigUnit_AnimBase
{ 
	float                                              Frames;                                                     // 0x0008   (0x0004)  
	float                                              Seconds;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_Timeline
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000018) align 8 pad: 0x0000
struct FRigUnit_Timeline : FRigUnit_SimBase
{ 
	float                                              Speed;                                                      // 0x0008   (0x0004)  
	float                                              Time;                                                       // 0x000C   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetTransform
/// Size: 0x00A8 (168 bytes) (0x000008 - 0x0000B0) align 16 pad: 0x0000
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	float                                              SecondsAgo;                                                 // 0x0040   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0044   (0x0004)  
	float                                              TimeRange;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0050   (0x0030)  
	TArray<FTransform>                                 Buffer;                                                     // 0x0080   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0090   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x00A0   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetVector
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000058) align 8 pad: 0x0000
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              SecondsAgo;                                                 // 0x0014   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0018   (0x0004)  
	float                                              TimeRange;                                                  // 0x001C   (0x0004)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FVector>                                    Buffer;                                                     // 0x0030   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0040   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0050   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0054   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetFloat
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000048) align 8 pad: 0x0000
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SecondsAgo;                                                 // 0x000C   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0010   (0x0004)  
	float                                              TimeRange;                                                  // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0020   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0030   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0040   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0044   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryTransformOp
/// Size: 0x0098 (152 bytes) (0x000008 - 0x0000A0) align 16 pad: 0x0000
struct FRigUnit_BinaryTransformOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Argument0;                                                  // 0x0010   (0x0030)  
	FTransform                                         Argument1;                                                  // 0x0040   (0x0030)  
	FTransform                                         Result;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransform
/// Size: 0x0000 (0 bytes) (0x0000A0 - 0x0000A0) align 16 pad: 0x0000
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MultiplyTransform
/// Size: 0x0000 (0 bytes) (0x0000A0 - 0x0000A0) align 16 pad: 0x0000
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.ConstraintTarget
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FConstraintTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	float                                              Weight;                                                     // 0x0030   (0x0004)  
	bool                                               bMaintainOffset;                                            // 0x0034   (0x0001)  
	FTransformFilter                                   Filter;                                                     // 0x0035   (0x0009)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint_WorkData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FRigUnit_TransformConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,1358) /* TMap<int32_t, int32_t> */ __um(ConstraintDataToTargets);                             // 0x0010   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraintPerItem
/// Size: 0x00E0 (224 bytes) (0x000070 - 0x000150) align 16 pad: 0x0000
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0070   (0x0010)  
	ETransformSpaceMode                                BaseTransformSpace;                                         // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0081   (0x000F)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0090   (0x0030)  
	FRigElementKey                                     BaseItem;                                                   // 0x00C0   (0x0010)  
	TArray<FConstraintTarget>                          Targets;                                                    // 0x00D0   (0x0010)  
	bool                                               bUseInitialTransforms;                                      // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x00E8   (0x0060)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint
/// Size: 0x00D0 (208 bytes) (0x000070 - 0x000140) align 16 pad: 0x0000
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              Bone;                                                       // 0x0070   (0x000C)  
	ETransformSpaceMode                                BaseTransformSpace;                                         // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0080   (0x0030)  
	FName                                              BaseBone;                                                   // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<FConstraintTarget>                          Targets;                                                    // 0x00C0   (0x0010)  
	bool                                               bUseInitialTransforms;                                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x00D8   (0x0060)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwistBones_WorkData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_TwistBones_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	TArray<float>                                      ItemRatios;                                                 // 0x0010   (0x0010)  
	TArray<FTransform>                                 ItemTransforms;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBonesPerItem
/// Size: 0x0068 (104 bytes) (0x000070 - 0x0000D8) align 8 pad: 0x0000
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0070   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0080   (0x000C)  
	FVector                                            PoleAxis;                                                   // 0x008C   (0x000C)  
	EControlRigAnimEasingType                          TwistEaseType;                                              // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x009C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x00A8   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBones
/// Size: 0x0070 (112 bytes) (0x000070 - 0x0000E0) align 8 pad: 0x0000
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0070   (0x000C)  
	FName                                              EndBone;                                                    // 0x007C   (0x000C)  
	FVector                                            TwistAxis;                                                  // 0x0088   (0x000C)  
	FVector                                            PoleAxis;                                                   // 0x0094   (0x000C)  
	EControlRigAnimEasingType                          TwistEaseType;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x00A4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKFK
/// Size: 0x01C0 (448 bytes) (0x000070 - 0x000230) align 16 pad: 0x0000
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable
{ 
	FName                                              StartJoint;                                                 // 0x0070   (0x000C)  
	FName                                              EndJoint;                                                   // 0x007C   (0x000C)  
	FVector                                            PoleTarget;                                                 // 0x0088   (0x000C)  
	float                                              Spin;                                                       // 0x0094   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0098   (0x0008)  MISSED
	FTransform                                         EndEffector;                                                // 0x00A0   (0x0030)  
	float                                              IKBlend;                                                    // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FTransform                                         StartJointFKTransform;                                      // 0x00E0   (0x0030)  
	FTransform                                         MidJointFKTransform;                                        // 0x0110   (0x0030)  
	FTransform                                         EndJointFKTransform;                                        // 0x0140   (0x0030)  
	float                                              PreviousFKIKBlend;                                          // 0x0170   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0174   (0x000C)  MISSED
	FTransform                                         StartJointIKTransform;                                      // 0x0180   (0x0030)  
	FTransform                                         MidJointIKTransform;                                        // 0x01B0   (0x0030)  
	FTransform                                         EndJointIKTransform;                                        // 0x01E0   (0x0030)  
	int32_t                                            StartJointIndex;                                            // 0x0210   (0x0004)  
	int32_t                                            MidJointIndex;                                              // 0x0214   (0x0004)  
	int32_t                                            EndJointIndex;                                              // 0x0218   (0x0004)  
	float                                              UpperLimbLength;                                            // 0x021C   (0x0004)  
	float                                              LowerLimbLength;                                            // 0x0220   (0x0004)  
	unsigned char                                      UnknownData03_7[0xC];                                       // 0x0224   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
/// Size: 0x00D8 (216 bytes) (0x000008 - 0x0000E0) align 16 pad: 0x0000
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Root;                                                       // 0x0010   (0x0030)  
	FVector                                            PoleVector;                                                 // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Effector;                                                   // 0x0050   (0x0030)  
	FVector                                            PrimaryAxis;                                                // 0x0080   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x008C   (0x000C)  
	float                                              SecondaryAxisWeight;                                        // 0x0098   (0x0004)  
	bool                                               bEnableStretch;                                             // 0x009C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x009D   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x00A0   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x00A4   (0x0004)  
	float                                              BoneALength;                                                // 0x00A8   (0x0004)  
	float                                              BoneBLength;                                                // 0x00AC   (0x0004)  
	FTransform                                         Elbow;                                                      // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000050) align 8 pad: 0x0000
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
{ 
	FVector                                            Root;                                                       // 0x0008   (0x000C)  
	FVector                                            PoleVector;                                                 // 0x0014   (0x000C)  
	FVector                                            Effector;                                                   // 0x0020   (0x000C)  
	bool                                               bEnableStretch;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0030   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0034   (0x0004)  
	float                                              BoneALength;                                                // 0x0038   (0x0004)  
	float                                              BoneBLength;                                                // 0x003C   (0x0004)  
	FVector                                            Elbow;                                                      // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
/// Size: 0x0160 (352 bytes) (0x000070 - 0x0001D0) align 16 pad: 0x0000
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     ItemA;                                                      // 0x0070   (0x0010)  
	FRigElementKey                                     ItemB;                                                      // 0x0080   (0x0010)  
	FRigElementKey                                     EffectorItem;                                               // 0x0090   (0x0010)  
	FTransform                                         Effector;                                                   // 0x00A0   (0x0030)  
	FVector                                            PrimaryAxis;                                                // 0x00D0   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00DC   (0x000C)  
	float                                              SecondaryAxisWeight;                                        // 0x00E8   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x00EC   (0x000C)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	FRigElementKey                                     PoleVectorSpace;                                            // 0x00FC   (0x0010)  
	bool                                               bEnableStretch;                                             // 0x010C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0110   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0114   (0x0004)  
	float                                              Weight;                                                     // 0x0118   (0x0004)  
	float                                              ItemALength;                                                // 0x011C   (0x0004)  
	float                                              ItemBLength;                                                // 0x0120   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0124   (0x0001)  
	unsigned char                                      UnknownData02_6[0xB];                                       // 0x0125   (0x000B)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x0130   (0x0040)  
	FCachedRigElement                                  CachedItemAIndex;                                           // 0x0170   (0x0018)  
	FCachedRigElement                                  CachedItemBIndex;                                           // 0x0188   (0x0018)  
	FCachedRigElement                                  CachedEffectorItemIndex;                                    // 0x01A0   (0x0018)  
	FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x01B8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple
/// Size: 0x0160 (352 bytes) (0x000070 - 0x0001D0) align 16 pad: 0x0000
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              BoneA;                                                      // 0x0070   (0x000C)  
	FName                                              BoneB;                                                      // 0x007C   (0x000C)  
	FName                                              EffectorBone;                                               // 0x0088   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0094   (0x000C)  MISSED
	FTransform                                         Effector;                                                   // 0x00A0   (0x0030)  
	FVector                                            PrimaryAxis;                                                // 0x00D0   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00DC   (0x000C)  
	float                                              SecondaryAxisWeight;                                        // 0x00E8   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x00EC   (0x000C)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x00FC   (0x000C)  
	bool                                               bEnableStretch;                                             // 0x0108   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0109   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x010C   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0110   (0x0004)  
	float                                              Weight;                                                     // 0x0114   (0x0004)  
	float                                              BoneALength;                                                // 0x0118   (0x0004)  
	float                                              BoneBLength;                                                // 0x011C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0120   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0121   (0x000F)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x0130   (0x0040)  
	FCachedRigElement                                  CachedBoneAIndex;                                           // 0x0170   (0x0018)  
	FCachedRigElement                                  CachedBoneBIndex;                                           // 0x0188   (0x0018)  
	FCachedRigElement                                  CachedEffectorBoneIndex;                                    // 0x01A0   (0x0018)  
	FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x01B8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_Distance_VectorVector
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FRigUnit_Distance_VectorVector : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x000C)  
	FVector                                            Argument1;                                                  // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BinaryVectorOp
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_BinaryVectorOp : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x000C)  
	FVector                                            Argument1;                                                  // 0x0014   (0x000C)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Divide_VectorVector
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_VectorVector
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_VectorVector
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Multiply_VectorVector
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_VerletIntegrateVector
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 8 pad: 0x0000
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase
{ 
	FVector                                            Target;                                                     // 0x0008   (0x000C)  
	float                                              Strength;                                                   // 0x0014   (0x0004)  
	float                                              Damp;                                                       // 0x0018   (0x0004)  
	float                                              Blend;                                                      // 0x001C   (0x0004)  
	FVector                                            Position;                                                   // 0x0020   (0x000C)  
	FVector                                            Velocity;                                                   // 0x002C   (0x000C)  
	FVector                                            Acceleration;                                               // 0x0038   (0x000C)  
	FCRSimPoint                                        Point;                                                      // 0x0044   (0x0028)  
	bool                                               bInitialized;                                               // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000060) align 16 pad: 0x0000
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0044   (0x0004)  
	float                                              Scale;                                                      // 0x0048   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x004C   (0x0010)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransform
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000060) align 16 pad: 0x0000
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0044   (0x0004)  
	float                                              Scale;                                                      // 0x0048   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x004C   (0x000C)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuatItemSpace
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0024   (0x0004)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x002C   (0x0010)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuat
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 16 pad: 0x0000
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0024   (0x0004)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x002C   (0x000C)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVectorItemSpace
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 8 pad: 0x0000
struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	bool                                               bEnabled;                                                   // 0x0014   (0x0001)  
	ERigUnitVisualDebugPointMode                       Mode;                                                       // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0018   (0x0010)  
	float                                              Thickness;                                                  // 0x0028   (0x0004)  
	float                                              Scale;                                                      // 0x002C   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVector
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000040) align 8 pad: 0x0000
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	bool                                               bEnabled;                                                   // 0x0014   (0x0001)  
	ERigUnitVisualDebugPointMode                       Mode;                                                       // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0018   (0x0010)  
	float                                              Thickness;                                                  // 0x0028   (0x0004)  
	float                                              Scale;                                                      // 0x002C   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceWorld
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000048) align 8 pad: 0x0000
struct FRigUnit_SphereTraceWorld : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x000C)  
	FVector                                            End;                                                        // 0x0014   (0x000C)  
	TEnumAsByte<ECollisionChannel>                     Channel;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x0024   (0x0004)  
	bool                                               bHit;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FVector                                            HitLocation;                                                // 0x002C   (0x000C)  
	FVector                                            HitNormal;                                                  // 0x0038   (0x000C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Rotation
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_ToRigSpace_Rotation : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0010   (0x0010)  
	FQuat                                              Global;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 16 pad: 0x0000
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0010   (0x0010)  
	FQuat                                              World;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Location
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_ToRigSpace_Location : FRigUnit
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Global;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Location
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000020) align 8 pad: 0x0000
struct FRigUnit_ToWorldSpace_Location : FRigUnit
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            World;                                                      // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Transform
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 16 pad: 0x0000
struct FRigUnit_ToRigSpace_Transform : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FTransform                                         Global;                                                     // 0x0040   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Transform
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000070) align 16 pad: 0x0000
struct FRigUnit_ToWorldSpace_Transform : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FTransform                                         World;                                                      // 0x0040   (0x0030)  
};

/// Struct /Script/ControlRig.StructReference
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FStructReference
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

