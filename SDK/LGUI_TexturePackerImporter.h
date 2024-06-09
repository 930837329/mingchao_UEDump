
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LGUI

/// Class /Script/LGUI_TexturePackerImporter.LGUITexturePackerImporterData
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x000100) align 8 pad: 0x0000
class ULGUITexturePackerImporterData : public UObject
{ 
public:
	FString                                            Version;                                                    // 0x0030   (0x0010)  
	TArray<FName>                                      Sprites;                                                    // 0x0040   (0x0010)  
	TArray<class UTexture2D*>                          AtlasTextures;                                              // 0x0050   (0x0010)  
	SDK_UNDEFINED(80,1513) /* TMap<uint16_t, char> */  __um(SpriteAtlasTextureMap);                                // 0x0060   (0x0050)  
	SDK_UNDEFINED(80,1514) /* TMap<uint16_t, FLGUISpriteInfo> */ __um(SpriteInfoMap);                              // 0x00B0   (0x0050)  
};

/// Class /Script/LGUI_TexturePackerImporter.LGUITexturePackerSpriteData
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000090) align 8 pad: 0x0000
class ULGUITexturePackerSpriteData : public ULGUISpriteData_BaseObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x2];                                       // 0x0030   (0x0002)  MISSED
	uint16_t                                           borderLeft;                                                 // 0x0032   (0x0002)  
	uint16_t                                           borderRight;                                                // 0x0034   (0x0002)  
	uint16_t                                           borderTop;                                                  // 0x0036   (0x0002)  
	uint16_t                                           borderBottom;                                               // 0x0038   (0x0002)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x003A   (0x0002)  MISSED
	float                                              CustomUVOffsetX;                                            // 0x003C   (0x0004)  
	float                                              CustomUVOffsetY;                                            // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	class ULGUITexturePackerImporterData*              Importer;                                                   // 0x0048   (0x0008)  
	class UTexture2D*                                  Texture2D;                                                  // 0x0050   (0x0008)  
	unsigned char                                      UnknownData03_7[0x38];                                      // 0x0058   (0x0038)  MISSED
};

