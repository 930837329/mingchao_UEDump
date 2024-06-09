
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

/// Enum /Script/KawaiiPhysics.EPhyCollisionShape
/// Size: 0x01 (1 bytes)
enum class EPhyCollisionShape : uint8_t
{
	EPhyCollisionShape__Spherical                                                    = 0,
	EPhyCollisionShape__Planar                                                       = 1
};

/// Enum /Script/KawaiiPhysics.ECollisionLimitType
/// Size: 0x01 (1 bytes)
enum class ECollisionLimitType : uint8_t
{
	ECollisionLimitType__None                                                        = 0,
	ECollisionLimitType__Spherical                                                   = 1,
	ECollisionLimitType__Capsule                                                     = 2,
	ECollisionLimitType__Planar                                                      = 3
};

/// Enum /Script/KawaiiPhysics.EBoneForwardAxis
/// Size: 0x01 (1 bytes)
enum class EBoneForwardAxis : uint8_t
{
	EBoneForwardAxis__X_Positive                                                     = 0,
	EBoneForwardAxis__X_Negative                                                     = 1,
	EBoneForwardAxis__Y_Positive                                                     = 2,
	EBoneForwardAxis__Y_Negative                                                     = 3,
	EBoneForwardAxis__Z_Positive                                                     = 4,
	EBoneForwardAxis__Z_Negative                                                     = 5
};

/// Enum /Script/KawaiiPhysics.EPlanarConstraint
/// Size: 0x01 (1 bytes)
enum class EPlanarConstraint : uint8_t
{
	EPlanarConstraint__None                                                          = 0,
	EPlanarConstraint__X                                                             = 1,
	EPlanarConstraint__Y                                                             = 2,
	EPlanarConstraint__Z                                                             = 3
};

/// Struct /Script/KawaiiPhysics.CollisionLimitBase
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 pad: 0x0000
struct FCollisionLimitBase
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0014)  
	FVector                                            OffsetLocation;                                             // 0x0014   (0x000C)  
	FRotator                                           OffsetRotation;                                             // 0x0020   (0x000C)  
	FVector                                            Location;                                                   // 0x002C   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0040   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.SphericalLimit
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 16 pad: 0x0000
struct FSphericalLimit : FCollisionLimitBase
{ 
	float                                              Radius;                                                     // 0x0050   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0055   (0x000B)  MISSED
};

