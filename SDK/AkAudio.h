
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
/// dependency: SlateCore
/// dependency: UMG
/// dependency: WwiseObjectUtils
/// dependency: WwiseResourceLoader

/// Enum /Script/AkAudio.EAkCallbackType
/// Size: 0x01 (1 bytes)
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent                                                      = 0,
	EAkCallbackType__Marker                                                          = 2,
	EAkCallbackType__Duration                                                        = 3,
	EAkCallbackType__Starvation                                                      = 5,
	EAkCallbackType__MusicPlayStarted                                                = 7,
	EAkCallbackType__MusicSyncBeat                                                   = 8,
	EAkCallbackType__MusicSyncBar                                                    = 9,
	EAkCallbackType__MusicSyncEntry                                                  = 10,
	EAkCallbackType__MusicSyncExit                                                   = 11,
	EAkCallbackType__MusicSyncGrid                                                   = 12,
	EAkCallbackType__MusicSyncUserCue                                                = 13,
	EAkCallbackType__MusicSyncPoint                                                  = 14,
	EAkCallbackType__MIDIEvent                                                       = 16,
	EAkCallbackType__EnableGetSourcePlayPosition                                     = 20
};

/// Enum /Script/AkAudio.EAkResult
/// Size: 0x01 (1 bytes)
enum class EAkResult : uint8_t
{
	EAkResult__NotImplemented                                                        = 0,
	EAkResult__Success                                                               = 1,
	EAkResult__Fail                                                                  = 2,
	EAkResult__PartialSuccess                                                        = 3,
	EAkResult__NotCompatible                                                         = 4,
	EAkResult__AlreadyConnected                                                      = 5,
	EAkResult__InvalidFile                                                           = 7,
	EAkResult__AudioFileHeaderTooLarge                                               = 8,
	EAkResult__MaxReached                                                            = 9,
	EAkResult__InvalidID                                                             = 14,
	EAkResult__IDNotFound                                                            = 15,
	EAkResult__InvalidInstanceID                                                     = 16,
	EAkResult__NoMoreData                                                            = 17,
	EAkResult__InvalidStateGroup                                                     = 20,
	EAkResult__ChildAlreadyHasAParent                                                = 21,
	EAkResult__InvalidLanguage                                                       = 22,
	EAkResult__CannotAddItseflAsAChild                                               = 23,
	EAkResult__InvalidParameter                                                      = 31,
	EAkResult__ElementAlreadyInList                                                  = 35,
	EAkResult__PathNotFound                                                          = 36,
	EAkResult__PathNoVertices                                                        = 37,
	EAkResult__PathNotRunning                                                        = 38,
	EAkResult__PathNotPaused                                                         = 39,
	EAkResult__PathNodeAlreadyInList                                                 = 40,
	EAkResult__PathNodeNotInList                                                     = 41,
	EAkResult__DataNeeded                                                            = 43,
	EAkResult__NoDataNeeded                                                          = 44,
	EAkResult__DataReady                                                             = 45,
	EAkResult__NoDataReady                                                           = 46,
	EAkResult__InsufficientMemory                                                    = 52,
	EAkResult__Cancelled                                                             = 53,
	EAkResult__UnknownBankID                                                         = 54,
	EAkResult__BankReadError                                                         = 56,
	EAkResult__InvalidSwitchType                                                     = 57,
	EAkResult__FormatNotReady                                                        = 63,
	EAkResult__WrongBankVersion                                                      = 64,
	EAkResult__FileNotFound                                                          = 66,
	EAkResult__DeviceNotReady                                                        = 67,
	EAkResult__BankAlreadyLoaded                                                     = 69,
	EAkResult__RenderedFX                                                            = 71,
	EAkResult__ProcessNeeded                                                         = 72,
	EAkResult__ProcessDone                                                           = 73,
	EAkResult__MemManagerNotInitialized                                              = 74,
	EAkResult__StreamMgrNotInitialized                                               = 75,
	EAkResult__SSEInstructionsNotSupported                                           = 76,
	EAkResult__Busy                                                                  = 77,
	EAkResult__UnsupportedChannelConfig                                              = 78,
	EAkResult__PluginMediaNotAvailable                                               = 79,
	EAkResult__MustBeVirtualized                                                     = 80,
	EAkResult__CommandTooLarge                                                       = 81,
	EAkResult__RejectedByFilter                                                      = 82,
	EAkResult__InvalidCustomPlatformName                                             = 83,
	EAkResult__DLLCannotLoad                                                         = 84,
	EAkResult__DLLPathNotFound                                                       = 85,
	EAkResult__NoJavaVM                                                              = 86,
	EAkResult__OpenSLError                                                           = 87,
	EAkResult__PluginNotRegistered                                                   = 88,
	EAkResult__DataAlignmentError                                                    = 89
};

/// Enum /Script/AkAudio.EAkAndroidAudioAPI
/// Size: 0x01 (1 bytes)
enum class EAkAndroidAudioAPI : uint8_t
{
	EAkAndroidAudioAPI__AAudio                                                       = 0,
	EAkAndroidAudioAPI__OpenSL_ES                                                    = 1
};

/// Enum /Script/AkAudio.EAkAudioSessionMode
/// Size: 0x04 (4 bytes)
enum class EAkAudioSessionMode : uint32_t
{
	EAkAudioSessionMode__Default                                                     = 0,
	EAkAudioSessionMode__VoiceChat                                                   = 1,
	EAkAudioSessionMode__GameChat                                                    = 2,
	EAkAudioSessionMode__VideoRecording                                              = 3,
	EAkAudioSessionMode__Measurement                                                 = 4,
	EAkAudioSessionMode__MoviePlayback                                               = 5,
	EAkAudioSessionMode__VideoChat                                                   = 6
};

/// Enum /Script/AkAudio.EAkAudioSessionCategoryOptions
/// Size: 0x01 (1 bytes)
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	EAkAudioSessionCategoryOptions__MixWithOthers                                    = 0,
	EAkAudioSessionCategoryOptions__DuckOthers                                       = 1,
	EAkAudioSessionCategoryOptions__AllowBluetooth                                   = 2,
	EAkAudioSessionCategoryOptions__DefaultToSpeaker                                 = 3
};

/// Enum /Script/AkAudio.EAkAudioSessionCategory
/// Size: 0x04 (4 bytes)
enum class EAkAudioSessionCategory : uint32_t
{
	EAkAudioSessionCategory__Ambient                                                 = 0,
	EAkAudioSessionCategory__SoloAmbient                                             = 1,
	EAkAudioSessionCategory__PlayAndRecord                                           = 2,
	EAkAudioSessionCategory__Playback                                                = 3
};

/// Enum /Script/AkAudio.AkCodecId
/// Size: 0x01 (1 bytes)
enum class AkCodecId : uint8_t
{
	AkCodecId__None                                                                  = 0,
	AkCodecId__PCM                                                                   = 1,
	AkCodecId__ADPCM                                                                 = 2,
	AkCodecId__XMA                                                                   = 3,
	AkCodecId__Vorbis                                                                = 4,
	AkCodecId__ATRAC9                                                                = 12,
	AkCodecId__OpusNX                                                                = 17,
	AkCodecId__AkOpus                                                                = 19,
	AkCodecId__AkOpusWEM                                                             = 20
};

/// Enum /Script/AkAudio.EAkMidiCcValues
/// Size: 0x01 (1 bytes)
enum class EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse                                        = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse                                          = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse                                        = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse                                             = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse                                         = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse                                        = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse                                         = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse                                            = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse                                           = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse                                             = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse                                       = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse                                        = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse                                       = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse                                       = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse                                            = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse                                            = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1                                              = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2                                              = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3                                              = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4                                              = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse                                            = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse                                            = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse                                            = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse                                            = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse                                            = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse                                            = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse                                            = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse                                            = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse                                            = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse                                            = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse                                            = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse                                            = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine                                          = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine                                            = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine                                          = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine                                               = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine                                           = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine                                          = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine                                           = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine                                              = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine                                             = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine                                               = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine                                         = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine                                          = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine                                         = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine                                         = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine                                              = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine                                              = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine                                              = 52,
	EAkMidiCcValues__AkMidiCcCtrl21Fine                                              = 53,
	EAkMidiCcValues__AkMidiCcCtrl22Fine                                              = 54,
	EAkMidiCcValues__AkMidiCcCtrl23Fine                                              = 55,
	EAkMidiCcValues__AkMidiCcCtrl24Fine                                              = 56,
	EAkMidiCcValues__AkMidiCcCtrl25Fine                                              = 57,
	EAkMidiCcValues__AkMidiCcCtrl26Fine                                              = 58,
	EAkMidiCcValues__AkMidiCcCtrl27Fine                                              = 59,
	EAkMidiCcValues__AkMidiCcCtrl28Fine                                              = 60,
	EAkMidiCcValues__AkMidiCcCtrl29Fine                                              = 61,
	EAkMidiCcValues__AkMidiCcCtrl30Fine                                              = 62,
	EAkMidiCcValues__AkMidiCcCtrl31Fine                                              = 63,
	EAkMidiCcValues__AkMidiCcHoldPedal                                               = 64,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff                                         = 65,
	EAkMidiCcValues__AkMidiCcSustenutoPedal                                          = 66,
	EAkMidiCcValues__AkMidiCcSoftPedal                                               = 67,
	EAkMidiCcValues__AkMidiCcLegatoPedal                                             = 68,
	EAkMidiCcValues__AkMidiCcHoldPedal2                                              = 69,
	EAkMidiCcValues__AkMidiCcSoundVariation                                          = 70,
	EAkMidiCcValues__AkMidiCcSoundTimbre                                             = 71,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime                                        = 72,
	EAkMidiCcValues__AkMidiCcSoundAttackTime                                         = 73,
	EAkMidiCcValues__AkMidiCcSoundBrightness                                         = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl6                                              = 75,
	EAkMidiCcValues__AkMidiCcSoundCtrl7                                              = 76,
	EAkMidiCcValues__AkMidiCcSoundCtrl8                                              = 77,
	EAkMidiCcValues__AkMidiCcSoundCtrl9                                              = 78,
	EAkMidiCcValues__AkMidiCcSoundCtrl10                                             = 79,
	EAkMidiCcValues__AkMidiCcGeneralButton1                                          = 80,
	EAkMidiCcValues__AkMidiCcGeneralButton2                                          = 81,
	EAkMidiCcValues__AkMidiCcGeneralButton3                                          = 82,
	EAkMidiCcValues__AkMidiCcGeneralButton4                                          = 83,
	EAkMidiCcValues__AkMidiCcReverbLevel                                             = 91,
	EAkMidiCcValues__AkMidiCcTremoloLevel                                            = 92,
	EAkMidiCcValues__AkMidiCcChorusLevel                                             = 93,
	EAkMidiCcValues__AkMidiCcCelesteLevel                                            = 94,
	EAkMidiCcValues__AkMidiCcPhaserLevel                                             = 95,
	EAkMidiCcValues__AkMidiCcDataButtonP1                                            = 96,
	EAkMidiCcValues__AkMidiCcDataButtonM1                                            = 97,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse                                       = 98,
	EAkMidiCcValues__AkMidiCcNonRegisterFine                                         = 99,
	EAkMidiCcValues__AkMidiCcAllSoundOff                                             = 120,
	EAkMidiCcValues__AkMidiCcAllControllersOff                                       = 121,
	EAkMidiCcValues__AkMidiCcLocalKeyboard                                           = 122,
	EAkMidiCcValues__AkMidiCcAllNotesOff                                             = 123,
	EAkMidiCcValues__AkMidiCcOmniModeOff                                             = 124,
	EAkMidiCcValues__AkMidiCcOmniModeOn                                              = 125,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn                                        = 126,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn                                        = 127
};

