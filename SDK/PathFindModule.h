
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NavigationSystem

/// Class /Script/PathFindModule.KuroNavigationSetting
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UKuroNavigationSetting : public UObject
{ 
public:
	int32_t                                            MaxPathPoints;                                              // 0x0030   (0x0004)  
	int32_t                                            MaxPathPolygen;                                             // 0x0034   (0x0004)  
	float                                              SmoothStepSize;                                             // 0x0038   (0x0004)  
	float                                              CloseXZRadius;                                              // 0x003C   (0x0004)  
	float                                              CloseHeight;                                                // 0x0040   (0x0004)  
	float                                              MaxOfflineHeight;                                           // 0x0044   (0x0004)  
	float                                              DefaultWorldHeight;                                         // 0x0048   (0x0004)  
	float                                              MaxWalkableError;                                           // 0x004C   (0x0004)  
	FVector                                            FinderHalfExtent;                                           // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/PathFindModule.NavigationPartitionSystem
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000140) align 8 pad: 0x0000
class UNavigationPartitionSystem : public UNavigationPartitionSystemBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0030   (0x0020)  MISSED
	SDK_UNDEFINED(80,1567) /* TMap<FIntPoint, ANavmeshPartitionActor*> */ __um(LoadedNavPartitionActorsMap);       // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,1568) /* TSet<ANavmeshPartitionActor*> */ __um(ToAddActorSet);                                // 0x00A0   (0x0050)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x00F0   (0x0050)  MISSED
};

/// Class /Script/PathFindModule.NavigationPartitionPath
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000068) align 8 pad: 0x0000
class UNavigationPartitionPath : public UNavigationPartitionPathBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0030   (0x0038)  MISSED
};

