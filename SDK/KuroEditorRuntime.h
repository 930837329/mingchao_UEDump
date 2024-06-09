
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KuroEditorRuntime.CommandService
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 16 pad: 0x0000
class UCommandService : public UObject
{ 
public:
	SDK_UNDEFINED(16,1460) /* FMulticastInlineDelegate */ __um(OnReceivedCommand);                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0040   (0x0030)  MISSED
	// void Stop();                                                                                                             // [0xf21480] Final|Native|Public|BlueprintCallable 
	// void Start(int32_t Port);                                                                                                // [0xf213f0] Final|Native|Public|BlueprintCallable 
	// void OnReceiveCommandEvent__DelegateSignature(FString ReceiveData);                                                      // [0x25a7960] MulticastDelegate|Public|Delegate 
	// void EnableRecvLog(bool isEnable);                                                                                       // [0xf20ea0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroEditorRuntime.EditorRuntimeOperations
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UEditorRuntimeOperations : public UBlueprintFunctionLibrary
{ 
public:
	// bool SendMessage(FString msg, FString Ip, int32_t Port);                                                                 // [0xf21230] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void SendHttpRequest(FString method, FString URL, TMap<FString, FString>& HeaderParam, FString Content, FDelegateProperty Handler); // [0xf20fc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool IsPortInUse(int32_t Port);                                                                                          // [0xf20f30] Final|Native|Static|Public|BlueprintCallable 
};

