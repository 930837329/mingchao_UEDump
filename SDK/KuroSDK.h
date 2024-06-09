
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/KuroSDK.EPaymentType
/// Size: 0x01 (1 bytes)
enum class EPaymentType : uint8_t
{
	EPaymentType__Success                                                            = 1,
	EPaymentType__Fail                                                               = 2,
	EPaymentType__Cancel                                                             = 3
};

/// Enum /Script/KuroSDK.UKuroSDKEventType
/// Size: 0x01 (1 bytes)
enum class UKuroSDKEventType : uint8_t
{
	UKuroSDKEventType__KuroSDKLogin                                                  = 0,
	UKuroSDKEventType__KuroSDKKick                                                   = 1,
	UKuroSDKEventType__KuroSDKSelectedRole                                           = 2,
	UKuroSDKEventType__KuroSDKCreateRole                                             = 3,
	UKuroSDKEventType__KuroSDKUpgradeRole                                            = 4,
	UKuroSDKEventType__KuroSDKExit                                                   = 5,
	UKuroSDKEventType__KuroSDKLogout                                                 = 6,
	UKuroSDKEventType__KuroSDKOpenLoginWnd                                           = 7,
	UKuroSDKEventType__KuroPay                                                       = 8,
	UKuroSDKEventType__KuroOpenSdkUrlWnd                                             = 9,
	UKuroSDKEventType__KuroInitializePostWebView                                     = 10,
	UKuroSDKEventType__KuroOpenPostWebView                                           = 11,
	UKuroSDKEventType__KuroOpenPrivacyClauseWnd                                      = 12,
	UKuroSDKEventType__KuroOpenUserCenter                                            = 13,
	UKuroSDKEventType__KuroReadProductInfo                                           = 14,
	UKuroSDKEventType__KuroShowAgreement                                             = 15,
	UKuroSDKEventType__KuroNotiLanguage                                              = 16,
	UKuroSDKEventType__KuroDoInit                                                    = 17
};

