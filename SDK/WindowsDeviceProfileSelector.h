
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/WindowsDeviceProfileSelector.EDataCompareType
/// Size: 0x01 (1 bytes)
enum class EDataCompareType : uint8_t
{
	WDCT_Equal                                                                       = 0,
	WDCT_Less                                                                        = 1,
	WDCT_LessEqual                                                                   = 2,
	WDCT_Greater                                                                     = 3,
	WDCT_GreaterEqual                                                                = 4,
	WDCT_NotEqual                                                                    = 5,
	WDCT_Regex                                                                       = 6,
	WDCT_EqualIgnore                                                                 = 7,
	WDCT_LessIgnore                                                                  = 8,
	WDCT_LessEqualIgnore                                                             = 9,
	WDCT_GreaterIgnore                                                               = 10,
	WDCT_GreaterEqualIgnore                                                          = 11,
	WDCT_NotEqualIgnore                                                              = 12,
	WDCT_Hash                                                                        = 13
};

/// Enum /Script/WindowsDeviceProfileSelector.EDataSourceType
/// Size: 0x01 (1 bytes)
enum class EDataSourceType : uint8_t
{
	WDST_PreviousRegexMatch                                                          = 0,
	WDST_CPUBrand                                                                    = 1,
	WDST_GPUBrand                                                                    = 2
};

/// Struct /Script/WindowsDeviceProfileSelector.WindowsDeviceProfileMatchItem
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FWindowsDeviceProfileMatchItem
{ 
	TEnumAsByte<EDataSourceType>                       SourceType;                                                 // 0x0000   (0x0001)  
	TEnumAsByte<EDataCompareType>                      CompareType;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            MatchString;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/WindowsDeviceProfileSelector.WindowsDeviceProfileMatch
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FWindowsDeviceProfileMatch
{ 
	FString                                            Profile;                                                    // 0x0000   (0x0010)  
	TArray<FWindowsDeviceProfileMatchItem>             Match;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/WindowsDeviceProfileSelector.WindowsDeviceProfileMatchingRules
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UWindowsDeviceProfileMatchingRules : public UObject
{ 
public:
	TArray<FWindowsDeviceProfileMatch>                 MatchProfile;                                               // 0x0030   (0x0010)  
};

