
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: WwiseFileHandler

/// Enum /Script/WwiseResourceLoader.EWwiseEventDestroyOptions
/// Size: 0x01 (1 bytes)
enum class EWwiseEventDestroyOptions : uint8_t
{
	EWwiseEventDestroyOptions__StopEventOnDestroy                                    = 0,
	EWwiseEventDestroyOptions__WaitForEventEnd                                       = 1
};

/// Enum /Script/WwiseResourceLoader.EWwiseEventSwitchContainerLoading
/// Size: 0x01 (1 bytes)
enum class EWwiseEventSwitchContainerLoading : uint8_t
{
	EWwiseEventSwitchContainerLoading__AlwaysLoad                                    = 0,
	EWwiseEventSwitchContainerLoading__LoadOnReference                               = 1
};

/// Enum /Script/WwiseResourceLoader.EWwiseGroupType
/// Size: 0x01 (1 bytes)
enum class EWwiseGroupType : uint8_t
{
	EWwiseGroupType__Switch                                                          = 0,
	EWwiseGroupType__State                                                           = 1,
	EWwiseGroupType__Unknown                                                         = 255
};

/// Enum /Script/WwiseResourceLoader.EWwiseReloadLanguage
/// Size: 0x01 (1 bytes)
enum class EWwiseReloadLanguage : uint8_t
{
	Manual                                                                           = 0,
	Immediate                                                                        = 1,
	Safe                                                                             = 2
};

/// Class /Script/WwiseResourceLoader.WwiseEventInfoLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UWwiseEventInfoLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// FWwiseEventInfo SetWwiseShortId(FWwiseEventInfo& Ref, int32_t WwiseShortId);                                             // [0x150e620] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FWwiseEventInfo SetWwiseName(FWwiseEventInfo& Ref, FString WwiseName);                                                   // [0x150e1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FWwiseEventInfo SetWwiseGuid(FWwiseEventInfo& Ref, FGuid& WwiseGuid);                                                    // [0x150df60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FWwiseEventInfo SetSwitchContainerLoading(FWwiseEventInfo& Ref, EWwiseEventSwitchContainerLoading& SwitchContainerLoading); // [0x150de30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FWwiseEventInfo SetHardCodedSoundBankShortId(FWwiseEventInfo& Ref, int32_t HardCodedSoundBankShortId);                   // [0x150dbe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FWwiseEventInfo SetDestroyOptions(FWwiseEventInfo& Ref, EWwiseEventDestroyOptions& DestroyOptions);                      // [0x150d990] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FWwiseEventInfo MakeStruct(FGuid& WwiseGuid, int32_t WwiseShortId, FString WwiseName, EWwiseEventSwitchContainerLoading SwitchContainerLoading, EWwiseEventDestroyOptions DestroyOptions, int32_t HardCodedSoundBankShortId); // [0x150d290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// int32_t GetWwiseShortID(FWwiseEventInfo& Ref);                                                                           // [0x150d0b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FString GetWwiseName(FWwiseEventInfo& Ref);                                                                              // [0x150cdd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FGuid GetWwiseGuid(FWwiseEventInfo& Ref);                                                                                // [0x150cc90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// EWwiseEventSwitchContainerLoading GetSwitchContainerLoading(FWwiseEventInfo& Ref);                                       // [0x150cbf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// int32_t GetHardCodedSoundBankShortId(FWwiseEventInfo& Ref);                                                              // [0x150cab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// EWwiseEventDestroyOptions GetDestroyOptions(FWwiseEventInfo& Ref);                                                       // [0x150c970] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void BreakStruct(FWwiseEventInfo Ref, FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, FString& OutWwiseName, EWwiseEventSwitchContainerLoading& OutSwitchContainerLoading, EWwiseEventDestroyOptions& OutDestroyOptions, int32_t& OutHardCodedSoundBankShortId); // [0x150c0f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UWwiseGroupValueInfoLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// FWwiseGroupValueInfo SetWwiseShortId(FWwiseGroupValueInfo& Ref, int32_t WwiseShortId);                                   // [0x150e750] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FWwiseGroupValueInfo SetWwiseName(FWwiseGroupValueInfo& Ref, FString WwiseName);                                         // [0x150e350] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FWwiseGroupValueInfo SetGroupShortId(FWwiseGroupValueInfo& Ref, int32_t GroupShortId);                                   // [0x150dac0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FWwiseGroupValueInfo SetAssetGuid(FWwiseGroupValueInfo& Ref, FGuid& AssetGuid);                                          // [0x150d850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FWwiseGroupValueInfo MakeStruct(FGuid& AssetGuid, int32_t GroupShortId, int32_t WwiseShortId, FString WwiseName);        // [0x150d4d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// int32_t GetWwiseShortID(FWwiseGroupValueInfo& Ref);                                                                      // [0x150d150] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FString GetWwiseName(FWwiseGroupValueInfo& Ref);                                                                         // [0x150ced0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// int32_t GetGroupShortId(FWwiseGroupValueInfo& Ref);                                                                      // [0x150ca10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FGuid GetAssetGuid(FWwiseGroupValueInfo& Ref);                                                                           // [0x150c8d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// void BreakStruct(FWwiseGroupValueInfo Ref, FGuid& OutAssetGuid, int32_t& OutGroupShortId, int32_t& OutWwiseShortId, FString& OutWwiseName); // [0x150c410] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/WwiseResourceLoader.WwiseObjectInfoLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UWwiseObjectInfoLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// FWwiseObjectInfo SetWwiseShortId(FWwiseObjectInfo& Ref, int32_t WwiseShortId);                                           // [0x150e870] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FWwiseObjectInfo SetWwiseName(FWwiseObjectInfo& Ref, FString WwiseName);                                                 // [0x150e4c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FWwiseObjectInfo SetWwiseGuid(FWwiseObjectInfo& Ref, FGuid& WwiseGuid);                                                  // [0x150e0b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// FWwiseObjectInfo SetHardCodedSoundBankShortId(FWwiseObjectInfo& Ref, int32_t HardCodedSoundBankShortId);                 // [0x150dd10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FWwiseObjectInfo MakeStruct(FGuid& WwiseGuid, int32_t WwiseShortId, FString WwiseName, int32_t HardCodedSoundBankShortId); // [0x150d690] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// int32_t GetWwiseShortID(FWwiseObjectInfo& Ref);                                                                          // [0x150d1f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FString GetWwiseName(FWwiseObjectInfo& Ref);                                                                             // [0x150cfc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FGuid GetWwiseGuid(FWwiseObjectInfo& Ref);                                                                               // [0x150cd30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// int32_t GetHardCodedSoundBankShortId(FWwiseObjectInfo& Ref);                                                             // [0x150cb50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// void BreakStruct(FWwiseObjectInfo Ref, FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, FString& OutWwiseName, int32_t& OutHardCodedSoundBankShortId); // [0x150c670] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/WwiseResourceLoader.WwiseAcousticTextureCookedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FWwiseAcousticTextureCookedData
{ 
	int32_t                                            ShortId;                                                    // 0x0000   (0x0004)  
	FName                                              DebugName;                                                  // 0x0004   (0x000C)  
};

