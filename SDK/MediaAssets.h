
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaUtils

/// Enum /Script/MediaAssets.EMediaWebcamCaptureDeviceFilter
/// Size: 0x01 (1 bytes)
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	EMediaWebcamCaptureDeviceFilter__None                                            = 0,
	EMediaWebcamCaptureDeviceFilter__DepthSensor                                     = 1,
	EMediaWebcamCaptureDeviceFilter__Front                                           = 2,
	EMediaWebcamCaptureDeviceFilter__Rear                                            = 4,
	EMediaWebcamCaptureDeviceFilter__Unknown                                         = 8
};

/// Enum /Script/MediaAssets.EMediaVideoCaptureDeviceFilter
/// Size: 0x01 (1 bytes)
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	EMediaVideoCaptureDeviceFilter__None                                             = 0,
	EMediaVideoCaptureDeviceFilter__Card                                             = 1,
	EMediaVideoCaptureDeviceFilter__Software                                         = 2,
	EMediaVideoCaptureDeviceFilter__Unknown                                          = 4,
	EMediaVideoCaptureDeviceFilter__Webcam                                           = 8
};

/// Enum /Script/MediaAssets.EMediaAudioCaptureDeviceFilter
/// Size: 0x01 (1 bytes)
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	EMediaAudioCaptureDeviceFilter__None                                             = 0,
	EMediaAudioCaptureDeviceFilter__Card                                             = 1,
	EMediaAudioCaptureDeviceFilter__Microphone                                       = 2,
	EMediaAudioCaptureDeviceFilter__Software                                         = 4,
	EMediaAudioCaptureDeviceFilter__Unknown                                          = 8
};

/// Enum /Script/MediaAssets.EMediaPlayerTrack
/// Size: 0x01 (1 bytes)
enum class EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio                                                         = 0,
	EMediaPlayerTrack__Caption                                                       = 1,
	EMediaPlayerTrack__Metadata                                                      = 2,
	EMediaPlayerTrack__Script                                                        = 3,
	EMediaPlayerTrack__Subtitle                                                      = 4,
	EMediaPlayerTrack__Text                                                          = 5,
	EMediaPlayerTrack__Video                                                         = 6
};

/// Enum /Script/MediaAssets.EMediaSoundComponentFFTSize
/// Size: 0x01 (1 bytes)
enum class EMediaSoundComponentFFTSize : uint8_t
{
	EMediaSoundComponentFFTSize__Min                                                 = 0,
	EMediaSoundComponentFFTSize__Small                                               = 1,
	EMediaSoundComponentFFTSize__Medium                                              = 2,
	EMediaSoundComponentFFTSize__Large                                               = 3
};

/// Enum /Script/MediaAssets.EMediaSoundChannels
/// Size: 0x04 (4 bytes)
enum class EMediaSoundChannels : uint32_t
{
	EMediaSoundChannels__Mono                                                        = 0,
	EMediaSoundChannels__Stereo                                                      = 1,
	EMediaSoundChannels__Surround                                                    = 2
};

/// Enum /Script/MediaAssets.MediaTextureOrientation
/// Size: 0x01 (1 bytes)
enum class MediaTextureOrientation : uint8_t
{
	MTORI_Original                                                                   = 0,
	MTORI_CW90                                                                       = 1,
	MTORI_CW180                                                                      = 2,
	MTORI_CW270                                                                      = 3
};

/// Enum /Script/MediaAssets.MediaTextureOutputFormat
/// Size: 0x01 (1 bytes)
enum class MediaTextureOutputFormat : uint8_t
{
	MTOF_Default                                                                     = 0,
	MTOF_SRGB_LINOUT                                                                 = 1
};

/// Class /Script/MediaAssets.MediaSource
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000088) align 8 pad: 0x0000
class UMediaSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED
	// bool Validate();                                                                                                         // [0x3d1aa40] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void SetMediaOptionString(FName& Key, FString Value);                                                                    // [0x3d19f70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetMediaOptionInt64(FName& Key, int64_t Value);                                                                     // [0x3d19e80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetMediaOptionFloat(FName& Key, float Value);                                                                       // [0x3d19d90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetMediaOptionBool(FName& Key, bool Value);                                                                         // [0x3d19ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FString GetUrl();                                                                                                        // [0xbe2290] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.BaseMediaSource
