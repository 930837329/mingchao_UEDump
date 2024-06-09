
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

/// Enum /Script/LGUI_BMFGenImporter.ELGUIBitmapFontGeneratorTextureType
/// Size: 0x01 (1 bytes)
enum class ELGUIBitmapFontGeneratorTextureType : uint8_t
{
	ELGUIBitmapFontGeneratorTextureType__WhiteTextOnBlack                            = 0,
	ELGUIBitmapFontGeneratorTextureType__KeepAll                                     = 1
};

/// Class /Script/LGUI_BMFGenImporter.LGUIBitmapFontGeneratorData
/// Size: 0x00B0 (176 bytes) (0x000080 - 0x000130) align 8 pad: 0x0000
class ULGUIBitmapFontGeneratorData : public ULGUIFontData_BaseObject
{ 
public:
	FString                                            fntFileSourcePath;                                          // 0x0080   (0x0010)  
	ELGUIBitmapFontGeneratorTextureType                convertTextureType;                                         // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	FString                                            Name;                                                       // 0x0098   (0x0010)  
	uint16_t                                           Size;                                                       // 0x00A8   (0x0002)  
	uint16_t                                           lineHeight;                                                 // 0x00AA   (0x0002)  
	uint16_t                                           Base;                                                       // 0x00AC   (0x0002)  
	uint16_t                                           scaleW;                                                     // 0x00AE   (0x0002)  
	uint16_t                                           scaleH;                                                     // 0x00B0   (0x0002)  
	uint16_t                                           charCount;                                                  // 0x00B2   (0x0002)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	class UTexture2D*                                  Texture;                                                    // 0x00B8   (0x0008)  
	SDK_UNDEFINED(80,1511) /* TMap<uint16_t, FLGUICharData> */ __um(charDataMap);                                  // 0x00C0   (0x0050)  
	float                                              fixedVerticalOffset;                                        // 0x0110   (0x0004)  
	float                                              italicAngle;                                                // 0x0114   (0x0004)  
	float                                              boldRatio;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1512) /* TArray<TWeakObjectPtr<UUIText*>> */ __um(renderTextArray);                           // 0x0120   (0x0010)  
};

