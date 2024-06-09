
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MRMesh

/// Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent
/// Size: 0x0000 (0 bytes) (0x0000C0 - 0x0000C0) align 8 pad: 0x0000
class UMagicLeapHandMeshingComponent : public UActorComponent
{ 
public:
	// void SetUseWeightedNormals(bool bInUseWeightedNormals);                                                                  // [0x21fa5a0] Final|Native|Public|BlueprintCallable 
	// bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x21fa470] Final|Native|Public|BlueprintCallable 
	// bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x21fa2e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x21fa510] Final|Native|Static|Public|BlueprintCallable 
	// bool DestroyClient();                                                                                                    // [0x21fa440] Final|Native|Static|Public|BlueprintCallable 
	// bool CreateClient();                                                                                                     // [0x21fa410] Final|Native|Static|Public|BlueprintCallable 
	// bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x21fa380] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/MagicLeapHandMeshing.MagicLeapHandMeshBlock
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FMagicLeapHandMeshBlock
{ 
	int32_t                                            IndexCount;                                                 // 0x0000   (0x0004)  
	int32_t                                            VertexCount;                                                // 0x0004   (0x0004)  
	TArray<FVector>                                    Vertex;                                                     // 0x0008   (0x0010)  
	TArray<int32_t>                                    Index;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/MagicLeapHandMeshing.MagicLeapHandMesh
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FMagicLeapHandMesh
{ 
	int32_t                                            Version;                                                    // 0x0000   (0x0004)  
	int32_t                                            DataCount;                                                  // 0x0004   (0x0004)  
	TArray<FMagicLeapHandMeshBlock>                    Data;                                                       // 0x0008   (0x0010)  
};

