
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/ChaosCloth.EChaosClothTetherMode
/// Size: 0x01 (1 bytes)
enum class EChaosClothTetherMode : uint8_t
{
	EChaosClothTetherMode__FastTetherFastLength                                      = 0,
	EChaosClothTetherMode__AccurateTetherFastLength                                  = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength                              = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode                                   = 3
};

/// Enum /Script/ChaosCloth.EChaosWeightMapTarget
/// Size: 0x01 (1 bytes)
enum class EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None                                                      = 0,
	EChaosWeightMapTarget__MaxDistance                                               = 1,
	EChaosWeightMapTarget__BackstopDistance                                          = 2,
	EChaosWeightMapTarget__BackstopRadius                                            = 3,
	EChaosWeightMapTarget__AnimDriveMultiplier                                       = 4
};

/// Class /Script/ChaosCloth.ChaosClothConfig
/// Size: 0x0088 (136 bytes) (0x000030 - 0x0000B8) align 8 pad: 0x0000
class UChaosClothConfig : public UClothConfigCommon
{ 
public:
	EClothMassMode                                     MassMode;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              UniformMass;                                                // 0x0034   (0x0004)  
	float                                              TotalMass;                                                  // 0x0038   (0x0004)  
	float                                              Density;                                                    // 0x003C   (0x0004)  
	float                                              MinPerParticleMass;                                         // 0x0040   (0x0004)  
	float                                              EdgeStiffness;                                              // 0x0044   (0x0004)  
	float                                              BendingStiffness;                                           // 0x0048   (0x0004)  
	bool                                               bUseBendingElements;                                        // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              AreaStiffness;                                              // 0x0050   (0x0004)  
	float                                              VolumeStiffness;                                            // 0x0054   (0x0004)  
	float                                              StrainLimitingStiffness;                                    // 0x0058   (0x0004)  
	float                                              LimitScale;                                                 // 0x005C   (0x0004)  
	EChaosClothTetherMode                              TetherMode;                                                 // 0x0060   (0x0001)  
	bool                                               bUseGeodesicDistance;                                       // 0x0061   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              ShapeTargetStiffness;                                       // 0x0064   (0x0004)  
	float                                              CollisionThickness;                                         // 0x0068   (0x0004)  
	float                                              FrictionCoefficient;                                        // 0x006C   (0x0004)  
	bool                                               bUseSelfCollisions;                                         // 0x0070   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              SelfCollisionThickness;                                     // 0x0074   (0x0004)  
	bool                                               bUseLegacyBackstop;                                         // 0x0078   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              DampingCoefficient;                                         // 0x007C   (0x0004)  
	bool                                               bUsePointBasedWindModel;                                    // 0x0080   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              DragCoefficient;                                            // 0x0084   (0x0004)  
	float                                              LiftCoefficient;                                            // 0x0088   (0x0004)  
	bool                                               bUseGravityOverride;                                        // 0x008C   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	float                                              GravityScale;                                               // 0x0090   (0x0004)  
	FVector                                            Gravity;                                                    // 0x0094   (0x000C)  
	float                                              AnimDriveSpringStiffness;                                   // 0x00A0   (0x0004)  
	FVector                                            LinearVelocityScale;                                        // 0x00A4   (0x000C)  
	float                                              AngularVelocityScale;                                       // 0x00B0   (0x0004)  
	bool                                               bUseTetrahedralConstraints;                                 // 0x00B4   (0x0001)  
	bool                                               bUseThinShellVolumeConstraints;                             // 0x00B5   (0x0001)  
	bool                                               bUseContinuousCollisionDetection;                           // 0x00B6   (0x0001)  
	unsigned char                                      UnknownData07_7[0x1];                                       // 0x00B7   (0x0001)  MISSED
};

/// Class /Script/ChaosCloth.ChaosClothSharedSimConfig
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{ 
public:
	int32_t                                            IterationCount;                                             // 0x0030   (0x0004)  
	int32_t                                            SubdivisionCount;                                           // 0x0034   (0x0004)  
	float                                              SelfCollisionThickness;                                     // 0x0038   (0x0004)  
	float                                              CollisionThickness;                                         // 0x003C   (0x0004)  
	bool                                               bUseDampingOverride;                                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Damping;                                                    // 0x0044   (0x0004)  
	bool                                               bUseGravityOverride;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              GravityScale;                                               // 0x004C   (0x0004)  
	FVector                                            Gravity;                                                    // 0x0050   (0x000C)  
	bool                                               bUseLocalSpaceSimulation;                                   // 0x005C   (0x0001)  
	bool                                               bUseXPBDConstraints;                                        // 0x005D   (0x0001)  
	unsigned char                                      UnknownData02_7[0x2];                                       // 0x005E   (0x0002)  MISSED
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationFactory
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{ 
public:
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationInteractor
/// Size: 0x0028 (40 bytes) (0x000038 - 0x000060) align 8 pad: 0x0000
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0038   (0x0028)  MISSED
};

