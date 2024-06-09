
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
/// dependency: NavmeshPartition

/// Class /Script/AudioMaterialPlugin.AudioGlobalSystem
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UAudioGlobalSystem : public UAudioGlobalSystemBase
{ 
public:
	TArray<class UAudioMaterialComponent*>             AudioComponents;                                            // 0x0030   (0x0010)  
	bool                                               bOpenLogging;                                               // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/AudioMaterialPlugin.AudioMaterialCookBlueprint
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAudioMaterialCookBlueprint : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AudioMaterialPlugin.AudioMaterialBlueprint
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAudioMaterialBlueprint : public UBlueprintFunctionLibrary
{ 
public:
	// char GetMaterialID(FVector& Position);                                                                                   // [0x1562da0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AudioMaterialPlugin.AudioMaterialPartitionActor
/// Size: 0x0008 (8 bytes) (0x0002B0 - 0x0002B8) align 8 pad: 0x0000
class AAudioMaterialPartitionActor : public AKuroWorldPartitionActor
{ 
public:
	class UAudioMaterialComponent*                     AudioMaterialComp;                                          // 0x02B0   (0x0008)  
};

