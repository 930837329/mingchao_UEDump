
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/EngineSettings.ESubLevelStripMode
/// Size: 0x01 (1 bytes)
enum class ESubLevelStripMode : uint8_t
{
	ESubLevelStripMode__ExactClass                                                   = 0,
	ESubLevelStripMode__IsChildOf                                                    = 1
};

/// Enum /Script/EngineSettings.EFourPlayerSplitScreenType
/// Size: 0x01 (1 bytes)
enum class EFourPlayerSplitScreenType : uint8_t
{
	EFourPlayerSplitScreenType__Grid                                                 = 0,
	EFourPlayerSplitScreenType__Vertical                                             = 1,
	EFourPlayerSplitScreenType__Horizontal                                           = 2
};

/// Enum /Script/EngineSettings.EThreePlayerSplitScreenType
/// Size: 0x01 (1 bytes)
enum class EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop                                            = 0,
	EThreePlayerSplitScreenType__FavorBottom                                         = 1,
	EThreePlayerSplitScreenType__Vertical                                            = 2,
	EThreePlayerSplitScreenType__Horizontal                                          = 3
};

/// Enum /Script/EngineSettings.ETwoPlayerSplitScreenType
/// Size: 0x01 (1 bytes)
enum class ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal                                            = 0,
	ETwoPlayerSplitScreenType__Vertical                                              = 1
};

/// Struct /Script/EngineSettings.AutoCompleteCommand
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FAutoCompleteCommand
{ 
	FString                                            Command;                                                    // 0x0000   (0x0010)  
	FString                                            Desc;                                                       // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Class /Script/EngineSettings.ConsoleSettings
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000078) align 8 pad: 0x0000
class UConsoleSettings : public UObject
{ 
public:
	int32_t                                            MaxScrollbackSize;                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FAutoCompleteCommand>                       ManualAutoCompleteList;                                     // 0x0038   (0x0010)  
	TArray<FString>                                    AutoCompleteMapPaths;                                       // 0x0048   (0x0010)  
	float                                              BackgroundOpacityPercentage;                                // 0x0058   (0x0004)  
	bool                                               bOrderTopToBottom;                                          // 0x005C   (0x0001)  
	bool                                               bDisplayHelpInAutoComplete;                                 // 0x005D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x005E   (0x0002)  MISSED
	FColor                                             InputColor;                                                 // 0x0060   (0x0004)  
	FColor                                             HistoryColor;                                               // 0x0064   (0x0004)  
	FColor                                             AutoCompleteCommandColor;                                   // 0x0068   (0x0004)  
	FColor                                             AutoCompleteCVarColor;                                      // 0x006C   (0x0004)  
	FColor                                             AutoCompleteFadedColor;                                     // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/EngineSettings.GameModeName
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FGameModeName
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FSoftClassPath                                     GameMode;                                                   // 0x0010   (0x0020)  
};

