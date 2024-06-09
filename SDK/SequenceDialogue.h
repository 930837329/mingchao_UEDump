
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Enum /Script/SequenceDialogue.EDialogueStateEnum
/// Size: 0x01 (1 bytes)
enum class EDialogueStateEnum : uint8_t
{
	EDialogueStateEnum__SkipTarget                                                   = 0
};

/// Enum /Script/SequenceDialogue.ETranslateCountry
/// Size: 0x01 (1 bytes)
enum class ETranslateCountry : uint8_t
{
	ETranslateCountry__None                                                          = 0,
	ETranslateCountry__Zh                                                            = 1,
	ETranslateCountry__En                                                            = 2,
	ETranslateCountry__Ja                                                            = 3,
	ETranslateCountry__Ko                                                            = 4,
	ETranslateCountry__Ru                                                            = 5,
	ETranslateCountry__ZhH                                                           = 6,
	ETranslateCountry__De                                                            = 7,
	ETranslateCountry__Es                                                            = 8,
	ETranslateCountry__Pt                                                            = 9,
	ETranslateCountry__Id                                                            = 10,
	ETranslateCountry__Fr                                                            = 11,
	ETranslateCountry__Vi                                                            = 12,
	ETranslateCountry__Th                                                            = 13
};

/// Class /Script/SequenceDialogue.MovieSceneAutoTransformSection
/// Size: 0x0000 (0 bytes) (0x0000F0 - 0x0000F0) align 8 pad: 0x0000
class UMovieSceneAutoTransformSection : public UMovieSceneSection
{ 
public:
};

/// Class /Script/SequenceDialogue.MovieSceneAutoTransformTrack
/// Size: 0x0018 (24 bytes) (0x000080 - 0x000098) align 8 pad: 0x0000
class UMovieSceneAutoTransformTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0080   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0088   (0x0010)  
};

/// Class /Script/SequenceDialogue.MovieSceneDialogueAudioSection
/// Size: 0x0018 (24 bytes) (0x0000F0 - 0x000108) align 8 pad: 0x0000
class UMovieSceneDialogueAudioSection : public UMovieSceneSection
{ 
public:
	FString                                            AudioKey;                                                   // 0x00F0   (0x0010)  
	int32_t                                            AudioTransitionDuration;                                    // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Class /Script/SequenceDialogue.MovieSceneDialogueAudioTrack
/// Size: 0x0018 (24 bytes) (0x000080 - 0x000098) align 8 pad: 0x0000
class UMovieSceneDialogueAudioTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0080   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0088   (0x0010)  
};

/// Class /Script/SequenceDialogue.MovieSceneDialogueSection
/// Size: 0x0088 (136 bytes) (0x0000F0 - 0x000178) align 8 pad: 0x0000
class UMovieSceneDialogueSection : public UMovieSceneSection
{ 
public:
	FText                                              DialogueInfo;                                               // 0x00F0   (0x0018)  
	int32_t                                            Index;                                                      // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	FText                                              SpeakerName;                                                // 0x0110   (0x0018)  
	int32_t                                            SpeakerId;                                                  // 0x0128   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	FText                                              DialogueID;                                                 // 0x0130   (0x0018)  
	TArray<FText>                                      DialogueInfos;                                              // 0x0148   (0x0010)  
	TArray<FText>                                      OptionInfos;                                                // 0x0158   (0x0010)  
	int32_t                                            GuardTime;                                                  // 0x0168   (0x0004)  
	int32_t                                            AudioDelay;                                                 // 0x016C   (0x0004)  
	int32_t                                            AudioTransitionDuration;                                    // 0x0170   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0174   (0x0004)  MISSED
};

/// Struct /Script/SequenceDialogue.DialogueStateStruct
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FDialogueStateStruct
{ 
	EDialogueStateEnum                                 State;                                                      // 0x0000   (0x0001)  
};

/// Class /Script/SequenceDialogue.MovieSceneDialogueStateSection
/// Size: 0x0008 (8 bytes) (0x0000F0 - 0x0000F8) align 8 pad: 0x0000
class UMovieSceneDialogueStateSection : public UMovieSceneSection
{ 
public:
	FDialogueStateStruct                               SectionData;                                                // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00F1   (0x0007)  MISSED
};

/// Class /Script/SequenceDialogue.MovieSceneDialogueStateTrack
/// Size: 0x0018 (24 bytes) (0x000080 - 0x000098) align 8 pad: 0x0000
class UMovieSceneDialogueStateTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0080   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0088   (0x0010)  
};

