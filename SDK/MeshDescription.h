
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/MeshDescription.EComputeNTBsOptions
/// Size: 0x01 (1 bytes)
enum class EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None                                                        = 0,
	EComputeNTBsOptions__Normals                                                     = 1,
	EComputeNTBsOptions__Tangents                                                    = 2,
	EComputeNTBsOptions__WeightedNTBs                                                = 4
};

/// Class /Script/MeshDescription.MeshDescription
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMeshDescription : public UObject
{ 
public:
};

/// Class /Script/MeshDescription.MeshDescriptionBase
/// Size: 0x0398 (920 bytes) (0x000030 - 0x0003C8) align 8 pad: 0x0000
class UMeshDescriptionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x398];                                     // 0x0030   (0x0398)  MISSED
	// void SetVertexPosition(FVertexID VertexID, FVector& Position);                                                           // [0x3cbf1e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetPolygonVertexInstance(FPolygonID PolygonID, int32_t PerimeterIndex, FVertexInstanceID VertexInstanceID);         // [0x3cbf0c0] Final|Native|Public|BlueprintCallable 
	// void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID);                                       // [0x3cbeff0] Final|Native|Public|BlueprintCallable 
	// void ReversePolygonFacing(FPolygonID PolygonID);                                                                         // [0x3cbef70] Final|Native|Public|BlueprintCallable 
	// void ReserveNewVertices(int32_t NumberOfNewVertices);                                                                    // [0x3cbeee0] Final|Native|Public|BlueprintCallable 
	// void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances);                                                      // [0x3cbeca0] Final|Native|Public|BlueprintCallable 
	// void ReserveNewTriangles(int32_t NumberOfNewTriangles);                                                                  // [0x3cbee50] Final|Native|Public|BlueprintCallable 
	// void ReserveNewPolygons(int32_t NumberOfNewPolygons);                                                                    // [0x3cbedc0] Final|Native|Public|BlueprintCallable 
	// void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups);                                                          // [0x3cbed30] Final|Native|Public|BlueprintCallable 
	// void ReserveNewEdges(int32_t NumberOfNewEdges);                                                                          // [0x3cbeca0] Final|Native|Public|BlueprintCallable 
	// bool IsVertexValid(FVertexID VertexID);                                                                                  // [0x3cbec10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsVertexOrphaned(FVertexID VertexID);                                                                               // [0x3cbeb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID);                                                          // [0x3cbeaf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsTriangleValid(FTriangleID TriangleID);                                                                            // [0x3cbea60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsTrianglePartOfNgon(FTriangleID TriangleID);                                                                       // [0x3cbe9d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsPolygonValid(FPolygonID PolygonID);                                                                               // [0x3cbe940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID);                                                                // [0x3cbe8b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsEmpty();                                                                                                          // [0x3cbe880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsEdgeValid(FEdgeID EdgeID);                                                                                        // [0x3cbe7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID);                                                      // [0x3cbe710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsEdgeInternal(FEdgeID EdgeID);                                                                                     // [0x3cbe680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                      // [0x3cbe590] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// FVector GetVertexPosition(FVertexID VertexID);                                                                           // [0x3cbe4f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1);                                                     // [0x3cbe410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);                                                   // [0x3cbe370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1);             // [0x3cbe290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID);                        // [0x3cbe1b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID);                           // [0x3cbe0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs); // [0x3cbdfe0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs); // [0x3cbdef0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs);                      // [0x3cbde00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);                         // [0x3cbdd10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs);                                           // [0x3cbdc20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);                             // [0x3cbdb30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs);                                       // [0x3cbda40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                // [0x3cbd950] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32_t Index);                                      // [0x3cbd870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID);                                                         // [0x3cbd7d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FPolygonID GetTrianglePolygon(FTriangleID TriangleID);                                                                   // [0x3cbd730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs);                                              // [0x3cbd640] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs);                          // [0x3cbd550] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs);                                          // [0x3cbd460] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                   // [0x3cbd370] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs);                                     // [0x3cbd280] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID);                                                            // [0x3cbd1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                        // [0x3cbd0f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                         // [0x3cbd000] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs);                         // [0x3cbcf10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs);                                // [0x3cbce20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumVertexVertexInstances(FVertexID VertexID);                                                                 // [0x3cbcd90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID);                                      // [0x3cbcd00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID);                                       // [0x3cbcc70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumVertexConnectedTriangles(FVertexID VertexID);                                                              // [0x3cbcbe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumVertexConnectedPolygons(FVertexID VertexID);                                                               // [0x3cbcb50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumVertexConnectedEdges(FVertexID VertexID);                                                                  // [0x3cbcac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumPolygonVertices(FPolygonID PolygonID);                                                                     // [0x3cbca30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumPolygonTriangles(FPolygonID PolygonID);                                                                    // [0x3cbc9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumPolygonInternalEdges(FPolygonID PolygonID);                                                                // [0x3cbc910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID);                                                      // [0x3cbc880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumEdgeConnectedTriangles(FEdgeID EdgeID);                                                                    // [0x3cbc7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumEdgeConnectedPolygons(FEdgeID EdgeID);                                                                     // [0x3cbc760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetEdgeVertices(FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs);                                                   // [0x3cbc670] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t VertexNumber);                                                           // [0x3cbc590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs);                            // [0x3cbc4a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);                               // [0x3cbc3b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void Empty();                                                                                                            // [0x3cbc390] Final|Native|Public|BlueprintCallable 
	// void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices);                      // [0x3cbc2a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void DeleteVertex(FVertexID VertexID);                                                                                   // [0x3cbc220] Final|Native|Public|BlueprintCallable 
	// void DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr); // [0x3cbc060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void DeletePolygonGroup(FPolygonGroupID PolygonGroupID);                                                                 // [0x3cbbfe0] Final|Native|Public|BlueprintCallable 
	// void DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups); // [0x3cbbe20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices);                                                    // [0x3cbbd30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void CreateVertexWithID(FVertexID VertexID);                                                                             // [0x3cbbcb0] Final|Native|Public|BlueprintCallable 
	// void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID);                                 // [0x3cbbbe0] Final|Native|Public|BlueprintCallable 
	// FVertexInstanceID CreateVertexInstance(FVertexID VertexID);                                                              // [0x3cbbb40] Final|Native|Public|BlueprintCallable 
	// FVertexID CreateVertex();                                                                                                // [0x3cbbb00] Final|Native|Public|BlueprintCallable 
	// void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x3cbb950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x3cbb7e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x3cbb630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID);                                                           // [0x3cbb5b0] Final|Native|Public|BlueprintCallable 
	// FPolygonGroupID CreatePolygonGroup();                                                                                    // [0x3cbb570] Final|Native|Public|BlueprintCallable 
	// FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x3cbb400] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1);                                         // [0x3cbb2e0] Final|Native|Public|BlueprintCallable 
	// FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1);                                                            // [0x3cbb200] Final|Native|Public|BlueprintCallable 
	// void ComputePolygonTriangulation(FPolygonID PolygonID);                                                                  // [0x3cbb180] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MeshDescription.ElementID
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FElementID
{ 
	int32_t                                            IDValue;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/MeshDescription.PolygonID
/// Size: 0x0000 (0 bytes) (0x000004 - 0x000004) align 4 pad: 0x0000
struct FPolygonID : FElementID
{ 
};

/// Struct /Script/MeshDescription.PolygonGroupID
/// Size: 0x0000 (0 bytes) (0x000004 - 0x000004) align 4 pad: 0x0000
struct FPolygonGroupID : FElementID
{ 
};

/// Struct /Script/MeshDescription.TriangleID
/// Size: 0x0000 (0 bytes) (0x000004 - 0x000004) align 4 pad: 0x0000
struct FTriangleID : FElementID
{ 
};

/// Struct /Script/MeshDescription.EdgeID
/// Size: 0x0000 (0 bytes) (0x000004 - 0x000004) align 4 pad: 0x0000
struct FEdgeID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexInstanceID
/// Size: 0x0000 (0 bytes) (0x000004 - 0x000004) align 4 pad: 0x0000
struct FVertexInstanceID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexID
/// Size: 0x0000 (0 bytes) (0x000004 - 0x000004) align 4 pad: 0x0000
struct FVertexID : FElementID
{ 
};

