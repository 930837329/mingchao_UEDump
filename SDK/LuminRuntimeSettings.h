
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/LuminRuntimeSettings.ELuminPrivilege
/// Size: 0x01 (1 bytes)
enum class ELuminPrivilege : uint8_t
{
	ELuminPrivilege__Invalid                                                         = 0,
	ELuminPrivilege__BatteryInfo                                                     = 1,
	ELuminPrivilege__CameraCapture                                                   = 2,
	ELuminPrivilege__ComputerVision                                                  = 3,
	ELuminPrivilege__WorldReconstruction                                             = 4,
	ELuminPrivilege__InAppPurchase                                                   = 5,
	ELuminPrivilege__AudioCaptureMic                                                 = 6,
	ELuminPrivilege__DrmCertificates                                                 = 7,
	ELuminPrivilege__Occlusion                                                       = 8,
	ELuminPrivilege__LowLatencyLightwear                                             = 9,
	ELuminPrivilege__Internet                                                        = 10,
	ELuminPrivilege__IdentityRead                                                    = 11,
	ELuminPrivilege__BackgroundDownload                                              = 12,
	ELuminPrivilege__BackgroundUpload                                                = 13,
	ELuminPrivilege__MediaDrm                                                        = 14,
	ELuminPrivilege__Media                                                           = 15,
	ELuminPrivilege__MediaMetadata                                                   = 16,
	ELuminPrivilege__PowerInfo                                                       = 17,
	ELuminPrivilege__LocalAreaNetwork                                                = 18,
	ELuminPrivilege__VoiceInput                                                      = 19,
	ELuminPrivilege__Documents                                                       = 20,
	ELuminPrivilege__ConnectBackgroundMusicService                                   = 21,
	ELuminPrivilege__RegisterBackgroundMusicService                                  = 22,
	ELuminPrivilege__PcfRead                                                         = 23,
	ELuminPrivilege__PwFoundObjRead                                                  = 23,
	ELuminPrivilege__NormalNotificationsUsage                                        = 24,
	ELuminPrivilege__MusicService                                                    = 25,
	ELuminPrivilege__ControllerPose                                                  = 26,
	ELuminPrivilege__GesturesSubscribe                                               = 27,
	ELuminPrivilege__GesturesConfig                                                  = 28,
	ELuminPrivilege__AddressBookRead                                                 = 29,
	ELuminPrivilege__AddressBookWrite                                                = 30,
	ELuminPrivilege__AddressBookBasicAccess                                          = 31,
	ELuminPrivilege__CoarseLocation                                                  = 32,
	ELuminPrivilege__FineLocation                                                    = 33,
	ELuminPrivilege__HandMesh                                                        = 34,
	ELuminPrivilege__WifiStatusRead                                                  = 35,
	ELuminPrivilege__SocialConnectionsInvitesAccess                                  = 36,
	ELuminPrivilege__SocialConnectionsSelectAccess                                   = 37,
	ELuminPrivilege__SecureBrowserWindow                                             = 38,
	ELuminPrivilege__BluetoothAdapterExternalApp                                     = 39,
	ELuminPrivilege__BluetoothAdapterUser                                            = 40,
	ELuminPrivilege__BluetoothGattWrite                                              = 41
};

/// Enum /Script/LuminRuntimeSettings.ELuminFrameTimingHint
/// Size: 0x01 (1 bytes)
enum class ELuminFrameTimingHint : uint8_t
{
	ELuminFrameTimingHint__Unspecified                                               = 0,
	ELuminFrameTimingHint__Maximum                                                   = 1,
	ELuminFrameTimingHint__FPS                                                       = 2,
	ELuminFrameTimingHint__FPS4                                                      = 3
};

/// Enum /Script/LuminRuntimeSettings.ELuminComponentType
/// Size: 0x01 (1 bytes)
enum class ELuminComponentType : uint8_t
{
	ELuminComponentType__Universe                                                    = 0,
	ELuminComponentType__Fullscreen                                                  = 1,
	ELuminComponentType__SearchProvider                                              = 2,
	ELuminComponentType__MusicService                                                = 3,
	ELuminComponentType__Console                                                     = 4,
	ELuminComponentType__SystemUI                                                    = 5
};