/// Enum /Script/AkAudio.EAkMidiEventType
/// Size: 0x01 (1 bytes)
enum class EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeInvalid                                         = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff                                         = 128,
	EAkMidiEventType__AkMidiEventTypeNoteOn                                          = 144,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch                                  = 160,
	EAkMidiEventType__AkMidiEventTypeController                                      = 176,
	EAkMidiEventType__AkMidiEventTypeProgramChange                                   = 192,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch                               = 208,
	EAkMidiEventType__AkMidiEventTypePitchBend                                       = 224,
	EAkMidiEventType__AkMidiEventTypeSysex                                           = 240,
	EAkMidiEventType__AkMidiEventTypeEscape                                          = 247,
	EAkMidiEventType__AkMidiEventTypeMeta                                            = 255
};

/// Enum /Script/AkAudio.ERTPCValueType
/// Size: 0x01 (1 bytes)
enum class ERTPCValueType : uint8_t
{
	ERTPCValueType__Default                                                          = 0,
	ERTPCValueType__Global                                                           = 1,
	ERTPCValueType__GameObject                                                       = 2,
	ERTPCValueType__PlayingID                                                        = 3,
	ERTPCValueType__Unavailable                                                      = 4
};

/// Enum /Script/AkAudio.EAkCurveInterpolation
/// Size: 0x01 (1 bytes)
enum class EAkCurveInterpolation : uint8_t
{
	EAkCurveInterpolation__Log3                                                      = 0,
	EAkCurveInterpolation__Sine                                                      = 1,
	EAkCurveInterpolation__Log1                                                      = 2,
	EAkCurveInterpolation__InvSCurve                                                 = 3,
	EAkCurveInterpolation__Linear                                                    = 4,
	EAkCurveInterpolation__SCurve                                                    = 5,
	EAkCurveInterpolation__Exp1                                                      = 6,
	EAkCurveInterpolation__SineRecip                                                 = 7,
	EAkCurveInterpolation__Exp3                                                      = 8,
	EAkCurveInterpolation__LastFadeCurve                                             = 8,
	EAkCurveInterpolation__Constant                                                  = 9
};

/// Enum /Script/AkAudio.AkActionOnEventType
/// Size: 0x01 (1 bytes)
enum class AkActionOnEventType : uint8_t
{
	AkActionOnEventType__Stop                                                        = 0,
	AkActionOnEventType__Pause                                                       = 1,
	AkActionOnEventType__Resume                                                      = 2,
	AkActionOnEventType__Break                                                       = 3,
	AkActionOnEventType__ReleaseEnvelope                                             = 4
};

/// Enum /Script/AkAudio.AkMultiPositionType
/// Size: 0x01 (1 bytes)
enum class AkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource                                                = 0,
	AkMultiPositionType__MultiSources                                                = 1,
	AkMultiPositionType__MultiDirections                                             = 2
};

/// Enum /Script/AkAudio.AkSpeakerConfiguration
/// Size: 0x04 (4 bytes)
enum class AkSpeakerConfiguration : uint32_t
{
	AkSpeakerConfiguration__Ak_Speaker_Front_Left                                    = 1,
	AkSpeakerConfiguration__Ak_Speaker_Front_Right                                   = 2,
	AkSpeakerConfiguration__Ak_Speaker_Front_Center                                  = 4,
	AkSpeakerConfiguration__Ak_Speaker_Low_Frequency                                 = 8,
	AkSpeakerConfiguration__Ak_Speaker_Back_Left                                     = 16,
	AkSpeakerConfiguration__Ak_Speaker_Back_Right                                    = 32,
	AkSpeakerConfiguration__Ak_Speaker_Back_Center                                   = 256,
	AkSpeakerConfiguration__Ak_Speaker_Side_Left                                     = 512,
	AkSpeakerConfiguration__Ak_Speaker_Side_Right                                    = 1024,
	AkSpeakerConfiguration__Ak_Speaker_Top                                           = 2048,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left                             = 4096,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center                           = 8192,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right                            = 16384,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left                              = 32768,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center                            = 65536,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right                             = 131072
};

/// Enum /Script/AkAudio.AkChannelConfiguration
/// Size: 0x01 (1 bytes)
enum class AkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent                                                = 0,
	AkChannelConfiguration__Ak_MainMix                                               = 1,
	AkChannelConfiguration__Ak_Passthrough                                           = 2,
	AkChannelConfiguration__Ak_LFE                                                   = 3,
	AkChannelConfiguration__AK_Audio_Objects                                         = 4,
	AkChannelConfiguration__Ak_1                                                     = 5,
	AkChannelConfiguration__Ak_2                                                     = 6,
	AkChannelConfiguration__Ak_28                                                    = 7,
	AkChannelConfiguration__Ak_3                                                     = 8,
	AkChannelConfiguration__Ak_310                                                   = 9,
	AkChannelConfiguration__Ak_4                                                     = 10,
	AkChannelConfiguration__Ak_412                                                   = 11,
	AkChannelConfiguration__Ak_5                                                     = 12,
	AkChannelConfiguration__Ak_514                                                   = 13,
	AkChannelConfiguration__Ak_7                                                     = 14,
	AkChannelConfiguration__Ak_5_1                                                   = 15,
	AkChannelConfiguration__Ak_7_1                                                   = 16,
	AkChannelConfiguration__Ak_7_118                                                 = 17,
	AkChannelConfiguration__Ak_Auro_9                                                = 18,
	AkChannelConfiguration__Ak_Auro_10                                               = 19,
	AkChannelConfiguration__Ak_Auro_11                                               = 20,
	AkChannelConfiguration__Ak_Auro_13                                               = 21,
	AkChannelConfiguration__Ak_Ambisonics_1st_order                                  = 22,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order                                  = 23,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order                                  = 24,
	AkChannelConfiguration__Ak_Ambisonics_4th_order                                  = 25,
	AkChannelConfiguration__Ak_Ambisonics_5th_order                                  = 26
};

/// Enum /Script/AkAudio.AkAcousticPortalState
/// Size: 0x01 (1 bytes)
enum class AkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed                                                    = 0,
	AkAcousticPortalState__Open                                                      = 1
};

/// Enum /Script/AkAudio.PanningRule
/// Size: 0x01 (1 bytes)
enum class PanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers                                                = 0,
	PanningRule__PanningRule_Headphones                                              = 1
};

/// Enum /Script/AkAudio.EAkAudioContext
/// Size: 0x01 (1 bytes)
enum class EAkAudioContext : uint8_t
{
	EAkAudioContext__Foreign                                                         = 0,
	EAkAudioContext__GameplayAudio                                                   = 1,
	EAkAudioContext__EditorAudio                                                     = 2,
	EAkAudioContext__AlwaysActive                                                    = 3
};

/// Enum /Script/AkAudio.AkMeshType
/// Size: 0x01 (1 bytes)
enum class AkMeshType : uint8_t
{
	AkMeshType__StaticMesh                                                           = 0,
	AkMeshType__CollisionMesh                                                        = 1
};

/// Enum /Script/AkAudio.EAkCommSystem
/// Size: 0x04 (4 bytes)
enum class EAkCommSystem : uint32_t
{
	EAkCommSystem__Socket                                                            = 0,
	EAkCommSystem__HTCS                                                              = 1
};

/// Enum /Script/AkAudio.EAkChannelMask
/// Size: 0x01 (1 bytes)
enum class EAkChannelMask : uint8_t
{
	EAkChannelMask__FrontLeft                                                        = 0,
	EAkChannelMask__FrontRight                                                       = 1,
	EAkChannelMask__FrontCenter                                                      = 2,
	EAkChannelMask__LowFrequency                                                     = 3,
	EAkChannelMask__BackLeft                                                         = 4,
	EAkChannelMask__BackRight                                                        = 5,
	EAkChannelMask__BackCenter                                                       = 8,
	EAkChannelMask__SideLeft                                                         = 9,
	EAkChannelMask__SideRight                                                        = 10,
	EAkChannelMask__Top                                                              = 11,
	EAkChannelMask__HeightFrontLeft                                                  = 12,
	EAkChannelMask__HeightFrontCenter                                                = 13,
	EAkChannelMask__HeightFrontRight                                                 = 14,
	EAkChannelMask__HeightBackLeft                                                   = 15,
	EAkChannelMask__HeightBackCenter                                                 = 16,
	EAkChannelMask__HeightBackRight                                                  = 17
};

/// Enum /Script/AkAudio.EAkChannelConfigType
/// Size: 0x04 (4 bytes)
enum class EAkChannelConfigType : uint32_t
{
	EAkChannelConfigType__Anonymous                                                  = 0,
	EAkChannelConfigType__Standard                                                   = 1,
	EAkChannelConfigType__Ambisonic                                                  = 2
};

/// Enum /Script/AkAudio.EAkPanningRule
/// Size: 0x04 (4 bytes)
enum class EAkPanningRule : uint32_t
{
	EAkPanningRule__Speakers                                                         = 0,
	EAkPanningRule__Headphones                                                       = 1
};

/// Enum /Script/AkAudio.EAkUnrealAudioRouting
/// Size: 0x04 (4 bytes)
enum class EAkUnrealAudioRouting : uint32_t
{
	EAkUnrealAudioRouting__Custom                                                    = 0,
	EAkUnrealAudioRouting__Separate                                                  = 1,
	EAkUnrealAudioRouting__AudioLink                                                 = 2,
	EAkUnrealAudioRouting__AudioMixer                                                = 3,
	EAkUnrealAudioRouting__EnableWwiseOnly                                           = 4,
	EAkUnrealAudioRouting__EnableUnrealOnly                                          = 5
};

/// Enum /Script/AkAudio.EAkCollisionChannel
/// Size: 0x01 (1 bytes)
enum class EAkCollisionChannel : uint8_t
{
	EAKCC_WorldStatic                                                                = 0,
	EAKCC_WorldDynamic                                                               = 1,
	EAKCC_Pawn                                                                       = 2,
	EAKCC_Visibility                                                                 = 3,
	EAKCC_Camera                                                                     = 4,
	EAKCC_PhysicsBody                                                                = 5,
	EAKCC_Vehicle                                                                    = 6,
	EAKCC_Destructible                                                               = 7,
	EAKCC_UseIntegrationSettingsDefault                                              = 8
};

/// Enum /Script/AkAudio.EAkFitToGeometryMode
/// Size: 0x01 (1 bytes)
enum class EAkFitToGeometryMode : uint8_t
{
	EAkFitToGeometryMode__OrientedBox                                                = 0,
	EAkFitToGeometryMode__AlignedBox                                                 = 1,
	EAkFitToGeometryMode__ConvexPolyhedron                                           = 2
};

