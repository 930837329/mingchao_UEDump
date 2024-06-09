
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KuroPhysicsSplit.KuroPhysicsSplitSystem
/// Size: 0x0078 (120 bytes) (0x000038 - 0x0000B0) align 8 pad: 0x0000
class UKuroPhysicsSplitSystem : public UKuroPhysicsSplitSystemBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	SDK_UNDEFINED(80,1475) /* TSet<UActorComponent*> */ __um(NoPhysicsCompSet);                                    // 0x0040   (0x0050)  
	TArray<class UActorComponent*>                     ToTickCompList;                                             // 0x0090   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00A0   (0x0010)  MISSED
	// void StartTickPhysicsStateBP(class UWorld* World, bool bUseProcessNumPerFrame, int32_t ProcessNumPerFrame);              // [0x10d15b0] Final|Native|Static|Public|BlueprintCallable 
	// bool IsTickFinishBP(class UWorld* World);                                                                                // [0x10d1520] Final|Native|Static|Public|BlueprintCallable 
};

