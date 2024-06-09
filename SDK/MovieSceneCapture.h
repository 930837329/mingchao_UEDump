
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ImageWriteQueue

/// Enum /Script/MovieSceneCapture.EHDRCaptureGamut
/// Size: 0x01 (1 bytes)
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                                                                      = 0,
	HCGM_P3DCI                                                                       = 1,
	HCGM_Rec2020                                                                     = 2,
	HCGM_ACES                                                                        = 3,
	HCGM_ACEScg                                                                      = 4,
	HCGM_Linear                                                                      = 5
};

/// Enum /Script/MovieSceneCapture.EMovieSceneCaptureProtocolState
/// Size: 0x01 (1 bytes)
enum class EMovieSceneCaptureProtocolState : uint8_t
{
	EMovieSceneCaptureProtocolState__Idle                                            = 0,
	EMovieSceneCaptureProtocolState__Initialized                                     = 1,
	EMovieSceneCaptureProtocolState__Capturing                                       = 2,
	EMovieSceneCaptureProtocolState__Finalizing                                      = 3
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UMovieSceneCaptureProtocolBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0030   (0x0028)  MISSED
	EMovieSceneCaptureProtocolState                    State;                                                      // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0059   (0x0007)  MISSED
	// bool IsCapturing();                                                                                                      // [0x3d3ebd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// EMovieSceneCaptureProtocolState GetState();                                                                              // [0x365f910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
/// Size: 0x0000 (0 bytes) (0x000060 - 0x000060) align 8 pad: 0x0000
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.NullAudioCaptureProtocol
/// Size: 0x0000 (0 bytes) (0x000060 - 0x000060) align 8 pad: 0x0000
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol
/// Size: 0x0038 (56 bytes) (0x000060 - 0x000098) align 8 pad: 0x0000
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
public:
	FString                                            Filename;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneImageCaptureProtocolBase
/// Size: 0x0000 (0 bytes) (0x000060 - 0x000060) align 8 pad: 0x0000
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
public:
};

/// Struct /Script/MovieSceneCapture.CompositionGraphCapturePasses
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FCompositionGraphCapturePasses
{ 
	TArray<FString>                                    Value;                                                      // 0x0000   (0x0010)  
};

/// Class /Script/MovieSceneCapture.CompositionGraphCaptureProtocol
/// Size: 0x0070 (112 bytes) (0x000060 - 0x0000D0) align 8 pad: 0x0000
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	FCompositionGraphCapturePasses                     IncludeRenderPasses;                                        // 0x0060   (0x0010)  
	bool                                               bCaptureFramesInHDR;                                        // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	int32_t                                            HDRCompressionQuality;                                      // 0x0074   (0x0004)  
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	FSoftObjectPath                                    PostProcessingMaterial;                                     // 0x0080   (0x0020)  
	bool                                               bDisableScreenPercentage;                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	class UMaterialInterface*                          PostProcessingMaterialPtr;                                  // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x00B0   (0x0020)  MISSED
};

/// Class /Script/MovieSceneCapture.FrameGrabberProtocol
/// Size: 0x0010 (16 bytes) (0x000060 - 0x000070) align 8 pad: 0x0000
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol
/// Size: 0x0070 (112 bytes) (0x000070 - 0x0000E0) align 8 pad: 0x0000
class UImageSequenceProtocol : public UFrameGrabberProtocol
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0070   (0x0070)  MISSED
};

