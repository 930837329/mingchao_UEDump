
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/RoadNetRuntime.ERoadNetCoordinateSpace
/// Size: 0x01 (1 bytes)
enum class ERoadNetCoordinateSpace : uint8_t
{
	ERoadNetCoordinateSpace__Local                                                   = 0,
	ERoadNetCoordinateSpace__World                                                   = 1
};

/// Class /Script/RoadNetRuntime.RoadNetActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class ARoadNetActor : public AActor
{ 
public:
	class URoadNetComponent*                           RoadNetComponent;                                           // 0x02A8   (0x0008)  
};

/// Class /Script/RoadNetRuntime.RoadNetComponent
/// Size: 0x0080 (128 bytes) (0x0004E0 - 0x000560) align 16 pad: 0x0000
class URoadNetComponent : public UPrimitiveComponent
{ 
public:
	bool                                               bDrawDebug;                                                 // 0x04E0   (0x0001)  
	bool                                               bHasBeenEdited;                                             // 0x04E1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x04E2   (0x0002)  MISSED
	FVector                                            TileSize;                                                   // 0x04E4   (0x000C)  
	SDK_UNDEFINED(80,1569) /* TMap<int32_t, FRoadNetNode> */ __um(RoadNetNodes);                                   // 0x04F0   (0x0050)  
	uint32_t                                           RoadNetID;                                                  // 0x0540   (0x0004)  
	FBox                                               DataBoundsBox;                                              // 0x0544   (0x001C)  
	// FVector GetLocationAtNode(int32_t NodeID, TEnumAsByte<ERoadNetCoordinateSpace> CoordinateSpace);                         // [0x10cb7d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FVector GetLeaveTangentAtNode(int32_t NodeID, TEnumAsByte<ERoadNetCoordinateSpace> CoordinateSpace);                     // [0x10cb6f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RoadNetRuntime.RoadNetSetting
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class URoadNetSetting : public UObject
{ 
public:
	FVector                                            NodePlaceOffset;                                            // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RoadNetRuntime.RoadNetNode
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FRoadNetNode
{ 
	int32_t                                            NodeID;                                                     // 0x0000   (0x0004)  
	FVector                                            Pos;                                                        // 0x0004   (0x000C)  
	FIntVector                                         TilePos;                                                    // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(80,1570) /* TSet<int32_t> */         __um(LinkIDs);                                              // 0x0020   (0x0050)  
};

