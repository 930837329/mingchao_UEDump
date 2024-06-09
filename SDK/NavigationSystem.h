
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/NavigationSystem.ERuntimeGenerationType
/// Size: 0x01 (1 bytes)
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static                                                   = 0,
	ERuntimeGenerationType__DynamicModifiersOnly                                     = 1,
	ERuntimeGenerationType__Dynamic                                                  = 2,
	ERuntimeGenerationType__LegacyGeneration                                         = 3
};

/// Enum /Script/NavigationSystem.ENavCostDisplay
/// Size: 0x01 (1 bytes)
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost                                                       = 0,
	ENavCostDisplay__HeuristicOnly                                                   = 1,
	ENavCostDisplay__RealCostOnly                                                    = 2
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
/// Size: 0x01 (1 bytes)
enum class ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override                                               = 0,
	ENavSystemOverridePolicy__Append                                                 = 1,
	ENavSystemOverridePolicy__Skip                                                   = 2
};

/// Enum /Script/NavigationSystem.ERecastPartitioning
/// Size: 0x01 (1 bytes)
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone                                                    = 0,
	ERecastPartitioning__Watershed                                                   = 1,
	ERecastPartitioning__ChunkyMonotone                                              = 2
};

/// Class /Script/NavigationSystem.NavigationPartitionPathBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNavigationPartitionPathBase : public UObject
{ 
public:
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FSupportedAreaData
{ 
	FString                                            AreaClassName;                                              // 0x0000   (0x0010)  
	int32_t                                            AreaID;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x0018   (0x0008)  
};

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x0228 (552 bytes) (0x0002A8 - 0x0004D0) align 8 pad: 0x0000
class ANavigationData : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02A8   (0x0008)  MISSED
	class UPrimitiveComponent*                         RenderingComp;                                              // 0x02B0   (0x0008)  
	FNavDataConfig                                     NavDataConfig;                                              // 0x02B8   (0x0090)  
	bool                                               bEnableDrawing : 1;                                         // 0x0348:0 (0x0001)  
	bool                                               bForceRebuildOnLoad : 1;                                    // 0x0348:1 (0x0001)  
	bool                                               bAutoDestroyWhenNoNavigation : 1;                           // 0x0348:2 (0x0001)  
	bool                                               bCanBeMainNavData : 1;                                      // 0x0348:3 (0x0001)  
	bool                                               bCanSpawnOnRebuild : 1;                                     // 0x0348:4 (0x0001)  
	bool                                               bRebuildAtRuntime : 1;                                      // 0x0348:5 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0349   (0x0003)  MISSED
	ERuntimeGenerationType                             RuntimeGeneration;                                          // 0x034C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x034D   (0x0003)  MISSED
	float                                              ObservedPathsTickInterval;                                  // 0x0350   (0x0004)  
	uint32_t                                           DataVersion;                                                // 0x0354   (0x0004)  
	unsigned char                                      UnknownData03_6[0x110];                                     // 0x0358   (0x0110)  MISSED
	TArray<FSupportedAreaData>                         SupportedAreas;                                             // 0x0468   (0x0010)  
	unsigned char                                      UnknownData04_7[0x58];                                      // 0x0478   (0x0058)  MISSED
};