/// Class /Script/AkAudio.AkPortalComponent
/// Size: 0x00C8 (200 bytes) (0x000218 - 0x0002E0) align 16 pad: 0x0000
class UAkPortalComponent : public USceneComponent
{ 
public:
	bool                                               bDynamic;                                                   // 0x0218   (0x0001)  
	AkAcousticPortalState                              InitialState;                                               // 0x0219   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x021A   (0x0002)  MISSED
	float                                              ObstructionRefreshInterval;                                 // 0x021C   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     ObstructionCollisionChannel;                                // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_7[0xBF];                                      // 0x0221   (0x00BF)  MISSED
	// bool PortalPlacementValid();                                                                                             // [0x14b2620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void OpenPortal();                                                                                                       // [0x14b2600] Final|Native|Public|BlueprintCallable 
	// class UPrimitiveComponent* GetPrimitiveParent();                                                                         // [0x14b2470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// AkAcousticPortalState GetCurrentState();                                                                                 // [0x14b2440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void ClosePortal();                                                                                                      // [0x14b2160] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAcousticPortal
/// Size: 0x0010 (16 bytes) (0x0002E0 - 0x0002F0) align 8 pad: 0x0000
class AAkAcousticPortal : public AVolume
{ 
public:
	class UAkPortalComponent*                          Portal;                                                     // 0x02E0   (0x0008)  
	AkAcousticPortalState                              InitialState;                                               // 0x02E8   (0x0001)  
	bool                                               bRequiresStateMigration;                                    // 0x02E9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x02EA   (0x0006)  MISSED
	// void OpenPortal();                                                                                                       // [0x14b25e0] Final|Native|Public|BlueprintCallable 
	// AkAcousticPortalState GetCurrentState();                                                                                 // [0x14b2410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void ClosePortal();                                                                                                      // [0x14b2140] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAudioType
/// Size: 0x0028 (40 bytes) (0x000030 - 0x000058) align 8 pad: 0x0000
class UAkAudioType : public UObject
{ 
public:
	bool                                               bAutoLoad;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<class UObject*>                             UserData;                                                   // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0048   (0x0010)  MISSED
	// void UnloadData(bool bAsync);                                                                                            // [0x14b3b90] Native|Public|BlueprintCallable 
	// void LoadData();                                                                                                         // [0x14b2530] Native|Public|BlueprintCallable 
	// int32_t GetWwiseShortID();                                                                                               // [0x14b24a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAcousticTexture
/// Size: 0x0010 (16 bytes) (0x000058 - 0x000068) align 8 pad: 0x0000
class UAkAcousticTexture : public UAkAudioType
{ 
public:
	FWwiseAcousticTextureCookedData                    AcousticTextureCookedData;                                  // 0x0058   (0x0010)  
};

/// Class /Script/AkAudio.AkAcousticTextureSetComponent
/// Size: 0x0018 (24 bytes) (0x000218 - 0x000230) align 16 pad: 0x0000
class UAkAcousticTextureSetComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0218   (0x0018)  MISSED
};

/// Class /Script/AkAudio.AkAmbientSound
/// Size: 0x0040 (64 bytes) (0x0002A8 - 0x0002E8) align 8 pad: 0x0000
class AAkAmbientSound : public AActor
{ 
public:
	class UAkAudioEvent*                               AkAudioEvent;                                               // 0x02A8   (0x0008)  
	class UAkComponent*                                AkComponent;                                                // 0x02B0   (0x0008)  
	bool                                               StopWhenOwnerIsDestroyed;                                   // 0x02B8   (0x0001)  
	bool                                               AutoPost;                                                   // 0x02B9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2E];                                      // 0x02BA   (0x002E)  MISSED
	// void StopAmbientSound();                                                                                                 // [0x14b3b70] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// void StartAmbientSound();                                                                                                // [0x14b3b50] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkMainOutputSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FAkMainOutputSettings
{ 
	FString                                            AudioDeviceShareSet;                                        // 0x0000   (0x0010)  
	uint32_t                                           DeviceID;                                                   // 0x0010   (0x0004)  
	EAkPanningRule                                     PanningRule;                                                // 0x0014   (0x0004)  
	EAkChannelConfigType                               ChannelConfigType;                                          // 0x0018   (0x0004)  
	uint32_t                                           ChannelMask;                                                // 0x001C   (0x0004)  
	uint32_t                                           NumberOfChannels;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkSpatialAudioSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 pad: 0x0000
struct FAkSpatialAudioSettings
{ 
	uint32_t                                           MaxSoundPropagationDepth;                                   // 0x0000   (0x0004)  
	float                                              MovementThreshold;                                          // 0x0004   (0x0004)  
	uint32_t                                           NumberOfPrimaryRays;                                        // 0x0008   (0x0004)  
	uint32_t                                           ReflectionOrder;                                            // 0x000C   (0x0004)  
	uint32_t                                           DiffractionOrder;                                           // 0x0010   (0x0004)  
	uint32_t                                           DiffractionOnReflectionsOrder;                              // 0x0014   (0x0004)  
	float                                              MaximumPathLength;                                          // 0x0018   (0x0004)  
	float                                              CPULimitPercentage;                                         // 0x001C   (0x0004)  
	uint32_t                                           LoadBalancingSpread;                                        // 0x0020   (0x0004)  
	bool                                               EnableGeometricDiffractionAndTransmission;                  // 0x0024   (0x0001)  
	bool                                               CalcEmitterVirtualPosition;                                 // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Struct /Script/AkAudio.AkCommonInitializationSettings
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 pad: 0x0000
struct FAkCommonInitializationSettings
{ 
	uint32_t                                           MaximumNumberOfMemoryPools;                                 // 0x0000   (0x0004)  
	uint32_t                                           MaximumNumberOfPositioningPaths;                            // 0x0004   (0x0004)  
	uint32_t                                           CommandQueueSize;                                           // 0x0008   (0x0004)  
	uint32_t                                           SamplesPerFrame;                                            // 0x000C   (0x0004)  
	FAkMainOutputSettings                              MainOutputSettings;                                         // 0x0010   (0x0028)  
	float                                              StreamingLookAheadRatio;                                    // 0x0038   (0x0004)  
	uint16_t                                           NumberOfRefillsInVoice;                                     // 0x003C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	FAkSpatialAudioSettings                            SpatialAudioSettings;                                       // 0x0040   (0x0028)  
};

/// Struct /Script/AkAudio.AkCommonInitializationSettingsWithSampleRate
/// Size: 0x0008 (8 bytes) (0x000068 - 0x000070) align 8 pad: 0x0000
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings
{ 
	uint32_t                                           SampleRate;                                                 // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkCommunicationSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FAkCommunicationSettings
{ 
	uint32_t                                           PoolSize;                                                   // 0x0000   (0x0004)  
	uint16_t                                           DiscoveryBroadcastPort;                                     // 0x0004   (0x0002)  
	uint16_t                                           CommandPort;                                                // 0x0006   (0x0002)  
	FString                                            NetworkName;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithSystemInitialization
/// Size: 0x0008 (8 bytes) (0x000018 - 0x000020) align 8 pad: 0x0000
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings
{ 
	bool                                               InitializeSystemComms;                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettings
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FAkAdvancedInitializationSettings
{ 
	uint32_t                                           IO_MemorySize;                                              // 0x0000   (0x0004)  
	uint32_t                                           IO_Granularity;                                             // 0x0004   (0x0004)  
	float                                              TargetAutoStreamBufferLength;                               // 0x0008   (0x0004)  
	bool                                               UseStreamCache;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	uint32_t                                           MaximumPinnedBytesInCache;                                  // 0x0010   (0x0004)  
	bool                                               EnableGameSyncPreparation;                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	uint32_t                                           ContinuousPlaybackLookAhead;                                // 0x0018   (0x0004)  
	uint32_t                                           MonitorQueuePoolSize;                                       // 0x001C   (0x0004)  
	uint32_t                                           MaximumHardwareTimeoutMs;                                   // 0x0020   (0x0004)  
	bool                                               DebugOutOfRangeCheckEnabled;                                // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              DebugOutOfRangeLimit;                                       // 0x0028   (0x0004)  
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
/// Size: 0x000C (12 bytes) (0x00002C - 0x000038) align 4 pad: 0x0000
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings
{ 
	bool                                               EnableMultiCoreRendering;                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	uint32_t                                           MaxNumJobWorkers;                                           // 0x0030   (0x0004)  
	uint32_t                                           JobWorkerMaxExecutionTimeUSec;                              // 0x0034   (0x0004)  
};

/// Struct /Script/AkAudio.AkAndroidAdvancedInitializationSettings
/// Size: 0x0008 (8 bytes) (0x000038 - 0x000040) align 4 pad: 0x0000
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           AudioAPI;                                                   // 0x0038   (0x0004)  
	bool                                               RoundFrameSizeToHardwareSize;                               // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/AkAudio.AkAndroidInitializationSettings
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x000108) align 8 pad: 0x0000
class UAkAndroidInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkAndroidAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C8   (0x0040)  
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x14b2550] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPlatformInfo
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000078) align 8 pad: 0x0000
class UAkPlatformInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0030   (0x0048)  MISSED
};

/// Class /Script/AkAudio.AkAndroidPlatformInfo
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkAudioBank
/// Size: 0x0008 (8 bytes) (0x000058 - 0x000060) align 8 pad: 0x0000
class UAkAudioBank : public UAkAudioType
{ 
public:
	bool                                               AutoLoad;                                                   // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/AkAudio.AkAudioEvent
/// Size: 0x0080 (128 bytes) (0x000058 - 0x0000D8) align 8 pad: 0x0000
class UAkAudioEvent : public UAkAudioType
{ 
public:
	float                                              MaxAttenuationRadius;                                       // 0x0058   (0x0004)  
	bool                                               IsInfinite;                                                 // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	float                                              MinimumDuration;                                            // 0x0060   (0x0004)  
	float                                              MaximumDuration;                                            // 0x0064   (0x0004)  
	FWwiseLocalizedEventCookedData                     EventCookedData;                                            // 0x0068   (0x0060)  
	class UAkAudioBank*                                RequiredBank;                                               // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00D0   (0x0008)  MISSED
	// int32_t PostOnGameObjectAndWait(class UAkGameObject* GameObject, FLatentActionInfo LatentActionInfo);                    // [0x14b3230] Final|Native|Public|BlueprintCallable 
	// int32_t PostOnGameObject(class UAkGameObject* GameObject, FDelegateProperty& Delegate, int32_t CallbackMask);            // [0x14b30d0] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// int32_t PostOnComponentAndWait(class UAkComponent* Component, bool bStopWhenAttachedObjectDestroyed, FLatentActionInfo LatentActionInfo); // [0x14b2f70] Final|Native|Public|BlueprintCallable 
	// int32_t PostOnComponent(class UAkComponent* Component, FDelegateProperty& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // [0x14b2dc0] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// int32_t PostOnActorAndWait(class AActor* Actor, bool bStopWhenAttachedObjectDestroyed, FLatentActionInfo LatentActionInfo); // [0x14b2c60] Final|Native|Public|BlueprintCallable 
	// int32_t PostOnActor(class AActor* Actor, FDelegateProperty& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // [0x14b2ab0] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// int32_t PostAtLocation(FVector Location, FRotator Orientation, FDelegateProperty& callback, int32_t CallbackMask, class UObject* WorldContextObject); // [0x14b28c0] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// int32_t ExecuteAction(AkActionOnEventType ActionType, class AActor* Actor, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0x14b2180] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGameObject
/// Size: 0x0028 (40 bytes) (0x000218 - 0x000240) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class UAkGameObject : public USceneComponent
{ 
public:
	class UAkAudioEvent*                               AkAudioEvent;                                               // 0x0218   (0x0008)  
	FString                                            EventName;                                                  // 0x0220   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0230   (0x0008)  MISSED
	// void Stop();                                                                                                             // [0x14b97e0] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// void SetRtpcValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, FString RTPC);                     // [0x14b8c00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const 
	// void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, FDelegateProperty& PostEventCallback, FLatentActionInfo LatentInfo, int32_t& PlayingID); // [0x14b6bc0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// int32_t PostAssociatedAkEvent(int32_t CallbackMask, FDelegateProperty& PostEventCallback);                               // [0x14b6ab0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, FDelegateProperty& PostEventCallback, FLatentActionInfo LatentInfo); // [0x14b6540] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// int32_t PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback, FString InEventName); // [0x14b63a0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32_t PlayingID); // [0x14b5b40] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/AkAudio.AkComponent
/// Size: 0x0138 (312 bytes) (0x000238 - 0x000370) align 16 pad: 0x0000
class UAkComponent : public UAkGameObject
{ 
public:
	bool                                               StopWhenOwnerDestroyed;                                     // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0239   (0x0003)  MISSED
	float                                              AttenuationScalingFactor;                                   // 0x023C   (0x0004)  
	bool                                               bUseReverbVolumes;                                          // 0x0240   (0x0001)  
	bool                                               bEnableOcclusion;                                           // 0x0241   (0x0001)  
	unsigned char                                      UnknownData01_7[0x12E];                                     // 0x0242   (0x012E)  MISSED
	// void UseReverbVolumes(bool inUseReverbVolumes);                                                                          // [0x14b3c20] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// void SetSwitch(class UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);                             // [0x14b39a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);                                                            // [0x14b3910] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// void SetOutputBusVolume(float BusVolume);                                                                                // [0x14b3890] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// void SetLocationOffsets(TArray<FVector>& Offsets);                                                                       // [0x14b37e0] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// void SetListeners(TArray<UAkComponent*>& Listeners);                                                                     // [0x14b3730] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// void SetAttenuationScalingFactor(float Value);                                                                           // [0x14b35a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// void PostTrigger(class UAkTrigger* TriggerValue, FString Trigger);                                                       // [0x14b3330] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// int32_t PostAssociatedAkEventAndWaitForEnd(FLatentActionInfo LatentInfo);                                                // [0x14b27d0] Final|Native|Public|BlueprintCallable 
	// int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, FString in_EventName, FLatentActionInfo LatentInfo);      // [0x14b2680] Final|Native|Public|BlueprintCallable 
	// float GetAttenuationRadius();                                                                                            // [0x14b23b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAudioInputComponent
/// Size: 0x0030 (48 bytes) (0x000370 - 0x0003A0) align 16 pad: 0x0000
class UAkAudioInputComponent : public UAkComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0370   (0x0030)  MISSED
	// int32_t PostAssociatedAudioInputEvent();                                                                                 // [0x14b2890] BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAuxBus
/// Size: 0x0070 (112 bytes) (0x000058 - 0x0000C8) align 8 pad: 0x0000
class UAkAuxBus : public UAkAudioType
{ 
public:
	FWwiseLocalizedAuxBusCookedData                    AuxBusCookedData;                                           // 0x0058   (0x0060)  
	class UAkAudioBank*                                RequiredBank;                                               // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkBoolPropertyToControl
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FAkBoolPropertyToControl
{ 
	FString                                            ItemProperty;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkWwiseObjectDetails
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FAkWwiseObjectDetails
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemPath;                                                   // 0x0010   (0x0010)  
	FString                                            ItemId;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/AkAudio.AkWwiseItemToControl
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FAkWwiseItemToControl
{ 
	FAkWwiseObjectDetails                              ItemPicked;                                                 // 0x0000   (0x0030)  
	FString                                            ItemPath;                                                   // 0x0030   (0x0010)  
};

/// Class /Script/AkAudio.AkCheckBox
/// Size: 0x0A70 (2672 bytes) (0x000140 - 0x000BB0) align 8 pad: 0x0000
class UAkCheckBox : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x3A0];                                     // 0x0140   (0x03A0)  MISSED
	ECheckBoxState                                     CheckedState;                                               // 0x04E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x04E1   (0x0003)  MISSED
	SDK_UNDEFINED(20,425) /* FDelegateProperty */      __um(CheckedStateDelegate);                                 // 0x04E4   (0x0014)  
	FCheckBoxStyle                                     WidgetStyle;                                                // 0x04F8   (0x05E0)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0AD8   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0AD9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0ADA   (0x0006)  MISSED
	FAkBoolPropertyToControl                           ThePropertyToControl;                                       // 0x0AE0   (0x0010)  
	FAkWwiseItemToControl                              ItemToControl;                                              // 0x0AF0   (0x0040)  
	SDK_UNDEFINED(16,426) /* FMulticastInlineDelegate */ __um(AkOnCheckStateChanged);                              // 0x0B30   (0x0010)  
	SDK_UNDEFINED(16,427) /* FMulticastInlineDelegate */ __um(OnItemDropped);                                      // 0x0B40   (0x0010)  
	SDK_UNDEFINED(16,428) /* FMulticastInlineDelegate */ __um(OnPropertyDropped);                                  // 0x0B50   (0x0010)  
	unsigned char                                      UnknownData03_7[0x50];                                      // 0x0B60   (0x0050)  MISSED
	// void SetIsChecked(bool InIsChecked);                                                                                     // [0x14b36a0] Final|Native|Public|BlueprintCallable 
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0x14b3620] Final|Native|Public|BlueprintCallable 
	// void SetAkItemId(FGuid& ItemId);                                                                                         // [0x14b3500] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void SetAkBoolProperty(FString ItemProperty);                                                                            // [0x14b3460] Final|Native|Public|BlueprintCallable 
	// bool IsPressed();                                                                                                        // [0x14b2500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool IsChecked();                                                                                                        // [0x14b24d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// ECheckBoxState GetCheckedState();                                                                                        // [0x14b23e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetAkProperty();                                                                                                 // [0x14b2360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FGuid GetAkItemId();                                                                                                     // [0x14b2320] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAssetData
/// Size: 0x0028 (40 bytes) (0x000030 - 0x000058) align 8 pad: 0x0000
class UAkAssetData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0030   (0x0028)  MISSED
};

/// Class /Script/AkAudio.AkAssetPlatformData
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UAkAssetPlatformData : public UObject
{ 
public:
	class UAkAssetData*                                CurrentAssetData;                                           // 0x0030   (0x0008)  
};

/// Class /Script/AkAudio.AkMediaAssetData
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UAkMediaAssetData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/AkAudio.AkMediaAsset
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000080) align 8 pad: 0x0000
class UAkMediaAsset : public UObject
{ 
public:
	SDK_UNDEFINED(80,429) /* TMap<FString, UAkMediaAssetData*> */ __um(MediaAssetDataPerPlatform);                 // 0x0030   (0x0050)  
};

/// Class /Script/AkAudio.AkLocalizedMediaAsset
/// Size: 0x0000 (0 bytes) (0x000080 - 0x000080) align 8 pad: 0x0000
class UAkLocalizedMediaAsset : public UAkMediaAsset
{ 
public:
};

/// Class /Script/AkAudio.AkExternalMediaAsset
/// Size: 0x0000 (0 bytes) (0x000080 - 0x000080) align 8 pad: 0x0000
class UAkExternalMediaAsset : public UAkMediaAsset
{ 
public:
};

/// Class /Script/AkAudio.AkFolder
/// Size: 0x0000 (0 bytes) (0x000058 - 0x000058) align 8 pad: 0x0000
class UAkFolder : public UAkAudioType
{ 
public:
};

/// Class /Script/AkAudio.DrawPortalComponent
/// Size: 0x0000 (0 bytes) (0x0004E0 - 0x0004E0) align 16 pad: 0x0000
class UDrawPortalComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/AkAudio.DrawRoomComponent
/// Size: 0x0000 (0 bytes) (0x0004E0 - 0x0004E0) align 16 pad: 0x0000
class UDrawRoomComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/AkAudio.AkEffectShareSet
/// Size: 0x0068 (104 bytes) (0x000058 - 0x0000C0) align 8 pad: 0x0000
class UAkEffectShareSet : public UAkAudioType
{ 
public:
	FWwiseLocalizedShareSetCookedData                  ShareSetCookedData;                                         // 0x0058   (0x0060)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkGameplayStatics
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{ 
public:
	// void WakeupFromSuspend();                                                                                                // [0x14b9d80] Final|Native|Static|Public|BlueprintCallable 
	// void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);                                                     // [0x14b9cb0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x14b9a90] Final|Native|Static|Public|BlueprintCallable 
	// void UnloadInitBank();                                                                                                   // [0x14b9a70] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void UnloadBankByName(FString BankName);                                                                                 // [0x14b99e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void Suspend(bool bValue);                                                                                               // [0x14b9960] Final|Native|Static|Public|BlueprintCallable 
	// void StopProfilerCapture();                                                                                              // [0x14b9940] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void StopOutputCapture();                                                                                                // [0x14b9920] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void StopAllAmbientSounds(class UObject* WorldContextObject);                                                            // [0x14b98a0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void StopAll();                                                                                                          // [0x14b9880] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void StopActor(class AActor* Actor);                                                                                     // [0x14b9800] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void StartProfilerCapture(FString Filename);                                                                             // [0x14b9750] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void StartOutputCapture(FString Filename);                                                                               // [0x14b96c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void StartAllAmbientSounds(class UObject* WorldContextObject);                                                           // [0x14b9640] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy); // [0x14b9400] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, FName SwitchGroup, FName SwitchState);            // [0x14b9290] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void SetState(class UAkStateValue* StateValue, FName StateGroup, FName State);                                           // [0x14b9160] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareSet);                          // [0x14b9010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetRtpcValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);  // [0x14b8db0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void SetReflectionsOrder(int32_t Order, bool RefreshPaths);                                                              // [0x14b8f50] Final|Native|Static|Public|BlueprintCallable 
	// void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue); // [0x14b8af0] Final|Native|Static|Public|BlueprintCallable 
	// void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // [0x14b89f0] Final|Native|Static|Public|BlueprintCallable 
	// void SetPanningRule(PanningRule PanRule);                                                                                // [0x14b8980] Final|Native|Static|Public|BlueprintCallable 
	// bool SetOutputDeviceEffect(FAkOutputDeviceID InDeviceID, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet); // [0x14b8880] Final|Native|Static|Public|BlueprintCallable 
	// void SetOutputBusVolume(float BusVolume, class AActor* Actor);                                                           // [0x14b87c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x14b8660] Final|Native|Static|Public|BlueprintCallable 
	// void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x14b8470] Final|Native|Static|Public|BlueprintCallable 
	// void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x14b8280] Final|Native|Static|Public|BlueprintCallable 
	// void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue); // [0x14b8170] Final|Native|Static|Public|BlueprintCallable 
	// void SetDistanceProbe(class AActor* Listener, class AActor* DistanceProbe);                                              // [0x14b80b0] Final|Native|Static|Public|BlueprintCallable 
	// void SetCurrentAudioCultureAsync(FString AudioCulture, FDelegateProperty& Completed);                                    // [0x14b7fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);      // [0x14b7e70] Final|Native|Static|Public|BlueprintCallable 
	// bool SetBusEffectByName(FString InBusName, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);            // [0x14b7cf0] Final|Native|Static|Public|BlueprintCallable 
	// bool SetBusEffectByID(FAkUniqueID InBusID, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);            // [0x14b7bf0] Final|Native|Static|Public|BlueprintCallable 
	// void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);                                         // [0x14b7b20] Final|Native|Static|Public|BlueprintCallable 
	// bool SetAuxBusEffect(class UAkAuxBus* InAuxBus, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);       // [0x14b7a20] Final|Native|Static|Public|BlueprintCallable 
	// bool SetActorMixerEffect(FAkUniqueID InAudioNodeID, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);   // [0x14b7920] Final|Native|Static|Public|BlueprintCallable 
	// void ResetRTPCValue(class UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);             // [0x14b77c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void ReplaceMainOutput(FAkOutputSettings& MainOutputSettings);                                                           // [0x14b7720] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void RenderAudio();                                                                                                      // [0x14b7700] Final|Native|Static|Public|BlueprintCallable 
	// void RemoveOutput(FAkOutputDeviceID in_OutputDeviceId);                                                                  // [0x14b7680] Final|Native|Static|Public|BlueprintCallable 
	// void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, FName Trigger);                                    // [0x14b7560] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void PostEventByName(FString EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);                         // [0x14b7440] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// int32_t PostEventByDummyGameObj(class UAkAudioEvent* in_pAkEvent, FDelegateProperty& PostEventCallback);                 // [0x14b7340] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, class UObject* WorldContextObject); // [0x14b71d0] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// int32_t PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, class UObject* WorldContextObject); // [0x14b7010] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// int32_t PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, bool bStopWhenAttachedToDestroyed, FString EventName); // [0x14b6db0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo); // [0x14b68e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// int32_t PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo); // [0x14b6780] Final|Native|Static|Public|BlueprintCallable 
	// void LoadInitBank();                                                                                                     // [0x14b6380] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void LoadBankByName(FString BankName);                                                                                   // [0x14b62f0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// bool IsGame(class UObject* WorldContextObject);                                                                          // [0x14b6260] Final|Native|Static|Public|BlueprintCallable 
	// bool IsEditor();                                                                                                         // [0xf16ea0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsAudioEventActive(class UAkAudioEvent* AudioEvent);                                                                // [0x14b61d0] Final|Native|Static|Public|BlueprintCallable 
	// void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareSet);                         // [0x14b6070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// int32_t GetSourcePlayPosition(int32_t PlayingID);                                                                        // [0x14b5fe0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, class AActor* Actor, FName RTPC); // [0x14b5d90] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FString GetCurrentAudioCulture();                                                                                        // [0x14b5ac0] Final|Native|Static|Public|BlueprintCallable 
	// TArray<FString> GetAvailableAudioCultures();                                                                             // [0x14b59e0] Final|Native|Static|Public|BlueprintCallable 
	// class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType); // [0x14b5830] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);                                 // [0x14b5760] Final|Native|Static|Public|BlueprintCallable 
	// void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0x14b5620] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID); // [0x14b5450] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void ClearSoundBanksAndMedia();                                                                                          // [0x14b5430] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void ClearBanks();                                                                                                       // [0x14b5430] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void CancelEventCallback(FDelegateProperty& PostEventCallback);                                                          // [0x14b5380] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void AddOutputCaptureMarker(FString MarkerText);                                                                         // [0x14b52f0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// void AddOutput(FAkOutputSettings& in_Settings, FAkOutputDeviceID& out_DeviceID, TArray<UAkComponent*>& in_ListenerIDs);  // [0x14b5180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkCallbackInfo
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UAkCallbackInfo : public UObject
{ 
public:
	class UAkComponent*                                AkComponent;                                                // 0x0030   (0x0008)  
};

/// Class /Script/AkAudio.AkEventCallbackInfo
/// Size: 0x0008 (8 bytes) (0x000038 - 0x000040) align 8 pad: 0x0000
class UAkEventCallbackInfo : public UAkCallbackInfo
{ 
public:
	int32_t                                            PlayingID;                                                  // 0x0038   (0x0004)  
	int32_t                                            EventId;                                                    // 0x003C   (0x0004)  
};

/// Class /Script/AkAudio.AkMIDIEventCallbackInfo
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
	// EAkMidiEventType GetType();                                                                                              // [0x14be070] Final|Native|Public|BlueprintCallable 
	// bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);                                                            // [0x14bdfc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);                                                                        // [0x14bdf10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);                                                                              // [0x14bde60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);                                                                            // [0x14bddb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);                                                         // [0x14bdd00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool GetGeneric(FAkMidiGeneric& AsGeneric);                                                                              // [0x14bdc50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);                                                // [0x14bdba0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// char GetChannel();                                                                                                       // [0x14bdb70] Final|Native|Public|BlueprintCallable 
	// bool GetCc(FAkMidiCc& AsCc);                                                                                             // [0x14bdac0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkMarkerCallbackInfo
/// Size: 0x0018 (24 bytes) (0x000040 - 0x000058) align 8 pad: 0x0000
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	int32_t                                            Identifier;                                                 // 0x0040   (0x0004)  
	int32_t                                            Position;                                                   // 0x0044   (0x0004)  
	FString                                            Label;                                                      // 0x0048   (0x0010)  
};

/// Class /Script/AkAudio.AkDurationCallbackInfo
/// Size: 0x0018 (24 bytes) (0x000040 - 0x000058) align 8 pad: 0x0000
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	float                                              Duration;                                                   // 0x0040   (0x0004)  
	float                                              EstimatedDuration;                                          // 0x0044   (0x0004)  
	int32_t                                            AudioNodeID;                                                // 0x0048   (0x0004)  
	int32_t                                            MediaId;                                                    // 0x004C   (0x0004)  
	bool                                               bStreaming;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkSegmentInfo
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FAkSegmentInfo
{ 
	int32_t                                            CurrentPosition;                                            // 0x0000   (0x0004)  
	int32_t                                            PreEntryDuration;                                           // 0x0004   (0x0004)  
	int32_t                                            ActiveDuration;                                             // 0x0008   (0x0004)  
	int32_t                                            PostExitDuration;                                           // 0x000C   (0x0004)  
	int32_t                                            RemainingLookAheadTime;                                     // 0x0010   (0x0004)  
	float                                              BeatDuration;                                               // 0x0014   (0x0004)  
	float                                              BarDuration;                                                // 0x0018   (0x0004)  
	float                                              GridDuration;                                               // 0x001C   (0x0004)  
	float                                              GridOffset;                                                 // 0x0020   (0x0004)  
};

/// Class /Script/AkAudio.AkMusicSyncCallbackInfo
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000078) align 8 pad: 0x0000
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{ 
public:
	int32_t                                            PlayingID;                                                  // 0x0038   (0x0004)  
	FAkSegmentInfo                                     SegmentInfo;                                                // 0x003C   (0x0024)  
	EAkCallbackType                                    MusicSyncType;                                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	FString                                            UserCueName;                                                // 0x0068   (0x0010)  
};

/// Struct /Script/AkAudio.AkGeometrySurfaceOverride
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FAkGeometrySurfaceOverride
{ 
	class UAkAcousticTexture*                          AcousticTexture;                                            // 0x0000   (0x0008)  
	bool                                               bEnableOcclusionOverride;                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              OcclusionValue;                                             // 0x000C   (0x0004)  
	float                                              SurfaceArea;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkAcousticSurface
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FAkAcousticSurface
{ 
	uint32_t                                           Texture;                                                    // 0x0000   (0x0004)  
	float                                              Occlusion;                                                  // 0x0004   (0x0004)  
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/AkAudio.AkTriangle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 pad: 0x0000
struct FAkTriangle
{ 
	uint16_t                                           Point0;                                                     // 0x0000   (0x0002)  
	uint16_t                                           Point1;                                                     // 0x0002   (0x0002)  
	uint16_t                                           Point2;                                                     // 0x0004   (0x0002)  
	uint16_t                                           Surface;                                                    // 0x0006   (0x0002)  
};

/// Struct /Script/AkAudio.AkGeometryData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FAkGeometryData
{ 
	TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)  
	TArray<FAkAcousticSurface>                         Surfaces;                                                   // 0x0010   (0x0010)  
	TArray<FAkTriangle>                                Triangles;                                                  // 0x0020   (0x0010)  
	TArray<class UPhysicalMaterial*>                   ToOverrideAcousticTexture;                                  // 0x0030   (0x0010)  
	TArray<class UPhysicalMaterial*>                   ToOverrideOcclusion;                                        // 0x0040   (0x0010)  
};

/// Class /Script/AkAudio.AkGeometryComponent
/// Size: 0x0190 (400 bytes) (0x000230 - 0x0003C0) align 16 pad: 0x0000
class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{ 
public:
	AkMeshType                                         MeshType;                                                   // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0231   (0x0003)  MISSED
	int32_t                                            LOD;                                                        // 0x0234   (0x0004)  
	float                                              WeldingThreshold;                                           // 0x0238   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x023C   (0x0004)  MISSED
	SDK_UNDEFINED(80,430) /* TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> */ __um(StaticMeshSurfaceOverride); // 0x0240   (0x0050)  
	FAkGeometrySurfaceOverride                         CollisionMeshSurfaceOverride;                               // 0x0290   (0x0018)  
	bool                                               bEnableDiffraction;                                         // 0x02A8   (0x0001)  
	bool                                               bEnableDiffractionOnBoundaryEdges;                          // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x02AA   (0x0006)  MISSED
	class AActor*                                      AssociatedRoom;                                             // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x02B8   (0x0010)  MISSED
	FAkGeometryData                                    GeometryData;                                               // 0x02C8   (0x0050)  
	SDK_UNDEFINED(80,431) /* TMap<int32_t, double> */  __um(SurfaceAreas);                                         // 0x0318   (0x0050)  
	unsigned char                                      UnknownData04_7[0x58];                                      // 0x0368   (0x0058)  MISSED
	// void UpdateGeometry();                                                                                                   // [0x14be0e0] Final|Native|Public|BlueprintCallable 
	// void SendGeometry();                                                                                                     // [0x14be0c0] Final|Native|Public|BlueprintCallable 
	// void RemoveGeometry();                                                                                                   // [0x14be0a0] Final|Native|Public|BlueprintCallable 
	// void ConvertMesh();                                                                                                      // [0x14bdaa0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGroupValue
/// Size: 0x0028 (40 bytes) (0x000058 - 0x000080) align 8 pad: 0x0000
class UAkGroupValue : public UAkAudioType
{ 
public:
	FWwiseGroupValueCookedData                         GroupValueCookedData;                                       // 0x0058   (0x0018)  
	uint32_t                                           GroupShortId;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0074   (0x000C)  MISSED
};

/// Struct /Script/AkAudio.AkHololensAdvancedInitializationSettings
/// Size: 0x0004 (4 bytes) (0x000038 - 0x00003C) align 4 pad: 0x0000
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0039   (0x0003)  MISSED
};

/// Class /Script/AkAudio.AkHololensInitializationSettings
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x000108) align 8 pad: 0x0000
class UAkHololensInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkHololensAdvancedInitializationSettings          AdvancedSettings;                                           // 0x00C8   (0x003C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x14b2550] Final|Native|Public  
};

/// Class /Script/AkAudio.AkHololensPlatformInfo
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UAkHololensPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkInitBank
/// Size: 0x0050 (80 bytes) (0x000058 - 0x0000A8) align 8 pad: 0x0000
class UAkInitBank : public UAkAudioType
{ 
public:
	FWwiseInitBankCookedData                           InitBankCookedData;                                         // 0x0058   (0x0048)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkAudioSession
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FAkAudioSession
{ 
	EAkAudioSessionCategory                            AudioSessionCategory;                                       // 0x0000   (0x0004)  
	uint32_t                                           AudioSessionCategoryOptions;                                // 0x0004   (0x0004)  
	EAkAudioSessionMode                                AudioSessionMode;                                           // 0x0008   (0x0004)  
};

/// Class /Script/AkAudio.AkIOSInitializationSettings
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x000110) align 8 pad: 0x0000
class UAkIOSInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkAudioSession                                    AudioSession;                                               // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00B8   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00D8   (0x0038)  
};

/// Class /Script/AkAudio.AkIOSPlatformInfo
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UAkIOSPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkItemBoolPropertiesConv
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{ 
public:
	// FText Conv_FAkBoolPropertyToControlToText(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                          // [0x14c1760] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FString Conv_FAkBoolPropertyToControlToString(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                      // [0x14c1670] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemBoolProperties
/// Size: 0x0040 (64 bytes) (0x000128 - 0x000168) align 8 pad: 0x0000
class UAkItemBoolProperties : public UWidget
{ 
public:
	SDK_UNDEFINED(16,432) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,433) /* FMulticastInlineDelegate */ __um(OnPropertyDragged);                                  // 0x0138   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0148   (0x0020)  MISSED
	// void SetSearchText(FString newText);                                                                                     // [0x14c1dc0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// FString GetSelectedProperty();                                                                                           // [0x14c19a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetSearchText();                                                                                                 // [0x14c1920] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkItemPropertiesConv
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{ 
public:
	// FText Conv_FAkPropertyToControlToText(FAkPropertyToControl& INAkPropertyToControl);                                      // [0x14c1760] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FString Conv_FAkPropertyToControlToString(FAkPropertyToControl& INAkPropertyToControl);                                  // [0x14c1670] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemProperties
/// Size: 0x0040 (64 bytes) (0x000128 - 0x000168) align 8 pad: 0x0000
class UAkItemProperties : public UWidget
{ 
public:
	SDK_UNDEFINED(16,434) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,435) /* FMulticastInlineDelegate */ __um(OnPropertyDragged);                                  // 0x0138   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0148   (0x0020)  MISSED
	// void SetSearchText(FString newText);                                                                                     // [0x14c1dc0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// FString GetSelectedProperty();                                                                                           // [0x14c1a20] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetSearchText();                                                                                                 // [0x14c1920] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkLateReverbComponent
/// Size: 0x0088 (136 bytes) (0x000218 - 0x0002A0) align 16 pad: 0x0000
class UAkLateReverbComponent : public USceneComponent
{ 
public:
	bool                                               bEnable;                                                    // 0x0218   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0219   (0x0003)  MISSED
	float                                              SendLevel;                                                  // 0x021C   (0x0004)  
	float                                              FadeRate;                                                   // 0x0220   (0x0004)  
	float                                              Priority;                                                   // 0x0224   (0x0004)  
	bool                                               AutoAssignAuxBus;                                           // 0x0228   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0229   (0x0007)  MISSED
	class UAkAuxBus*                                   AuxBus;                                                     // 0x0230   (0x0008)  
	FString                                            AuxBusName;                                                 // 0x0238   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0248   (0x0008)  MISSED
	class UAkAuxBus*                                   AuxBusManual;                                               // 0x0250   (0x0008)  
	unsigned char                                      UnknownData03_7[0x48];                                      // 0x0258   (0x0048)  MISSED
	// void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent);                          // [0x14c15e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkLinuxInitializationSettings
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x000100) align 8 pad: 0x0000
class UAkLinuxInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x0038)  
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x14b2550] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLinuxPlatformInfo
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkMacInitializationSettings
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x000100) align 8 pad: 0x0000
class UAkMacInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x0038)  
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x14b2550] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMacPlatformInfo
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UAkMacPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkPlatformInitialisationSettingsBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAkPlatformInitialisationSettingsBase : public UInterface
{ 
public:
};

/// Struct /Script/AkAudio.AkPS5AdvancedInitializationSettings
/// Size: 0x000C (12 bytes) (0x000038 - 0x000044) align 4 pad: 0x0000
struct FAkPS5AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x0038   (0x0001)  
	bool                                               bVorbisHwAcceleration;                                      // 0x0039   (0x0001)  
	bool                                               bEnable3DAudioSync;                                         // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x003B   (0x0001)  MISSED
	uint32_t                                           uNumOperationsForHwMixing;                                  // 0x003C   (0x0004)  
	bool                                               bPlotQueueLevel;                                            // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0041   (0x0003)  MISSED
};

/// Class /Script/AkAudio.AkPS5InitializationSettings
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x000108) align 8 pad: 0x0000
class UAkPS5InitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0020)  
	FAkPS5AdvancedInitializationSettings               AdvancedSettings;                                           // 0x00C0   (0x0044)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkDPXInitializationSettings
