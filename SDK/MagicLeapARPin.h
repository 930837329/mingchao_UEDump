
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MagicLeapARPin.EMagicLeapARPinType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapARPinType : uint8_t
{
	EMagicLeapARPinType__SingleUserSingleSession                                     = 0,
	EMagicLeapARPinType__SingleUserMultiSession                                      = 1,
	EMagicLeapARPinType__MultiUserMultiSession                                       = 2
};

/// Enum /Script/MagicLeapARPin.EMagicLeapAutoPinType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapAutoPinType : uint8_t
{
	EMagicLeapAutoPinType__OnlyOnDataRestoration                                     = 0,
	EMagicLeapAutoPinType__Always                                                    = 1,
	EMagicLeapAutoPinType__Never                                                     = 2
};

/// Enum /Script/MagicLeapARPin.EMagicLeapPassableWorldError
/// Size: 0x01 (1 bytes)
enum class EMagicLeapPassableWorldError : uint8_t
{
	EMagicLeapPassableWorldError__None                                               = 0,
	EMagicLeapPassableWorldError__LowMapQuality                                      = 1,
	EMagicLeapPassableWorldError__UnableToLocalize                                   = 2,
	EMagicLeapPassableWorldError__Unavailable                                        = 3,
	EMagicLeapPassableWorldError__PrivilegeDenied                                    = 4,
	EMagicLeapPassableWorldError__InvalidParam                                       = 5,
	EMagicLeapPassableWorldError__UnspecifiedFailure                                 = 6,
	EMagicLeapPassableWorldError__PrivilegeRequestPending                            = 7,
	EMagicLeapPassableWorldError__StartupPending                                     = 8,
	EMagicLeapPassableWorldError__SharedWorldNotEnabled                              = 9,
	EMagicLeapPassableWorldError__NotImplemented                                     = 10,
	EMagicLeapPassableWorldError__PinNotFound                                        = 11
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinComponent
/// Size: 0x01B8 (440 bytes) (0x000218 - 0x0003D0) align 16 pad: 0x0000
class UMagicLeapARPinComponent : public USceneComponent
{ 
public:
	FString                                            ObjectUID;                                                  // 0x0218   (0x0010)  
	int32_t                                            UserIndex;                                                  // 0x0228   (0x0004)  
	EMagicLeapAutoPinType                              AutoPinType;                                                // 0x022C   (0x0001)  
	bool                                               bShouldPinActor;                                            // 0x022D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x022E   (0x0002)  MISSED
	class UClass*                                      PinDataClass;                                               // 0x0230   (0x0008)  
	SDK_UNDEFINED(80,1542) /* TSet<EMagicLeapARPinType> */ __um(SearchPinTypes);                                   // 0x0238   (0x0050)  
	class USphereComponent*                            SearchVolume;                                               // 0x0288   (0x0008)  
	SDK_UNDEFINED(16,1543) /* FMulticastInlineDelegate */ __um(OnPersistentEntityPinned);                          // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,1544) /* FMulticastInlineDelegate */ __um(OnPersistentEntityPinLost);                         // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,1545) /* FMulticastInlineDelegate */ __um(OnPinDataLoadAttemptCompleted);                     // 0x02B0   (0x0010)  
	FGuid                                              PinnedCFUID;                                                // 0x02C0   (0x0010)  
	class USceneComponent*                             PinnedSceneComponent;                                       // 0x02D0   (0x0008)  
	class UMagicLeapARPinSaveGame*                     PinData;                                                    // 0x02D8   (0x0008)  
	unsigned char                                      UnknownData01_7[0xF0];                                      // 0x02E0   (0x00F0)  MISSED
	// void UnPin();                                                                                                            // [0x21c76c0] Final|Native|Public|BlueprintCallable 
	// class UMagicLeapARPinSaveGame* TryGetPinData(class UClass* InPinDataClass, bool& OutPinDataValid);                       // [0x21c7480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool PinToRestoredOrSyncedID();                                                                                          // [0x21c7120] Final|Native|Public|BlueprintCallable 
	// bool PinToID(FGuid& PinId);                                                                                              // [0x21c7070] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void PinToBestFit();                                                                                                     // [0x21c7050] Final|Native|Public|BlueprintCallable 
	// bool PinSceneComponent(class USceneComponent* ComponentToPin);                                                           // [0x21c6fb0] Final|Native|Public|BlueprintCallable 
	// bool PinRestoredOrSynced();                                                                                              // [0x21c6f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool PinActor(class AActor* ActorToPin);                                                                                 // [0x21c6ee0] Final|Native|Public|BlueprintCallable 
	// void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);                                                  // [0x25a7960] MulticastDelegate|Public|Delegate 
	// void PersistentEntityPinLost__DelegateSignature();                                                                       // [0x25a7960] MulticastDelegate|Public|Delegate 
	// void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored);                                      // [0x25a7960] MulticastDelegate|Public|Delegate 
	// bool IsPinned();                                                                                                         // [0x21c6d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool GetPinState(FMagicLeapARPinState& State);                                                                           // [0x21c6c30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool GetPinnedPinID(FGuid& PinId);                                                                                       // [0x21c6ce0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// class UMagicLeapARPinSaveGame* GetPinData(class UClass* PinDataClass);                                                   // [0x21c6b90] Final|Native|Public|BlueprintCallable 
	// void AttemptPinDataRestorationAsync();                                                                                   // [0x21c6130] Final|Native|Public|BlueprintCallable 
	// bool AttemptPinDataRestoration();                                                                                        // [0x21c6100] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void UnBindToOnMagicLeapContentBindingFoundDelegate(FDelegateProperty& Delegate);                                        // [0x21c7610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void UnBindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty& Delegate);                                               // [0x21c7560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// EMagicLeapPassableWorldError SetGlobalQueryFilter(FMagicLeapARPinQuery& InGlobalFilter);                                 // [0x21c7310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetContentBindingSaveGameUserIndex(int32_t UserIndex);                                                              // [0x21c7290] Final|Native|Static|Public|BlueprintCallable 
	// EMagicLeapPassableWorldError QueryARPins(FMagicLeapARPinQuery& Query, TArray<FGuid>& Pins);                              // [0x21c7150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool ParseStringToARPinId(FString PinIdString, FGuid& ARPinId);                                                          // [0x21c6df0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// bool IsTrackerValid();                                                                                                   // [0x21c6dc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t& Count);                                                      // [0x21c6b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// EMagicLeapPassableWorldError GetGlobalQueryFilter(FMagicLeapARPinQuery& CurrentGlobalFilter);                            // [0x21c6a20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// int32_t GetContentBindingSaveGameUserIndex();                                                                            // [0x21c69f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// EMagicLeapPassableWorldError GetClosestARPin(FVector& SearchPoint, FGuid& PinId);                                        // [0x21c6900] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, TArray<FGuid>& Pins);                              // [0x21c6810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FString GetARPinStateToString(FMagicLeapARPinState& State);                                                              // [0x21c6730] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// EMagicLeapPassableWorldError GetARPinState(FGuid& PinId, FMagicLeapARPinState& State);                                   // [0x21c6630] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool GetARPinPositionAndOrientation_TrackingSpace(FGuid& PinId, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment); // [0x21c64a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool GetARPinPositionAndOrientation(FGuid& PinId, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment); // [0x21c6310] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// EMagicLeapPassableWorldError DestroyTracker();                                                                           // [0x21c62e0] Final|Native|Static|Public|BlueprintCallable 
	// EMagicLeapPassableWorldError CreateTracker();                                                                            // [0x21c62b0] Final|Native|Static|Public|BlueprintCallable 
	// void BindToOnMagicLeapContentBindingFoundDelegate(FDelegateProperty& Delegate);                                          // [0x21c6200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void BindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty& Delegate);                                                 // [0x21c6150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FString ARPinIdToString(FGuid& ARPinId);                                                                                 // [0x21c6020] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase
/// Size: 0x0018 (24 bytes) (0x0002A8 - 0x0002C0) align 8 pad: 0x0000
class AMagicLeapARPinInfoActorBase : public AActor
{ 
public:
	FGuid                                              PinId;                                                      // 0x02A8   (0x0010)  
	bool                                               bVisibilityOverride;                                        // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02B9   (0x0007)  MISSED
	// void OnUpdateARPinState();                                                                                               // [0x25a7960] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinRenderer
/// Size: 0x0068 (104 bytes) (0x0002A8 - 0x000310) align 8 pad: 0x0000
class AMagicLeapARPinRenderer : public AActor
{ 
public:
	bool                                               bInfoActorsVisibilityOverride;                              // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02A9   (0x0007)  MISSED
	SDK_UNDEFINED(80,1546) /* TMap<FGuid, AMagicLeapARPinInfoActorBase*> */ __um(AllInfoActors);                   // 0x02B0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0300   (0x0008)  MISSED
	class UClass*                                      ClassToSpawn;                                               // 0x0308   (0x0008)  
	// void SetVisibilityOverride(bool InVisibilityOverride);                                                                   // [0x21c73f0] Final|Native|Private|BlueprintCallable 
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinState
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FMagicLeapARPinState
{ 
	float                                              Confidence;                                                 // 0x0000   (0x0004)  
	float                                              ValidRadius;                                                // 0x0004   (0x0004)  
	float                                              RotationError;                                              // 0x0008   (0x0004)  
	float                                              TranslationError;                                           // 0x000C   (0x0004)  
	EMagicLeapARPinType                                PinType;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSettings
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UMagicLeapARPinSettings : public UObject
{ 
public:
	float                                              UpdateCheckFrequency;                                       // 0x0030   (0x0004)  
	FMagicLeapARPinState                               OnUpdatedEventTriggerDelta;                                 // 0x0034   (0x0014)  
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSaveGame
/// Size: 0x0080 (128 bytes) (0x000030 - 0x0000B0) align 16 pad: 0x0000
class UMagicLeapARPinSaveGame : public USaveGame
{ 
public:
	FGuid                                              PinnedID;                                                   // 0x0030   (0x0010)  
	FTransform                                         ComponentWorldTransform;                                    // 0x0040   (0x0030)  
	FTransform                                         PinTransform;                                               // 0x0070   (0x0030)  
	bool                                               bShouldPinActor;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinContentBindings
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000080) align 8 pad: 0x0000
class UMagicLeapARPinContentBindings : public USaveGame
{ 
public:
	SDK_UNDEFINED(80,1547) /* TMap<FGuid, FMagicLeapARPinObjectIdList> */ __um(AllContentBindings);                // 0x0030   (0x0050)  
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinQuery
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 pad: 0x0000
struct FMagicLeapARPinQuery
{ 
	SDK_UNDEFINED(80,1548) /* TSet<EMagicLeapARPinType> */ __um(Types);                                            // 0x0000   (0x0050)  
	int32_t                                            MaxResults;                                                 // 0x0050   (0x0004)  
	FVector                                            TargetPoint;                                                // 0x0054   (0x000C)  
	float                                              Radius;                                                     // 0x0060   (0x0004)  
	bool                                               bSorted;                                                    // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinObjectIdList
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FMagicLeapARPinObjectIdList
{ 
	SDK_UNDEFINED(80,1549) /* TSet<FString> */         __um(ObjectIdList);                                         // 0x0000   (0x0050)  
};

