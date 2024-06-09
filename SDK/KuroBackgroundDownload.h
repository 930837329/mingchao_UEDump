
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/KuroBackgroundDownload.KuroBgPrefixDownload
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000068) align 8 pad: 0x0000
class UKuroBgPrefixDownload : public UObject
{ 
public:
	SDK_UNDEFINED(16,1456) /* FMulticastInlineDelegate */ __um(AllCompleteDelegate);                               // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1457) /* FMulticastInlineDelegate */ __um(ProgressDelegate);                                  // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1458) /* FMulticastInlineDelegate */ __um(ProgressDelegateNew);                               // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0060   (0x0008)  MISSED
	// void Start(FString Suffix, TArray<FString>& Prefixes, TArray<FKuroRequestDownloadInfo>& Targets, int32_t InRetryCount, float InTimeout); // [0x16efe60] Final|Native|Public|HasOutParms 
	// int32_t GetBpsSpeed();                                                                                                   // [0x16efe30] Final|Native|Public|Const 
	// void Continue();                                                                                                         // [0x16efe10] Final|Native|Public|Const 
	// void Cancel();                                                                                                           // [0x16efdf0] Final|Native|Public|Const 
};

/// Struct /Script/KuroBackgroundDownload.KuroRequestDownloadInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FKuroRequestDownloadInfo
{ 
	FString                                            Filename;                                                   // 0x0000   (0x0010)  
	FString                                            URL;                                                        // 0x0010   (0x0010)  
	FString                                            SavePath;                                                   // 0x0020   (0x0010)  
	int64_t                                            Size;                                                       // 0x0030   (0x0008)  
	FString                                            HashString;                                                 // 0x0038   (0x0010)  
};