/// Class /Script/KuroSDK.KuroSDKManager
/// Size: 0x01E8 (488 bytes) (0x000030 - 0x000218) align 8 pad: 0x0000
class UKuroSDKManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,1478) /* FMulticastInlineDelegate */ __um(InitDelegate);                                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1479) /* FMulticastInlineDelegate */ __um(LoginDelegate);                                     // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1480) /* FMulticastInlineDelegate */ __um(KickDelegate);                                      // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1481) /* FMulticastInlineDelegate */ __um(LogoutDelegate);                                    // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1482) /* FMulticastInlineDelegate */ __um(ExitDelegate);                                      // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,1483) /* FMulticastInlineDelegate */ __um(HasExitDelegate);                                   // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,1484) /* FMulticastInlineDelegate */ __um(PaymentDelegate);                                   // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,1485) /* FMulticastInlineDelegate */ __um(PostRedPointDelegate);                              // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,1486) /* FMulticastInlineDelegate */ __um(PostProductDelegate);                               // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,1487) /* FMulticastInlineDelegate */ __um(ProtocolCallBack);                                  // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,1488) /* FMulticastInlineDelegate */ __um(RequestPhotoPermissionDelegate);                    // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
	SDK_UNDEFINED(16,1489) /* FMulticastInlineDelegate */ __um(AnnounceInitDelegate);                              // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,1490) /* FMulticastInlineDelegate */ __um(AnnounceOpenDelegate);                              // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,1491) /* FMulticastInlineDelegate */ __um(AnnounceRedPointDelegate);                          // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,1492) /* FMulticastInlineDelegate */ __um(CustomerServiceResultDelegate);                     // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,1493) /* FMulticastInlineDelegate */ __um(GetParamsDelegate);                                 // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,1494) /* FMulticastInlineDelegate */ __um(OnLoginDelegate);                                   // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,1495) /* FMulticastInlineDelegate */ __um(DeepLinkDelegate);                                  // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,1496) /* FMulticastInlineDelegate */ __um(GetAdsValueDelegate);                               // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,1497) /* FMulticastInlineDelegate */ __um(GetSharePlatformDelegate);                          // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,1498) /* FMulticastInlineDelegate */ __um(ShareResultDelegate);                               // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,1499) /* FMulticastInlineDelegate */ __um(LogDelegate);                                       // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,1500) /* FMulticastInlineDelegate */ __um(WebViewCloseDelegate);                              // 0x01A0   (0x0010)  
	SDK_UNDEFINED(16,1501) /* FMulticastInlineDelegate */ __um(OnActivatedByApplinksDelegate);                     // 0x01B0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x58];                                      // 0x01C0   (0x0058)  MISSED
	// void Start();                                                                                                            // [0x224c350] Final|Native|Static|Public 
	// void ShowExitGameDialog();                                                                                               // [0x224c330] Final|Native|Static|Public 
	// void Share(TArray<char>& imageData, FString sKuroSDKEventParameter);                                                     // [0x224c230] Final|Native|Static|Public|HasOutParms 
	// void SetWindowsMode(bool Mode);                                                                                          // [0x224c1b0] Final|Native|Static|Public 
	// void SetIfGlobalSdk(bool ifGlobal);                                                                                      // [0x224c130] Final|Native|Static|Public 
	// void SetFont(FString Data);                                                                                              // [0x224c0a0] Final|Native|Static|Public 
	// void RequestPhotoPermission();                                                                                           // [0x224c080] Final|Native|Static|Public 
	// void QueryProductInfo(FString Data);                                                                                     // [0x224bff0] Final|Native|Static|Public 
	// void PostSplashScreenEndSuccess();                                                                                       // [0x224bfd0] Final|Native|Static|Public 
	// void OpenWebView(FString Title, FString URL, bool isLandscape, bool transparent, bool webAccelerated, FString Data);     // [0x224bdb0] Final|Native|Static|Public 
	// void OpenSdkQRScan();                                                                                                    // [0x224bd90] Final|Native|Static|Public 
	// void OpenDefaultWebView(FString URL);                                                                                    // [0x224bd00] Final|Native|Static|Public 
	// void OpenCustomerService(FString Data);                                                                                  // [0x224bc70] Final|Native|Static|Public 
	// void LogMarketingEvent(FString Data);                                                                                    // [0x224bbe0] Final|Native|Static|Public 
	// void KuroSDKEvent(UKuroSDKEventType& iKuroSDKEvent, FString sKuroSDKEventParameter);                                     // [0x224baf0] Final|Native|Static|Public|HasOutParms 
	// bool IsUserCenterEnable();                                                                                               // [0x224bac0] Final|Native|Static|Public 
	// bool IsLogin();                                                                                                          // [0x224ba90] Final|Native|Static|Public 
	// bool IsCustomerServiceEnable();                                                                                          // [0x224ba60] Final|Native|Static|Public 
	// void Initialize();                                                                                                       // [0x224ba40] Final|Native|Static|Public 
	// void GetSharePlatform();                                                                                                 // [0x224ba20] Final|Native|Static|Public 
	// FString GetSdkParams(FString Data);                                                                                      // [0x224b940] Final|Native|Static|Public 
	// FString GetSdkLoginInfo();                                                                                               // [0x224b8c0] Final|Native|Static|Public 
	// bool GetSdkIsShowQuitTips();                                                                                             // [0x224b890] Final|Native|Static|Public 
	// bool GetSdkIsQRScan();                                                                                                   // [0x224b860] Final|Native|Static|Public 
	// bool GetSdkInitState();                                                                                                  // [0x224b830] Final|Native|Static|Public 
	// FString GetProjectId();                                                                                                  // [0x224b7b0] Final|Native|Static|Public 
	// bool GetPostWebViewInitState();                                                                                          // [0x224b780] Final|Native|Static|Public 
	// FString GetPackageId();                                                                                                  // [0x224b700] Final|Native|Static|Public 
	// bool GetIsAgreeProtocol();                                                                                               // [0x224b6d0] Final|Native|Static|Public 
	// FString GetDeepLinkStr();                                                                                                // [0x224b650] Final|Native|Static|Public 
	// FLoginStruct GetCurrentLoginInfo();                                                                                      // [0x224b4a0] Final|Native|Static|Public 
	// FString GetChannelName();                                                                                                // [0x224b420] Final|Native|Static|Public 
	// int32_t GetChannelId();                                                                                                  // [0x224b3f0] Final|Native|Static|Public 
	// FBasicInfo GetBasicInfo();                                                                                               // [0x224b280] Final|Native|Static|Public 
	// FString GetAppChannelId();                                                                                               // [0x224b200] Final|Native|Static|Public 
	// FString GetAgreementUrl();                                                                                               // [0x224b180] Final|Native|Static|Public 
	// void GetAdsValue(FString income, FString Data);                                                                          // [0x224b090] Final|Native|Static|Public 
	// class UKuroSDKManager* Get();                                                                                            // [0x224b060] Final|Native|Static|Public 
	// void ExitGame();                                                                                                         // [0x224b040] Final|Native|Static|Public 
	// void ClearLoginInfo();                                                                                                   // [0x224b020] Final|Native|Static|Public 
	// bool CheckPhotoPermission();                                                                                             // [0x224aff0] Final|Native|Static|Public 
	// void CheckApplinksActivation();                                                                                          // [0x224afd0] Final|Native|Static|Public 
	// void BindAccount();                                                                                                      // [0x224afb0] Final|Native|Static|Public 
};

