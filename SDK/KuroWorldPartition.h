
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KuroWorldPartition.KuroWorldPartitionActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AKuroWorldPartitionActor : public AActor
{ 
public:
	class UKuroWorldPartitionLocationComponent*        LocationComponent;                                          // 0x02A8   (0x0008)  
};

/// Class /Script/KuroWorldPartition.KuroWorldPartitionLocationComponent
/// Size: 0x0028 (40 bytes) (0x000218 - 0x000240) align 16 pad: 0x0000
class UKuroWorldPartitionLocationComponent : public USceneComponent
{ 
public:
	int32_t                                            X;                                                          // 0x0218   (0x0004)  
	int32_t                                            Y;                                                          // 0x021C   (0x0004)  
	FBox                                               DataChunkActorBounds;                                       // 0x0220   (0x001C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x023C   (0x0004)  MISSED
};

