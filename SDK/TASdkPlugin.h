
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: JsEnv

/// Enum /Script/TASdkPlugin.ESaveMode
/// Size: 0x01 (1 bytes)
enum class ESaveMode : uint8_t
{
	ESaveMode__None_Save                                                             = 0,
	ESaveMode__SaveGame                                                              = 1,
	ESaveMode__Sqlite                                                                = 2
};

/// Enum /Script/TASdkPlugin.TAMode
/// Size: 0x01 (1 bytes)
enum class TAMode : uint8_t
{
	TAMode__NORMAL                                                                   = 0,
	TAMode__DEBUG                                                                    = 1,
	TAMode__DEBUG_ONLY                                                               = 2
};

/// Class /Script/TASdkPlugin.TASaveConfig
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 8 pad: 0x0000
class UTASaveConfig : public USaveGame
{ 
public:
	int32_t                                            TrackState;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            DistinctId;                                                 // 0x0038   (0x0010)  
	FString                                            AccountId;                                                  // 0x0048   (0x0010)  
	FString                                            SuperProperties;                                            // 0x0058   (0x0010)  
	uint32_t                                           UserIndex;                                                  // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/TASdkPlugin.TASaveEvent
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UTASaveEvent : public USaveGame
{ 
public:
	TArray<FString>                                    EventJsons;                                                 // 0x0030   (0x0010)  
	uint32_t                                           UserIndex;                                                  // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/TASdkPlugin.SingleEvent
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FSingleEvent
{ 
	TArray<char>                                       Utf8StringCode;                                             // 0x0000   (0x0010)  
};

/// Class /Script/TASdkPlugin.TASaveEventV2
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UTASaveEventV2 : public USaveGame
{ 
public:
	TArray<FSingleEvent>                               EventsArray;                                                // 0x0030   (0x0010)  
};

/// Class /Script/TASdkPlugin.ThinkingAnalytics
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UThinkingAnalytics : public UBlueprintFunctionLibrary
{ 
public:
	// void UserUnset(FString Property, int32_t Index);                                                                         // [0x155c480] Final|Native|Static|Public|BlueprintCallable 
	// void UserUniqueAppend(FString properties, int32_t Index);                                                                // [0x155c3b0] Final|Native|Static|Public|BlueprintCallable 
	// void UserSetOnce(FString properties, int32_t Index);                                                                     // [0x155c2e0] Final|Native|Static|Public|BlueprintCallable 
	// void UserSet(FString properties, int32_t Index);                                                                         // [0x155c210] Final|Native|Static|Public|BlueprintCallable 
	// void UserDelete(int32_t Index);                                                                                          // [0x155c190] Final|Native|Static|Public|BlueprintCallable 
	// void UserAppend(FString properties, int32_t Index);                                                                      // [0x155c0c0] Final|Native|Static|Public|BlueprintCallable 
	// void UserAdd(FString Property, float Value, int32_t Index);                                                              // [0x155bfa0] Final|Native|Static|Public|BlueprintCallable 
	// bool TrackUpdate(FString EventName, FString properties, FString EventId, int32_t Index);                                 // [0x155bcd0] Final|Native|Static|Public|BlueprintCallable 
	// bool TrackOverwrite(FString EventName, FString properties, FString EventId, int32_t Index);                              // [0x155bb40] Final|Native|Static|Public|BlueprintCallable 
	// bool TrackFirstWithId(FString EventName, FString properties, FString FirstCheckId, int32_t Index);                       // [0x155b9b0] Final|Native|Static|Public|BlueprintCallable 
	// bool TrackFirst(FString EventName, FString properties, int32_t Index);                                                   // [0x155b870] Final|Native|Static|Public|BlueprintCallable 
	// bool Track_Utf8(FString EventName, FArrayBuffer& properties, int32_t Index);                                             // [0x155be60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool Track(FString EventName, FString properties, int32_t Index);                                                        // [0x155b730] Final|Native|Static|Public|BlueprintCallable 
	// void ToggleSampleCPUFrequency(bool bActive, float SampleInterval);                                                       // [0x155b660] Final|Native|Static|Public|BlueprintCallable 
	// void TimeEvent(FString EventName, int32_t Index);                                                                        // [0x155b590] Final|Native|Static|Public|BlueprintCallable 
	// void SetTrackStatus(int32_t Status, int32_t Index);                                                                      // [0x155b4d0] Final|Native|Static|Public|BlueprintCallable 
	// void OptOutTracking(int32_t Index);                                                                                      // [0x155a3c0] Final|Native|Static|Public|BlueprintCallable 
	// void OptInTracking(int32_t Index);                                                                                       // [0x155a3c0] Final|Native|Static|Public|BlueprintCallable 
	// void Logout(int32_t Index);                                                                                              // [0x155b450] Final|Native|Static|Public|BlueprintCallable 
	// void Login(FString AccountId, int32_t Index);                                                                            // [0x155b380] Final|Native|Static|Public|BlueprintCallable 
	// void InitializeEncryptInstance(FString AppID, FString ServerUrl, TAMode Mode, bool bEnableLog, FString TimeZone, bool bEnableEncrypt, FString EncryptPublicKey, int32_t EncryptVersion, FString SymmetricEncryption, FString AsymmetricEncryption); // [0x155b020] Final|Native|Static|Public|BlueprintCallable 
	// bool InitializeDefaultInsWithURL_Appid(FString ServerUrl, FString AppID, bool bUseUtf8);                                 // [0x155aee0] Final|Native|Static|Public|BlueprintCallable 
	// bool Initialize(bool bUseUtf8);                                                                                          // [0x155ae50] Final|Native|Static|Public|BlueprintCallable 
	// void Identify(FString DistinctId, int32_t Index);                                                                        // [0x155ad80] Final|Native|Static|Public|BlueprintCallable 
	// bool HasInstanceTimeCalibrated(int32_t Index);                                                                           // [0x155acf0] Final|Native|Static|Public|BlueprintCallable 
	// bool HasInstanceInitialized(int32_t Index);                                                                              // [0x155ac60] Final|Native|Static|Public|BlueprintCallable 
	// bool HasDefaultInstanceInitialized();                                                                                    // [0x155ac30] Final|Native|Static|Public|BlueprintCallable 
	// FString GetSuperProperties(int32_t Index);                                                                               // [0x155ab60] Final|Native|Static|Public|BlueprintCallable 
	// FString GetPresetProperties(int32_t Index);                                                                              // [0x155aa90] Final|Native|Static|Public|BlueprintCallable 
	// FString GetMachineID();                                                                                                  // [0x155aa10] Final|Native|Static|Public|BlueprintCallable 
	// FString GetDistinctId(int32_t Index);                                                                                    // [0x155a940] Final|Native|Static|Public|BlueprintCallable 
	// FString GetDeviceId(int32_t Index);                                                                                      // [0x155a870] Final|Native|Static|Public|BlueprintCallable 
	// float GetCurrentCPUSampledMaxFrequency();                                                                                // [0x155a840] Final|Native|Static|Public|BlueprintCallable 
	// float GetCurrentCPUSampledAvgFrequency();                                                                                // [0x155a810] Final|Native|Static|Public|BlueprintCallable 
	// void Flush(int32_t Index);                                                                                               // [0x155a790] Final|Native|Static|Public|BlueprintCallable 
	// void EnableTracking(bool bIsEnable, int32_t Index);                                                                      // [0x155a6c0] Final|Native|Static|Public|BlueprintCallable 
	// void EnableThirdPartySharing(TArray<FString>& EventTypeList, int32_t Index);                                             // [0x155a440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void EnableAutoTrackWithTypeAndProperties(TArray<FString>& EventTypeList, FString properties, int32_t Index);            // [0x155a550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void EnableAutoTrackWithType(TArray<FString>& EventTypeList, int32_t Index);                                             // [0x155a440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void EnableAutoTrack(int32_t Index);                                                                                     // [0x155a3c0] Final|Native|Static|Public|BlueprintCallable 
	// void DestroyInstance(int32_t Index, bool Flush);                                                                         // [0x155a300] Final|Native|Static|Public|BlueprintCallable 
	// bool CreateSimpleInstance(FCreateInstanceParam& Param);                                                                  // [0x155a1c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CalibrateTime(FDelegateProperty& OnTimeCalibrated, int32_t Index);                                                  // [0x155a0d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TASdkPlugin.ThinkingAnalyticsSettings
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000098) align 8 pad: 0x0000
class UThinkingAnalyticsSettings : public UObject
{ 
public:
	FString                                            ServerUrl;                                                  // 0x0030   (0x0010)  
	FString                                            AppID;                                                      // 0x0040   (0x0010)  
	bool                                               bEnableLog;                                                 // 0x0050   (0x0001)  
	bool                                               bEnableEncrypt;                                             // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0052   (0x0006)  MISSED
	FString                                            EncryptPublicKey;                                           // 0x0058   (0x0010)  
	int32_t                                            EncryptVersion;                                             // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            SymmetricEncryption;                                        // 0x0070   (0x0010)  
	FString                                            AsymmetricEncryption;                                       // 0x0080   (0x0010)  
	int32_t                                            MaxNumInBatch;                                              // 0x0090   (0x0004)  
	float                                              FlushTimeInterval;                                          // 0x0094   (0x0004)  
};

/// Struct /Script/TASdkPlugin.CreateInstanceParam
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 pad: 0x0000
struct FCreateInstanceParam
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            ServerUrl;                                                  // 0x0008   (0x0010)  
	FString                                            AppID;                                                      // 0x0018   (0x0010)  
	FString                                            DistinctId;                                                 // 0x0028   (0x0010)  
	FString                                            AccountId;                                                  // 0x0038   (0x0010)  
	FString                                            LogDisplayName;                                             // 0x0048   (0x0010)  
	FString                                            SaveDBPath;                                                 // 0x0058   (0x0010)  
	int32_t                                            MaxNumInBatch;                                              // 0x0068   (0x0004)  
	TAMode                                             Mode;                                                       // 0x006C   (0x0001)  
	ESaveMode                                          SaveMode;                                                   // 0x006D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x006E   (0x0002)  MISSED
	float                                              FlushTimeInterval;                                          // 0x0070   (0x0004)  
	bool                                               bUseUtf8 : 1;                                               // 0x0074:0 (0x0001)  
	bool                                               bLogInitEnable : 1;                                         // 0x0074:1 (0x0001)  
	bool                                               bImmediateSave : 1;                                         // 0x0074:2 (0x0001)  
	bool                                               bRuntimeInstance : 1;                                       // 0x0074:3 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0075   (0x0003)  MISSED
};

