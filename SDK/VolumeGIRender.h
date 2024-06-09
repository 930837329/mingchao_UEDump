
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/VolumeGIRender.EProbeDensityLevel
/// Size: 0x01 (1 bytes)
enum class EProbeDensityLevel : uint8_t
{
	EProbeDensityLevel__Level_Low                                                    = 0,
	EProbeDensityLevel__Level_Normal                                                 = 1,
	EProbeDensityLevel__Level_High                                                   = 2,
	EProbeDensityLevel__Level_Ultra                                                  = 3
};

/// Class /Script/VolumeGIRender.GIVolumeComponent
/// Size: 0x00E8 (232 bytes) (0x000218 - 0x000300) align 16 pad: 0x0000
class UGIVolumeComponent : public USceneComponent
{ 
public:
	FVector                                            VolumeSize;                                                 // 0x0218   (0x000C)  
	FIntVector                                         VolumeDim;                                                  // 0x0224   (0x000C)  
	uint32_t                                           NumProbes;                                                  // 0x0230   (0x0004)  
	int32_t                                            Priority;                                                   // 0x0234   (0x0004)  
	float                                              SkyIndirectScale;                                           // 0x0238   (0x0004)  
	float                                              SunIndirectScale;                                           // 0x023C   (0x0004)  
	float                                              StaticIrraidianceScale;                                     // 0x0240   (0x0004)  
	FLinearColor                                       TintColor;                                                  // 0x0244   (0x0010)  
	unsigned char                                      UnknownData00_7[0xAC];                                      // 0x0254   (0x00AC)  MISSED
};

/// Class /Script/VolumeGIRender.ProbeVolumeActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AProbeVolumeActor : public AActor
{ 
public:
	class UGIVolumeComponent*                          GIVolumeComp;                                               // 0x02A8   (0x0008)  
};

/// Class /Script/VolumeGIRender.VolumeGIRenderSystem
/// Size: 0x0008 (8 bytes) (0x000038 - 0x000040) align 8 pad: 0x0000
class UVolumeGIRenderSystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

