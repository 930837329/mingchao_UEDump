
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/ProceduralMeshComponent.EProcMeshSliceCapOption
/// Size: 0x01 (1 bytes)
enum class EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap                                                   = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap                                  = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap                                    = 2
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshTangent
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FProcMeshTangent
{ 
	FVector                                            TangentX;                                                   // 0x0000   (0x000C)  
	bool                                               bFlipTangentY;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshVertex
/// Size: 0x006C (108 bytes) (0x000000 - 0x00006C) align 4 pad: 0x0000
struct FProcMeshVertex
{ 
	FVector                                            Position;                                                   // 0x0000   (0x000C)  
	FVector                                            Normal;                                                     // 0x000C   (0x000C)  
	FProcMeshTangent                                   Tangent;                                                    // 0x0018   (0x0010)  
	FColor                                             Color;                                                      // 0x0028   (0x0004)  
	FVector2D                                          uv0;                                                        // 0x002C   (0x0008)  
	FVector2D                                          uv1;                                                        // 0x0034   (0x0008)  
	FVector2D                                          uv2;                                                        // 0x003C   (0x0008)  
	FVector2D                                          uv3;                                                        // 0x0044   (0x0008)  
	FVector2D                                          UV4;                                                        // 0x004C   (0x0008)  
	FVector2D                                          UV5;                                                        // 0x0054   (0x0008)  
	FVector2D                                          UV6;                                                        // 0x005C   (0x0008)  
	FVector2D                                          UV7;                                                        // 0x0064   (0x0008)  
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshSection
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FProcMeshSection
{ 
	TArray<FProcMeshVertex>                            ProcVertexBuffer;                                           // 0x0000   (0x0010)  
	TArray<uint32_t>                                   ProcIndexBuffer;                                            // 0x0010   (0x0010)  
	FBox                                               SectionLocalBox;                                            // 0x0020   (0x001C)  
	bool                                               bEnableCollision;                                           // 0x003C   (0x0001)  
	bool                                               bSectionVisible;                                            // 0x003D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Class /Script/ProceduralMeshComponent.ProceduralMeshComponent
/// Size: 0x0068 (104 bytes) (0x000508 - 0x000570) align 16 pad: 0x0000
class UProceduralMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0508   (0x0008)  MISSED
	bool                                               bUseComplexAsSimpleCollision;                               // 0x0510   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x0511   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0512   (0x0006)  MISSED
	class UBodySetup*                                  ProcMeshBodySetup;                                          // 0x0518   (0x0008)  
	TArray<FProcMeshSection>                           ProcMeshSections;                                           // 0x0520   (0x0010)  
	TArray<FKConvexElem>                               CollisionConvexElems;                                       // 0x0530   (0x0010)  
	FBoxSphereBounds                                   LocalBounds;                                                // 0x0540   (0x001C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x055C   (0x0004)  MISSED
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                        // 0x0560   (0x0010)  
	// void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& uv0, TArray<FVector2D>& uv1, TArray<FVector2D>& uv2, TArray<FVector2D>& uv3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // [0x152e6c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void UpdateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& uv0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // [0x152e3e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);                                                   // [0x152e0c0] Final|Native|Public|BlueprintCallable 
	// void KuroCreateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& uv0, TArray<FVector2D>& uv1, TArray<FVector2D>& uv2, TArray<FVector2D>& uv3, TArray<FVector2D>& UV4, TArray<FVector2D>& UV5, TArray<FVector2D>& UV6, TArray<FVector2D>& UV7, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0x152da90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool IsMeshSectionVisible(int32_t SectionIndex);                                                                         // [0x152d9f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumSections();                                                                                                // [0x152d400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& uv0, TArray<FVector2D>& uv1, TArray<FVector2D>& uv2, TArray<FVector2D>& uv3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0x152cd00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void CreateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& uv0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0x152c980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void ClearMeshSection(int32_t SectionIndex);                                                                             // [0x152bfb0] Final|Native|Public|BlueprintCallable 
	// void ClearCollisionConvexMeshes();                                                                                       // [0x152bf90] Final|Native|Public|BlueprintCallable 
	// void ClearAllMeshSections();                                                                                             // [0x152bf70] Final|Native|Public|BlueprintCallable 
	// void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);                                                                // [0x152bc40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial); // [0x152e190] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVS, TArray<FProcMeshTangent>& Tangents); // [0x152d6f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVS, TArray<FProcMeshTangent>& Tangents); // [0x152d430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GenerateBoxMesh(FVector BoxRadius, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVS, TArray<FProcMeshTangent>& Tangents); // [0x152d170] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void CreateGridMeshWelded(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVS, float GridSpacing); // [0x152c750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, TArray<int32_t>& Triangles);                     // [0x152c5e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CreateGridMeshSplit(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVS, TArray<FVector2D>& UV1s, float GridSpacing); // [0x152c340] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision); // [0x152c1f0] Final|Native|Static|Public|BlueprintCallable 
	// void ConvertQuadToTriangles(TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3);     // [0x152c040] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CalculateTangentsForMesh(TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector2D>& UVS, TArray<FVector>& Normals, TArray<FProcMeshTangent>& Tangents); // [0x152bd30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

