
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x0028 (40 bytes) (0x000098 - 0x0000C0) align 8 pad: 0x0000
class UImgMediaSource : public UBaseMediaSource
{ 
public:
	FFrameRate                                         FrameRateOverride;                                          // 0x0098   (0x0008)  
	FString                                            ProxyOverride;                                              // 0x00A0   (0x0010)  
	FDirectoryPath                                     SequencePath;                                               // 0x00B0   (0x0010)  
	// void SetSequencePath(FString Path);                                                                                      // [0x205c0e0] Final|Native|Public|BlueprintCallable 
	// FString GetSequencePath();                                                                                               // [0x205c020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void GetProxies(TArray<FString>& OutProxies);                                                                            // [0x205bf50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

