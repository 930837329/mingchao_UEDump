
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KuroGameScreenshot.GameScreenshotTask
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000078) align 8 pad: 0x0000
class UGameScreenshotTask : public UObject
{ 
public:
	SDK_UNDEFINED(16,1461) /* FMulticastInlineDelegate */ __um(OnTakeScreenshotCapturedDelegate);                  // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1462) /* FMulticastInlineDelegate */ __um(OnIOSPhotoLibraryAuthorizationCompletedDelegate);   // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED
	// bool TakeScreenshot();                                                                                                   // [0xf22f90] Final|Native|Public|BlueprintCallable 
	// void Reset();                                                                                                            // [0xf22cb0] Final|Native|Public|BlueprintCallable 
	// void RequestIOSPhotoLibraryAuthorization();                                                                              // [0x95a130] Final|Native|Public|BlueprintCallable 
	// void OnScreenshotCaptured(int32_t Width, int32_t Height, TArray<FColor>& Colors);                                        // [0xf22960] Final|Native|Public|HasOutParms 
	// void OnIOSPhotoLibraryAuthorizationCompleted(bool IsGranted);                                                            // [0xf228d0] Final|Native|Public  
};

/// Class /Script/KuroGameScreenshot.KuroGameScreenshotBPLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroGameScreenshotBPLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void SaveColorArrayToIosAlbum(int32_t Width, int32_t Height, TArray<FColor> Colors);                                     // [0xf22e30] Final|Native|Static|Public|BlueprintCallable 
	// void SaveColorArrayToAndroidAlbum(int32_t Width, int32_t Height, TArray<char> BitMap);                                   // [0xf22cd0] Final|Native|Static|Public|BlueprintCallable 
	// class UGameScreenshotTask* PrepareTakeScreenshot(class UObject* Outer, FString InFilename, FVector2D MinCaptureRegion, FVector2D MaxCaptureRegion, float ScreenshotResolutionX, float ScreenshotResolutionY, bool SaveFile); // [0xf22a90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// bool IsPhotoLibraryAuthorized();                                                                                         // [0xf16ea0] Final|Native|Static|Public|BlueprintCallable 
	// void ConvertColorsToBitmap(int32_t Width, int32_t Height, TArray<FColor>& Colors, TArray<char>& BitMap);                 // [0xf22740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void CompressConvertColorsToBitmap(int32_t Width, int32_t Height, TArray<FColor>& Colors, TArray<char>& BitMap);         // [0xf225b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

