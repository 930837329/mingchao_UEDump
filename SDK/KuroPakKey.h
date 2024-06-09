
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KuroPakKey.KuroPakKeyLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroPakKeyLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void UnbindCallback();                                                                                                   // [0x16e98e0] Final|Native|Static|Public|BlueprintCallable 
	// void SetRSAPublicKey(FString PublicKey);                                                                                 // [0x16e9850] Final|Native|Static|Public|BlueprintCallable 
	// void SetCompleteCallback(FDelegateProperty callback);                                                                    // [0x16e97b0] Final|Native|Static|Public|BlueprintCallable 
	// bool NeedExtPakKeys();                                                                                                   // [0x16e9780] Final|Native|Static|Public|BlueprintCallable 
	// void LoadPakKeysFromFile(FString FilePath);                                                                              // [0x16e96f0] Final|Native|Static|Public|BlueprintCallable 
	// bool HasPendingEncryptedPaks();                                                                                          // [0x16e96c0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetUpdateInterval();                                                                                             // [0x16e9690] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroPakKey.KuroPakKeySetting
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UKuroPakKeySetting : public UObject
{ 
public:
	bool                                               bNeedExternalKeys;                                          // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            UpdateCheckInterval;                                        // 0x0034   (0x0004)  
};

