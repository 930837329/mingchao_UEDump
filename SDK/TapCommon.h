
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: JsonUtilities
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/TapCommon.ETapButtonStyleType
/// Size: 0x01 (1 bytes)
enum class ETapButtonStyleType : uint8_t
{
	ETapButtonStyleType__Blue                                                        = 0,
	ETapButtonStyleType__White                                                       = 1,
	ETapButtonStyleType__Black                                                       = 2,
	ETapButtonStyleType__RefreshBlue                                                 = 3,
	ETapButtonStyleType__RefreshBlack                                                = 4,
	ETapButtonStyleType__RoundBack                                                   = 5,
	ETapButtonStyleType__RoundClose                                                  = 6,
	ETapButtonStyleType__SmallBack                                                   = 7,
	ETapButtonStyleType__SmallClose                                                  = 8,
	ETapButtonStyleType__BoldBack                                                    = 9,
	ETapButtonStyleType__BoldClose                                                   = 10,
	ETapButtonStyleType__LargeCopy                                                   = 11
};

/// Enum /Script/TapCommon.ETapInputMode
/// Size: 0x01 (1 bytes)
enum class ETapInputMode : uint8_t
{
	ETapInputMode__Focus                                                             = 0,
	ETapInputMode__Cursor                                                            = 1
};

/// Enum /Script/TapCommon.ETapControllerTipIconType
/// Size: 0x01 (1 bytes)
enum class ETapControllerTipIconType : uint8_t
{
	ETapControllerTipIconType__None                                                  = 0,
	ETapControllerTipIconType__Scroll                                                = 1,
	ETapControllerTipIconType__Back                                                  = 2,
	ETapControllerTipIconType__Accept                                                = 4
};

/// Enum /Script/TapCommon.ETapControllerType
/// Size: 0x01 (1 bytes)
enum class ETapControllerType : uint8_t
{
	ETapControllerType__PS                                                           = 0,
	ETapControllerType__XBox                                                         = 1,
	ETapControllerType__Switch                                                       = 2
};

/// Enum /Script/TapCommon.ETapAntiAddictionConfigRegion
/// Size: 0x01 (1 bytes)
enum class ETapAntiAddictionConfigRegion : uint8_t
{
	ETapAntiAddictionConfigRegion__China                                             = 0,
	ETapAntiAddictionConfigRegion__Vietnam                                           = 1
};

/// Enum /Script/TapCommon.ELanguageType
/// Size: 0x01 (1 bytes)
enum class ELanguageType : uint8_t
{
	ELanguageType__AUTO                                                              = 0,
	ELanguageType__ZH                                                                = 1,
	ELanguageType__EN                                                                = 2,
	ELanguageType__ZHTW                                                              = 3,
	ELanguageType__JA                                                                = 4,
	ELanguageType__KO                                                                = 5,
	ELanguageType__TH                                                                = 6,
	ELanguageType__ID                                                                = 7,
	ELanguageType__DE                                                                = 8,
	ELanguageType__ES                                                                = 9,
	ELanguageType__FR                                                                = 10,
	ELanguageType__PT                                                                = 11,
	ELanguageType__RU                                                                = 12,
	ELanguageType__TR                                                                = 13,
	ELanguageType__VI                                                                = 14
};

/// Enum /Script/TapCommon.ERegionType
/// Size: 0x01 (1 bytes)
enum class ERegionType : uint8_t
{
	ERegionType__CN                                                                  = 0,
	ERegionType__Global                                                              = 1
};

/// Struct /Script/TapCommon.TapBoxWrapperStyle
/// Size: 0x0358 (856 bytes) (0x000008 - 0x000360) align 8 pad: 0x0000
struct FTapBoxWrapperStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        BackgroundBrush;                                            // 0x0008   (0x0090)  
	FTextBlockStyle                                    TitleStyle;                                                 // 0x0098   (0x0288)  
	FMargin                                            TitlePadding;                                               // 0x0320   (0x0010)  
	FMargin                                            ButtonBoxPadding;                                           // 0x0330   (0x0010)  
	FVector2D                                          ButtonSize;                                                 // 0x0340   (0x0008)  
	float                                              ButtonGap;                                                  // 0x0348   (0x0004)  
	FMargin                                            CloseButtonPadding;                                         // 0x034C   (0x0010)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x035C   (0x0004)  MISSED
};

/// Class /Script/TapCommon.TapBoxWrapperWidgetStyle
/// Size: 0x0360 (864 bytes) (0x000038 - 0x000398) align 8 pad: 0x0000
class UTapBoxWrapperWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FTapBoxWrapperStyle                                WidgetStyle;                                                // 0x0038   (0x0360)  
};

/// Class /Script/TapCommon.TapButton
/// Size: 0x0028 (40 bytes) (0x000140 - 0x000168) align 8 pad: 0x0000
class UTapButton : public UContentWidget
{ 
public:
	ETapButtonStyleType                                StyleType;                                                  // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0141   (0x0007)  MISSED
	SDK_UNDEFINED(16,1603) /* FMulticastInlineDelegate */ __um(OnClicked);                                         // 0x0148   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0158   (0x0010)  MISSED
};

