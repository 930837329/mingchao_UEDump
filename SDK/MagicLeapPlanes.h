
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MagicLeapPlanes.EMagicLeapPlaneQueryFlags
/// Size: 0x01 (1 bytes)
enum class EMagicLeapPlaneQueryFlags : uint8_t
{
	EMagicLeapPlaneQueryFlags__Vertical                                              = 0,
	EMagicLeapPlaneQueryFlags__Horizontal                                            = 1,
	EMagicLeapPlaneQueryFlags__Arbitrary                                             = 2,
	EMagicLeapPlaneQueryFlags__OrientToGravity                                       = 3,
	EMagicLeapPlaneQueryFlags__PreferInner                                           = 4,
	EMagicLeapPlaneQueryFlags__Ceiling                                               = 5,
	EMagicLeapPlaneQueryFlags__Floor                                                 = 6,
	EMagicLeapPlaneQueryFlags__Wall                                                  = 7,
	EMagicLeapPlaneQueryFlags__Polygons                                              = 8
};

/// Enum /Script/MagicLeapPlanes.EMagicLeapPlaneQueryType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapPlaneQueryType : uint8_t
{
	EMagicLeapPlaneQueryType__Bulk                                                   = 0,
	EMagicLeapPlaneQueryType__Delta                                                  = 1
};

/// Class /Script/MagicLeapPlanes.MagicLeapPlanesComponent
/// Size: 0x0068 (104 bytes) (0x000218 - 0x000280) align 16 pad: 0x0000
class UMagicLeapPlanesComponent : public USceneComponent
{ 
public:
	TArray<EMagicLeapPlaneQueryFlags>                  QueryFlags;                                                 // 0x0218   (0x0010)  
	class UBoxComponent*                               SearchVolume;                                               // 0x0228   (0x0008)  
	int32_t                                            MaxResults;                                                 // 0x0230   (0x0004)  
	float                                              MinHolePerimeter;                                           // 0x0234   (0x0004)  
	float                                              MinPlaneArea;                                               // 0x0238   (0x0004)  
	EMagicLeapPlaneQueryType                           QueryType;                                                  // 0x023C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x023D   (0x0003)  MISSED
	float                                              SimilarityThreshold;                                        // 0x0240   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0244   (0x0004)  MISSED
	SDK_UNDEFINED(16,1540) /* FMulticastInlineDelegate */ __um(OnPlanesQueryResult);                               // 0x0248   (0x0010)  
	SDK_UNDEFINED(16,1541) /* FMulticastInlineDelegate */ __um(OnPersistentPlanesQueryResult);                     // 0x0258   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0268   (0x0018)  MISSED
	// bool RequestPlanesAsync();                                                                                               // [0x21f70a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void ReorderPlaneFlags(TArray<EMagicLeapPlaneQueryFlags>& InPriority, TArray<EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>& OutReorderedFlags); // [0x21f6f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool RemovePersistentQuery(FGuid Handle);                                                                                // [0x21f6e80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void RemoveFlagsNotInQuery(TArray<EMagicLeapPlaneQueryFlags>& InQueryFlags, TArray<EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<EMagicLeapPlaneQueryFlags>& OutFlags); // [0x21f6d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool PlanesQueryBeginAsync(FMagicLeapPlanesQuery& Query, FDelegateProperty& ResultDelegate);                             // [0x21f6b90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool PlanesPersistentQueryBeginAsync(FMagicLeapPlanesQuery& Query, FGuid& Handle, FDelegateProperty& ResultDelegate);    // [0x21f69d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool IsTrackerValid();                                                                                                   // [0x21f69a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FTransform GetContentScale(class AActor* ContentActor, FMagicLeapPlaneResult& PlaneResult);                              // [0x21f6850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool DestroyTracker();                                                                                                   // [0x21f6820] Final|Native|Static|Public|BlueprintCallable 
	// bool CreateTracker();                                                                                                    // [0x21f67f0] Final|Native|Static|Public|BlueprintCallable 
	// FGuid AddPersistentQuery(EMagicLeapPlaneQueryType PersistentQueryType);                                                  // [0x21f6760] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPolygon
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FMagicLeapPolygon
{ 
	TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneBoundary
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FMagicLeapPlaneBoundary
{ 
	FMagicLeapPolygon                                  Polygon;                                                    // 0x0000   (0x0010)  
	TArray<FMagicLeapPolygon>                          Holes;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneBoundaries
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FMagicLeapPlaneBoundaries
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	TArray<FMagicLeapPlaneBoundary>                    Boundaries;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneResult
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FMagicLeapPlaneResult
{ 
	FVector                                            PlanePosition;                                              // 0x0000   (0x000C)  
	FRotator                                           PlaneOrientation;                                           // 0x000C   (0x000C)  
	FRotator                                           ContentOrientation;                                         // 0x0018   (0x000C)  
	FVector2D                                          PlaneDimensions;                                            // 0x0024   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneFlags;                                                 // 0x0030   (0x0010)  
	FGuid                                              ID;                                                         // 0x0040   (0x0010)  
	FGuid                                              InnerID;                                                    // 0x0050   (0x0010)  
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlanesQuery
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 pad: 0x0000
struct FMagicLeapPlanesQuery
{ 
	TArray<EMagicLeapPlaneQueryFlags>                  Flags;                                                      // 0x0000   (0x0010)  
	class UBoxComponent*                               SearchVolume;                                               // 0x0010   (0x0008)  
	int32_t                                            MaxResults;                                                 // 0x0018   (0x0004)  
	float                                              MinHoleLength;                                              // 0x001C   (0x0004)  
	float                                              MinPlaneArea;                                               // 0x0020   (0x0004)  
	FVector                                            SearchVolumePosition;                                       // 0x0024   (0x000C)  
	FQuat                                              SearchVolumeOrientation;                                    // 0x0030   (0x0010)  
	FVector                                            SearchVolumeExtents;                                        // 0x0040   (0x000C)  
	float                                              SimilarityThreshold;                                        // 0x004C   (0x0004)  
	bool                                               bSearchVolumeTrackingSpace;                                 // 0x0050   (0x0001)  
	bool                                               bResultTrackingSpace;                                       // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x0052   (0x000E)  MISSED
};

