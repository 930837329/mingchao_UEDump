
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Class /Script/SQLiteCore.SQLiteSettings
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class USQLiteSettings : public UObject
{ 
public:
	int32_t                                            LookAsideSizeEach;                                          // 0x0030   (0x0004)  
	int32_t                                            LookAsideNumber;                                            // 0x0034   (0x0004)  
	int32_t                                            PageCacheSizeEach;                                          // 0x0038   (0x0004)  
	int32_t                                            PageCacheNumber;                                            // 0x003C   (0x0004)  
	bool                                               EnableTrace;                                                // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

