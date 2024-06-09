
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/KuroImposter.ImpPreviewImgRes
/// Size: 0x02 (2 bytes)
enum class ImpPreviewImgRes : uint16_t
{
	ImpPreviewImgRes__E256                                                           = 256,
	ImpPreviewImgRes__E128                                                           = 160,
	ImpPreviewImgRes__E64                                                            = 64
};

/// Enum /Script/KuroImposter.ImpMemType
/// Size: 0x04 (4 bytes)
enum class ImpMemType : uint32_t
{
	ImpMemType__RGBAX2                                                               = 0,
	ImpMemType__RGB                                                                  = 1,
	ImpMemType__RGBA                                                                 = 2
};

/// Enum /Script/KuroImposter.ImposterType
/// Size: 0x04 (4 bytes)
enum class ImposterType : uint32_t
{
	ImposterType__TREE                                                               = 0,
	ImposterType__GENERAL                                                            = 1,
	ImposterType__ROCK                                                               = 2
};

/// Class /Script/KuroImposter.KuroImposterCommandlet
/// Size: 0x0000 (0 bytes) (0x000088 - 0x000088) align 8 pad: 0x0000
class UKuroImposterCommandlet : public UCommandlet
{ 
public:
};

/// Class /Script/KuroImposter.KuroImposterComponent
/// Size: 0x0038 (56 bytes) (0x000218 - 0x000250) align 16 pad: 0x0000
class UKuroImposterComponent : public USceneComponent
{ 
public:
	ImposterType                                       ImpType;                                                    // 0x0218   (0x0004)  
	ImpMemType                                         EnumImpMemType;                                             // 0x021C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0220   (0x0008)  MISSED
	bool                                               bPreview;                                                   // 0x0228   (0x0001)  
	bool                                               bRenderAtlasEveryFrame;                                     // 0x0229   (0x0001)  
	unsigned char                                      UnknownData01_7[0x26];                                      // 0x022A   (0x0026)  MISSED
};

/// Class /Script/KuroImposter.KuroImposterUpdater
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AKuroImposterUpdater : public AActor
{ 
public:
	bool                                               bEnabled;                                                   // 0x02A8   (0x0001)  
	bool                                               bSearchMainLight;                                           // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x02AA   (0x0006)  MISSED
	// void UpdateImposters(class UDirectionalLightComponent* DirLight, float DeltaTime);                                       // [0x1719d50] Final|Native|Public|BlueprintCallable 
	// void FillAllInstGlobalColor();                                                                                           // [0x95a130] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KuroImposter.KuroImposterUtility
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroImposterUtility : public UBlueprintFunctionLibrary
{ 
public:
	// void RemoveAll(class UWorld* EditorWorld, bool bClear);                                                                  // [0x1719c90] Final|Native|Static|Public|BlueprintCallable 
	// void GenerateAll(class UWorld* EditorWorld, bool bBake, bool bClear);                                                    // [0x1719b80] Final|Native|Static|Public|BlueprintCallable 
};

