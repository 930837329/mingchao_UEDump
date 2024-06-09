
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x0060 (96 bytes) (0x000040 - 0x0000A0) align 16 pad: 0x0000
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0040   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0048   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x0054   (0x000C)  
	FVector                                            Scale;                                                      // 0x0060   (0x000C)  
	bool                                               bAbsoluteScale;                                             // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x23];                                      // 0x006D   (0x0023)  MISSED
	bool                                               Attached : 1;                                               // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	FName                                              SocketName;                                                 // 0x0094   (0x000C)  
	// class UFXSystemComponent* GetSpawnedEffect();                                                                            // [0xea7700] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0030 (48 bytes) (0x000040 - 0x000070) align 8 pad: 0x0000
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0040   (0x0008)  
	FName                                              SocketName;                                                 // 0x0048   (0x000C)  
	FVector                                            LocationOffset;                                             // 0x0054   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x0060   (0x000C)  
	bool                                               bDestroyAtEnd;                                              // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