/// Class /Script/NavigationSystem.AbstractNavData
/// Size: 0x0000 (0 bytes) (0x0004D0 - 0x0004D0) align 8 pad: 0x0000
class AAbstractNavData : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.CrowdManagerBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UCrowdManagerBase : public UObject
{ 
public:
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x0018 (24 bytes) (0x0002E0 - 0x0002F8) align 8 pad: 0x0000
class ANavModifierVolume : public AVolume
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02E0   (0x0008)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x02E8   (0x0008)  
	bool                                               bMaskFillCollisionUnderneathForNavmesh;                     // 0x02F0   (0x0001)  
	bool                                               bUseChildConvex;                                            // 0x02F1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x02F2   (0x0006)  MISSED
	// void SetAreaClass(class UClass* NewAreaClass);                                                                           // [0x4947940] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.KuroNavOverrideVolume
/// Size: 0x0008 (8 bytes) (0x0002F8 - 0x000300) align 8 pad: 0x0000
class AKuroNavOverrideVolume : public ANavModifierVolume
{ 
public:
	float                                              AgentMaxClimb;                                              // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02FC   (0x0004)  MISSED
};

/// Class /Script/NavigationSystem.NavArea
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class UNavArea : public UNavAreaBase
{ 
public:
	float                                              DefaultCost;                                                // 0x0038   (0x0004)  
	float                                              FixedAreaEnteringCost;                                      // 0x003C   (0x0004)  
	FColor                                             DrawColor;                                                  // 0x0040   (0x0004)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0044   (0x0004)  
	bool                                               bSupportsAgent0 : 1;                                        // 0x0048:0 (0x0001)  
	bool                                               bSupportsAgent1 : 1;                                        // 0x0048:1 (0x0001)  
	bool                                               bSupportsAgent2 : 1;                                        // 0x0048:2 (0x0001)  
	bool                                               bSupportsAgent3 : 1;                                        // 0x0048:3 (0x0001)  
	bool                                               bSupportsAgent4 : 1;                                        // 0x0048:4 (0x0001)  
	bool                                               bSupportsAgent5 : 1;                                        // 0x0048:5 (0x0001)  
	bool                                               bSupportsAgent6 : 1;                                        // 0x0048:6 (0x0001)  
	bool                                               bSupportsAgent7 : 1;                                        // 0x0048:7 (0x0001)  
	bool                                               bSupportsAgent8 : 1;                                        // 0x0049:0 (0x0001)  
	bool                                               bSupportsAgent9 : 1;                                        // 0x0049:1 (0x0001)  
	bool                                               bSupportsAgent10 : 1;                                       // 0x0049:2 (0x0001)  
	bool                                               bSupportsAgent11 : 1;                                       // 0x0049:3 (0x0001)  
	bool                                               bSupportsAgent12 : 1;                                       // 0x0049:4 (0x0001)  
	bool                                               bSupportsAgent13 : 1;                                       // 0x0049:5 (0x0001)  
	bool                                               bSupportsAgent14 : 1;                                       // 0x0049:6 (0x0001)  
	bool                                               bSupportsAgent15 : 1;                                       // 0x0049:7 (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavArea_Default
/// Size: 0x0000 (0 bytes) (0x000050 - 0x000050) align 8 pad: 0x0000
class UNavArea_Default : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_KuroCaveStreamingType
/// Size: 0x0000 (0 bytes) (0x000050 - 0x000050) align 8 pad: 0x0000
class UNavArea_KuroCaveStreamingType : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_KuroNavOverride
/// Size: 0x0000 (0 bytes) (0x000050 - 0x000050) align 8 pad: 0x0000
class UNavArea_KuroNavOverride : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_LowHeight
/// Size: 0x0000 (0 bytes) (0x000050 - 0x000050) align 8 pad: 0x0000
class UNavArea_LowHeight : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Null
/// Size: 0x0000 (0 bytes) (0x000050 - 0x000050) align 8 pad: 0x0000
class UNavArea_Null : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Obstacle
/// Size: 0x0000 (0 bytes) (0x000050 - 0x000050) align 8 pad: 0x0000
class UNavArea_Obstacle : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta
/// Size: 0x0000 (0 bytes) (0x000050 - 0x000050) align 8 pad: 0x0000
class UNavAreaMeta : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
/// Size: 0x0080 (128 bytes) (0x000050 - 0x0000D0) align 8 pad: 0x0000
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{ 
public:
	class UClass*                                      Agent0Area;                                                 // 0x0050   (0x0008)  
	class UClass*                                      Agent1Area;                                                 // 0x0058   (0x0008)  
	class UClass*                                      Agent2Area;                                                 // 0x0060   (0x0008)  
	class UClass*                                      Agent3Area;                                                 // 0x0068   (0x0008)  
	class UClass*                                      Agent4Area;                                                 // 0x0070   (0x0008)  
	class UClass*                                      Agent5Area;                                                 // 0x0078   (0x0008)  
	class UClass*                                      Agent6Area;                                                 // 0x0080   (0x0008)  
	class UClass*                                      Agent7Area;                                                 // 0x0088   (0x0008)  
	class UClass*                                      Agent8Area;                                                 // 0x0090   (0x0008)  
	class UClass*                                      Agent9Area;                                                 // 0x0098   (0x0008)  
	class UClass*                                      Agent10Area;                                                // 0x00A0   (0x0008)  
	class UClass*                                      Agent11Area;                                                // 0x00A8   (0x0008)  
	class UClass*                                      Agent12Area;                                                // 0x00B0   (0x0008)  
	class UClass*                                      Agent13Area;                                                // 0x00B8   (0x0008)  
	class UClass*                                      Agent14Area;                                                // 0x00C0   (0x0008)  
	class UClass*                                      Agent15Area;                                                // 0x00C8   (0x0008)  
};

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FNavCollisionCylinder
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x000C)  
	float                                              Radius;                                                     // 0x000C   (0x0004)  
	float                                              Height;                                                     // 0x0010   (0x0004)  
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FNavCollisionBox
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x000C)  
	FVector                                            Extent;                                                     // 0x000C   (0x000C)  
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x0068 (104 bytes) (0x000078 - 0x0000E0) align 8 pad: 0x0000
class UNavCollision : public UNavCollisionBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0078   (0x0010)  MISSED
	TArray<FNavCollisionCylinder>                      CylinderCollision;                                          // 0x0088   (0x0010)  
	TArray<FNavCollisionBox>                           BoxCollision;                                               // 0x0098   (0x0010)  
	class UClass*                                      AreaClass;                                                  // 0x00A8   (0x0008)  
	bool                                               bGatherConvexGeometry : 1;                                  // 0x00B0:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x00B0:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x2F];                                      // 0x00B1   (0x002F)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraph
