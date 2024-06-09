
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: SlateCore
/// dependency: TapCommon

/// Struct /Script/TapLogin.PermissionCheckBoxStyle
/// Size: 0x0868 (2152 bytes) (0x000008 - 0x000870) align 8 pad: 0x0000
struct FPermissionCheckBoxStyle : FSlateWidgetStyle
{ 
	FCheckBoxStyle                                     PermissionCheckBoxStyle;                                    // 0x0008   (0x05E0)  
	FTextBlockStyle                                    PermissionTextBlockStyle;                                   // 0x05E8   (0x0288)  
};

/// Class /Script/TapLogin.PermissionCheckBoxWidgetStyle
/// Size: 0x0870 (2160 bytes) (0x000038 - 0x0008A8) align 8 pad: 0x0000
class UPermissionCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FPermissionCheckBoxStyle                           WidgetStyle;                                                // 0x0038   (0x0870)  
};

/// Struct /Script/TapLogin.QrCodeScanTipButtonStyle
/// Size: 0x0438 (1080 bytes) (0x000008 - 0x000440) align 8 pad: 0x0000
struct FQrCodeScanTipButtonStyle : FSlateWidgetStyle
{ 
	FTextBlockStyle                                    ScanTipTextBlockStyle;                                      // 0x0008   (0x0288)  
	FSlateBrush                                        IconBrush;                                                  // 0x0290   (0x0090)  
	FSlateBrush                                        OpenBrush;                                                  // 0x0320   (0x0090)  
	FSlateBrush                                        CloseBrush;                                                 // 0x03B0   (0x0090)  
};

/// Class /Script/TapLogin.QrCodeScanTipButtonWidgetStyle
/// Size: 0x0440 (1088 bytes) (0x000038 - 0x000478) align 8 pad: 0x0000
class UQrCodeScanTipButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FQrCodeScanTipButtonStyle                          WidgetStyle;                                                // 0x0038   (0x0440)  
};

/// Struct /Script/TapLogin.TapLoginStyle
/// Size: 0x2958 (10584 bytes) (0x000008 - 0x002960) align 8 pad: 0x0000
struct FTapLoginStyle : FSlateWidgetStyle
{ 
	FTextBlockStyle                                    TitleTextBlockStyle;                                        // 0x0008   (0x0288)  
	FMargin                                            TitlePadding;                                               // 0x0290   (0x0010)  
	FTextBlockStyle                                    SubtitleTextBlockStyle;                                     // 0x02A0   (0x0288)  
	FMargin                                            QrCodePadding;                                              // 0x0528   (0x0010)  
	FMargin                                            QrCodeDescription2Padding;                                  // 0x0538   (0x0010)  
	FTextBlockStyle                                    QrCodeDescriptionStyle;                                     // 0x0548   (0x0288)  
	FTextBlockStyle                                    QrCodeDescriptionStyle2;                                    // 0x07D0   (0x0288)  
	FSlateBrush                                        TipContainerBrush;                                          // 0x0A58   (0x0090)  
	FQrCodeScanTipButtonStyle                          QrCodeScanTipButtonStyle;                                   // 0x0AE8   (0x0440)  
	FSlateBrush                                        RetryBrush;                                                 // 0x0F28   (0x0090)  
	FMargin                                            RetryContentPadding;                                        // 0x0FB8   (0x0010)  
	FSlateBrush                                        QrCodeRetryIconBrush;                                       // 0x0FC8   (0x0090)  
	FTextBlockStyle                                    QrCodeRetryTextBlockStyle;                                  // 0x1058   (0x0288)  
	FTextBlockStyle                                    QrCodeRetryDescriptionStyle;                                // 0x12E0   (0x0288)  
	FMargin                                            NoPermissionPadding;                                        // 0x1568   (0x0010)  
	FSlateBrush                                        NoPermissionBrush;                                          // 0x1578   (0x0090)  
	FMargin                                            WebAuthButtonPadding;                                       // 0x1608   (0x0010)  
	FTextBlockStyle                                    WebAuthTextBlockStyle;                                      // 0x1618   (0x0288)  
	FSlateBrush                                        WebAuthArrow;                                               // 0x18A0   (0x0090)  
	TEnumAsByte<EHorizontalAlignment>                  WebAuthHAlignment;                                          // 0x1930   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x1931   (0x0007)  MISSED
	FTextBlockStyle                                    WebAuthTipTextBlockStyle;                                   // 0x1938   (0x0288)  
	FTextBlockStyle                                    WebAuthTipTextBlockStyle2;                                  // 0x1BC0   (0x0288)  
	FMargin                                            WebAuthTip2Padding;                                         // 0x1E48   (0x0010)  
	FMargin                                            PermissionItemPadding;                                      // 0x1E58   (0x0010)  
	FTextBlockStyle                                    PermissionTitleTextBlockStyle;                              // 0x1E68   (0x0288)  
	FPermissionCheckBoxStyle                           PermissionCheckBoxStyle;                                    // 0x20F0   (0x0870)  
};

