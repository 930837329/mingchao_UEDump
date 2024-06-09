
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00B8 (184 bytes) (0x000068 - 0x000120) align 8 pad: 0x0000
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0068   (0x0008)  
	SDK_UNDEFINED(48,1605) /* TWeakObjectPtr<UClass*> */ __um(BoundActorClass);                                    // 0x0070   (0x0030)  
	SDK_UNDEFINED(48,1606) /* TWeakObjectPtr<AActor*> */ __um(BoundPreviewActor);                                  // 0x00A0   (0x0030)  
	SDK_UNDEFINED(80,1607) /* TMap<FGuid, FName> */    __um(BoundActorComponents);                                 // 0x00D0   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0 bytes) (0x000120 - 0x000120) align 8 pad: 0x0000
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 16 pad: 0x0000
class USequenceCameraShakeCameraStandIn : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	float                                              FieldOfView;                                                // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x34];                                      // 0x003C   (0x0034)  MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShake
/// Size: 0x0038 (56 bytes) (0x0000A8 - 0x0000E0) align 16 pad: 0x0000
class USequenceCameraShake : public UCameraShakeBase
{ 
public:
	class UCameraAnimationSequence*                    Sequence;                                                   // 0x00A8   (0x0008)  
	float                                              PlayRate;                                                   // 0x00B0   (0x0004)  
	float                                              Scale;                                                      // 0x00B4   (0x0004)  
	float                                              BlendInTime;                                                // 0x00B8   (0x0004)  
	float                                              BlendOutTime;                                               // 0x00BC   (0x0004)  
	float                                              RandomSegmentDuration;                                      // 0x00C0   (0x0004)  
	bool                                               bRandomSegment;                                             // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
	class USequenceCameraShakeSequencePlayer*          Player;                                                     // 0x00C8   (0x0008)  
	class USequenceCameraShakeCameraStandIn*           CameraStandIn;                                              // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
/// Size: 0x05C0 (1472 bytes) (0x000030 - 0x0005F0) align 8 pad: 0x0000
class USequenceCameraShakeSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x458];                                     // 0x0030   (0x0458)  MISSED
	class UObject*                                     BoundObjectOverride;                                        // 0x0488   (0x0008)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x0490   (0x0008)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0498   (0x00F8)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x0590   (0x0060)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FTemplateSequenceBindingOverrideData
{ 
	SDK_UNDEFINED(8,1608) /* TWeakObjectPtr<UObject*> */ __um(Object);                                             // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0058 (88 bytes) (0x0002A8 - 0x000300) align 8 pad: 0x0000
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02A8   (0x0008)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x02B0   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
	class UTemplateSequencePlayer*                     SequencePlayer;                                             // 0x02C8   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x02D0   (0x0020)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x02F0   (0x000C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x02FC   (0x0004)  MISSED
	// void SetSequence(class UTemplateSequence* InSequence);                                                                   // [0x2067320] Final|Native|Public|BlueprintCallable 
	// void SetBinding(class AActor* Actor);                                                                                    // [0x2067290] Final|Native|Public|BlueprintCallable 
	// class UTemplateSequence* LoadSequence();                                                                                 // [0x2067260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UTemplateSequencePlayer* GetSequencePlayer();                                                                      // [0x2067230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UTemplateSequence* GetSequence();                                                                                  // [0x2067200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0008 (8 bytes) (0x0006E8 - 0x0006F0) align 8 pad: 0x0000
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x06E8   (0x0008)  MISSED
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0x2067080] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0008 (8 bytes) (0x000168 - 0x000170) align 8 pad: 0x0000
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x0070 (112 bytes) (0x000048 - 0x0000B8) align 8 pad: 0x0000
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0048   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0 bytes) (0x000090 - 0x000090) align 8 pad: 0x0000
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