/// Size: 0x0000 (0 bytes) (0x0004D0 - 0x0004D0) align 8 pad: 0x0000
class ANavigationGraph : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraphNode
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class ANavigationGraphNode : public AActor
{ 
public:
};

/// Struct /Script/NavigationSystem.NavGraphNode
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNavGraphNode
{ 
	class UObject*                                     Owner;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x0028 (40 bytes) (0x000218 - 0x000240) align 16 pad: 0x0000
class UNavigationGraphNodeComponent : public USceneComponent
{ 
public:
	FNavGraphNode                                      Node;                                                       // 0x0218   (0x0018)  
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                          // 0x0230   (0x0008)  
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                          // 0x0238   (0x0008)  
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UNavigationInvokerComponent : public UActorComponent
{ 
public:
	float                                              TileGenerationRadius;                                       // 0x00C0   (0x0004)  
	float                                              TileRemovalRadius;                                          // 0x00C4   (0x0004)  
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000098) align 8 pad: 0x0000
class UNavigationPath : public UObject
{ 
public:
	SDK_UNDEFINED(16,400) /* FMulticastInlineDelegate */ __um(PathUpdatedNotifier);                                // 0x0030   (0x0010)  
	TArray<FVector>                                    PathPoints;                                                 // 0x0040   (0x0010)  
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                  // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x27];                                      // 0x0051   (0x0027)  MISSED
	class UNavigationPartitionPathBase*                NavPartitionPath;                                           // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0080   (0x0018)  MISSED
	// bool IsValid();                                                                                                          // [0x4944750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsStringPulled();                                                                                                   // [0x4611ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsPartial();                                                                                                        // [0x4944500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetPathLength();                                                                                                   // [0x4943d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetPathCost();                                                                                                     // [0x4943ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetDebugString();                                                                                                // [0x49439a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);                              // [0x4943330] Final|Native|Public|BlueprintCallable 
	// void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);                                              // [0x4943250] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationPathGenerator
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNavigationPathGenerator : public UInterface
{ 
public:
};

/// Struct /Script/NavigationSystem.NavigationFilterArea
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNavigationFilterArea
{ 
	class UClass*                                      AreaClass;                                                  // 0x0000   (0x0008)  
	float                                              TravelCostOverride;                                         // 0x0008   (0x0004)  
	float                                              EnteringCostOverride;                                       // 0x000C   (0x0004)  
	bool                                               bIsExcluded : 1;                                            // 0x0010:0 (0x0001)  
	bool                                               bOverrideTravelCost : 1;                                    // 0x0010:1 (0x0001)  
	bool                                               bOverrideEnteringCost : 1;                                  // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FNavigationFilterFlags
{ 
	bool                                               bNavFlag0 : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bNavFlag1 : 1;                                              // 0x0000:1 (0x0001)  
	bool                                               bNavFlag2 : 1;                                              // 0x0000:2 (0x0001)  
	bool                                               bNavFlag3 : 1;                                              // 0x0000:3 (0x0001)  
	bool                                               bNavFlag4 : 1;                                              // 0x0000:4 (0x0001)  
	bool                                               bNavFlag5 : 1;                                              // 0x0000:5 (0x0001)  
	bool                                               bNavFlag6 : 1;                                              // 0x0000:6 (0x0001)  
	bool                                               bNavFlag7 : 1;                                              // 0x0000:7 (0x0001)  
	bool                                               bNavFlag8 : 1;                                              // 0x0001:0 (0x0001)  
	bool                                               bNavFlag9 : 1;                                              // 0x0001:1 (0x0001)  
	bool                                               bNavFlag10 : 1;                                             // 0x0001:2 (0x0001)  
	bool                                               bNavFlag11 : 1;                                             // 0x0001:3 (0x0001)  
	bool                                               bNavFlag12 : 1;                                             // 0x0001:4 (0x0001)  
	bool                                               bNavFlag13 : 1;                                             // 0x0001:5 (0x0001)  
	bool                                               bNavFlag14 : 1;                                             // 0x0001:6 (0x0001)  
	bool                                               bNavFlag15 : 1;                                             // 0x0001:7 (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UNavigationQueryFilter : public UObject
{ 
public:
	TArray<FNavigationFilterArea>                      Areas;                                                      // 0x0030   (0x0010)  
	FNavigationFilterFlags                             IncludeFlags;                                               // 0x0040   (0x0004)  
	FNavigationFilterFlags                             ExcludeFlags;                                               // 0x0044   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x15D8 (5592 bytes) (0x000030 - 0x001608) align 8 pad: 0x0000
class UNavigationSystemV1 : public UNavigationSystemBase
{ 
public:
	class ANavigationData*                             MainNavData;                                                // 0x0030   (0x0008)  
	class ANavigationData*                             AbstractNavData;                                            // 0x0038   (0x0008)  
	FName                                              DefaultAgentName;                                           // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	SDK_UNDEFINED(48,401) /* TWeakObjectPtr<UClass*> */ __um(CrowdManagerClass);                                   // 0x0050   (0x0030)  
	bool                                               bAutoCreateNavigationData : 1;                              // 0x0080:0 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0080:1 (0x0001)  
	bool                                               bAllowClientSideNavigation : 1;                             // 0x0080:2 (0x0001)  
	bool                                               bShouldDiscardSubLevelNavData : 1;                          // 0x0080:3 (0x0001)  
	bool                                               bTickWhilePaused : 1;                                       // 0x0080:4 (0x0001)  
	bool                                               bSupportRebuilding : 1;                                     // 0x0080:5 (0x0001)  
	bool                                               bInitialBuildingLocked : 1;                                 // 0x0080:6 (0x0001)  
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0080:7 (0x0001)  MISSED
	bool                                               bSkipAgentHeightCheckWhenPickingNavData : 1;                // 0x0081:0 (0x0001)  
	bool                                               bGenerateNavigationOnlyAroundNavigationInvokers : 1;        // 0x0081:1 (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0082   (0x0002)  MISSED
	float                                              ActiveTilesUpdateInterval;                                  // 0x0084   (0x0004)  
	ENavDataGatheringModeConfig                        DataGatheringMode;                                          // 0x0088   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              DirtyAreaWarningSizeThreshold;                              // 0x008C   (0x0004)  
	TArray<FNavDataConfig>                             SupportedAgents;                                            // 0x0090   (0x0010)  
	FNavAgentSelector                                  SupportedAgentsMask;                                        // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	TArray<class ANavigationData*>                     NavDataSet;                                                 // 0x00A8   (0x0010)  
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                   // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x00C8   (0x0010)  MISSED
	SDK_UNDEFINED(16,402) /* FMulticastInlineDelegate */ __um(OnNavDataRegisteredEvent);                           // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,403) /* FMulticastInlineDelegate */ __um(OnNavigationGenerationFinishedDelegate);             // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData06_6[0x18];                                      // 0x00F8   (0x0018)  MISSED
	SDK_UNDEFINED(16,404) /* FMulticastInlineDelegate */ __um(OnCustomNavigationInitDone);                         // 0x0110   (0x0010)  
	unsigned char                                      UnknownData07_6[0xC4];                                      // 0x0120   (0x00C4)  MISSED
	FNavigationSystemRunMode                           OperationMode;                                              // 0x01E4   (0x0001)  
	unsigned char                                      UnknownData08_6[0x13FF];                                    // 0x01E5   (0x13FF)  MISSED
	float                                              DirtyAreasUpdateFreq;                                       // 0x15E4   (0x0004)  
	unsigned char                                      UnknownData09_7[0x20];                                      // 0x15E8   (0x0020)  MISSED
	// void UnregisterNavigationInvoker(class AActor* Invoker);                                                                 // [0x49459b0] Final|Native|Public|BlueprintCallable 
	// void SimpleMoveToLocation(class AController* Controller, FVector& Goal);                                                 // [0x49458f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SimpleMoveToActor(class AController* Controller, class AActor* Goal);                                               // [0x4945830] Final|Native|Static|Public|BlueprintCallable 
	// void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);                                                 // [0x49457a0] Final|Native|Public|BlueprintCallable 
	// void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);                                                      // [0x4945720] Final|Native|Public|BlueprintCallable 
	// void ResetMaxSimultaneousTileGenerationJobsCount();                                                                      // [0x4945700] Final|Native|Public|BlueprintCallable 
	// void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);              // [0x49455f0] Final|Native|Public|BlueprintCallable 
	// FVector ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent); // [0x4945400] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);                                                   // [0x4945370] Final|Native|Public|BlueprintCallable 
	// bool NavigationRaycast(class UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, class UClass* FilterClass, class AController* Querier); // [0x4945140] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);                    // [0x4945030] Final|Native|Public|BlueprintCallable 
	// bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, FVector& ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent, float MaxError); // [0x4944de0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x4944bc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x49449a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x4944780] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool IsStraightReachable(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass, FVector& FinderHalfExtent); // [0x4944530] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);                                                  // [0x4944470] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// bool IsNavigationBeingBuilt(class UObject* WorldContextObject);                                                          // [0x49443e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void ImportNavPartitionTilesForVisualization(class UObject* WorldContextObject);                                         // [0x4944360] Final|Native|Static|Public|BlueprintCallable 
	// bool GetWorldInitDone();                                                                                                 // [0x4944330] Final|Native|Public|BlueprintCallable 
	// FVector GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x4944150] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FVector GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x4943f70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// TEnumAsByte<ENavigationQueryResult> GetPathLength(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathLength, class ANavigationData* NavData, class UClass* FilterClass); // [0x4943d40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// TEnumAsByte<ENavigationQueryResult> GetPathCost(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathCost, class ANavigationData* NavData, class UClass* FilterClass); // [0x4943ae0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);                                       // [0x4943a20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass, bool bReturnPartial); // [0x4943790] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass); // [0x4943580] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class UNavigationPath* FindLongPathToLocationSynchronously(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass); // [0x49433b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0008 (8 bytes) (0x000068 - 0x000070) align 8 pad: 0x0000
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{ 
public:
	bool                                               bStrictlyStatic : 1;                                        // 0x0068:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x0068:1 (0x0001)  
	bool                                               bAutoSpawnMissingNavData : 1;                               // 0x0068:2 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0068:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x00F8 (248 bytes) (0x0002A8 - 0x0003A0) align 8 pad: 0x0000
class ANavigationTestingActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x02A8   (0x0010)  MISSED
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x02B8   (0x0008)  
	class UNavigationInvokerComponent*                 InvokerComponent;                                           // 0x02C0   (0x0008)  
	bool                                               bActAsNavigationInvoker : 1;                                // 0x02C8:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProps;                                              // 0x02D0   (0x0038)  
	FVector                                            QueryingExtent;                                             // 0x0308   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0314   (0x0004)  MISSED
	class ANavigationData*                             MyNavData;                                                  // 0x0318   (0x0008)  
	FVector                                            ProjectedLocation;                                          // 0x0320   (0x000C)  
	bool                                               bProjectedLocationValid : 1;                                // 0x032C:0 (0x0001)  
	bool                                               bSearchStart : 1;                                           // 0x032C:1 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x032D   (0x0003)  MISSED
	float                                              CostLimitFactor;                                            // 0x0330   (0x0004)  
	float                                              MinimumCostLimit;                                           // 0x0334   (0x0004)  
	bool                                               bBacktracking : 1;                                          // 0x0338:0 (0x0001)  
	bool                                               bUseHierarchicalPathfinding : 1;                            // 0x0338:1 (0x0001)  
	bool                                               bGatherDetailedInfo : 1;                                    // 0x0338:2 (0x0001)  
	bool                                               bDrawDistanceToWall : 1;                                    // 0x0338:3 (0x0001)  
	bool                                               bShowNodePool : 1;                                          // 0x0338:4 (0x0001)  
	bool                                               bShowBestPath : 1;                                          // 0x0338:5 (0x0001)  
	bool                                               bShowDiffWithPreviousStep : 1;                              // 0x0338:6 (0x0001)  
	bool                                               bShouldBeVisibleInGame : 1;                                 // 0x0338:7 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0339   (0x0003)  MISSED
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                            // 0x033C   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x033D   (0x0003)  MISSED
	FVector2D                                          TextCanvasOffset;                                           // 0x0340   (0x0008)  
	bool                                               bPathExist : 1;                                             // 0x0348:0 (0x0001)  
	bool                                               bPathIsPartial : 1;                                         // 0x0348:1 (0x0001)  
	bool                                               bPathSearchOutOfNodes : 1;                                  // 0x0348:2 (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0349   (0x0003)  MISSED
	float                                              PathfindingTime;                                            // 0x034C   (0x0004)  
	float                                              PathCost;                                                   // 0x0350   (0x0004)  
	int32_t                                            PathfindingSteps;                                           // 0x0354   (0x0004)  
	class ANavigationTestingActor*                     OtherActor;                                                 // 0x0358   (0x0008)  
	class UClass*                                      FilterClass;                                                // 0x0360   (0x0008)  
	int32_t                                            ShowStepIndex;                                              // 0x0368   (0x0004)  
	float                                              OffsetFromCornersDistance;                                  // 0x036C   (0x0004)  
	unsigned char                                      UnknownData07_7[0x30];                                      // 0x0370   (0x0030)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x0020 (32 bytes) (0x0004E0 - 0x000500) align 16 pad: 0x0000
class UNavLinkComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x04E0   (0x0008)  MISSED
	TArray<FNavigationLink>                            Links;                                                      // 0x04E8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x04F8   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x0030 (48 bytes) (0x0000C0 - 0x0000F0) align 8 pad: 0x0000
class UNavRelevantComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x24];                                      // 0x00C0   (0x0024)  MISSED
	bool                                               bAttachToOwnersRoot : 1;                                    // 0x00E4:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00E5   (0x0003)  MISSED
	class UObject*                                     CachedNavParent;                                            // 0x00E8   (0x0008)  
	// void SetNavigationRelevancy(bool bRelevant);                                                                             // [0x4947a60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x00B0 (176 bytes) (0x0000F0 - 0x0001A0) align 8 pad: 0x0000
class UNavLinkCustomComponent : public UNavRelevantComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00F0   (0x0008)  MISSED
	uint32_t                                           NavLinkUserId;                                              // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	class UClass*                                      EnabledAreaClass;                                           // 0x0100   (0x0008)  
	class UClass*                                      DisabledAreaClass;                                          // 0x0108   (0x0008)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0110   (0x0004)  
	FVector                                            LinkRelativeStart;                                          // 0x0114   (0x000C)  
	FVector                                            LinkRelativeEnd;                                            // 0x0120   (0x000C)  
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                              // 0x012C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x012D   (0x0003)  MISSED
	bool                                               bLinkEnabled : 1;                                           // 0x0130:0 (0x0001)  
	bool                                               bNotifyWhenEnabled : 1;                                     // 0x0130:1 (0x0001)  
	bool                                               bNotifyWhenDisabled : 1;                                    // 0x0130:2 (0x0001)  
	bool                                               bCreateBoxObstacle : 1;                                     // 0x0130:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0131   (0x0003)  MISSED
	FVector                                            ObstacleOffset;                                             // 0x0134   (0x000C)  
	FVector                                            ObstacleExtent;                                             // 0x0140   (0x000C)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	class UClass*                                      ObstacleAreaClass;                                          // 0x0150   (0x0008)  
	float                                              BroadcastRadius;                                            // 0x0158   (0x0004)  
	float                                              BroadcastInterval;                                          // 0x015C   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                           // 0x0160   (0x0001)  
	unsigned char                                      UnknownData05_7[0x3F];                                      // 0x0161   (0x003F)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkCustomInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNavLinkCustomInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkHostInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNavLinkHostInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkRenderingComponent
/// Size: 0x0000 (0 bytes) (0x0004E0 - 0x0004E0) align 16 pad: 0x0000
class UNavLinkRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkTrivial
/// Size: 0x0000 (0 bytes) (0x000058 - 0x000058) align 8 pad: 0x0000
class UNavLinkTrivial : public UNavLinkDefinition
{ 
public:
};

/// Class /Script/NavigationSystem.NavMeshBoundsVolume
/// Size: 0x0008 (8 bytes) (0x0002E0 - 0x0002E8) align 8 pad: 0x0000
class ANavMeshBoundsVolume : public AVolume
{ 
public:
	FNavAgentSelector                                  SupportedAgents;                                            // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02E4   (0x0004)  MISSED
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x0010 (16 bytes) (0x0004E0 - 0x0004F0) align 16 pad: 0x0000
class UNavMeshRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x04E0   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x0060 (96 bytes) (0x0000F0 - 0x000150) align 16 pad: 0x0000
class UNavModifierComponent : public UNavRelevantComponent
{ 
public:
	class UClass*                                      AreaClass;                                                  // 0x00F0   (0x0008)  
	FVector                                            FailsafeExtent;                                             // 0x00F8   (0x000C)  
	bool                                               bIncludeAgentHeight : 1;                                    // 0x0104:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x4B];                                      // 0x0105   (0x004B)  MISSED
	// void SetAreaClass(class UClass* NewAreaClass);                                                                           // [0x49479d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavNodeInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UNavNodeInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavSystemConfigOverride
/// Size: 0x0010 (16 bytes) (0x0002A8 - 0x0002B8) align 8 pad: 0x0000
class ANavSystemConfigOverride : public AActor
{ 
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                     // 0x02A8   (0x0008)  
	ENavSystemOverridePolicy                           OverridePolicy;                                             // 0x02B0   (0x0001)  
	bool                                               bLoadOnClient : 1;                                          // 0x02B1:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x02B2   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavTestRenderingComponent
/// Size: 0x0000 (0 bytes) (0x0004E0 - 0x0004E0) align 16 pad: 0x0000
class UNavTestRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/NavigationSystem.RecastFilter_UseDefaultArea
/// Size: 0x0000 (0 bytes) (0x000050 - 0x000050) align 8 pad: 0x0000
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/NavigationSystem.RecastNavMesh
/// Size: 0x00C8 (200 bytes) (0x0004D0 - 0x000598) align 8 pad: 0x0000
class ARecastNavMesh : public ANavigationData
{ 
public:
	bool                                               bDrawTriangleEdges : 1;                                     // 0x04D0:0 (0x0001)  
	bool                                               bDrawPolyEdges : 1;                                         // 0x04D0:1 (0x0001)  
	bool                                               bDrawFilledPolys : 1;                                       // 0x04D0:2 (0x0001)  
	bool                                               bDrawNavMeshEdges : 1;                                      // 0x04D0:3 (0x0001)  
	bool                                               bDrawTileBounds : 1;                                        // 0x04D0:4 (0x0001)  
	bool                                               bDrawPathCollidingGeometry : 1;                             // 0x04D0:5 (0x0001)  
	bool                                               bDrawTileLabels : 1;                                        // 0x04D0:6 (0x0001)  
	bool                                               bDrawPolygonLabels : 1;                                     // 0x04D0:7 (0x0001)  
	bool                                               bDrawDefaultPolygonCost : 1;                                // 0x04D1:0 (0x0001)  
	bool                                               bDrawLabelsOnPathNodes : 1;                                 // 0x04D1:1 (0x0001)  
	bool                                               bDrawNavLinks : 1;                                          // 0x04D1:2 (0x0001)  
	bool                                               bDrawFailedNavLinks : 1;                                    // 0x04D1:3 (0x0001)  
	bool                                               bDrawClusters : 1;                                          // 0x04D1:4 (0x0001)  
	bool                                               bDrawOctree : 1;                                            // 0x04D1:5 (0x0001)  
	bool                                               bDrawOctreeDetails : 1;                                     // 0x04D1:6 (0x0001)  
	bool                                               bDrawMarkedForbiddenPolys : 1;                              // 0x04D1:7 (0x0001)  
	bool                                               bDistinctlyDrawTilesBeingBuilt : 1;                         // 0x04D2:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x04D3   (0x0001)  MISSED
	float                                              DrawOffset;                                                 // 0x04D4   (0x0004)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x04D8:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x04D9   (0x0003)  MISSED
	int32_t                                            TilePoolSize;                                               // 0x04DC   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x04E0   (0x0004)  
	float                                              CellSize;                                                   // 0x04E4   (0x0004)  
	float                                              CellHeight;                                                 // 0x04E8   (0x0004)  
	float                                              AgentRadius;                                                // 0x04EC   (0x0004)  
	float                                              AgentHeight;                                                // 0x04F0   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x04F4   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x04F8   (0x0004)  
	float                                              MinRegionArea;                                              // 0x04FC   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0500   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0504   (0x0004)  
	int32_t                                            MaxSimultaneousTileGenerationJobsCount;                     // 0x0508   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x050C   (0x0004)  
	int32_t                                            PolyRefTileBits;                                            // 0x0510   (0x0004)  
	int32_t                                            PolyRefNavPolyBits;                                         // 0x0514   (0x0004)  
	int32_t                                            PolyRefSaltBits;                                            // 0x0518   (0x0004)  
	FVector                                            NavMeshOriginOffset;                                        // 0x051C   (0x000C)  
	float                                              DefaultDrawDistance;                                        // 0x0528   (0x0004)  
	float                                              DefaultMaxSearchNodes;                                      // 0x052C   (0x0004)  
	float                                              DefaultMaxHierarchicalSearchNodes;                          // 0x0530   (0x0004)  
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x0534   (0x0001)  
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x0535   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0536   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0538   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x053C   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x0540:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x0540:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x0540:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x0540:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x0540:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x0540:5 (0x0001)  
	bool                                               bDoFullyAsyncNavDataGathering : 1;                          // 0x0540:6 (0x0001)  
	bool                                               bUseBetterOffsetsFromCorners : 1;                           // 0x0540:7 (0x0001)  
	bool                                               bStoreEmptyTileLayers : 1;                                  // 0x0541:0 (0x0001)  
	bool                                               bUseVirtualFilters : 1;                                     // 0x0541:1 (0x0001)  
	bool                                               bAllowNavLinkAsPathEnd : 1;                                 // 0x0541:2 (0x0001)  
	bool                                               bUseVoxelCache : 1;                                         // 0x0541:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0542   (0x0002)  MISSED
	float                                              TileSetUpdateInterval;                                      // 0x0544   (0x0004)  
	unsigned char                                      UnknownData04_6[0x14];                                      // 0x0548   (0x0014)  MISSED
	float                                              HeuristicScale;                                             // 0x055C   (0x0004)  
	float                                              VerticalDeviationFromGroundCompensation;                    // 0x0560   (0x0004)  
	unsigned char                                      UnknownData05_7[0x34];                                      // 0x0564   (0x0034)  MISSED
	// bool K2_ReplaceAreaInTileBounds(FBox Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);           // [0x49477a0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
class URecastNavMeshDataChunk : public UNavigationDataChunk
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNavGraphEdge
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0008 (8 bytes) (0x000068 - 0x000070) align 8 pad: 0x0000
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{ 
	uint32_t                                           NavLinkUserId;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 pad: 0x0000
struct FRecastNavMeshGenerationProperties
{ 
	int32_t                                            TilePoolSize;                                               // 0x0000   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0004   (0x0004)  
	float                                              CellSize;                                                   // 0x0008   (0x0004)  
	float                                              CellHeight;                                                 // 0x000C   (0x0004)  
	float                                              AgentRadius;                                                // 0x0010   (0x0004)  
	float                                              AgentHeight;                                                // 0x0014   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0018   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x001C   (0x0004)  
	float                                              MinRegionArea;                                              // 0x0020   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0024   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0028   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x002C   (0x0004)  
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x0030   (0x0001)  
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0034   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x0038   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x003C:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x003C:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x003C:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x003C:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x003C:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x003C:5 (0x0001)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x003C:6 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