/// Class /Script/TapLogin.TapLoginWidgetStyle
/// Size: 0x2960 (10592 bytes) (0x000038 - 0x002998) align 8 pad: 0x0000
class UTapLoginWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FTapLoginStyle                                     WidgetStyle;                                                // 0x0038   (0x2960)  
};

/// Class /Script/TapLogin.TULoginReflection
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UTULoginReflection : public UObject
{ 
public:
	// FString GetOpenID();                                                                                                     // [0x211bba0] Final|Native|Static|Private 
};

/// Struct /Script/TapLogin.LoginWrapper
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FLoginWrapper
{ 
	FString                                            wrapper;                                                    // 0x0000   (0x0010)  
	uint64_t                                           loginCallbackCode;                                          // 0x0010   (0x0008)  
};

/// Struct /Script/TapLogin.FriendWrapper
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FFriendWrapper
{ 
	FString                                            Content;                                                    // 0x0000   (0x0010)  
	bool                                               Success;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	int64_t                                            Code;                                                       // 0x0018   (0x0008)  
};

/// Struct /Script/TapLogin.TUAccessToken
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FTUAccessToken
{ 
	FString                                            kid;                                                        // 0x0000   (0x0010)  
	FString                                            access_token;                                               // 0x0010   (0x0010)  
	FString                                            token_type;                                                 // 0x0020   (0x0010)  
	FString                                            mac_key;                                                    // 0x0030   (0x0010)  
	FString                                            mac_algorithm;                                              // 0x0040   (0x0010)  
	FString                                            Scope;                                                      // 0x0050   (0x0010)  
};

/// Struct /Script/TapLogin.TUAntiAddictionModel
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FTUAntiAddictionModel
{ 
	FString                                            Code;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/TapLogin.TULoginError
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FTULoginError
{ 
	int32_t                                            Code;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            msg;                                                        // 0x0008   (0x0010)  
	FString                                            Error;                                                      // 0x0018   (0x0010)  
	FString                                            error_description;                                          // 0x0028   (0x0010)  
};

/// Struct /Script/TapLogin.TULoginFriendInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FTULoginFriendInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            avatar;                                                     // 0x0010   (0x0010)  
	FString                                            openid;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/TapLogin.TULoginFriendResult
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FTULoginFriendResult
{ 
	TArray<FTULoginFriendInfo>                         Data;                                                       // 0x0000   (0x0010)  
	FString                                            Cursor;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/TapLogin.TULoginProfileModel
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FTULoginProfileModel
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            avatar;                                                     // 0x0010   (0x0010)  
	FString                                            openid;                                                     // 0x0020   (0x0010)  
	FString                                            unionid;                                                    // 0x0030   (0x0010)  
};

/// Struct /Script/TapLogin.TULoginStorage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FTULoginStorage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TapLogin.TULoginConfig
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FTULoginConfig
{ 
	FString                                            ClientId;                                                   // 0x0000   (0x0010)  
	ERegionType                                        RegionType;                                                 // 0x0010   (0x0001)  
	bool                                               bRoundCorner;                                               // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/TapLogin.TUQrCodeModel
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FTUQrCodeModel
{ 
	FString                                            qrcode_url;                                                 // 0x0000   (0x0010)  
	FString                                            verification_url;                                           // 0x0010   (0x0010)  
	FString                                            device_code;                                                // 0x0020   (0x0010)  
	FString                                            user_code;                                                  // 0x0030   (0x0010)  
	int64_t                                            expires_in;                                                 // 0x0040   (0x0008)  
	int64_t                                            interval;                                                   // 0x0048   (0x0008)  
};

/// Struct /Script/TapLogin.TUTestQualificationModel
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FTUTestQualificationModel
{ 
	bool                                               in_test;                                                    // 0x0000   (0x0001)  
};

