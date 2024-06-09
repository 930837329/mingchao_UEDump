
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MobilePatchingUtils.MobileInstalledContent
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UMobileInstalledContent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
	// bool Mount(int32_t PakOrder, FString MountPoint);                                                                        // [0x2230930] Final|Native|Public|BlueprintCallable 
	// float GetInstalledContentSize();                                                                                         // [0x22307c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// float GetDiskFreeSpace();                                                                                                // [0x22305c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MobilePatchingUtils.MobilePendingContent
/// Size: 0x0040 (64 bytes) (0x000050 - 0x000090) align 8 pad: 0x0000
class UMobilePendingContent : public UMobileInstalledContent
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0050   (0x0040)  MISSED
	// void StartInstall(FDelegateProperty OnSucceeded, FDelegateProperty OnFailed);                                            // [0x2230c20] Final|Native|Public|BlueprintCallable 
	// float GetTotalDownloadedSize();                                                                                          // [0x2230900] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// float GetRequiredDiskSpace();                                                                                            // [0x22307f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// float GetInstallProgress();                                                                                              // [0x22306f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// FText GetDownloadStatusText();                                                                                           // [0x2230650] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// float GetDownloadSpeed();                                                                                                // [0x2230620] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// float GetDownloadSize();                                                                                                 // [0x22305f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MobilePatchingUtils.MobilePatchingLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void RequestContent(FString RemoteManifestURL, FString CloudURL, FString InstallDirectory, FDelegateProperty OnSucceeded, FDelegateProperty OnFailed); // [0x2230a20] Final|Native|Static|Public|BlueprintCallable 
	// bool HasActiveWiFiConnection();                                                                                          // [0x1026880] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// TArray<FString> GetSupportedPlatformNames();                                                                             // [0x2230820] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class UMobileInstalledContent* GetInstalledContent(FString InstallDirectory);                                            // [0x2230720] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FString GetActiveDeviceProfileName();                                                                                    // [0x2230540] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

