
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/WwiseSimpleExternalSource.WwiseExternalSourceSettings
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000098) align 8 pad: 0x0000
class UWwiseExternalSourceSettings : public UObject
{ 
public:
	FSoftObjectPath                                    MediaInfoTable;                                             // 0x0030   (0x0020)  
	FSoftObjectPath                                    ExternalSourceDefaultMedia;                                 // 0x0050   (0x0020)  
	FDirectoryPath                                     ExternalSourceStagingDirectory;                             // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0080   (0x0018)  MISSED
};

/// Struct /Script/WwiseSimpleExternalSource.WwiseExternalSourceCookieDefaultMedia
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FWwiseExternalSourceCookieDefaultMedia : FTableRowBase
{ 
	int32_t                                            ExternalSourceCookie;                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            ExternalSourceName;                                         // 0x0010   (0x0010)  
	int32_t                                            MediaInfoId;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            MediaName;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/WwiseSimpleExternalSource.WwiseExternalSourceMediaInfo
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000028) align 8 pad: 0x0000
struct FWwiseExternalSourceMediaInfo : FTableRowBase
{ 
	int32_t                                            ExternalSourceMediaInfoId;                                  // 0x0008   (0x0004)  
	FName                                              MediaName;                                                  // 0x000C   (0x000C)  
	int32_t                                            CodecID;                                                    // 0x0018   (0x0004)  
	bool                                               bIsStreamed;                                                // 0x001C   (0x0001)  
	bool                                               bUseDeviceMemory;                                           // 0x001D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001E   (0x0002)  MISSED
	int32_t                                            MemoryAlignment;                                            // 0x0020   (0x0004)  
	int32_t                                            PrefetchSize;                                               // 0x0024   (0x0004)  
};

