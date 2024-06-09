
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: KuroData
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: NavigationSystem

/// Enum /Script/KuroUtility.ECollectActorType
/// Size: 0x01 (1 bytes)
enum class ECollectActorType : uint8_t
{
	ECollectActorType__Default                                                       = 0,
	ECollectActorType__UI                                                            = 1
};

/// Enum /Script/KuroUtility.ESendStage
/// Size: 0x01 (1 bytes)
enum class ESendStage : uint8_t
{
	ESendStage__ESS_None                                                             = 0,
	ESendStage__ESS_Compressing                                                      = 1,
	ESendStage__ESS_Sending                                                          = 2,
	ESendStage__ESS_MultiPartReady                                                   = 3,
	ESendStage__ESS_MultiPartSeding                                                  = 4
};

/// Class /Script/KuroUtility.AsyncLoadState
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UAsyncLoadState : public UObject
{ 
public:
	SDK_UNDEFINED(16,664) /* FMulticastInlineDelegate */ __um(ClassLoadedDelegate);                                // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,665) /* FMulticastInlineDelegate */ __um(ObjectLoadedDelegate);                               // 0x0040   (0x0010)  
	// void AsyncLoadObject(FString InPath, class UObject* UserData);                                                           // [0x101f480] Final|Native|Public|BlueprintCallable 
	// void AsyncLoadClass(FString InPath, class UObject* UserData);                                                            // [0x101f3a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroUtility.HoldPreloadObject
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000090) align 8 pad: 0x0000
class UHoldPreloadObject : public UObject
{ 
public:
	TArray<class UObject*>                             CommonAssets;                                               // 0x0030   (0x0010)  
	SDK_UNDEFINED(80,666) /* TMap<int32_t, FPreloadObjectCollection> */ __um(EntityAssetMap);                      // 0x0040   (0x0050)  
	// bool RemoveEntityAssets(int32_t EntityID);                                                                               // [0x1020e60] Final|Native|Public  
	// bool GetEntityAssetArray(int32_t EntityID, TArray<UObject*>& OutAssets);                                                 // [0x1020060] Final|Native|Public|HasOutParms 
	// TArray<UObject*> GetCommonAssetArray();                                                                                  // [0x1020020] Final|Native|Public  
	// void ClearEntityAssetMap();                                                                                              // [0x101f7d0] Final|Native|Public  
	// void ClearCommonAsset();                                                                                                 // [0x101f7b0] Final|Native|Public  
	// void Clear();                                                                                                            // [0x101f700] Final|Native|Public  
	// bool AddEntityAsset(int32_t EntityID, class UObject* InObject);                                                          // [0x101f2d0] Final|Native|Public  
	// void AddCommonAsset(class UObject* InObject);                                                                            // [0x101f180] Final|Native|Public  
};

/// Class /Script/KuroUtility.KuroActor
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class AKuroActor : public AActor
{ 
public:
	// void ReceiveKuroActorGet();                                                                                              // [0x25a7960] Event|Protected|BlueprintEvent 
	// void ReceiveKuroActorBack();                                                                                             // [0x25a7960] Event|Protected|BlueprintEvent 
};

