
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: WwiseObjectUtils

/// Enum /Script/WwiseFileHandler.EWwiseLanguageRequirement
/// Size: 0x01 (1 bytes)
enum class EWwiseLanguageRequirement : uint8_t
{
	EWwiseLanguageRequirement__IsDefault                                             = 0,
	EWwiseLanguageRequirement__IsOptional                                            = 1,
	EWwiseLanguageRequirement__SFX                                                   = 2
};

/// Enum /Script/WwiseFileHandler.EWwiseSoundBankType
/// Size: 0x01 (1 bytes)
enum class EWwiseSoundBankType : uint8_t
{
	EWwiseSoundBankType__User                                                        = 0,
	EWwiseSoundBankType__Event                                                       = 30,
	EWwiseSoundBankType__Bus                                                         = 31
};

/// Class /Script/WwiseFileHandler.WwiseExternalSourceStatics
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UWwiseExternalSourceStatics : public UBlueprintFunctionLibrary
{ 
public:
	// void SetExternalSourceMediaWithIds(FAkUniqueID ExternalSourceCookie, int32_t MediaId);                                   // [0x14e3c20] Final|Native|Static|Public|BlueprintCallable 
	// void SetExternalSourceMediaByName(FString ExternalSourceName, FString MediaName);                                        // [0x14e3b30] Final|Native|Static|Public|BlueprintCallable 
	// void SetExternalSourceMediaById(FString ExternalSourceName, int32_t MediaId);                                            // [0x14e3a60] Final|Native|Static|Public|BlueprintCallable 
	// void InitExternalSourceConfigs();                                                                                        // [0x14e3a40] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/WwiseFileHandler.WwiseExternalSourceCookedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FWwiseExternalSourceCookedData
{ 
	int32_t                                            Cookie;                                                     // 0x0000   (0x0004)  
	FName                                              DebugName;                                                  // 0x0004   (0x000C)  
};

/// Struct /Script/WwiseFileHandler.WwiseLanguageCookedData
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FWwiseLanguageCookedData
{ 
	int32_t                                            LanguageId;                                                 // 0x0000   (0x0004)  
	FName                                              LanguageName;                                               // 0x0004   (0x000C)  
	EWwiseLanguageRequirement                          LanguageRequirement;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/WwiseFileHandler.WwiseMediaCookedData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 pad: 0x0000
struct FWwiseMediaCookedData
{ 
	int32_t                                            MediaId;                                                    // 0x0000   (0x0004)  
	FName                                              MediaPathName;                                              // 0x0004   (0x000C)  
	int32_t                                            PrefetchSize;                                               // 0x0010   (0x0004)  
	int32_t                                            MemoryAlignment;                                            // 0x0014   (0x0004)  
	bool                                               bDeviceMemory;                                              // 0x0018   (0x0001)  
	bool                                               bStreaming;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	FName                                              DebugName;                                                  // 0x001C   (0x000C)  
};

/// Struct /Script/WwiseFileHandler.WwiseSoundBankCookedData
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FWwiseSoundBankCookedData
{ 
	int32_t                                            SoundBankId;                                                // 0x0000   (0x0004)  
	FName                                              SoundBankPathName;                                          // 0x0004   (0x000C)  
	int32_t                                            MemoryAlignment;                                            // 0x0010   (0x0004)  
	bool                                               bDeviceMemory;                                              // 0x0014   (0x0001)  
	bool                                               bContainsMedia;                                             // 0x0015   (0x0001)  
	EWwiseSoundBankType                                SoundBankType;                                              // 0x0016   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0017   (0x0001)  MISSED
	FName                                              DebugName;                                                  // 0x0018   (0x000C)  
};

