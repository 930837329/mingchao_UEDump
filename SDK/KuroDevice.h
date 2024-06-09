
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KuroDevice.DeviceHandle
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UDeviceHandle : public UObject
{ 
public:
	SDK_UNDEFINED(16,1459) /* FMulticastInlineDelegate */ __um(OnConnectionChanged);                               // 0x0030   (0x0010)  
	TArray<FString>                                    PidAndVidArray;                                             // 0x0040   (0x0010)  
	TArray<FString>                                    DevicePathArray;                                            // 0x0050   (0x0010)  
	// void Initialize();                                                                                                       // [0x10ed740] Final|Native|Public|BlueprintCallable 
	// TArray<FString> GetPidAndVidArray();                                                                                     // [0x10ed5c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// void Clear();                                                                                                            // [0x10ed4d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroDevice.KuroDeviceBPLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroDeviceBPLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// class UDeviceHandle* NewDeviceHandle(class UObject* Outer);                                                              // [0x10ed760] Final|Native|Static|Public|BlueprintCallable 
	// bool FindAllDeviceVidAndPid(TArray<FString>& DevicePathList);                                                            // [0x10ed4f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