/// Size: 0x0010 (16 bytes) (0x000088 - 0x000098) align 8 pad: 0x0000
class UBaseMediaSource : public UMediaSource
{ 
public:
	FName                                              PlayerName;                                                 // 0x0088   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Class /Script/MediaAssets.FileMediaSource
/// Size: 0x0028 (40 bytes) (0x000098 - 0x0000C0) align 8 pad: 0x0000
class UFileMediaSource : public UBaseMediaSource
{ 
public:
	FString                                            FilePath;                                                   // 0x0098   (0x0010)  
	bool                                               PrecacheFile;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x00A9   (0x0017)  MISSED
	// void SetFilePath(FString Path);                                                                                          // [0x3d19b60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaBlueprintFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                             // [0x3d173f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                              // [0x3d172a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                              // [0x3d17150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaComponent
/// Size: 0x0010 (16 bytes) (0x0000C0 - 0x0000D0) align 8 pad: 0x0000
class UMediaComponent : public UActorComponent
{ 
public:
	class UMediaTexture*                               MediaTexture;                                               // 0x00C0   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x00C8   (0x0008)  
	// class UMediaTexture* GetMediaTexture();                                                                                  // [0x3d17b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x3d17a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaTimeStampInfo
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UMediaTimeStampInfo : public UObject
{ 
public:
	FTimespan                                          Time;                                                       // 0x0030   (0x0008)  
	int64_t                                            SequenceIndex;                                              // 0x0038   (0x0008)  
};

/// Class /Script/MediaAssets.MediaPlayer
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000140) align 8 pad: 0x0000
class UMediaPlayer : public UObject
{ 
public:
	SDK_UNDEFINED(16,557) /* FMulticastInlineDelegate */ __um(OnEndReached);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,558) /* FMulticastInlineDelegate */ __um(OnMediaClosed);                                      // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,559) /* FMulticastInlineDelegate */ __um(OnMediaOpened);                                      // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,560) /* FMulticastInlineDelegate */ __um(OnMediaOpenFailed);                                  // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,561) /* FMulticastInlineDelegate */ __um(OnPlaybackResumed);                                  // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,562) /* FMulticastInlineDelegate */ __um(OnPlaybackSuspended);                                // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,563) /* FMulticastInlineDelegate */ __um(OnSeekCompleted);                                    // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,564) /* FMulticastInlineDelegate */ __um(OnTracksChanged);                                    // 0x00A0   (0x0010)  
	FTimespan                                          CacheAhead;                                                 // 0x00B0   (0x0008)  
	FTimespan                                          CacheBehind;                                                // 0x00B8   (0x0008)  
	FTimespan                                          CacheBehindGame;                                            // 0x00C0   (0x0008)  
	bool                                               NativeAudioOut;                                             // 0x00C8   (0x0001)  
	bool                                               PlayOnOpen;                                                 // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00CA   (0x0002)  MISSED
	bool                                               Shuffle : 1;                                                // 0x00CC:0 (0x0001)  
	bool                                               Loop : 1;                                                   // 0x00CC:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	class UMediaPlaylist*                              Playlist;                                                   // 0x00D0   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	FTimespan                                          TimeDelay;                                                  // 0x00E0   (0x0008)  
	float                                              HorizontalFieldOfView;                                      // 0x00E8   (0x0004)  
	float                                              VerticalFieldOfView;                                        // 0x00EC   (0x0004)  
	FRotator                                           ViewRotation;                                               // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData03_6[0x2C];                                      // 0x00FC   (0x002C)  MISSED
	FGuid                                              PlayerGuid;                                                 // 0x0128   (0x0010)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0138   (0x0008)  MISSED
	// bool SupportsSeeking();                                                                                                  // [0x3d1aa10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool SupportsScrubbing();                                                                                                // [0x3d1a9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool SupportsRate(float Rate, bool Unthinned);                                                                           // [0x3d1a910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool SetViewRotation(FRotator& Rotation, bool Absolute);                                                                 // [0x3d1a830] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool SetViewField(float Horizontal, float Vertical, bool Absolute);                                                      // [0x3d1a710] Final|Native|Public|BlueprintCallable 
	// bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);                                   // [0x3d1a600] Final|Native|Public|BlueprintCallable 
	// bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);                               // [0x3d1a4f0] Final|Native|Public|BlueprintCallable 
	// void SetTimeDelay(FTimespan TimeDelay);                                                                                  // [0x3d1a470] Final|Native|Public|HasDefaults|BlueprintCallable 
	// bool SetRate(float Rate);                                                                                                // [0x3d1a2b0] Final|Native|Public|BlueprintCallable 
	// bool SetNativeVolume(float Volume);                                                                                      // [0x3d1a220] Final|Native|Public|BlueprintCallable 
	// void SetMediaOptions(class UMediaSource* Options);                                                                       // [0x3d1a070] Final|Native|Public|BlueprintCallable 
	// bool SetLooping(bool Looping);                                                                                           // [0x3d19c00] Final|Native|Public|BlueprintCallable 
	// void SetDesiredPlayerName(FName PlayerName);                                                                             // [0x3d198d0] Final|Native|Public|BlueprintCallable 
	// void SetBlockOnTime(FTimespan& Time);                                                                                    // [0x3d19840] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                       // [0x3d19770] Final|Native|Public|BlueprintCallable 
	// bool Seek(FTimespan& Time);                                                                                              // [0x3d196d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool Rewind();                                                                                                           // [0x3d196a0] Final|Native|Public|BlueprintCallable 
	// bool Reopen();                                                                                                           // [0x3d195a0] Final|Native|Public|BlueprintCallable 
	// bool Previous();                                                                                                         // [0x3d19430] Final|Native|Public|BlueprintCallable 
	// void PlayAndSeek();                                                                                                      // [0x3d19410] Final|Native|Public|BlueprintCallable 
	// bool Play();                                                                                                             // [0x3d193e0] Final|Native|Public|BlueprintCallable 
	// bool Pause();                                                                                                            // [0x3d193b0] Final|Native|Public|BlueprintCallable 
	// bool OpenUrl(FString URL);                                                                                               // [0x3d19300] Final|Native|Public|BlueprintCallable 
	// bool OpenSourceWithOptions(class UMediaSource* MediaSource, FMediaPlayerOptions& Options);                               // [0x3d191f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void OpenSourceLatent(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UMediaSource* MediaSource, FMediaPlayerOptions& Options, bool& bSuccess); // [0x3d19000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool OpenSource(class UMediaSource* MediaSource);                                                                        // [0x3d18f60] Final|Native|Public|BlueprintCallable 
	// bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32_t Index);                                                 // [0x3d18e90] Final|Native|Public|BlueprintCallable 
	// bool OpenPlaylist(class UMediaPlaylist* InPlaylist);                                                                     // [0x3d18df0] Final|Native|Public|BlueprintCallable 
	// bool OpenFile(FString FilePath);                                                                                         // [0x3d18d40] Final|Native|Public|BlueprintCallable 
	// bool Next();                                                                                                             // [0x3d18d10] Final|Native|Public|BlueprintCallable 
	// bool IsReady();                                                                                                          // [0x3d18ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsPreparing();                                                                                                      // [0x3d18cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsPlaying();                                                                                                        // [0x3d18c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsPaused();                                                                                                         // [0x3d18c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsLooping();                                                                                                        // [0x3d18c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsConnecting();                                                                                                     // [0x3d18bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsClosed();                                                                                                         // [0x3d18bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsBuffering();                                                                                                      // [0x3d18b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool HasError();                                                                                                         // [0x3d18a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FRotator GetViewRotation();                                                                                              // [0x3d18a20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x3d18910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);                                            // [0x3d18840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);                                                   // [0x3d18770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);                                              // [0x3d18690] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);                                                 // [0x3d185c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetVerticalFieldOfView();                                                                                          // [0x3d18590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetUrl();                                                                                                        // [0x3d18550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                               // [0x3d18440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                 // [0x3d18370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                              // [0x3d18240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UMediaTimeStampInfo* GetTimeStamp();                                                                               // [0x3d18210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FTimespan GetTimeDelay();                                                                                                // [0x3d181d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FTimespan GetTime();                                                                                                     // [0x3d18190] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);                                                   // [0x3d18090] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);                                                                   // [0x3d17f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetRate();                                                                                                         // [0x3d17f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetPlaylistIndex();                                                                                              // [0xc0bf70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UMediaPlaylist* GetPlaylist();                                                                                     // [0x3d17df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FName GetPlayerName();                                                                                                   // [0x3d17db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumTracks(EMediaPlayerTrack TrackType);                                                                       // [0x3d17d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                             // [0x3d17c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FText GetMediaName();                                                                                                    // [0x3d179d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetHorizontalFieldOfView();                                                                                        // [0x3d179a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FTimespan GetDuration();                                                                                                 // [0x3d17900] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// FName GetDesiredPlayerName();                                                                                            // [0x3d178c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x3d177b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);                                                // [0x3d176e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);                                                  // [0x3d17610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void Close();                                                                                                            // [0x3d17130] Final|Native|Public|BlueprintCallable 
	// bool CanPlayUrl(FString URL);                                                                                            // [0x3d17080] Final|Native|Public|BlueprintCallable 
	// bool CanPlaySource(class UMediaSource* MediaSource);                                                                     // [0x3d16fe0] Final|Native|Public|BlueprintCallable 
	// bool CanPause();                                                                                                         // [0x3d16fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaPlaylist
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UMediaPlaylist : public UObject
{ 
public:
	TArray<class UMediaSource*>                        Items;                                                      // 0x0030   (0x0010)  
	// bool Replace(int32_t Index, class UMediaSource* Replacement);                                                            // [0x3d195d0] Final|Native|Public|BlueprintCallable 
	// bool RemoveAt(int32_t Index);                                                                                            // [0x3d19500] Final|Native|Public|BlueprintCallable 
	// bool Remove(class UMediaSource* MediaSource);                                                                            // [0x3d19460] Final|Native|Public|BlueprintCallable 
	// int32_t Num();                                                                                                           // [0xc10840] Final|Native|Public|BlueprintCallable 
	// void Insert(class UMediaSource* MediaSource, int32_t Index);                                                             // [0x3d18ac0] Final|Native|Public|BlueprintCallable 
	// class UMediaSource* GetRandom(int32_t& OutIndex);                                                                        // [0x3d17eb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// class UMediaSource* GetPrevious(int32_t& InOutIndex);                                                                    // [0x3d17e10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// class UMediaSource* GetNext(int32_t& InOutIndex);                                                                        // [0x3d17b30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// class UMediaSource* Get(int32_t Index);                                                                                  // [0x3d17540] Final|Native|Public|BlueprintCallable 
	// bool AddUrl(FString URL);                                                                                                // [0x3d16cb0] Final|Native|Public|BlueprintCallable 
	// bool AddFile(FString FilePath);                                                                                          // [0x3d16c00] Final|Native|Public|BlueprintCallable 
	// bool Add(class UMediaSource* MediaSource);                                                                               // [0x3d16b60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaSoundComponent
/// Size: 0x0220 (544 bytes) (0x0006E0 - 0x000900) align 16 pad: 0x0000
class UMediaSoundComponent : public USynthComponent
{ 
public:
	EMediaSoundChannels                                Channels;                                                   // 0x06E0   (0x0004)  
	bool                                               DynamicRateAdjustment;                                      // 0x06E4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x06E5   (0x0003)  MISSED
	float                                              RateAdjustmentFactor;                                       // 0x06E8   (0x0004)  
	FFloatRange                                        RateAdjustmentRange;                                        // 0x06EC   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x06FC   (0x0004)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0700   (0x0008)  
	unsigned char                                      UnknownData02_7[0x1F8];                                     // 0x0708   (0x01F8)  MISSED
	// void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);           // [0x3d1a340] Final|Native|Public|BlueprintCallable 
	// void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);                                                                 // [0x3d1a100] Final|Native|Public|BlueprintCallable 
	// void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);                                      // [0x3d19a90] Final|Native|Public|BlueprintCallable 
	// void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);                                                         // [0x3d19a00] Final|Native|Public|BlueprintCallable 
	// void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);                                                              // [0x3d19970] Final|Native|Public|BlueprintCallable 
	// TArray<FMediaSoundComponentSpectralData> GetSpectralData();                                                              // [0x3d18010] Final|Native|Public|BlueprintCallable 
	// TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();                                                    // [0x3d17bd0] Final|Native|Public|BlueprintCallable 
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x3d17aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetEnvelopeValue();                                                                                                // [0x3d17940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);                                // [0x3d16d60] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaTexture
/// Size: 0x00D8 (216 bytes) (0x0000F0 - 0x0001C8) align 8 pad: 0x0000
class UMediaTexture : public UTexture
{ 
public:
	TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x00F0   (0x0001)  
	TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x00F1   (0x0001)  
	bool                                               AutoClear;                                                  // 0x00F2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00F3   (0x0001)  MISSED
	FLinearColor                                       ClearColor;                                                 // 0x00F4   (0x0010)  
	bool                                               EnableGenMips;                                              // 0x0104   (0x0001)  
	char                                               NumMips;                                                    // 0x0105   (0x0001)  
	bool                                               NewStyleOutput;                                             // 0x0106   (0x0001)  
	TEnumAsByte<MediaTextureOutputFormat>              OutputFormat;                                               // 0x0107   (0x0001)  
	float                                              CurrentAspectRatio;                                         // 0x0108   (0x0004)  
	TEnumAsByte<MediaTextureOrientation>               CurrentOrientation;                                         // 0x010C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0110   (0x0008)  
	unsigned char                                      UnknownData02_7[0xB0];                                      // 0x0118   (0x00B0)  MISSED
	// void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);                                                                 // [0x3d1a190] Final|Native|Public|BlueprintCallable 
	// int32_t GetWidth();                                                                                                      // [0x3d18a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x3d17ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetHeight();                                                                                                     // [0x3d17970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetAspectRatio();                                                                                                  // [0x3d175e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.PlatformMediaSource
/// Size: 0x0008 (8 bytes) (0x000088 - 0x000090) align 8 pad: 0x0000
class UPlatformMediaSource : public UMediaSource
{ 
public:
	class UMediaSource*                                MediaSource;                                                // 0x0088   (0x0008)  
};

/// Class /Script/MediaAssets.StreamMediaSource
/// Size: 0x0020 (32 bytes) (0x000098 - 0x0000B8) align 8 pad: 0x0000
class UStreamMediaSource : public UBaseMediaSource
{ 
public:
	FString                                            StreamUrl;                                                  // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00A8   (0x0010)  MISSED
};

/// Class /Script/MediaAssets.TimeSynchronizableMediaSource
/// Size: 0x0010 (16 bytes) (0x000098 - 0x0000A8) align 8 pad: 0x0000
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{ 
public:
	bool                                               bUseTimeSynchronization;                                    // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	int32_t                                            FrameDelay;                                                 // 0x009C   (0x0004)  
	double                                             TimeDelay;                                                  // 0x00A0   (0x0008)  
};

/// Struct /Script/MediaAssets.MediaCaptureDevice
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FMediaCaptureDevice
{ 
	FText                                              DisplayName;                                                // 0x0000   (0x0018)  
	FString                                            URL;                                                        // 0x0018   (0x0010)  
};

/// Struct /Script/MediaAssets.MediaSoundComponentSpectralData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FMediaSoundComponentSpectralData
{ 
	float                                              FrequencyHz;                                                // 0x0000   (0x0004)  
	float                                              Magnitude;                                                  // 0x0004   (0x0004)  
};

