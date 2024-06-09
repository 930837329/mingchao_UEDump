
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: GameplayTasks

/// Enum /Script/KuroGAS.EIntervalLockType
/// Size: 0x01 (1 bytes)
enum class EIntervalLockType : uint8_t
{
	EIntervalLockType__NotLocked                                                     = 0,
	EIntervalLockType__LockUpperBound                                                = 1,
	EIntervalLockType__LockLowerBound                                                = 2,
	EIntervalLockType__LockBoth                                                      = 3
};

/// Class /Script/KuroGAS.AsyncTaskAnyAttributeChanged
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class UAsyncTaskAnyAttributeChanged : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,545) /* FMulticastInlineDelegate */ __um(OnAttributeChanged);                                 // 0x0038   (0x0010)  
	class UAbilitySystemComponent*                     ASC;                                                        // 0x0048   (0x0008)  
	// class UAsyncTaskAnyAttributeChanged* ListenForAnyAttributeChange(class UAbilitySystemComponent* AbilitySystemComponent); // [0xf33f40] Final|Native|Static|Public 
	// void EndTask();                                                                                                          // [0xf33710] Final|Native|Public  
};

/// Class /Script/KuroGAS.AsyncTaskAnyEffectInhibitionChanged
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class UAsyncTaskAnyEffectInhibitionChanged : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,546) /* FMulticastInlineDelegate */ __um(OnEffectInhibitionChanged);                          // 0x0038   (0x0010)  
	class UAbilitySystemComponent*                     AbilityComp;                                                // 0x0048   (0x0008)  
	// class UAsyncTaskAnyEffectInhibitionChanged* ListenForAnyEffectInhibitionChanged(class UAbilitySystemComponent* AbilityComp); // [0xf33fd0] Final|Native|Static|Private 
	// void EndTask();                                                                                                          // [0xf33730] Final|Native|Private 
};

/// Class /Script/KuroGAS.AsyncTaskAnyEffectRemoved
/// Size: 0x0030 (48 bytes) (0x000038 - 0x000068) align 8 pad: 0x0000
class UAsyncTaskAnyEffectRemoved : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,547) /* FMulticastInlineDelegate */ __um(OnEffectRemoved);                                    // 0x0038   (0x0010)  
	class UAbilitySystemComponent*                     ASC;                                                        // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED
	// class UAsyncTaskAnyEffectRemoved* ListenForAnyEffectRemoved(class UAbilitySystemComponent* AbilitySystemComponent);      // [0xf34060] Final|Native|Static|Private 
	// void EndTask();                                                                                                          // [0xf33730] Final|Native|Private 
};

/// Class /Script/KuroGAS.AsyncTaskAnyEffectStackChanged
/// Size: 0x0030 (48 bytes) (0x000038 - 0x000068) align 8 pad: 0x0000
class UAsyncTaskAnyEffectStackChanged : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,548) /* FMulticastInlineDelegate */ __um(OnStackChanged);                                     // 0x0038   (0x0010)  
	class UAbilitySystemComponent*                     AbilityComp;                                                // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED
	// class UAsyncTaskAnyEffectStackChanged* ListenForAnyEffectStackChanged(class UAbilitySystemComponent* AbilityComp);       // [0xf340f0] Final|Native|Static|Private 
	// void EndTask();                                                                                                          // [0xf33750] Final|Native|Private 
};

/// Class /Script/KuroGAS.AsyncTaskEffectApplied
/// Size: 0x0030 (48 bytes) (0x000038 - 0x000068) align 8 pad: 0x0000
class UAsyncTaskEffectApplied : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,549) /* FMulticastInlineDelegate */ __um(OnEffectApplied);                                    // 0x0038   (0x0010)  
	class UAbilitySystemComponent*                     ASC;                                                        // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED
	// class UAsyncTaskEffectApplied* ListenForEffectApplied(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayTag EffectGameplayTag, FGameplayTag IgnoreGameplayTag); // [0xf34180] Final|Native|Static|Private 
	// void EndTask();                                                                                                          // [0xf33770] Final|Native|Private 
};

/// Class /Script/KuroGAS.AsyncTaskEffectDebugString
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class UAsyncTaskEffectDebugString : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,550) /* FMulticastInlineDelegate */ __um(OnAnyGameplayEffectExecuted);                        // 0x0038   (0x0010)  
	class UAbilitySystemComponent*                     ASC;                                                        // 0x0048   (0x0008)  
	// class UAsyncTaskEffectDebugString* ListenForGameplayEffectExecutedDebugString(class UAbilitySystemComponent* AbilitySystemComponent); // [0xf34350] Final|Native|Static|Private 
	// void EndTask();                                                                                                          // [0xf33790] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/KuroGAS.AsyncTaskEffectInhibitionChanged
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
class UAsyncTaskEffectInhibitionChanged : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,551) /* FMulticastInlineDelegate */ __um(OnInhibitionChanged);                                // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0048   (0x0010)  MISSED
	// class UAsyncTaskEffectInhibitionChanged* ListenForInhibitionChanged(FActiveGameplayEffectHandle Handle);                 // [0xf343e0] Final|Native|Static|Public 
	// void EndTask();                                                                                                          // [0xf337b0] Final|Native|Public  
};

