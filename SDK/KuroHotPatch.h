
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/KuroHotPatch.EKuroDownloadState
/// Size: 0x01 (1 bytes)
enum class EKuroDownloadState : uint8_t
{
	None                                                                             = 0,
	HttpError                                                                        = 1,
	FileRenameError                                                                  = 2,
	ValidateError                                                                    = 3,
	OpenToWriteError                                                                 = 4,
	NotEnoughSpace                                                                   = 5,
	DownloadCanceled                                                                 = 6,
	DownloadSuccess                                                                  = 7
};

/// Class /Script/KuroHotPatch.DownloaderProxy
/// Size: 0x0070 (112 bytes) (0x000030 - 0x0000A0) align 8 pad: 0x0000
class UDownloaderProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0030   (0x0070)  MISSED
	// void UnbindCallback();                                                                                                   // [0x16e8080] Final|Native|Public|BlueprintCallable 
	// void Start(FString URL, FString SavePath, FString Suffix, int64_t InFileSize, float InLimitTime, bool bForceNew, bool InCache, FString Sha1, float InTimeout); // [0x16e7d80] Final|Native|Public|BlueprintCallable 
	// void SetProgressCallback(FDelegateProperty InCb);                                                                        // [0x16e7c60] Final|Native|Public|BlueprintCallable 
	// void SetCompleteCallback(FDelegateProperty InCb);                                                                        // [0x16e7b30] Final|Native|Public|BlueprintCallable 
	// bool HasComplete();                                                                                                      // [0x16e7530] Final|Native|Public|BlueprintCallable 
	// float GetTotalDownloadTime();                                                                                            // [0x16e74e0] Final|Native|Public|BlueprintCallable 
	// int64_t GetSavedSize();                                                                                                  // [0x16e74b0] Final|Native|Public|BlueprintCallable 
	// int64_t GetReceivedSize();                                                                                               // [0x16e7450] Final|Native|Public|BlueprintCallable 
	// int64_t GetContentLength();                                                                                              // [0x16e7130] Final|Native|Public|BlueprintCallable 
	// void Cancel();                                                                                                           // [0x16e6800] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroHotPatch.KuroAppSetting
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000088) align 8 pad: 0x0000
class UKuroAppSetting : public UObject
{ 
public:
	FString                                            AppVersion;                                                 // 0x0030   (0x0010)  
	FString                                            AppBuildNum;                                                // 0x0040   (0x0010)  
	FString                                            AppReleaseType;                                             // 0x0050   (0x0010)  
	FString                                            InternalUse;                                                // 0x0060   (0x0010)  
	FString                                            ParallelApp;                                                // 0x0070   (0x0010)  
	bool                                               bLocalPackaging;                                            // 0x0080   (0x0001)  
	bool                                               BNeedHotPatch;                                              // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0082   (0x0006)  MISSED
};

