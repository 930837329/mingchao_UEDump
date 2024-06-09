
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: KuroWorldPartition

/// Class /Script/KuroVoxelRuntime.KuroVoxelGlobalActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AKuroVoxelGlobalActor : public AActor
{ 
public:
	class UKuroVoxelGlobalComponent*                   KuroVoxelGlobalComp;                                        // 0x02A8   (0x0008)  
};

/// Class /Script/KuroVoxelRuntime.KuroVoxelGlobalComponent
/// Size: 0x0078 (120 bytes) (0x000218 - 0x000290) align 16 pad: 0x0000
class UKuroVoxelGlobalComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0218   (0x0078)  MISSED
};

/// Class /Script/KuroVoxelRuntime.KuroVoxelPartitionActor
/// Size: 0x0008 (8 bytes) (0x0002B0 - 0x0002B8) align 8 pad: 0x0000
class AKuroVoxelPartitionActor : public AKuroWorldPartitionActor
{ 
public:
	class UKuroVoxelPartitionComponent*                KuroVoxelPartitionComp;                                     // 0x02B0   (0x0008)  
};

/// Class /Script/KuroVoxelRuntime.KuroVoxelPartitionComponent
/// Size: 0x0018 (24 bytes) (0x0000C0 - 0x0000D8) align 8 pad: 0x0000
class UKuroVoxelPartitionComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00C0   (0x0018)  MISSED
};

/// Class /Script/KuroVoxelRuntime.KuroVoxelSystem
/// Size: 0x00F8 (248 bytes) (0x000038 - 0x000130) align 8 pad: 0x0000
class UKuroVoxelSystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	SDK_UNDEFINED(80,1503) /* TMap<FIntPoint, AKuroVoxelPartitionActor*> */ __um(LoadedPartitionActorsMap);        // 0x0040   (0x0050)  
	SDK_UNDEFINED(80,1504) /* TSet<AKuroVoxelPartitionActor*> */ __um(ToAddActorSet);                              // 0x0090   (0x0050)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x00E0   (0x0050)  MISSED
	// bool IsVoxelSystemInitialized(class UWorld* World);                                                                      // [0x1095720] Final|Native|Static|Public|BlueprintCallable 
	// bool IsCavernAtPos(class UWorld* World, FVector UEPos);                                                                  // [0x1095640] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// FKuroVoxelInfo GetVoxelInfoAtPos(class UWorld* World, FVector UEPos);                                                    // [0x1095560] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// FString GetMtlNameByID(char MtlID);                                                                                      // [0x1095490] Final|Native|Static|Public|BlueprintCallable 
	// char GetMaterialIDAtPos(class UWorld* World, FVector UEPos);                                                             // [0x10953b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/KuroVoxelRuntime.KuroVoxelInfo
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 pad: 0x0000
struct FKuroVoxelInfo
{ 
	char                                               MtlID;                                                      // 0x0000   (0x0001)  
	char                                               EnvType;                                                    // 0x0001   (0x0001)  
	char                                               StreamingType;                                              // 0x0002   (0x0001)  
	char                                               LoadAdjustValue;                                            // 0x0003   (0x0001)  
};

