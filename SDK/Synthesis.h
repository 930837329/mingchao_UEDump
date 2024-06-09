
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x01 (1 bytes)
enum class ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain                                                = 0,
	ESynth1PatchDestination__Osc1Frequency                                           = 1,
	ESynth1PatchDestination__Osc1Pulsewidth                                          = 2,
	ESynth1PatchDestination__Osc2Gain                                                = 3,
	ESynth1PatchDestination__Osc2Frequency                                           = 4,
	ESynth1PatchDestination__Osc2Pulsewidth                                          = 5,
	ESynth1PatchDestination__FilterFrequency                                         = 6,
	ESynth1PatchDestination__FilterQ                                                 = 7,
	ESynth1PatchDestination__Gain                                                    = 8,
	ESynth1PatchDestination__Pan                                                     = 9,
	ESynth1PatchDestination__LFO1Frequency                                           = 10,
	ESynth1PatchDestination__LFO1Gain                                                = 11,
	ESynth1PatchDestination__LFO2Frequency                                           = 12,
	ESynth1PatchDestination__LFO2Gain                                                = 13,
	ESynth1PatchDestination__Count                                                   = 14
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x01 (1 bytes)
enum class ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO1                                                         = 0,
	ESynth1PatchSource__LFO2                                                         = 1,
	ESynth1PatchSource__Envelope                                                     = 2,
	ESynth1PatchSource__BiasEnvelope                                                 = 3,
	ESynth1PatchSource__Count                                                        = 4
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x01 (1 bytes)
enum class ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal                                                    = 0,
	ESynthStereoDelayMode__Cross                                                     = 1,
	ESynthStereoDelayMode__PingPong                                                  = 2,
	ESynthStereoDelayMode__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole                                                   = 0,
	ESynthFilterAlgorithm__StateVariable                                             = 1,
	ESynthFilterAlgorithm__Ladder                                                    = 2,
	ESynthFilterAlgorithm__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x01 (1 bytes)
enum class ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass                                                        = 0,
	ESynthFilterType__HighPass                                                       = 1,
	ESynthFilterType__BandPass                                                       = 2,
	ESynthFilterType__BandStop                                                       = 3,
	ESynthFilterType__Count                                                          = 4
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x01 (1 bytes)
enum class ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone                                               = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq                                            = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq                                         = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ                                            = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain                                           = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain                                           = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq                                           = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq                                           = 7,
	ESynthModEnvBiasPatch__Count                                                     = 8
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x01 (1 bytes)
enum class ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone                                                   = 0,
	ESynthModEnvPatch__PatchToOscFreq                                                = 1,
	ESynthModEnvPatch__PatchToFilterFreq                                             = 2,
	ESynthModEnvPatch__PatchToFilterQ                                                = 3,
	ESynthModEnvPatch__PatchToLFO1Gain                                               = 4,
	ESynthModEnvPatch__PatchToLFO2Gain                                               = 5,
	ESynthModEnvPatch__PatchToLFO1Freq                                               = 6,
	ESynthModEnvPatch__PatchToLFO2Freq                                               = 7,
	ESynthModEnvPatch__Count                                                         = 8
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x01 (1 bytes)
enum class ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone                                                  = 0,
	ESynthLFOPatchType__PatchToGain                                                  = 1,
	ESynthLFOPatchType__PatchToOscFreq                                               = 2,
	ESynthLFOPatchType__PatchToFilterFreq                                            = 3,
	ESynthLFOPatchType__PatchToFilterQ                                               = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth                                         = 5,
	ESynthLFOPatchType__PatchToOscPan                                                = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency                                     = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain                                          = 8,
	ESynthLFOPatchType__Count                                                        = 9
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x01 (1 bytes)
enum class ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync                                                              = 0,
	ESynthLFOMode__OneShot                                                           = 1,
	ESynthLFOMode__Free                                                              = 2,
	ESynthLFOMode__Count                                                             = 3
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x01 (1 bytes)
enum class ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine                                                              = 0,
	ESynthLFOType__UpSaw                                                             = 1,
	ESynthLFOType__DownSaw                                                           = 2,
	ESynthLFOType__Square                                                            = 3,
	ESynthLFOType__Triangle                                                          = 4,
	ESynthLFOType__Exponential                                                       = 5,
	ESynthLFOType__RandomSampleHold                                                  = 6,
	ESynthLFOType__Count                                                             = 7
};

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x01 (1 bytes)
enum class ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine                                                             = 0,
	ESynth1OscType__Saw                                                              = 1,
	ESynth1OscType__Triangle                                                         = 2,
	ESynth1OscType__Square                                                           = 3,
	ESynth1OscType__Noise                                                            = 4,
	ESynth1OscType__Count                                                            = 5
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x01 (1 bytes)
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESourceEffectDynamicsPeakMode__Peak                                              = 2,
	ESourceEffectDynamicsPeakMode__Count                                             = 3
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor                                   = 0,
	ESourceEffectDynamicsProcessorType__Limiter                                      = 1,
	ESourceEffectDynamicsProcessorType__Expander                                     = 2,
	ESourceEffectDynamicsProcessorType__Gate                                         = 3,
	ESourceEffectDynamicsProcessorType__Count                                        = 4
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x01 (1 bytes)
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared                                           = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared                                       = 1,
	EEnvelopeFollowerPeakMode__Peak                                                  = 2,
	EEnvelopeFollowerPeakMode__Count                                                 = 3
};

/// Enum /Script/Synthesis.ESourceEffectFilterParam
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterParam : uint8_t
{
	ESourceEffectFilterParam__FilterFrequency                                        = 0,
	ESourceEffectFilterParam__FilterResonance                                        = 1,
	ESourceEffectFilterParam__Count                                                  = 2
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass                                                 = 0,
	ESourceEffectFilterType__HighPass                                                = 1,
	ESourceEffectFilterType__BandPass                                                = 2,
	ESourceEffectFilterType__BandStop                                                = 3,
	ESourceEffectFilterType__Count                                                   = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole                                              = 0,
	ESourceEffectFilterCircuit__StateVariable                                        = 1,
	ESourceEffectFilterCircuit__Ladder                                               = 2,
	ESourceEffectFilterCircuit__Count                                                = 3
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x01 (1 bytes)
enum class EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide                                                      = 0,
	EStereoChannelMode__LeftRight                                                    = 1,
	EStereoChannelMode__count                                                        = 2
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x01 (1 bytes)
enum class EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine                                                             = 0,
	EPhaserLFOType__UpSaw                                                            = 1,
	EPhaserLFOType__DownSaw                                                          = 2,
	EPhaserLFOType__Square                                                           = 3,
	EPhaserLFOType__Triangle                                                         = 4,
	EPhaserLFOType__Exponential                                                      = 5,
	EPhaserLFOType__RandomSampleHold                                                 = 6,
	EPhaserLFOType__Count                                                            = 7
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x01 (1 bytes)
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine                                             = 0,
	ERingModulatorTypeSourceEffect__Saw                                              = 1,
	ERingModulatorTypeSourceEffect__Triangle                                         = 2,
	ERingModulatorTypeSourceEffect__Square                                           = 3,
	ERingModulatorTypeSourceEffect__Count                                            = 4
};