/// Class /Script/KuroHotPatch.KuroConfigPatcher
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroConfigPatcher : public UBlueprintFunctionLibrary
{ 
public:
	// void UpdateConfigs(FString ConfigListPath);                                                                              // [0x16e8240] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroHotPatch.KuroLauncherLibrary
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000080) align 8 pad: 0x0000
class UKuroLauncherLibrary : public UBlueprintFunctionLibrary
{ 
public:
	SDK_UNDEFINED(80,1463) /* TSet<UObject*> */        __um(PreloadBp);                                            // 0x0030   (0x0050)  
	// void SetRestartApp(char RestartType);                                                                                    // [0x16e7d10] Final|Native|Static|Public|BlueprintCallable 
	// void SetPrintRemainObjectRefChain(bool InValue);                                                                         // [0xf17190] Final|Native|Static|Public|BlueprintCallable 
	// void SetPrecompileShaderBatchMode(int32_t Mode);                                                                         // [0x16e7be0] Final|Native|Static|Public|BlueprintCallable 
	// void ResumeCompileShader();                                                                                              // [0x16e7a80] Final|Native|Static|Public|BlueprintCallable 
	// void RestartApplication(FString ScriptContent);                                                                          // [0x16e79f0] Final|Native|Static|Public|BlueprintCallable 
	// void ResetLauncher();                                                                                                    // [0x16e79d0] Final|Native|Static|Public|BlueprintCallable 
	// void ReloadShaderLibrary();                                                                                              // [0x16e79b0] Final|Native|Static|Public|BlueprintCallable 
	// void PreloadRequiredBp();                                                                                                // [0x16e7990] Final|Native|Static|Public|BlueprintCallable 
	// char NeedRestartApp();                                                                                                   // [0x16e7960] Final|Native|Static|Public|BlueprintCallable 
	// bool NeedHotPatch();                                                                                                     // [0x16e7930] Final|Native|Static|Public|BlueprintCallable 
	// bool MoveFile(FString DstPath, FString SrcPath);                                                                         // [0x16e7840] Final|Native|Static|Public|BlueprintCallable 
	// bool MakeDirectory(FString DirPath);                                                                                     // [0x16e75e0] Final|Native|Static|Public|BlueprintCallable 
	// void LogoutToLauncher();                                                                                                 // [0x16e75c0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsLocalPackaging();                                                                                                 // [0x16e7590] Final|Native|Static|Public|BlueprintCallable 
	// bool IsFirstIntoLauncher();                                                                                              // [0x16e7560] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetTotalPrecompileShaders();                                                                                     // [0x16e7500] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetRemainPrecompileShaders();                                                                                    // [0x16e7480] Final|Native|Static|Public|BlueprintCallable 
	// FString GetPlatform();                                                                                                   // [0x16e73d0] Final|Native|Static|Public|BlueprintCallable 
	// char GetNetworkConnectionType();                                                                                         // [0xf16ea0] Final|Native|Static|Public|BlueprintCallable 
	// bool GetGConfigString(FString Section, FString Key, FString& OutStr);                                                    // [0x16e7200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// int64_t GetFileSize(FString FilePath);                                                                                   // [0x16e7160] Final|Native|Static|Public|BlueprintCallable 
	// bool GetConfig(FString Key, FString DefaultValue, FString& OutStr);                                                      // [0x16e6fd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FString GetAppVersion();                                                                                                 // [0x16e6f50] Final|Native|Static|Public|BlueprintCallable 
	// FString GetAppReleaseType();                                                                                             // [0x16e6ed0] Final|Native|Static|Public|BlueprintCallable 
	// FString GetAppParallel();                                                                                                // [0x16e6e50] Final|Native|Static|Public|BlueprintCallable 
	// FString GetAppInternalUseType();                                                                                         // [0x16e6dd0] Final|Native|Static|Public|BlueprintCallable 
	// FString GetAppChangeList();                                                                                              // [0x16e6d50] Final|Native|Static|Public|BlueprintCallable 
	// bool Encrypt(FString InPlain, FString& OutCipher);                                                                       // [0x16e6c50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool DoesDiskHaveEnoughSpace(FString CheckPath, int64_t CheckSize);                                                      // [0x16e6b70] Final|Native|Static|Public|BlueprintCallable 
	// bool DeleteFile(FString FilePath);                                                                                       // [0x16e6ad0] Final|Native|Static|Public|BlueprintCallable 
	// bool DeleteDirectory(FString DirPath);                                                                                   // [0x16e6a30] Final|Native|Static|Public|BlueprintCallable 
	// bool Decrypt(FString InCipher, FString& OutPlain);                                                                       // [0x16e6930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CloseShaderLibrary();                                                                                               // [0x16e6910] Final|Native|Static|Public|BlueprintCallable 
	// void CheckRemainedPackagesInMemory();                                                                                    // [0xc036d0] Final|Native|Static|Public|BlueprintCallable 
	// bool CheckFileSha1(FString FilePath, FString CheckSha1Hash);                                                             // [0x16e6820] Final|Native|Static|Public|BlueprintCallable 
	// void AddPatchAssetsContent(FString Content);                                                                             // [0xf75540] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroHotPatch.KuroPakMountStatic
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroPakMountStatic : public UBlueprintFunctionLibrary
{ 
public:
	// void UnmountPak(FString Path);                                                                                           // [0x16e81b0] Final|Native|Static|Public|BlueprintCallable 
	// void UnmountFromManifest(FString Path);                                                                                  // [0x16e8120] Final|Native|Static|Public|BlueprintCallable 
	// void UnmountAllPaks();                                                                                                   // [0x16e8100] Final|Native|Static|Public|BlueprintCallable 
	// void Save(FString Path);                                                                                                 // [0x16e7aa0] Final|Native|Static|Public|BlueprintCallable 
	// void MountStartupPaks();                                                                                                 // [0x16e7820] Final|Native|Static|Public|BlueprintCallable 
	// void MountPak(FString Path, int32_t Order);                                                                              // [0x16e7750] Final|Native|Static|Public|BlueprintCallable 
	// void MountMultiLangPaks();                                                                                               // [0x16e7730] Final|Native|Static|Public|BlueprintCallable 
	// void MountGamePaks();                                                                                                    // [0x16e7710] Final|Native|Static|Public|BlueprintCallable 
	// void MountFromManifest(FString Path);                                                                                    // [0x16e7680] Final|Native|Static|Public|BlueprintCallable 
};

