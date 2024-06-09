
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: UMG

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 pad: 0x0000
struct FLevelSequenceCameraSettings
{ 
	bool                                               bOverrideAspectRatioAxisConstraint;                         // 0x0000   (0x0001)  
	TEnumAsByte<EAspectRatioAxisConstraint>            AspectRatioAxisConstraint;                                  // 0x0001   (0x0001)  
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x0088 (136 bytes) (0x0002A8 - 0x000330) align 8 pad: 0x0000
class ALevelSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x02A8   (0x0010)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x02B8   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
	class ULevelSequencePlayer*                        SequencePlayer;                                             // 0x02D0   (0x0008)  
	FSoftObjectPath                                    LevelSequence;                                              // 0x02D8   (0x0020)  
	FLevelSequenceCameraSettings                       CameraSettings;                                             // 0x02F8   (0x0002)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x02FA   (0x0006)  MISSED
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                              // 0x0300   (0x0008)  
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                           // 0x0308   (0x0008)  
	bool                                               bAutoPlay : 1;                                              // 0x0310:0 (0x0001)  
	bool                                               bOverrideInstanceData : 1;                                  // 0x0310:1 (0x0001)  
	bool                                               bReplicatePlayback : 1;                                     // 0x0310:2 (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0311   (0x0007)  MISSED
	class UObject*                                     DefaultInstanceData;                                        // 0x0318   (0x0008)  
	class ULevelSequenceBurnIn*                        BurnInInstance;                                             // 0x0320   (0x0008)  
	bool                                               bShowBurnin;                                                // 0x0328   (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x0329   (0x0007)  MISSED
	// void ShowBurnin();                                                                                                       // [0x3d2be20] Final|Native|Public|BlueprintCallable 
	// void SetShouldLatentDestroy(bool bInShouldLatentDestroy);                                                                // [0x3d2bd90] Final|Native|Public|BlueprintCallable 
	// void SetSequence(class ULevelSequence* InSequence);                                                                      // [0x3d2bd00] Final|Native|Public|BlueprintCallable 
	// void SetReplicatePlayback(bool ReplicatePlayback);                                                                       // [0x3d2bc70] Final|Native|Public|BlueprintCallable 
	// void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset, bool IncludeSubSequence);  // [0x3d2b9e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);              // [0x3d2b880] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void ResetBindings();                                                                                                    // [0x3d2b860] Final|Native|Public|BlueprintCallable 
	// void ResetBinding(FMovieSceneObjectBindingID Binding);                                                                   // [0x3d2b7b0] Final|Native|Public|BlueprintCallable 
	// void RemoveBindingByTag(FName Tag, class AActor* Actor, bool IncludeSubSequence);                                        // [0x3d2b610] Final|Native|Public|BlueprintCallable 
	// void RemoveBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor);                                             // [0x3d2b510] Final|Native|Public|BlueprintCallable 
	// void OnLevelSequenceLoaded__DelegateSignature();                                                                         // [0x25a7960] Public|Delegate      
	// class ULevelSequence* LoadSequence();                                                                                    // [0x3d2b4a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void HideBurnin();                                                                                                       // [0x3d2b480] Final|Native|Public|BlueprintCallable 
	// bool HasBindingByTag(FName BindingTag, bool IncludeSubSequence);                                                         // [0x3d2b380] Final|Native|Public|BlueprintCallable 
	// class ULevelSequencePlayer* GetSequencePlayer();                                                                         // [0x3d2b210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class ULevelSequence* GetSequence();                                                                                     // [0x3d2b1c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<UObject*> GetBindingByTag(FName BindingTag, bool IncludeSubSequence);                                             // [0x3d2b050] Final|Native|Public|BlueprintCallable 
	// TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);                                                         // [0x3d2af20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FMovieSceneObjectBindingID FindNamedBinding(FName Tag);                                                                  // [0x3d2ae50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void AddBindingByTag(FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset, bool IncludeSubSequence);      // [0x3d2aac0] Final|Native|Public|BlueprintCallable 
	// void AddBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset);                  // [0x3d2a970] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FLevelSequenceObjectReferenceMap
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 pad: 0x0000
struct FLevelSequenceBindingReferences
{ 
	SDK_UNDEFINED(80,565) /* TMap<FGuid, FLevelSequenceBindingReferenceArray> */ __um(BindingIdToReferences);      // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,566) /* TSet<FGuid> */            __um(AnimSequenceInstances);                                // 0x0050   (0x0050)  
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x01B8 (440 bytes) (0x000068 - 0x000220) align 8 pad: 0x0000
class ULevelSequence : public UMovieSceneSequence
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0068   (0x0008)  MISSED
	class UMovieScene*                                 MovieScene;                                                 // 0x0070   (0x0008)  
	FLevelSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0078   (0x0050)  
	FLevelSequenceBindingReferences                    BindingReferences;                                          // 0x00C8   (0x00A0)  
	SDK_UNDEFINED(80,567) /* TMap<FString, FLevelSequenceObject> */ __um(PossessedObjects);                        // 0x0168   (0x0050)  
	class UClass*                                      DirectorClass;                                              // 0x01B8   (0x0008)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x01C0   (0x0010)  
	SDK_UNDEFINED(80,568) /* TMap<FGuid, FGuid> */     __um(CustomGuidToBindingGuidMap);                           // 0x01D0   (0x0050)  
	// void RemoveMetaDataByClass(class UClass* InClass);                                                                       // [0x3d2b740] Final|Native|Public|BlueprintCallable 
	// class UMovieScene* GetMovieScene();                                                                                      // [0x3d2b190] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UObject* FindOrAddMetaDataByClass(class UClass* InClass);                                                          // [0x3d2ac50] Final|Native|Public|BlueprintCallable 
	// class UObject* FindMetaDataByClass(class UClass* InClass);                                                               // [0x3d2ac50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UObject* CopyMetaData(class UObject* InMetaData);                                                                  // [0x3d2ac50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.AnimSequenceLevelSequenceLink
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{ 
public:
	FGuid                                              SkelTrackGuid;                                              // 0x0030   (0x0010)  
	FSoftObjectPath                                    PathToLevelSequence;                                        // 0x0040   (0x0020)  
};

/// Class /Script/LevelSequence.DefaultLevelSequenceInstanceData
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 16 pad: 0x0000
class UDefaultLevelSequenceInstanceData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	class AActor*                                      TransformOriginActor;                                       // 0x0038   (0x0008)  
	FTransform                                         TransformOrigin;                                            // 0x0040   (0x0030)  
};

/// Class /Script/LevelSequence.LevelSequenceMetaData
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULevelSequenceMetaData : public UInterface
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInInitSettings
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class ULevelSequenceBurnInInitSettings : public UObject
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInOptions
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class ULevelSequenceBurnInOptions : public UObject
{ 
public:
	bool                                               bUseBurnIn;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FSoftClassPath                                     BurnInClass;                                                // 0x0038   (0x0020)  
	class ULevelSequenceBurnInInitSettings*            Settings;                                                   // 0x0058   (0x0008)  
	// void SetBurnIn(FSoftClassPath InBurnInClass);                                                                            // [0x3d2bb70] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FLevelSequenceAnimSequenceLinkItem
{ 
	FGuid                                              SkelTrackGuid;                                              // 0x0000   (0x0010)  
	FSoftObjectPath                                    PathToAnimSequence;                                         // 0x0010   (0x0020)  
	bool                                               bExportTransforms;                                          // 0x0030   (0x0001)  
	bool                                               bExportCurves;                                              // 0x0031   (0x0001)  
	bool                                               bRecordInWorldSpace;                                        // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0033   (0x0005)  MISSED
};

/// Class /Script/LevelSequence.LevelSequenceAnimSequenceLink
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{ 
public:
	TArray<FLevelSequenceAnimSequenceLinkItem>         AnimSequenceLinks;                                          // 0x0030   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceSnapshotSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FLevelSequenceSnapshotSettings
{ 
	char                                               ZeroPadAmount;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FFrameRate                                         FrameRate;                                                  // 0x0004   (0x0008)  
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 pad: 0x0000
struct FLevelSequencePlayerSnapshot
{ 
	FString                                            MasterName;                                                 // 0x0000   (0x0010)  
	FQualifiedFrameTime                                MasterTime;                                                 // 0x0010   (0x0010)  
	FQualifiedFrameTime                                SourceTime;                                                 // 0x0020   (0x0010)  
	FString                                            CurrentShotName;                                            // 0x0030   (0x0010)  
	FQualifiedFrameTime                                CurrentShotLocalTime;                                       // 0x0040   (0x0010)  
	FQualifiedFrameTime                                CurrentShotSourceTime;                                      // 0x0050   (0x0010)  
	FString                                            SourceTimecode;                                             // 0x0060   (0x0010)  
	SDK_UNDEFINED(48,569) /* TWeakObjectPtr<UCameraComponent*> */ __um(CameraComponent);                           // 0x0070   (0x0030)  
	FLevelSequenceSnapshotSettings                     Settings;                                                   // 0x00A0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class ULevelSequence*                              ActiveShot;                                                 // 0x00B0   (0x0008)  
	FMovieSceneSequenceID                              ShotID;                                                     // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x00C8 (200 bytes) (0x000290 - 0x000358) align 8 pad: 0x0000
class ULevelSequenceBurnIn : public UUserWidget
{ 
public:
	FLevelSequencePlayerSnapshot                       FrameInformation;                                           // 0x0290   (0x00C0)  
	class ALevelSequenceActor*                         LevelSequenceActor;                                         // 0x0350   (0x0008)  
	// void SetSettings(class UObject* InSettings);                                                                             // [0x25a7960] Event|Public|BlueprintEvent 
	// class UClass* GetSettingsClass();                                                                                        // [0x3d2b240] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LevelSequence.LevelSequenceDirector
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class ULevelSequenceDirector : public UObject
{ 
public:
	class ULevelSequencePlayer*                        Player;                                                     // 0x0030   (0x0008)  
	// void OnCreated();                                                                                                        // [0x25a7960] Event|Public|BlueprintEvent 
};

/// Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint
/// Size: 0x0000 (0 bytes) (0x0000A8 - 0x0000A8) align 8 pad: 0x0000
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequencePlayer
/// Size: 0x0128 (296 bytes) (0x0006E8 - 0x000810) align 8 pad: 0x0000
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	SDK_UNDEFINED(16,570) /* FMulticastInlineDelegate */ __um(OnCameraCut);                                        // 0x06E8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x118];                                     // 0x06F8   (0x0118)  MISSED
	// class AActor* GetSpawnedActorByGuid(FGuid Guid);                                                                         // [0x3d2b280] Final|Native|Public|HasDefaults|BlueprintCallable 
	// class UCameraComponent* GetActiveCameraComponent();                                                                      // [0x3d2b010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor*& OutActor); // [0x3d2acd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LevelSequence.SequenceCustomGuidGetterInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class USequenceCustomGuidGetterInterface : public UInterface
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceMediaController
/// Size: 0x0028 (40 bytes) (0x0002A8 - 0x0002D0) align 8 pad: 0x0000
class ALevelSequenceMediaController : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02A8   (0x0008)  MISSED
	class ALevelSequenceActor*                         Sequence;                                                   // 0x02B0   (0x0008)  
	class UMediaComponent*                             MediaComponent;                                             // 0x02B8   (0x0008)  
	float                                              ServerStartTimeSeconds;                                     // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x02C4   (0x000C)  MISSED
	// void SynchronizeToServer(float DesyncThresholdSeconds);                                                                  // [0x3d2be40] Final|Native|Public|BlueprintCallable 
	// void Play();                                                                                                             // [0x3d2b4f0] Final|Native|Public|BlueprintCallable 
	// void OnRep_ServerStartTimeSeconds();                                                                                     // [0x3d2b4d0] Final|Native|Private 
	// class ALevelSequenceActor* GetSequence();                                                                                // [0x3d2b1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UMediaComponent* GetMediaComponent();                                                                              // [0x3bbe280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LevelSequence.BoundActorProxy
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FBoundActorProxy
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReference
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FLevelSequenceBindingReference
{ 
	FString                                            PackageName;                                                // 0x0000   (0x0010)  
	FSoftObjectPath                                    ExternalObjectPath;                                         // 0x0010   (0x0020)  
	FString                                            ObjectPath;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FLevelSequenceBindingReferenceArray
{ 
	TArray<FLevelSequenceBindingReference>             References;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceLegacyObjectReference
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FLevelSequenceLegacyObjectReference
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FLevelSequenceObject
{ 
	SDK_UNDEFINED(28,571) /* TLazyObjectPtr<UObject*> */ __um(ObjectOrOwner);                                      // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ComponentName;                                              // 0x0020   (0x0010)  
	SDK_UNDEFINED(8,572) /* TWeakObjectPtr<UObject*> */ __um(CachedComponent);                                     // 0x0030   (0x0008)  
};