/// Size: 0x0000 (0 bytes) (0x000108 - 0x000108) align 8 pad: 0x0000
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkPS5PlatformInfo
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UAkPS5PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkReverbVolume
/// Size: 0x0038 (56 bytes) (0x0002E0 - 0x000318) align 8 pad: 0x0000
class AAkReverbVolume : public AVolume
{ 
public:
	bool                                               bEnabled;                                                   // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02E1   (0x0007)  MISSED
	class UAkAuxBus*                                   AuxBus;                                                     // 0x02E8   (0x0008)  
	FString                                            AuxBusName;                                                 // 0x02F0   (0x0010)  
	float                                              SendLevel;                                                  // 0x0300   (0x0004)  
	float                                              FadeRate;                                                   // 0x0304   (0x0004)  
	float                                              Priority;                                                   // 0x0308   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x030C   (0x0004)  MISSED
	class UAkLateReverbComponent*                      LateReverbComponent;                                        // 0x0310   (0x0008)  
};

/// Class /Script/AkAudio.AkRoomComponent
/// Size: 0x0038 (56 bytes) (0x000238 - 0x000270) align 16 pad: 0x0000
class UAkRoomComponent : public UAkGameObject
{ 
public:
	bool                                               bEnable;                                                    // 0x0238   (0x0001)  
	bool                                               bDynamic;                                                   // 0x0239   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x023A   (0x0002)  MISSED
	float                                              Priority;                                                   // 0x023C   (0x0004)  
	float                                              WallOcclusion;                                              // 0x0240   (0x0004)  
	float                                              AuxSendLevel;                                               // 0x0244   (0x0004)  
	bool                                               AutoPost;                                                   // 0x0248   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0249   (0x000F)  MISSED
	class UAkAcousticTextureSetComponent*              GeometryComponent;                                          // 0x0258   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0260   (0x0010)  MISSED
	// void SetGeometryComponent(class UAkAcousticTextureSetComponent* textureSetComponent);                                    // [0x14c1c10] Final|Native|Public|BlueprintCallable 
	// class UPrimitiveComponent* GetPrimitiveParent();                                                                         // [0x14c18f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkRtpc
/// Size: 0x0010 (16 bytes) (0x000058 - 0x000068) align 8 pad: 0x0000
class UAkRtpc : public UAkAudioType
{ 
public:
	FWwiseGameParameterCookedData                      GameParameterCookedData;                                    // 0x0058   (0x0010)  
};

/// Class /Script/AkAudio.AkSettings
/// Size: 0x0348 (840 bytes) (0x000030 - 0x000378) align 8 pad: 0x0000
class UAkSettings : public UObject
{ 
public:
	char                                               MaxSimultaneousReverbVolumes;                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FFilePath                                          WwiseProjectPath;                                           // 0x0038   (0x0010)  
	FDirectoryPath                                     WwiseSoundDataFolder;                                       // 0x0048   (0x0010)  
	FDirectoryPath                                     GeneratedSoundBanksFolder;                                  // 0x0058   (0x0010)  
	FDirectoryPath                                     WwiseStagingDirectory;                                      // 0x0068   (0x0010)  
	bool                                               bSoundBanksTransfered;                                      // 0x0078   (0x0001)  
	bool                                               bAssetsMigrated;                                            // 0x0079   (0x0001)  
	bool                                               bProjectMigrated;                                           // 0x007A   (0x0001)  
	bool                                               bAutoConnectToWAAPI;                                        // 0x007B   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     DefaultOcclusionCollisionChannel;                           // 0x007C   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     DefaultFitToGeometryCollisionChannel;                       // 0x007D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x007E   (0x0002)  MISSED
	SDK_UNDEFINED(80,436) /* TMap<TWeakObjectPtr<UPhysicalMaterial*>, FAkGeometrySurfacePropertiesToMap> */ __um(AkGeometryMap); // 0x0080   (0x0050)  
	float                                              GlobalDecayAbsorption;                                      // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	SDK_UNDEFINED(48,437) /* TWeakObjectPtr<UAkAuxBus*> */ __um(DefaultReverbAuxBus);                              // 0x00D8   (0x0030)  
	SDK_UNDEFINED(80,438) /* TMap<float, TWeakObjectPtr<UAkAuxBus*>> */ __um(EnvironmentDecayAuxBusMap);           // 0x0108   (0x0050)  
	FString                                            HFDampingName;                                              // 0x0158   (0x0010)  
	FString                                            DecayEstimateName;                                          // 0x0168   (0x0010)  
	FString                                            TimeToFirstReflectionName;                                  // 0x0178   (0x0010)  
	SDK_UNDEFINED(48,439) /* TWeakObjectPtr<UAkRtpc*> */ __um(HFDampingRTPC);                                      // 0x0188   (0x0030)  
	SDK_UNDEFINED(48,440) /* TWeakObjectPtr<UAkRtpc*> */ __um(DecayEstimateRTPC);                                  // 0x01B8   (0x0030)  
	SDK_UNDEFINED(48,441) /* TWeakObjectPtr<UAkRtpc*> */ __um(TimeToFirstReflectionRTPC);                          // 0x01E8   (0x0030)  
	SDK_UNDEFINED(48,442) /* TWeakObjectPtr<UAkAudioEvent*> */ __um(AudioInputEvent);                              // 0x0218   (0x0030)  
	SDK_UNDEFINED(80,443) /* TMap<FGuid, FAkAcousticTextureParams> */ __um(AcousticTextureParamsMap);              // 0x0248   (0x0050)  
	bool                                               SplitSwitchContainerMedia;                                  // 0x0298   (0x0001)  
	bool                                               SplitMediaPerFolder;                                        // 0x0299   (0x0001)  
	bool                                               UseEventBasedPackaging;                                     // 0x029A   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x029B   (0x0005)  MISSED
	FString                                            CommandletCommitMessage;                                    // 0x02A0   (0x0010)  
	SDK_UNDEFINED(80,444) /* TMap<FString, FString> */ __um(UnrealCultureToWwiseCulture);                          // 0x02B0   (0x0050)  
	FString                                            DefaultAssetCreationPath;                                   // 0x0300   (0x0010)  
	SDK_UNDEFINED(48,445) /* TWeakObjectPtr<UAkInitBank*> */ __um(InitBank);                                       // 0x0310   (0x0030)  
	EAkUnrealAudioRouting                              AudioRouting;                                               // 0x0340   (0x0004)  
	bool                                               bWwiseSoundEngineEnabled;                                   // 0x0344   (0x0001)  
	bool                                               bWwiseAudioLinkEnabled;                                     // 0x0345   (0x0001)  
	bool                                               bAkAudioMixerEnabled;                                       // 0x0346   (0x0001)  
	bool                                               AskedToUseNewAssetManagement;                               // 0x0347   (0x0001)  
	bool                                               bEnableMultiCoreRendering;                                  // 0x0348   (0x0001)  
	bool                                               MigratedEnableMultiCoreRendering;                           // 0x0349   (0x0001)  
	bool                                               FixupRedirectorsDuringMigration;                            // 0x034A   (0x0001)  
	unsigned char                                      UnknownData04_6[0x5];                                       // 0x034B   (0x0005)  MISSED
	FDirectoryPath                                     WwiseWindowsInstallationPath;                               // 0x0350   (0x0010)  
	FFilePath                                          WwiseMacInstallationPath;                                   // 0x0360   (0x0010)  
	unsigned char                                      UnknownData05_7[0x8];                                       // 0x0370   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkSettingsPerUser
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000080) align 8 pad: 0x0000
class UAkSettingsPerUser : public UObject
{ 
public:
	FDirectoryPath                                     WwiseWindowsInstallationPath;                               // 0x0030   (0x0010)  
	FFilePath                                          WwiseMacInstallationPath;                                   // 0x0040   (0x0010)  
	FDirectoryPath                                     GeneratedSoundBanksFolderUserOverride;                      // 0x0050   (0x0010)  
	FString                                            WaapiIPAddress;                                             // 0x0060   (0x0010)  
	uint32_t                                           WaapiPort;                                                  // 0x0070   (0x0004)  
	bool                                               bAutoConnectToWAAPI;                                        // 0x0074   (0x0001)  
	bool                                               AutoSyncSelection;                                          // 0x0075   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0076   (0x0002)  MISSED
	uint32_t                                           WaapiTranslatorTimeout;                                     // 0x0078   (0x0004)  
	bool                                               SuppressGeneratedSoundBanksPathWarnings;                    // 0x007C   (0x0001)  
	bool                                               SoundDataGenerationSkipLanguage;                            // 0x007D   (0x0001)  
	bool                                               AskForWwiseAssetReload;                                     // 0x007E   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1];                                       // 0x007F   (0x0001)  MISSED
};

/// Struct /Script/AkAudio.AkPropertyToControl
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FAkPropertyToControl
{ 
	FString                                            ItemProperty;                                               // 0x0000   (0x0010)  
};

/// Class /Script/AkAudio.AkSlider
/// Size: 0x0458 (1112 bytes) (0x000128 - 0x000580) align 8 pad: 0x0000
class UAkSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0128   (0x0004)  
	SDK_UNDEFINED(20,446) /* FDelegateProperty */      __um(ValueDelegate);                                        // 0x012C   (0x0014)  
	FSliderStyle                                       WidgetStyle;                                                // 0x0140   (0x0370)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x04B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x04B1   (0x0003)  MISSED
	FLinearColor                                       SliderBarColor;                                             // 0x04B4   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x04C4   (0x0010)  
	bool                                               IndentHandle;                                               // 0x04D4   (0x0001)  
	bool                                               Locked;                                                     // 0x04D5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x04D6   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x04D8   (0x0004)  
	bool                                               IsFocusable;                                                // 0x04DC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x04DD   (0x0003)  MISSED
	FAkPropertyToControl                               ThePropertyToControl;                                       // 0x04E0   (0x0010)  
	FAkWwiseItemToControl                              ItemToControl;                                              // 0x04F0   (0x0040)  
	SDK_UNDEFINED(16,447) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                     // 0x0530   (0x0010)  
	SDK_UNDEFINED(16,448) /* FMulticastInlineDelegate */ __um(OnItemDropped);                                      // 0x0540   (0x0010)  
	SDK_UNDEFINED(16,449) /* FMulticastInlineDelegate */ __um(OnPropertyDropped);                                  // 0x0550   (0x0010)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x0560   (0x0020)  MISSED
	// void SetValue(float InValue);                                                                                            // [0x14c2000] Final|Native|Public|BlueprintCallable 
	// void SetStepSize(float InValue);                                                                                         // [0x14c1f80] Final|Native|Public|BlueprintCallable 
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x14c1ef0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x14c1e60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// void SetLocked(bool InValue);                                                                                            // [0x14c1d30] Final|Native|Public|BlueprintCallable 
	// void SetIndentHandle(bool InValue);                                                                                      // [0x14c1ca0] Final|Native|Public|BlueprintCallable 
	// void SetAkSliderItemProperty(FString ItemProperty);                                                                      // [0x14c1b70] Final|Native|Public|BlueprintCallable 
	// void SetAkSliderItemId(FGuid& ItemId);                                                                                   // [0x14c1ad0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// float GetValue();                                                                                                        // [0x14c1aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetAkSliderItemProperty();                                                                                       // [0x14c18a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FGuid GetAkSliderItemId();                                                                                               // [0x14c1860] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkSpatialAudioVolume
/// Size: 0x0018 (24 bytes) (0x0002E0 - 0x0002F8) align 8 pad: 0x0000
class AAkSpatialAudioVolume : public AVolume
{ 
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                        // 0x02E0   (0x0008)  
	class UAkLateReverbComponent*                      LateReverb;                                                 // 0x02E8   (0x0008)  
	class UAkRoomComponent*                            Room;                                                       // 0x02F0   (0x0008)  
};

/// Class /Script/AkAudio.AkSpotReflector
/// Size: 0x0038 (56 bytes) (0x0002A8 - 0x0002E0) align 8 pad: 0x0000
class AAkSpotReflector : public AActor
{ 
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                      // 0x02A8   (0x0008)  
	FString                                            EarlyReflectionAuxBusName;                                  // 0x02B0   (0x0010)  
	class UAkAcousticTexture*                          AcousticTexture;                                            // 0x02C0   (0x0008)  
	float                                              DistanceScalingFactor;                                      // 0x02C8   (0x0004)  
	float                                              Level;                                                      // 0x02CC   (0x0004)  
	bool                                               SameRoomOnly;                                               // 0x02D0   (0x0001)  
	bool                                               EnableRoomOverride;                                         // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x02D2   (0x0006)  MISSED
	class AActor*                                      RoomOverride;                                               // 0x02D8   (0x0008)  
};

/// Class /Script/AkAudio.AkStateValue
/// Size: 0x0000 (0 bytes) (0x000080 - 0x000080) align 8 pad: 0x0000
class UAkStateValue : public UAkGroupValue
{ 
public:
};

/// Class /Script/AkAudio.AkSubmixInputComponent
/// Size: 0x0060 (96 bytes) (0x0003A0 - 0x000400) align 16 pad: 0x0000
class UAkSubmixInputComponent : public UAkAudioInputComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x03A0   (0x0008)  MISSED
	class USoundSubmix*                                SubmixToRecord;                                             // 0x03A8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x03B0   (0x0050)  MISSED
};

