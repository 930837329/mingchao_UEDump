
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMeshReconstructorBase : public UObject
{ 
public:
	// void StopReconstruction();                                                                                               // [0x3633740] Native|Public|BlueprintCallable 
	// void StartReconstruction();                                                                                              // [0x14b2530] Native|Public|BlueprintCallable 
	// void PauseReconstruction();                                                                                              // [0x3633570] Native|Public|BlueprintCallable 
	// bool IsReconstructionStarted();                                                                                          // [0x1779ea0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsReconstructionPaused();                                                                                           // [0x3633540] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void DisconnectMRMesh();                                                                                                 // [0x36333c0] Native|Public        
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                        // [0x36332a0] Native|Public        
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0078 (120 bytes) (0x000218 - 0x000290) align 16 pad: 0x0000
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,1286) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                              // 0x0218   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0228   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0229   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x022A   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x022B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x022C   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0230   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0240   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0250   (0x0010)  
	float                                              UpdateInterval;                                             // 0x0260   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0264   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x0268   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0270   (0x0020)  MISSED
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x25a7960] MulticastDelegate|Public|Delegate|HasOutParms 
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x36333e0] Final|Native|Public|BlueprintCallable 
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x3633330] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x00C0 (192 bytes) (0x0004E0 - 0x0005A0) align 16 pad: 0x0000
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x04E0   (0x0010)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x04F0   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x04F8   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0500   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0501   (0x0001)  
	bool                                               bNeverCreateCollisionMesh;                                  // 0x0502   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0503   (0x0005)  MISSED
	class UBodySetup*                                  CachedBodySetup;                                            // 0x0508   (0x0008)  
	TArray<class UBodySetup*>                          BodySetups;                                                 // 0x0510   (0x0010)  
	unsigned char                                      UnknownData02_7[0x80];                                      // 0x0520   (0x0080)  MISSED
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                         // [0x1f79cf0] Native|Public|BlueprintCallable 
	// void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x36336b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetUseWireframe(bool bUseWireframe);                                                                                // [0x3633620] Final|Native|Public|BlueprintCallable 
	// void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x3633590] Final|Native|Public|BlueprintCallable 
	// bool IsConnected();                                                                                                      // [0x3633500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FLinearColor GetWireframeColor();                                                                                        // [0x36334d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// bool GetUseWireframe();                                                                                                  // [0x36334b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetEnableMeshOcclusion();                                                                                           // [0x3633490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void ForceNavMeshUpdate();                                                                                               // [0x3633470] Final|Native|Public|BlueprintCallable 
	// void Clear();                                                                                                            // [0x3633270] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

