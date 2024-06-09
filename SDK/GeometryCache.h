
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 8 pad: 0x0000
class UGeometryCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0038   (0x0010)  
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                     // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0058   (0x0010)  MISSED
	int32_t                                            StartFrame;                                                 // 0x0068   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x006C   (0x0004)  
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AGeometryCacheActor : public AActor
{ 
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                     // 0x02A8   (0x0008)  
	// class UGeometryCacheComponent* GetGeometryCacheComponent();                                                              // [0x20496a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UGeometryCacheCodecBase : public UObject
{ 
public:
	TArray<int32_t>                                    TopologyRanges;                                             // 0x0030   (0x0010)  
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
public:
	int32_t                                            DummyProperty;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x0058 (88 bytes) (0x000508 - 0x000560) align 16 pad: 0x0000
class UGeometryCacheComponent : public UMeshComponent
{ 
public:
	class UGeometryCache*                              GeometryCache;                                              // 0x0508   (0x0008)  
	bool                                               bRunning;                                                   // 0x0510   (0x0001)  
	bool                                               bLooping;                                                   // 0x0511   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0512   (0x0002)  MISSED
	float                                              StartTimeOffset;                                            // 0x0514   (0x0004)  
	float                                              PlaybackSpeed;                                              // 0x0518   (0x0004)  
	int32_t                                            NumTracks;                                                  // 0x051C   (0x0004)  
	float                                              ElapsedTime;                                                // 0x0520   (0x0004)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0524   (0x0030)  MISSED
	float                                              Duration;                                                   // 0x0554   (0x0004)  
	bool                                               bManualTick;                                                // 0x0558   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0559   (0x0007)  MISSED
	// void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);                                // [0x2049d10] Final|Native|Public|BlueprintCallable 
	// void Stop();                                                                                                             // [0x2049cf0] Final|Native|Public|BlueprintCallable 
	// void SetStartTimeOffset(float NewStartTimeOffset);                                                                       // [0x2049c70] Final|Native|Public|BlueprintCallable 
	// void SetPlaybackSpeed(float NewPlaybackSpeed);                                                                           // [0x2049bf0] Final|Native|Public|BlueprintCallable 
	// void SetLooping(bool bNewLooping);                                                                                       // [0x2049960] Final|Native|Public|BlueprintCallable 
	// bool SetGeometryCache(class UGeometryCache* NewGeomCache);                                                               // [0x20498c0] Final|Native|Public|BlueprintCallable 
	// void PlayReversedFromEnd();                                                                                              // [0x20498a0] Final|Native|Public|BlueprintCallable 
	// void PlayReversed();                                                                                                     // [0x2049880] Final|Native|Public|BlueprintCallable 
	// void PlayFromStart();                                                                                                    // [0x2049860] Final|Native|Public|BlueprintCallable 
	// void Play();                                                                                                             // [0x2049840] Final|Native|Public|BlueprintCallable 
	// void Pause();                                                                                                            // [0x2049820] Final|Native|Public|BlueprintCallable 
	// bool IsPlayingReversed();                                                                                                // [0x20497f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsPlaying();                                                                                                        // [0x20497c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsLooping();                                                                                                        // [0x2049790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetStartTimeOffset();                                                                                              // [0x2049760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetPlaybackSpeed();                                                                                                // [0x2049730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetPlaybackDirection();                                                                                            // [0x2049700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetNumberOfFrames();                                                                                             // [0x20496d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetDuration();                                                                                                     // [0x2049670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetAnimationTime();                                                                                                // [0x2049640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UGeometryCacheTrack : public UObject
{ 
public:
	float                                              Duration;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x2C];                                      // 0x0034   (0x002C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0028 (40 bytes) (0x000060 - 0x000088) align 8 pad: 0x0000
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
public:
	uint32_t                                           NumMeshSamples;                                             // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_7[0x24];                                      // 0x0064   (0x0024)  MISSED
	// void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime);                                                  // [0x20493f0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x0078 (120 bytes) (0x000060 - 0x0000D8) align 8 pad: 0x0000
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
public:
	class UGeometryCacheCodecBase*                     Codec;                                                      // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0068   (0x0068)  MISSED
	float                                              StartSampleTime;                                            // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x00A8 (168 bytes) (0x000060 - 0x000108) align 8 pad: 0x0000
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0060   (0x00A8)  MISSED
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x20499f0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x00A8 (168 bytes) (0x000060 - 0x000108) align 8 pad: 0x0000
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0060   (0x00A8)  MISSED
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x20499f0] Final|Native|Public|HasOutParms 
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 pad: 0x0000
struct FTrackRenderData
{ 
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 pad: 0x0000
struct FGeometryCacheMeshData
{ 
	unsigned char                                      UnknownData00_2[0xA8];                                      // 0x0000   (0x00A8)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 1 pad: 0x0000
struct FGeometryCacheVertexInfo
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FGeometryCacheMeshBatchInfo
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