/// Struct /Script/AkAudio.AkSurfacePoly
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FAkSurfacePoly
{ 
	class UAkAcousticTexture*                          Texture;                                                    // 0x0000   (0x0008)  
	float                                              Occlusion;                                                  // 0x0008   (0x0004)  
	bool                                               EnableSurface;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SurfaceArea;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkSurfaceReflectorSetComponent
/// Size: 0x0030 (48 bytes) (0x000230 - 0x000260) align 16 pad: 0x0000
class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{ 
public:
	bool                                               bEnableSurfaceReflectors;                                   // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0231   (0x0007)  MISSED
	TArray<FAkSurfacePoly>                             AcousticPolys;                                              // 0x0238   (0x0010)  
	bool                                               bEnableDiffraction;                                         // 0x0248   (0x0001)  
	bool                                               bEnableDiffractionOnBoundaryEdges;                          // 0x0249   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x024A   (0x0006)  MISSED
	class AActor*                                      AssociatedRoom;                                             // 0x0250   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0258   (0x0008)  MISSED
	// void UpdateSurfaceReflectorSet();                                                                                        // [0x14c7810] Final|Native|Public|BlueprintCallable 
	// void UpdateAcousticProperties(TArray<FAkSurfacePoly> in_AcousticPolys);                                                  // [0x14c7720] Final|Native|Public|BlueprintCallable 
	// void SendSurfaceReflectorSet();                                                                                          // [0x14c6570] Final|Native|Public|BlueprintCallable 
	// void RemoveSurfaceReflectorSet();                                                                                        // [0x14be0a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkSwitchValue
/// Size: 0x0000 (0 bytes) (0x000080 - 0x000080) align 8 pad: 0x0000
class UAkSwitchValue : public UAkGroupValue
{ 
public:
};

/// Class /Script/AkAudio.AkTrigger
/// Size: 0x0010 (16 bytes) (0x000058 - 0x000068) align 8 pad: 0x0000
class UAkTrigger : public UAkAudioType
{ 
public:
	FWwiseTriggerCookedData                            TriggerCookedData;                                          // 0x0058   (0x0010)  
};

/// Class /Script/AkAudio.AkTVOSInitializationSettings
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x000110) align 8 pad: 0x0000
class UAkTVOSInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkAudioSession                                    AudioSession;                                               // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00B8   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00D8   (0x0038)  
};

