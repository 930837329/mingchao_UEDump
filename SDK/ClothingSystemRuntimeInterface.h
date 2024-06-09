
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/ClothingSystemRuntimeInterface.ClothConfigBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UClothConfigBase : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UClothingSimulationFactory : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UClothingSimulationInteractor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
	// void SetAnimDriveSpringStiffness(float InStiffness);                                                                     // [0x3cf50d0] Native|Public|BlueprintCallable 
	// void PhysicsAssetUpdated();                                                                                              // [0x14b2530] Native|Public|BlueprintCallable 
	// float GetSimulationTime();                                                                                               // [0x3cf5090] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumSubsteps();                                                                                                // [0x3cf5060] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumKinematicParticles();                                                                                      // [0x3cf5030] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumIterations();                                                                                              // [0x3cf5000] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumDynamicParticles();                                                                                        // [0x3cf4fd0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumCloths();                                                                                                  // [0x3cf4fa0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void EnableGravityOverride(FVector& InVector);                                                                           // [0x3cf4f10] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void DisableGravityOverride();                                                                                           // [0xc4ccd0] Native|Public|BlueprintCallable 
	// void ClothConfigUpdated();                                                                                               // [0x3633740] Native|Public|BlueprintCallable 
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UClothSharedSimConfigBase : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingAssetBase
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UClothingAssetBase : public UObject
{ 
public:
	FString                                            ImportedFilePath;                                           // 0x0030   (0x0010)  
	FGuid                                              AssetGuid;                                                  // 0x0040   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothVertBoneData
/// Size: 0x004C (76 bytes) (0x000000 - 0x00004C) align 4 pad: 0x0000
struct FClothVertBoneData
{ 
	int32_t                                            NumInfluences;                                              // 0x0000   (0x0004)  
	uint16_t                                           BoneIndices[12];                                            // 0x0004   (0x0018)  
	float                                              BoneWeights[12];                                            // 0x001C   (0x0030)  
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000E8) align 8 pad: 0x0000
class UClothPhysicalMeshDataBase_Legacy : public UObject
{ 
public:
	TArray<FVector>                                    Vertices;                                                   // 0x0030   (0x0010)  
	TArray<FVector>                                    Normals;                                                    // 0x0040   (0x0010)  
	TArray<uint32_t>                                   Indices;                                                    // 0x0050   (0x0010)  
	TArray<float>                                      InverseMasses;                                              // 0x0060   (0x0010)  
	TArray<FClothVertBoneData>                         BoneData;                                                   // 0x0070   (0x0010)  
	int32_t                                            NumFixedVerts;                                              // 0x0080   (0x0004)  
	int32_t                                            MaxBoneWeights;                                             // 0x0084   (0x0004)  
	TArray<uint32_t>                                   SelfCollisionIndices;                                       // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0098   (0x0050)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FClothCollisionPrim_Sphere
{ 
	int32_t                                            BoneIndex;                                                  // 0x0000   (0x0004)  
	float                                              Radius;                                                     // 0x0004   (0x0004)  
	FVector                                            LocalPosition;                                              // 0x0008   (0x000C)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FClothCollisionPrim_SphereConnection
{ 
	int32_t                                            SphereIndices[2];                                           // 0x0000   (0x0008)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FClothCollisionPrim_Convex
{ 
	TArray<FPlane>                                     Planes;                                                     // 0x0000   (0x0010)  
	TArray<FVector>                                    SurfacePoints;                                              // 0x0010   (0x0010)  
	int32_t                                            BoneIndex;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 pad: 0x0000
struct FClothCollisionPrim_Box
{ 
	FVector                                            LocalPosition;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FQuat                                              LocalRotation;                                              // 0x0010   (0x0010)  
	FVector                                            HalfExtents;                                                // 0x0020   (0x000C)  
	int32_t                                            BoneIndex;                                                  // 0x002C   (0x0004)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FClothCollisionData
{ 
	TArray<FClothCollisionPrim_Sphere>                 Spheres;                                                    // 0x0000   (0x0010)  
	TArray<FClothCollisionPrim_SphereConnection>       SphereConnections;                                          // 0x0010   (0x0010)  
	TArray<FClothCollisionPrim_Convex>                 Convexes;                                                   // 0x0020   (0x0010)  
	TArray<FClothCollisionPrim_Box>                    Boxes;                                                      // 0x0030   (0x0010)  
};

