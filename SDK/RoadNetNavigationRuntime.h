
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/RoadNetNavigationRuntime.RoadNetNavigationPath
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class URoadNetNavigationPath : public UObject
{ 
public:
	TArray<FVector>                                    PathPoints;                                                 // 0x0030   (0x0010)  
	float                                              Length;                                                     // 0x0040   (0x0004)  
	bool                                               IsPartial;                                                  // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Class /Script/RoadNetNavigationRuntime.RoadNetNavigationSetting
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class URoadNetNavigationSetting : public UObject
{ 
public:
	int32_t                                            MaxPathPoints;                                              // 0x0030   (0x0004)  
	int32_t                                            MaxSearchPoints;                                            // 0x0034   (0x0004)  
	int32_t                                            MaxCheckCount;                                              // 0x0038   (0x0004)  
	float                                              DotAngleThreshold;                                          // 0x003C   (0x0004)  
	FVector                                            FinderHalfExtents;                                          // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/RoadNetNavigationRuntime.RoadNetNavigationSystem
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000090) align 8 pad: 0x0000
class URoadNetNavigationSystem : public URoadNetNavigationSystemBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0030   (0x0060)  MISSED
	// class URoadNetNavigationPath* RoadNet_FindPathToLocationSynchronously(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd); // [0x10d00e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