/// Class /Script/AkAudio.AkTVOSPlatformInfo
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWaapiCalls
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{ 
public:
	// FAKWaapiJsonObject Unsubscribe(FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);                        // [0x14c75e0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FAKWaapiJsonObject SubscribeToWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiOptions, FDelegateProperty& callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // [0x14c7340] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetSubscriptionID(FAkWaapiSubscriptionId& Subscription, int32_t ID);                                                // [0x14c7270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool RegisterWaapiProjectLoadedCallback(FDelegateProperty& callback);                                                    // [0x14c64b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool RegisterWaapiConnectionLostCallback(FDelegateProperty& callback);                                                   // [0x14c63f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// int32_t GetSubscriptionID(FAkWaapiSubscriptionId& Subscription);                                                         // [0x14c6360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FText Conv_FAkWaapiSubscriptionIdToText(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                                // [0x14c57a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FString Conv_FAkWaapiSubscriptionIdToString(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                            // [0x14c56d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FAKWaapiJsonObject CallWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiArgs, FAKWaapiJsonObject& WaapiOptions);    // [0x14c5250] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.SAkWaapiFieldNamesConv
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{ 
public:
	// FText Conv_FAkWaapiFieldNamesToText(FAkWaapiFieldNames& INAkWaapiFieldNames);                                            // [0x14c1760] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FString Conv_FAkWaapiFieldNamesToString(FAkWaapiFieldNames& INAkWaapiFieldNames);                                        // [0x14c1670] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiJsonManager
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{ 
public:
	// FAKWaapiJsonObject SetStringField(FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);         // [0x14c7070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FAKWaapiJsonObject SetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target); // [0x14c6e20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FAKWaapiJsonObject SetNumberField(FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);           // [0x14c6c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FAKWaapiJsonObject SetBoolField(FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);              // [0x14c6a30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FAKWaapiJsonObject SetArrayStringFields(FAkWaapiFieldNames& FieldName, TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target); // [0x14c6800] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FAKWaapiJsonObject SetArrayObjectFields(FAkWaapiFieldNames& FieldName, TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target); // [0x14c6590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FString GetStringField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                        // [0x14c61c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FAKWaapiJsonObject GetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                             // [0x14c5ef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// float GetNumberField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                          // [0x14c5d90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// int32_t GetIntegerField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                       // [0x14c5c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// bool GetBoolField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                             // [0x14c5ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// TArray<FAKWaapiJsonObject> GetArrayField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                      // [0x14c5890] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);                                             // [0x14c55a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);                                         // [0x14c5480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiUriConv
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{ 
public:
	// FText Conv_FAkWaapiUriToText(FAkWaapiUri& INAkWaapiUri);                                                                 // [0x14c1760] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// FString Conv_FAkWaapiUriToString(FAkWaapiUri& INAkWaapiUri);                                                             // [0x14c1670] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AkAudio.AkWindowsAdvancedInitializationSettings
/// Size: 0x0008 (8 bytes) (0x000038 - 0x000040) align 4 pad: 0x0000
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	uint32_t                                           MaxSystemAudioObjects;                                      // 0x003C   (0x0004)  
};

/// Class /Script/AkAudio.AkWindowsInitializationSettings
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x000108) align 8 pad: 0x0000
class UAkWindowsInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A8   (0x0020)  
	FAkWindowsAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C8   (0x0040)  
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x14b2550] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWin32PlatformInfo
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UAkWin32PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWin64PlatformInfo
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UAkWin64PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWindowsPlatformInfo
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWwiseTree
/// Size: 0x0040 (64 bytes) (0x000128 - 0x000168) align 8 pad: 0x0000
class UAkWwiseTree : public UWidget
{ 
public:
	SDK_UNDEFINED(16,450) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,451) /* FMulticastInlineDelegate */ __um(OnItemDragged);                                      // 0x0138   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0148   (0x0020)  MISSED
	// void SetSearchText(FString newText);                                                                                     // [0x14c1dc0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// FAkWwiseObjectDetails GetSelectedItem();                                                                                 // [0x14c60a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FString GetSearchText();                                                                                                 // [0x14c1920] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkWwiseTreeSelector
/// Size: 0x0060 (96 bytes) (0x000128 - 0x000188) align 8 pad: 0x0000
class UAkWwiseTreeSelector : public UWidget
{ 
public:
	SDK_UNDEFINED(16,452) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,453) /* FMulticastInlineDelegate */ __um(OnItemDragged);                                      // 0x0138   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0148   (0x0040)  MISSED
};

