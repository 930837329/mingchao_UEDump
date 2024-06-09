
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Enum /Script/KuroAudio.EAudioFadeCurve
/// Size: 0x01 (1 bytes)
enum class EAudioFadeCurve : uint8_t
{
	EAudioFadeCurve__Log3                                                            = 0,
	EAudioFadeCurve__Sine                                                            = 1,
	EAudioFadeCurve__Log1                                                            = 2,
	EAudioFadeCurve__InvSCurve                                                       = 3,
	EAudioFadeCurve__Linear                                                          = 4,
	EAudioFadeCurve__SCurve                                                          = 5,
	EAudioFadeCurve__Exp1                                                            = 6,
	EAudioFadeCurve__SineRecip                                                       = 7,
	EAudioFadeCurve__Exp3                                                            = 8
};

/// Enum /Script/KuroAudio.EAudioActionType
/// Size: 0x01 (1 bytes)
enum class EAudioActionType : uint8_t
{
	EAudioActionType__Stop                                                           = 0,
	EAudioActionType__Pause                                                          = 1,
	EAudioActionType__Resume                                                         = 2,
	EAudioActionType__Break                                                          = 3,
	EAudioActionType__ReleaseEnvelope                                                = 4
};

/// Enum /Script/KuroAudio.EKuroAudioVolumeChannel
/// Size: 0x01 (1 bytes)
enum class EKuroAudioVolumeChannel : uint8_t
{
	EKuroAudioVolumeChannel__Default                                                 = 0,
	EKuroAudioVolumeChannel__Music                                                   = 1,
	EKuroAudioVolumeChannel__Count                                                   = 2
};

/// Class /Script/KuroAudio.KuroAmbientSoundActor
/// Size: 0x0008 (8 bytes) (0x0002A8 - 0x0002B0) align 8 pad: 0x0000
class AKuroAmbientSoundActor : public AActor
{ 
public:
	class UKuroAmbientSoundComponent*                  AmbientSoundComponent;                                      // 0x02A8   (0x0008)  
};

/// Class /Script/KuroAudio.KuroAmbientSoundComponent
/// Size: 0x0028 (40 bytes) (0x000218 - 0x000240) align 16 pad: 0x0000
class UKuroAmbientSoundComponent : public USceneComponent
{ 
public:
	class UAkAudioEvent*                               AudioEvent;                                                 // 0x0218   (0x0008)  
	bool                                               bAutoPlay;                                                  // 0x0220   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0221   (0x0003)  MISSED
	float                                              AttenuationScalingFactor;                                   // 0x0224   (0x0004)  
	TArray<FTransform>                                 SoundPositions;                                             // 0x0228   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0238   (0x0008)  MISSED
	// void StopSound(int32_t FadeDuration);                                                                                    // [0xf17680] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const 
	// void PlaySound();                                                                                                        // [0xf16f50] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const 
	// bool IsPlaying();                                                                                                        // [0xf16f00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/KuroAudio.KuroAmbientSoundPositionsProxyComponent
/// Size: 0x0008 (8 bytes) (0x000638 - 0x000640) align 16 pad: 0x0000
class UKuroAmbientSoundPositionsProxyComponent : public UInstancedStaticMeshComponent
{ 
public:
	class UKuroAmbientSoundComponent*                  TargetComponent;                                            // 0x0638   (0x0008)  
};

/// Class /Script/KuroAudio.KuroAudioDelegates
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroAudioDelegates : public UBlueprintFunctionLibrary
{ 
public:
	// void UnbindAudioResumeDelegate();                                                                                        // [0xf17730] Final|Native|Static|Public|BlueprintCallable 
	// void UnbindAudioPauseDelegate();                                                                                         // [0xf17710] Final|Native|Static|Public|BlueprintCallable 
	// void SetAudioResumeDelegate(FDelegateProperty& InDelegate);                                                              // [0xf170e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetAudioPauseDelegate(FDelegateProperty& InDelegate);                                                               // [0xf17030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KuroAudio.KuroAudioEnvironmentSubsystem
/// Size: 0x0138 (312 bytes) (0x000038 - 0x000170) align 16 pad: 0x0000
class UKuroAudioEnvironmentSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x88];                                      // 0x0038   (0x0088)  MISSED
	SDK_UNDEFINED(80,579) /* TMap<EKuroAudioVolumeChannel, UAkAudioEvent*> */ __um(DefaultStateEventMap);          // 0x00C0   (0x0050)  
	SDK_UNDEFINED(80,580) /* TMap<EKuroAudioVolumeChannel, UAkAudioEvent*> */ __um(CurrentStateEventMap);          // 0x0110   (0x0050)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0160   (0x0010)  MISSED
};