/// Struct /Script/WwiseResourceLoader.WwiseAuxBusCookedData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FWwiseAuxBusCookedData
{ 
	int32_t                                            AuxBusId;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FWwiseSoundBankCookedData>                  SoundBanks;                                                 // 0x0008   (0x0010)  
	TArray<FWwiseMediaCookedData>                      Media;                                                      // 0x0018   (0x0010)  
	FName                                              DebugName;                                                  // 0x0028   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseSwitchContainerLeafCookedData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FWwiseSwitchContainerLeafCookedData
{ 
	SDK_UNDEFINED(80,419) /* TSet<FWwiseGroupValueCookedData> */ __um(GroupValueSet);                              // 0x0000   (0x0050)  
	TArray<FWwiseSoundBankCookedData>                  SoundBanks;                                                 // 0x0050   (0x0010)  
	TArray<FWwiseMediaCookedData>                      Media;                                                      // 0x0060   (0x0010)  
	TArray<FWwiseExternalSourceCookedData>             ExternalSources;                                            // 0x0070   (0x0010)  
};

/// Struct /Script/WwiseResourceLoader.WwiseEventCookedData
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 pad: 0x0000
struct FWwiseEventCookedData
{ 
	int32_t                                            EventId;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FWwiseSoundBankCookedData>                  SoundBanks;                                                 // 0x0008   (0x0010)  
	TArray<FWwiseMediaCookedData>                      Media;                                                      // 0x0018   (0x0010)  
	TArray<FWwiseExternalSourceCookedData>             ExternalSources;                                            // 0x0028   (0x0010)  
	TArray<FWwiseSwitchContainerLeafCookedData>        SwitchContainerLeaves;                                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,420) /* TSet<FWwiseGroupValueCookedData> */ __um(RequiredGroupValueSet);                      // 0x0048   (0x0050)  
	EWwiseEventDestroyOptions                          DestroyOptions;                                             // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	FName                                              DebugName;                                                  // 0x009C   (0x000C)  
};

/// Struct /Script/WwiseResourceLoader.WwiseGroupValueCookedData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FWwiseGroupValueCookedData
{ 
	EWwiseGroupType                                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            GroupId;                                                    // 0x0004   (0x0004)  
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	FName                                              DebugName;                                                  // 0x000C   (0x000C)  
};

/// Struct /Script/WwiseResourceLoader.WwiseObjectInfo
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FWwiseObjectInfo
{ 
	FGuid                                              WwiseGuid;                                                  // 0x0000   (0x0010)  
	uint32_t                                           WwiseShortId;                                               // 0x0010   (0x0004)  
	FName                                              WwiseName;                                                  // 0x0014   (0x000C)  
	uint32_t                                           HardCodedSoundBankShortId;                                  // 0x0020   (0x0004)  
};