/// Class /Script/EngineSettings.GameMapsSettings
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000138) align 8 pad: 0x0000
class UGameMapsSettings : public UObject
{ 
public:
	FString                                            LocalMapOptions;                                            // 0x0030   (0x0010)  
	FSoftObjectPath                                    TransitionMap;                                              // 0x0040   (0x0020)  
	bool                                               bUseSplitscreen;                                            // 0x0060   (0x0001)  
	TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout;                                 // 0x0061   (0x0001)  
	TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout;                               // 0x0062   (0x0001)  
	EFourPlayerSplitScreenType                         FourPlayerSplitscreenLayout;                                // 0x0063   (0x0001)  
	bool                                               bOffsetPlayerGamepadIds;                                    // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	FSoftClassPath                                     GameInstanceClass;                                          // 0x0068   (0x0020)  
	FString                                            LevelActorRegularConfigPath;                                // 0x0088   (0x0010)  
	FSoftObjectPath                                    GameDefaultMap;                                             // 0x0098   (0x0020)  
	FSoftObjectPath                                    ServerDefaultMap;                                           // 0x00B8   (0x0020)  
	FSoftClassPath                                     GlobalDefaultGameMode;                                      // 0x00D8   (0x0020)  
	FSoftClassPath                                     GlobalDefaultServerGameMode;                                // 0x00F8   (0x0020)  
	TArray<FGameModeName>                              GameModeMapPrefixes;                                        // 0x0118   (0x0010)  
	TArray<FGameModeName>                              GameModeClassAliases;                                       // 0x0128   (0x0010)  
	// void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);                                                            // [0x32c2e90] Final|Native|Public|BlueprintCallable 
	// bool GetSkipAssigningGamepadToPlayer1();                                                                                 // [0x32c2e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UGameMapsSettings* GetGameMapsSettings();                                                                          // [0x32c2e30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EngineSettings.GameNetworkManagerSettings
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UGameNetworkManagerSettings : public UObject
{ 
public:
	int32_t                                            MinDynamicBandwidth;                                        // 0x0030   (0x0004)  
	int32_t                                            MaxDynamicBandwidth;                                        // 0x0034   (0x0004)  
	int32_t                                            TotalNetBandwidth;                                          // 0x0038   (0x0004)  
	int32_t                                            BadPingThreshold;                                           // 0x003C   (0x0004)  
	bool                                               bIsStandbyCheckingEnabled : 1;                              // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              StandbyRxCheatTime;                                         // 0x0044   (0x0004)  
	float                                              StandbyTxCheatTime;                                         // 0x0048   (0x0004)  
	float                                              PercentMissingForRxStandby;                                 // 0x004C   (0x0004)  
	float                                              PercentMissingForTxStandby;                                 // 0x0050   (0x0004)  
	float                                              PercentForBadPing;                                          // 0x0054   (0x0004)  
	float                                              JoinInProgressStandbyWaitTime;                              // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/EngineSettings.GameSessionSettings
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UGameSessionSettings : public UObject
{ 
public:
	int32_t                                            MaxSpectators;                                              // 0x0030   (0x0004)  
	int32_t                                            MaxPlayers;                                                 // 0x0034   (0x0004)  
	bool                                               bRequiresPushToTalk : 1;                                    // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/EngineSettings.GeneralEngineSettings
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UGeneralEngineSettings : public UObject
{ 
public:
};

/// Class /Script/EngineSettings.GeneralProjectSettings
/// Size: 0x00E8 (232 bytes) (0x000030 - 0x000118) align 8 pad: 0x0000
class UGeneralProjectSettings : public UObject
{ 
public:
	FString                                            CompanyName;                                                // 0x0030   (0x0010)  
	FString                                            CompanyDistinguishedName;                                   // 0x0040   (0x0010)  
	FString                                            CopyrightNotice;                                            // 0x0050   (0x0010)  
	FString                                            Description;                                                // 0x0060   (0x0010)  
	FString                                            Homepage;                                                   // 0x0070   (0x0010)  
	FString                                            LicensingTerms;                                             // 0x0080   (0x0010)  
	FString                                            PrivacyPolicy;                                              // 0x0090   (0x0010)  
	FGuid                                              ProjectID;                                                  // 0x00A0   (0x0010)  
	FString                                            ProjectName;                                                // 0x00B0   (0x0010)  
	FString                                            ProjectVersion;                                             // 0x00C0   (0x0010)  
	FString                                            SupportContact;                                             // 0x00D0   (0x0010)  
	FText                                              ProjectDisplayedTitle;                                      // 0x00E0   (0x0018)  
	FText                                              ProjectDebugTitleInfo;                                      // 0x00F8   (0x0018)  
	bool                                               bShouldWindowPreserveAspectRatio;                           // 0x0110   (0x0001)  
	bool                                               bUseBorderlessWindow;                                       // 0x0111   (0x0001)  
	bool                                               bStartInVR;                                                 // 0x0112   (0x0001)  
	bool                                               bAllowWindowResize;                                         // 0x0113   (0x0001)  
	bool                                               bAllowClose;                                                // 0x0114   (0x0001)  
	bool                                               bAllowMaximize;                                             // 0x0115   (0x0001)  
	bool                                               bAllowMinimize;                                             // 0x0116   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0117   (0x0001)  MISSED
};

/// Class /Script/EngineSettings.HudSettings
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UHudSettings : public UObject
{ 
public:
	bool                                               bShowHUD : 1;                                               // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FName>                                      DebugDisplay;                                               // 0x0038   (0x0010)  
};

