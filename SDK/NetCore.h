
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/NetCore.NetAnalyticsDataConfig
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FNetAnalyticsDataConfig
{ 
	FName                                              DataName;                                                   // 0x0000   (0x000C)  
	bool                                               bEnabled;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/NetCore.NetAnalyticsAggregatorConfig
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UNetAnalyticsAggregatorConfig : public UObject
{ 
public:
	TArray<FNetAnalyticsDataConfig>                    NetAnalyticsData;                                           // 0x0030   (0x0010)  
};