/// Class /Script/TapCommon.TapButtonSlot
/// Size: 0x0028 (40 bytes) (0x000040 - 0x000068) align 8 pad: 0x0000
class UTapButtonSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0050   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_7[0x16];                                      // 0x0052   (0x0016)  MISSED
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x20f3700] Final|Native|Public|BlueprintCallable 
	// void SetPadding(FMargin InPadding);                                                                                      // [0x20f3670] Final|Native|Public|BlueprintCallable 
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x20f35f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TapCommon.TapCommonBPLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UTapCommonBPLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// TArray<FString> RemoveEmptyString(TArray<FString> stringArray);                                                          // [0x20f3400] Final|Native|Static|Public|BlueprintCallable 
	// TMap<FString, FString> RemoveEmptyKey(TMap<FString, FString> StringMap);                                                 // [0x20f3240] Final|Native|Static|Public|BlueprintCallable 
	// void Register(FString serviceClz, FString serviceImpl);                                                                  // [0x20f30b0] Final|Native|Static|Public|BlueprintCallable 
	// void CallHandler(FString Command);                                                                                       // [0x20f2f70] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/TapCommon.TapMessageBoxStyle
/// Size: 0x0298 (664 bytes) (0x000008 - 0x0002A0) align 8 pad: 0x0000
struct FTapMessageBoxStyle : FSlateWidgetStyle
{ 
	FTextBlockStyle                                    RichTextBlockStyle;                                         // 0x0008   (0x0288)  
	FMargin                                            ContentPadding;                                             // 0x0290   (0x0010)  
};

/// Class /Script/TapCommon.TapMessageBoxWidgetStyle
/// Size: 0x02A0 (672 bytes) (0x000038 - 0x0002D8) align 8 pad: 0x0000
class UTapMessageBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FTapMessageBoxStyle                                WidgetStyle;                                                // 0x0038   (0x02A0)  
};

/// Class /Script/TapCommon.TapSubsystem
/// Size: 0x0030 (48 bytes) (0x000038 - 0x000068) align 8 pad: 0x0000
class UTapSubsystem : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0038   (0x0020)  MISSED
	class UUserInterfaceSettings*                      UISetting;                                                  // 0x0058   (0x0008)  
	int32_t                                            TapWidgetZOrder;                                            // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/TapCommon.TapThrobberStyle
/// Size: 0x08A0 (2208 bytes) (0x000008 - 0x0008A8) align 8 pad: 0x0000
struct FTapThrobberStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        BackgroundBrush;                                            // 0x0008   (0x0090)  
	FSlateBrush                                        BackGroundBrush_PC;                                         // 0x0098   (0x0090)  
	FSlateBrush                                        BackGroundBrush_PC_Text;                                    // 0x0128   (0x0090)  
	FSlateBrush                                        ShadowBrush;                                                // 0x01B8   (0x0090)  
	FSlateBrush                                        PieceImage;                                                 // 0x0248   (0x0090)  
	FSlateBrush                                        PieceImage_PC;                                              // 0x02D8   (0x0090)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0368   (0x0028)  
	FTextBlockStyle                                    ContentStyle;                                               // 0x0390   (0x0288)  
	FTextBlockStyle                                    ContentStyle_PC;                                            // 0x0618   (0x0288)  
	float                                              RotationRate;                                               // 0x08A0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x08A4   (0x0004)  MISSED
};

/// Class /Script/TapCommon.TapThrobberWidgetStyle
/// Size: 0x08A8 (2216 bytes) (0x000038 - 0x0008E0) align 8 pad: 0x0000
class UTapThrobberWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FTapThrobberStyle                                  WidgetStyle;                                                // 0x0038   (0x08A8)  
};

/// Struct /Script/TapCommon.TapToastStyle
/// Size: 0x03B0 (944 bytes) (0x000008 - 0x0003B8) align 8 pad: 0x0000
struct FTapToastStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        Background;                                                 // 0x0008   (0x0090)  
	FSlateBrush                                        IconBrushTemplate;                                          // 0x0098   (0x0090)  
	FTextBlockStyle                                    ContentStyle;                                               // 0x0128   (0x0288)  
	float                                              Height;                                                     // 0x03B0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x03B4   (0x0004)  MISSED
};

/// Class /Script/TapCommon.TapToastWidgetStyle
/// Size: 0x03B8 (952 bytes) (0x000038 - 0x0003F0) align 8 pad: 0x0000
class UTapToastWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FTapToastStyle                                     WidgetStyle;                                                // 0x0038   (0x03B8)  
};

/// Class /Script/TapCommon.TapWidget
/// Size: 0x0000 (0 bytes) (0x000290 - 0x000290) align 8 pad: 0x0000
class UTapWidget : public UUserWidget
{ 
public:
};