/// Class /Script/KuroGAS.AsyncTaskEffectStackChanged
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
class UAsyncTaskEffectStackChanged : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,552) /* FMulticastInlineDelegate */ __um(OnStackChanged);                                     // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0048   (0x0010)  MISSED
	// class UAsyncTaskEffectStackChanged* ListenForStackChanged(FActiveGameplayEffectHandle Handle);                           // [0xf34610] Final|Native|Static|Public 
	// void EndTask();                                                                                                          // [0xf337d0] Final|Native|Public  
};

/// Class /Script/KuroGAS.AsyncTaskGameplayCueNotify
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class UAsyncTaskGameplayCueNotify : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,553) /* FMulticastInlineDelegate */ __um(GameplayCueEvent);                                   // 0x0038   (0x0010)  
	class UAbilitySystemComponent*                     ASC;                                                        // 0x0048   (0x0008)  
	// class UAsyncTaskGameplayCueNotify* ListenForGameplayCueNotify(class UAbilitySystemComponent* AbilitySystemComponent);    // [0xf342c0] Final|Native|Static|Private 
	// void EndTask();                                                                                                          // [0xf33790] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/KuroGAS.AsyncTaskPlayMontageAndWait
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000080) align 8 pad: 0x0000
class UAsyncTaskPlayMontageAndWait : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,554) /* FMulticastInlineDelegate */ __um(EndCallback);                                        // 0x0038   (0x0010)  
	bool                                               bShouldEmitOnEndedEvent;                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	class UAnimInstance*                               AnimInstance;                                               // 0x0050   (0x0008)  
	class UAnimMontage*                                MontageToPlay;                                              // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0060   (0x0020)  MISSED
	// void StopMontage();                                                                                                      // [0xf35520] Final|Native|Private|BlueprintCallable 
	// class UAsyncTaskPlayMontageAndWait* ListenForPlayMontage(class UAnimInstance* AnimInstance, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0xf34470] Final|Native|Static|Private 
	// void EndTask();                                                                                                          // [0xf337f0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/KuroGAS.AsyncTaskTagCountChanged
/// Size: 0x0028 (40 bytes) (0x000038 - 0x000060) align 8 pad: 0x0000
class UAsyncTaskTagCountChanged : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,555) /* FMulticastInlineDelegate */ __um(OnTagCountChanged);                                  // 0x0038   (0x0010)  
	class UAbilitySystemComponent*                     ASC;                                                        // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0050   (0x0010)  MISSED
	// class UAsyncTaskTagCountChanged* ListenForTagCountChanged(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayTag Tag); // [0xf346a0] Final|Native|Static|Public 
	// void EndTask();                                                                                                          // [0xf33810] Final|Native|Public  
};

/// Class /Script/KuroGAS.AsyncTaskTagSignificantChanged
/// Size: 0x0028 (40 bytes) (0x000038 - 0x000060) align 8 pad: 0x0000
class UAsyncTaskTagSignificantChanged : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,556) /* FMulticastInlineDelegate */ __um(OnTagSignificantChanged);                            // 0x0038   (0x0010)  
	class UAbilitySystemComponent*                     ASC;                                                        // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0050   (0x0010)  MISSED
	// class UAsyncTaskTagSignificantChanged* ListenForTagSignificantChanged(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayTag Tag); // [0xf34790] Final|Native|Static|Public 
	// void EndTask();                                                                                                          // [0xf33830] Final|Native|Public  
};

