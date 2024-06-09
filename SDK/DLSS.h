
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/DLSS.EDLSSPreset
/// Size: 0x01 (1 bytes)
enum class EDLSSPreset : uint8_t
{
	EDLSSPreset__Default                                                             = 0,
	EDLSSPreset__A                                                                   = 1,
	EDLSSPreset__B                                                                   = 2,
	EDLSSPreset__C                                                                   = 3,
	EDLSSPreset__D                                                                   = 4,
	EDLSSPreset__E                                                                   = 5,
	EDLSSPreset__F                                                                   = 6,
	EDLSSPreset__G                                                                   = 7
};

/// Enum /Script/DLSS.EDLSSSettingOverride
/// Size: 0x01 (1 bytes)
enum class EDLSSSettingOverride : uint8_t
{
	EDLSSSettingOverride__Enabled                                                    = 0,
	EDLSSSettingOverride__Disabled                                                   = 1,
	EDLSSSettingOverride__UseProjectSettings                                         = 2
};

/// Class /Script/DLSS.DLSSOverrideSettings
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UDLSSOverrideSettings : public UObject
{ 
public:
	EDLSSSettingOverride                               EnableDLSSInEditorViewportsOverride;                        // 0x0030   (0x0001)  
	EDLSSSettingOverride                               EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x0031   (0x0001)  
	EDLSSSettingOverride                               EnableDLSSInPlayInEditorViewportsOverride;                  // 0x0032   (0x0001)  
	bool                                               bShowDLSSIncompatiblePluginsToolsWarnings;                  // 0x0033   (0x0001)  
	EDLSSSettingOverride                               ShowDLSSSDebugOnScreenMessages;                             // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Class /Script/DLSS.DLSSSettings
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000068) align 8 pad: 0x0000
class UDLSSSettings : public UObject
{ 
public:
	bool                                               bEnableDLSSD3D12;                                           // 0x0030   (0x0001)  
	bool                                               bEnableDLSSD3D11;                                           // 0x0031   (0x0001)  
	bool                                               bEnableDLSSVulkan;                                          // 0x0032   (0x0001)  
	bool                                               bEnableDLSSInEditorViewports;                               // 0x0033   (0x0001)  
	bool                                               bEnableScreenpercentageManipulationInDLSSEditorViewports;   // 0x0034   (0x0001)  
	bool                                               bEnableDLSSInPlayInEditorViewports;                         // 0x0035   (0x0001)  
	bool                                               bShowDLSSSDebugOnScreenMessages;                            // 0x0036   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0037   (0x0001)  MISSED
	FString                                            GenericDLSSBinaryPath;                                      // 0x0038   (0x0010)  
	bool                                               bGenericDLSSBinaryExists;                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	uint32_t                                           NVIDIANGXApplicationId;                                     // 0x004C   (0x0004)  
	FString                                            CustomDLSSBinaryPath;                                       // 0x0050   (0x0010)  
	bool                                               bCustomDLSSBinaryExists;                                    // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x0061   (0x0001)  MISSED
	EDLSSPreset                                        DLSSQualityPreset;                                          // 0x0062   (0x0001)  
	EDLSSPreset                                        DLSSBalancedPreset;                                         // 0x0063   (0x0001)  
	EDLSSPreset                                        DLSSPerformancePreset;                                      // 0x0064   (0x0001)  
	EDLSSPreset                                        DLSSUltraPerformancePreset;                                 // 0x0065   (0x0001)  
	unsigned char                                      UnknownData03_7[0x2];                                       // 0x0066   (0x0002)  MISSED
};

