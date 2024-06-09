
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KuroDynamicAtlas.DynamicAtlasBlueprintLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UDynamicAtlasBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void SetOverrideSetting(FString InAtlasTag, FDynamicTextureAtlasSetting& InSetting);                                     // [0x10a9c20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool HasOverrideSetting(FString InAtlasTag);                                                                             // [0x10a9b30] Final|Native|Static|Public|BlueprintCallable 
	// bool AddTextureAsync(FString InAtlasTag, TArray<FSoftObjectPath> InSoftObjectPath, FDelegateProperty CompleteCallback);  // [0x10a98d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/KuroDynamicAtlas.DynamicAtlasSlotManagedHandle
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FDynamicAtlasSlotManagedHandle
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	class UTexture2D*                                  atlasTexture;                                               // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FVector4                                           UVRect;                                                     // 0x0020   (0x0010)  
	int32_t                                            Width;                                                      // 0x0030   (0x0004)  
	int32_t                                            Height;                                                     // 0x0034   (0x0004)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/KuroDynamicAtlas.DynamicTextureAtlasSetting
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FDynamicTextureAtlasSetting
{ 
	FString                                            AtlasTag;                                                   // 0x0000   (0x0010)  
	int32_t                                            DefaultWidth;                                               // 0x0010   (0x0004)  
	int32_t                                            DefaultHeight;                                              // 0x0014   (0x0004)  
	int32_t                                            MaxAtlasTextures;                                           // 0x0018   (0x0004)  
	int32_t                                            MaxUpdateSlotCountInOneFrame;                               // 0x001C   (0x0004)  
	bool                                               InitWithTransparent;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