/// Class /Script/SequenceDialogue.MovieSceneDialogueSubsystem
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000098) align 8 pad: 0x0000
class UMovieSceneDialogueSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	SDK_UNDEFINED(16,1571) /* FMulticastInlineDelegate */ __um(OnShowDialogue);                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1572) /* FMulticastInlineDelegate */ __um(OnShowDialogueAudio);                               // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0060   (0x0010)  MISSED
	class AActor*                                      AutoTransformActor;                                         // 0x0070   (0x0008)  
	class UMovieScene3DTransformTrack*                 AutoTransformDataTrack;                                     // 0x0078   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0080   (0x0018)  MISSED
	// bool TryGetAutoTransformByOffsetTime(FTransform& OutTrans, float OffsetTime);                                            // [0x20b4990] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void ShowDialogueAudio(bool bShow, FString AudioKey, int32_t AudioTransitionDuration);                                   // [0x20b4870] Final|Native|Public|BlueprintCallable 
	// void ShowDialogue(bool bShow, FText& DialogueID, int32_t GuardTime, int32_t AudioDelay, int32_t AudioTransitionDuration); // [0x20b4670] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SequenceDialogue.MovieSceneDialogueTrack
/// Size: 0x0018 (24 bytes) (0x000080 - 0x000098) align 8 pad: 0x0000
class UMovieSceneDialogueTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0080   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0088   (0x0010)  
};

/// Struct /Script/SequenceDialogue.FloatNameAndCurve
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 pad: 0x0000
struct FFloatNameAndCurve
{ 
	FName                                              Group;                                                      // 0x0000   (0x000C)  
	FName                                              DisplayName;                                                // 0x000C   (0x000C)  
	FName                                              ParameterName;                                              // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FMovieSceneFloatChannel                            ParameterCurve;                                             // 0x0028   (0x00A0)  
};

/// Struct /Script/SequenceDialogue.VectorNameAndCurve
/// Size: 0x0208 (520 bytes) (0x000000 - 0x000208) align 8 pad: 0x0000
struct FVectorNameAndCurve
{ 
	FName                                              Group;                                                      // 0x0000   (0x000C)  
	FName                                              DisplayName;                                                // 0x000C   (0x000C)  
	FName                                              ParameterName;                                              // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FMovieSceneFloatChannel                            XCurve;                                                     // 0x0028   (0x00A0)  
	FMovieSceneFloatChannel                            YCurve;                                                     // 0x00C8   (0x00A0)  
	FMovieSceneFloatChannel                            ZCurve;                                                     // 0x0168   (0x00A0)  
};

/// Class /Script/SequenceDialogue.MovieSceneSeqAnimDataSection
/// Size: 0x0020 (32 bytes) (0x0000F0 - 0x000110) align 8 pad: 0x0000
class UMovieSceneSeqAnimDataSection : public UMovieSceneSection
{ 
public:
	TArray<FFloatNameAndCurve>                         FloatNamesAndCurves;                                        // 0x00F0   (0x0010)  
	TArray<FVectorNameAndCurve>                        VectorNameAndCurves;                                        // 0x0100   (0x0010)  
	// bool RemoveScalarParameter(FName InParameterName);                                                                       // [0x20b43b0] Final|Native|Public|BlueprintCallable 
	// bool RemoveCategory(FName InParameterName);                                                                              // [0x20b4300] Final|Native|Public|BlueprintCallable 
	// bool GetVectorParameter(FName InParameterName, FFrameNumber InTime, FVector& Value);                                     // [0x20b41c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool GetScalarParameters(FFrameNumber InTime, TMap<FName, float>& Floats);                                               // [0x20b3fb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void EmptyParameters();                                                                                                  // [0x20b3d60] Final|Native|Public|BlueprintCallable 
	// void AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue);                                 // [0x20b3b90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue);                                   // [0x20b3a60] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequenceDialogue.MovieSceneSeqAnimDataTrack
/// Size: 0x0018 (24 bytes) (0x000080 - 0x000098) align 8 pad: 0x0000
class UMovieSceneSeqAnimDataTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0080   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0088   (0x0010)  
};

/// Struct /Script/SequenceDialogue.SeqAnimCurveFloatDesc
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FSeqAnimCurveFloatDesc
{ 
	FName                                              Group;                                                      // 0x0000   (0x000C)  
	FName                                              DisplayName;                                                // 0x000C   (0x000C)  
	FName                                              CurveName;                                                  // 0x0018   (0x000C)  
};

