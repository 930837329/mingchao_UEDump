
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Slate

/// Enum /Script/KuroInput.EKuroForceFeedbackType
/// Size: 0x01 (1 bytes)
enum class EKuroForceFeedbackType : uint8_t
{
	EKuroForceFeedbackType__Always                                                   = 0,
	EKuroForceFeedbackType__Limit                                                    = 1
};

/// Enum /Script/KuroInput.EGlobalKuroForceFeedbackType
/// Size: 0x01 (1 bytes)
enum class EGlobalKuroForceFeedbackType : uint8_t
{
	EGlobalKuroForceFeedbackType__Always                                             = 0,
	EGlobalKuroForceFeedbackType__Sometimes                                          = 1,
	EGlobalKuroForceFeedbackType__Never                                              = 2
};

/// Class /Script/KuroInput.BasePlayerController
/// Size: 0x0058 (88 bytes) (0x000618 - 0x000670) align 8 pad: 0x0000
class ABasePlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0618   (0x0058)  MISSED
	// void StopKuroForceFeedback(class UKuroForceFeedbackEffect* ForceFeedbackEffect, FName Tag);                              // [0xf40880] Final|Native|Public|BlueprintCallable 
	// void SetKuroForceFeedbackConfig(EGlobalKuroForceFeedbackType FeedbackConfig, int32_t GlobalFeedbackCoef);                // [0xf407c0] Final|Native|Static|Public|BlueprintCallable 
	// void ReceiveSetupInputComponent();                                                                                       // [0x25a7960] Event|Public|BlueprintEvent 
	// void ReceivePreProcessInput(float DeltaTime, bool bGamePaused);                                                          // [0x25a7960] Event|Public|BlueprintEvent 
	// void ReceivePostProcessInput(float DeltaTime, bool bGamePaused);                                                         // [0x25a7960] Event|Public|BlueprintEvent 
	// void ReceiveOnDeviceChanged();                                                                                           // [0x25a7960] Event|Public|BlueprintEvent 
	// void PlayKuroForceFeedback(class UKuroForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused); // [0xf40610] Final|Native|Public|BlueprintCallable 
	// void OnReceivedPlayer();                                                                                                 // [0x25a7960] Event|Public|BlueprintEvent 
	// void FlushPressedKeys();                                                                                                 // [0xf405f0] Final|Native|Public|BlueprintCallable 
	// void ClearTouchBindings();                                                                                               // [0xf405d0] Final|Native|Public|BlueprintCallable 
	// void ClearKeyBindings();                                                                                                 // [0xf405b0] Final|Native|Public|BlueprintCallable 
	// void ClearAxisBindings();                                                                                                // [0xf40590] Final|Native|Public|BlueprintCallable 
	// void ClearActionBindings();                                                                                              // [0xf40570] Final|Native|Public|BlueprintCallable 
	// void AddTouchBinding(TEnumAsByte<EInputEvent> KeyEvent, class UObject* Object, FName& FuncName);                         // [0xf40450] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void AddKeyBinding(FInputChord& Chord, TEnumAsByte<EInputEvent> KeyEvent, class UObject* Object, FName& FuncName);       // [0xf40270] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void AddAxisBinding(FName& AxisName, class UObject* Object, FName& FuncName);                                            // [0xf40130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void AddActionBinding(FName& ActionName, TEnumAsByte<EInputEvent> KeyEvent, class UObject* Object, FName& FuncName);     // [0xf3ffb0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KuroInput.KuroForceFeedbackEffect
/// Size: 0x0020 (32 bytes) (0x000048 - 0x000068) align 8 pad: 0x0000
class UKuroForceFeedbackEffect : public UForceFeedbackEffect
{ 
public:
	float                                              ColdDowm;                                                   // 0x0048   (0x0004)  
	EKuroForceFeedbackType                             Type;                                                       // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	int32_t                                            Priority;                                                   // 0x0050   (0x0004)  
	FGuid                                              KuroGuid;                                                   // 0x0054   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/KuroInput.KuroInputSetting
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UKuroInputSetting : public UObject
{ 
public:
	EGlobalKuroForceFeedbackType                       FeedbackConfig;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              GlobalFeedbackSize;                                         // 0x0034   (0x0004)  
};