/// Class /Script/KuroUtility.KuroActorComponent
/// Size: 0x0000 (0 bytes) (0x0000C0 - 0x0000C0) align 8 pad: 0x0000
class UKuroActorComponent : public UActorComponent
{ 
public:
	// void EditorTickComponent(float DeltaTime);                                                                               // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/KuroUtility.KuroActorEventBinder
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UKuroActorEventBinder : public UObject
{ 
public:
	SDK_UNDEFINED(16,667) /* FMulticastInlineDelegate */ __um(callback);                                           // 0x0030   (0x0010)  
};

/// Class /Script/KuroUtility.KuroActorManager
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroActorManager : public UBlueprintFunctionLibrary
{ 
public:
	// void UnregisterComponent(class UActorComponent* Componet);                                                               // [0x1021450] Final|Native|Static|Public|BlueprintCallable 
	// class AActor* SpawnActor(class UObject* WorldContextObject, class UClass* ActorClass, FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class APawn* Instigator, bool bAsPoolActor); // [0x1021110] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void ResetUObjectByCDO(class UObject* Obj);                                                                              // [0x1021010] Final|Native|Static|Public|BlueprintCallable 
	// void ResetUberGraph(class UObject* Obj);                                                                                 // [0x1021090] Final|Native|Static|Public|BlueprintCallable 
	// void ResetDelegates(class AActor* Actor);                                                                                // [0x1020f90] Final|Native|Static|Public|BlueprintCallable 
	// bool ResetActorToDefault(class AActor* Actor);                                                                           // [0x1020f00] Final|Native|Static|Public|BlueprintCallable 
	// void RegisterActorSkipProperties(class UClass* Class, TArray<FPropertyPair>& properties);                                // [0x1020d80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool IsPooledActor(class AActor* Actor);                                                                                 // [0x1020600] Final|Native|Static|Public|BlueprintCallable 
	// bool IsActorPoolEnable();                                                                                                // [0x10205d0] Final|Native|Static|Public|BlueprintCallable 
	// void InitActorManager();                                                                                                 // [0x10202f0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetResourceSizeBytes(class AActor* Actor, bool isExclusive);                                                     // [0x1020160] Final|Native|Static|Public|BlueprintCallable 
	// TArray<FString> GetAllAcquiredComponents(class AActor* Actor);                                                           // [0x101ff00] Final|Native|Static|Public|BlueprintCallable 
	// void DestroyActor(class AActor* Actor);                                                                                  // [0x101fd90] Final|Native|Static|Public|BlueprintCallable 
	// bool ClearAcquiredComponents(class AActor* Actor);                                                                       // [0x101f720] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroApplicationLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroApplicationLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool UnBind();                                                                                                           // [0x1021420] Final|Native|Static|Public|BlueprintCallable 
	// bool Test(int32_t Type);                                                                                                 // [0x1021390] Final|Native|Static|Public|BlueprintCallable 
	// bool AddEditorPreEndPIEDelegate(FDelegateProperty& InDelegate);                                                          // [0x101f210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool AddApplicationLifetimeDelegate(FDelegateProperty& InDelegate);                                                      // [0x101f0c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroBlockingVolume
/// Size: 0x0010 (16 bytes) (0x0002E0 - 0x0002F0) align 8 pad: 0x0000
class AKuroBlockingVolume : public AVolume
{ 
public:
	FName                                              VolumeId;                                                   // 0x02E0   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02EC   (0x0004)  MISSED
};

/// Class /Script/KuroUtility.KuroBooleanEventBinder
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UKuroBooleanEventBinder : public UObject
{ 
public:
	SDK_UNDEFINED(16,668) /* FMulticastInlineDelegate */ __um(callback);                                           // 0x0030   (0x0010)  
};

/// Class /Script/KuroUtility.KuroBpDataAsset
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
class UKuroBpDataAsset : public UPrimaryDataAsset
{ 
public:
};

/// Class /Script/KuroUtility.KuroBpDataAssetGroup
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UKuroBpDataAssetGroup : public UDataAsset
{ 
public:
	TArray<class UKuroBpDataAsset*>                    Data;                                                       // 0x0038   (0x0010)  
};

/// Class /Script/KuroUtility.KuroStateMachineBase
/// Size: 0x0070 (112 bytes) (0x000038 - 0x0000A8) align 8 pad: 0x0000
class UKuroStateMachineBase : public UPrimaryDataAsset
{ 
public:
	FString                                            Name;                                                       // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,669) /* TMap<FString, UKuroStateMachineConditionBase*> */ __um(Transitions);                  // 0x0048   (0x0050)  
	TArray<class UKuroStateMachineBase*>               Children;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/KuroUtility.KuroStateMachineGroup
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UKuroStateMachineGroup : public UDataAsset
{ 
public:
	TArray<class UKuroStateMachineBase*>               StateMachineList;                                           // 0x0038   (0x0010)  
};

/// Class /Script/KuroUtility.KuroStateMachineConditionBase
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
class UKuroStateMachineConditionBase : public UPrimaryDataAsset
{ 
public:
};

/// Class /Script/KuroUtility.KuroStateMachineConditionAnd
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UKuroStateMachineConditionAnd : public UKuroStateMachineConditionBase
{ 
public:
	TArray<class UKuroStateMachineConditionBase*>      Conditions;                                                 // 0x0038   (0x0010)  
};

/// Class /Script/KuroUtility.KuroStateMachineConditionOr
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UKuroStateMachineConditionOr : public UKuroStateMachineConditionBase
{ 
public:
	TArray<class UKuroStateMachineConditionBase*>      Conditions;                                                 // 0x0038   (0x0010)  
};

/// Class /Script/KuroUtility.KuroCollectActorComponent
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UKuroCollectActorComponent : public UActorComponent
{ 
public:
	ECollectActorType                                  CollectActorType;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00C1   (0x0007)  MISSED
	// class AActor* GetActorWithTag(FName Tag, ECollectActorType Type);                                                        // [0x101fe10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroCompressLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroCompressLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void CompressFilesOrFoldersAsync(TArray<FString>& Paths, FString DestPath, FDelegateProperty& OnProgress, FDelegateProperty& OnCompressComplete, FDelegateProperty& OnFail, bool bAutoIncludeFilesUnderFolder, int64_t MaxSingleFileReadSize); // [0x101fa80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CompressFileOrFolder(FString Path, FString DestPath, FDelegateProperty& OnProgress, FDelegateProperty& OnCompressComplete, FDelegateProperty& OnFail, int64_t MaxSingleFileReadSize); // [0x101f7f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroEntityActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AKuroEntityActor : public AKuroActor
{ 
public:
	int32_t                                            EntityID;                                                   // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02AC   (0x0004)  MISSED
};

/// Class /Script/KuroUtility.KuroIntEventBinder
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UKuroIntEventBinder : public UObject
{ 
public:
	SDK_UNDEFINED(16,670) /* FMulticastInlineDelegate */ __um(callback);                                           // 0x0030   (0x0010)  
};

/// Class /Script/KuroUtility.KuroJsStatsLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroJsStatsLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/KuroUtility.KuroMathLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroMathLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// FVector2D Min(FVector2D& A, FVector2D& B);                                                                               // [0x1020ca0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FVector2D Max(FVector2D& A, FVector2D& B);                                                                               // [0x1020bc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// int64_t LongBitwiseXOr(int64_t Num1, int64_t Num2);                                                                      // [0x1020af0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int64_t LongBitwiseOr(int64_t Num1, int64_t Num2);                                                                       // [0x1020a20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int64_t LongBitwiseNot(int64_t Num);                                                                                     // [0x1020990] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int64_t LongBitwiseAnd(int64_t Num1, int64_t Num2);                                                                      // [0x10208c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int64_t KuroStringToInt64(FString StringNum);                                                                            // [0x10207b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int32_t IntBitwiseXOr(int32_t Num1, int32_t Num2);                                                                       // [0x1020510] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int32_t IntBitwiseOr(int32_t Num1, int32_t Num2);                                                                        // [0x1020450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int32_t IntBitwiseNot(int32_t Num);                                                                                      // [0x10203d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int32_t IntBitwiseAnd(int32_t Num1, int32_t Num2);                                                                       // [0x1020310] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int64_t BitwiseRightShift(int64_t Source, int32_t Bit);                                                                  // [0x101f630] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// int64_t BitwiseLeftShift(int64_t Source, int32_t Bit);                                                                   // [0x101f560] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/KuroUtility.KuroMeshTextureFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroMeshTextureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool IsStaticMeshComponentStreamingComplete(class UStaticMesh* StaticMesh);                                              // [0x1020720] Final|Native|Static|Private|BlueprintCallable 
	// bool IsSkeletalMeshComponentStreamingComplete(class USkeletalMesh* SkeletalMesh);                                        // [0x1020690] Final|Native|Static|Private|BlueprintCallable 
	// void HandleSkeletalMeshComponentStreaming(class USkeletalMesh* SkeletalMesh, bool bStartForceStreamIn);                  // [0x1020230] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroPerceptionEventBinder
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UKuroPerceptionEventBinder : public UObject
{ 
public:
	SDK_UNDEFINED(16,671) /* FMulticastInlineDelegate */ __um(callback);                                           // 0x0030   (0x0010)  
};

/// Class /Script/KuroUtility.KuroPhysicsLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroPhysicsLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool GetSphereHitPoint(FVector StartLocation, FVector EndLocation, class AActor* Actor, class UPrimitiveComponent* TraceComp, float Radius, class UKuroHitResult* HitResult, float DrawDuration, bool ForceTrace); // [0x1025fd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// bool GetHitPoint(FVector StartLocation, FVector EndLocation, class AActor* Actor, class UPrimitiveComponent* TraceComp, class UKuroHitResult* HitResult, float DrawDuration, bool ForceTrace); // [0x1025450] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroSilenceGameMode
/// Size: 0x0008 (8 bytes) (0x000398 - 0x0003A0) align 8 pad: 0x0000
class AKuroSilenceGameMode : public AGameMode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0398   (0x0008)  MISSED
	// void GameInitialized();                                                                                                  // [0x1024120] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroStaticAndroidLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroStaticAndroidLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool GetDeviceIsRooted();                                                                                                // [0xf16ea0] Final|Native|Static|Public|BlueprintCallable 
	// bool GetDeviceIsEmulator();                                                                                              // [0xf16ea0] Final|Native|Static|Public|BlueprintCallable 
	// void ClearAndroidScreenChangeDelegate();                                                                                 // [0x1023390] Final|Native|Static|Public|BlueprintCallable 
	// void AddAndroidScreenChangeDelegate(FDelegateProperty& Handler);                                                         // [0x1023260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroStaticiOSLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroStaticiOSLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool GetDeviceJailbroken();                                                                                              // [0xf16ea0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroStaticLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroStaticLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void UnRegisterCustomCommandProcessor(FString Category);                                                                 // [0xf75540] Final|Native|Static|Public|BlueprintCallable 
	// int32_t ToUnixTimestamp(FDateTime InDataTime);                                                                           // [0x1027e10] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// bool ToggleSequenceNodeActiveByTag(class ALevelSequenceActor* Actor, FName TagName, bool bActive);                       // [0x1027e90] Final|Native|Static|Private|BlueprintCallable 
	// void StopAllMontagesBySlotName(class UAnimInstance* UAnimInstance, FName InSlotName, float InBlendOutTime);              // [0x1027cf0] Final|Native|Static|Public|BlueprintCallable 
	// class AActor* SpawnActorFromAnother(class AActor* Actor, class AActor* Parent);                                          // [0x1027c20] Final|Native|Static|Public|BlueprintCallable 
	// void SetStaticMeshVelocity(TArray<AActor*> Actors, FVector NewVelocity);                                                 // [0x1027ae0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void SetSplinePointsWithType(class USplineComponent* Spline, TArray<FVector>& Points, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, TEnumAsByte<ESplinePointType> Type, bool bUpdateSpline); // [0x1027920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetMontageANIndex(class UAnimMontage* AnimMontage);                                                                 // [0x10278a0] Final|Native|Static|Public|BlueprintCallable 
	// void SetGameThreadAffinity(bool bIsInFighting);                                                                          // [0xf17190] Final|Native|Static|Public|BlueprintCallable 
	// void SetEditorWidgetSkipTick(bool bSkipTick);                                                                            // [0xf17190] Final|Native|Static|Public|BlueprintCallable 
	// void SetBaseAndSaveBaseLocation(class UCharacterMovementComponent* CharacterMovementComp, class UPrimitiveComponent* NewBase); // [0x10277e0] Final|Native|Static|Public|BlueprintCallable 
	// void SetActorPermanent(class AActor* Actor, bool bIsPermanent, bool bWithAllChildren);                                   // [0x10276d0] Final|Native|Static|Private|BlueprintCallable 
	// void SetActorModify(class AActor* Actor);                                                                                // [0xfe37d0] Final|Native|Static|Private|BlueprintCallable 
	// bool SaveStringToFile(FString SaveText, FString Filename, bool bWithBom);                                                // [0x1027590] Final|Native|Static|Private|BlueprintCallable 
	// void RemoveFromRoot(class UObject* InObject);                                                                            // [0x1027510] Final|Native|Static|Public|BlueprintCallable 
	// void RegisterCustomCommandProcessor(FString Category, FDelegateProperty& Processor);                                     // [0x1027410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void PerceptionConfigureSense(class UAIPerceptionComponent* AIPerception, class UAISenseConfig* AISenseConfig);          // [0x1027350] Final|Native|Static|Public|BlueprintCallable 
	// bool MakeDirectory(FString Path, bool bTree);                                                                            // [0x1027270] Final|Native|Static|Private|BlueprintCallable 
	// TArray<FString> LoadFileToStringArray(FString FileRevisionPath);                                                         // [0x1026f80] Final|Native|Static|Private|BlueprintCallable 
	// bool LoadFileToString(FString& Result, FString Filename);                                                                // [0x1026e70] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// TArray<FString> LoadFilesRecursive(FString Path, FString Filter, bool Files, bool Directories);                          // [0x1027060] Final|Native|Static|Private|BlueprintCallable 
	// FString KuroFormatText(FString Format, TArray<FString> Parameters);                                                      // [0x1026c20] Final|Native|Static|Private|BlueprintCallable 
	// bool IsWorldTearingDown(class UWorld* World);                                                                            // [0x1026b90] Final|Native|Static|Public|BlueprintCallable 
	// bool IsObjectClassByName(class UObject* Object, FName ClassName);                                                        // [0x1026ab0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsModuleLoaded(FString ModelName);                                                                                  // [0x1026a10] Final|Native|Static|Public|BlueprintCallable 
	// bool IsImplementInterface(class UClass* InClass, class UClass* InInterfaceClass);                                        // [0x1026940] Final|Native|Static|Private|BlueprintCallable 
	// bool IsEditor(class UObject* WorldContextObject);                                                                        // [0x10268b0] Final|Native|Static|Private|BlueprintCallable 
	// bool IsBuildTest();                                                                                                      // [0xf16ea0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsBuildShipping();                                                                                                  // [0x1026880] Final|Native|Static|Public|BlueprintCallable 
	// bool IsAsyncLoadingThreadEnabled();                                                                                      // [0x1026850] Final|Native|Static|Private|BlueprintCallable 
	// void IcmpPing(FString IpAddress, float Timeout, FDelegateProperty& InDelegate);                                          // [0x10266b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FString HashStringWithSHA1(FString InString);                                                                            // [0x10265d0] Final|Native|Static|Private|BlueprintCallable 
	// float GetUseMemoryProportion();                                                                                          // [0x1026540] Final|Native|Static|Public|BlueprintCallable 
	// float GetUsedVirtualGB();                                                                                                // [0x10265a0] Final|Native|Static|Public|BlueprintCallable 
	// float GetUsedPhysicalGB();                                                                                               // [0x1026570] Final|Native|Static|Public|BlueprintCallable 
	// float GetUsedMemoryGB();                                                                                                 // [0x1026570] Final|Native|Static|Public|BlueprintCallable 
	// class UMovieSceneTrack* GetTrackByClass(TArray<UMovieSceneTrack*> Tracks, class UClass* Class);                          // [0x1026410] Final|Native|Static|Private|BlueprintCallable 
	// int32_t GetTotalMemoryGB();                                                                                              // [0x10263e0] Final|Native|Static|Public|BlueprintCallable 
	// FString GetStatUnitInfo();                                                                                               // [0x1026360] Final|Native|Static|Public|BlueprintCallable 
	// FRotator GetSplineRotationAtSplinePoint(class USplineComponent* Spline, int32_t PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0x1026250] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void GetSlotNamesByAnimMontage(class UAnimMontage* AnimMontage, TArray<FName>& OutSlotNames);                            // [0x1025ef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// TArray<UMovieSceneTrack*> GetSequenceTracksForObjectBindingID(class ALevelSequenceActor* Actor, FName TagName);          // [0x1025dc0] Final|Native|Static|Private|BlueprintCallable 
	// float GetRawRHITTime();                                                                                                  // [0x1025d60] Final|Native|Static|Public|BlueprintCallable 
	// float GetRawRenderThreadTime();                                                                                          // [0x1025d90] Final|Native|Static|Public|BlueprintCallable 
	// float GetRawGameThreadTime();                                                                                            // [0x1025d30] Final|Native|Static|Public|BlueprintCallable 
	// float GetRawFrameTime();                                                                                                 // [0x1025d00] Final|Native|Static|Public|BlueprintCallable 
	// float GetPlatformTimeInSeconds();                                                                                        // [0x1025cd0] Final|Native|Static|Public|BlueprintCallable 
	// float GetPIEStartTimeInSeconds();                                                                                        // [0x1025c40] Final|Native|Static|Public|BlueprintCallable 
	// float GetPeakUsedVirtualGB();                                                                                            // [0x1025ca0] Final|Native|Static|Public|BlueprintCallable 
	// float GetPeakUsedPhysicalGB();                                                                                           // [0x1025c70] Final|Native|Static|Public|BlueprintCallable 
	// TArray<FVector> GetNavPointData(class UObject* WorldContextObject, int32_t XNumber, int32_t YNumber, int32_t Dis, class ANavigationData* NavData, FVector Point, FVector QueryExtent, class UClass* FilterClass); // [0x1025980] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// void GetLocalHostAddresses(TArray<FString>& OutAddresses, bool bAppendPort);                                             // [0x1025870] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FString GetLLMInfo();                                                                                                    // [0x1025690] Final|Native|Static|Public|BlueprintCallable 
	// class AActor* GetLevelPrefabShowActor(class AActor* Actor);                                                              // [0x10257e0] Final|Native|Static|Public|BlueprintCallable 
	// FString GetLevelPath(class UObject* WorldContextObject);                                                                 // [0x1025710] Final|Native|Static|Private|BlueprintCallable 
	// FString GetGPUInfo();                                                                                                    // [0x10253d0] Final|Native|Static|Public|BlueprintCallable 
	// float GetGPUFrameTime();                                                                                                 // [0x10253a0] Final|Native|Static|Public|BlueprintCallable 
	// FVector GetFrameInfo();                                                                                                  // [0x1025360] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// FVector GetFirstLocationFromSeqTrack(class UMovieScene3DTransformTrack* TransformTrack);                                 // [0x10252c0] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// TArray<FString> GetFilesRecursive(FString Path, FString Filter, bool Files, bool Directories);                           // [0x10250b0] Final|Native|Static|Private|BlueprintCallable 
	// TArray<FString> GetFiles(FString Path, FString Extension);                                                               // [0x1024f30] Final|Native|Static|Private|BlueprintCallable 
	// TArray<FString> GetDirectories(FString Path);                                                                            // [0x1024e00] Final|Native|Static|Private|BlueprintCallable 
	// FString GetDeviceCPU();                                                                                                  // [0x1024d80] Final|Native|Static|Public|BlueprintCallable 
	// class UObject* GetDefaultObject(class UClass* Class);                                                                    // [0x1024cf0] Final|Native|Static|Public|BlueprintCallable 
	// float GetCurCPUFrequency();                                                                                              // [0x1024cc0] Final|Native|Static|Public|BlueprintCallable 
	// FString GetCultureRegion();                                                                                              // [0x1024c40] Final|Native|Static|Public|BlueprintCallable 
	// void GetCreatureGenDirectoryByMap(FString Path, int32_t MapID, bool& Exist, FString& Directory);                         // [0x1024ab0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// void GetCharacterAnimClass(class UClass*& InActorClass, class UClass*& OutAnimClass);                                    // [0x10249d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetCameraShakeInfo(class UClass* CameraShakeClass, FCameraShakeInfo& OutInfo);                                      // [0x10248f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FString GetBlueprintCallstack();                                                                                         // [0x1024870] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetBatteryLevel();                                                                                               // [0x1024840] Final|Native|Static|Public|BlueprintCallable 
	// float GetAvailableVirtualGB();                                                                                           // [0x1024810] Final|Native|Static|Public|BlueprintCallable 
	// float GetAvailablePhysicalGB();                                                                                          // [0x10247e0] Final|Native|Static|Public|BlueprintCallable 
	// void GetAnimSequencesByAnimMontage(class UAnimMontage* AnimMontage, TArray<UAnimSequenceBase*>& OutAnimSequences);       // [0x1024700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetAnimSequenceNotifies(class UAnimSequenceBase* AnimSequence, TArray<FAnimNotifyEvent>& OutNotifies);              // [0x1024600] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void GetAnimMontageNotifies(class UAnimMontage* AnimMontage, TArray<FAnimNotifyEvent>& OutNotifies);                     // [0x1024600] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void GetAnimAssetsByAnimInstance(class UAnimInstance* InAnimInstance, TSet<UAnimationAsset*>& OutAnimationAssets);       // [0x1024480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetAnimAssetsByAnimBlueprintClass(class UClass*& InAnimClass, TSet<UAnimationAsset*>& OutAnimationAssets);          // [0x10242f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void GetAnimAssets(class UAnimBlueprint* InAnimBlueprint, TSet<UAnimationAsset*>& OutAnimationAssets);                   // [0x1024170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// int32_t GetActorCount();                                                                                                 // [0x1024140] Final|Native|Static|Public|BlueprintCallable 
	// FDateTime FromUnixTimestamp(int32_t Timestamp);                                                                          // [0x1024090] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// void ForceGarbageCollection(bool bFullPurge);                                                                            // [0x1024010] Final|Native|Static|Private|BlueprintCallable 
	// bool FileExists(FString Path);                                                                                           // [0x1023f70] Final|Native|Static|Private|BlueprintCallable 
	// void ExitGame(bool Force);                                                                                               // [0x1023ef0] Final|Native|Static|Public|BlueprintCallable 
	// bool ExecuteFunctionByName(class UObject* Object, FString FunctionName, FString& Result);                                // [0x1023d60] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// bool ExecProcess(FString URL, FString Params, int32_t& ReturnCode, FString& OutStd, FString& OutErr);                    // [0x1023b50] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// bool EncompassesPoint(class AVolume* Volume, FVector Point, float SphereRadius);                                         // [0x1023a30] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// bool DirectoryExists(FString Path);                                                                                      // [0x1023990] Final|Native|Static|Private|BlueprintCallable 
	// void DestroyObject(class UObject* Object);                                                                               // [0x1023910] Final|Native|Static|Private|BlueprintCallable 
	// bool DeleteFolder(FString Path, bool bRequireExists, bool bTree);                                                        // [0x10237e0] Final|Native|Static|Private|BlueprintCallable 
	// bool DeleteFile(FString Path, bool bRequireExists, bool bEvenReadOnly, bool bQuiet);                                     // [0x1023670] Final|Native|Static|Private|BlueprintCallable 
	// void CountCurMemory();                                                                                                   // [0x1023650] Final|Native|Static|Public|BlueprintCallable 
	// bool CountCurFrame();                                                                                                    // [0x1023620] Final|Native|Static|Public|BlueprintCallable 
	// bool CopyFile(FString SourcePath, FString DstPath);                                                                      // [0x1023530] Final|Native|Static|Public|BlueprintCallable 
	// TEnumAsByte<ETraceTypeQuery> ConvertToTraceType(TEnumAsByte<ECollisionChannel> InCollisionChannel);                      // [0x10234b0] Final|Native|Static|Private|BlueprintCallable 
	// TEnumAsByte<EObjectTypeQuery> ConvertToObjectType(TEnumAsByte<ECollisionChannel> InCollisionChannel);                    // [0x1023430] Final|Native|Static|Private|BlueprintCallable 
	// void ClearPlayerInputCache(class APlayerController*& PC);                                                                // [0x10233b0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// void ApplyChangeToBlueprint(class AActor* Actor);                                                                        // [0xfe37d0] Final|Native|Static|Public|BlueprintCallable 
	// void AddToRoot(class UObject* InObject);                                                                                 // [0x1023310] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroTencentCOSLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroTencentCOSLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void SetSendLogZipName(FString ZipFileName);                                                                             // [0x102a890] Final|Native|Static|Public|BlueprintCallable 
	// void SetSendLogConfig(FString SecretID, FString SecretKey, FString BucketName, FString Region);                          // [0x102a700] Final|Native|Static|Public|BlueprintCallable 
	// void SetIsAutoSend(bool bIsAutoSend);                                                                                    // [0x102a680] Final|Native|Static|Public|BlueprintCallable 
	// void SetHandleFunc(FDelegateProperty& PrepareFunc, FDelegateProperty& PostSend);                                         // [0x102a550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetFilesToSend(TArray<FString>& FilePaths);                                                                         // [0x102a490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetAdmissibleValue(int32_t SingleLogSizeInMb);                                                                      // [0x102a410] Final|Native|Static|Public|BlueprintCallable 
	// void SendLogToTencentCOS(FDelegateProperty& OnProgress);                                                                 // [0x102a360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SendFileToTencentCOS(FString Path, FString RemoteURI, FString SecretID, FString SecretKey, FString BucketName, FString Region); // [0x102a120] Final|Native|Static|Public|BlueprintCallable 
	// bool IsSending();                                                                                                        // [0x1029cb0] Final|Native|Static|Public|BlueprintCallable 
	// void InterruptSending();                                                                                                 // [0x1029c90] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetSendedFileNum();                                                                                              // [0x1029c60] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetAllFileNumNeedToSend();                                                                                       // [0x1029b80] Final|Native|Static|Public|BlueprintCallable 
	// void EnableAutoSendWhenExit();                                                                                           // [0x1029b60] Final|Native|Static|Public|BlueprintCallable 
	// void EnableAuthorization(bool Enable);                                                                                   // [0x1029ae0] Final|Native|Static|Public|BlueprintCallable 
	// void ClearAllProgressCallback();                                                                                         // [0x10299b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroTickableManager
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UKuroTickableManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
	// void RemoveTickableFunc(class UObject* InOwner);                                                                         // [0x102a090] Final|Native|Public|BlueprintCallable 
	// void CreateTickableFunc(class UObject* InOwner, FDelegateProperty TickableHandler);                                      // [0x10299f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroTriggerVolume
/// Size: 0x0010 (16 bytes) (0x0002E0 - 0x0002F0) align 8 pad: 0x0000
class AKuroTriggerVolume : public AVolume
{ 
public:
	FName                                              VolumeId;                                                   // 0x02E0   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02EC   (0x0004)  MISSED
};

/// Class /Script/KuroUtility.KuroTriggerVolumeManager
/// Size: 0x0070 (112 bytes) (0x000038 - 0x0000A8) align 8 pad: 0x0000
class UKuroTriggerVolumeManager : public UWorldSubsystem
{ 
public:
	SDK_UNDEFINED(16,672) /* FMulticastInlineDelegate */ __um(OnTriggerVolumeAddToSubsystem);                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,673) /* FMulticastInlineDelegate */ __um(OnTriggerVolumeRemoveFromSubsystem);                 // 0x0048   (0x0010)  
	SDK_UNDEFINED(80,674) /* TMap<FName, AActor*> */   __um(KuroTriggerVolumeMap);                                 // 0x0058   (0x0050)  
	// class AActor* GetKuroTriggerVolume(FName ActorKey);                                                                      // [0x1029bb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroWaterVolume
/// Size: 0x0000 (0 bytes) (0x0002E0 - 0x0002E0) align 8 pad: 0x0000
class AKuroWaterVolume : public AVolume
{ 
public:
};

/// Class /Script/KuroUtility.LoadMapNotify
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x000110) align 8 pad: 0x0000
class ULoadMapNotify : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0030   (0x00E0)  MISSED
	// int32_t UnloadStreamLevel(FName& Path, bool bShouldBlockOnLoad);                                                         // [0x102a9f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void OnUnLoadStreamLevel(int32_t LinkId);                                                                                // [0x1029ea0] Final|Native|Private 
	// void OnLoadStreamLevel(int32_t LinkId);                                                                                  // [0x1029e10] Final|Native|Private 
	// int32_t LoadStreamLevel(FName& Path, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad);                               // [0x1029ce0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void Clear();                                                                                                            // [0x1029990] Final|Native|Public|BlueprintCallable 
	// void BindUnLoadStreamLevel(FDelegateProperty UnLoadStreamLevelHandler);                                                  // [0x1029850] Final|Native|Public|BlueprintCallable 
	// void BindLoadStreamLevel(FDelegateProperty LoadStreamLevelHandler);                                                      // [0x10297a0] Final|Native|Public|BlueprintCallable 
	// void BindEndLoadTransitionMap(FDelegateProperty EndLoadTransitionMapHandler);                                            // [0x10296f0] Final|Native|Public|BlueprintCallable 
	// void BindEndLoadMap(FDelegateProperty EndLoadMapHandler);                                                                // [0x1029640] Final|Native|Public|BlueprintCallable 
	// void BindBeginTravelLoadMap(FDelegateProperty BeginTravelLoadMapHandler);                                                // [0x1029590] Final|Native|Public|BlueprintCallable 
	// void BindBeginLoadMap(FDelegateProperty BeginLoadMapHandler);                                                            // [0x10294e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroUtility.KuroTickManager
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000078) align 8 pad: 0x0000
class UKuroTickManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0030   (0x0048)  MISSED
	// void SetSkeletalMeshProxyTickFunction(TEnumAsByte<ETickingGroup> TickingGroup, class USkeletalMeshComponent* SkelComp);  // [0x102a920] Final|Native|Public|BlueprintCallable 
	// bool RemoveTick(TEnumAsByte<ETickingGroup> TickingGroup);                                                                // [0x102a000] Final|Native|Public|BlueprintCallable 
	// void RemovePrerequisiteActorComponent(TEnumAsByte<ETickingGroup> TickingGroup, class UActorComponent* ActorComp);        // [0x1029f30] Final|Native|Public|BlueprintCallable 
	// void ClearTick();                                                                                                        // [0x10299d0] Final|Native|Public|BlueprintCallable 
	// void CleanSkeletalMeshProxyTickFunction(class USkeletalMeshComponent* SkelComp);                                         // [0x1029900] Final|Native|Public|BlueprintCallable 
	// bool AddTick(TEnumAsByte<ETickingGroup> TickingGroup, FDelegateProperty TickHandler);                                    // [0x10293e0] Final|Native|Public|BlueprintCallable 
	// void AddPrerequisiteActorComponent(TEnumAsByte<ETickingGroup> TickingGroup, class UActorComponent* ActorComp);           // [0x1029310] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/KuroUtility.PreloadObjectCollection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FPreloadObjectCollection
{ 
	TArray<class UObject*>                             Assets;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/KuroUtility.PropertyPair
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FPropertyPair
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	bool                                               bBelongsToActor;                                            // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