/// Struct /Script/AkAudio.AkExternalSourceInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FAkExternalSourceInfo
{ 
	FString                                            ExternalSrcName;                                            // 0x0000   (0x0010)  
	AkCodecId                                          CodecID;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            Filename;                                                   // 0x0018   (0x0010)  
	class UAkExternalMediaAsset*                       ExternalSourceAsset;                                        // 0x0028   (0x0008)  
	bool                                               IsStreamed;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventSection
/// Size: 0x0090 (144 bytes) (0x0000F0 - 0x000180) align 8 pad: 0x0000
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x00F0   (0x0028)  MISSED
	class UAkAudioEvent*                               Event;                                                      // 0x0118   (0x0008)  
	bool                                               RetriggerEvent;                                             // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0121   (0x0003)  MISSED
	int32_t                                            ScrubTailLengthMs;                                          // 0x0124   (0x0004)  
	bool                                               StopAtSectionEnd;                                           // 0x0128   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0129   (0x0007)  MISSED
	FString                                            EventName;                                                  // 0x0130   (0x0010)  
	float                                              MaxSourceDuration;                                          // 0x0140   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	FString                                            MaxDurationSourceID;                                        // 0x0148   (0x0010)  
	TArray<FAkExternalSourceInfo>                      ExternalSources;                                            // 0x0158   (0x0010)  
	int32_t                                            FadeOutMs;                                                  // 0x0168   (0x0004)  
	unsigned char                                      UnknownData04_7[0x14];                                      // 0x016C   (0x0014)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkTrack
/// Size: 0x0018 (24 bytes) (0x000080 - 0x000098) align 8 pad: 0x0000
class UMovieSceneAkTrack : public UMovieSceneTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0080   (0x0010)  
	bool                                               bIsAMasterTrack;                                            // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventTrack
/// Size: 0x0008 (8 bytes) (0x000098 - 0x0000A0) align 8 pad: 0x0000
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.MovieSceneTangentDataSerializationHelper
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FMovieSceneTangentDataSerializationHelper
{ 
	float                                              ArriveTangent;                                              // 0x0000   (0x0004)  
	float                                              LeaveTangent;                                               // 0x0004   (0x0004)  
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ArriveTangentWeight;                                        // 0x000C   (0x0004)  
	float                                              LeaveTangentWeight;                                         // 0x0010   (0x0004)  
};

/// Struct /Script/AkAudio.MovieSceneFloatValueSerializationHelper
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FMovieSceneFloatValueSerializationHelper
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                                 // 0x0004   (0x0001)  
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                                // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FMovieSceneTangentDataSerializationHelper          Tangent;                                                    // 0x0008   (0x0014)  
};

