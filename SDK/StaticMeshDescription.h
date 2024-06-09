
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MeshDescription

/// Class /Script/StaticMeshDescription.StaticMeshDescription
/// Size: 0x0000 (0 bytes) (0x0003C8 - 0x0003C8) align 8 pad: 0x0000
class UStaticMeshDescription : public UMeshDescriptionBase
{ 
public:
	// void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32_t UVIndex);                             // [0x3cc87f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, FName& SlotName);                                   // [0x3cc8710] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32_t UVIndex);                                      // [0x3cc8630] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ); // [0x3cc82f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/StaticMeshDescription.UVMapSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 pad: 0x0000
struct FUVMapSettings
{ 
	FVector                                            Size;                                                       // 0x0000   (0x000C)  
	FVector2D                                          UVTile;                                                     // 0x000C   (0x0008)  
	FVector                                            Position;                                                   // 0x0014   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0020   (0x000C)  
	FVector                                            Scale;                                                      // 0x002C   (0x000C)  
};

