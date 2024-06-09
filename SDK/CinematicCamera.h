
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x01 (1 bytes)
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride                                                = 0,
	ECameraFocusMethod__Manual                                                       = 1,
	ECameraFocusMethod__Tracking                                                     = 2,
	ECameraFocusMethod__Disable                                                      = 3
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0030 (48 bytes) (0x0002A8 - 0x0002D8) align 8 pad: 0x0000
class ACameraRig_Crane : public AActor
{ 
public:
	float                                              CranePitch;                                                 // 0x02A8   (0x0004)  
	float                                              CraneYaw;                                                   // 0x02AC   (0x0004)  
	float                                              CraneArmLength;                                             // 0x02B0   (0x0004)  
	bool                                               bLockMountPitch;                                            // 0x02B4   (0x0001)  
	bool                                               bLockMountYaw;                                              // 0x02B5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x02B6   (0x0002)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x02B8   (0x0008)  
	class USceneComponent*                             CraneYawControl;                                            // 0x02C0   (0x0008)  
	class USceneComponent*                             CranePitchControl;                                          // 0x02C8   (0x0008)  
	class USceneComponent*                             CraneCameraMount;                                           // 0x02D0   (0x0008)  
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0020 (32 bytes) (0x0002A8 - 0x0002C8) align 8 pad: 0x0000
class ACameraRig_Rail : public AActor
{ 
public:
	float                                              CurrentPositionOnRail;                                      // 0x02A8   (0x0004)  
	bool                                               bLockOrientationToRail;                                     // 0x02AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02AD   (0x0003)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x02B0   (0x0008)  
	class USplineComponent*                            RailSplineComponent;                                        // 0x02B8   (0x0008)  
	class USceneComponent*                             RailCameraMount;                                            // 0x02C0   (0x0008)  
	// class USplineComponent* GetRailSplineComponent();                                                                        // [0x3bbe280] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FCameraLookatTrackingSettings
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bDrawDebugLookAtTrackingPosition : 1;                       // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LookAtTrackingInterpSpeed;                                  // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0008   (0x0010)  MISSED
	SDK_UNDEFINED(48,470) /* TWeakObjectPtr<AActor*> */ __um(ActorToTrack);                                        // 0x0018   (0x0030)  
	FVector                                            RelativeOffset;                                             // 0x0048   (0x000C)  
	bool                                               bAllowRoll : 1;                                             // 0x0054:0 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0070 (112 bytes) (0x0008E0 - 0x000950) align 16 pad: 0x0000
class ACineCameraActor : public ACameraActor
{ 
public:
	FCameraLookatTrackingSettings                      LookatTrackingSettings;                                     // 0x08E0   (0x0058)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0938   (0x0018)  MISSED
	// class UCineCameraComponent* GetCineCameraComponent();                                                                    // [0x3bbdeb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FCameraFilmbackSettings
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
	float                                              SensorAspectRatio;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FCameraLensSettings
{ 
	float                                              MinFocalLength;                                             // 0x0000   (0x0004)  
	float                                              MaxFocalLength;                                             // 0x0004   (0x0004)  
	float                                              MinFStop;                                                   // 0x0008   (0x0004)  
	float                                              MaxFStop;                                                   // 0x000C   (0x0004)  
	float                                              MinimumFocusDistance;                                       // 0x0010   (0x0004)  
	int32_t                                            DiaphragmBladeCount;                                        // 0x0014   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FCameraTrackingFocusSettings
{ 
	SDK_UNDEFINED(48,471) /* TWeakObjectPtr<AActor*> */ __um(ActorToTrack);                                        // 0x0000   (0x0030)  
	FVector                                            RelativeOffset;                                             // 0x0030   (0x000C)  
	bool                                               bDrawDebugTrackingFocusPoint : 1;                           // 0x003C:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FCameraFocusSettings
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
	FCameraTrackingFocusSettings                       TrackingFocusSettings;                                      // 0x0008   (0x0040)  
	bool                                               bDrawDebugFocusPlane : 1;                                   // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	FColor                                             DebugFocusPlaneColor;                                       // 0x004C   (0x0004)  
	bool                                               bSmoothFocusChanges : 1;                                    // 0x0050:0 (0x0001)  
	bool                                               bUseForegroundBlur : 1;                                     // 0x0050:1 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              FocusSmoothingInterpSpeed;                                  // 0x0054   (0x0004)  
	float                                              FocusOffset;                                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNamedFilmbackPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNamedLensPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraLensSettings                                LensSettings;                                               // 0x0010   (0x0018)  
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x0100 (256 bytes) (0x000890 - 0x000990) align 16 pad: 0x0000
class UCineCameraComponent : public UCameraComponent
{ 
public:
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0890   (0x000C)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x089C   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x08A8   (0x0018)  
	FCameraFocusSettings                               FocusSettings;                                              // 0x08C0   (0x0060)  
	float                                              CurrentFocalLength;                                         // 0x0920   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0924   (0x0004)  
	float                                              CurrentFocalRegion;                                         // 0x0928   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x092C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0930   (0x0008)  MISSED
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0938   (0x0010)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0948   (0x0010)  
	FString                                            DefaultFilmbackPresetName;                                  // 0x0958   (0x0010)  
	FString                                            DefaultFilmbackPreset;                                      // 0x0968   (0x0010)  
	FString                                            DefaultLensPresetName;                                      // 0x0978   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x0988   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x098C   (0x0004)  
	// void SetLensPresetByName(FString InPresetName);                                                                          // [0x3bbe3f0] Final|Native|Public|BlueprintCallable 
	// void SetFilmbackPresetByName(FString InPresetName);                                                                      // [0x3bbe350] Final|Native|Public|BlueprintCallable 
	// void SetCurrentFocalLength(float InFocalLength);                                                                         // [0x3bbe2d0] Final|Native|Public|BlueprintCallable 
	// float GetVerticalFieldOfView();                                                                                          // [0x3bbe2a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                           // [0x3bbe1a0] Final|Native|Static|Public|BlueprintCallable 
	// FString GetLensPresetName();                                                                                             // [0x3bbe120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetHorizontalFieldOfView();                                                                                        // [0x3bbe0f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();                                                                   // [0x3bbe010] Final|Native|Static|Public|BlueprintCallable 
	// FString GetFilmbackPresetName();                                                                                         // [0x3bbdf90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetDefaultFilmbackPresetName();                                                                                  // [0x3bbded0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

