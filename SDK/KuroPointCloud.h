
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/KuroPointCloud.PointData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FPointData
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	FVector                                            Position;                                                   // 0x0004   (0x000C)  
};

/// Struct /Script/KuroPointCloud.KuroPointSpatialTree
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FKuroPointSpatialTree
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FPointData>                                 PointCloudData;                                             // 0x0008   (0x0010)  
	FBox                                               MaxBound;                                                   // 0x0018   (0x001C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/KuroPointCloud.KuroPointKdTreeNode
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FKuroPointKdTreeNode
{ 
	int32_t                                            LeftNodeIndex;                                              // 0x0000   (0x0004)  
	int32_t                                            RightNodeIndex;                                             // 0x0004   (0x0004)  
	int32_t                                            PointArrayBegin;                                            // 0x0008   (0x0004)  
	int32_t                                            PointArrayEnd;                                              // 0x000C   (0x0004)  
	FBox                                               BoundingBox;                                                // 0x0010   (0x001C)  
};

/// Struct /Script/KuroPointCloud.KuroPointKdTree
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
struct FKuroPointKdTree : FKuroPointSpatialTree
{ 
	int32_t                                            PointNumToStopDivide;                                       // 0x0038   (0x0004)  
	float                                              BoxLengthToStopDivide;                                      // 0x003C   (0x0004)  
	TArray<FKuroPointKdTreeNode>                       TreeNodes;                                                  // 0x0040   (0x0010)  
	int32_t                                            RootNodeId;                                                 // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/KuroPointCloud.KuroPointCloudActor
/// Size: 0x0088 (136 bytes) (0x0002A8 - 0x000330) align 8 pad: 0x0000
class AKuroPointCloudActor : public AActor
{ 
public:
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                               // 0x02A8   (0x0008)  
	class UKuroPointCloudCache*                        PointCloudAsset;                                            // 0x02B0   (0x0008)  
	int32_t                                            PointNumToStopDivide;                                       // 0x02B8   (0x0004)  
	float                                              BoxLengthToStopDivide;                                      // 0x02BC   (0x0004)  
	float                                              InstanceScale;                                              // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
	FKuroPointKdTree                                   KdTree;                                                     // 0x02C8   (0x0058)  
	TArray<float>                                      CustomData;                                                 // 0x0320   (0x0010)  
	// void UpdateIsm();                                                                                                        // [0xf6aeb0] Final|Native|Public|BlueprintCallable 
	// void MarkPointsInBox(FBox& BoxWS);                                                                                       // [0xf6ae20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void ClearMark();                                                                                                        // [0xf6ae00] Final|Native|Public|BlueprintCallable 
	// void BuildKdTreeData();                                                                                                  // [0xf6ade0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroPointCloud.KuroPointCloudCache
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 8 pad: 0x0000
class UKuroPointCloudCache : public UObject
{ 
public:
	TArray<FVector>                                    PositionCache;                                              // 0x0030   (0x0010)  
	TArray<FQuat>                                      RotationCache;                                              // 0x0040   (0x0010)  
	TArray<FVector>                                    ScaleCache;                                                 // 0x0050   (0x0010)  
	TArray<int32_t>                                    IndexCache;                                                 // 0x0060   (0x0010)  
};