/// Struct /Script/SequenceDialogue.SeqAnimCurveVectorDesc
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 pad: 0x0000
struct FSeqAnimCurveVectorDesc
{ 
	FName                                              Group;                                                      // 0x0000   (0x000C)  
	FName                                              DisplayName;                                                // 0x000C   (0x000C)  
	FName                                              CurveName;                                                  // 0x0018   (0x000C)  
	FName                                              GizmoBaseBone;                                              // 0x0024   (0x000C)  
	FVector                                            GizmoOffset;                                                // 0x0030   (0x000C)  
	bool                                               EnableVirtualBoneRot;                                       // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/SequenceDialogue.SeqAnimDataSetting
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class USeqAnimDataSetting : public UObject
{ 
public:
	TArray<FSeqAnimCurveFloatDesc>                     SeqAnimCurveFloats;                                         // 0x0030   (0x0010)  
	TArray<FSeqAnimCurveVectorDesc>                    SeqAnimCurveVectors;                                        // 0x0040   (0x0010)  
};

/// Class /Script/SequenceDialogue.SeqAnimDataInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class USeqAnimDataInterface : public UInterface
{ 
public:
	// bool SetAnimDataVector(TMap<FName, FVector>& VectorCurveData);                                                           // [0x20b4520] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// bool SetAnimDataFloat(TArray<FNamedCurveValue>& FloatCurveData);                                                         // [0x20b4460] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// TArray<FName> GetSupportGroupNames();                                                                                    // [0x20b4140] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// bool GetAnimDataVector(TMap<FName, FVector>& VectorCurveData);                                                           // [0x20b3e60] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// bool GetAnimDataFloat(TArray<FNamedCurveValue>& FloatCurveData);                                                         // [0x20b3da0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SequenceDialogue.SeqAutoTransformInterface
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class USeqAutoTransformInterface : public UInterface
{ 
public:
	// void EndAutoTransform();                                                                                                 // [0x20b3d80] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// void BeginAutoTransform(float TimeLength);                                                                               // [0x20b3cd0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/SequenceDialogue.MovieSceneAutoTransformSectionTemplate
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FMovieSceneAutoTransformSectionTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/SequenceDialogue.MovieSceneDialogueAudioSharedTrack
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FMovieSceneDialogueAudioSharedTrack : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/SequenceDialogue.MovieSceneDialogueAudioSectionTemplate
/// Size: 0x0018 (24 bytes) (0x000020 - 0x000038) align 8 pad: 0x0000
struct FMovieSceneDialogueAudioSectionTemplate : FMovieSceneEvalTemplate
{ 
	FString                                            AudioKey;                                                   // 0x0020   (0x0010)  
	int32_t                                            AudioTransitionDuration;                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/SequenceDialogue.MovieSceneDialogueStateTemplate
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FMovieSceneDialogueStateTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/SequenceDialogue.Translate
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 pad: 0x0000
struct FTranslate
{ 
	unsigned char                                      UnknownData00_2[0xD0];                                      // 0x0000   (0x00D0)  MISSED
};

/// Struct /Script/SequenceDialogue.MovieSceneDialogueSharedTrack
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FMovieSceneDialogueSharedTrack : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/SequenceDialogue.MovieSceneDialogueSectionTemplate
/// Size: 0x0088 (136 bytes) (0x000020 - 0x0000A8) align 8 pad: 0x0000
struct FMovieSceneDialogueSectionTemplate : FMovieSceneEvalTemplate
{ 
	FText                                              DialogueInfo;                                               // 0x0020   (0x0018)  
	FText                                              SpeakerName;                                                // 0x0038   (0x0018)  
	FText                                              DialogueID;                                                 // 0x0050   (0x0018)  
	int32_t                                            GuardTime;                                                  // 0x0068   (0x0004)  
	int32_t                                            AudioDelay;                                                 // 0x006C   (0x0004)  
	int32_t                                            AudioTransitionDuration;                                    // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FText>                                      Options;                                                    // 0x0078   (0x0010)  
	FText                                              DialogueKey;                                                // 0x0088   (0x0018)  
	int32_t                                            SpeakerId;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Struct /Script/SequenceDialogue.MovieSceneSeqAnimDataSectionTemplate
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000040) align 8 pad: 0x0000
struct FMovieSceneSeqAnimDataSectionTemplate : FMovieSceneEvalTemplate
{ 
	TArray<FFloatNameAndCurve>                         FloatCurves;                                                // 0x0020   (0x0010)  
	TArray<FVectorNameAndCurve>                        VectorCurves;                                               // 0x0030   (0x0010)  
};