/// Class /Script/KuroSDK.KuroSDKStaticLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroSDKStaticLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void ShowExitGameDialog();                                                                                               // [0x224d6c0] Final|Native|Static|Public|BlueprintCallable 
	// void ShareTexture(FString texturePath, FString sKuroSDKEventParameter);                                                  // [0x224d5d0] Final|Native|Static|Public|BlueprintCallable 
	// void Share(FString ImagePath, FString sKuroSDKEventParameter);                                                           // [0x224d4e0] Final|Native|Static|Public|BlueprintCallable 
	// void SetIfGlobalSdk(bool ifGlobal);                                                                                      // [0x224d460] Final|Native|Static|Public|BlueprintCallable 
	// void PostSplashSuccess();                                                                                                // [0x224d440] Final|Native|Static|Public|BlueprintCallable 
	// void OpenWebView(FString Title, FString URL, bool isLandscape, bool transparent, bool webAccelerated, FString Data);     // [0x224d220] Final|Native|Static|Public|BlueprintCallable 
	// void OpenQRScan();                                                                                                       // [0x224d200] Final|Native|Static|Public|BlueprintCallable 
	// void OpenDefaultWebView(FString URL);                                                                                    // [0x224d170] Final|Native|Static|Public|BlueprintCallable 
	// void OpenCustomerService(FString Data);                                                                                  // [0x224d0e0] Final|Native|Static|Public|BlueprintCallable 
	// void LogMarketingEvent(FString Data);                                                                                    // [0x224d050] Final|Native|Static|Public|BlueprintCallable 
	// void KuroSDKEvent(UKuroSDKEventType& iKuroSDKEvent, FString sKuroSDKEventParameter);                                     // [0x224cf60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void IsShowQuitTips();                                                                                                   // [0x224cf40] Final|Native|Static|Public|BlueprintCallable 
	// void IsCanQRScan();                                                                                                      // [0x224cf20] Final|Native|Static|Public|BlueprintCallable 
	// void Initialize();                                                                                                       // [0x224cf00] Final|Native|Static|Public|BlueprintCallable 
	// void GetSdkParams(FString Data);                                                                                         // [0x224ce70] Final|Native|Static|Public|BlueprintCallable 
	// void GetProjectId();                                                                                                     // [0x224ce50] Final|Native|Static|Public|BlueprintCallable 
	// bool GetPostWebViewInitState();                                                                                          // [0x224ce20] Final|Native|Static|Public|BlueprintCallable 
	// bool GetIsAgreeProtocol();                                                                                               // [0x224cdf0] Final|Native|Static|Public|BlueprintCallable 
	// FLoginStruct GetCurrentLoginInfo();                                                                                      // [0x224cc40] Final|Native|Static|Public|BlueprintCallable 
	// void GetChannelName();                                                                                                   // [0x224cc20] Final|Native|Static|Public|BlueprintCallable 
	// void GetChannelId();                                                                                                     // [0x224cc00] Final|Native|Static|Public|BlueprintCallable 
	// void GetBaseDeviceInfo();                                                                                                // [0x224cbe0] Final|Native|Static|Public|BlueprintCallable 
	// void GetAppChannelId();                                                                                                  // [0x224cbc0] Final|Native|Static|Public|BlueprintCallable 
	// FString GetAndroidGalleryExternalFilePath();                                                                             // [0x224cb40] Final|Native|Static|Public|BlueprintCallable 
	// void GetAgreementUrl();                                                                                                  // [0x224cb20] Final|Native|Static|Public|BlueprintCallable 
	// void GetAdsValue(FString income, FString Data);                                                                          // [0x224ca30] Final|Native|Static|Public|BlueprintCallable 
	// class UKuroSDKManager* Get();                                                                                            // [0x224ca00] Final|Native|Static|Public|BlueprintCallable 
	// void ClearSdkInstance();                                                                                                 // [0x224c9e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/KuroSDK.LoginStruct
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FLoginStruct
{ 
	char                                               LoginCode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Uid;                                                        // 0x0008   (0x0010)  
	FString                                            UserName;                                                   // 0x0018   (0x0010)  
	FString                                            Token;                                                      // 0x0028   (0x0010)  
	FString                                            ChannelId;                                                  // 0x0038   (0x0010)  
	FString                                            ExParams;                                                   // 0x0048   (0x0010)  
};

/// Struct /Script/KuroSDK.PaymentStruct
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FPaymentStruct
{ 
	FString                                            OrderId;                                                    // 0x0000   (0x0010)  
	EPaymentType                                       PaymentType;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            Type;                                                       // 0x0018   (0x0010)  
	FString                                            ExtraInfo;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/KuroSDK.BasicInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FBasicInfo
{ 
	FString                                            DeviceID;                                                   // 0x0000   (0x0010)  
	FString                                            platform;                                                   // 0x0010   (0x0010)  
	FString                                            ModelName;                                                  // 0x0020   (0x0010)  
	FString                                            CPUModelName;                                               // 0x0030   (0x0010)  
	bool                                               bIsValid;                                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

