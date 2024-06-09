
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioAnalyzer
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AudioSynesthesia.EConstantQFFTSizeEnum
/// Size: 0x01 (1 bytes)
enum class EConstantQFFTSizeEnum : uint8_t
{
	EConstantQFFTSizeEnum__Min                                                       = 0,
	EConstantQFFTSizeEnum__XXSmall                                                   = 1,
	EConstantQFFTSizeEnum__XSmall                                                    = 2,
	EConstantQFFTSizeEnum__Small                                                     = 3,
	EConstantQFFTSizeEnum__Medium                                                    = 4,
	EConstantQFFTSizeEnum__Large                                                     = 5,
	EConstantQFFTSizeEnum__XLarge                                                    = 6,
	EConstantQFFTSizeEnum__XXLarge                                                   = 7,
	EConstantQFFTSizeEnum__Max                                                       = 8
};

/// Enum /Script/AudioSynesthesia.EConstantQNormalizationEnum
/// Size: 0x01 (1 bytes)
enum class EConstantQNormalizationEnum : uint8_t
{
	EConstantQNormalizationEnum__EqualEuclideanNorm                                  = 0,
	EConstantQNormalizationEnum__EqualEnergy                                         = 1,
	EConstantQNormalizationEnum__EqualAmplitude                                      = 2
};

/// Enum /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum
/// Size: 0x01 (1 bytes)
enum class ELoudnessNRTCurveTypeEnum : uint8_t
{
	ELoudnessNRTCurveTypeEnum__A                                                     = 0,
	ELoudnessNRTCurveTypeEnum__B                                                     = 1,
	ELoudnessNRTCurveTypeEnum__C                                                     = 2,
	ELoudnessNRTCurveTypeEnum__D                                                     = 3,
	ELoudnessNRTCurveTypeEnum__None                                                  = 4
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRTSettings
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{ 
public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRT
/// Size: 0x0000 (0 bytes) (0x000080 - 0x000080) align 8 pad: 0x0000
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{ 
public:
};

/// Class /Script/AudioSynesthesia.ConstantQNRTSettings
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	float                                              StartingFrequency;                                          // 0x0030   (0x0004)  
	int32_t                                            NumBands;                                                   // 0x0034   (0x0004)  
	float                                              NumBandsPerOctave;                                          // 0x0038   (0x0004)  
	float                                              AnalysisPeriod;                                             // 0x003C   (0x0004)  
	bool                                               bDownmixToMono;                                             // 0x0040   (0x0001)  
	EConstantQFFTSizeEnum                              FFTSize;                                                    // 0x0041   (0x0001)  
	EFFTWindowType                                     WindowType;                                                 // 0x0042   (0x0001)  
	EAudioSpectrumType                                 SpectrumType;                                               // 0x0043   (0x0001)  
	float                                              BandWidthStretch;                                           // 0x0044   (0x0004)  
	EConstantQNormalizationEnum                        CQTNormalization;                                           // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x004C   (0x0004)  
};

/// Class /Script/AudioSynesthesia.ConstantQNRT
/// Size: 0x0008 (8 bytes) (0x000080 - 0x000088) align 8 pad: 0x0000
class UConstantQNRT : public UAudioSynesthesiaNRT
{ 
public:
	class UConstantQNRTSettings*                       Settings;                                                   // 0x0080   (0x0008)  
	// void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);               // [0x1ed5410] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);                         // [0x1ed4f00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.LoudnessNRTSettings
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	float                                              AnalysisPeriod;                                             // 0x0030   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x0034   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0038   (0x0004)  
	ELoudnessNRTCurveTypeEnum                          CurveType;                                                  // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              NoiseFloorDb;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/AudioSynesthesia.LoudnessNRT
/// Size: 0x0008 (8 bytes) (0x000080 - 0x000088) align 8 pad: 0x0000
class ULoudnessNRT : public UAudioSynesthesiaNRT
{ 
public:
	class ULoudnessNRTSettings*                        Settings;                                                   // 0x0080   (0x0008)  
	// void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness);                                                   // [0x1ed5840] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);                         // [0x1ed5540] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetLoudnessAtTime(float InSeconds, float& OutLoudness);                                                             // [0x1ed5330] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);                                   // [0x1ed5030] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioSynesthesia.OnsetNRTSettings
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
public:
	bool                                               bDownmixToMono;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              GranularityInSeconds;                                       // 0x0034   (0x0004)  
	float                                              Sensitivity;                                                // 0x0038   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x003C   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/AudioSynesthesia.OnsetNRT
/// Size: 0x0008 (8 bytes) (0x000080 - 0x000088) align 8 pad: 0x0000
class UOnsetNRT : public UAudioSynesthesiaNRT
{ 
public:
	class UOnsetNRTSettings*                           Settings;                                                   // 0x0080   (0x0008)  
	// void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0x1ed5660] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // [0x1ed5150] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

