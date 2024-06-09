
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/PrefabSystem.ActorComponentPrefabData
/// Size: 0x01E8 (488 bytes) (0x000030 - 0x000218) align 8 pad: 0x0000
class UActorComponentPrefabData : public UAssetUserData
{ 
public:
	FGuid                                              PrefabInstanceGuid;                                         // 0x0030   (0x0010)  
	FGuid                                              SourcePrefabGuid;                                           // 0x0040   (0x0010)  
	int32_t                                            SourceComponentFileID;                                      // 0x0050   (0x0004)  
	int32_t                                            SourceActorFileID;                                          // 0x0054   (0x0004)  
	FGuid                                              OuterPrefabGuid;                                            // 0x0058   (0x0010)  
	int32_t                                            OuterPrefabInstanceFileID;                                  // 0x0068   (0x0004)  
	FGuid                                              OuterPrefabInstanceGuid;                                    // 0x006C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	SDK_UNDEFINED(80,678) /* TMap<FGuid, int32_t> */   __um(WithinOuterPrefabActorFileIDMap);                      // 0x0080   (0x0050)  
	SDK_UNDEFINED(80,679) /* TMap<FGuid, int32_t> */   __um(WithinOuterPrefabComponentFileIDMap);                  // 0x00D0   (0x0050)  
	SDK_UNDEFINED(80,680) /* TSet<FName> */            __um(ModifiedPropertyFNames);                               // 0x0120   (0x0050)  
	SDK_UNDEFINED(80,681) /* TMap<FGuid, FString> */   __um(OuterPrefabModifedPropertiesMap);                      // 0x0170   (0x0050)  
	SDK_UNDEFINED(80,682) /* TMap<TWeakObjectPtr<UObject*>, int32_t> */ __um(DeepCopyObjectsFileIDMap);            // 0x01C0   (0x0050)  
	bool                                               bIsAnyPrefabInstanceRoot;                                   // 0x0210   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0211   (0x0007)  MISSED
};

/// Struct /Script/PrefabSystem.ObjectSerializeData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FObjectSerializeData
{ 
	int32_t                                            FileID;                                                     // 0x0000   (0x0004)  
	uint32_t                                           ObjectFlags;                                                // 0x0004   (0x0004)  
	int32_t                                            ClassIndex;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/PrefabSystem.ActorSerializeData
/// Size: 0x003C (60 bytes) (0x00000C - 0x000048) align 8 pad: 0x0000
struct FActorSerializeData : FObjectSerializeData
{ 
	int32_t                                            ParentActorFileID;                                          // 0x000C   (0x0004)  
	int32_t                                            RootComponentFileID;                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<char>                                       ActorPropertyData;                                          // 0x0018   (0x0010)  
	int32_t                                            RootClassIndex;                                             // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<char>                                       RootComponentPropertyData;                                  // 0x0030   (0x0010)  
	int32_t                                            HierarchyIndex;                                             // 0x0040   (0x0004)  
	bool                                               IsActive;                                                   // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Struct /Script/PrefabSystem.ComponentSerializeData
/// Size: 0x002C (44 bytes) (0x00000C - 0x000038) align 8 pad: 0x0000
struct FComponentSerializeData : FObjectSerializeData
{ 
	int32_t                                            OuterFileID;                                                // 0x000C   (0x0004)  
	int32_t                                            ParentComponentFileID;                                      // 0x0010   (0x0004)  
	int32_t                                            HierarchyIndex;                                             // 0x0014   (0x0004)  
	FName                                              Name;                                                       // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<char>                                       PropertyData;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/PrefabSystem.NestedPrefabInstanceData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FNestedPrefabInstanceData
{ 
	int32_t                                            PrefabInstanceFileID;                                       // 0x0000   (0x0004)  
	FGuid                                              SourcePrefabGuid;                                           // 0x0004   (0x0010)  
	int32_t                                            ParentFileID;                                               // 0x0014   (0x0004)  
	int32_t                                            HierarchyIndex;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FSoftObjectPath                                    SourcePrefabPath;                                           // 0x0020   (0x0020)  
	class UObject*                                     SourcePrefabAsset;                                          // 0x0040   (0x0008)  
};

/// Struct /Script/PrefabSystem.NestedPrefabInstanceChain
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNestedPrefabInstanceChain
{ 
	int32_t                                            FileID;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<int32_t>                                    FileIDChain;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/PrefabSystem.VirtualObjectSerializeData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FVirtualObjectSerializeData
{ 
	int32_t                                            FileID;                                                     // 0x0000   (0x0004)  
	int32_t                                            PrefabInstanceChainFileID;                                  // 0x0004   (0x0004)  
	int32_t                                            SourcePrefabObjectFileID;                                   // 0x0008   (0x0004)  
};

/// Struct /Script/PrefabSystem.PropertyModificationData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FPropertyModificationData
{ 
	int32_t                                            TargetFileID;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      PropertyFNames;                                             // 0x0008   (0x0010)  
	TArray<char>                                       PropertyData;                                               // 0x0018   (0x0010)  
};

/// Class /Script/PrefabSystem.PrefabAsset
/// Size: 0x00B8 (184 bytes) (0x000038 - 0x0000F0) align 8 pad: 0x0000
class UPrefabAsset : public UPrimaryDataAsset
{ 
public:
	int32_t                                            NextFileID;                                                 // 0x0038   (0x0004)  
	uint16_t                                           Version;                                                    // 0x003C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	FGuid                                              Guid;                                                       // 0x0040   (0x0010)  
	TArray<class UObject*>                             ReferenceAssets;                                            // 0x0050   (0x0010)  
	TArray<FName>                                      ReferenceFNames;                                            // 0x0060   (0x0010)  
	TArray<class UClass*>                              ReferenceClasses;                                           // 0x0070   (0x0010)  
	TArray<FSoftObjectPath>                            SoftReferenceData;                                          // 0x0080   (0x0010)  
	TArray<FActorSerializeData>                        ActorsSerializeData;                                        // 0x0090   (0x0010)  
	TArray<FComponentSerializeData>                    ComponentsSerializeData;                                    // 0x00A0   (0x0010)  
	TArray<FNestedPrefabInstanceData>                  NestedPrefabInstancesData;                                  // 0x00B0   (0x0010)  
	TArray<FNestedPrefabInstanceChain>                 NestedPrefabInstanceChains;                                 // 0x00C0   (0x0010)  
	TArray<FVirtualObjectSerializeData>                VirtualObjectsSerializeData;                                // 0x00D0   (0x0010)  
	TArray<FPropertyModificationData>                  PropertyModificationsSerializeData;                         // 0x00E0   (0x0010)  
};

/// Class /Script/PrefabSystem.PrefabAssetManager
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000D0) align 8 pad: 0x0000
class UPrefabAssetManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0030   (0x00A0)  MISSED
};

/// Class /Script/PrefabSystem.PrefabBlueprintFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UPrefabBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// class AActor* Instantiate(class UPrefabAsset* PrefabAsset, class USceneComponent* ParentComponent, class ULevel* InLevel, bool bTemporaryEditorActor); // [0xc63d30] Final|Native|Static|Public 
	// void ApplyPrefab(class AActor* Actor);                                                                                   // [0xc63cb0] Final|Native|Static|Public 
};

