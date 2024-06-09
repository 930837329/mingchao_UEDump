
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

/// Class /Script/Puerts.PuertsBlueprintLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UPuertsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void StartShareJsEnv(FName ModuleName, class UGameInstance* GameInstance);                                               // [0x13fea40] Final|Native|Static|Public|BlueprintCallable 
	// void PreloadJS(class UKuroPreloadJSCallback* callback);                                                                  // [0x13fe9c0] Final|Native|Static|Public|BlueprintCallable 
	// void ExecuteModuleInSharedJsEnv(FName ModuleName);                                                                       // [0x13fe930] Final|Native|Static|Public|BlueprintCallable 
	// void ClearJSCache();                                                                                                     // [0x13fe910] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Puerts.PuertsSetting
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000098) align 8 pad: 0x0000
class UPuertsSetting : public UObject
{ 
public:
	FString                                            RootPath;                                                   // 0x0030   (0x0010)  
	bool                                               AutoModeEnable;                                             // 0x0040   (0x0001)  
	bool                                               DebugEnable;                                                // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0042   (0x0002)  MISSED
	int32_t                                            DebugPort;                                                  // 0x0044   (0x0004)  
	bool                                               WaitDebugger;                                               // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	double                                             WaitDebuggerTimeout;                                        // 0x0050   (0x0008)  
	int32_t                                            NumberOfJsEnv;                                              // 0x0058   (0x0004)  
	bool                                               WatchDisable;                                               // 0x005C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	TArray<FString>                                    IgnoreClassListOnDTS;                                       // 0x0060   (0x0010)  
	TArray<FString>                                    IgnoreStructListOnDTS;                                      // 0x0070   (0x0010)  
	FString                                            PreloadPath;                                                // 0x0080   (0x0010)  
	bool                                               EnableStackTrace;                                           // 0x0090   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