/// Class /Script/KuroGAS.BaseAbilitySystemComponent
/// Size: 0x0000 (0 bytes) (0x001370 - 0x001370) align 8 pad: 0x0000
class UBaseAbilitySystemComponent : public UAbilitySystemComponent
{ 
public:
	// bool UpdateActiveGameplayEffectDurationHandle(FActiveGameplayEffectHandle Handle, float DurationModifyValue);            // [0xf35540] Final|Native|Public|BlueprintCallable 
	// void SetDurationMagnitudeByTag(class UGameplayEffect* Ge, FGameplayTag& ModifierTag);                                    // [0xf35440] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void SetDurationMagnitudeByAttributeId(class UGameplayEffect* Ge, EAttributeBasedFloatCalculationType CalculationType, int32_t AttributeID, FGameplayTag& DataTag, FGameplayTag& DataTag2, EGameplayEffectAttributeCaptureSource InSource, bool InSnapShot); // [0xf35200] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void ResetDilationForActiveEffects(float TimeDilation);                                                                  // [0xf35180] Final|Native|Public|BlueprintCallable 
	// void RemoveActiveEffectsByUniqueServerId(int32_t GameplayEffectSpecServerId);                                            // [0xf350f0] Final|Native|Public|BlueprintCallable 
	// int32_t RemoveActiveEffectsById(int64_t GeId, int32_t StackCount);                                                       // [0xf35020] Final|Native|Public|BlueprintCallable 
	// void RemoveAbility(FGameplayAbilitySpecHandle& Handle);                                                                  // [0xf34f80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void PauseAllActiveGameplayEffects(bool bPause);                                                                         // [0xf34ef0] Final|Native|Public|BlueprintCallable 
	// void PauseActiveGameplayEffect(FActiveGameplayEffectHandle Handle, bool bPause);                                         // [0xf34e10] Final|Native|Public|BlueprintCallable 
	// bool OnAnyTagChangeInternal(FGameplayTag& GameplayTag, int32_t NewTagCount);                                             // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// FGameplayEffectSpecHandle MakeRemoteDynamicOutgoingSpec(class UGameplayEffect* GameplayEffect, float Level, FGameplayEffectContextHandle Context, int32_t GameplayEffectServerId, int32_t InGeHandleId); // [0xf34ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// FGameplayEffectSpecHandle MakeDynamicOutgoingSpec(class UGameplayEffect* GameplayEffect, float Level, FGameplayEffectContextHandle Context, int32_t GameplayEffectServerId); // [0xf34980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// class UGameplayEffect* MakeDynamicGameplayEffect(FName GeName, int64_t GeId);                                            // [0xf34880] Final|Native|Public|BlueprintCallable 
	// void InternalApplyModToAttribute(int32_t AttributeID, TEnumAsByte<EGameplayModOp> ModifierOp, float ModifierMagnitude);  // [0xf33e20] Final|Native|Public|BlueprintCallable 
	// bool HasGameplayTag(FGameplayTag GameplayTag);                                                                           // [0xf33d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool HasAnyGameplayTag(FGameplayTagContainer& GameplayTagContainer);                                                     // [0xf33ca0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// bool HasAllGameplayTag(FGameplayTagContainer& GameplayTagContainer);                                                     // [0xf33bd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// int32_t GetGameplayEffectCountById(int64_t GameplayEffectId, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0xf33ac0] Final|Native|Public|BlueprintCallable 
	// TArray<FActiveGameplayEffectHandle> GetActiveEffectsById(int64_t GeId);                                                  // [0xf339e0] Final|Native|Public|BlueprintCallable 
	// TArray<FActiveGameplayEffectHandle> GetActiveEffectsByGrantedTags(FGameplayTag& Tag);                                    // [0xf338f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// FGameplayAbilitySpecHandle GetAbility(class UClass*& Ability);                                                           // [0xf33850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// void DestroyDynamicGameplayEffect(class UGameplayEffect* Ge);                                                            // [0xf33680] Final|Native|Public|BlueprintCallable 
	// void BP_InitAbilityActorInfo(FName AnimInstanceTag);                                                                     // [0xf335e0] Final|Native|Public|BlueprintCallable 
	// FActiveGameplayEffectHandle ApplyGeToSelfById(int64_t GameplayEffectId, FGameplayEffectContextHandle& Context, float Level, int32_t ServerId); // [0x25a7960] Event|Public|HasOutParms|BlueprintEvent 
	// void AddGeModifierByTag(class UGameplayEffect* Ge, int32_t ModifiedAttributeId, TEnumAsByte<EGameplayModOp> ModOp, FGameplayTag& ModifierTag); // [0xf33470] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void AddGeModifierByMMC(class UGameplayEffect* Ge, int32_t ModifiedAttributeId, TEnumAsByte<EGameplayModOp> ModOp, class UClass*& CalculationClassMagnitude); // [0xf33310] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void AddGeModifierByKey(class UGameplayEffect* Ge, int32_t ModifiedAttributeId, TEnumAsByte<EGameplayModOp> ModOp, int32_t ModifierKey); // [0xf331b0] Final|Native|Public|BlueprintCallable|Const 
	// void AddGeModifierByAttributeId(class UGameplayEffect* Ge, int32_t ModifiedAttributeId, EAttributeBasedFloatCalculationType CalculationType, TEnumAsByte<EGameplayModOp> ModOp, int32_t AttributeID, FGameplayTag& DataTag, FGameplayTag& DataTag2, EGameplayEffectAttributeCaptureSource InSource, bool InSnapShot); // [0xf32ee0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// void AddGeGrantGa(class UGameplayEffect* Ge, class UClass*& Ability, int32_t Level, EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy); // [0xf32d80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/KuroGAS.BaseAttributeSet
/// Size: 0x0CD8 (3288 bytes) (0x000038 - 0x000D10) align 8 pad: 0x0000
class UBaseAttributeSet : public UAttributeSet
{ 
public:
	FGameplayAttributeData                             Lv;                                                         // 0x0038   (0x0018)  
	FGameplayAttributeData                             LifeMax;                                                    // 0x0050   (0x0018)  
	FGameplayAttributeData                             LIFE;                                                       // 0x0068   (0x0018)  
	FGameplayAttributeData                             Sheild;                                                     // 0x0080   (0x0018)  
	FGameplayAttributeData                             SheildDamageChange;                                         // 0x0098   (0x0018)  
	FGameplayAttributeData                             SheildDamageReduce;                                         // 0x00B0   (0x0018)  
	FGameplayAttributeData                             Atk;                                                        // 0x00C8   (0x0018)  
	FGameplayAttributeData                             Crit;                                                       // 0x00E0   (0x0018)  
	FGameplayAttributeData                             CritDamage;                                                 // 0x00F8   (0x0018)  
	FGameplayAttributeData                             Def;                                                        // 0x0110   (0x0018)  
	FGameplayAttributeData                             EnergyEfficiency;                                           // 0x0128   (0x0018)  
	FGameplayAttributeData                             CDReduse;                                                   // 0x0140   (0x0018)  
	FGameplayAttributeData                             ReactionEfficiency;                                         // 0x0158   (0x0018)  
	FGameplayAttributeData                             DamageChangeNormalSkill;                                    // 0x0170   (0x0018)  
	FGameplayAttributeData                             DamageChange;                                               // 0x0188   (0x0018)  
	FGameplayAttributeData                             DamageReduce;                                               // 0x01A0   (0x0018)  
	FGameplayAttributeData                             DamageChangeAuto;                                           // 0x01B8   (0x0018)  
	FGameplayAttributeData                             DamageChangeCast;                                           // 0x01D0   (0x0018)  
	FGameplayAttributeData                             DamageChangeUltra;                                          // 0x01E8   (0x0018)  
	FGameplayAttributeData                             DamageChangeQTE;                                            // 0x0200   (0x0018)  
	FGameplayAttributeData                             DamageChangePhys;                                           // 0x0218   (0x0018)  
	FGameplayAttributeData                             DamageChangeElement1;                                       // 0x0230   (0x0018)  
	FGameplayAttributeData                             DamageChangeElement2;                                       // 0x0248   (0x0018)  
	FGameplayAttributeData                             DamageChangeElement3;                                       // 0x0260   (0x0018)  
	FGameplayAttributeData                             DamageChangeElement4;                                       // 0x0278   (0x0018)  
	FGameplayAttributeData                             DamageChangeElement5;                                       // 0x0290   (0x0018)  
	FGameplayAttributeData                             DamageChangeElement6;                                       // 0x02A8   (0x0018)  
	FGameplayAttributeData                             DamageResistancePhys;                                       // 0x02C0   (0x0018)  
	FGameplayAttributeData                             DamageResistanceElement1;                                   // 0x02D8   (0x0018)  
	FGameplayAttributeData                             DamageResistanceElement2;                                   // 0x02F0   (0x0018)  
	FGameplayAttributeData                             DamageResistanceElement3;                                   // 0x0308   (0x0018)  
	FGameplayAttributeData                             DamageResistanceElement4;                                   // 0x0320   (0x0018)  
	FGameplayAttributeData                             DamageResistanceElement5;                                   // 0x0338   (0x0018)  
	FGameplayAttributeData                             DamageResistanceElement6;                                   // 0x0350   (0x0018)  
	FGameplayAttributeData                             HealChange;                                                 // 0x0368   (0x0018)  
	FGameplayAttributeData                             HealedChange;                                               // 0x0380   (0x0018)  
	FGameplayAttributeData                             DamageReducePhys;                                           // 0x0398   (0x0018)  
	FGameplayAttributeData                             DamageReduceElement1;                                       // 0x03B0   (0x0018)  
	FGameplayAttributeData                             DamageReduceElement2;                                       // 0x03C8   (0x0018)  
	FGameplayAttributeData                             DamageReduceElement3;                                       // 0x03E0   (0x0018)  
	FGameplayAttributeData                             DamageReduceElement4;                                       // 0x03F8   (0x0018)  
	FGameplayAttributeData                             DamageReduceElement5;                                       // 0x0410   (0x0018)  
	FGameplayAttributeData                             DamageReduceElement6;                                       // 0x0428   (0x0018)  
	FGameplayAttributeData                             ReactionChange1;                                            // 0x0440   (0x0018)  
	FGameplayAttributeData                             ReactionChange2;                                            // 0x0458   (0x0018)  
	FGameplayAttributeData                             ReactionChange3;                                            // 0x0470   (0x0018)  
	FGameplayAttributeData                             ReactionChange4;                                            // 0x0488   (0x0018)  
	FGameplayAttributeData                             ReactionChange5;                                            // 0x04A0   (0x0018)  
	FGameplayAttributeData                             ReactionChange6;                                            // 0x04B8   (0x0018)  
	FGameplayAttributeData                             ReactionChange7;                                            // 0x04D0   (0x0018)  
	FGameplayAttributeData                             ReactionChange8;                                            // 0x04E8   (0x0018)  
	FGameplayAttributeData                             ReactionChange9;                                            // 0x0500   (0x0018)  
	FGameplayAttributeData                             ReactionChange10;                                           // 0x0518   (0x0018)  
	FGameplayAttributeData                             ReactionChange11;                                           // 0x0530   (0x0018)  
	FGameplayAttributeData                             ReactionChange12;                                           // 0x0548   (0x0018)  
	FGameplayAttributeData                             ReactionChange13;                                           // 0x0560   (0x0018)  
	FGameplayAttributeData                             ReactionChange14;                                           // 0x0578   (0x0018)  
	FGameplayAttributeData                             ReactionChange15;                                           // 0x0590   (0x0018)  
	FGameplayAttributeData                             EnergyMax;                                                  // 0x05A8   (0x0018)  
	FGameplayAttributeData                             Energy;                                                     // 0x05C0   (0x0018)  
	FGameplayAttributeData                             SpecialEnergy1Max;                                          // 0x05D8   (0x0018)  
	FGameplayAttributeData                             SpecialEnergy1;                                             // 0x05F0   (0x0018)  
	FGameplayAttributeData                             SpecialEnergy2Max;                                          // 0x0608   (0x0018)  
	FGameplayAttributeData                             SpecialEnergy2;                                             // 0x0620   (0x0018)  
	FGameplayAttributeData                             SpecialEnergy3Max;                                          // 0x0638   (0x0018)  
	FGameplayAttributeData                             SpecialEnergy3;                                             // 0x0650   (0x0018)  
	FGameplayAttributeData                             SpecialEnergy4Max;                                          // 0x0668   (0x0018)  
	FGameplayAttributeData                             SpecialEnergy4;                                             // 0x0680   (0x0018)  
	FGameplayAttributeData                             StrengthMax;                                                // 0x0698   (0x0018)  
	FGameplayAttributeData                             Strength;                                                   // 0x06B0   (0x0018)  
	FGameplayAttributeData                             StrengthRecover;                                            // 0x06C8   (0x0018)  
	FGameplayAttributeData                             StrengthPunishTime;                                         // 0x06E0   (0x0018)  
	FGameplayAttributeData                             StrengthRun;                                                // 0x06F8   (0x0018)  
	FGameplayAttributeData                             StrengthSwim;                                               // 0x0710   (0x0018)  
	FGameplayAttributeData                             StrengthFastSwim;                                           // 0x0728   (0x0018)  
	FGameplayAttributeData                             StrengthClimb;                                              // 0x0740   (0x0018)  
	FGameplayAttributeData                             StrengthFastClimb;                                          // 0x0758   (0x0018)  
	FGameplayAttributeData                             HardnessMax;                                                // 0x0770   (0x0018)  
	FGameplayAttributeData                             Hardness;                                                   // 0x0788   (0x0018)  
	FGameplayAttributeData                             HardnessRecover;                                            // 0x07A0   (0x0018)  
	FGameplayAttributeData                             HardnessPunishTime;                                         // 0x07B8   (0x0018)  
	FGameplayAttributeData                             HardnessChange;                                             // 0x07D0   (0x0018)  
	FGameplayAttributeData                             HardnessReduce;                                             // 0x07E8   (0x0018)  
	FGameplayAttributeData                             ToughMax;                                                   // 0x0800   (0x0018)  
	FGameplayAttributeData                             Tough;                                                      // 0x0818   (0x0018)  
	FGameplayAttributeData                             ToughRecover;                                               // 0x0830   (0x0018)  
	FGameplayAttributeData                             ToughChange;                                                // 0x0848   (0x0018)  
	FGameplayAttributeData                             ToughReduce;                                                // 0x0860   (0x0018)  
	FGameplayAttributeData                             ElementPower1;                                              // 0x0878   (0x0018)  
	FGameplayAttributeData                             ElementPower2;                                              // 0x0890   (0x0018)  
	FGameplayAttributeData                             ElementPower3;                                              // 0x08A8   (0x0018)  
	FGameplayAttributeData                             ElementPower4;                                              // 0x08C0   (0x0018)  
	FGameplayAttributeData                             ElementPower5;                                              // 0x08D8   (0x0018)  
	FGameplayAttributeData                             ElementPower6;                                              // 0x08F0   (0x0018)  
	FGameplayAttributeData                             SpecialDamageChange;                                        // 0x0908   (0x0018)  
	FGameplayAttributeData                             StrengthFastClimbCost;                                      // 0x0920   (0x0018)  
	FGameplayAttributeData                             ElementPropertyType;                                        // 0x0938   (0x0018)  
	FGameplayAttributeData                             WeakTime;                                                   // 0x0950   (0x0018)  
	FGameplayAttributeData                             IgnoreDefRate;                                              // 0x0968   (0x0018)  
	FGameplayAttributeData                             IgnoreDamageResistancePhys;                                 // 0x0980   (0x0018)  
	FGameplayAttributeData                             IgnoreDamageResistanceElement1;                             // 0x0998   (0x0018)  
	FGameplayAttributeData                             IgnoreDamageResistanceElement2;                             // 0x09B0   (0x0018)  
	FGameplayAttributeData                             IgnoreDamageResistanceElement3;                             // 0x09C8   (0x0018)  
	FGameplayAttributeData                             IgnoreDamageResistanceElement4;                             // 0x09E0   (0x0018)  
	FGameplayAttributeData                             IgnoreDamageResistanceElement5;                             // 0x09F8   (0x0018)  
	FGameplayAttributeData                             IgnoreDamageResistanceElement6;                             // 0x0A10   (0x0018)  
	FGameplayAttributeData                             SkillToughRatio;                                            // 0x0A28   (0x0018)  
	FGameplayAttributeData                             StrengthClimbJump;                                          // 0x0A40   (0x0018)  
	FGameplayAttributeData                             StrengthGliding;                                            // 0x0A58   (0x0018)  
	FGameplayAttributeData                             Mass;                                                       // 0x0A70   (0x0018)  
	FGameplayAttributeData                             BrakingFrictionFactor;                                      // 0x0A88   (0x0018)  
	FGameplayAttributeData                             GravityScale;                                               // 0x0AA0   (0x0018)  
	FGameplayAttributeData                             SpeedRatio;                                                 // 0x0AB8   (0x0018)  
	FGameplayAttributeData                             DamageChangePhantom;                                        // 0x0AD0   (0x0018)  
	FGameplayAttributeData                             AutoAttackSpeed;                                            // 0x0AE8   (0x0018)  
	FGameplayAttributeData                             CastAttackSpeed;                                            // 0x0B00   (0x0018)  
	FGameplayAttributeData                             StatusBuildUp1Max;                                          // 0x0B18   (0x0018)  
	FGameplayAttributeData                             StatusBuildUp1;                                             // 0x0B30   (0x0018)  
	FGameplayAttributeData                             StatusBuildUp2Max;                                          // 0x0B48   (0x0018)  
	FGameplayAttributeData                             StatusBuildUp2;                                             // 0x0B60   (0x0018)  
	FGameplayAttributeData                             StatusBuildUp3Max;                                          // 0x0B78   (0x0018)  
	FGameplayAttributeData                             StatusBuildUp3;                                             // 0x0B90   (0x0018)  
	FGameplayAttributeData                             StatusBuildUp4Max;                                          // 0x0BA8   (0x0018)  
	FGameplayAttributeData                             StatusBuildUp4;                                             // 0x0BC0   (0x0018)  
	FGameplayAttributeData                             StatusBuildUp5Max;                                          // 0x0BD8   (0x0018)  
	FGameplayAttributeData                             StatusBuildUp5;                                             // 0x0BF0   (0x0018)  
	FGameplayAttributeData                             RageMax;                                                    // 0x0C08   (0x0018)  
	FGameplayAttributeData                             Rage;                                                       // 0x0C20   (0x0018)  
	FGameplayAttributeData                             RageRecover;                                                // 0x0C38   (0x0018)  
	FGameplayAttributeData                             RagePunishTime;                                             // 0x0C50   (0x0018)  
	FGameplayAttributeData                             RageChange;                                                 // 0x0C68   (0x0018)  
	FGameplayAttributeData                             RageReduce;                                                 // 0x0C80   (0x0018)  
	FGameplayAttributeData                             ToughRecoverDelayTime;                                      // 0x0C98   (0x0018)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0CB0   (0x0060)  MISSED
	// void SetReduceMax(float InReduceMax);                                                                                    // [0xf3cf20] Final|Native|Static|Public 
	// void SetElementPowerMax(float InElementPowerMax);                                                                        // [0xf3cd60] Final|Native|Static|Public 
	// void SetAttributeValue(int32_t AttributeType, float BaseValue, float CurrentValue);                                      // [0xf3cbc0] Final|Native|Public  
	// void SetAttributeIntervalLock(int32_t AttributeID, EIntervalLockType LockType, float UpperBoundPercentage, float UpperBoundOffset, float LowerBoundPercentage, float LowerBoundOffset); // [0xf3c9f0] Final|Native|Public  
	// void SetAttackSpeedMax(float InMaxSpeed);                                                                                // [0xf3c970] Final|Native|Static|Public 
	// bool GetAttributeData(int32_t AttributeType, FGameplayAttributeData& AttributeData);                                     // [0xf3b3d0] Final|Native|Public|HasOutParms 
	// float GetAttributeCurrentValueById(int32_t AttributeType);                                                               // [0xf3b330] Final|Native|Public  
	// float GetAttributeBaseValueById(int32_t AttributeType);                                                                  // [0xf3b290] Final|Native|Public  
	// bool CopyAllAttribute(class UBaseAttributeSet* AttributeSet);                                                            // [0xf39cb0] Final|Native|Public  
};

/// Class /Script/KuroGAS.BaseCharacter
/// Size: 0x00B0 (176 bytes) (0x0005A0 - 0x000650) align 16 pad: 0x0000
class ABaseCharacter : public ACharacter
{ 
public:
	FVector                                            CachedActorLocation;                                        // 0x05A0   (0x000C)  
	FRotator                                           CachedActorRotation;                                        // 0x05AC   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x05B8   (0x0008)  MISSED
	FQuat                                              CachedActorQuat;                                            // 0x05C0   (0x0010)  
	FVector                                            CachedActorScale;                                           // 0x05D0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x05DC   (0x0004)  MISSED
	FTransform                                         CachedActorTransform;                                       // 0x05E0   (0x0030)  
	FVector                                            CachedActorUp;                                              // 0x0610   (0x000C)  
	FVector                                            CachedActorForward;                                         // 0x061C   (0x000C)  
	FVector                                            CachedActorVelocity;                                        // 0x0628   (0x000C)  
	bool                                               bInitializeAttributes;                                      // 0x0634   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0635   (0x0003)  MISSED
	class UBaseAttributeSet*                           AttributeSet;                                               // 0x0638   (0x0008)  
	class UBaseAbilitySystemComponent*                 AbilitySystemComponent;                                     // 0x0640   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0648   (0x0008)  MISSED
	// bool SetActorTransformExceptSkelMesh(FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport, bool bIgnoreOverlap); // [0xf3c710] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// bool SetActorLocationAndRotationExceptSkelMesh(FVector& NewLocation, FRotator& NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport, bool bIgnoreOverlap); // [0xf3c4b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// void RefreshCachedVelocity();                                                                                            // [0xf3bf10] Final|Native|Public|BlueprintCallable 
	// void RefreshCachedTransform();                                                                                           // [0xf3bef0] Final|Native|Public|BlueprintCallable 
	// void PreInit();                                                                                                          // [0xf3bed0] Final|Native|Public|BlueprintCallable 
	// void InitializeAttributeSet();                                                                                           // [0xf39d50] Final|Native|Public|BlueprintCallable 
	// void CreateAttribute();                                                                                                  // [0xf39d50] Final|Native|Public|BlueprintCallable 
	// bool ContainsTag(FGameplayTag TagToCheck);                                                                               // [0xf39c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool ContainsAnyTag(FGameplayTagContainer TagToCheck);                                                                   // [0xf39b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// bool ContainsAllTag(FGameplayTagContainer TagToCheck);                                                                   // [0xf39a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/KuroGAS.BaseGameplayAbility
/// Size: 0x0008 (8 bytes) (0x0003C0 - 0x0003C8) align 8 pad: 0x0000
class UBaseGameplayAbility : public UGameplayAbility
{ 
public:
	bool                                               StartOnGiven;                                               // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x03C1   (0x0007)  MISSED
	// void PreAvatarSet();                                                                                                     // [0x25a7960] Event|Public|BlueprintEvent 
	// float GetCallerMagnitudeByTag(FGameplayTag& Tag);                                                                        // [0xf3b4c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KuroGAS.BaseGameplayEffectExecutionCalculation
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UBaseGameplayEffectExecutionCalculation : public UGameplayEffectExecutionCalculation
{ 
public:
	// void ExecuteImplementation(int64_t GameplayEffectId, float Level, int32_t StackNum, FGameplayEffectContextHandle Context, class AActor* Instigator, class AActor* Target); // [0x25a7960] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/KuroGAS.BaseGameplayModMagnitudeCalculation
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UBaseGameplayModMagnitudeCalculation : public UGameplayModMagnitudeCalculation
{ 
public:
	// float CalculationImplementation(int64_t GameplayEffectId, float Level, int32_t StackNum, class AActor* Instigator, class AActor* Target); // [0x25a7960] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/KuroGAS.DamageExecCalculation
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UDamageExecCalculation : public UGameplayEffectExecutionCalculation
{ 
public:
};

/// Class /Script/KuroGAS.GASBPLibrary
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UGASBPLibrary : public UBlueprintFunctionLibrary
{ 
public:
	// bool SetRootComponent(class AActor* TargetActor, class USceneComponent* NewRootComponent);                               // [0xf3cfa0] Final|Native|Static|Public|BlueprintCallable 
	// void SetNeedSyncAttributes(TSet<int32_t>& SourceNeedSyncAttributes);                                                     // [0xf3cde0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void SetAttributeValue(class UBaseAttributeSet* AttributeSet, class UStruct* inStruct);                                  // [0xf3ccd0] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayEffectSpecHandle ResetGameplayEffectSpecPeriod(FGameplayEffectSpecHandle SpecHandle, float NewPeriod);          // [0xf3c330] Final|Native|Static|Public|BlueprintCallable 
	// void RemoveTagFromActor(class UAbilitySystemComponent* ASC, int32_t InTagHash, int32_t MarkTagHash);                     // [0xf3c230] Final|Native|Static|Public 
	// void RemoveBuffByTagFromActor(class UAbilitySystemComponent* ASC, int32_t InTagHash, int32_t MarkTagHash);               // [0xf3c130] Final|Native|Static|Public 
	// void RemoveAllGameplayEffects(class UAbilitySystemComponent* ASC);                                                       // [0xf3c0b0] Final|Native|Static|Public|BlueprintCallable 
	// void RemoveAllDurationGameplayEffects(class UAbilitySystemComponent* ASC);                                               // [0xf3c030] Final|Native|Static|Public|BlueprintCallable 
	// bool RemoveActiveBuff(class UAbilitySystemComponent* ASC, int32_t HandleId, int32_t StacksToRemove);                     // [0xf3bf30] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayTagContainer MakeGameplayTagContainerFromTagHash(int32_t TagHash);                                              // [0xf3be20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void IterateStructAndAssignAttributeSet(class UBaseAttributeSet* AttributeSet, class UStruct* Data);                     // [0xf3bd90] Final|Native|Static|Public|BlueprintCallable 
	// bool IsActiveGameplayEffectInhibited(FActiveGameplayEffectHandle ActiveHandle);                                          // [0xf3bd00] Final|Native|Static|Public|BlueprintCallable 
	// bool IsActiveBuffInhibited(int32_t HandleId);                                                                            // [0xf3bc70] Final|Native|Static|Public|BlueprintCallable 
	// void GetOwnedGameplayTags(class UAbilitySystemComponent* ASC, FGameplayTagContainer& TargetContainer);                   // [0xf3bb80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// int64_t GetNetworkGameplayTagNodeIndexHash();                                                                            // [0xf3bb50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void GetGameplayTags(TMap<int32_t, FGameplayTag>& Tags);                                                                 // [0xf3ba10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// int32_t GetGameplayTagId(FGameplayTag& Tag);                                                                             // [0xf3b970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FGameplayTag GetGameplayTagFromTagHash(int32_t TagHash);                                                                 // [0xf3b8d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// class AActor* GetGameplayEffectContextTarget(FGameplayEffectContextHandle Handle);                                       // [0xf3b7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// void GetGameplayCueNotify(FGameplayTag& GameplayTag, FSoftObjectPath& OutSoftObjectPath);                                // [0xf3b6d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// FString GetGameplayAbilitySystemActivatableAbilitiesDebugString(class UAbilitySystemComponent* ASC);                     // [0xf3b600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FActiveGameplayEffectHandle GetGameplayAbilitySourceGE(class UGameplayAbility* GameplayAbility);                         // [0xf3b570] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// FName GetAssetPath(class UObject* Object);                                                                               // [0xf3b1f0] Final|Native|Static|Public|BlueprintCallable 
	// void GetAllTagsByParentTags(class UAbilitySystemComponent* ASC, FGameplayTag& Query, FGameplayTagContainer& Result);     // [0xf3b0a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// int32_t GetActiveGameplayEffectServerId(FActiveGameplayEffectHandle ActiveHandle);                                       // [0xf3b010] Final|Native|Static|Public|BlueprintCallable 
	// float GetActiveGameplayEffectPeriod(FActiveGameplayEffectHandle ActiveHandle);                                           // [0xf3af80] Final|Native|Static|Public|BlueprintCallable 
	// TArray<FGameplayAttribute> GetActiveGameplayEffectModifiedAttributes(FActiveGameplayEffectHandle ActiveHandle);          // [0xf3ae30] Final|Native|Static|Public|BlueprintCallable 
	// float GetActiveGameplayEffectHandleLevel(FActiveGameplayEffectHandle& Handle);                                           // [0xf3ad90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// class AActor* GetActiveGameplayEffectHandleInstigator(FActiveGameplayEffectHandle& Handle);                              // [0xf3acf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// int64_t GetActiveGameplayEffectHandleGeId(FActiveGameplayEffectHandle& Handle);                                          // [0xf3ac50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FGameplayEffectContextHandle GetActiveGameplayEffectHandleEffectContext(FActiveGameplayEffectHandle& Handle);            // [0xf3ab60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// FGameplayTagContainer GetActiveGameplayEffectGrantedTags(FActiveGameplayEffectHandle ActiveHandle);                      // [0xf3aab0] Final|Native|Static|Public|BlueprintCallable 
	// FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle);                                    // [0xf3a9e0] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayTagContainer GetActiveGameplayEffectAssetTags(FActiveGameplayEffectHandle ActiveHandle);                        // [0xf3a930] Final|Native|Static|Public|BlueprintCallable 
	// float GetActiveBuffTotalDuration(int32_t HandleId);                                                                      // [0xf3a8a0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetActiveBuffStackCount(int32_t HandleId);                                                                       // [0xf3a810] Final|Native|Static|Public|BlueprintCallable 
	// int32_t GetActiveBuffServerId(int32_t HandleId);                                                                         // [0xf3a780] Final|Native|Static|Public|BlueprintCallable 
	// float GetActiveBuffRemainingDuration(int32_t HandleId);                                                                  // [0xf3a6f0] Final|Native|Static|Public|BlueprintCallable 
	// float GetActiveBuffPeriod(int32_t HandleId);                                                                             // [0xf3a660] Final|Native|Static|Public|BlueprintCallable 
	// float GetActiveBuffLevel(int32_t HandleId);                                                                              // [0xf3a5d0] Final|Native|Static|Public|BlueprintCallable 
	// class AActor* GetActiveBuffInstigator(int32_t HandleId);                                                                 // [0xf3a540] Final|Native|Static|Public|BlueprintCallable 
	// int64_t GetActiveBuffId(int32_t HandleId);                                                                               // [0xf3a4b0] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayTagContainer GetActiveBuffGrantedTags(int32_t HandleId);                                                        // [0xf3a400] Final|Native|Static|Public|BlueprintCallable 
	// FString GetActiveBuffDebugString(int32_t HandleId);                                                                      // [0xf3a330] Final|Native|Static|Public|BlueprintCallable 
	// FString GetActiveBuffDebugAttributeString(int32_t HandleId);                                                             // [0xf3a260] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayEffectContextHandle GetActiveBuffContextHandle(int32_t HandleId);                                               // [0xf3a180] Final|Native|Static|Public|BlueprintCallable 
	// FGameplayTagContainer GetActiveBuffAssetTags(int32_t HandleId);                                                          // [0xf3a0d0] Final|Native|Static|Public|BlueprintCallable 
	// int32_t FnvHash(FString str);                                                                                            // [0xf39fe0] Final|Native|Static|Public|BlueprintCallable 
	// TArray<FAssetData> FindAllBlueprintAsset(FName BaseClassName, FString Path);                                             // [0xf39d90] Final|Native|Static|Public|BlueprintCallable 
	// void EnsureGameplayTagDataTableLoaded();                                                                                 // [0xf39d70] Final|Native|Static|Public|BlueprintCallable 
	// int32_t AddTagToActor(class UAbilitySystemComponent* ASC, int32_t InTagHash, int32_t MarkTagHash);                       // [0xf39920] Final|Native|Static|Public 
	// FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, int32_t TagHash);                          // [0xf397a0] Final|Native|Static|Public|BlueprintCallable 
	// void AddGameplayTag(FGameplayTagContainer& TagContainer, int32_t TagHash);                                               // [0xf396a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// void AddEffectContextTarget(FGameplayEffectContextHandle EffectContext, class AActor* Actor);                            // [0xf39560] Final|Native|Static|Public|BlueprintCallable 
	// bool AddDataTableRowByName_EditorOnly(class UDataTable* DataTable, FName Name, class UStruct* Data);                     // [0x8808e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/KuroGAS.GameplayTagHashData
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000010) align 8 pad: 0x0000
struct FGameplayTagHashData : FTableRowBase
{ 
	int32_t                                            Hash;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/KuroGAS.KuroGameplayParameter
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FKuroGameplayParameter
{ 
	FGameplayTag                                       ParameterTag;                                               // 0x0000   (0x000C)  
	float                                              ParameterValue;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/KuroGAS.KuroGameplayParameterContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FKuroGameplayParameterContainer
{ 
	TArray<FKuroGameplayParameter>                     Parameters;                                                 // 0x0000   (0x0010)  
};

