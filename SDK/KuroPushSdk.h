
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KuroPushSdk.KuroPushObject
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UKuroPushObject : public UObject
{ 
public:
	SDK_UNDEFINED(16,1476) /* FMulticastInlineDelegate */ __um(PushSdkMessageBluePrintDelegate);                   // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1477) /* FMulticastInlineDelegate */ __um(AllowedNotificationsDelegate);                      // 0x0040   (0x0010)  
};

/// Class /Script/KuroPushSdk.KuroPushSdkStaticLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroPushSdkStaticLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void VoipRegistration();                                                                                                 // [0x212ebb0] Final|Native|Static|Public|BlueprintCallable 
	// void UnBindAlias(FString alias, FString sn, bool isSelf);                                                                // [0x212ea00] Final|Native|Static|Public|BlueprintCallable 
	// void TurnOnPush();                                                                                                       // [0x212e9e0] Final|Native|Static|Public|BlueprintCallable 
	// void TurnOffPush();                                                                                                      // [0x212e9c0] Final|Native|Static|Public|BlueprintCallable 
	// void StartPushSdk(FString AppID, FString appKey, FString appSecret);                                                     // [0x212e7d0] Final|Native|Static|Public|BlueprintCallable 
	// bool SetTag(FString Tags, FString sn);                                                                                   // [0x212e660] Final|Native|Static|Public|BlueprintCallable 
	// void SetRunInBackGround(bool State);                                                                                     // [0x212e5e0] Final|Native|Static|Public|BlueprintCallable 
	// void SetPushMode(bool turnOn);                                                                                           // [0x212e560] Final|Native|Static|Public|BlueprintCallable 
	// void SetNotificationIcon(FString& smallIcon, FString& largeIcon);                                                        // [0x212e450] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetLocationEnable(bool isEnable, bool isVerify);                                                                    // [0x212e380] Final|Native|Static|Public|BlueprintCallable 
	// void SetLocalSetNotificationIcon(FString& smallIcon, FString& largeIcon);                                                // [0x212e270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetLocalChannelIdAndName(FString& ChannelId, FString& ChannelName);                                                 // [0x212e160] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetLocalChannelId(FString& ChannelId);                                                                              // [0x212e0c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetDebug();                                                                                                         // [0x212e0a0] Final|Native|Static|Public|BlueprintCallable 
	// void SetChannel(FString ChannelId);                                                                                      // [0x212dfc0] Final|Native|Static|Public|BlueprintCallable 
	// void SetBudge(FString budge);                                                                                            // [0x212dee0] Final|Native|Static|Public|BlueprintCallable 
	// void SetApplicationGroupIdentify(FString Identify);                                                                      // [0x212de00] Final|Native|Static|Public|BlueprintCallable 
	// void SendFeedBackMessage(FString actionId, FString taskId, FString MsgId);                                               // [0x212dc10] Final|Native|Static|Public|BlueprintCallable 
	// void Resume();                                                                                                           // [0x212dbf0] Final|Native|Static|Public|BlueprintCallable 
	// void ResetBudge();                                                                                                       // [0x212dbd0] Final|Native|Static|Public|BlueprintCallable 
	// void RegistRemoteNotification();                                                                                         // [0x212dbb0] Final|Native|Static|Public|BlueprintCallable 
	// void PushLocalNotification(FString Title, FString Body, FString exData);                                                 // [0x212d9c0] Final|Native|Static|Public|BlueprintCallable 
	// void OpenNotification();                                                                                                 // [0x212d9a0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsPushTurnOn();                                                                                                     // [0x212d970] Final|Native|Static|Public|BlueprintCallable 
	// void Init();                                                                                                             // [0x212d950] Final|Native|Static|Public|BlueprintCallable 
	// FString GetVersion();                                                                                                    // [0x212d8d0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetStatus();                                                                                                     // [0x212d8a0] Final|Native|Static|Public|BlueprintCallable 
	// class UKuroPushObject* GetPushObject();                                                                                  // [0x212d870] Final|Native|Static|Public|BlueprintCallable 
	// FString GetClientId();                                                                                                   // [0x212d7f0] Final|Native|Static|Public|BlueprintCallable 
	// void Destroy();                                                                                                          // [0x212d7d0] Final|Native|Static|Public|BlueprintCallable 
	// void ClearNotificationForNotificationBar();                                                                              // [0x212d7b0] Final|Native|Static|Public|BlueprintCallable 
	// void CheckManifest();                                                                                                    // [0x212d790] Final|Native|Static|Public|BlueprintCallable 
	// void BindAlias(FString alias, FString sn);                                                                               // [0x212d620] Final|Native|Static|Public|BlueprintCallable 
	// void AreNotificationEnable();                                                                                            // [0x212d600] Final|Native|Static|Public|BlueprintCallable 
};

