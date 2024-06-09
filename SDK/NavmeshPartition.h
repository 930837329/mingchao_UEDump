
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/NavmeshPartition.AudioMaterialComponent
/// Size: 0x0018 (24 bytes) (0x000218 - 0x000230) align 16 pad: 0x0000
class UAudioMaterialComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0218   (0x0018)  MISSED
};

/// Class /Script/NavmeshPartition.NavmeshPartitionActor
/// Size: 0x0010 (16 bytes) (0x0002A8 - 0x0002B8) align 8 pad: 0x0000
class ANavmeshPartitionActor : public AActor
{ 
public:
	class UNavmeshPartitionComponent*                  NavmeshPartitionComp;                                       // 0x02A8   (0x0008)  
	class UAudioMaterialComponent*                     AudioMaterialComp;                                          // 0x02B0   (0x0008)  
};

/// Class /Script/NavmeshPartition.NavmeshPartitionComponent
/// Size: 0x0058 (88 bytes) (0x000218 - 0x000270) align 16 pad: 0x0000
class UNavmeshPartitionComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0218   (0x0058)  MISSED
};

/// Class /Script/NavmeshPartition.NavmeshPartitionGlobalActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class ANavmeshPartitionGlobalActor : public AActor
{ 
public:
	class UNavmeshPartitionGlobalComponent*            NavmeshPartitionGlobalComp;                                 // 0x02A8   (0x0008)  
};

/// Class /Script/NavmeshPartition.NavmeshPartitionGlobalComponent
/// Size: 0x00A8 (168 bytes) (0x000218 - 0x0002C0) align 16 pad: 0x0000
class UNavmeshPartitionGlobalComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0218   (0x00A8)  MISSED
};