/// Struct /Script/WwiseResourceLoader.WwiseEventInfo
/// Size: 0x0004 (4 bytes) (0x000024 - 0x000028) align 4 pad: 0x0000
struct FWwiseEventInfo : FWwiseObjectInfo
{ 
	EWwiseEventSwitchContainerLoading                  SwitchContainerLoading;                                     // 0x0024   (0x0001)  
	EWwiseEventDestroyOptions                          DestroyOptions;                                             // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseGameParameterCookedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FWwiseGameParameterCookedData
{ 
	int32_t                                            ShortId;                                                    // 0x0000   (0x0004)  
	FName                                              DebugName;                                                  // 0x0004   (0x000C)  
};

/// Struct /Script/WwiseResourceLoader.WwiseGroupValueInfo
/// Size: 0x0004 (4 bytes) (0x000024 - 0x000028) align 4 pad: 0x0000
struct FWwiseGroupValueInfo : FWwiseObjectInfo
{ 
	uint32_t                                           GroupShortId;                                               // 0x0024   (0x0004)  
};

/// Struct /Script/WwiseResourceLoader.WwiseInitBankCookedData
/// Size: 0x0024 (36 bytes) (0x000024 - 0x000048) align 8 pad: 0x0000
struct FWwiseInitBankCookedData : FWwiseSoundBankCookedData
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FWwiseMediaCookedData>                      Media;                                                      // 0x0028   (0x0010)  
	TArray<FWwiseLanguageCookedData>                   Language;                                                   // 0x0038   (0x0010)  
};

/// Struct /Script/WwiseResourceLoader.WwiseLanguageId
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FWwiseLanguageId
{ 
	int32_t                                            LanguageId;                                                 // 0x0000   (0x0004)  
	FName                                              LanguageName;                                               // 0x0004   (0x000C)  
};

/// Struct /Script/WwiseResourceLoader.WwiseLocalizedAuxBusCookedData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FWwiseLocalizedAuxBusCookedData
{ 
	SDK_UNDEFINED(80,421) /* TMap<FWwiseLanguageCookedData, FWwiseAuxBusCookedData> */ __um(AuxBusLanguageMap);    // 0x0000   (0x0050)  
	FName                                              DebugName;                                                  // 0x0050   (0x000C)  
	int32_t                                            AuxBusId;                                                   // 0x005C   (0x0004)  
};

/// Struct /Script/WwiseResourceLoader.WwiseLocalizedEventCookedData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FWwiseLocalizedEventCookedData
{ 
	SDK_UNDEFINED(80,422) /* TMap<FWwiseLanguageCookedData, FWwiseEventCookedData> */ __um(EventLanguageMap);      // 0x0000   (0x0050)  
	FName                                              DebugName;                                                  // 0x0050   (0x000C)  
	int32_t                                            EventId;                                                    // 0x005C   (0x0004)  
};

/// Struct /Script/WwiseResourceLoader.WwiseLocalizedShareSetCookedData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FWwiseLocalizedShareSetCookedData
{ 
	SDK_UNDEFINED(80,423) /* TMap<FWwiseLanguageCookedData, FWwiseShareSetCookedData> */ __um(ShareSetLanguageMap); // 0x0000   (0x0050)  
	FName                                              DebugName;                                                  // 0x0050   (0x000C)  
	int32_t                                            ShareSetId;                                                 // 0x005C   (0x0004)  
};

/// Struct /Script/WwiseResourceLoader.WwiseShareSetCookedData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FWwiseShareSetCookedData
{ 
	int32_t                                            ShareSetId;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FWwiseSoundBankCookedData>                  SoundBanks;                                                 // 0x0008   (0x0010)  
	TArray<FWwiseMediaCookedData>                      Media;                                                      // 0x0018   (0x0010)  
	FName                                              DebugName;                                                  // 0x0028   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseLocalizedSoundBankCookedData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FWwiseLocalizedSoundBankCookedData
{ 
	SDK_UNDEFINED(80,424) /* TMap<FWwiseLanguageCookedData, FWwiseSoundBankCookedData> */ __um(SoundBankLanguageMap); // 0x0000   (0x0050)  
	FName                                              DebugName;                                                  // 0x0050   (0x000C)  
	int32_t                                            SoundBankId;                                                // 0x005C   (0x0004)  
};

/// Struct /Script/WwiseResourceLoader.WwisePlatformId
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FWwisePlatformId
{ 
	FGuid                                              PlatformGuid;                                               // 0x0000   (0x0010)  
	FName                                              PlatformName;                                               // 0x0010   (0x000C)  
};

/// Struct /Script/WwiseResourceLoader.WwiseSharedGroupValueKey
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FWwiseSharedGroupValueKey
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseSharedLanguageId
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FWwiseSharedLanguageId
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	EWwiseLanguageRequirement                          LanguageRequirement;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseSharedPlatformId
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FWwiseSharedPlatformId
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseTriggerCookedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FWwiseTriggerCookedData
{ 
	int32_t                                            TriggerId;                                                  // 0x0000   (0x0004)  
	FName                                              DebugName;                                                  // 0x0004   (0x000C)  
};

