
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/AssetRegistry.AssetRegistryImpl
/// Size: 0x0790 (1936 bytes) (0x000030 - 0x0007C0) align 8 pad: 0x0000
class UAssetRegistryImpl : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x790];                                     // 0x0030   (0x0790)  MISSED
};

/// Class /Script/AssetRegistry.AssetRegistryHelpers
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAssetRegistryHelpers : public UObject
{ 
public:
	// FSoftObjectPath ToSoftObjectPath(FAssetData& InAssetData);                                                               // [0x3c86090] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FARFilter SetFilterTagsAndValues(FARFilter& InFilter, TArray<FTagAndValue>& InTagsAndValues);                            // [0x3c85db0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool IsValid(FAssetData& InAssetData);                                                                                   // [0x3c85210] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool IsUAsset(FAssetData& InAssetData);                                                                                  // [0x3c850f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool IsRedirector(FAssetData& InAssetData);                                                                              // [0x3c84fd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool IsAssetLoaded(FAssetData& InAssetData);                                                                             // [0x3c84c30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool GetTagValue(FAssetData& InAssetData, FName& InTagName, FString& OutTagValue);                                       // [0x3c84960] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FString GetFullName(FAssetData& InAssetData);                                                                            // [0x3c84680] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FString GetExportTextName(FAssetData& InAssetData);                                                                      // [0x3c84520] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// class UClass* GetClass(FAssetData& InAssetData);                                                                         // [0x3c84400] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// TScriptInterface<Class> GetAssetRegistry();                                                                              // [0x3c83b20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class UObject* GetAsset(FAssetData& InAssetData);                                                                        // [0x3c83890] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FAssetData CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);                                           // [0x3c83510] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AssetRegistry.AssetRegistry
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAssetRegistry : public UInterface
{ 
public:
	// void WaitForCompletion();                                                                                                // [0x3c864c0] Native|Public|BlueprintCallable 
	// void UseFilterToExcludeAssets(TArray<FAssetData>& AssetDataList, FARFilter& Filter);                                     // [0x3c861c0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// void SearchAllAssets(bool bSynchronousSearch);                                                                           // [0x3c85d20] Native|Public|BlueprintCallable 
	// void ScanPathsSynchronous(TArray<FString>& InPaths, bool bForceRescan, bool bIgnoreBlackListScanFilters);                // [0x3c85bb0] Native|Public|HasOutParms|BlueprintCallable 
	// void ScanModifiedAssetFiles(TArray<FString>& InFilePaths);                                                               // [0x3c85ae0] Native|Public|HasOutParms|BlueprintCallable 
	// void ScanFilesSynchronous(TArray<FString>& InFilePaths, bool bForceRescan);                                              // [0x3c859b0] Native|Public|HasOutParms|BlueprintCallable 
	// void RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, FARFilter& Filter);                                       // [0x3c856b0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// void PrioritizeSearchPath(FString PathToPrioritize);                                                                     // [0x3c85610] Native|Public|BlueprintCallable 
	// bool K2_GetReferencers(FName PackageName, FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers); // [0x3c854a0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// bool K2_GetDependencies(FName PackageName, FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies); // [0x3c85330] Native|Public|HasOutParms|BlueprintCallable|Const 
	// bool IsPathsForceScanned(TArray<FString>& InPaths);                                                                      // [0x3c84ef0] Native|Public|HasOutParms|BlueprintCallable 
	// bool IsPathForceScanned(FString InPath);                                                                                 // [0x3c84e40] Native|Public|BlueprintCallable 
	// bool IsLoadingAssets();                                                                                                  // [0x3c84e10] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsAssetPathLoaded(FString& Path);                                                                                   // [0x3c84d50] Native|Public|HasOutParms|BlueprintCallable|Const 
	// bool HasAssets(FName PackagePath, bool bRecursive);                                                                      // [0x3c84b30] Native|Public|BlueprintCallable|Const 
	// void GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse);                                     // [0x3c847e0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // [0x3c84200] Native|Public|HasOutParms|BlueprintCallable|Const 
	// bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);         // [0x3c84030] Native|Public|HasOutParms|BlueprintCallable|Const 
	// bool GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses);                        // [0x3c83e60] Native|Public|HasOutParms|BlueprintCallable|Const 
	// bool GetAssets(FARFilter& Filter, TArray<FAssetData>& OutAssetData);                                                     // [0x3c83b60] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// FAssetData GetAssetByObjectPath(FName ObjectPath, bool bIncludeOnlyOnDiskAssets);                                        // [0x3c839b0] Native|Public|HasDefaults|BlueprintCallable|Const 
	// void GetAllCachedPaths(TArray<FString>& OutPathList);                                                                    // [0x3c837c0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);                                      // [0x3c83650] Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Struct /Script/AssetRegistry.TagAndValue
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FTagAndValue
{ 
	FName                                              Tag;                                                        // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/AssetRegistry.AssetRegistryDependencyOptions
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align 1 pad: 0x0000
struct FAssetRegistryDependencyOptions
{ 
	bool                                               bIncludeSoftPackageReferences;                              // 0x0000   (0x0001)  
	bool                                               bIncludeHardPackageReferences;                              // 0x0001   (0x0001)  
	bool                                               bIncludeSearchableNames;                                    // 0x0002   (0x0001)  
	bool                                               bIncludeSoftManagementReferences;                           // 0x0003   (0x0001)  
	bool                                               bIncludeHardManagementReferences;                           // 0x0004   (0x0001)  
};