/// Enum /Script/LuminRuntimeSettings.ELuminComponentSubElementType
/// Size: 0x01 (1 bytes)
enum class ELuminComponentSubElementType : uint8_t
{
	ELuminComponentSubElementType__FileExtension                                     = 0,
	ELuminComponentSubElementType__MimeType                                          = 1,
	ELuminComponentSubElementType__Mode                                              = 2,
	ELuminComponentSubElementType__MusicAttribute                                    = 3,
	ELuminComponentSubElementType__Schema                                            = 4
};

/// Struct /Script/LuminRuntimeSettings.LocalizedIconInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FLocalizedIconInfo
{ 
	FString                                            LanguageCode;                                               // 0x0000   (0x0010)  
	FDirectoryPath                                     IconModelPath;                                              // 0x0010   (0x0010)  
	FDirectoryPath                                     IconPortalPath;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/LuminRuntimeSettings.LocalizedIconInfos
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FLocalizedIconInfos
{ 
	TArray<FLocalizedIconInfo>                         IconData;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/LuminRuntimeSettings.LuminComponentSubElement
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FLuminComponentSubElement
{ 
	ELuminComponentSubElementType                      ElementType;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/LuminRuntimeSettings.LuminComponentElement
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FLuminComponentElement
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            VisibleName;                                                // 0x0010   (0x0010)  
	FString                                            ExecutableName;                                             // 0x0020   (0x0010)  
	ELuminComponentType                                ComponentType;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FLuminComponentSubElement>                  ExtraComponentSubElements;                                  // 0x0038   (0x0010)  
};

/// Struct /Script/LuminRuntimeSettings.LocalizedAppName
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FLocalizedAppName
{ 
	FString                                            LanguageCode;                                               // 0x0000   (0x0010)  
	FString                                            AppName;                                                    // 0x0010   (0x0010)  
};

/// Class /Script/LuminRuntimeSettings.LuminRuntimeSettings
/// Size: 0x0120 (288 bytes) (0x000030 - 0x000150) align 8 pad: 0x0000
class ULuminRuntimeSettings : public UObject
{ 
public:
	FString                                            PackageName;                                                // 0x0030   (0x0010)  
	FString                                            ApplicationDisplayName;                                     // 0x0040   (0x0010)  
	ELuminFrameTimingHint                              FrameTimingHint;                                            // 0x0050   (0x0001)  
	bool                                               bProtectedContent;                                          // 0x0051   (0x0001)  
	bool                                               bManualCallToAppReady;                                      // 0x0052   (0x0001)  
	bool                                               bUseMobileRendering;                                        // 0x0053   (0x0001)  
	bool                                               bUseVulkan;                                                 // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	FFilePath                                          Certificate;                                                // 0x0058   (0x0010)  
	FDirectoryPath                                     IconModelPath;                                              // 0x0068   (0x0010)  
	FDirectoryPath                                     IconPortalPath;                                             // 0x0078   (0x0010)  
	FLocalizedIconInfos                                LocalizedIconInfos;                                         // 0x0088   (0x0010)  
	int32_t                                            VersionCode;                                                // 0x0098   (0x0004)  
	int32_t                                            MinimumAPILevel;                                            // 0x009C   (0x0004)  
	TArray<ELuminPrivilege>                            AppPrivileges;                                              // 0x00A0   (0x0010)  
	TArray<FLuminComponentSubElement>                  ExtraComponentSubElements;                                  // 0x00B0   (0x0010)  
	TArray<FLuminComponentElement>                     ExtraComponentElements;                                     // 0x00C0   (0x0010)  
	FString                                            SpatializationPlugin;                                       // 0x00D0   (0x0010)  
	FString                                            ReverbPlugin;                                               // 0x00E0   (0x0010)  
	FString                                            OcclusionPlugin;                                            // 0x00F0   (0x0010)  
	int32_t                                            SoundCueCookQualityIndex;                                   // 0x0100   (0x0004)  
	bool                                               bRemoveDebugInfo;                                           // 0x0104   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0105   (0x0003)  MISSED
	FDirectoryPath                                     VulkanValidationLayerLibs;                                  // 0x0108   (0x0010)  
	bool                                               bFrameVignette;                                             // 0x0118   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0119   (0x0007)  MISSED
	TArray<FLocalizedAppName>                          LocalizedAppNames;                                          // 0x0120   (0x0010)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x0130   (0x0020)  MISSED
};

