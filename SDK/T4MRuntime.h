
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/T4MRuntime.T4MLandscapeActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AT4MLandscapeActor : public AActor
{ 
public:
	class UT4MLandscapeComponent*                      T4MLandscapeComponent;                                      // 0x02A8   (0x0008)  
};

/// Class /Script/T4MRuntime.T4MLandscapeComponent
/// Size: 0x0098 (152 bytes) (0x000588 - 0x000620) align 16 pad: 0x0000
class UT4MLandscapeComponent : public UStaticMeshComponent
{ 
public:
	FGuid                                              MapBuildDataId;                                             // 0x0588   (0x0010)  
	int32_t                                            SectionBaseX;                                               // 0x0598   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x059C   (0x0004)  
	int32_t                                            ComponentSizeQuads;                                         // 0x05A0   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x05A4   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x05A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x05AC   (0x0004)  MISSED
	FVector4                                           WeightmapScaleBias;                                         // 0x05B0   (0x0010)  
	float                                              WeightmapSubsectionOffset;                                  // 0x05C0   (0x0004)  
	float                                              HeightmapSubsectionOffsetU;                                 // 0x05C4   (0x0004)  
	float                                              HeightmapSubsectionOffsetV;                                 // 0x05C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x05CC   (0x0004)  MISSED
	FVector4                                           HeightmapScaleBias;                                         // 0x05D0   (0x0010)  
	char                                               BlendableLayerMask;                                         // 0x05E0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x05E1   (0x0003)  MISSED
	float                                              StaticLightingLOD;                                          // 0x05E4   (0x0004)  
	float                                              StaticLightingResolution;                                   // 0x05E8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x05EC   (0x0004)  MISSED
	class UTexture2D*                                  NormalmapTexture;                                           // 0x05F0   (0x0008)  
	TArray<class UTexture2D*>                          WeightmapTextures;                                          // 0x05F8   (0x0010)  
	class UTexture2D*                                  IndexmapTexture;                                            // 0x0608   (0x0008)  
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                          // 0x0610   (0x0010)  
};