/// Struct /Script/AkAudio.MovieSceneFloatChannelSerializationHelper
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FMovieSceneFloatChannelSerializationHelper
{ 
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                          // 0x0000   (0x0001)  
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                         // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<int32_t>                                    Times;                                                      // 0x0008   (0x0010)  
	TArray<FMovieSceneFloatValueSerializationHelper>   Values;                                                     // 0x0018   (0x0010)  
	float                                              DefaultValue;                                               // 0x0028   (0x0004)  
	bool                                               bHasDefaultValue;                                           // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCSection
/// Size: 0x0168 (360 bytes) (0x0000F0 - 0x000258) align 8 pad: 0x0000
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{ 
public:
	class UAkRtpc*                                     RTPC;                                                       // 0x00F0   (0x0008)  
	FString                                            Name;                                                       // 0x00F8   (0x0010)  
	FRichCurve                                         FloatCurve;                                                 // 0x0108   (0x0080)  
	FMovieSceneFloatChannelSerializationHelper         FloatChannelSerializationHelper;                            // 0x0188   (0x0030)  
	FMovieSceneFloatChannel                            RTPCChannel;                                                // 0x01B8   (0x00A0)  
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCTrack
/// Size: 0x0008 (8 bytes) (0x000098 - 0x0000A0) align 8 pad: 0x0000
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Class /Script/AkAudio.PostEventAsync
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000098) align 8 pad: 0x0000
class UPostEventAsync : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,454) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0048   (0x0050)  MISSED
	// class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, bool bStopWhenAttachedToDestroyed); // [0x14c8a80] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void PollPostEventFuture();                                                                                              // [0x14c8a40] Final|Native|Private 
};

/// Class /Script/AkAudio.PostEventAtLocationAsync
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000088) align 8 pad: 0x0000
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,455) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0048   (0x0040)  MISSED
	// class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation); // [0x14c8c70] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// void PollPostEventFuture();                                                                                              // [0x14c8a60] Final|Native|Private 
};

/// Struct /Script/AkAudio.AKWaapiJsonObject
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FAKWaapiJsonObject
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/AkAudio.AkWaapiSubscriptionId
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FAkWaapiSubscriptionId
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkMidiEventBase
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 pad: 0x0000
struct FAkMidiEventBase
{ 
	EAkMidiEventType                                   Type;                                                       // 0x0000   (0x0001)  
	char                                               Chan;                                                       // 0x0001   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiProgramChange
/// Size: 0x0001 (1 bytes) (0x000002 - 0x000003) align 1 pad: 0x0000
struct FAkMidiProgramChange : FAkMidiEventBase
{ 
	char                                               ProgramNum;                                                 // 0x0002   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiChannelAftertouch
/// Size: 0x0001 (1 bytes) (0x000002 - 0x000003) align 1 pad: 0x0000
struct FAkMidiChannelAftertouch : FAkMidiEventBase
{ 
	char                                               Value;                                                      // 0x0002   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiNoteAftertouch
/// Size: 0x0002 (2 bytes) (0x000002 - 0x000004) align 1 pad: 0x0000
struct FAkMidiNoteAftertouch : FAkMidiEventBase
{ 
	char                                               Note;                                                       // 0x0002   (0x0001)  
	char                                               Value;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiPitchBend
/// Size: 0x0006 (6 bytes) (0x000002 - 0x000008) align 4 pad: 0x0000
struct FAkMidiPitchBend : FAkMidiEventBase
{ 
	char                                               ValueLsb;                                                   // 0x0002   (0x0001)  
	char                                               ValueMsb;                                                   // 0x0003   (0x0001)  
	int32_t                                            FullValue;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkMidiCc
/// Size: 0x0002 (2 bytes) (0x000002 - 0x000004) align 1 pad: 0x0000
struct FAkMidiCc : FAkMidiEventBase
{ 
	EAkMidiCcValues                                    Cc;                                                         // 0x0002   (0x0001)  
	char                                               Value;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiNoteOnOff
/// Size: 0x0002 (2 bytes) (0x000002 - 0x000004) align 1 pad: 0x0000
struct FAkMidiNoteOnOff : FAkMidiEventBase
{ 
	char                                               Note;                                                       // 0x0002   (0x0001)  
	char                                               Velocity;                                                   // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiGeneric
/// Size: 0x0002 (2 bytes) (0x000002 - 0x000004) align 1 pad: 0x0000
struct FAkMidiGeneric : FAkMidiEventBase
{ 
	char                                               Param1;                                                     // 0x0002   (0x0001)  
	char                                               Param2;                                                     // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkOutputSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FAkOutputSettings
{ 
	FString                                            AudioDeviceShareSetName;                                    // 0x0000   (0x0010)  
	int32_t                                            IdDevice;                                                   // 0x0010   (0x0004)  
	PanningRule                                        PanRule;                                                    // 0x0014   (0x0001)  
	AkChannelConfiguration                             ChannelConfig;                                              // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/AkAudio.AkChannelMask
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FAkChannelMask
{ 
	int32_t                                            ChannelMask;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithCommSelection
/// Size: 0x0008 (8 bytes) (0x000018 - 0x000020) align 8 pad: 0x0000
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings
{ 
	EAkCommSystem                                      CommunicationSystem;                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkReverbDescriptor
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FAkReverbDescriptor
{ 
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0000   (0x0018)  MISSED
	class UPrimitiveComponent*                         Primitive;                                                  // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkAcousticTextureParams
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 pad: 0x0000
struct FAkAcousticTextureParams
{ 
	FVector4                                           AbsorptionValues;                                           // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/AkAudio.AkGeometrySurfacePropertiesToMap
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FAkGeometrySurfacePropertiesToMap
{ 
	SDK_UNDEFINED(48,456) /* TWeakObjectPtr<UAkAcousticTexture*> */ __um(AcousticTexture);                         // 0x0000   (0x0030)  
	float                                              OcclusionValue;                                             // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkSurfaceEdgeInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 pad: 0x0000
struct FAkSurfaceEdgeInfo
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/AkAudio.AkSurfaceEdgeVerts
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FAkSurfaceEdgeVerts
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/AkAudio.AkWaapiFieldNames
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FAkWaapiFieldNames
{ 
	FString                                            FieldName;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkWaapiUri
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FAkWaapiUri
{ 
	FString                                            Uri;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.MovieSceneAkAudioEventTemplate
/// Size: 0x0008 (8 bytes) (0x000020 - 0x000028) align 8 pad: 0x0000
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneAkAudioEventSection*              Section;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/AkAudio.MovieSceneAkAudioRTPCTemplate
/// Size: 0x0008 (8 bytes) (0x000020 - 0x000028) align 8 pad: 0x0000
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneAkAudioRTPCSection*               Section;                                                    // 0x0020   (0x0008)  
};