/// Class /Script/MovieSceneCapture.CompressedImageSequenceProtocol
/// Size: 0x0008 (8 bytes) (0x0000E0 - 0x0000E8) align 8 pad: 0x0000
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{ 
public:
	int32_t                                            CompressionQuality;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_BMP
/// Size: 0x0000 (0 bytes) (0x0000E0 - 0x0000E0) align 8 pad: 0x0000
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_PNG
/// Size: 0x0000 (0 bytes) (0x0000E8 - 0x0000E8) align 8 pad: 0x0000
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_JPG
/// Size: 0x0000 (0 bytes) (0x0000E8 - 0x0000E8) align 8 pad: 0x0000
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR
/// Size: 0x0010 (16 bytes) (0x0000E0 - 0x0000F0) align 8 pad: 0x0000
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{ 
public:
	bool                                               bCompressed;                                                // 0x00E0   (0x0001)  
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                               // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x00E2   (0x000E)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMovieSceneCaptureInterface : public UInterface
{ 
public:
};

/// Struct /Script/MovieSceneCapture.CaptureResolution
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FCaptureResolution
{ 
	int32_t                                            ResX;                                                       // 0x0000   (0x0004)  
	int32_t                                            ResY;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/MovieSceneCapture.MovieSceneCaptureSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FMovieSceneCaptureSettings
{ 
	FDirectoryPath                                     OutputDirectory;                                            // 0x0000   (0x0010)  
	class UClass*                                      GameModeOverride;                                           // 0x0010   (0x0008)  
	FString                                            OutputFormat;                                               // 0x0018   (0x0010)  
	bool                                               bOverwriteExisting;                                         // 0x0028   (0x0001)  
	bool                                               bUseRelativeFrameNumbers;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            HandleFrames;                                               // 0x002C   (0x0004)  
	FString                                            MovieExtension;                                             // 0x0030   (0x0010)  
	char                                               ZeroPadFrameNumbers;                                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	FFrameRate                                         FrameRate;                                                  // 0x0044   (0x0008)  
	bool                                               bUseCustomFrameRate;                                        // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFrameRate                                         CustomFrameRate;                                            // 0x0050   (0x0008)  
	FCaptureResolution                                 Resolution;                                                 // 0x0058   (0x0008)  
	bool                                               bEnableTextureStreaming;                                    // 0x0060   (0x0001)  
	bool                                               bCinematicEngineScalability;                                // 0x0061   (0x0001)  
	bool                                               bCinematicMode;                                             // 0x0062   (0x0001)  
	bool                                               bAllowMovement;                                             // 0x0063   (0x0001)  
	bool                                               bAllowTurning;                                              // 0x0064   (0x0001)  
	bool                                               bShowPlayer;                                                // 0x0065   (0x0001)  
	bool                                               bShowHUD;                                                   // 0x0066   (0x0001)  
	bool                                               bUsePathTracer;                                             // 0x0067   (0x0001)  
	int32_t                                            PathTracerSamplePerPixel;                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCapture
/// Size: 0x0208 (520 bytes) (0x000030 - 0x000238) align 8 pad: 0x0000
class UMovieSceneCapture : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0030   (0x0010)  MISSED
	FSoftClassPath                                     ImageCaptureProtocolType;                                   // 0x0040   (0x0020)  
	FSoftClassPath                                     AudioCaptureProtocolType;                                   // 0x0060   (0x0020)  
	class UMovieSceneImageCaptureProtocolBase*         ImageCaptureProtocol;                                       // 0x0080   (0x0008)  
	class UMovieSceneAudioCaptureProtocolBase*         AudioCaptureProtocol;                                       // 0x0088   (0x0008)  
	FMovieSceneCaptureSettings                         Settings;                                                   // 0x0090   (0x0070)  
	bool                                               bUseSeparateProcess;                                        // 0x0100   (0x0001)  
	bool                                               bCloseEditorWhenCaptureStarts;                              // 0x0101   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0102   (0x0006)  MISSED
	FString                                            AdditionalCommandLineArguments;                             // 0x0108   (0x0010)  
	FString                                            InheritedCommandLineArguments;                              // 0x0118   (0x0010)  
	unsigned char                                      UnknownData02_7[0x110];                                     // 0x0128   (0x0110)  MISSED
	// void SetImageCaptureProtocolType(class UClass* ProtocolType);                                                            // [0x3d3ee50] Final|Native|Public|BlueprintCallable 
	// void SetAudioCaptureProtocolType(class UClass* ProtocolType);                                                            // [0x3d3edc0] Final|Native|Public|BlueprintCallable 
	// class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();                                                         // [0x3d3eb80] Final|Native|Public|BlueprintCallable 
	// class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();                                                         // [0x3d3eae0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.LevelCapture
/// Size: 0x0020 (32 bytes) (0x000238 - 0x000258) align 8 pad: 0x0000
class ULevelCapture : public UMovieSceneCapture
{ 
public:
	bool                                               bAutoStartCapture;                                          // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0239   (0x000B)  MISSED
	FGuid                                              PrerequisiteActorId;                                        // 0x0244   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0254   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMovieSceneCaptureEnvironment : public UObject
{ 
public:
	// bool IsCaptureInProgress();                                                                                              // [0x3d3eba0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetCaptureFrameNumber();                                                                                         // [0x3d3eb30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// float GetCaptureElapsedTime();                                                                                           // [0x3d3eb00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();                                                   // [0x3d3e780] Final|Native|Static|Public|BlueprintCallable 
	// class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();                                                   // [0x3d3e750] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.UserDefinedCaptureProtocol
/// Size: 0x0080 (128 bytes) (0x000060 - 0x0000E0) align 8 pad: 0x0000
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	class UWorld*                                      World;                                                      // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_7[0x78];                                      // 0x0068   (0x0078)  MISSED
	// void StopCapturingFinalPixels();                                                                                         // [0x3d3f020] Final|Native|Public|BlueprintCallable 
	// void StartCapturingFinalPixels(FCapturedPixelsID& StreamID);                                                             // [0x3d3eee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void ResolveBuffer(class UTexture* Buffer, FCapturedPixelsID& BufferID);                                                 // [0x3d3ec40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void OnWarmUp();                                                                                                         // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnTick();                                                                                                           // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnStartCapture();                                                                                                   // [0x25a7960] Event|Protected|BlueprintEvent 
	// bool OnSetup();                                                                                                          // [0x3d3ec10] Native|Event|Protected|BlueprintEvent 
	// void OnPreTick();                                                                                                        // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnPixelsReceived(FCapturedPixels& Pixels, FCapturedPixelsID& ID, FFrameMetrics FrameMetrics);                       // [0x25a7960] Event|Protected|HasOutParms|BlueprintEvent 
	// void OnPauseCapture();                                                                                                   // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnFinalize();                                                                                                       // [0x25a7960] Event|Protected|BlueprintEvent 
	// void OnCaptureFrame();                                                                                                   // [0x25a7960] Event|Protected|BlueprintEvent 
	// bool OnCanFinalize();                                                                                                    // [0x96d720] Native|Event|Protected|BlueprintEvent|Const 
	// void OnBeginFinalize();                                                                                                  // [0x25a7960] Event|Protected|BlueprintEvent 
	// FFrameMetrics GetCurrentFrameMetrics();                                                                                  // [0x3d3eb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GenerateFilename(FFrameMetrics& InFrameMetrics);                                                                 // [0x3d3e7b0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol
/// Size: 0x0008 (8 bytes) (0x0000E0 - 0x0000E8) align 8 pad: 0x0000
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{ 
public:
	EDesiredImageFormat                                Format;                                                     // 0x00E0   (0x0001)  
	bool                                               bEnableCompression;                                         // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00E2   (0x0002)  MISSED
	int32_t                                            CompressionQuality;                                         // 0x00E4   (0x0004)  
	// void WriteImageToDisk(FCapturedPixels& PixelData, FCapturedPixelsID& StreamID, FFrameMetrics& FrameMetrics, bool bCopyImageData); // [0x3d3f040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FString GenerateFilenameForCurrentFrame();                                                                               // [0x3d3ea60] Final|Native|Public|BlueprintCallable 
	// FString GenerateFilenameForBuffer(class UTexture* Buffer, FCapturedPixelsID& StreamID);                                  // [0x3d3e8a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.VideoCaptureProtocol
/// Size: 0x0018 (24 bytes) (0x000070 - 0x000088) align 8 pad: 0x0000
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{ 
public:
	bool                                               bUseCompression;                                            // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              CompressionQuality;                                         // 0x0074   (0x0004)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Struct /Script/MovieSceneCapture.FrameMetrics
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FFrameMetrics
{ 
	float                                              TotalElapsedTime;                                           // 0x0000   (0x0004)  
	float                                              FrameDelta;                                                 // 0x0004   (0x0004)  
	int32_t                                            FrameNumber;                                                // 0x0008   (0x0004)  
	int32_t                                            NumDroppedFrames;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/MovieSceneCapture.CapturedPixels
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FCapturedPixels
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MovieSceneCapture.CapturedPixelsID
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FCapturedPixelsID
{ 
	SDK_UNDEFINED(80,1565) /* TMap<FName, FName> */    __um(Identifiers);                                          // 0x0000   (0x0050)  
};