/// Class /Script/TapCommon.TapWebBrowser
/// Size: 0x0050 (80 bytes) (0x000290 - 0x0002E0) align 8 pad: 0x0000
class UTapWebBrowser : public UTapWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0290   (0x0010)  MISSED
	class UNativeWidgetHost*                           WebBrowser;                                                 // 0x02A0   (0x0008)  
	class UTapButton*                                  BTN_GoBack;                                                 // 0x02A8   (0x0008)  
	class UTapButton*                                  BTN_Close;                                                  // 0x02B0   (0x0008)  
	class UTapButton*                                  BTN_Retry;                                                  // 0x02B8   (0x0008)  
	class UTextBlock*                                  TB_Retry;                                                   // 0x02C0   (0x0008)  
	class UTextBlock*                                  TB_ErrorTip;                                                // 0x02C8   (0x0008)  
	class UImage*                                      ErrorTipIcon;                                               // 0x02D0   (0x0008)  
	class UPanelWidget*                                RetryPanel;                                                 // 0x02D8   (0x0008)  
	// void Reload();                                                                                                           // [0x20f3220] Native|Public        
	// void GoBack();                                                                                                           // [0x20f3090] Native|Public        
	// void Close();                                                                                                            // [0x20f3050] Native|Public        
};

/// Class /Script/TapCommon.TUHUD
/// Size: 0x0020 (32 bytes) (0x000290 - 0x0002B0) align 8 pad: 0x0000
class UTUHUD : public UUserWidget
{ 
public:
	class UTextBlock*                                  TitleLabel;                                                 // 0x0290   (0x0008)  
	class USizeBox*                                    ImageBox;                                                   // 0x0298   (0x0008)  
	class UOverlay*                                    BackView;                                                   // 0x02A0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x02A8   (0x0008)  MISSED
	// void ShowWaitAndToast(FString Toast);                                                                                    // [0x20f3880] Final|Native|Static|Public|BlueprintCallable 
	// void ShowWait();                                                                                                         // [0x20f3860] Final|Native|Static|Public|BlueprintCallable 
	// void ShowToast(FString Toast, float TimeInterval);                                                                       // [0x20f3780] Final|Native|Static|Public|BlueprintCallable 
	// void Dismiss();                                                                                                          // [0x20f3070] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/TapCommon.TapCommand
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FTapCommand
{ 
	FString                                            service;                                                    // 0x0000   (0x0010)  
	FString                                            method;                                                     // 0x0010   (0x0010)  
	FString                                            args;                                                       // 0x0020   (0x0010)  
	bool                                               callback;                                                   // 0x0030   (0x0001)  
	bool                                               onceTime;                                                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
	FString                                            callbackId;                                                 // 0x0038   (0x0010)  
};

/// Struct /Script/TapCommon.TapCommonRegionCode
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FTapCommonRegionCode
{ 
	bool                                               isMainland;                                                 // 0x0000   (0x0001)  
};

/// Struct /Script/TapCommon.TapControllerConfig
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FTapControllerConfig
{ 
	float                                              DeadZone;                                                   // 0x0000   (0x0004)  
	float                                              CursorMaxSpeed;                                             // 0x0004   (0x0004)  
	float                                              ScrollMaxSpeed;                                             // 0x0008   (0x0004)  
};

/// Struct /Script/TapCommon.TapResponseWrapper
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FTapResponseWrapper
{ 
	bool                                               Success;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FJsonObjectWrapper                                 Data;                                                       // 0x0008   (0x0020)  
	int64_t                                            Now;                                                        // 0x0028   (0x0008)  
};

/// Struct /Script/TapCommon.TapResult
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FTapResult
{ 
	FString                                            callbackId;                                                 // 0x0000   (0x0010)  
	FString                                            Content;                                                    // 0x0010   (0x0010)  
	FString                                            Message;                                                    // 0x0020   (0x0010)  
	int32_t                                            Code;                                                       // 0x0030   (0x0004)  
	bool                                               onceTime;                                                   // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/TapCommon.TUCommonStorage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FTUCommonStorage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TapCommon.TUError
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FTUError
{ 
	int32_t                                            Code;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            error_description;                                          // 0x0008   (0x0010)  
	FString                                            msg;                                                        // 0x0018   (0x0010)  
};

/// Struct /Script/TapCommon.TUConfig
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 pad: 0x0000
struct FTUConfig
{ 
	FString                                            ClientId;                                                   // 0x0000   (0x0010)  
	FString                                            ClientToken;                                                // 0x0010   (0x0010)  
	ERegionType                                        RegionType;                                                 // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	FString                                            ServerUrl;                                                  // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0038   (0x0050)  MISSED
};

/// Struct /Script/TapCommon.TapAntiAddictionConfig
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 pad: 0x0000
struct FTapAntiAddictionConfig
{ 
	bool                                               bShowSwitchAccount;                                         // 0x0000   (0x0001)  
	ETapAntiAddictionConfigRegion                      Region;                                                     // 0x0001   (0x0001)  
};

/// Struct /Script/TapCommon.BillboardConfig
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FBillboardConfig
{ 
	SDK_UNDEFINED(80,1604) /* TMap<FString, FString> */ __um(Dimensions);                                          // 0x0000   (0x0050)  
	FString                                            BillboardUrl;                                               // 0x0050   (0x0010)  
};