/// Struct /Script/KawaiiPhysics.CapsuleLimit
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 16 pad: 0x0000
struct FCapsuleLimit : FCollisionLimitBase
{ 
	float                                              Radius;                                                     // 0x0050   (0x0004)  
	float                                              Length;                                                     // 0x0054   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/KawaiiPhysics.PlanarLimit
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 16 pad: 0x0000
struct FPlanarLimit : FCollisionLimitBase
{ 
	FPlane                                             Plane;                                                      // 0x0050   (0x0010)  
};

/// Class /Script/KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
/// Size: 0x0030 (48 bytes) (0x000038 - 0x000068) align 8 pad: 0x0000
class UKawaiiPhysicsLimitsDataAsset : public UDataAsset
{ 
public:
	TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x0038   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x0048   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x0058   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FKawaiiPhysicsSettings
{ 
	float                                              Damping;                                                    // 0x0000   (0x0004)  
	float                                              WorldDampingLocation;                                       // 0x0004   (0x0004)  
	float                                              WorldDampingRotation;                                       // 0x0008   (0x0004)  
	float                                              Stiffness;                                                  // 0x000C   (0x0004)  
	float                                              Radius;                                                     // 0x0010   (0x0004)  
	float                                              LimitAngle;                                                 // 0x0014   (0x0004)  
	float                                              HalfWidth;                                                  // 0x0018   (0x0004)  
	EPhyCollisionShape                                 Shape;                                                      // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsModifyBone
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 pad: 0x0000
struct FKawaiiPhysicsModifyBone
{ 
	FBoneReference                                     BoneRef;                                                    // 0x0000   (0x0014)  
	int32_t                                            ParentIndex;                                                // 0x0014   (0x0004)  
	TArray<int32_t>                                    ChildIndexs;                                                // 0x0018   (0x0010)  
	FKawaiiPhysicsSettings                             PhysicsSettings;                                            // 0x0028   (0x0020)  
	FVector                                            Location;                                                   // 0x0048   (0x000C)  
	FVector                                            PrevLocation;                                               // 0x0054   (0x000C)  
	FQuat                                              PrevRotation;                                               // 0x0060   (0x0010)  
	FVector                                            PoseLocation;                                               // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FQuat                                              PoseRotation;                                               // 0x0080   (0x0010)  
	FVector                                            PoseScale;                                                  // 0x0090   (0x000C)  
	float                                              LengthFromRoot;                                             // 0x009C   (0x0004)  
	bool                                               bDummy;                                                     // 0x00A0   (0x0001)  
	bool                                               IgnoreMechanics;                                            // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData01_7[0xE];                                       // 0x00A2   (0x000E)  MISSED
};

/// Struct /Script/KawaiiPhysics.AnimNode_KawaiiPhysicsBase
/// Size: 0x0190 (400 bytes) (0x0000D0 - 0x000260) align 16 pad: 0x0008
#pragma pack(push, 0x1)
struct FAnimNode_KawaiiPhysicsBase : FAnimNode_SkeletalControlBase
{ 
	TArray<FBoneReference>                             ExcludeBones;                                               // 0x00D0   (0x0010)  
	int32_t                                            TargetFramerate;                                            // 0x00E0   (0x0004)  
	bool                                               OverrideTargetFramerate;                                    // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E5   (0x0003)  MISSED
	int32_t                                            IgnoreMechanicsLevel;                                       // 0x00E8   (0x0004)  
	FKawaiiPhysicsSettings                             PhysicsSettings;                                            // 0x00EC   (0x0020)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	class UCurveFloat*                                 DampingCurve;                                               // 0x0110   (0x0008)  
	class UCurveFloat*                                 WorldDampingLocationCurve;                                  // 0x0118   (0x0008)  
	class UCurveFloat*                                 WorldDampingRotationCurve;                                  // 0x0120   (0x0008)  
	class UCurveFloat*                                 StiffnessCurve;                                             // 0x0128   (0x0008)  
	class UCurveFloat*                                 RadiusCurve;                                                // 0x0130   (0x0008)  
	class UCurveFloat*                                 HalfWidthCurve;                                             // 0x0138   (0x0008)  
	class UCurveFloat*                                 LimitAngleCurve;                                            // 0x0140   (0x0008)  
	bool                                               bUpdatePhysicsSettingsInGame;                               // 0x0148   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0149   (0x0003)  MISSED
	float                                              DummyBoneLength;                                            // 0x014C   (0x0004)  
	EBoneForwardAxis                                   BoneForwardAxis;                                            // 0x0150   (0x0001)  
	EPlanarConstraint                                  PlanarConstraint;                                           // 0x0151   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0152   (0x0006)  MISSED
	TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x0158   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x0168   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x0178   (0x0010)  
	class UKawaiiPhysicsLimitsDataAsset*               LimitsDataAsset;                                            // 0x0188   (0x0008)  
	TArray<FSphericalLimit>                            SphericalLimitsData;                                        // 0x0190   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimitsData;                                          // 0x01A0   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimitsData;                                           // 0x01B0   (0x0010)  
	float                                              TeleportDistanceThreshold;                                  // 0x01C0   (0x0004)  
	float                                              TeleportRotationThreshold;                                  // 0x01C4   (0x0004)  
	FVector                                            Gravity;                                                    // 0x01C8   (0x000C)  
	bool                                               bEnableWind;                                                // 0x01D4   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x01D5   (0x0003)  MISSED
	float                                              WindScale;                                                  // 0x01D8   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x01DC   (0x0004)  MISSED
	TArray<FKawaiiPhysicsModifyBone>                   ModifyBones;                                                // 0x01E0   (0x0010)  
	bool                                               bEnableSimulate;                                            // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x01F1   (0x0003)  MISSED
	float                                              AlphaScale;                                                 // 0x01F4   (0x0004)  
	float                                              TotalBoneLength;                                            // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x01FC   (0x0004)  MISSED
	FTransform                                         PreSkelCompTransform;                                       // 0x0200   (0x0030)  
	bool                                               bInitPhysicsSettings;                                       // 0x0230   (0x0001)  
	unsigned char                                      UnknownData08_7[0x27];                                      // 0x0231   (0x0027)  MISSED
};
#pragma pack(pop)

/// Struct /Script/KawaiiPhysics.AnimNode_KawaiiPhysics
/// Size: 0x0018 (24 bytes) (0x000258 - 0x000270) align 16 pad: 0x0000
struct FAnimNode_KawaiiPhysics : FAnimNode_KawaiiPhysicsBase
{ 
	FBoneReference                                     RootBone;                                                   // 0x0258   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x026C   (0x0004)  MISSED
};

/// Struct /Script/KawaiiPhysics.AnimNode_KawaiiPhysicsGroup
/// Size: 0x0018 (24 bytes) (0x000258 - 0x000270) align 16 pad: 0x0000
struct FAnimNode_KawaiiPhysicsGroup : FAnimNode_KawaiiPhysicsBase
{ 
	TArray<FBoneReference>                             RootBones;                                                  // 0x0258   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0268   (0x0008)  MISSED
};

/// Struct /Script/KawaiiPhysics.CollisionLimitDataBase
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 pad: 0x0000
struct FCollisionLimitDataBase
{ 
	FName                                              DrivingBoneName;                                            // 0x0000   (0x000C)  
	FVector                                            OffsetLocation;                                             // 0x000C   (0x000C)  
	FRotator                                           OffsetRotation;                                             // 0x0018   (0x000C)  
	FVector                                            Location;                                                   // 0x0024   (0x000C)  
	FQuat                                              Rotation;                                                   // 0x0030   (0x0010)  
	FGuid                                              Guid;                                                       // 0x0040   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.PlanarLimitData
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 16 pad: 0x0000
struct FPlanarLimitData : FCollisionLimitDataBase
{ 
	FPlane                                             Plane;                                                      // 0x0050   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.CapsuleLimitData
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 16 pad: 0x0000
struct FCapsuleLimitData : FCollisionLimitDataBase
{ 
	float                                              Radius;                                                     // 0x0050   (0x0004)  
	float                                              Length;                                                     // 0x0054   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/KawaiiPhysics.SphericalLimitData
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 16 pad: 0x0000
struct FSphericalLimitData : FCollisionLimitDataBase
{ 
	float                                              Radius;                                                     // 0x0050   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0055   (0x000B)  MISSED
};

