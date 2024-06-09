
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/Overlay.Overlays
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UOverlays : public UObject
{ 
public:
};

/// Struct /Script/Overlay.OverlayItem
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FOverlayItem
{ 
	FTimespan                                          StartTime;                                                  // 0x0000   (0x0008)  
	FTimespan                                          EndTime;                                                    // 0x0008   (0x0008)  
	FString                                            Text;                                                       // 0x0010   (0x0010)  
	FVector2D                                          Position;                                                   // 0x0020   (0x0008)  
};

/// Class /Script/Overlay.BasicOverlays
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UBasicOverlays : public UOverlays
{ 
public:
	TArray<FOverlayItem>                               Overlays;                                                   // 0x0030   (0x0010)  
};

/// Class /Script/Overlay.LocalizedOverlays
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000088) align 8 pad: 0x0000
class ULocalizedOverlays : public UOverlays
{ 
public:
	class UBasicOverlays*                              DefaultOverlays;                                            // 0x0030   (0x0008)  
	SDK_UNDEFINED(80,1566) /* TMap<FString, UBasicOverlays*> */ __um(LocaleToOverlaysMap);                         // 0x0038   (0x0050)  
};