/// Enum /Script/Synthesis.EStereoDelayFiltertype
/// Size: 0x01 (1 bytes)
enum class EStereoDelayFiltertype : uint8_t
{
	EStereoDelayFiltertype__Lowpass                                                  = 0,
	EStereoDelayFiltertype__Highpass                                                 = 1,
	EStereoDelayFiltertype__Bandpass                                                 = 2,
	EStereoDelayFiltertype__Notch                                                    = 3,
	EStereoDelayFiltertype__Count                                                    = 4
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x01 (1 bytes)
enum class EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal                                                 = 0,
	EStereoDelaySourceEffect__Cross                                                  = 1,
	EStereoDelaySourceEffect__PingPong                                               = 2,
	EStereoDelaySourceEffect__Count                                                  = 3
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x01 (1 bytes)
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize256                            = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize512                            = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize1024                           = 2
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole                                                  = 0,
	ESubmixFilterAlgorithm__StateVariable                                            = 1,
	ESubmixFilterAlgorithm__Ladder                                                   = 2,
	ESubmixFilterAlgorithm__Count                                                    = 3
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x01 (1 bytes)
enum class ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass                                                       = 0,
	ESubmixFilterType__HighPass                                                      = 1,
	ESubmixFilterType__BandPass                                                      = 2,
	ESubmixFilterType__BandStop                                                      = 3,
	ESubmixFilterType__Count                                                         = 4
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x01 (1 bytes)
enum class ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel                                                      = 0,
	ETapLineMode__Panning                                                            = 1,
	ETapLineMode__Disabled                                                           = 2
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x01 (1 bytes)
enum class EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning                                            = 0,
	EGranularSynthSeekType__FromCurrentPosition                                      = 1,
	EGranularSynthSeekType__Count                                                    = 2
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x01 (1 bytes)
enum class EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular                                          = 0,
	EGranularSynthEnvelopeType__Triangle                                             = 1,
	EGranularSynthEnvelopeType__DownwardTriangle                                     = 2,
	EGranularSynthEnvelopeType__UpwardTriangle                                       = 3,
	EGranularSynthEnvelopeType__ExponentialDecay                                     = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease                                  = 5,
	EGranularSynthEnvelopeType__Gaussian                                             = 6,
	EGranularSynthEnvelopeType__Hanning                                              = 7,
	EGranularSynthEnvelopeType__Lanczos                                              = 8,
	EGranularSynthEnvelopeType__Cosine                                               = 9,
	EGranularSynthEnvelopeType__CosineSquared                                        = 10,
	EGranularSynthEnvelopeType__Welch                                                = 11,
	EGranularSynthEnvelopeType__Blackman                                             = 12,
	EGranularSynthEnvelopeType__BlackmanHarris                                       = 13,
	EGranularSynthEnvelopeType__Count                                                = 14
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x01 (1 bytes)
enum class CurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP                                               = 0,
	CurveInterpolationType__LINEAR                                                   = 1,
	CurveInterpolationType__CONSTANT                                                 = 2
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x01 (1 bytes)
enum class ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning                                             = 0,
	ESamplePlayerSeekType__FromCurrentPosition                                       = 1,
	ESamplePlayerSeekType__FromEnd                                                   = 2,
	ESamplePlayerSeekType__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x01 (1 bytes)
enum class ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium                                                           = 0,
	ESynthKnobSize__Large                                                            = 1,
	ESynthKnobSize__Count                                                            = 2
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x01 (1 bytes)
enum class ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light                                                     = 0,
	ESynthSlateColorStyle__Dark                                                      = 1,
	ESynthSlateColorStyle__Count                                                     = 2
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x01 (1 bytes)
enum class ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small                                                       = 0,
	ESynthSlateSizeType__Medium                                                      = 1,
	ESynthSlateSizeType__Large                                                       = 2,
	ESynthSlateSizeType__Count                                                       = 3
};

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FSynth1PatchCable
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	ESynth1PatchDestination                            Destination;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FEpicSynth1Patch
{ 
	ESynth1PatchSource                                 PatchSource;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSynth1PatchCable>                          PatchCables;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00D8 (216 bytes) (0x000008 - 0x0000E0) align 8 pad: 0x0000
struct FModularSynthPreset : FTableRowBase
{ 
	bool                                               bEnablePolyphony : 1;                                       // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	ESynth1OscType                                     Osc1Type;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              Osc1Gain;                                                   // 0x0010   (0x0004)  
	float                                              Osc1Octave;                                                 // 0x0014   (0x0004)  
	float                                              Osc1Semitones;                                              // 0x0018   (0x0004)  
	float                                              Osc1Cents;                                                  // 0x001C   (0x0004)  
	float                                              Osc1PulseWidth;                                             // 0x0020   (0x0004)  
	ESynth1OscType                                     Osc2Type;                                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              Osc2Gain;                                                   // 0x0028   (0x0004)  
	float                                              Osc2Octave;                                                 // 0x002C   (0x0004)  
	float                                              Osc2Semitones;                                              // 0x0030   (0x0004)  
	float                                              Osc2Cents;                                                  // 0x0034   (0x0004)  
	float                                              Osc2PulseWidth;                                             // 0x0038   (0x0004)  
	float                                              Portamento;                                                 // 0x003C   (0x0004)  
	bool                                               bEnableUnison : 1;                                          // 0x0040:0 (0x0001)  
	bool                                               bEnableOscillatorSync : 1;                                  // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Spread;                                                     // 0x0044   (0x0004)  
	float                                              Pan;                                                        // 0x0048   (0x0004)  
	float                                              LFO1Frequency;                                              // 0x004C   (0x0004)  
	float                                              LFO1Gain;                                                   // 0x0050   (0x0004)  
	ESynthLFOType                                      LFO1Type;                                                   // 0x0054   (0x0001)  
	ESynthLFOMode                                      LFO1Mode;                                                   // 0x0055   (0x0001)  
	ESynthLFOPatchType                                 LFO1PatchType;                                              // 0x0056   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0057   (0x0001)  MISSED
	float                                              LFO2Frequency;                                              // 0x0058   (0x0004)  
	float                                              LFO2Gain;                                                   // 0x005C   (0x0004)  
	ESynthLFOType                                      LFO2Type;                                                   // 0x0060   (0x0001)  
	ESynthLFOMode                                      LFO2Mode;                                                   // 0x0061   (0x0001)  
	ESynthLFOPatchType                                 LFO2PatchType;                                              // 0x0062   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1];                                       // 0x0063   (0x0001)  MISSED
	float                                              GainDb;                                                     // 0x0064   (0x0004)  
	float                                              AttackTime;                                                 // 0x0068   (0x0004)  
	float                                              DecayTime;                                                  // 0x006C   (0x0004)  
	float                                              SustainGain;                                                // 0x0070   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0074   (0x0004)  
	ESynthModEnvPatch                                  ModEnvPatchType;                                            // 0x0078   (0x0001)  
	ESynthModEnvBiasPatch                              ModEnvBiasPatchType;                                        // 0x0079   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x007A   (0x0002)  MISSED
	bool                                               bInvertModulationEnvelope : 1;                              // 0x007C:0 (0x0001)  
	bool                                               bInvertModulationEnvelopeBias : 1;                          // 0x007C:1 (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              ModulationEnvelopeDepth;                                    // 0x0080   (0x0004)  
	float                                              ModulationEnvelopeAttackTime;                               // 0x0084   (0x0004)  
	float                                              ModulationEnvelopeDecayTime;                                // 0x0088   (0x0004)  
	float                                              ModulationEnvelopeSustainGain;                              // 0x008C   (0x0004)  
	float                                              ModulationEnvelopeReleaseTime;                              // 0x0090   (0x0004)  
	bool                                               bLegato : 1;                                                // 0x0094:0 (0x0001)  
	bool                                               bRetrigger : 1;                                             // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              FilterFrequency;                                            // 0x0098   (0x0004)  
	float                                              FilterQ;                                                    // 0x009C   (0x0004)  
	ESynthFilterType                                   FilterType;                                                 // 0x00A0   (0x0001)  
	ESynthFilterAlgorithm                              FilterAlgorithm;                                            // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData09_6[0x2];                                       // 0x00A2   (0x0002)  MISSED
	bool                                               bStereoDelayEnabled : 1;                                    // 0x00A4:0 (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x00A5   (0x0003)  MISSED
	ESynthStereoDelayMode                              StereoDelayMode;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              StereoDelayTime;                                            // 0x00AC   (0x0004)  
	float                                              StereoDelayFeedback;                                        // 0x00B0   (0x0004)  
	float                                              StereoDelayWetlevel;                                        // 0x00B4   (0x0004)  
	float                                              StereoDelayRatio;                                           // 0x00B8   (0x0004)  
	bool                                               bChorusEnabled : 1;                                         // 0x00BC:0 (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              ChorusDepth;                                                // 0x00C0   (0x0004)  
	float                                              ChorusFeedback;                                             // 0x00C4   (0x0004)  
	float                                              ChorusFrequency;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData13_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FEpicSynth1Patch>                           Patches;                                                    // 0x00D0   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 pad: 0x0000
struct FModularSynthPresetBankEntry
{ 
	FString                                            PresetName;                                                 // 0x0000   (0x0010)  
	FModularSynthPreset                                Preset;                                                     // 0x0010   (0x00E0)  
};

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UModularSynthPresetBank : public UObject
{ 
public:
	TArray<FModularSynthPresetBankEntry>               Presets;                                                    // 0x0030   (0x0010)  
};

/// Class /Script/Synthesis.ModularSynthLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, FModularSynthPreset& Preset, FString PresetName); // [0x20970c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.ModularSynthComponent
/// Size: 0x06C0 (1728 bytes) (0x0006E0 - 0x000DA0) align 16 pad: 0x0000
class UModularSynthComponent : public USynthComponent
{ 
public:
	int32_t                                            VoiceCount;                                                 // 0x06E0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x6BC];                                     // 0x06E4   (0x06BC)  MISSED
	// void SetSynthPreset(FModularSynthPreset& SynthPreset);                                                                   // [0x20996b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetSustainGain(float SustainGain);                                                                                  // [0x2099630] Final|Native|Public|BlueprintCallable 
	// void SetStereoDelayWetlevel(float DelayWetlevel);                                                                        // [0x20995b0] Final|Native|Public|BlueprintCallable 
	// void SetStereoDelayTime(float DelayTimeMsec);                                                                            // [0x2099530] Final|Native|Public|BlueprintCallable 
	// void SetStereoDelayRatio(float DelayRatio);                                                                              // [0x20994b0] Final|Native|Public|BlueprintCallable 
	// void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);                                                          // [0x2099430] Final|Native|Public|BlueprintCallable 
	// void SetStereoDelayIsEnabled(bool StereoDelayEnabled);                                                                   // [0x20993a0] Final|Native|Public|BlueprintCallable 
	// void SetStereoDelayFeedback(float DelayFeedback);                                                                        // [0x2099320] Final|Native|Public|BlueprintCallable 
	// void SetSpread(float Spread);                                                                                            // [0x20992a0] Final|Native|Public|BlueprintCallable 
	// void SetReleaseTime(float ReleaseTimeMsec);                                                                              // [0x2099220] Final|Native|Public|BlueprintCallable 
	// void SetPortamento(float Portamento);                                                                                    // [0x20991a0] Final|Native|Public|BlueprintCallable 
	// void SetPitchBend(float PitchBend);                                                                                      // [0x2099120] Final|Native|Public|BlueprintCallable 
	// void SetPan(float Pan);                                                                                                  // [0x20990a0] Final|Native|Public|BlueprintCallable 
	// void SetOscType(int32_t OscIndex, ESynth1OscType OscType);                                                               // [0x2098fd0] Final|Native|Public|BlueprintCallable 
	// void SetOscSync(bool bIsSynced);                                                                                         // [0x2098f40] Final|Native|Public|BlueprintCallable 
	// void SetOscSemitones(int32_t OscIndex, float Semitones);                                                                 // [0x2098e70] Final|Native|Public|BlueprintCallable 
	// void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);                                                               // [0x2098da0] Final|Native|Public|BlueprintCallable 
	// void SetOscOctave(int32_t OscIndex, float Octave);                                                                       // [0x2098cd0] Final|Native|Public|BlueprintCallable 
	// void SetOscGainMod(int32_t OscIndex, float OscGainMod);                                                                  // [0x2098c00] Final|Native|Public|BlueprintCallable 
	// void SetOscGain(int32_t OscIndex, float OscGain);                                                                        // [0x2098b30] Final|Native|Public|BlueprintCallable 
	// void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);                                                             // [0x2098a60] Final|Native|Public|BlueprintCallable 
	// void SetOscCents(int32_t OscIndex, float Cents);                                                                         // [0x2098990] Final|Native|Public|BlueprintCallable 
	// void SetModEnvSustainGain(float SustainGain);                                                                            // [0x2098910] Final|Native|Public|BlueprintCallable 
	// void SetModEnvReleaseTime(float Release);                                                                                // [0x2098890] Final|Native|Public|BlueprintCallable 
	// void SetModEnvPatch(ESynthModEnvPatch InPatchType);                                                                      // [0x2098810] Final|Native|Public|BlueprintCallable 
	// void SetModEnvInvert(bool bInvert);                                                                                      // [0x2098780] Final|Native|Public|BlueprintCallable 
	// void SetModEnvDepth(float Depth);                                                                                        // [0x2098700] Final|Native|Public|BlueprintCallable 
	// void SetModEnvDecayTime(float DecayTimeMsec);                                                                            // [0x2098680] Final|Native|Public|BlueprintCallable 
	// void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);                                                              // [0x2098600] Final|Native|Public|BlueprintCallable 
	// void SetModEnvBiasInvert(bool bInvert);                                                                                  // [0x2098570] Final|Native|Public|BlueprintCallable 
	// void SetModEnvAttackTime(float AttackTimeMsec);                                                                          // [0x20984f0] Final|Native|Public|BlueprintCallable 
	// void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType);                                                                // [0x2098420] Final|Native|Public|BlueprintCallable 
	// void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType);                                                     // [0x2098350] Final|Native|Public|BlueprintCallable 
	// void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode);                                                                // [0x2098280] Final|Native|Public|BlueprintCallable 
	// void SetLFOGainMod(int32_t LFOIndex, float GainMod);                                                                     // [0x20981b0] Final|Native|Public|BlueprintCallable 
	// void SetLFOGain(int32_t LFOIndex, float Gain);                                                                           // [0x20980e0] Final|Native|Public|BlueprintCallable 
	// void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);                                                         // [0x2098010] Final|Native|Public|BlueprintCallable 
	// void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);                                                               // [0x2097f40] Final|Native|Public|BlueprintCallable 
	// void SetGainDb(float GainDb);                                                                                            // [0x2097ec0] Final|Native|Public|BlueprintCallable 
	// void SetFilterType(ESynthFilterType FilterType);                                                                         // [0x2097e40] Final|Native|Public|BlueprintCallable 
	// void SetFilterQMod(float FilterQ);                                                                                       // [0x2097dc0] Final|Native|Public|BlueprintCallable 
	// void SetFilterQ(float FilterQ);                                                                                          // [0x2097d40] Final|Native|Public|BlueprintCallable 
	// void SetFilterFrequencyMod(float FilterFrequencyHz);                                                                     // [0x2097cc0] Final|Native|Public|BlueprintCallable 
	// void SetFilterFrequency(float FilterFrequencyHz);                                                                        // [0x2097c40] Final|Native|Public|BlueprintCallable 
	// void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);                                                          // [0x2097bc0] Final|Native|Public|BlueprintCallable 
	// void SetEnableUnison(bool EnableUnison);                                                                                 // [0x2097b30] Final|Native|Public|BlueprintCallable 
	// void SetEnableRetrigger(bool RetriggerEnabled);                                                                          // [0x2097aa0] Final|Native|Public|BlueprintCallable 
	// void SetEnablePolyphony(bool bEnablePolyphony);                                                                          // [0x2097a10] Final|Native|Public|BlueprintCallable 
	// bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled);                                                                  // [0x2097940] Final|Native|Public|BlueprintCallable 
	// void SetEnableLegato(bool LegatoEnabled);                                                                                // [0x20978b0] Final|Native|Public|BlueprintCallable 
	// void SetDecayTime(float DecayTimeMsec);                                                                                  // [0x2097830] Final|Native|Public|BlueprintCallable 
	// void SetChorusFrequency(float Frequency);                                                                                // [0x20977b0] Final|Native|Public|BlueprintCallable 
	// void SetChorusFeedback(float Feedback);                                                                                  // [0x2097730] Final|Native|Public|BlueprintCallable 
	// void SetChorusEnabled(bool EnableChorus);                                                                                // [0x20976a0] Final|Native|Public|BlueprintCallable 
	// void SetChorusDepth(float Depth);                                                                                        // [0x2097620] Final|Native|Public|BlueprintCallable 
	// void SetAttackTime(float AttackTimeMsec);                                                                                // [0x20975a0] Final|Native|Public|BlueprintCallable 
	// void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0x2097480] Final|Native|Public|BlueprintCallable 
	// void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);                                                         // [0x2097360] Final|Native|Public|BlueprintCallable 
	// FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault);     // [0x2097210] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FSourceEffectBitCrusherSettings
{ 
	float                                              CrushedSampleRate;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FSoundModulationDestinationSettings                SampleRateModulation;                                       // 0x0008   (0x0010)  
	float                                              CrushedBits;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FSoundModulationDestinationSettings                BitModulation;                                              // 0x0020   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x0088 (136 bytes) (0x000070 - 0x0000F8) align 8 pad: 0x0000
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x58];                                      // 0x0070   (0x0058)  MISSED
	FSourceEffectBitCrusherSettings                    Settings;                                                   // 0x00C8   (0x0030)  
	// void SetSettings(FSourceEffectBitCrusherBaseSettings& Settings);                                                         // [0x209e9f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetSampleRateModulator(class USoundModulatorBase* Modulator);                                                       // [0x209e960] Final|Native|Public|BlueprintCallable 
	// void SetSampleRate(float SampleRate);                                                                                    // [0x209e8e0] Final|Native|Public|BlueprintCallable 
	// void SetModulationSettings(FSourceEffectBitCrusherSettings& ModulationSettings);                                         // [0x209e730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetBits(float Bits);                                                                                                // [0x209e270] Final|Native|Public|BlueprintCallable 
	// void SetBitModulator(class USoundModulatorBase* Modulator);                                                              // [0x209e1e0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 pad: 0x0000
struct FSourceEffectChorusSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
	FSoundModulationDestinationSettings                DepthModulation;                                            // 0x0018   (0x0010)  
	FSoundModulationDestinationSettings                FrequencyModulation;                                        // 0x0028   (0x0010)  
	FSoundModulationDestinationSettings                FeedbackModulation;                                         // 0x0038   (0x0010)  
	FSoundModulationDestinationSettings                WetModulation;                                              // 0x0048   (0x0010)  
	FSoundModulationDestinationSettings                DryModulation;                                              // 0x0058   (0x0010)  
	FSoundModulationDestinationSettings                SpreadModulation;                                           // 0x0068   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectChorusPreset
/// Size: 0x0118 (280 bytes) (0x000070 - 0x000188) align 8 pad: 0x0000
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0xA0];                                      // 0x0070   (0x00A0)  MISSED
	FSourceEffectChorusSettings                        Settings;                                                   // 0x0110   (0x0078)  
	// void SetWetModulator(class USoundModulatorBase* Modulator);                                                              // [0x209f330] Final|Native|Public|BlueprintCallable 
	// void SetWet(float WetAmount);                                                                                            // [0x209f2b0] Final|Native|Public|BlueprintCallable 
	// void SetSpreadModulator(class USoundModulatorBase* Modulator);                                                           // [0x209f220] Final|Native|Public|BlueprintCallable 
	// void SetSpread(float Spread);                                                                                            // [0x209f1a0] Final|Native|Public|BlueprintCallable 
	// void SetSettings(FSourceEffectChorusBaseSettings& Settings);                                                             // [0x209eaa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetModulationSettings(FSourceEffectChorusSettings& ModulationSettings);                                             // [0x209e7e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetFrequencyModulator(class USoundModulatorBase* Modulator);                                                        // [0x209e6a0] Final|Native|Public|BlueprintCallable 
	// void SetFrequency(float Frequency);                                                                                      // [0x209e620] Final|Native|Public|BlueprintCallable 
	// void SetFeedbackModulator(class USoundModulatorBase* Modulator);                                                         // [0x209e590] Final|Native|Public|BlueprintCallable 
	// void SetFeedback(float Feedback);                                                                                        // [0x209e510] Final|Native|Public|BlueprintCallable 
	// void SetDryModulator(class USoundModulatorBase* Modulator);                                                              // [0x209e480] Final|Native|Public|BlueprintCallable 
	// void SetDry(float DryAmount);                                                                                            // [0x209e400] Final|Native|Public|BlueprintCallable 
	// void SetDepthModulator(class USoundModulatorBase* Modulator);                                                            // [0x209e370] Final|Native|Public|BlueprintCallable 
	// void SetDepth(float Depth);                                                                                              // [0x209e2f0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 pad: 0x0000
struct FSourceEffectDynamicsProcessorSettings
{ 
	ESourceEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESourceEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0008   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x000C   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0010   (0x0004)  
	float                                              Ratio;                                                      // 0x0014   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0018   (0x0004)  
	float                                              InputGainDb;                                                // 0x001C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0020   (0x0004)  
	bool                                               bStereoLinked : 1;                                          // 0x0024:0 (0x0001)  
	bool                                               bAnalogMode : 1;                                            // 0x0024:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x0078 (120 bytes) (0x000070 - 0x0000E8) align 8 pad: 0x0000
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0070   (0x0050)  MISSED
	FSourceEffectDynamicsProcessorSettings             Settings;                                                   // 0x00C0   (0x0028)  
	// void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings);                                                    // [0x209eb50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x0020 (32 bytes) (0x0000C0 - 0x0000E0) align 8 pad: 0x0000
class UEnvelopeFollowerListener : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,1584) /* FMulticastInlineDelegate */ __um(OnEnvelopeFollowerUpdate);                          // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FSourceEffectEnvelopeFollowerSettings
{ 
	float                                              AttackTime;                                                 // 0x0000   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0004   (0x0004)  
	EEnvelopeFollowerPeakMode                          PeakMode;                                                   // 0x0008   (0x0001)  
	bool                                               bIsAnalogMode;                                              // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x0040 (64 bytes) (0x000070 - 0x0000B0) align 8 pad: 0x0000
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x34];                                      // 0x0070   (0x0034)  MISSED
	FSourceEffectEnvelopeFollowerSettings              Settings;                                                   // 0x00A4   (0x000C)  
	// void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);                      // [0x209f3c0] Final|Native|Public|BlueprintCallable 
	// void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings);                                                     // [0x209ecb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);                        // [0x209e150] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FSourceEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FSourceEffectEQSettings
{ 
	TArray<FSourceEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x0048 (72 bytes) (0x000070 - 0x0000B8) align 8 pad: 0x0000
class USourceEffectEQPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0070   (0x0038)  MISSED
	FSourceEffectEQSettings                            Settings;                                                   // 0x00A8   (0x0010)  
	// void SetSettings(FSourceEffectEQSettings& InSettings);                                                                   // [0x209ec00] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FSourceEffectFilterAudioBusModulationSettings
{ 
	class UAudioBus*                                   AudioBus;                                                   // 0x0000   (0x0008)  
	int32_t                                            EnvelopeFollowerAttackTimeMsec;                             // 0x0008   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTimeMsec;                            // 0x000C   (0x0004)  
	float                                              EnvelopeGainMultiplier;                                     // 0x0010   (0x0004)  
	ESourceEffectFilterParam                           FilterParam;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              MinFrequencyModulation;                                     // 0x0018   (0x0004)  
	float                                              MaxFrequencyModulation;                                     // 0x001C   (0x0004)  
	float                                              MinResonanceModulation;                                     // 0x0020   (0x0004)  
	float                                              MaxResonanceModulation;                                     // 0x0024   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FSourceEffectFilterSettings
{ 
	ESourceEffectFilterCircuit                         FilterCircuit;                                              // 0x0000   (0x0001)  
	ESourceEffectFilterType                            FilterType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CutoffFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                      // 0x0010   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x0068 (104 bytes) (0x000070 - 0x0000D8) align 8 pad: 0x0000
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0070   (0x0048)  MISSED
	FSourceEffectFilterSettings                        Settings;                                                   // 0x00B8   (0x0020)  
	// void SetSettings(FSourceEffectFilterSettings& InSettings);                                                               // [0x209ed60] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FSourceEffectFoldbackDistortionSettings
{ 
	float                                              InputGainDb;                                                // 0x0000   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0004   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x0040 (64 bytes) (0x000070 - 0x0000B0) align 8 pad: 0x0000
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x34];                                      // 0x0070   (0x0034)  MISSED
	FSourceEffectFoldbackDistortionSettings            Settings;                                                   // 0x00A4   (0x000C)  
	// void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings);                                                   // [0x209ee30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FSourceEffectMidSideSpreaderSettings
{ 
	float                                              SpreadAmount;                                               // 0x0000   (0x0004)  
	EStereoChannelMode                                 InputMode;                                                  // 0x0004   (0x0001)  
	EStereoChannelMode                                 OutputMode;                                                 // 0x0005   (0x0001)  
	bool                                               bEqualPower;                                                // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0007   (0x0001)  MISSED
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x0038 (56 bytes) (0x000070 - 0x0000A8) align 8 pad: 0x0000
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0070   (0x0030)  MISSED
	FSourceEffectMidSideSpreaderSettings               Settings;                                                   // 0x00A0   (0x0008)  
	// void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings);                                                      // [0x209eee0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FSourceEffectPannerSettings
{ 
	float                                              Spread;                                                     // 0x0000   (0x0004)  
	float                                              Pan;                                                        // 0x0004   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x0038 (56 bytes) (0x000070 - 0x0000A8) align 8 pad: 0x0000
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0070   (0x0030)  MISSED
	FSourceEffectPannerSettings                        Settings;                                                   // 0x00A0   (0x0008)  
	// void SetSettings(FSourceEffectPannerSettings& InSettings);                                                               // [0x209ef90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FSourceEffectPhaserSettings
{ 
	float                                              WetLevel;                                                   // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	EPhaserLFOType                                     LFOType;                                                    // 0x000C   (0x0001)  
	bool                                               UseQuadraturePhase;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x0048 (72 bytes) (0x000070 - 0x0000B8) align 8 pad: 0x0000
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0070   (0x0038)  MISSED
	FSourceEffectPhaserSettings                        Settings;                                                   // 0x00A8   (0x0010)  
	// void SetSettings(FSourceEffectPhaserSettings& InSettings);                                                               // [0x209f040] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FSourceEffectRingModulationSettings
{ 
	ERingModulatorTypeSourceEffect                     ModulatorType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Depth;                                                      // 0x0008   (0x0004)  
	float                                              DryLevel;                                                   // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UAudioBus*                                   AudioBusModulator;                                          // 0x0018   (0x0008)  
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x0068 (104 bytes) (0x000070 - 0x0000D8) align 8 pad: 0x0000
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0070   (0x0048)  MISSED
	FSourceEffectRingModulationSettings                Settings;                                                   // 0x00B8   (0x0020)  
	// void SetSettings(FSourceEffectRingModulationSettings& InSettings);                                                       // [0x209f100] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FSourceEffectSimpleDelaySettings
{ 
	float                                              SpeedOfSound;                                               // 0x0000   (0x0004)  
	float                                              DelayAmount;                                                // 0x0004   (0x0004)  
	float                                              DryAmount;                                                  // 0x0008   (0x0004)  
	float                                              WetAmount;                                                  // 0x000C   (0x0004)  
	float                                              Feedback;                                                   // 0x0010   (0x0004)  
	bool                                               bDelayBasedOnDistance : 1;                                  // 0x0014:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x0058 (88 bytes) (0x000070 - 0x0000C8) align 8 pad: 0x0000
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0070   (0x0040)  MISSED
	FSourceEffectSimpleDelaySettings                   Settings;                                                   // 0x00B0   (0x0018)  
	// void SetSettings(FSourceEffectSimpleDelaySettings& InSettings);                                                          // [0x20a3840] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FSourceEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x0070 (112 bytes) (0x000070 - 0x0000E0) align 8 pad: 0x0000
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x4C];                                      // 0x0070   (0x004C)  MISSED
	FSourceEffectStereoDelaySettings                   Settings;                                                   // 0x00BC   (0x0024)  
	// void SetSettings(FSourceEffectStereoDelaySettings& InSettings);                                                          // [0x20a38f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FSourceEffectWaveShaperSettings
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0004   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x0038 (56 bytes) (0x000070 - 0x0000A8) align 8 pad: 0x0000
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0070   (0x0030)  MISSED
	FSourceEffectWaveShaperSettings                    Settings;                                                   // 0x00A0   (0x0008)  
	// void SetSettings(FSourceEffectWaveShaperSettings& InSettings);                                                           // [0x209ef90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UAudioImpulseResponse : public UObject
{ 
public:
	TArray<float>                                      ImpulseResponse;                                            // 0x0030   (0x0010)  
	int32_t                                            NumChannels;                                                // 0x0040   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x0044   (0x0004)  
	float                                              NormalizationVolumeDb;                                      // 0x0048   (0x0004)  
	bool                                               bTrueStereo;                                                // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	TArray<float>                                      IRData;                                                     // 0x0050   (0x0010)  
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FSubmixEffectConvolutionReverbSettings
{ 
	float                                              NormalizationVolumeDb;                                      // 0x0000   (0x0004)  
	bool                                               bBypass;                                                    // 0x0004   (0x0001)  
	bool                                               bMixInputChannelFormatToImpulseResponseFormat;              // 0x0005   (0x0001)  
	bool                                               bMixReverbOutputToOutputChannelFormat;                      // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0007   (0x0001)  MISSED
	float                                              SurroundRearChannelBleedDb;                                 // 0x0008   (0x0004)  
	bool                                               bInvertRearChannelBleedPhase;                               // 0x000C   (0x0001)  
	bool                                               bSurroundRearChannelFlip;                                   // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	float                                              SurroundRearChannelBleedAmount;                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0018   (0x0008)  
	bool                                               AllowHArdwareAcceleration;                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x0088 (136 bytes) (0x000070 - 0x0000F8) align 8 pad: 0x0000
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0070   (0x0008)  
	FSubmixEffectConvolutionReverbSettings             Settings;                                                   // 0x0078   (0x0028)  
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                  // 0x00A0   (0x0001)  
	bool                                               bEnableHardwareAcceleration;                                // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData00_7[0x56];                                      // 0x00A2   (0x0056)  MISSED
	// void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings);                                                    // [0x20a39c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);                                                 // [0x20a3590] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FSubmixEffectDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	float                                              DelayLength;                                                // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectDelayPreset
/// Size: 0x0050 (80 bytes) (0x000070 - 0x0000C0) align 8 pad: 0x0000
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x34];                                      // 0x0070   (0x0034)  MISSED
	FSubmixEffectDelaySettings                         Settings;                                                   // 0x00A4   (0x000C)  
	FSubmixEffectDelaySettings                         DynamicSettings;                                            // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
	// void SetSettings(FSubmixEffectDelaySettings& InSettings);                                                                // [0x20a3a60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetInterpolationTime(float Time);                                                                                   // [0x20a36b0] Final|Native|Public|BlueprintCallable 
	// void SetDelay(float Length);                                                                                             // [0x20a3210] Final|Native|Public|BlueprintCallable 
	// float GetMaxDelayInMilliseconds();                                                                                       // [0x20a2f90] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FSubmixEffectFilterSettings
{ 
	ESubmixFilterType                                  FilterType;                                                 // 0x0000   (0x0001)  
	ESubmixFilterAlgorithm                             FilterAlgorithm;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x0040 (64 bytes) (0x000070 - 0x0000B0) align 8 pad: 0x0000
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x34];                                      // 0x0070   (0x0034)  MISSED
	FSubmixEffectFilterSettings                        Settings;                                                   // 0x00A4   (0x000C)  
	// void SetSettings(FSubmixEffectFilterSettings& InSettings);                                                               // [0x20a3b20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetFilterType(ESubmixFilterType InType);                                                                            // [0x20a3510] Final|Native|Public|BlueprintCallable 
	// void SetFilterQMod(float InQ);                                                                                           // [0x20a3490] Final|Native|Public|BlueprintCallable 
	// void SetFilterQ(float InQ);                                                                                              // [0x20a3410] Final|Native|Public|BlueprintCallable 
	// void SetFilterCutoffFrequencyMod(float InFrequency);                                                                     // [0x20a3390] Final|Native|Public|BlueprintCallable 
	// void SetFilterCutoffFrequency(float InFrequency);                                                                        // [0x20a3310] Final|Native|Public|BlueprintCallable 
	// void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);                                                             // [0x20a3290] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FSubmixEffectFlexiverbSettings
{ 
	float                                              PreDelay;                                                   // 0x0000   (0x0004)  
	float                                              DecayTime;                                                  // 0x0004   (0x0004)  
	float                                              RoomDampening;                                              // 0x0008   (0x0004)  
	int32_t                                            Complexity;                                                 // 0x000C   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x0048 (72 bytes) (0x000070 - 0x0000B8) align 8 pad: 0x0000
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0070   (0x0038)  MISSED
	FSubmixEffectFlexiverbSettings                     Settings;                                                   // 0x00A8   (0x0010)  
	// void SetSettings(FSubmixEffectFlexiverbSettings& InSettings);                                                            // [0x20a3bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.DynamicsBandSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FDynamicsBandSettings
{ 
	float                                              CrossoverTopFrequency;                                      // 0x0000   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0004   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x0008   (0x0004)  
	float                                              ThresholdDb;                                                // 0x000C   (0x0004)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0014   (0x0004)  
	float                                              InputGainDb;                                                // 0x0018   (0x0004)  
	float                                              OutputGainDb;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectMultibandCompressorSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FSubmixEffectMultibandCompressorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	bool                                               bLinkChannels;                                              // 0x0008   (0x0001)  
	bool                                               bAnalogMode;                                                // 0x0009   (0x0001)  
	bool                                               bFourPole;                                                  // 0x000A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x000B   (0x0005)  MISSED
	TArray<FDynamicsBandSettings>                      Bands;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset
/// Size: 0x0068 (104 bytes) (0x000070 - 0x0000D8) align 8 pad: 0x0000
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0070   (0x0048)  MISSED
	FSubmixEffectMultibandCompressorSettings           Settings;                                                   // 0x00B8   (0x0020)  
	// void SetSettings(FSubmixEffectMultibandCompressorSettings& InSettings);                                                  // [0x20a3c90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectStereoDelaySettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FSubmixEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectStereoDelayPreset
/// Size: 0x0070 (112 bytes) (0x000070 - 0x0000E0) align 8 pad: 0x0000
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x4C];                                      // 0x0070   (0x004C)  MISSED
	FSubmixEffectStereoDelaySettings                   Settings;                                                   // 0x00BC   (0x0024)  
	// void SetSettings(FSubmixEffectStereoDelaySettings& InSettings);                                                          // [0x20a38f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FTapDelayInfo
{ 
	ETapLineMode                                       TapLineMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayLength;                                                // 0x0004   (0x0004)  
	float                                              Gain;                                                       // 0x0008   (0x0004)  
	int32_t                                            OutputChannel;                                              // 0x000C   (0x0004)  
	float                                              PanInDegrees;                                               // 0x0010   (0x0004)  
	int32_t                                            TapId;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FSubmixEffectTapDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	TArray<FTapDelayInfo>                              Taps;                                                       // 0x0008   (0x0010)  
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x0070 (112 bytes) (0x000070 - 0x0000E0) align 8 pad: 0x0000
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0070   (0x0040)  MISSED
	FSubmixEffectTapDelaySettings                      Settings;                                                   // 0x00B0   (0x0018)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x00C8   (0x0018)  MISSED
	// void SetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0x20a3f20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetSettings(FSubmixEffectTapDelaySettings& InSettings);                                                             // [0x20a3d50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void SetInterpolationTime(float Time);                                                                                   // [0x20a3730] Final|Native|Public|BlueprintCallable 
	// void RemoveTap(int32_t TapId);                                                                                           // [0x20a3180] Final|Native|Public|BlueprintCallable 
	// void GetTapIds(TArray<int32_t>& TapIds);                                                                                 // [0x20a3090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void GetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0x20a2fb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// float GetMaxDelayInMilliseconds();                                                                                       // [0xc392a0] Final|Native|Public|BlueprintCallable 
	// void AddTap(int32_t& TapId);                                                                                             // [0x20a2f00] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x02D8 (728 bytes) (0x000008 - 0x0002E0) align 8 pad: 0x0000
struct FSynth2DSliderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        NormalThumbImage;                                           // 0x0008   (0x0090)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x0098   (0x0090)  
	FSlateBrush                                        NormalBarImage;                                             // 0x0128   (0x0090)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x01B8   (0x0090)  
	FSlateBrush                                        BackgroundImage;                                            // 0x0248   (0x0090)  
	float                                              BarThickness;                                               // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02DC   (0x0004)  MISSED
};

/// Class /Script/Synthesis.Synth2DSlider
/// Size: 0x03A0 (928 bytes) (0x000128 - 0x0004C8) align 8 pad: 0x0000
class USynth2DSlider : public UWidget
{ 
public:
	float                                              ValueX;                                                     // 0x0128   (0x0004)  
	float                                              ValueY;                                                     // 0x012C   (0x0004)  
	SDK_UNDEFINED(20,1585) /* FDelegateProperty */     __um(ValueXDelegate);                                       // 0x0130   (0x0014)  
	SDK_UNDEFINED(20,1586) /* FDelegateProperty */     __um(ValueYDelegate);                                       // 0x0144   (0x0014)  
	FSynth2DSliderStyle                                WidgetStyle;                                                // 0x0158   (0x02E0)  
	FLinearColor                                       SliderHandleColor;                                          // 0x0438   (0x0010)  
	bool                                               IndentHandle;                                               // 0x0448   (0x0001)  
	bool                                               Locked;                                                     // 0x0449   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x044A   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x044C   (0x0004)  
	bool                                               IsFocusable;                                                // 0x0450   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0451   (0x0007)  MISSED
	SDK_UNDEFINED(16,1587) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x0458   (0x0010)  
	SDK_UNDEFINED(16,1588) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x0468   (0x0010)  
	SDK_UNDEFINED(16,1589) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x0478   (0x0010)  
	SDK_UNDEFINED(16,1590) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x0488   (0x0010)  
	SDK_UNDEFINED(16,1591) /* FMulticastInlineDelegate */ __um(OnValueChangedX);                                   // 0x0498   (0x0010)  
	SDK_UNDEFINED(16,1592) /* FMulticastInlineDelegate */ __um(OnValueChangedY);                                   // 0x04A8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x04B8   (0x0010)  MISSED
	// void SetValue(FVector2D InValue);                                                                                        // [0x20a4000] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetStepSize(float InValue);                                                                                         // [0x20a3ea0] Final|Native|Public|BlueprintCallable 
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x20a3e10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetLocked(bool InValue);                                                                                            // [0x20a37b0] Final|Native|Public|BlueprintCallable 
	// void SetIndentHandle(bool InValue);                                                                                      // [0x20a3620] Final|Native|Public|BlueprintCallable 
	// FVector2D GetValue();                                                                                                    // [0x20a3140] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x03C0 (960 bytes) (0x0006E0 - 0x000AA0) align 16 pad: 0x0000
class UGranularSynth : public USynthComponent
{ 
public:
	class USoundWave*                                  GranulatedSoundWave;                                        // 0x06E0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x3B8];                                     // 0x06E8   (0x03B8)  MISSED
	// void SetSustainGain(float SustainGain);                                                                                  // [0x20a84e0] Final|Native|Public|BlueprintCallable 
	// void SetSoundWave(class USoundWave* InSoundWave);                                                                        // [0x20a83c0] Final|Native|Public|BlueprintCallable 
	// void SetScrubMode(bool bScrubMode);                                                                                      // [0x20a8220] Final|Native|Public|BlueprintCallable 
	// void SetReleaseTimeMsec(float ReleaseTimeMsec);                                                                          // [0x20a81a0] Final|Native|Public|BlueprintCallable 
	// void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);                           // [0x20a7af0] Final|Native|Public|BlueprintCallable 
	// void SetPlaybackSpeed(float InPlayheadRate);                                                                             // [0x20a7a70] Final|Native|Public|BlueprintCallable 
	// void SetGrainVolume(float BaseVolume, FVector2D VolumeRange);                                                            // [0x20a77e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetGrainsPerSecond(float InGrainsPerSecond);                                                                        // [0x20a78a0] Final|Native|Public|BlueprintCallable 
	// void SetGrainProbability(float InGrainProbability);                                                                      // [0x20a7760] Final|Native|Public|BlueprintCallable 
	// void SetGrainPitch(float BasePitch, FVector2D PitchRange);                                                               // [0x20a76a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetGrainPan(float BasePan, FVector2D PanRange);                                                                     // [0x20a75e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);                                                      // [0x20a7560] Final|Native|Public|BlueprintCallable 
	// void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange);                                                  // [0x20a74a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetDecayTime(float DecayTimeMsec);                                                                                  // [0x20a6b50] Final|Native|Public|BlueprintCallable 
	// void SetAttackTime(float AttackTimeMsec);                                                                                // [0x20a6b50] Final|Native|Public|BlueprintCallable 
	// void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0x20a6370] Final|Native|Public|BlueprintCallable 
	// void NoteOff(float Note, bool bKill);                                                                                    // [0x20a6210] Final|Native|Public|BlueprintCallable 
	// bool IsLoaded();                                                                                                         // [0x20a61b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetSampleDuration();                                                                                               // [0x20a6150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetCurrentPlayheadTime();                                                                                          // [0x20a5bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0148 (328 bytes) (0x000030 - 0x000178) align 8 pad: 0x0000
class UMonoWaveTableSynthPreset : public UObject
{ 
public:
	FString                                            PresetName;                                                 // 0x0030   (0x0010)  
	bool                                               bLockKeyframesToGridBool : 1;                               // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            LockKeyframesToGrid;                                        // 0x0044   (0x0004)  
	int32_t                                            WaveTableResolution;                                        // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FRuntimeFloatCurve>                         WaveTable;                                                  // 0x0050   (0x0010)  
	bool                                               bNormalizeWaveTables : 1;                                   // 0x0060:0 (0x0001)  
	unsigned char                                      UnknownData02_7[0x117];                                     // 0x0061   (0x0117)  MISSED
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0740 (1856 bytes) (0x0006E0 - 0x000E20) align 16 pad: 0x0000
class USynthComponentMonoWaveTable : public USynthComponent
{ 
public:
	SDK_UNDEFINED(16,1593) /* FMulticastInlineDelegate */ __um(OnTableAltered);                                    // 0x06E0   (0x0010)  
	SDK_UNDEFINED(16,1594) /* FMulticastInlineDelegate */ __um(OnNumTablesChanged);                                // 0x06F0   (0x0010)  
	class UMonoWaveTableSynthPreset*                   CurrentPreset;                                              // 0x0700   (0x0008)  
	unsigned char                                      UnknownData00_7[0x718];                                     // 0x0708   (0x0718)  MISSED
	// void SetWaveTablePosition(float InPosition);                                                                             // [0x20a8670] Final|Native|Public|BlueprintCallable 
	// void SetSustainPedalState(bool InSustainPedalState);                                                                     // [0x20a8560] Final|Native|Public|BlueprintCallable 
	// void SetPosLfoType(ESynthLFOType InLfoType);                                                                             // [0x20a7d00] Final|Native|Public|BlueprintCallable 
	// void SetPosLfoFrequency(float InLfoFrequency);                                                                           // [0x20a7c80] Final|Native|Public|BlueprintCallable 
	// void SetPosLfoDepth(float InLfoDepth);                                                                                   // [0x20a7c00] Final|Native|Public|BlueprintCallable 
	// void SetPositionEnvelopeSustainGain(float InSustainGain);                                                                // [0x20a8120] Final|Native|Public|BlueprintCallable 
	// void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);                                                            // [0x20a80a0] Final|Native|Public|BlueprintCallable 
	// void SetPositionEnvelopeInvert(bool bInInvert);                                                                          // [0x20a8010] Final|Native|Public|BlueprintCallable 
	// void SetPositionEnvelopeDepth(float InDepth);                                                                            // [0x20a7f90] Final|Native|Public|BlueprintCallable 
	// void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);                                                                // [0x20a7f10] Final|Native|Public|BlueprintCallable 
	// void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);                                                                  // [0x20a7e80] Final|Native|Public|BlueprintCallable 
	// void SetPositionEnvelopeBiasDepth(float InDepth);                                                                        // [0x20a7e00] Final|Native|Public|BlueprintCallable 
	// void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);                                                              // [0x20a7d80] Final|Native|Public|BlueprintCallable 
	// void SetLowPassFilterResonance(float InNewQ);                                                                            // [0x20a7920] Final|Native|Public|BlueprintCallable 
	// void SetFrequencyWithMidiNote(float InMidiNote);                                                                         // [0x20a7420] Final|Native|Public|BlueprintCallable 
	// void SetFrequencyPitchBend(float FrequencyOffsetCents);                                                                  // [0x20a73a0] Final|Native|Public|BlueprintCallable 
	// void SetFrequency(float FrequencyHz);                                                                                    // [0x20a72a0] Final|Native|Public|BlueprintCallable 
	// void SetFilterEnvelopeSustainGain(float InSustainGain);                                                                  // [0x20a71a0] Final|Native|Public|BlueprintCallable 
	// void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);                                                              // [0x20a7120] Final|Native|Public|BlueprintCallable 
	// void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);                                                                 // [0x20a7220] Final|Native|Public|BlueprintCallable 
	// void SetFilterEnvelopeInvert(bool bInInvert);                                                                            // [0x20a7090] Final|Native|Public|BlueprintCallable 
	// void SetFilterEnvelopeDepth(float InDepth);                                                                              // [0x20a7010] Final|Native|Public|BlueprintCallable 
	// void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);                                                                    // [0x20a6f80] Final|Native|Public|BlueprintCallable 
	// void SetFilterEnvelopeBiasDepth(float InDepth);                                                                          // [0x20a6f00] Final|Native|Public|BlueprintCallable 
	// void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);                                                                // [0x20a6e80] Final|Native|Public|BlueprintCallable 
	// bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);                                           // [0x20a6d70] Final|Native|Public|BlueprintCallable 
	// bool SetCurveTangent(int32_t TableIndex, float InNewTangent);                                                            // [0x20a6ca0] Final|Native|Public|BlueprintCallable 
	// bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex);                            // [0x20a6bd0] Final|Native|Public|BlueprintCallable 
	// void SetAmpEnvelopeSustainGain(float InSustainGain);                                                                     // [0x20a6ad0] Final|Native|Public|BlueprintCallable 
	// void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);                                                                 // [0x20a6a50] Final|Native|Public|BlueprintCallable 
	// void SetAmpEnvelopeInvert(bool bInInvert);                                                                               // [0x20a69c0] Final|Native|Public|BlueprintCallable 
	// void SetAmpEnvelopeDepth(float InDepth);                                                                                 // [0x20a6940] Final|Native|Public|BlueprintCallable 
	// void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);                                                                     // [0x20a68c0] Final|Native|Public|BlueprintCallable 
	// void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);                                                                       // [0x20a6830] Final|Native|Public|BlueprintCallable 
	// void SetAmpEnvelopeBiasDepth(float InDepth);                                                                             // [0x20a67b0] Final|Native|Public|BlueprintCallable 
	// void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);                                                                   // [0x20a6730] Final|Native|Public|BlueprintCallable 
	// void RefreshWaveTable(int32_t Index);                                                                                    // [0x20a6580] Final|Native|Public|BlueprintCallable 
	// void RefreshAllWaveTables();                                                                                             // [0x20a6560] Final|Native|Public|BlueprintCallable 
	// void NoteOn(float InMidiNote, float InVelocity);                                                                         // [0x20a6490] Final|Native|Public|BlueprintCallable 
	// void NoteOff(float InMidiNote);                                                                                          // [0x20a62f0] Final|Native|Public|BlueprintCallable 
	// int32_t GetNumTableEntries();                                                                                            // [0x20a6120] Final|Native|Public|BlueprintCallable 
	// int32_t GetMaxTableIndex();                                                                                              // [0x20a60e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// TArray<float> GetKeyFrameValuesForTable(float TableIndex);                                                               // [0x20a5ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetCurveTangent(int32_t TableIndex);                                                                               // [0x20a5c00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthComponentToneGenerator
/// Size: 0x0020 (32 bytes) (0x0006E0 - 0x000700) align 16 pad: 0x0000
class USynthComponentToneGenerator : public USynthComponent
{ 
public:
	float                                              Frequency;                                                  // 0x06E0   (0x0004)  
	float                                              Volume;                                                     // 0x06E4   (0x0004)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x06E8   (0x0018)  MISSED
	// void SetVolume(float InVolume);                                                                                          // [0x20a85f0] Final|Native|Public|BlueprintCallable 
	// void SetFrequency(float InFrequency);                                                                                    // [0x20a7320] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x0130 (304 bytes) (0x0006E0 - 0x000810) align 16 pad: 0x0000
class USynthSamplePlayer : public USynthComponent
{ 
public:
	class USoundWave*                                  SoundWave;                                                  // 0x06E0   (0x0008)  
	SDK_UNDEFINED(16,1595) /* FMulticastInlineDelegate */ __um(OnSampleLoaded);                                    // 0x06E8   (0x0010)  
	SDK_UNDEFINED(16,1596) /* FMulticastInlineDelegate */ __um(OnSamplePlaybackProgress);                          // 0x06F8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x108];                                     // 0x0708   (0x0108)  MISSED
	// void SetSoundWave(class USoundWave* InSoundWave);                                                                        // [0x20a8450] Final|Native|Public|BlueprintCallable 
	// void SetScrubTimeWidth(float InScrubTimeWidthSec);                                                                       // [0x20a8340] Final|Native|Public|BlueprintCallable 
	// void SetScrubMode(bool bScrubMode);                                                                                      // [0x20a82b0] Final|Native|Public|BlueprintCallable 
	// void SetPitch(float InPitch, float TimeSec);                                                                             // [0x20a79a0] Final|Native|Public|BlueprintCallable 
	// void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);                                              // [0x20a6610] Final|Native|Public|BlueprintCallable 
	// bool IsLoaded();                                                                                                         // [0x20a61e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetSampleDuration();                                                                                               // [0x20a6180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetCurrentPlaybackProgressTime();                                                                                  // [0x20a5ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// float GetCurrentPlaybackProgressPercent();                                                                               // [0x20a5b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);    // [0x20a5f30] Final|Native|Static|Private|BlueprintCallable 
	// float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // [0x20a5d80] Final|Native|Static|Private|BlueprintCallable 
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0250 (592 bytes) (0x000008 - 0x000258) align 8 pad: 0x0000
struct FSynthKnobStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        LargeKnob;                                                  // 0x0008   (0x0090)  
	FSlateBrush                                        LargeKnobOverlay;                                           // 0x0098   (0x0090)  
	FSlateBrush                                        MediumKnob;                                                 // 0x0128   (0x0090)  
	FSlateBrush                                        MediumKnobOverlay;                                          // 0x01B8   (0x0090)  
	float                                              MinValueAngle;                                              // 0x0248   (0x0004)  
	float                                              MaxValueAngle;                                              // 0x024C   (0x0004)  
	ESynthKnobSize                                     KnobSize;                                                   // 0x0250   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0251   (0x0007)  MISSED
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x0320 (800 bytes) (0x000128 - 0x000448) align 8 pad: 0x0000
class USynthKnob : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0128   (0x0004)  
	float                                              StepSize;                                                   // 0x012C   (0x0004)  
	float                                              MouseSpeed;                                                 // 0x0130   (0x0004)  
	float                                              MouseFineTuneSpeed;                                         // 0x0134   (0x0004)  
	bool                                               ShowTooltipInfo : 1;                                        // 0x0138:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0139   (0x0007)  MISSED
	FText                                              ParameterName;                                              // 0x0140   (0x0018)  
	FText                                              ParameterUnits;                                             // 0x0158   (0x0018)  
	SDK_UNDEFINED(20,1597) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x0170   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0184   (0x0004)  MISSED
	FSynthKnobStyle                                    WidgetStyle;                                                // 0x0188   (0x0258)  
	bool                                               Locked;                                                     // 0x03E0   (0x0001)  
	bool                                               IsFocusable;                                                // 0x03E1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x03E2   (0x0006)  MISSED
	SDK_UNDEFINED(16,1598) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x03E8   (0x0010)  
	SDK_UNDEFINED(16,1599) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x03F8   (0x0010)  
	SDK_UNDEFINED(16,1600) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x0408   (0x0010)  
	SDK_UNDEFINED(16,1601) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x0418   (0x0010)  
	SDK_UNDEFINED(16,1602) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x0428   (0x0010)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x0438   (0x0010)  MISSED
	// void SetValue(float InValue);                                                                                            // [0x20a8f60] Final|Native|Public|BlueprintCallable 
	// void SetStepSize(float InValue);                                                                                         // [0x20a8ee0] Final|Native|Public|BlueprintCallable 
	// void SetLocked(bool InValue);                                                                                            // [0x20a8e50] Final|Native|Public|BlueprintCallable 
	// float GetValue();                                                                                                        // [0x20a8e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FPatchId
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherBaseSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FSourceEffectBitCrusherBaseSettings
{ 
	float                                              SampleRate;                                                 // 0x0000   (0x0004)  
	float                                              BitDepth;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectChorusBaseSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FSourceEffectChorusBaseSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SynthSlateStyle
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FSynthSlateStyle : FSlateWidgetStyle
{ 
	ESynthSlateSizeType                                SizeType;                                                   // 0x0008   (0x0001)  
	ESynthSlateColorStyle                              ColorStyle;                                                 // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

