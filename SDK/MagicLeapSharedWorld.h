
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FMagicLeapSharedWorldSharedData
{ 
	TArray<FGuid>                                      PinIDs;                                                     // 0x0000   (0x0010)  
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
/// Size: 0x00D0 (208 bytes) (0x000398 - 0x000468) align 8 pad: 0x0000
class AMagicLeapSharedWorldGameMode : public AGameMode
{ 
public:
	FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x0398   (0x0010)  
	SDK_UNDEFINED(16,1553) /* FMulticastInlineDelegate */ __um(OnNewLocalDataFromClients);                         // 0x03A8   (0x0010)  
	float                                              PinSelectionConfidenceThreshold;                            // 0x03B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xA4];                                      // 0x03BC   (0x00A4)  MISSED
	class AMagicLeapSharedWorldPlayerController*       ChosenOne;                                                  // 0x0460   (0x0008)  
	// bool SendSharedWorldDataToClients();                                                                                     // [0x21cb9c0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// void SelectChosenOne();                                                                                                  // [0x21cb9a0] BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// void MagicLeapOnNewLocalDataFromClients__DelegateSignature();                                                            // [0x25a7960] MulticastDelegate|Public|Delegate 
	// void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData);                                      // [0x21cb880] BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FMagicLeapSharedWorldAlignmentTransforms
{ 
	TArray<FTransform>                                 AlignmentTransforms;                                        // 0x0000   (0x0010)  
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState
/// Size: 0x0040 (64 bytes) (0x000320 - 0x000360) align 8 pad: 0x0000
class AMagicLeapSharedWorldGameState : public AGameState
{ 
public:
	FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x0320   (0x0010)  
	FMagicLeapSharedWorldAlignmentTransforms           AlignmentTransforms;                                        // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,1554) /* FMulticastInlineDelegate */ __um(OnSharedWorldDataUpdated);                          // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,1555) /* FMulticastInlineDelegate */ __um(OnAlignmentTransformsUpdated);                      // 0x0350   (0x0010)  
	// void OnReplicate_SharedWorldData();                                                                                      // [0x21cb980] Final|Native|Private 
	// void OnReplicate_AlignmentTransforms();                                                                                  // [0x21cb960] Final|Native|Private 
	// void MagicLeapSharedWorldEvent__DelegateSignature();                                                                     // [0x25a7960] MulticastDelegate|Public|Delegate 
	// FTransform CalculateXRCameraRootTransform();                                                                             // [0x21cb730] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
/// Size: 0x0018 (24 bytes) (0x000618 - 0x000630) align 8 pad: 0x0000
class AMagicLeapSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0618   (0x0018)  MISSED
	// void ServerSetLocalWorldData(FMagicLeapSharedWorldLocalData LocalWorldReplicationData);                                  // [0x21cba90] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// void ServerSetAlignmentTransforms(FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms);                       // [0x21cb9f0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// bool IsChosenOne();                                                                                                      // [0x21cb930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// void ClientSetChosenOne(bool bChosenOne);                                                                                // [0x21cb7f0] Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable 
	// void ClientMarkReadyForSendingLocalData();                                                                               // [0x21cb7d0] Net|NetReliableNative|Event|Public|NetClient 
	// bool CanSendLocalDataToServer();                                                                                         // [0x21cb7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPinData
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FMagicLeapSharedWorldPinData
{ 
	FGuid                                              PinId;                                                      // 0x0000   (0x0010)  
	FMagicLeapARPinState                               PinState;                                                   // 0x0010   (0x0014)  
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FMagicLeapSharedWorldLocalData
{ 
	TArray<FMagicLeapSharedWorldPinData>               LocalPins;                                                  // 0x0000   (0x0010)  
};

