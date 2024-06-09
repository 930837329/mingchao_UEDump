
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/Renderer.DebugViewOverdrawSettings
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UDebugViewOverdrawSettings : public UObject
{ 
public:
	FLinearColor                                       OverdrawColor;                                              // 0x0030   (0x0010)  
};

/// Class /Script/Renderer.DebugViewTexelDensitySettings
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000068) align 8 pad: 0x0000
class UDebugViewTexelDensitySettings : public UObject
{ 
public:
	TArray<FString>                                    AutoTextureNameRegex;                                       // 0x0030   (0x0010)  
	float                                              BaseDensity;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FLinearColor>                               DensityColors;                                              // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Struct /Script/Renderer.KuroLensflareGhostSetting
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 pad: 0x0000
struct FKuroLensflareGhostSetting
{ 
	float                                              Scale;                                                      // 0x0000   (0x0004)  
	FLinearColor                                       ColorTint;                                                  // 0x0004   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FVector4                                           ColorRefine;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/Renderer.KuroLensflareSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FKuroLensflareSettings
{ 
	float                                              PrefilterThresholdLevel;                                    // 0x0000   (0x0004)  
	float                                              PrefilterThresholdRange;                                    // 0x0004   (0x0004)  
	float                                              ChromaShift;                                                // 0x0008   (0x0004)  
	float                                              LuminanceClamp;                                             // 0x000C   (0x0004)  
	TArray<FKuroLensflareGhostSetting>                 GhostSettings;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/Renderer.LightPropagationVolumeSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 pad: 0x0000
struct FLightPropagationVolumeSettings
{ 
	bool                                               bOverride_LPVIntensity : 1;                                 // 0x0000:0 (0x0001)  
	bool                                               bOverride_LPVDirectionalOcclusionIntensity : 1;             // 0x0000:1 (0x0001)  
	bool                                               bOverride_LPVDirectionalOcclusionRadius : 1;                // 0x0000:2 (0x0001)  
	bool                                               bOverride_LPVDiffuseOcclusionExponent : 1;                  // 0x0000:3 (0x0001)  
	bool                                               bOverride_LPVSpecularOcclusionExponent : 1;                 // 0x0000:4 (0x0001)  
	bool                                               bOverride_LPVDiffuseOcclusionIntensity : 1;                 // 0x0000:5 (0x0001)  
	bool                                               bOverride_LPVSpecularOcclusionIntensity : 1;                // 0x0000:6 (0x0001)  
	bool                                               bOverride_LPVSize : 1;                                      // 0x0000:7 (0x0001)  
	bool                                               bOverride_LPVSecondaryOcclusionIntensity : 1;               // 0x0001:0 (0x0001)  
	bool                                               bOverride_LPVSecondaryBounceIntensity : 1;                  // 0x0001:1 (0x0001)  
	bool                                               bOverride_LPVGeometryVolumeBias : 1;                        // 0x0001:2 (0x0001)  
	bool                                               bOverride_LPVVplInjectionBias : 1;                          // 0x0001:3 (0x0001)  
	bool                                               bOverride_LPVEmissiveInjectionIntensity : 1;                // 0x0001:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LPVIntensity;                                               // 0x0004   (0x0004)  
	float                                              LPVVplInjectionBias;                                        // 0x0008   (0x0004)  
	float                                              LPVSize;                                                    // 0x000C   (0x0004)  
	float                                              LPVSecondaryOcclusionIntensity;                             // 0x0010   (0x0004)  
	float                                              LPVSecondaryBounceIntensity;                                // 0x0014   (0x0004)  
	float                                              LPVGeometryVolumeBias;                                      // 0x0018   (0x0004)  
	float                                              LPVEmissiveInjectionIntensity;                              // 0x001C   (0x0004)  
	float                                              LPVDirectionalOcclusionIntensity;                           // 0x0020   (0x0004)  
	float                                              LPVDirectionalOcclusionRadius;                              // 0x0024   (0x0004)  
	float                                              LPVDiffuseOcclusionExponent;                                // 0x0028   (0x0004)  
	float                                              LPVSpecularOcclusionExponent;                               // 0x002C   (0x0004)  
	float                                              LPVDiffuseOcclusionIntensity;                               // 0x0030   (0x0004)  
	float                                              LPVSpecularOcclusionIntensity;                              // 0x0034   (0x0004)  
	float                                              LPVFadeRange;                                               // 0x0038   (0x0004)  
	float                                              LPVDirectionalOcclusionFadeRange;                           // 0x003C   (0x0004)  
};