/// Class /Script/KuroAudio.KuroAudioSettings
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000080) align 8 pad: 0x0000
class UKuroAudioSettings : public UObject
{ 
public:
	SDK_UNDEFINED(80,581) /* TMap<FName, FKuroAudioDefaultStateEventSettings> */ __um(DefaultStateEventWorldSettings); // 0x0030   (0x0050)  
};

/// Class /Script/KuroAudio.KuroAudioStatics
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroAudioStatics : public UBlueprintFunctionLibrary
{ 
public:
	// void UpdateAudioEnvironment(class UWorld* World, FVector& Location);                                                     // [0xf17750] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void StopAll(class AActor* Actor);                                                                                       // [0xf17600] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void SetSwitch(FString SwitchGroup, FString SwitchState, class AActor* Actor);                                           // [0xf174b0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void SetState(FString StateGroup, FString State);                                                                        // [0xf173c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void SetRtpcValue(FString RtpcName, float Value, class AActor* Actor, int32_t TransitionDuration, EAudioFadeCurve TransitionFadeCurve); // [0xf17210] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void SetIosAuditPackage(bool IsAuditPackage);                                                                            // [0xf17190] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void PostNotifyEvent(class UAkAudioEvent* NotifyEvent, class AActor* Actor);                                             // [0xf16f70] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// bool IsDolbyAtmosGameSupported();                                                                                        // [0xf16ed0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// bool IsAndroidApiUsingOpenSL();                                                                                          // [0xf16ea0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// class UAkComponent* GetAkComponent(class USceneComponent* Parent, FName& SocketName, bool& bCreated);                    // [0xf16d70] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void ExecuteActionOnPlayingID(int32_t PlayingID, EAudioActionType ActionType, int32_t TransitionDuration, EAudioFadeCurve TransitionFadeCurve); // [0xf16c30] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void ExecuteActionOnEventName(FString EventName, EAudioActionType ActionType, class AActor* Actor, int32_t TransitionDuration, EAudioFadeCurve TransitionFadeCurve); // [0xf16a90] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void ExecuteActionOnEvent(class UAkAudioEvent* AudioEvent, EAudioActionType ActionType, class AActor* Actor, int32_t TransitionDuration, EAudioFadeCurve TransitionFadeCurve); // [0xf16900] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void ChangeIosAudioSessionProperties();                                                                                  // [0xc036d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroAudio.KuroAudioVolume
/// Size: 0x0020 (32 bytes) (0x0002E0 - 0x000300) align 8 pad: 0x0000
class AKuroAudioVolume : public AVolume
{ 
public:
	EKuroAudioVolumeChannel                            Channel;                                                    // 0x02E0   (0x0001)  
	char                                               Priority;                                                   // 0x02E1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x02E2   (0x0006)  MISSED
	class UAkAudioEvent*                               StateEvent;                                                 // 0x02E8   (0x0008)  
	bool                                               bEnableDynamicReverb;                                       // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x02F1   (0x000F)  MISSED
};

/// Class /Script/KuroAudio.KuroBgPlayerStatic
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UKuroBgPlayerStatic : public UBlueprintFunctionLibrary
{ 
public:
	// void Stop();                                                                                                             // [0xf175e0] Final|Native|Static|Public|BlueprintCallable 
	// void Play();                                                                                                             // [0xf16f30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KuroAudio.MovieSceneKuroAudioEventSection
/// Size: 0x0018 (24 bytes) (0x0000F0 - 0x000108) align 8 pad: 0x0000
class UMovieSceneKuroAudioEventSection : public UMovieSceneSection
{ 
public:
	class UAkAudioEvent*                               AudioEvent;                                                 // 0x00F0   (0x0008)  
	bool                                               bStopAtSectionEnd;                                          // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	int32_t                                            FadeDuration;                                               // 0x00FC   (0x0004)  
	EAudioFadeCurve                                    FadeCurve;                                                  // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Class /Script/KuroAudio.MovieSceneKuroAudioEventTrack
/// Size: 0x0018 (24 bytes) (0x000080 - 0x000098) align 8 pad: 0x0000
class UMovieSceneKuroAudioEventTrack : public UMovieSceneTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0080   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0088   (0x0010)  
};

/// Struct /Script/KuroAudio.KuroAudioDefaultStateEventSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FKuroAudioDefaultStateEventSettings
{ 
	SDK_UNDEFINED(80,582) /* TMap<EKuroAudioVolumeChannel, TWeakObjectPtr<UAkAudioEvent*>> */ __um(DefaultStateEventMap); // 0x0000   (0x0050)  
};

/// Struct /Script/KuroAudio.MovieSceneKuroAudioEventTemplate
/// Size: 0x0008 (8 bytes) (0x000020 - 0x000028) align 8 pad: 0x0000
struct FMovieSceneKuroAudioEventTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneKuroAudioEventSection*            Section;                                                    // 0x0020   (0x0008)  
};

